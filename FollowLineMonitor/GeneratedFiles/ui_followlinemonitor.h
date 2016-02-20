/********************************************************************************
** Form generated from reading UI file 'followlinemonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLLOWLINEMONITOR_H
#define UI_FOLLOWLINEMONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_FollowLineMonitorClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QwtPlot *qwtPlot;
    QVBoxLayout *verticalLayout_2;
    QSlider *verticalSlider;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QTextBrowser *Rectext;
    QCheckBox *checkBoxPlot;
    QCheckBox *checkBoxHexShow;
    QPushButton *clearRecButton;
    QLabel *label_6;
    QTextEdit *Sendtext;
    QCheckBox *checkBoxHexSend;
    QPushButton *clearSendButton;
    QPushButton *SendButton;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *comboBoxNum;
    QLabel *label_2;
    QComboBox *comboBoxBps;
    QLabel *label_3;
    QComboBox *comboBoxBits;
    QLabel *label_7;
    QComboBox *comboBoxParity;
    QLabel *label_4;
    QComboBox *comboBoxStopBit;
    QPushButton *COMButton;
    QLabel *label_8;

    void setupUi(QMainWindow *FollowLineMonitorClass)
    {
        if (FollowLineMonitorClass->objectName().isEmpty())
            FollowLineMonitorClass->setObjectName(QStringLiteral("FollowLineMonitorClass"));
        FollowLineMonitorClass->resize(613, 515);
        centralWidget = new QWidget(FollowLineMonitorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        qwtPlot = new QwtPlot(groupBox);
        qwtPlot->setObjectName(QStringLiteral("qwtPlot"));
        qwtPlot->setMinimumSize(QSize(0, 240));
        qwtPlot->setAutoReplot(true);

        horizontalLayout->addWidget(qwtPlot);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSlider = new QSlider(groupBox);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalSlider->sizePolicy().hasHeightForWidth());
        verticalSlider->setSizePolicy(sizePolicy);
        verticalSlider->setMaximumSize(QSize(31, 16777215));
        verticalSlider->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(verticalSlider);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMaximumSize(QSize(31, 16777215));
        lineEdit->setMouseTracking(false);
        lineEdit->setFrame(true);
        lineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        Rectext = new QTextBrowser(groupBox_3);
        Rectext->setObjectName(QStringLiteral("Rectext"));

        gridLayout->addWidget(Rectext, 1, 0, 3, 1);

        checkBoxPlot = new QCheckBox(groupBox_3);
        checkBoxPlot->setObjectName(QStringLiteral("checkBoxPlot"));

        gridLayout->addWidget(checkBoxPlot, 1, 1, 1, 1);

        checkBoxHexShow = new QCheckBox(groupBox_3);
        checkBoxHexShow->setObjectName(QStringLiteral("checkBoxHexShow"));
        checkBoxHexShow->setChecked(true);

        gridLayout->addWidget(checkBoxHexShow, 2, 1, 1, 1);

        clearRecButton = new QPushButton(groupBox_3);
        clearRecButton->setObjectName(QStringLiteral("clearRecButton"));

        gridLayout->addWidget(clearRecButton, 3, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        Sendtext = new QTextEdit(groupBox_3);
        Sendtext->setObjectName(QStringLiteral("Sendtext"));

        gridLayout->addWidget(Sendtext, 5, 0, 3, 1);

        checkBoxHexSend = new QCheckBox(groupBox_3);
        checkBoxHexSend->setObjectName(QStringLiteral("checkBoxHexSend"));
        checkBoxHexSend->setChecked(true);

        gridLayout->addWidget(checkBoxHexSend, 5, 1, 1, 1);

        clearSendButton = new QPushButton(groupBox_3);
        clearSendButton->setObjectName(QStringLiteral("clearSendButton"));

        gridLayout->addWidget(clearSendButton, 6, 1, 1, 1);

        SendButton = new QPushButton(groupBox_3);
        SendButton->setObjectName(QStringLiteral("SendButton"));

        gridLayout->addWidget(SendButton, 7, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        comboBoxNum = new QComboBox(groupBox_2);
        comboBoxNum->setObjectName(QStringLiteral("comboBoxNum"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBoxNum);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        comboBoxBps = new QComboBox(groupBox_2);
        comboBoxBps->setObjectName(QStringLiteral("comboBoxBps"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBoxBps);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        comboBoxBits = new QComboBox(groupBox_2);
        comboBoxBits->setObjectName(QStringLiteral("comboBoxBits"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBoxBits);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        comboBoxParity = new QComboBox(groupBox_2);
        comboBoxParity->setObjectName(QStringLiteral("comboBoxParity"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBoxParity);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        comboBoxStopBit = new QComboBox(groupBox_2);
        comboBoxStopBit->setObjectName(QStringLiteral("comboBoxStopBit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBoxStopBit);


        verticalLayout->addLayout(formLayout);

        COMButton = new QPushButton(groupBox_2);
        COMButton->setObjectName(QStringLiteral("COMButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/FollowLineMonitor/Resources/OFF.png"), QSize(), QIcon::Normal, QIcon::Off);
        COMButton->setIcon(icon);

        verticalLayout->addWidget(COMButton);


        verticalLayout_3->addWidget(groupBox_2);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font;
        font.setFamily(QStringLiteral("Mistral"));
        font.setPointSize(14);
        font.setItalic(false);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);


        gridLayout_2->addLayout(verticalLayout_3, 1, 1, 1, 1);

        FollowLineMonitorClass->setCentralWidget(centralWidget);

        retranslateUi(FollowLineMonitorClass);

        QMetaObject::connectSlotsByName(FollowLineMonitorClass);
    } // setupUi

    void retranslateUi(QMainWindow *FollowLineMonitorClass)
    {
        FollowLineMonitorClass->setWindowTitle(QApplication::translate("FollowLineMonitorClass", "FollowLineMonitor", 0));
        groupBox->setTitle(QApplication::translate("FollowLineMonitorClass", "\346\225\260\346\215\256\346\230\276\347\244\272", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("FollowLineMonitorClass", "\351\230\210\345\200\274\350\276\223\345\205\245\344\270\216\346\230\276\347\244\272", 0));
#endif // QT_NO_TOOLTIP
        lineEdit->setText(QApplication::translate("FollowLineMonitorClass", "0", 0));
        lineEdit->setPlaceholderText(QApplication::translate("FollowLineMonitorClass", "\351\230\210\345\200\274", 0));
        groupBox_3->setTitle(QApplication::translate("FollowLineMonitorClass", "\346\225\260\346\215\256\345\217\221\351\200\201\344\270\216\346\216\245\346\224\266", 0));
        label_5->setText(QApplication::translate("FollowLineMonitorClass", "\346\216\245\346\224\266\345\216\237\345\247\213\346\225\260\346\215\256\346\230\276\347\244\272\357\274\232", 0));
        checkBoxPlot->setText(QApplication::translate("FollowLineMonitorClass", "\347\273\230\345\210\266\346\233\262\347\272\277", 0));
        checkBoxHexShow->setText(QApplication::translate("FollowLineMonitorClass", "16\350\277\233\345\210\266\346\230\276\347\244\272", 0));
        clearRecButton->setText(QApplication::translate("FollowLineMonitorClass", "\346\270\205\347\251\272\346\216\245\346\224\266\346\225\260\346\215\256", 0));
        label_6->setText(QApplication::translate("FollowLineMonitorClass", "\345\217\221\351\200\201\346\225\260\346\215\256\357\274\232", 0));
        checkBoxHexSend->setText(QApplication::translate("FollowLineMonitorClass", "16\350\277\233\345\210\266\345\217\221\351\200\201", 0));
        clearSendButton->setText(QApplication::translate("FollowLineMonitorClass", "\346\270\205\347\251\272\345\217\221\351\200\201\346\225\260\346\215\256", 0));
        SendButton->setText(QApplication::translate("FollowLineMonitorClass", "\345\217\221\351\200\201", 0));
        groupBox_2->setTitle(QApplication::translate("FollowLineMonitorClass", "\344\270\262\345\217\243\350\256\276\347\275\256", 0));
        label->setText(QApplication::translate("FollowLineMonitorClass", "\344\270\262\345\217\243\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("FollowLineMonitorClass", "\346\263\242\347\211\271\347\216\207\357\274\232", 0));
        label_3->setText(QApplication::translate("FollowLineMonitorClass", "\346\225\260\346\215\256\344\275\215\357\274\232", 0));
        label_7->setText(QApplication::translate("FollowLineMonitorClass", "\346\240\241\351\252\214\344\275\215\357\274\232", 0));
        label_4->setText(QApplication::translate("FollowLineMonitorClass", "\345\201\234\346\255\242\344\275\215\357\274\232", 0));
        COMButton->setText(QApplication::translate("FollowLineMonitorClass", "\344\270\262\345\217\243\345\267\262\345\205\263\351\227\255,\347\202\271\345\207\273\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        label_8->setText(QApplication::translate("FollowLineMonitorClass", "BJTU ROBOCON xmzhao", 0));
    } // retranslateUi

};

namespace Ui {
    class FollowLineMonitorClass: public Ui_FollowLineMonitorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLLOWLINEMONITOR_H
