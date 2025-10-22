cmake_minimum_required(VERSION 3.16)

set(PROJECT_NAME volume-raycasting)
project(${PROJECT_NAME} VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

file(GLOB Src "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/*.h")
file(GLOB Engine "${CMAKE_CURRENT_SOURCE_DIR}/engine/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/engine/*.h")
SOURCE_GROUP("Engine" FILES ${Engine})
file(GLOB Forms "${CMAKE_CURRENT_SOURCE_DIR}/forms/*")
SOURCE_GROUP("Forms" FILES ${Forms})
file(GLOB Shaders "${CMAKE_CURRENT_SOURCE_DIR}/shaders/*")
SOURCE_GROUP("Shaders" FILES ${Shaders})

qt5_add_resources(QRC_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/shaders/resources.qrc)

add_executable(${PROJECT_NAME} ${Src} ${QRC_SOURCES} ${Engine} ${Forms} ${Shaders})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Core)

find_package(VTK REQUIRED)
if (VTK_VERSION VERSION_GREATER "9.00.0")
#                # vtk_module_autoinit is needed
                message("vtk version is ${VTK_VERSION}, module_autoinit")
                vtk_module_autoinit(
                TARGETS ${PROJECT_NAME}
                MODULES ${VTK_LIBRARIES}
                )
endif ()
target_link_libraries(${PROJECT_NAME} PUBLIC ${VTK_LIBRARIES})

set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.${PROJECT_NAME})
set_target_properties(${PROJECT_NAME} PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)