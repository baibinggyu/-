/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayoutGlobal;
    QHBoxLayout *horizontalLayoutUp;
    QGroupBox *groupBoxRev;
    QGridLayout *gridLayout;
    QTextEdit *textEditRev;
    QGroupBox *groupBoxRecord;
    QGridLayout *gridLayout_2;
    QTextEdit *textEditRecord;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayoutUpRight;
    QVBoxLayout *verticalLayoutInnerTop;
    QHBoxLayout *horizontalLayoutMultiTextInnerTop;
    QLabel *labelHex;
    QLabel *labelString;
    QLabel *labelSend;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout01;
    QCheckBox *checkBox01;
    QLineEdit *lineEdit01;
    QPushButton *pushButton01;
    QHBoxLayout *horizontalLayout02;
    QCheckBox *checkBox02;
    QLineEdit *lineEdit02;
    QPushButton *pushButton02;
    QHBoxLayout *horizontalLayout03;
    QCheckBox *checkBox03;
    QLineEdit *lineEdit03;
    QPushButton *pushButton03;
    QHBoxLayout *horizontalLayout04;
    QCheckBox *checkBox04;
    QLineEdit *lineEdit04;
    QPushButton *pushButton04;
    QHBoxLayout *horizontalLayout05;
    QCheckBox *checkBox05;
    QLineEdit *lineEdit05;
    QPushButton *pushButton05;
    QHBoxLayout *horizontalLayout06;
    QCheckBox *checkBox06;
    QLineEdit *lineEdit06;
    QPushButton *pushButton06;
    QHBoxLayout *horizontalLayout07;
    QCheckBox *checkBox07;
    QLineEdit *lineEdit07;
    QPushButton *pushButton07;
    QHBoxLayout *horizontalLayout08;
    QCheckBox *checkBox08;
    QLineEdit *lineEdit08;
    QPushButton *pushButton08;
    QHBoxLayout *horizontalLayout09;
    QCheckBox *checkBox09;
    QLineEdit *lineEdit09;
    QPushButton *pushButton09;
    QHBoxLayout *horizontalLayout10;
    QCheckBox *checkBox10;
    QLineEdit *lineEdit10;
    QPushButton *pushButton10;
    QHBoxLayout *horizontalLayout11;
    QCheckBox *checkBox11;
    QLineEdit *lineEdit11;
    QPushButton *pushButton11;
    QHBoxLayout *horizontalLayout12;
    QCheckBox *checkBox12;
    QLineEdit *lineEdit12;
    QPushButton *pushButton12;
    QHBoxLayout *horizontalLayoutInnerMidlle;
    QCheckBox *checkBoxLoopSent;
    QSpinBox *spinBox;
    QLabel *labelMs;
    QHBoxLayout *horizontalLayoutInnerButton;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonLoad;
    QPushButton *pushButtonReset;
    QGroupBox *groupBoxDownAll;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBoxDownRightUp;
    QGridLayout *gridLayout_4;
    QPushButton *pushButtonCloseSerial;
    QPushButton *pushButtonReceiveClear;
    QCheckBox *checkBoxReceiveTime;
    QCheckBox *checkBoxHexShow;
    QPushButton *pushButtonExeMod;
    QPushButton *pushButtonHideTable;
    QPushButton *pushButtonReceiveSave;
    QCheckBox *checkBoxAutoChange;
    QPushButton *pushButtonDownloadMod;
    QPushButton *pushButtonHideHistory;
    QGroupBox *groupBoxDownRightDown;
    QGridLayout *gridLayout_5;
    QCheckBox *checkBoxSendInTime;
    QLineEdit *lineEditMS;
    QLabel *labelMS;
    QCheckBox *checkBoxNewLine;
    QCheckBox *checkBoxHexSend;
    QCheckBox *checkBoxFormatInput;
    QPushButton *pushButtonSend;
    QLineEdit *lineEditSendText;
    QGroupBox *groupBoxParams;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayoutSerialNum;
    QLabel *labelSerialNum;
    QComboBox *comboBoxSerialNum;
    QHBoxLayout *horizontalLayoutBoautRate;
    QLabel *labelBoautRate;
    QComboBox *comboBoxBoautRate;
    QHBoxLayout *horizontalLayoutDataBit;
    QLabel *labelDataBit;
    QComboBox *comboBoxDataBit;
    QHBoxLayout *horizontalLayoutCheckBit;
    QLabel *labelCheckBit;
    QComboBox *comboBoxCheckBit;
    QHBoxLayout *horizontalLayoutStopBit;
    QLabel *labelStopBit;
    QComboBox *comboBoxStopBit;
    QHBoxLayout *horizontalLayoutFlowControl;
    QLabel *labelFlowControl;
    QComboBox *comboBoxFlowControl;
    QHBoxLayout *horizontalLayoutButton;
    QLabel *labelSendStatus;
    QLabel *labelReceived;
    QLabel *labelSendCnt;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCurrentDate;
    QLabel *labelCurrentTime;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(996, 733);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cat.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 1, 1001, 731));
        gridLayoutGlobal = new QGridLayout(layoutWidget);
        gridLayoutGlobal->setObjectName(QString::fromUtf8("gridLayoutGlobal"));
        gridLayoutGlobal->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutUp = new QHBoxLayout();
        horizontalLayoutUp->setObjectName(QString::fromUtf8("horizontalLayoutUp"));
        groupBoxRev = new QGroupBox(layoutWidget);
        groupBoxRev->setObjectName(QString::fromUtf8("groupBoxRev"));
        gridLayout = new QGridLayout(groupBoxRev);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEditRev = new QTextEdit(groupBoxRev);
        textEditRev->setObjectName(QString::fromUtf8("textEditRev"));

        gridLayout->addWidget(textEditRev, 0, 0, 1, 1);


        horizontalLayoutUp->addWidget(groupBoxRev);

        groupBoxRecord = new QGroupBox(layoutWidget);
        groupBoxRecord->setObjectName(QString::fromUtf8("groupBoxRecord"));
        gridLayout_2 = new QGridLayout(groupBoxRecord);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEditRecord = new QTextEdit(groupBoxRecord);
        textEditRecord->setObjectName(QString::fromUtf8("textEditRecord"));

        gridLayout_2->addWidget(textEditRecord, 0, 0, 1, 1);


        horizontalLayoutUp->addWidget(groupBoxRecord);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(5, 20, 281, 421));
        verticalLayoutUpRight = new QVBoxLayout(widget);
        verticalLayoutUpRight->setObjectName(QString::fromUtf8("verticalLayoutUpRight"));
        verticalLayoutUpRight->setContentsMargins(0, 0, 0, 0);
        verticalLayoutInnerTop = new QVBoxLayout();
        verticalLayoutInnerTop->setObjectName(QString::fromUtf8("verticalLayoutInnerTop"));
        horizontalLayoutMultiTextInnerTop = new QHBoxLayout();
        horizontalLayoutMultiTextInnerTop->setObjectName(QString::fromUtf8("horizontalLayoutMultiTextInnerTop"));
        labelHex = new QLabel(widget);
        labelHex->setObjectName(QString::fromUtf8("labelHex"));

        horizontalLayoutMultiTextInnerTop->addWidget(labelHex);

        labelString = new QLabel(widget);
        labelString->setObjectName(QString::fromUtf8("labelString"));

        horizontalLayoutMultiTextInnerTop->addWidget(labelString);

        labelSend = new QLabel(widget);
        labelSend->setObjectName(QString::fromUtf8("labelSend"));

        horizontalLayoutMultiTextInnerTop->addWidget(labelSend);


        verticalLayoutInnerTop->addLayout(horizontalLayoutMultiTextInnerTop);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout01 = new QHBoxLayout();
        horizontalLayout01->setObjectName(QString::fromUtf8("horizontalLayout01"));
        checkBox01 = new QCheckBox(widget);
        checkBox01->setObjectName(QString::fromUtf8("checkBox01"));

        horizontalLayout01->addWidget(checkBox01);

        lineEdit01 = new QLineEdit(widget);
        lineEdit01->setObjectName(QString::fromUtf8("lineEdit01"));

        horizontalLayout01->addWidget(lineEdit01);

        pushButton01 = new QPushButton(widget);
        pushButton01->setObjectName(QString::fromUtf8("pushButton01"));
        pushButton01->setMinimumSize(QSize(30, 0));
        pushButton01->setMaximumSize(QSize(30, 16777215));

        horizontalLayout01->addWidget(pushButton01);


        verticalLayout->addLayout(horizontalLayout01);

        horizontalLayout02 = new QHBoxLayout();
        horizontalLayout02->setObjectName(QString::fromUtf8("horizontalLayout02"));
        checkBox02 = new QCheckBox(widget);
        checkBox02->setObjectName(QString::fromUtf8("checkBox02"));

        horizontalLayout02->addWidget(checkBox02);

        lineEdit02 = new QLineEdit(widget);
        lineEdit02->setObjectName(QString::fromUtf8("lineEdit02"));

        horizontalLayout02->addWidget(lineEdit02);

        pushButton02 = new QPushButton(widget);
        pushButton02->setObjectName(QString::fromUtf8("pushButton02"));
        pushButton02->setMinimumSize(QSize(30, 0));
        pushButton02->setMaximumSize(QSize(30, 16777215));

        horizontalLayout02->addWidget(pushButton02);


        verticalLayout->addLayout(horizontalLayout02);

        horizontalLayout03 = new QHBoxLayout();
        horizontalLayout03->setObjectName(QString::fromUtf8("horizontalLayout03"));
        checkBox03 = new QCheckBox(widget);
        checkBox03->setObjectName(QString::fromUtf8("checkBox03"));

        horizontalLayout03->addWidget(checkBox03);

        lineEdit03 = new QLineEdit(widget);
        lineEdit03->setObjectName(QString::fromUtf8("lineEdit03"));

        horizontalLayout03->addWidget(lineEdit03);

        pushButton03 = new QPushButton(widget);
        pushButton03->setObjectName(QString::fromUtf8("pushButton03"));
        pushButton03->setMinimumSize(QSize(30, 0));
        pushButton03->setMaximumSize(QSize(30, 16777215));

        horizontalLayout03->addWidget(pushButton03);


        verticalLayout->addLayout(horizontalLayout03);

        horizontalLayout04 = new QHBoxLayout();
        horizontalLayout04->setObjectName(QString::fromUtf8("horizontalLayout04"));
        checkBox04 = new QCheckBox(widget);
        checkBox04->setObjectName(QString::fromUtf8("checkBox04"));

        horizontalLayout04->addWidget(checkBox04);

        lineEdit04 = new QLineEdit(widget);
        lineEdit04->setObjectName(QString::fromUtf8("lineEdit04"));

        horizontalLayout04->addWidget(lineEdit04);

        pushButton04 = new QPushButton(widget);
        pushButton04->setObjectName(QString::fromUtf8("pushButton04"));
        pushButton04->setMinimumSize(QSize(30, 0));
        pushButton04->setMaximumSize(QSize(30, 16777215));

        horizontalLayout04->addWidget(pushButton04);


        verticalLayout->addLayout(horizontalLayout04);

        horizontalLayout05 = new QHBoxLayout();
        horizontalLayout05->setObjectName(QString::fromUtf8("horizontalLayout05"));
        checkBox05 = new QCheckBox(widget);
        checkBox05->setObjectName(QString::fromUtf8("checkBox05"));

        horizontalLayout05->addWidget(checkBox05);

        lineEdit05 = new QLineEdit(widget);
        lineEdit05->setObjectName(QString::fromUtf8("lineEdit05"));

        horizontalLayout05->addWidget(lineEdit05);

        pushButton05 = new QPushButton(widget);
        pushButton05->setObjectName(QString::fromUtf8("pushButton05"));
        pushButton05->setMinimumSize(QSize(30, 0));
        pushButton05->setMaximumSize(QSize(30, 16777215));

        horizontalLayout05->addWidget(pushButton05);


        verticalLayout->addLayout(horizontalLayout05);

        horizontalLayout06 = new QHBoxLayout();
        horizontalLayout06->setObjectName(QString::fromUtf8("horizontalLayout06"));
        checkBox06 = new QCheckBox(widget);
        checkBox06->setObjectName(QString::fromUtf8("checkBox06"));

        horizontalLayout06->addWidget(checkBox06);

        lineEdit06 = new QLineEdit(widget);
        lineEdit06->setObjectName(QString::fromUtf8("lineEdit06"));

        horizontalLayout06->addWidget(lineEdit06);

        pushButton06 = new QPushButton(widget);
        pushButton06->setObjectName(QString::fromUtf8("pushButton06"));
        pushButton06->setMinimumSize(QSize(30, 0));
        pushButton06->setMaximumSize(QSize(30, 16777215));

        horizontalLayout06->addWidget(pushButton06);


        verticalLayout->addLayout(horizontalLayout06);

        horizontalLayout07 = new QHBoxLayout();
        horizontalLayout07->setObjectName(QString::fromUtf8("horizontalLayout07"));
        checkBox07 = new QCheckBox(widget);
        checkBox07->setObjectName(QString::fromUtf8("checkBox07"));

        horizontalLayout07->addWidget(checkBox07);

        lineEdit07 = new QLineEdit(widget);
        lineEdit07->setObjectName(QString::fromUtf8("lineEdit07"));

        horizontalLayout07->addWidget(lineEdit07);

        pushButton07 = new QPushButton(widget);
        pushButton07->setObjectName(QString::fromUtf8("pushButton07"));
        pushButton07->setMinimumSize(QSize(30, 0));
        pushButton07->setMaximumSize(QSize(30, 16777215));

        horizontalLayout07->addWidget(pushButton07);


        verticalLayout->addLayout(horizontalLayout07);

        horizontalLayout08 = new QHBoxLayout();
        horizontalLayout08->setObjectName(QString::fromUtf8("horizontalLayout08"));
        checkBox08 = new QCheckBox(widget);
        checkBox08->setObjectName(QString::fromUtf8("checkBox08"));

        horizontalLayout08->addWidget(checkBox08);

        lineEdit08 = new QLineEdit(widget);
        lineEdit08->setObjectName(QString::fromUtf8("lineEdit08"));

        horizontalLayout08->addWidget(lineEdit08);

        pushButton08 = new QPushButton(widget);
        pushButton08->setObjectName(QString::fromUtf8("pushButton08"));
        pushButton08->setMinimumSize(QSize(30, 0));
        pushButton08->setMaximumSize(QSize(30, 16777215));

        horizontalLayout08->addWidget(pushButton08);


        verticalLayout->addLayout(horizontalLayout08);

        horizontalLayout09 = new QHBoxLayout();
        horizontalLayout09->setObjectName(QString::fromUtf8("horizontalLayout09"));
        checkBox09 = new QCheckBox(widget);
        checkBox09->setObjectName(QString::fromUtf8("checkBox09"));

        horizontalLayout09->addWidget(checkBox09);

        lineEdit09 = new QLineEdit(widget);
        lineEdit09->setObjectName(QString::fromUtf8("lineEdit09"));

        horizontalLayout09->addWidget(lineEdit09);

        pushButton09 = new QPushButton(widget);
        pushButton09->setObjectName(QString::fromUtf8("pushButton09"));
        pushButton09->setMinimumSize(QSize(30, 0));
        pushButton09->setMaximumSize(QSize(30, 16777215));

        horizontalLayout09->addWidget(pushButton09);


        verticalLayout->addLayout(horizontalLayout09);

        horizontalLayout10 = new QHBoxLayout();
        horizontalLayout10->setObjectName(QString::fromUtf8("horizontalLayout10"));
        checkBox10 = new QCheckBox(widget);
        checkBox10->setObjectName(QString::fromUtf8("checkBox10"));

        horizontalLayout10->addWidget(checkBox10);

        lineEdit10 = new QLineEdit(widget);
        lineEdit10->setObjectName(QString::fromUtf8("lineEdit10"));

        horizontalLayout10->addWidget(lineEdit10);

        pushButton10 = new QPushButton(widget);
        pushButton10->setObjectName(QString::fromUtf8("pushButton10"));
        pushButton10->setMinimumSize(QSize(30, 0));
        pushButton10->setMaximumSize(QSize(30, 16777215));

        horizontalLayout10->addWidget(pushButton10);


        verticalLayout->addLayout(horizontalLayout10);

        horizontalLayout11 = new QHBoxLayout();
        horizontalLayout11->setObjectName(QString::fromUtf8("horizontalLayout11"));
        checkBox11 = new QCheckBox(widget);
        checkBox11->setObjectName(QString::fromUtf8("checkBox11"));

        horizontalLayout11->addWidget(checkBox11);

        lineEdit11 = new QLineEdit(widget);
        lineEdit11->setObjectName(QString::fromUtf8("lineEdit11"));

        horizontalLayout11->addWidget(lineEdit11);

        pushButton11 = new QPushButton(widget);
        pushButton11->setObjectName(QString::fromUtf8("pushButton11"));
        pushButton11->setMinimumSize(QSize(30, 0));
        pushButton11->setMaximumSize(QSize(30, 16777215));

        horizontalLayout11->addWidget(pushButton11);


        verticalLayout->addLayout(horizontalLayout11);

        horizontalLayout12 = new QHBoxLayout();
        horizontalLayout12->setObjectName(QString::fromUtf8("horizontalLayout12"));
        checkBox12 = new QCheckBox(widget);
        checkBox12->setObjectName(QString::fromUtf8("checkBox12"));

        horizontalLayout12->addWidget(checkBox12);

        lineEdit12 = new QLineEdit(widget);
        lineEdit12->setObjectName(QString::fromUtf8("lineEdit12"));

        horizontalLayout12->addWidget(lineEdit12);

        pushButton12 = new QPushButton(widget);
        pushButton12->setObjectName(QString::fromUtf8("pushButton12"));
        pushButton12->setMinimumSize(QSize(30, 0));
        pushButton12->setMaximumSize(QSize(30, 16777215));

        horizontalLayout12->addWidget(pushButton12);


        verticalLayout->addLayout(horizontalLayout12);


        verticalLayoutInnerTop->addLayout(verticalLayout);


        verticalLayoutUpRight->addLayout(verticalLayoutInnerTop);

        horizontalLayoutInnerMidlle = new QHBoxLayout();
        horizontalLayoutInnerMidlle->setObjectName(QString::fromUtf8("horizontalLayoutInnerMidlle"));
        checkBoxLoopSent = new QCheckBox(widget);
        checkBoxLoopSent->setObjectName(QString::fromUtf8("checkBoxLoopSent"));

        horizontalLayoutInnerMidlle->addWidget(checkBoxLoopSent);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayoutInnerMidlle->addWidget(spinBox);

        labelMs = new QLabel(widget);
        labelMs->setObjectName(QString::fromUtf8("labelMs"));

        horizontalLayoutInnerMidlle->addWidget(labelMs);


        verticalLayoutUpRight->addLayout(horizontalLayoutInnerMidlle);

        horizontalLayoutInnerButton = new QHBoxLayout();
        horizontalLayoutInnerButton->setObjectName(QString::fromUtf8("horizontalLayoutInnerButton"));
        pushButtonSave = new QPushButton(widget);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));

        horizontalLayoutInnerButton->addWidget(pushButtonSave);

        pushButtonLoad = new QPushButton(widget);
        pushButtonLoad->setObjectName(QString::fromUtf8("pushButtonLoad"));

        horizontalLayoutInnerButton->addWidget(pushButtonLoad);

        pushButtonReset = new QPushButton(widget);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));

        horizontalLayoutInnerButton->addWidget(pushButtonReset);


        verticalLayoutUpRight->addLayout(horizontalLayoutInnerButton);


        horizontalLayoutUp->addWidget(groupBox);

        horizontalLayoutUp->setStretch(0, 6);
        horizontalLayoutUp->setStretch(1, 6);
        horizontalLayoutUp->setStretch(2, 5);

        gridLayoutGlobal->addLayout(horizontalLayoutUp, 0, 0, 1, 1);

        groupBoxDownAll = new QGroupBox(layoutWidget);
        groupBoxDownAll->setObjectName(QString::fromUtf8("groupBoxDownAll"));
        gridLayout_6 = new QGridLayout(groupBoxDownAll);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBoxDownRightUp = new QGroupBox(groupBoxDownAll);
        groupBoxDownRightUp->setObjectName(QString::fromUtf8("groupBoxDownRightUp"));
        gridLayout_4 = new QGridLayout(groupBoxDownRightUp);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButtonCloseSerial = new QPushButton(groupBoxDownRightUp);
        pushButtonCloseSerial->setObjectName(QString::fromUtf8("pushButtonCloseSerial"));
        pushButtonCloseSerial->setMinimumSize(QSize(60, 70));

        gridLayout_4->addWidget(pushButtonCloseSerial, 0, 0, 2, 1);

        pushButtonReceiveClear = new QPushButton(groupBoxDownRightUp);
        pushButtonReceiveClear->setObjectName(QString::fromUtf8("pushButtonReceiveClear"));

        gridLayout_4->addWidget(pushButtonReceiveClear, 0, 1, 1, 1);

        checkBoxReceiveTime = new QCheckBox(groupBoxDownRightUp);
        checkBoxReceiveTime->setObjectName(QString::fromUtf8("checkBoxReceiveTime"));

        gridLayout_4->addWidget(checkBoxReceiveTime, 0, 2, 1, 1);

        checkBoxHexShow = new QCheckBox(groupBoxDownRightUp);
        checkBoxHexShow->setObjectName(QString::fromUtf8("checkBoxHexShow"));

        gridLayout_4->addWidget(checkBoxHexShow, 0, 3, 1, 1);

        pushButtonExeMod = new QPushButton(groupBoxDownRightUp);
        pushButtonExeMod->setObjectName(QString::fromUtf8("pushButtonExeMod"));

        gridLayout_4->addWidget(pushButtonExeMod, 0, 4, 1, 1);

        pushButtonHideTable = new QPushButton(groupBoxDownRightUp);
        pushButtonHideTable->setObjectName(QString::fromUtf8("pushButtonHideTable"));

        gridLayout_4->addWidget(pushButtonHideTable, 0, 5, 1, 1);

        pushButtonReceiveSave = new QPushButton(groupBoxDownRightUp);
        pushButtonReceiveSave->setObjectName(QString::fromUtf8("pushButtonReceiveSave"));

        gridLayout_4->addWidget(pushButtonReceiveSave, 1, 1, 1, 1);

        checkBoxAutoChange = new QCheckBox(groupBoxDownRightUp);
        checkBoxAutoChange->setObjectName(QString::fromUtf8("checkBoxAutoChange"));

        gridLayout_4->addWidget(checkBoxAutoChange, 1, 3, 1, 1);

        pushButtonDownloadMod = new QPushButton(groupBoxDownRightUp);
        pushButtonDownloadMod->setObjectName(QString::fromUtf8("pushButtonDownloadMod"));

        gridLayout_4->addWidget(pushButtonDownloadMod, 1, 4, 1, 1);

        pushButtonHideHistory = new QPushButton(groupBoxDownRightUp);
        pushButtonHideHistory->setObjectName(QString::fromUtf8("pushButtonHideHistory"));

        gridLayout_4->addWidget(pushButtonHideHistory, 1, 5, 1, 1);


        gridLayout_6->addWidget(groupBoxDownRightUp, 0, 1, 1, 1);

        groupBoxDownRightDown = new QGroupBox(groupBoxDownAll);
        groupBoxDownRightDown->setObjectName(QString::fromUtf8("groupBoxDownRightDown"));
        gridLayout_5 = new QGridLayout(groupBoxDownRightDown);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        checkBoxSendInTime = new QCheckBox(groupBoxDownRightDown);
        checkBoxSendInTime->setObjectName(QString::fromUtf8("checkBoxSendInTime"));

        gridLayout_5->addWidget(checkBoxSendInTime, 0, 0, 1, 1);

        lineEditMS = new QLineEdit(groupBoxDownRightDown);
        lineEditMS->setObjectName(QString::fromUtf8("lineEditMS"));
        lineEditMS->setMaximumSize(QSize(100, 16777215));

        gridLayout_5->addWidget(lineEditMS, 0, 1, 1, 1);

        labelMS = new QLabel(groupBoxDownRightDown);
        labelMS->setObjectName(QString::fromUtf8("labelMS"));

        gridLayout_5->addWidget(labelMS, 0, 2, 1, 1);

        checkBoxNewLine = new QCheckBox(groupBoxDownRightDown);
        checkBoxNewLine->setObjectName(QString::fromUtf8("checkBoxNewLine"));

        gridLayout_5->addWidget(checkBoxNewLine, 0, 3, 1, 1);

        checkBoxHexSend = new QCheckBox(groupBoxDownRightDown);
        checkBoxHexSend->setObjectName(QString::fromUtf8("checkBoxHexSend"));

        gridLayout_5->addWidget(checkBoxHexSend, 0, 4, 1, 1);

        checkBoxFormatInput = new QCheckBox(groupBoxDownRightDown);
        checkBoxFormatInput->setObjectName(QString::fromUtf8("checkBoxFormatInput"));

        gridLayout_5->addWidget(checkBoxFormatInput, 0, 5, 1, 1);

        pushButtonSend = new QPushButton(groupBoxDownRightDown);
        pushButtonSend->setObjectName(QString::fromUtf8("pushButtonSend"));

        gridLayout_5->addWidget(pushButtonSend, 1, 0, 1, 1);

        lineEditSendText = new QLineEdit(groupBoxDownRightDown);
        lineEditSendText->setObjectName(QString::fromUtf8("lineEditSendText"));

        gridLayout_5->addWidget(lineEditSendText, 1, 1, 1, 5);


        gridLayout_6->addWidget(groupBoxDownRightDown, 1, 1, 1, 1);

        groupBoxParams = new QGroupBox(groupBoxDownAll);
        groupBoxParams->setObjectName(QString::fromUtf8("groupBoxParams"));
        gridLayout_3 = new QGridLayout(groupBoxParams);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayoutSerialNum = new QHBoxLayout();
        horizontalLayoutSerialNum->setObjectName(QString::fromUtf8("horizontalLayoutSerialNum"));
        labelSerialNum = new QLabel(groupBoxParams);
        labelSerialNum->setObjectName(QString::fromUtf8("labelSerialNum"));

        horizontalLayoutSerialNum->addWidget(labelSerialNum);

        comboBoxSerialNum = new QComboBox(groupBoxParams);
        comboBoxSerialNum->setObjectName(QString::fromUtf8("comboBoxSerialNum"));
        comboBoxSerialNum->setMinimumSize(QSize(80, 0));
        comboBoxSerialNum->setMaximumSize(QSize(80, 16777215));

        horizontalLayoutSerialNum->addWidget(comboBoxSerialNum);


        gridLayout_3->addLayout(horizontalLayoutSerialNum, 0, 0, 1, 1);

        horizontalLayoutBoautRate = new QHBoxLayout();
        horizontalLayoutBoautRate->setObjectName(QString::fromUtf8("horizontalLayoutBoautRate"));
        labelBoautRate = new QLabel(groupBoxParams);
        labelBoautRate->setObjectName(QString::fromUtf8("labelBoautRate"));

        horizontalLayoutBoautRate->addWidget(labelBoautRate);

        comboBoxBoautRate = new QComboBox(groupBoxParams);
        comboBoxBoautRate->addItem(QString());
        comboBoxBoautRate->addItem(QString());
        comboBoxBoautRate->addItem(QString());
        comboBoxBoautRate->addItem(QString());
        comboBoxBoautRate->addItem(QString());
        comboBoxBoautRate->addItem(QString());
        comboBoxBoautRate->addItem(QString());
        comboBoxBoautRate->addItem(QString());
        comboBoxBoautRate->addItem(QString());
        comboBoxBoautRate->addItem(QString());
        comboBoxBoautRate->setObjectName(QString::fromUtf8("comboBoxBoautRate"));
        comboBoxBoautRate->setMinimumSize(QSize(80, 0));
        comboBoxBoautRate->setMaximumSize(QSize(80, 16777215));

        horizontalLayoutBoautRate->addWidget(comboBoxBoautRate);


        gridLayout_3->addLayout(horizontalLayoutBoautRate, 1, 0, 1, 1);

        horizontalLayoutDataBit = new QHBoxLayout();
        horizontalLayoutDataBit->setObjectName(QString::fromUtf8("horizontalLayoutDataBit"));
        labelDataBit = new QLabel(groupBoxParams);
        labelDataBit->setObjectName(QString::fromUtf8("labelDataBit"));

        horizontalLayoutDataBit->addWidget(labelDataBit);

        comboBoxDataBit = new QComboBox(groupBoxParams);
        comboBoxDataBit->addItem(QString());
        comboBoxDataBit->addItem(QString());
        comboBoxDataBit->addItem(QString());
        comboBoxDataBit->addItem(QString());
        comboBoxDataBit->addItem(QString());
        comboBoxDataBit->setObjectName(QString::fromUtf8("comboBoxDataBit"));
        comboBoxDataBit->setMinimumSize(QSize(80, 0));
        comboBoxDataBit->setMaximumSize(QSize(80, 16777215));

        horizontalLayoutDataBit->addWidget(comboBoxDataBit);


        gridLayout_3->addLayout(horizontalLayoutDataBit, 2, 0, 1, 1);

        horizontalLayoutCheckBit = new QHBoxLayout();
        horizontalLayoutCheckBit->setObjectName(QString::fromUtf8("horizontalLayoutCheckBit"));
        labelCheckBit = new QLabel(groupBoxParams);
        labelCheckBit->setObjectName(QString::fromUtf8("labelCheckBit"));

        horizontalLayoutCheckBit->addWidget(labelCheckBit);

        comboBoxCheckBit = new QComboBox(groupBoxParams);
        comboBoxCheckBit->addItem(QString());
        comboBoxCheckBit->addItem(QString());
        comboBoxCheckBit->addItem(QString());
        comboBoxCheckBit->addItem(QString());
        comboBoxCheckBit->addItem(QString());
        comboBoxCheckBit->setObjectName(QString::fromUtf8("comboBoxCheckBit"));
        comboBoxCheckBit->setMinimumSize(QSize(80, 0));
        comboBoxCheckBit->setMaximumSize(QSize(80, 16777215));

        horizontalLayoutCheckBit->addWidget(comboBoxCheckBit);


        gridLayout_3->addLayout(horizontalLayoutCheckBit, 3, 0, 1, 1);

        horizontalLayoutStopBit = new QHBoxLayout();
        horizontalLayoutStopBit->setObjectName(QString::fromUtf8("horizontalLayoutStopBit"));
        labelStopBit = new QLabel(groupBoxParams);
        labelStopBit->setObjectName(QString::fromUtf8("labelStopBit"));

        horizontalLayoutStopBit->addWidget(labelStopBit);

        comboBoxStopBit = new QComboBox(groupBoxParams);
        comboBoxStopBit->addItem(QString());
        comboBoxStopBit->addItem(QString());
        comboBoxStopBit->addItem(QString());
        comboBoxStopBit->addItem(QString());
        comboBoxStopBit->addItem(QString());
        comboBoxStopBit->setObjectName(QString::fromUtf8("comboBoxStopBit"));
        comboBoxStopBit->setMinimumSize(QSize(80, 0));
        comboBoxStopBit->setMaximumSize(QSize(80, 16777215));

        horizontalLayoutStopBit->addWidget(comboBoxStopBit);


        gridLayout_3->addLayout(horizontalLayoutStopBit, 4, 0, 1, 1);

        horizontalLayoutFlowControl = new QHBoxLayout();
        horizontalLayoutFlowControl->setObjectName(QString::fromUtf8("horizontalLayoutFlowControl"));
        labelFlowControl = new QLabel(groupBoxParams);
        labelFlowControl->setObjectName(QString::fromUtf8("labelFlowControl"));

        horizontalLayoutFlowControl->addWidget(labelFlowControl);

        comboBoxFlowControl = new QComboBox(groupBoxParams);
        comboBoxFlowControl->addItem(QString());
        comboBoxFlowControl->addItem(QString());
        comboBoxFlowControl->addItem(QString());
        comboBoxFlowControl->addItem(QString());
        comboBoxFlowControl->setObjectName(QString::fromUtf8("comboBoxFlowControl"));
        comboBoxFlowControl->setMinimumSize(QSize(80, 0));
        comboBoxFlowControl->setMaximumSize(QSize(80, 16777215));

        horizontalLayoutFlowControl->addWidget(comboBoxFlowControl);


        gridLayout_3->addLayout(horizontalLayoutFlowControl, 5, 0, 1, 1);


        gridLayout_6->addWidget(groupBoxParams, 0, 0, 2, 1);


        gridLayoutGlobal->addWidget(groupBoxDownAll, 1, 0, 1, 1);

        horizontalLayoutButton = new QHBoxLayout();
        horizontalLayoutButton->setObjectName(QString::fromUtf8("horizontalLayoutButton"));
        labelSendStatus = new QLabel(layoutWidget);
        labelSendStatus->setObjectName(QString::fromUtf8("labelSendStatus"));

        horizontalLayoutButton->addWidget(labelSendStatus);

        labelReceived = new QLabel(layoutWidget);
        labelReceived->setObjectName(QString::fromUtf8("labelReceived"));

        horizontalLayoutButton->addWidget(labelReceived);

        labelSendCnt = new QLabel(layoutWidget);
        labelSendCnt->setObjectName(QString::fromUtf8("labelSendCnt"));

        horizontalLayoutButton->addWidget(labelSendCnt);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelCurrentDate = new QLabel(layoutWidget);
        labelCurrentDate->setObjectName(QString::fromUtf8("labelCurrentDate"));

        horizontalLayout->addWidget(labelCurrentDate);

        labelCurrentTime = new QLabel(layoutWidget);
        labelCurrentTime->setObjectName(QString::fromUtf8("labelCurrentTime"));

        horizontalLayout->addWidget(labelCurrentTime);


        horizontalLayoutButton->addLayout(horizontalLayout);


        gridLayoutGlobal->addLayout(horizontalLayoutButton, 2, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\347\231\275\347\216\211\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213V1.0", nullptr));
        groupBoxRev->setTitle(QCoreApplication::translate("Widget", "Receive", nullptr));
        groupBoxRecord->setTitle(QCoreApplication::translate("Widget", "Record", nullptr));
        textEditRecord->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Thanks for Using my SerialTool~</p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "MutilTexts", nullptr));
        labelHex->setText(QCoreApplication::translate("Widget", "Hex", nullptr));
        labelString->setText(QCoreApplication::translate("Widget", "   String", nullptr));
        labelSend->setText(QCoreApplication::translate("Widget", "        Send", nullptr));
        checkBox01->setText(QString());
        pushButton01->setText(QCoreApplication::translate("Widget", "1", nullptr));
        checkBox02->setText(QString());
        pushButton02->setText(QCoreApplication::translate("Widget", "2", nullptr));
        checkBox03->setText(QString());
        pushButton03->setText(QCoreApplication::translate("Widget", "3", nullptr));
        checkBox04->setText(QString());
        pushButton04->setText(QCoreApplication::translate("Widget", "4", nullptr));
        checkBox05->setText(QString());
        pushButton05->setText(QCoreApplication::translate("Widget", "5", nullptr));
        checkBox06->setText(QString());
        pushButton06->setText(QCoreApplication::translate("Widget", "6", nullptr));
        checkBox07->setText(QString());
        pushButton07->setText(QCoreApplication::translate("Widget", "7", nullptr));
        checkBox08->setText(QString());
        pushButton08->setText(QCoreApplication::translate("Widget", "8", nullptr));
        checkBox09->setText(QString());
        pushButton09->setText(QCoreApplication::translate("Widget", "9", nullptr));
        checkBox10->setText(QString());
        pushButton10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        checkBox11->setText(QString());
        pushButton11->setText(QCoreApplication::translate("Widget", "11", nullptr));
        checkBox12->setText(QString());
        pushButton12->setText(QCoreApplication::translate("Widget", "12", nullptr));
        checkBoxLoopSent->setText(QCoreApplication::translate("Widget", "LoopSent", nullptr));
        labelMs->setText(QCoreApplication::translate("Widget", "ms", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("Widget", "Save", nullptr));
        pushButtonLoad->setText(QCoreApplication::translate("Widget", "Load", nullptr));
        pushButtonReset->setText(QCoreApplication::translate("Widget", "Reset", nullptr));
        groupBoxDownAll->setTitle(QString());
        groupBoxDownRightUp->setTitle(QString());
        pushButtonCloseSerial->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButtonReceiveClear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        checkBoxReceiveTime->setText(QCoreApplication::translate("Widget", "\346\216\245\346\224\266\346\227\266\351\227\264", nullptr));
        checkBoxHexShow->setText(QCoreApplication::translate("Widget", " HEX\346\230\276\347\244\272", nullptr));
        pushButtonExeMod->setText(QCoreApplication::translate("Widget", " \350\277\220\350\241\214\346\250\241\345\274\217", nullptr));
        pushButtonHideTable->setText(QCoreApplication::translate("Widget", "\351\232\220\350\227\217\351\235\242\346\235\277", nullptr));
        pushButtonReceiveSave->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230\346\216\245\346\224\266", nullptr));
        checkBoxAutoChange->setText(QCoreApplication::translate("Widget", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
        pushButtonDownloadMod->setText(QCoreApplication::translate("Widget", "\344\270\213\350\275\275\346\250\241\345\274\217", nullptr));
        pushButtonHideHistory->setText(QCoreApplication::translate("Widget", "\351\232\220\350\227\217\345\216\206\345\217\262", nullptr));
        groupBoxDownRightDown->setTitle(QString());
        checkBoxSendInTime->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        lineEditMS->setText(QCoreApplication::translate("Widget", "1000", nullptr));
        labelMS->setText(QCoreApplication::translate("Widget", "ms/\346\254\241", nullptr));
        checkBoxNewLine->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\226\260\350\241\214", nullptr));
        checkBoxHexSend->setText(QCoreApplication::translate("Widget", "HEX\345\217\221\351\200\201", nullptr));
        checkBoxFormatInput->setText(QCoreApplication::translate("Widget", "\346\240\274\345\274\217\350\276\223\345\205\245", nullptr));
        pushButtonSend->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        lineEditSendText->setText(QCoreApplication::translate("Widget", "Hello World! This is BaiYu~", nullptr));
        groupBoxParams->setTitle(QString());
        labelSerialNum->setText(QCoreApplication::translate("Widget", "\344\270\262\345\217\243", nullptr));
        labelBoautRate->setText(QCoreApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        comboBoxBoautRate->setItemText(0, QCoreApplication::translate("Widget", "4800", nullptr));
        comboBoxBoautRate->setItemText(1, QCoreApplication::translate("Widget", "9600", nullptr));
        comboBoxBoautRate->setItemText(2, QCoreApplication::translate("Widget", "19200", nullptr));
        comboBoxBoautRate->setItemText(3, QCoreApplication::translate("Widget", "38400", nullptr));
        comboBoxBoautRate->setItemText(4, QCoreApplication::translate("Widget", "57600", nullptr));
        comboBoxBoautRate->setItemText(5, QCoreApplication::translate("Widget", "74880", nullptr));
        comboBoxBoautRate->setItemText(6, QCoreApplication::translate("Widget", "115200", nullptr));
        comboBoxBoautRate->setItemText(7, QCoreApplication::translate("Widget", "230400", nullptr));
        comboBoxBoautRate->setItemText(8, QCoreApplication::translate("Widget", "460800", nullptr));
        comboBoxBoautRate->setItemText(9, QCoreApplication::translate("Widget", "576000", nullptr));

        labelDataBit->setText(QCoreApplication::translate("Widget", " \346\225\260\346\215\256\344\275\215", nullptr));
        comboBoxDataBit->setItemText(0, QCoreApplication::translate("Widget", "5", nullptr));
        comboBoxDataBit->setItemText(1, QCoreApplication::translate("Widget", "6", nullptr));
        comboBoxDataBit->setItemText(2, QCoreApplication::translate("Widget", "7", nullptr));
        comboBoxDataBit->setItemText(3, QCoreApplication::translate("Widget", "8", nullptr));
        comboBoxDataBit->setItemText(4, QCoreApplication::translate("Widget", "None", nullptr));

        labelCheckBit->setText(QCoreApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", nullptr));
        comboBoxCheckBit->setItemText(0, QCoreApplication::translate("Widget", "None", nullptr));
        comboBoxCheckBit->setItemText(1, QCoreApplication::translate("Widget", "Even", nullptr));
        comboBoxCheckBit->setItemText(2, QCoreApplication::translate("Widget", "Mark", nullptr));
        comboBoxCheckBit->setItemText(3, QCoreApplication::translate("Widget", "Odd", nullptr));
        comboBoxCheckBit->setItemText(4, QCoreApplication::translate("Widget", "Space", nullptr));

        labelStopBit->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        comboBoxStopBit->setItemText(0, QCoreApplication::translate("Widget", "One", nullptr));
        comboBoxStopBit->setItemText(1, QCoreApplication::translate("Widget", "One And Half", nullptr));
        comboBoxStopBit->setItemText(2, QCoreApplication::translate("Widget", "Two", nullptr));
        comboBoxStopBit->setItemText(3, QCoreApplication::translate("Widget", "No", nullptr));
        comboBoxStopBit->setItemText(4, QString());

        labelFlowControl->setText(QCoreApplication::translate("Widget", "\346\265\201\346\216\247", nullptr));
        comboBoxFlowControl->setItemText(0, QCoreApplication::translate("Widget", "No", nullptr));
        comboBoxFlowControl->setItemText(1, QCoreApplication::translate("Widget", "Hard", nullptr));
        comboBoxFlowControl->setItemText(2, QCoreApplication::translate("Widget", "Soft", nullptr));
        comboBoxFlowControl->setItemText(3, QCoreApplication::translate("Widget", "UnKown", nullptr));

        labelSendStatus->setText(QCoreApplication::translate("Widget", "Send Ok!", nullptr));
        labelReceived->setText(QCoreApplication::translate("Widget", "Received:0", nullptr));
        labelSendCnt->setText(QCoreApplication::translate("Widget", "Send:0", nullptr));
        labelCurrentDate->setText(QCoreApplication::translate("Widget", "2025.9.14", nullptr));
        labelCurrentTime->setText(QCoreApplication::translate("Widget", "16 : 33", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
