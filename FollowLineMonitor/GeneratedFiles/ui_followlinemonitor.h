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
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QwtPlot *qwtPlot;
    QVBoxLayout *verticalLayout_2;
    QSlider *verticalSlider;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QCheckBox *checkBoxStopShow;
    QTextBrowser *Rectext;
    QCheckBox *checkBoxPlot;
    QCheckBox *checkBoxHexShow;
    QPushButton *clearRecButton;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *lineEditSendTimeout;
    QLabel *label_9;
    QTextEdit *Sendtext;
    QCheckBox *checkBoxHexSend;
    QPushButton *clearSendButton;
    QPushButton *SendButton;
    QPushButton *pushButtonTimeSend;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *comboBoxNum;
    QPushButton *ResearchCom;
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
        FollowLineMonitorClass->resize(613, 530);
        QPalette palette;
        QBrush brush(QColor(241, 241, 241, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(45, 45, 48, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(85, 170, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush4(QColor(0, 0, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        QBrush brush5(QColor(255, 255, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush5);
        QBrush brush6(QColor(0, 151, 226, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        QBrush brush7(QColor(22, 22, 22, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        QBrush brush8(QColor(63, 63, 70, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        QBrush brush9(QColor(255, 0, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush9);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush2);
        QBrush brush10(QColor(85, 255, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush11(QColor(170, 170, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        QBrush brush12(QColor(160, 160, 160, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        QBrush brush13(QColor(0, 0, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        FollowLineMonitorClass->setPalette(palette);
        centralWidget = new QWidget(FollowLineMonitorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        qwtPlot = new QwtPlot(groupBox);
        qwtPlot->setObjectName(QStringLiteral("qwtPlot"));
        qwtPlot->setMinimumSize(QSize(0, 240));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush14(QColor(120, 120, 120, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        qwtPlot->setPalette(palette1);
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
        verticalSlider->setMaximum(300);
        verticalSlider->setPageStep(1);
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
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        lineEdit->setPalette(palette2);
        lineEdit->setMouseTracking(false);
        lineEdit->setFrame(true);
        lineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        checkBoxStopShow = new QCheckBox(groupBox_3);
        checkBoxStopShow->setObjectName(QStringLiteral("checkBoxStopShow"));
        checkBoxStopShow->setChecked(false);

        gridLayout->addWidget(checkBoxStopShow, 0, 2, 1, 1);

        Rectext = new QTextBrowser(groupBox_3);
        Rectext->setObjectName(QStringLiteral("Rectext"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        Rectext->setPalette(palette3);
        Rectext->setReadOnly(true);

        gridLayout->addWidget(Rectext, 1, 0, 3, 2);

        checkBoxPlot = new QCheckBox(groupBox_3);
        checkBoxPlot->setObjectName(QStringLiteral("checkBoxPlot"));

        gridLayout->addWidget(checkBoxPlot, 1, 2, 1, 1);

        checkBoxHexShow = new QCheckBox(groupBox_3);
        checkBoxHexShow->setObjectName(QStringLiteral("checkBoxHexShow"));
        checkBoxHexShow->setChecked(true);

        gridLayout->addWidget(checkBoxHexShow, 2, 2, 1, 1);

        clearRecButton = new QPushButton(groupBox_3);
        clearRecButton->setObjectName(QStringLiteral("clearRecButton"));

        gridLayout->addWidget(clearRecButton, 3, 2, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);

        lineEditSendTimeout = new QLineEdit(groupBox_3);
        lineEditSendTimeout->setObjectName(QStringLiteral("lineEditSendTimeout"));
        lineEditSendTimeout->setMaximumSize(QSize(41, 16777215));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        lineEditSendTimeout->setPalette(palette4);

        horizontalLayout_2->addWidget(lineEditSendTimeout);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(12, 20));

        horizontalLayout_2->addWidget(label_9);


        gridLayout->addLayout(horizontalLayout_2, 4, 1, 1, 1);

        Sendtext = new QTextEdit(groupBox_3);
        Sendtext->setObjectName(QStringLiteral("Sendtext"));
        Sendtext->setReadOnly(false);

        gridLayout->addWidget(Sendtext, 5, 0, 3, 2);

        checkBoxHexSend = new QCheckBox(groupBox_3);
        checkBoxHexSend->setObjectName(QStringLiteral("checkBoxHexSend"));
        checkBoxHexSend->setChecked(true);

        gridLayout->addWidget(checkBoxHexSend, 5, 2, 1, 1);

        clearSendButton = new QPushButton(groupBox_3);
        clearSendButton->setObjectName(QStringLiteral("clearSendButton"));

        gridLayout->addWidget(clearSendButton, 6, 2, 1, 1);

        SendButton = new QPushButton(groupBox_3);
        SendButton->setObjectName(QStringLiteral("SendButton"));

        gridLayout->addWidget(SendButton, 7, 2, 1, 1);

        pushButtonTimeSend = new QPushButton(groupBox_3);
        pushButtonTimeSend->setObjectName(QStringLiteral("pushButtonTimeSend"));

        gridLayout->addWidget(pushButtonTimeSend, 4, 2, 1, 1);


        gridLayout_3->addWidget(groupBox_3, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        comboBoxNum = new QComboBox(groupBox_2);
        comboBoxNum->setObjectName(QStringLiteral("comboBoxNum"));
        comboBoxNum->setMaximumSize(QSize(51, 16777215));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Text, brush13);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush13);
        QBrush brush15(QColor(225, 225, 225, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush15);
        palette5.setBrush(QPalette::Active, QPalette::HighlightedText, brush13);
        QBrush brush16(QColor(170, 85, 127, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush16);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        palette5.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush16);
        comboBoxNum->setPalette(palette5);

        gridLayout_2->addWidget(comboBoxNum, 0, 1, 1, 1);

        ResearchCom = new QPushButton(groupBox_2);
        ResearchCom->setObjectName(QStringLiteral("ResearchCom"));

        gridLayout_2->addWidget(ResearchCom, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        comboBoxBps = new QComboBox(groupBox_2);
        comboBoxBps->setObjectName(QStringLiteral("comboBoxBps"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush13);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush15);
        palette6.setBrush(QPalette::Active, QPalette::HighlightedText, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        palette6.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush13);
        comboBoxBps->setPalette(palette6);

        gridLayout_2->addWidget(comboBoxBps, 1, 1, 1, 2);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        comboBoxBits = new QComboBox(groupBox_2);
        comboBoxBits->setObjectName(QStringLiteral("comboBoxBits"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush13);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush13);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush15);
        palette7.setBrush(QPalette::Active, QPalette::HighlightedText, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush13);
        comboBoxBits->setPalette(palette7);

        gridLayout_2->addWidget(comboBoxBits, 2, 1, 1, 2);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        comboBoxParity = new QComboBox(groupBox_2);
        comboBoxParity->setObjectName(QStringLiteral("comboBoxParity"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush13);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush13);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush15);
        palette8.setBrush(QPalette::Active, QPalette::HighlightedText, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        palette8.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush13);
        comboBoxParity->setPalette(palette8);

        gridLayout_2->addWidget(comboBoxParity, 3, 1, 1, 2);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        comboBoxStopBit = new QComboBox(groupBox_2);
        comboBoxStopBit->setObjectName(QStringLiteral("comboBoxStopBit"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush13);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush13);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush15);
        palette9.setBrush(QPalette::Active, QPalette::HighlightedText, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        palette9.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush13);
        comboBoxStopBit->setPalette(palette9);

        gridLayout_2->addWidget(comboBoxStopBit, 4, 1, 1, 2);

        COMButton = new QPushButton(groupBox_2);
        COMButton->setObjectName(QStringLiteral("COMButton"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush13);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        COMButton->setPalette(palette10);
        QIcon icon;
        icon.addFile(QStringLiteral(":/FollowLineMonitor/Resources/OFF.png"), QSize(), QIcon::Normal, QIcon::Off);
        COMButton->setIcon(icon);

        gridLayout_2->addWidget(COMButton, 5, 0, 1, 3);


        verticalLayout->addWidget(groupBox_2);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QPalette palette11;
        QBrush brush17(QColor(0, 170, 255, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush17);
        QBrush brush18(QColor(0, 85, 255, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush18);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush17);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush17);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush17);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush18);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush17);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush17);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush17);
        label_8->setPalette(palette11);
        QFont font;
        font.setFamily(QStringLiteral("Mistral"));
        font.setPointSize(14);
        font.setItalic(false);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_8);


        gridLayout_3->addLayout(verticalLayout, 1, 1, 1, 1);

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
        checkBoxStopShow->setText(QApplication::translate("FollowLineMonitorClass", "\345\201\234\346\255\242\346\230\276\347\244\272", 0));
        checkBoxPlot->setText(QApplication::translate("FollowLineMonitorClass", "\347\273\230\345\210\266\346\233\262\347\272\277", 0));
        checkBoxHexShow->setText(QApplication::translate("FollowLineMonitorClass", "16\350\277\233\345\210\266\346\230\276\347\244\272", 0));
        clearRecButton->setText(QApplication::translate("FollowLineMonitorClass", "\346\270\205\347\251\272\346\216\245\346\224\266\346\225\260\346\215\256", 0));
        label_6->setText(QApplication::translate("FollowLineMonitorClass", "\345\217\221\351\200\201\346\225\260\346\215\256\357\274\232", 0));
        label_10->setText(QApplication::translate("FollowLineMonitorClass", "\345\256\232\346\227\266\345\217\221\351\200\201\346\227\266\351\227\264\357\274\232", 0));
#ifndef QT_NO_TOOLTIP
        lineEditSendTimeout->setToolTip(QApplication::translate("FollowLineMonitorClass", "\345\256\232\346\227\266\345\217\221\351\200\201\346\227\266\351\227\264", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        lineEditSendTimeout->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        lineEditSendTimeout->setAccessibleDescription(QApplication::translate("FollowLineMonitorClass", "\346\227\266\351\227\264/ms", 0));
#endif // QT_NO_ACCESSIBILITY
        lineEditSendTimeout->setText(QApplication::translate("FollowLineMonitorClass", "1000", 0));
        lineEditSendTimeout->setPlaceholderText(QApplication::translate("FollowLineMonitorClass", "\346\227\266\351\227\264/ms", 0));
        label_9->setText(QApplication::translate("FollowLineMonitorClass", "ms", 0));
        checkBoxHexSend->setText(QApplication::translate("FollowLineMonitorClass", "16\350\277\233\345\210\266\345\217\221\351\200\201", 0));
        clearSendButton->setText(QApplication::translate("FollowLineMonitorClass", "\346\270\205\347\251\272\345\217\221\351\200\201\346\225\260\346\215\256", 0));
        SendButton->setText(QApplication::translate("FollowLineMonitorClass", "\345\217\221\351\200\201", 0));
        pushButtonTimeSend->setText(QApplication::translate("FollowLineMonitorClass", "\345\220\257\345\212\250\345\256\232\346\227\266\345\217\221\351\200\201", 0));
        groupBox_2->setTitle(QApplication::translate("FollowLineMonitorClass", "\344\270\262\345\217\243\350\256\276\347\275\256", 0));
        label->setText(QApplication::translate("FollowLineMonitorClass", "\344\270\262\345\217\243\345\217\267\357\274\232", 0));
        comboBoxNum->clear();
        comboBoxNum->insertItems(0, QStringList()
         << QApplication::translate("FollowLineMonitorClass", "COM1", 0)
        );
        ResearchCom->setText(QApplication::translate("FollowLineMonitorClass", "\346\220\234\347\264\242\344\270\262\345\217\243", 0));
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
