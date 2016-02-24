/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEditReceived;
    QLabel *label_5;
    QLabel *label_6;
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBoxStepper;
    QSpinBox *spinBoxPos;
    QPushButton *pushButtonStepDefer;
    QPushButton *pushButtonStepImm;
    QPushButton *pushButtonExeDef;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_4;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *label_2;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBoxAccel;
    QSpinBox *spinBoxVelo;
    QPushButton *pushButtonSetParam;
    QCheckBox *checkBoxBiDirectionalMode;
    QGroupBox *groupBox_4;
    QPushButton *pushButtonInterSolution;
    QLineEdit *lineEditSolution;
    QPushButton *pushButtonRandSol;
    QSpinBox *spinBoxRandSteps;
    QLabel *label_9;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(749, 290);
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 220, 291, 21));
        lineEdit->setReadOnly(true);
        lineEditReceived = new QLineEdit(Dialog);
        lineEditReceived->setObjectName(QStringLiteral("lineEditReceived"));
        lineEditReceived->setGeometry(QRect(20, 260, 291, 21));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 199, 66, 20));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 240, 66, 20));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 221, 191));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 50, 201, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        spinBoxStepper = new QSpinBox(layoutWidget_2);
        spinBoxStepper->setObjectName(QStringLiteral("spinBoxStepper"));
        spinBoxStepper->setMinimum(1);
        spinBoxStepper->setMaximum(6);

        horizontalLayout->addWidget(spinBoxStepper);

        spinBoxPos = new QSpinBox(layoutWidget_2);
        spinBoxPos->setObjectName(QStringLiteral("spinBoxPos"));
        spinBoxPos->setMinimum(-1000);
        spinBoxPos->setMaximum(100);

        horizontalLayout->addWidget(spinBoxPos);

        pushButtonStepDefer = new QPushButton(groupBox);
        pushButtonStepDefer->setObjectName(QStringLiteral("pushButtonStepDefer"));
        pushButtonStepDefer->setGeometry(QRect(10, 120, 201, 31));
        pushButtonStepImm = new QPushButton(groupBox);
        pushButtonStepImm->setObjectName(QStringLiteral("pushButtonStepImm"));
        pushButtonStepImm->setGeometry(QRect(10, 90, 201, 31));
        pushButtonExeDef = new QPushButton(groupBox);
        pushButtonExeDef->setObjectName(QStringLiteral("pushButtonExeDef"));
        pushButtonExeDef->setGeometry(QRect(10, 150, 201, 31));
        layoutWidget_3 = new QWidget(groupBox);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 20, 201, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(240, 10, 221, 191));
        layoutWidget_5 = new QWidget(groupBox_3);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 20, 201, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        label_2 = new QLabel(layoutWidget_5);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        layoutWidget_4 = new QWidget(groupBox_3);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 50, 201, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        spinBoxAccel = new QSpinBox(layoutWidget_4);
        spinBoxAccel->setObjectName(QStringLiteral("spinBoxAccel"));
        spinBoxAccel->setMaximum(200000);
        spinBoxAccel->setValue(80000);

        horizontalLayout_3->addWidget(spinBoxAccel);

        spinBoxVelo = new QSpinBox(layoutWidget_4);
        spinBoxVelo->setObjectName(QStringLiteral("spinBoxVelo"));
        spinBoxVelo->setMaximum(200000);
        spinBoxVelo->setValue(70000);

        horizontalLayout_3->addWidget(spinBoxVelo);

        pushButtonSetParam = new QPushButton(groupBox_3);
        pushButtonSetParam->setObjectName(QStringLiteral("pushButtonSetParam"));
        pushButtonSetParam->setGeometry(QRect(10, 90, 201, 31));
        checkBoxBiDirectionalMode = new QCheckBox(groupBox_3);
        checkBoxBiDirectionalMode->setObjectName(QStringLiteral("checkBoxBiDirectionalMode"));
        checkBoxBiDirectionalMode->setGeometry(QRect(10, 130, 151, 20));
        groupBox_4 = new QGroupBox(Dialog);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(470, 10, 271, 191));
        pushButtonInterSolution = new QPushButton(groupBox_4);
        pushButtonInterSolution->setObjectName(QStringLiteral("pushButtonInterSolution"));
        pushButtonInterSolution->setGeometry(QRect(10, 50, 221, 31));
        lineEditSolution = new QLineEdit(groupBox_4);
        lineEditSolution->setObjectName(QStringLiteral("lineEditSolution"));
        lineEditSolution->setGeometry(QRect(10, 20, 251, 21));
        lineEditSolution->setReadOnly(false);
        pushButtonRandSol = new QPushButton(groupBox_4);
        pushButtonRandSol->setObjectName(QStringLiteral("pushButtonRandSol"));
        pushButtonRandSol->setGeometry(QRect(10, 80, 221, 31));
        spinBoxRandSteps = new QSpinBox(groupBox_4);
        spinBoxRandSteps->setObjectName(QStringLiteral("spinBoxRandSteps"));
        spinBoxRandSteps->setGeometry(QRect(10, 120, 66, 21));
        spinBoxRandSteps->setMinimum(-1000);
        spinBoxRandSteps->setMaximum(1000);
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(80, 110, 96, 29));
        groupBox_3->raise();
        groupBox->raise();
        lineEdit->raise();
        lineEditReceived->raise();
        label_5->raise();
        label_6->raise();
        groupBox_4->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label_5->setText(QApplication::translate("Dialog", "Sent", 0));
        label_6->setText(QApplication::translate("Dialog", "Received", 0));
        groupBox->setTitle(QApplication::translate("Dialog", "Single Side Control", 0));
        pushButtonStepDefer->setText(QApplication::translate("Dialog", "send step deferred packet", 0));
        pushButtonStepImm->setText(QApplication::translate("Dialog", "send step immediate packet", 0));
        pushButtonExeDef->setText(QApplication::translate("Dialog", "execute deferred packets", 0));
        label->setText(QApplication::translate("Dialog", "Stepper", 0));
        label_4->setText(QApplication::translate("Dialog", "Position", 0));
        groupBox_3->setTitle(QApplication::translate("Dialog", "Driving Parameters", 0));
        label_3->setText(QApplication::translate("Dialog", "Acceleration", 0));
        label_2->setText(QApplication::translate("Dialog", "Max Velocity", 0));
        pushButtonSetParam->setText(QApplication::translate("Dialog", "Set Parameters", 0));
        checkBoxBiDirectionalMode->setText(QApplication::translate("Dialog", "Bidirectional Rotation", 0));
        groupBox_4->setTitle(QApplication::translate("Dialog", "Sequence Testing", 0));
        pushButtonInterSolution->setText(QApplication::translate("Dialog", "Interpret Solution", 0));
        pushButtonRandSol->setText(QApplication::translate("Dialog", "Generate", 0));
        label_9->setText(QApplication::translate("Dialog", "Steps to Create", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
