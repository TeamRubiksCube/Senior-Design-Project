/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget_6;
    QGridLayout *cube_back_layout;
    QLabel *cubie_back_1;
    QLabel *cubie_back_6;
    QLabel *cubie_back_7;
    QLabel *cubie_back_8;
    QLabel *cubie_back_4;
    QLabel *cubie_back_2;
    QLabel *cubie_back_9;
    QLabel *cubie_back_3;
    QLabel *cubie_back_5;
    QWidget *gridLayoutWidget_2;
    QGridLayout *cube_left_layout;
    QLabel *cubie_left_1;
    QLabel *cubie_left_6;
    QLabel *cubie_left_7;
    QLabel *cubie_left_8;
    QLabel *cubie_left_4;
    QLabel *cubie_left_2;
    QLabel *cubie_left_9;
    QLabel *cubie_left_3;
    QLabel *cubie_left_5;
    QTextEdit *positionText;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *scanButton;
    QPushButton *generateButton;
    QPushButton *rotateButton;
    QWidget *gridLayoutWidget_4;
    QGridLayout *cube_down_layout;
    QLabel *cubie_down_1;
    QLabel *cubie_down_6;
    QLabel *cubie_down_7;
    QLabel *cubie_down_8;
    QLabel *cubie_down_4;
    QLabel *cubie_down_2;
    QLabel *cubie_down_9;
    QLabel *cubie_down_3;
    QLabel *cubie_down_5;
    QWidget *gridLayoutWidget;
    QGridLayout *cube_top_layout;
    QLabel *cubie_top_2;
    QLabel *cubie_top_1;
    QLabel *cubie_top_5;
    QLabel *cubie_top_8;
    QLabel *cubie_top_7;
    QLabel *cubie_top_4;
    QLabel *cubie_top_3;
    QLabel *cubie_top_9;
    QLabel *cubie_top_6;
    QWidget *gridLayoutWidget_5;
    QGridLayout *cube_right_layout;
    QLabel *cubie_right_1;
    QLabel *cubie_right_6;
    QLabel *cubie_right_7;
    QLabel *cubie_right_8;
    QLabel *cubie_right_4;
    QLabel *cubie_right_2;
    QLabel *cubie_right_9;
    QLabel *cubie_right_3;
    QLabel *cubie_right_5;
    QWidget *gridLayoutWidget_3;
    QGridLayout *cube_center_layout;
    QLabel *cubie_front_1;
    QLabel *cubie_front_6;
    QLabel *cubie_front_7;
    QLabel *cubie_front_8;
    QLabel *cubie_front_4;
    QLabel *cubie_front_2;
    QLabel *cubie_front_9;
    QLabel *cubie_front_3;
    QLabel *cubie_front_5;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *timerLabel;
    QTextEdit *colorText;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButtonLaunchDebugger;
    QLabel *label_4;
    QPushButton *fixButton;
    QSpinBox *faceSpinBox;
    QSpinBox *tileSpinBox;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *colorSpinBox;
    QLabel *label_7;
    QPushButton *inputButton;
    QLabel *label_8;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 663);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget_6 = new QWidget(centralwidget);
        gridLayoutWidget_6->setObjectName(QStringLiteral("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(480, 160, 145, 145));
        cube_back_layout = new QGridLayout(gridLayoutWidget_6);
        cube_back_layout->setObjectName(QStringLiteral("cube_back_layout"));
        cube_back_layout->setContentsMargins(0, 0, 0, 0);
        cubie_back_1 = new QLabel(gridLayoutWidget_6);
        cubie_back_1->setObjectName(QStringLiteral("cubie_back_1"));
        cubie_back_1->setMinimumSize(QSize(43, 43));
        cubie_back_1->setMaximumSize(QSize(43, 43));
        cubie_back_1->setScaledContents(true);

        cube_back_layout->addWidget(cubie_back_1, 0, 0, 1, 1);

        cubie_back_6 = new QLabel(gridLayoutWidget_6);
        cubie_back_6->setObjectName(QStringLiteral("cubie_back_6"));
        cubie_back_6->setMinimumSize(QSize(43, 43));
        cubie_back_6->setMaximumSize(QSize(43, 43));
        cubie_back_6->setScaledContents(true);

        cube_back_layout->addWidget(cubie_back_6, 1, 2, 1, 1);

        cubie_back_7 = new QLabel(gridLayoutWidget_6);
        cubie_back_7->setObjectName(QStringLiteral("cubie_back_7"));
        cubie_back_7->setMinimumSize(QSize(43, 43));
        cubie_back_7->setMaximumSize(QSize(43, 43));
        cubie_back_7->setScaledContents(true);

        cube_back_layout->addWidget(cubie_back_7, 2, 0, 1, 1);

        cubie_back_8 = new QLabel(gridLayoutWidget_6);
        cubie_back_8->setObjectName(QStringLiteral("cubie_back_8"));
        cubie_back_8->setMinimumSize(QSize(43, 43));
        cubie_back_8->setMaximumSize(QSize(43, 43));
        cubie_back_8->setScaledContents(true);

        cube_back_layout->addWidget(cubie_back_8, 2, 1, 1, 1);

        cubie_back_4 = new QLabel(gridLayoutWidget_6);
        cubie_back_4->setObjectName(QStringLiteral("cubie_back_4"));
        cubie_back_4->setMinimumSize(QSize(43, 43));
        cubie_back_4->setMaximumSize(QSize(43, 43));
        cubie_back_4->setScaledContents(true);

        cube_back_layout->addWidget(cubie_back_4, 1, 0, 1, 1);

        cubie_back_2 = new QLabel(gridLayoutWidget_6);
        cubie_back_2->setObjectName(QStringLiteral("cubie_back_2"));
        cubie_back_2->setMinimumSize(QSize(43, 43));
        cubie_back_2->setMaximumSize(QSize(43, 43));
        cubie_back_2->setScaledContents(true);

        cube_back_layout->addWidget(cubie_back_2, 0, 1, 1, 1);

        cubie_back_9 = new QLabel(gridLayoutWidget_6);
        cubie_back_9->setObjectName(QStringLiteral("cubie_back_9"));
        cubie_back_9->setMinimumSize(QSize(43, 43));
        cubie_back_9->setMaximumSize(QSize(43, 43));
        cubie_back_9->setScaledContents(true);

        cube_back_layout->addWidget(cubie_back_9, 2, 2, 1, 1);

        cubie_back_3 = new QLabel(gridLayoutWidget_6);
        cubie_back_3->setObjectName(QStringLiteral("cubie_back_3"));
        cubie_back_3->setMinimumSize(QSize(43, 43));
        cubie_back_3->setMaximumSize(QSize(43, 43));
        cubie_back_3->setScaledContents(true);

        cube_back_layout->addWidget(cubie_back_3, 0, 2, 1, 1);

        cubie_back_5 = new QLabel(gridLayoutWidget_6);
        cubie_back_5->setObjectName(QStringLiteral("cubie_back_5"));
        cubie_back_5->setMinimumSize(QSize(43, 43));
        cubie_back_5->setMaximumSize(QSize(43, 43));
        cubie_back_5->setScaledContents(true);

        cube_back_layout->addWidget(cubie_back_5, 1, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 160, 145, 145));
        cube_left_layout = new QGridLayout(gridLayoutWidget_2);
        cube_left_layout->setObjectName(QStringLiteral("cube_left_layout"));
        cube_left_layout->setContentsMargins(0, 0, 0, 0);
        cubie_left_1 = new QLabel(gridLayoutWidget_2);
        cubie_left_1->setObjectName(QStringLiteral("cubie_left_1"));
        cubie_left_1->setMinimumSize(QSize(43, 43));
        cubie_left_1->setMaximumSize(QSize(43, 43));
        cubie_left_1->setScaledContents(true);

        cube_left_layout->addWidget(cubie_left_1, 0, 0, 1, 1);

        cubie_left_6 = new QLabel(gridLayoutWidget_2);
        cubie_left_6->setObjectName(QStringLiteral("cubie_left_6"));
        cubie_left_6->setMinimumSize(QSize(43, 43));
        cubie_left_6->setMaximumSize(QSize(43, 43));
        cubie_left_6->setScaledContents(true);

        cube_left_layout->addWidget(cubie_left_6, 1, 2, 1, 1);

        cubie_left_7 = new QLabel(gridLayoutWidget_2);
        cubie_left_7->setObjectName(QStringLiteral("cubie_left_7"));
        cubie_left_7->setMinimumSize(QSize(43, 43));
        cubie_left_7->setMaximumSize(QSize(43, 43));
        cubie_left_7->setScaledContents(true);

        cube_left_layout->addWidget(cubie_left_7, 2, 0, 1, 1);

        cubie_left_8 = new QLabel(gridLayoutWidget_2);
        cubie_left_8->setObjectName(QStringLiteral("cubie_left_8"));
        cubie_left_8->setMinimumSize(QSize(43, 43));
        cubie_left_8->setMaximumSize(QSize(43, 43));
        cubie_left_8->setScaledContents(true);

        cube_left_layout->addWidget(cubie_left_8, 2, 1, 1, 1);

        cubie_left_4 = new QLabel(gridLayoutWidget_2);
        cubie_left_4->setObjectName(QStringLiteral("cubie_left_4"));
        cubie_left_4->setMinimumSize(QSize(43, 43));
        cubie_left_4->setMaximumSize(QSize(43, 43));
        cubie_left_4->setScaledContents(true);

        cube_left_layout->addWidget(cubie_left_4, 1, 0, 1, 1);

        cubie_left_2 = new QLabel(gridLayoutWidget_2);
        cubie_left_2->setObjectName(QStringLiteral("cubie_left_2"));
        cubie_left_2->setMinimumSize(QSize(43, 43));
        cubie_left_2->setMaximumSize(QSize(43, 43));
        cubie_left_2->setScaledContents(true);

        cube_left_layout->addWidget(cubie_left_2, 0, 1, 1, 1);

        cubie_left_9 = new QLabel(gridLayoutWidget_2);
        cubie_left_9->setObjectName(QStringLiteral("cubie_left_9"));
        cubie_left_9->setMinimumSize(QSize(43, 43));
        cubie_left_9->setMaximumSize(QSize(43, 43));
        cubie_left_9->setScaledContents(true);

        cube_left_layout->addWidget(cubie_left_9, 2, 2, 1, 1);

        cubie_left_3 = new QLabel(gridLayoutWidget_2);
        cubie_left_3->setObjectName(QStringLiteral("cubie_left_3"));
        cubie_left_3->setMinimumSize(QSize(43, 43));
        cubie_left_3->setMaximumSize(QSize(43, 43));
        cubie_left_3->setScaledContents(true);

        cube_left_layout->addWidget(cubie_left_3, 0, 2, 1, 1);

        cubie_left_5 = new QLabel(gridLayoutWidget_2);
        cubie_left_5->setObjectName(QStringLiteral("cubie_left_5"));
        cubie_left_5->setMinimumSize(QSize(43, 43));
        cubie_left_5->setMaximumSize(QSize(43, 43));
        cubie_left_5->setScaledContents(true);

        cube_left_layout->addWidget(cubie_left_5, 1, 1, 1, 1);

        positionText = new QTextEdit(centralwidget);
        positionText->setObjectName(QStringLiteral("positionText"));
        positionText->setGeometry(QRect(430, 330, 331, 71));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 490, 295, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        scanButton = new QPushButton(layoutWidget);
        scanButton->setObjectName(QStringLiteral("scanButton"));

        horizontalLayout->addWidget(scanButton);

        generateButton = new QPushButton(layoutWidget);
        generateButton->setObjectName(QStringLiteral("generateButton"));

        horizontalLayout->addWidget(generateButton);

        rotateButton = new QPushButton(layoutWidget);
        rotateButton->setObjectName(QStringLiteral("rotateButton"));

        horizontalLayout->addWidget(rotateButton);

        gridLayoutWidget_4 = new QWidget(centralwidget);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(180, 310, 145, 145));
        cube_down_layout = new QGridLayout(gridLayoutWidget_4);
        cube_down_layout->setObjectName(QStringLiteral("cube_down_layout"));
        cube_down_layout->setContentsMargins(0, 0, 0, 0);
        cubie_down_1 = new QLabel(gridLayoutWidget_4);
        cubie_down_1->setObjectName(QStringLiteral("cubie_down_1"));
        cubie_down_1->setMinimumSize(QSize(43, 43));
        cubie_down_1->setMaximumSize(QSize(43, 43));
        cubie_down_1->setScaledContents(true);

        cube_down_layout->addWidget(cubie_down_1, 0, 0, 1, 1);

        cubie_down_6 = new QLabel(gridLayoutWidget_4);
        cubie_down_6->setObjectName(QStringLiteral("cubie_down_6"));
        cubie_down_6->setMinimumSize(QSize(43, 43));
        cubie_down_6->setMaximumSize(QSize(43, 43));
        cubie_down_6->setScaledContents(true);

        cube_down_layout->addWidget(cubie_down_6, 1, 2, 1, 1);

        cubie_down_7 = new QLabel(gridLayoutWidget_4);
        cubie_down_7->setObjectName(QStringLiteral("cubie_down_7"));
        cubie_down_7->setMinimumSize(QSize(43, 43));
        cubie_down_7->setMaximumSize(QSize(43, 43));
        cubie_down_7->setScaledContents(true);

        cube_down_layout->addWidget(cubie_down_7, 2, 0, 1, 1);

        cubie_down_8 = new QLabel(gridLayoutWidget_4);
        cubie_down_8->setObjectName(QStringLiteral("cubie_down_8"));
        cubie_down_8->setMinimumSize(QSize(43, 43));
        cubie_down_8->setMaximumSize(QSize(43, 43));
        cubie_down_8->setScaledContents(true);

        cube_down_layout->addWidget(cubie_down_8, 2, 1, 1, 1);

        cubie_down_4 = new QLabel(gridLayoutWidget_4);
        cubie_down_4->setObjectName(QStringLiteral("cubie_down_4"));
        cubie_down_4->setMinimumSize(QSize(43, 43));
        cubie_down_4->setMaximumSize(QSize(43, 43));
        cubie_down_4->setScaledContents(true);

        cube_down_layout->addWidget(cubie_down_4, 1, 0, 1, 1);

        cubie_down_2 = new QLabel(gridLayoutWidget_4);
        cubie_down_2->setObjectName(QStringLiteral("cubie_down_2"));
        cubie_down_2->setMinimumSize(QSize(43, 43));
        cubie_down_2->setMaximumSize(QSize(43, 43));
        cubie_down_2->setScaledContents(true);

        cube_down_layout->addWidget(cubie_down_2, 0, 1, 1, 1);

        cubie_down_9 = new QLabel(gridLayoutWidget_4);
        cubie_down_9->setObjectName(QStringLiteral("cubie_down_9"));
        cubie_down_9->setMinimumSize(QSize(43, 43));
        cubie_down_9->setMaximumSize(QSize(43, 43));
        cubie_down_9->setScaledContents(true);

        cube_down_layout->addWidget(cubie_down_9, 2, 2, 1, 1);

        cubie_down_3 = new QLabel(gridLayoutWidget_4);
        cubie_down_3->setObjectName(QStringLiteral("cubie_down_3"));
        cubie_down_3->setMinimumSize(QSize(43, 43));
        cubie_down_3->setMaximumSize(QSize(43, 43));
        cubie_down_3->setScaledContents(true);

        cube_down_layout->addWidget(cubie_down_3, 0, 2, 1, 1);

        cubie_down_5 = new QLabel(gridLayoutWidget_4);
        cubie_down_5->setObjectName(QStringLiteral("cubie_down_5"));
        cubie_down_5->setMinimumSize(QSize(43, 43));
        cubie_down_5->setMaximumSize(QSize(43, 43));
        cubie_down_5->setScaledContents(true);

        cube_down_layout->addWidget(cubie_down_5, 1, 1, 1, 1);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(180, 10, 141, 141));
        gridLayoutWidget->setMinimumSize(QSize(43, 43));
        gridLayoutWidget->setMaximumSize(QSize(141, 141));
        cube_top_layout = new QGridLayout(gridLayoutWidget);
        cube_top_layout->setObjectName(QStringLiteral("cube_top_layout"));
        cube_top_layout->setContentsMargins(0, 0, 0, 0);
        cubie_top_2 = new QLabel(gridLayoutWidget);
        cubie_top_2->setObjectName(QStringLiteral("cubie_top_2"));
        cubie_top_2->setMinimumSize(QSize(43, 43));
        cubie_top_2->setMaximumSize(QSize(43, 43));
        cubie_top_2->setScaledContents(true);

        cube_top_layout->addWidget(cubie_top_2, 0, 1, 1, 1);

        cubie_top_1 = new QLabel(gridLayoutWidget);
        cubie_top_1->setObjectName(QStringLiteral("cubie_top_1"));
        cubie_top_1->setMinimumSize(QSize(43, 43));
        cubie_top_1->setMaximumSize(QSize(43, 43));
        cubie_top_1->setScaledContents(true);

        cube_top_layout->addWidget(cubie_top_1, 0, 0, 1, 1);

        cubie_top_5 = new QLabel(gridLayoutWidget);
        cubie_top_5->setObjectName(QStringLiteral("cubie_top_5"));
        cubie_top_5->setMinimumSize(QSize(43, 43));
        cubie_top_5->setMaximumSize(QSize(43, 43));
        cubie_top_5->setScaledContents(true);

        cube_top_layout->addWidget(cubie_top_5, 1, 1, 1, 1);

        cubie_top_8 = new QLabel(gridLayoutWidget);
        cubie_top_8->setObjectName(QStringLiteral("cubie_top_8"));
        cubie_top_8->setMinimumSize(QSize(43, 43));
        cubie_top_8->setMaximumSize(QSize(43, 43));
        cubie_top_8->setScaledContents(true);

        cube_top_layout->addWidget(cubie_top_8, 2, 1, 1, 1);

        cubie_top_7 = new QLabel(gridLayoutWidget);
        cubie_top_7->setObjectName(QStringLiteral("cubie_top_7"));
        cubie_top_7->setMinimumSize(QSize(43, 43));
        cubie_top_7->setMaximumSize(QSize(43, 43));
        cubie_top_7->setScaledContents(true);

        cube_top_layout->addWidget(cubie_top_7, 2, 0, 1, 1);

        cubie_top_4 = new QLabel(gridLayoutWidget);
        cubie_top_4->setObjectName(QStringLiteral("cubie_top_4"));
        cubie_top_4->setMinimumSize(QSize(43, 43));
        cubie_top_4->setMaximumSize(QSize(43, 43));
        cubie_top_4->setScaledContents(true);

        cube_top_layout->addWidget(cubie_top_4, 1, 0, 1, 1);

        cubie_top_3 = new QLabel(gridLayoutWidget);
        cubie_top_3->setObjectName(QStringLiteral("cubie_top_3"));
        cubie_top_3->setMinimumSize(QSize(43, 43));
        cubie_top_3->setMaximumSize(QSize(43, 43));
        cubie_top_3->setScaledContents(true);

        cube_top_layout->addWidget(cubie_top_3, 0, 2, 1, 1);

        cubie_top_9 = new QLabel(gridLayoutWidget);
        cubie_top_9->setObjectName(QStringLiteral("cubie_top_9"));
        cubie_top_9->setMinimumSize(QSize(43, 43));
        cubie_top_9->setMaximumSize(QSize(43, 43));
        cubie_top_9->setScaledContents(true);

        cube_top_layout->addWidget(cubie_top_9, 2, 2, 1, 1);

        cubie_top_6 = new QLabel(gridLayoutWidget);
        cubie_top_6->setObjectName(QStringLiteral("cubie_top_6"));
        cubie_top_6->setMinimumSize(QSize(43, 43));
        cubie_top_6->setMaximumSize(QSize(43, 43));
        cubie_top_6->setScaledContents(true);

        cube_top_layout->addWidget(cubie_top_6, 1, 2, 1, 1);

        gridLayoutWidget_5 = new QWidget(centralwidget);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(330, 160, 143, 143));
        cube_right_layout = new QGridLayout(gridLayoutWidget_5);
        cube_right_layout->setObjectName(QStringLiteral("cube_right_layout"));
        cube_right_layout->setContentsMargins(0, 0, 0, 0);
        cubie_right_1 = new QLabel(gridLayoutWidget_5);
        cubie_right_1->setObjectName(QStringLiteral("cubie_right_1"));
        cubie_right_1->setMinimumSize(QSize(43, 43));
        cubie_right_1->setMaximumSize(QSize(43, 43));
        cubie_right_1->setScaledContents(true);

        cube_right_layout->addWidget(cubie_right_1, 0, 0, 1, 1);

        cubie_right_6 = new QLabel(gridLayoutWidget_5);
        cubie_right_6->setObjectName(QStringLiteral("cubie_right_6"));
        cubie_right_6->setMinimumSize(QSize(43, 43));
        cubie_right_6->setMaximumSize(QSize(43, 43));
        cubie_right_6->setScaledContents(true);

        cube_right_layout->addWidget(cubie_right_6, 1, 2, 1, 1);

        cubie_right_7 = new QLabel(gridLayoutWidget_5);
        cubie_right_7->setObjectName(QStringLiteral("cubie_right_7"));
        cubie_right_7->setMinimumSize(QSize(43, 43));
        cubie_right_7->setMaximumSize(QSize(43, 43));
        cubie_right_7->setScaledContents(true);

        cube_right_layout->addWidget(cubie_right_7, 2, 0, 1, 1);

        cubie_right_8 = new QLabel(gridLayoutWidget_5);
        cubie_right_8->setObjectName(QStringLiteral("cubie_right_8"));
        cubie_right_8->setMinimumSize(QSize(43, 43));
        cubie_right_8->setMaximumSize(QSize(43, 43));
        cubie_right_8->setScaledContents(true);

        cube_right_layout->addWidget(cubie_right_8, 2, 1, 1, 1);

        cubie_right_4 = new QLabel(gridLayoutWidget_5);
        cubie_right_4->setObjectName(QStringLiteral("cubie_right_4"));
        cubie_right_4->setMinimumSize(QSize(43, 43));
        cubie_right_4->setMaximumSize(QSize(43, 43));
        cubie_right_4->setScaledContents(true);

        cube_right_layout->addWidget(cubie_right_4, 1, 0, 1, 1);

        cubie_right_2 = new QLabel(gridLayoutWidget_5);
        cubie_right_2->setObjectName(QStringLiteral("cubie_right_2"));
        cubie_right_2->setMinimumSize(QSize(43, 43));
        cubie_right_2->setMaximumSize(QSize(43, 43));
        cubie_right_2->setScaledContents(true);

        cube_right_layout->addWidget(cubie_right_2, 0, 1, 1, 1);

        cubie_right_9 = new QLabel(gridLayoutWidget_5);
        cubie_right_9->setObjectName(QStringLiteral("cubie_right_9"));
        cubie_right_9->setMinimumSize(QSize(43, 43));
        cubie_right_9->setMaximumSize(QSize(43, 43));
        cubie_right_9->setScaledContents(true);

        cube_right_layout->addWidget(cubie_right_9, 2, 2, 1, 1);

        cubie_right_3 = new QLabel(gridLayoutWidget_5);
        cubie_right_3->setObjectName(QStringLiteral("cubie_right_3"));
        cubie_right_3->setMinimumSize(QSize(43, 43));
        cubie_right_3->setMaximumSize(QSize(43, 43));
        cubie_right_3->setScaledContents(true);

        cube_right_layout->addWidget(cubie_right_3, 0, 2, 1, 1);

        cubie_right_5 = new QLabel(gridLayoutWidget_5);
        cubie_right_5->setObjectName(QStringLiteral("cubie_right_5"));
        cubie_right_5->setMinimumSize(QSize(43, 43));
        cubie_right_5->setMaximumSize(QSize(43, 43));
        cubie_right_5->setScaledContents(true);

        cube_right_layout->addWidget(cubie_right_5, 1, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(180, 160, 145, 145));
        cube_center_layout = new QGridLayout(gridLayoutWidget_3);
        cube_center_layout->setObjectName(QStringLiteral("cube_center_layout"));
        cube_center_layout->setContentsMargins(0, 0, 0, 0);
        cubie_front_1 = new QLabel(gridLayoutWidget_3);
        cubie_front_1->setObjectName(QStringLiteral("cubie_front_1"));
        cubie_front_1->setMinimumSize(QSize(43, 43));
        cubie_front_1->setMaximumSize(QSize(43, 43));
        cubie_front_1->setScaledContents(true);

        cube_center_layout->addWidget(cubie_front_1, 0, 0, 1, 1);

        cubie_front_6 = new QLabel(gridLayoutWidget_3);
        cubie_front_6->setObjectName(QStringLiteral("cubie_front_6"));
        cubie_front_6->setMinimumSize(QSize(43, 43));
        cubie_front_6->setMaximumSize(QSize(43, 43));
        cubie_front_6->setScaledContents(true);

        cube_center_layout->addWidget(cubie_front_6, 1, 2, 1, 1);

        cubie_front_7 = new QLabel(gridLayoutWidget_3);
        cubie_front_7->setObjectName(QStringLiteral("cubie_front_7"));
        cubie_front_7->setMinimumSize(QSize(43, 43));
        cubie_front_7->setMaximumSize(QSize(43, 43));
        cubie_front_7->setScaledContents(true);

        cube_center_layout->addWidget(cubie_front_7, 2, 0, 1, 1);

        cubie_front_8 = new QLabel(gridLayoutWidget_3);
        cubie_front_8->setObjectName(QStringLiteral("cubie_front_8"));
        cubie_front_8->setMinimumSize(QSize(43, 43));
        cubie_front_8->setMaximumSize(QSize(43, 43));
        cubie_front_8->setScaledContents(true);

        cube_center_layout->addWidget(cubie_front_8, 2, 1, 1, 1);

        cubie_front_4 = new QLabel(gridLayoutWidget_3);
        cubie_front_4->setObjectName(QStringLiteral("cubie_front_4"));
        cubie_front_4->setMinimumSize(QSize(43, 43));
        cubie_front_4->setMaximumSize(QSize(43, 43));
        cubie_front_4->setScaledContents(true);

        cube_center_layout->addWidget(cubie_front_4, 1, 0, 1, 1);

        cubie_front_2 = new QLabel(gridLayoutWidget_3);
        cubie_front_2->setObjectName(QStringLiteral("cubie_front_2"));
        cubie_front_2->setMinimumSize(QSize(43, 43));
        cubie_front_2->setMaximumSize(QSize(43, 43));
        cubie_front_2->setScaledContents(true);

        cube_center_layout->addWidget(cubie_front_2, 0, 1, 1, 1);

        cubie_front_9 = new QLabel(gridLayoutWidget_3);
        cubie_front_9->setObjectName(QStringLiteral("cubie_front_9"));
        cubie_front_9->setMinimumSize(QSize(43, 43));
        cubie_front_9->setMaximumSize(QSize(43, 43));
        cubie_front_9->setScaledContents(true);

        cube_center_layout->addWidget(cubie_front_9, 2, 2, 1, 1);

        cubie_front_3 = new QLabel(gridLayoutWidget_3);
        cubie_front_3->setObjectName(QStringLiteral("cubie_front_3"));
        cubie_front_3->setMinimumSize(QSize(43, 43));
        cubie_front_3->setMaximumSize(QSize(43, 43));
        cubie_front_3->setScaledContents(true);

        cube_center_layout->addWidget(cubie_front_3, 0, 2, 1, 1);

        cubie_front_5 = new QLabel(gridLayoutWidget_3);
        cubie_front_5->setObjectName(QStringLiteral("cubie_front_5"));
        cubie_front_5->setMinimumSize(QSize(43, 43));
        cubie_front_5->setMaximumSize(QSize(43, 43));
        cubie_front_5->setScaledContents(true);

        cube_center_layout->addWidget(cubie_front_5, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(410, 40, 295, 59));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        timerLabel = new QLabel(layoutWidget1);
        timerLabel->setObjectName(QStringLiteral("timerLabel"));

        horizontalLayout_2->addWidget(timerLabel);

        colorText = new QTextEdit(centralwidget);
        colorText->setObjectName(QStringLiteral("colorText"));
        colorText->setGeometry(QRect(430, 410, 331, 75));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 430, 81, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 360, 81, 21));
        pushButtonLaunchDebugger = new QPushButton(centralwidget);
        pushButtonLaunchDebugger->setObjectName(QStringLiteral("pushButtonLaunchDebugger"));
        pushButtonLaunchDebugger->setGeometry(QRect(700, 510, 93, 28));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(420, 520, 66, 21));
        fixButton = new QPushButton(centralwidget);
        fixButton->setObjectName(QStringLiteral("fixButton"));
        fixButton->setGeometry(QRect(520, 560, 93, 28));
        faceSpinBox = new QSpinBox(centralwidget);
        faceSpinBox->setObjectName(QStringLiteral("faceSpinBox"));
        faceSpinBox->setGeometry(QRect(490, 520, 51, 31));
        faceSpinBox->setMaximum(5);
        tileSpinBox = new QSpinBox(centralwidget);
        tileSpinBox->setObjectName(QStringLiteral("tileSpinBox"));
        tileSpinBox->setGeometry(QRect(550, 520, 51, 31));
        tileSpinBox->setMaximum(8);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(500, 500, 41, 21));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(560, 500, 41, 21));
        colorSpinBox = new QSpinBox(centralwidget);
        colorSpinBox->setObjectName(QStringLiteral("colorSpinBox"));
        colorSpinBox->setGeometry(QRect(610, 520, 51, 31));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(620, 500, 41, 21));
        inputButton = new QPushButton(centralwidget);
        inputButton->setObjectName(QStringLiteral("inputButton"));
        inputButton->setGeometry(QRect(120, 530, 98, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(340, 480, 71, 111));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 570, 151, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        cubie_back_1->setText(QApplication::translate("MainWindow", "B1", 0));
        cubie_back_6->setText(QApplication::translate("MainWindow", "B6", 0));
        cubie_back_7->setText(QApplication::translate("MainWindow", "B7", 0));
        cubie_back_8->setText(QApplication::translate("MainWindow", "B8", 0));
        cubie_back_4->setText(QApplication::translate("MainWindow", "B4", 0));
        cubie_back_2->setText(QApplication::translate("MainWindow", "B2", 0));
        cubie_back_9->setText(QApplication::translate("MainWindow", "B9", 0));
        cubie_back_3->setText(QApplication::translate("MainWindow", "B3", 0));
        cubie_back_5->setText(QApplication::translate("MainWindow", "B5", 0));
        cubie_left_1->setText(QApplication::translate("MainWindow", "L1", 0));
        cubie_left_6->setText(QApplication::translate("MainWindow", "L6", 0));
        cubie_left_7->setText(QApplication::translate("MainWindow", "L7", 0));
        cubie_left_8->setText(QApplication::translate("MainWindow", "L8", 0));
        cubie_left_4->setText(QApplication::translate("MainWindow", "L4", 0));
        cubie_left_2->setText(QApplication::translate("MainWindow", "L2", 0));
        cubie_left_9->setText(QApplication::translate("MainWindow", "L9", 0));
        cubie_left_3->setText(QApplication::translate("MainWindow", "L3", 0));
        cubie_left_5->setText(QApplication::translate("MainWindow", "L5", 0));
        scanButton->setText(QApplication::translate("MainWindow", "Scan", 0));
        generateButton->setText(QApplication::translate("MainWindow", "Generate", 0));
        rotateButton->setText(QApplication::translate("MainWindow", "Rotate", 0));
        cubie_down_1->setText(QApplication::translate("MainWindow", "D1", 0));
        cubie_down_6->setText(QApplication::translate("MainWindow", "D6", 0));
        cubie_down_7->setText(QApplication::translate("MainWindow", "D7", 0));
        cubie_down_8->setText(QApplication::translate("MainWindow", "D8", 0));
        cubie_down_4->setText(QApplication::translate("MainWindow", "D4", 0));
        cubie_down_2->setText(QApplication::translate("MainWindow", "D2", 0));
        cubie_down_9->setText(QApplication::translate("MainWindow", "D9", 0));
        cubie_down_3->setText(QApplication::translate("MainWindow", "D3", 0));
        cubie_down_5->setText(QApplication::translate("MainWindow", "D5", 0));
        cubie_top_2->setText(QApplication::translate("MainWindow", "U2", 0));
        cubie_top_1->setText(QApplication::translate("MainWindow", "U1", 0));
        cubie_top_5->setText(QApplication::translate("MainWindow", "U5", 0));
        cubie_top_8->setText(QApplication::translate("MainWindow", "U8", 0));
        cubie_top_7->setText(QApplication::translate("MainWindow", "U7", 0));
        cubie_top_4->setText(QApplication::translate("MainWindow", "U4", 0));
        cubie_top_3->setText(QApplication::translate("MainWindow", "U3", 0));
        cubie_top_9->setText(QApplication::translate("MainWindow", "U9", 0));
        cubie_top_6->setText(QApplication::translate("MainWindow", "U6", 0));
        cubie_right_1->setText(QApplication::translate("MainWindow", "R1", 0));
        cubie_right_6->setText(QApplication::translate("MainWindow", "R6", 0));
        cubie_right_7->setText(QApplication::translate("MainWindow", "R7", 0));
        cubie_right_8->setText(QApplication::translate("MainWindow", "R8", 0));
        cubie_right_4->setText(QApplication::translate("MainWindow", "R4", 0));
        cubie_right_2->setText(QApplication::translate("MainWindow", "R2", 0));
        cubie_right_9->setText(QApplication::translate("MainWindow", "R9", 0));
        cubie_right_3->setText(QApplication::translate("MainWindow", "R3", 0));
        cubie_right_5->setText(QApplication::translate("MainWindow", "R5", 0));
        cubie_front_1->setText(QApplication::translate("MainWindow", "F1", 0));
        cubie_front_6->setText(QApplication::translate("MainWindow", "F6", 0));
        cubie_front_7->setText(QApplication::translate("MainWindow", "F7", 0));
        cubie_front_8->setText(QApplication::translate("MainWindow", "F8", 0));
        cubie_front_4->setText(QApplication::translate("MainWindow", "F4", 0));
        cubie_front_2->setText(QApplication::translate("MainWindow", "F2", 0));
        cubie_front_9->setText(QApplication::translate("MainWindow", "F9", 0));
        cubie_front_3->setText(QApplication::translate("MainWindow", "F3", 0));
        cubie_front_5->setText(QApplication::translate("MainWindow", "F5", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:600;\">Timer: </span></p></body></html>", 0));
        timerLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:600;\">    0.00 </span></p></body></html>", 0));
        label_2->setText(QApplication::translate("MainWindow", "Color Input", 0));
        label_3->setText(QApplication::translate("MainWindow", "Output", 0));
        pushButtonLaunchDebugger->setText(QApplication::translate("MainWindow", "Debug Mode", 0));
        label_4->setText(QApplication::translate("MainWindow", "Color Fix", 0));
        fixButton->setText(QApplication::translate("MainWindow", "Fix", 0));
        label_5->setText(QApplication::translate("MainWindow", "Face", 0));
        label_6->setText(QApplication::translate("MainWindow", "Tile", 0));
        label_7->setText(QApplication::translate("MainWindow", "Color", 0));
        inputButton->setText(QApplication::translate("MainWindow", "Manual Input", 0));
        label_8->setText(QApplication::translate("MainWindow", "0 - Whiter\n"
"1 - Red\n"
"2 - Green\n"
"3 - Yellow\n"
"4 - Orange\n"
"5 - Blue", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Do Not Push This Button", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
