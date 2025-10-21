/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../engine/raycastcanvas.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    RayCastCanvas *canvas;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents_2;
    QFormLayout *formLayout_3;
    QPushButton *loadVolume;
    QLabel *label_3;
    QComboBox *mode;
    QLabel *label;
    QDoubleSpinBox *stepLength;
    QLabel *threshold_label;
    QPushButton *background;
    QFormLayout *formLayout_2;
    QSlider *threshold_slider;
    QDoubleSpinBox *threshold_spinbox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(884, 626);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        canvas = new RayCastCanvas(centralWidget);
        canvas->setObjectName(QString::fromUtf8("canvas"));
        canvas->setMouseTracking(false);

        verticalLayout->addWidget(canvas);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setEnabled(true);
        dockWidget->setMinimumSize(QSize(200, 268));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        formLayout_3 = new QFormLayout(dockWidgetContents_2);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        loadVolume = new QPushButton(dockWidgetContents_2);
        loadVolume->setObjectName(QString::fromUtf8("loadVolume"));

        formLayout_3->setWidget(0, QFormLayout::SpanningRole, loadVolume);

        label_3 = new QLabel(dockWidgetContents_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_3);

        mode = new QComboBox(dockWidgetContents_2);
        mode->setObjectName(QString::fromUtf8("mode"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, mode);

        label = new QLabel(dockWidgetContents_2);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label);

        stepLength = new QDoubleSpinBox(dockWidgetContents_2);
        stepLength->setObjectName(QString::fromUtf8("stepLength"));
        stepLength->setDecimals(3);
        stepLength->setMinimum(0.001000000000000);
        stepLength->setMaximum(0.500000000000000);
        stepLength->setSingleStep(0.001000000000000);
        stepLength->setValue(0.010000000000000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, stepLength);

        threshold_label = new QLabel(dockWidgetContents_2);
        threshold_label->setObjectName(QString::fromUtf8("threshold_label"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, threshold_label);

        background = new QPushButton(dockWidgetContents_2);
        background->setObjectName(QString::fromUtf8("background"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(background->sizePolicy().hasHeightForWidth());
        background->setSizePolicy(sizePolicy);
        background->setAutoFillBackground(false);

        formLayout_3->setWidget(5, QFormLayout::SpanningRole, background);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));

        formLayout_3->setLayout(6, QFormLayout::LabelRole, formLayout_2);

        threshold_slider = new QSlider(dockWidgetContents_2);
        threshold_slider->setObjectName(QString::fromUtf8("threshold_slider"));
        threshold_slider->setMaximum(100);
        threshold_slider->setValue(50);
        threshold_slider->setOrientation(Qt::Horizontal);

        formLayout_3->setWidget(4, QFormLayout::SpanningRole, threshold_slider);

        threshold_spinbox = new QDoubleSpinBox(dockWidgetContents_2);
        threshold_spinbox->setObjectName(QString::fromUtf8("threshold_spinbox"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, threshold_spinbox);

        dockWidget->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockWidget);

        retranslateUi(MainWindow);

        mode->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Volume visualiser", nullptr));
        dockWidget->setWindowTitle(QCoreApplication::translate("MainWindow", "Co&ntrols", nullptr));
        loadVolume->setText(QCoreApplication::translate("MainWindow", "Load volume", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Mode:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Step length:", nullptr));
        threshold_label->setText(QCoreApplication::translate("MainWindow", "Threshold:", nullptr));
        background->setText(QCoreApplication::translate("MainWindow", "Background colour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
