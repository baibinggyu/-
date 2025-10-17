#include "widget.h"
#include "./ui_widget.h"
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QList>
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QTimer>
#include <QFile>
#include <QFileDialog>
#include <QTime>
#include <QByteArray>
#include <iostream>
#include <mycombobox.h>
#define SIZE 1024
#define BUTTONSIZE 12
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->serialPort = new QSerialPort(this);
    this->timer = new QTimer(this);
    this->updateTimer = new QTimer(this);
    
    ui->groupBox->setEnabled(false);

    QObject::connect(this->serialPort,&QSerialPort::readyRead,this,&Widget::on_SerialData_readyToRead);
    QObject::connect(this->timer,&QTimer::timeout,[=](){on_pushButtonSend_clicked();});
    QObject::connect(this->updateTimer,&QTimer::timeout,[=](){update_time();});
    QObject::connect(ui->comboBoxSerialNum,&MyComboBox::refresh,this,&Widget::refreshSerialName);
    updateTimer->start(std::chrono::milliseconds(1));

    this->setLayout(ui->gridLayoutGlobal);
    this->refreshSerialName();
    ui->labelSendStatus->setText("暂未有发送信息!");
    ui->pushButtonSend->setEnabled(false);
    ui->lineEditMS->setEnabled(false);
    ui->checkBoxSendInTime->setEnabled(false);

    QList<QPushButton*> buttons;
    for(int idx = 1;idx <=  BUTTONSIZE;idx++){
        QString str;
        if(idx < 10){
            str = QString("pushButton0%1").arg(idx);
            std::cout << str.toStdString() << std::endl;
        }else{
            str = QString("pushButton%1").arg(idx);
            std::cout << str.toStdString() << std::endl;
        }
        QPushButton* btn =  findChild<QPushButton*>(str);
        if(btn != nullptr){ 
            btn->setProperty("buttonId",idx);
            buttons.emplace_back(btn);
            QObject::connect(btn,SIGNAL(clicked()),this,SLOT(on_command_button_clicked()));
        }
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonCloseOpenSerial_clicked()
{

    ui->comboBoxSerialNum->clear();
    QList<QSerialPortInfo> serialList = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &serialInfo : serialList) {
        qDebug() << serialInfo.portName();
        ui->comboBoxSerialNum->addItem(serialInfo.portName());
    }

    // 1.select port
    this->serialPort->setPortName(ui->comboBoxSerialNum->currentText());
    // 2.set 波特率
    this->serialPort->setBaudRate(ui->comboBoxBoautRate->currentText().toInt());
    // 3.配置数据位
    this->serialPort->setDataBits(static_cast<QSerialPort::DataBits>(ui->comboBoxDataBit->currentText().toUInt()));
    // 4.配置校验码
    // enum Parity {
    //     NoParity = 0,
    //     EvenParity = 2,
    //     OddParity = 3,
    //     SpaceParity = 4,
    //     MarkParity = 5,
    //     UnknownParity = -1
    // };
    switch (ui->comboBoxCheckBit->currentIndex()){
        case 0:
            serialPort->setParity(QSerialPort::Parity::NoParity);
            break;
        case 1:
            serialPort->setParity(QSerialPort::Parity::EvenParity);
            break;
        case 2:
            serialPort->setParity(QSerialPort::Parity::MarkParity);
            break;
        case 3:
            serialPort->setParity(QSerialPort::Parity::OddParity);
            break;    
        case 4:
            serialPort->setParity(QSerialPort::Parity::SpaceParity);
            break;
        default:
            serialPort->setParity(QSerialPort::Parity::NoParity);
            break;
    }   
    // 5.配置停止位
    serialPort->setStopBits(static_cast<QSerialPort::StopBits>(ui->comboBoxStopBit->currentText().toUInt()));
    // 6.流控
    if(ui->comboBoxFlowControl->currentText() == "None") serialPort->setFlowControl(QSerialPort::FlowControl::NoFlowControl);
    else serialPort->setFlowControl(static_cast<QSerialPort::FlowControl>(ui->comboBoxFlowControl->currentText().toUInt()));
    // 7.打开串口
    if(!this->serialOpenOrCloseFlag){
        ui->groupBox->setEnabled(true);
        this->serialOpenOrCloseFlag = true;
        if(serialPort->open(QIODevice::ReadWrite)){
        ui->comboBoxBoautRate->setEnabled(false);
        ui->comboBoxCheckBit->setEnabled(false);
        ui->comboBoxDataBit->setEnabled(false);
        ui->comboBoxFlowControl->setEnabled(false);
        ui->comboBoxSerialNum->setEnabled(false);
        ui->comboBoxStopBit->setEnabled(false);
        ui->pushButtonCloseOpenSerial->setText("关闭串口");
        ui->pushButtonSend->setEnabled(true);
        ui->lineEditMS->setEnabled(true);
        ui->checkBoxSendInTime->setEnabled(true);
        if(ui->lineEditMS->text().toInt() and ui->checkBoxSendInTime->isChecked()){
            this->on_checkBoxSendInTime_clicked(true);
        }
        }else{
            QMessageBox msg;
            msg.setWindowTitle("错误");
            msg.setText("串口可能被占用!");
            msg.setStandardButtons(QMessageBox::Ok);
            msg.setMinimumHeight(200);
            msg.setMinimumWidth(400);
            msg.exec();
        }
    }else{
        ui->groupBox->setEnabled(false);
        this->serialOpenOrCloseFlag = false;
        this->serialPort->close();
        ui->comboBoxBoautRate->setEnabled(true);
        ui->comboBoxCheckBit->setEnabled(true);
        ui->comboBoxDataBit->setEnabled(true);
        ui->comboBoxFlowControl->setEnabled(true);
        ui->comboBoxSerialNum->setEnabled(true);
        ui->comboBoxStopBit->setEnabled(true);
        ui->pushButtonCloseOpenSerial->setText("打开串口");
        ui->pushButtonCloseOpenSerial->setEnabled(true);
        ui->pushButtonSend->setEnabled(false);
        ui->lineEditMS->setEnabled(false);
        ui->checkBoxSendInTime->setEnabled(false);
        this->timer->stop();
    }
    
}


void Widget::on_pushButtonSend_clicked()
{   
    QString str = ui->lineEditSendText->text();
    if(str == "") return;
    QByteArray sendData  = str.toUtf8();
    if(ui->checkBoxHexSend->isChecked()){
        QString tmp = ui->lineEditSendText->text();
        if(tmp.size() & 1){
            ui->labelSendStatus->setText("Send Error");
            QMessageBox msg;
            msg.setWindowTitle("提示!");
            msg.setText("您输入的16进制格式有误!");
            msg.setStandardButtons(QMessageBox::Ok);
            msg.exec();
            return ;
        }
        QByteArray tmpArray = tmp.toLocal8Bit();
        for(char ch : tmpArray){
            if(!std::isxdigit(ch)){
                ui->labelSendStatus->setText("Send Error");
                QMessageBox msg;
                msg.setWindowTitle("提示!");
                msg.setText("您输入的16进制格式有误!");
                msg.setStandardButtons(QMessageBox::Ok);
                msg.exec();
                return ;
            }
        }
        sendData = QByteArray::fromHex(tmpArray);
    }
    int cnt = this->serialPort->write(sendData);
    if(cnt == -1)ui->labelSendStatus->setText("Send Error!"),ui->labelSendCnt->setText("Send:Error");
    else {
        writeCount += cnt;
        ui->labelSendStatus->setText("Send Ok!");
        QString labelSendStr = QString("Send:%1").arg(this->writeCount);
        ui->labelSendCnt->setText(std::ref(labelSendStr));

    }
    ui->textEditRecord->append(str);
}

void Widget::on_SerialData_readyToRead(){
    QByteArray byteData  = this->serialPort->readAll();
    QString str = QString::fromLocal8Bit(byteData) ;
    QString labelRecivedStr;
    if(ui->checkBoxHexShow->isChecked()){
        str = '\n' + str;
        QByteArray tmpHexString =  str.toUtf8();
        tmpHexString = tmpHexString.toHex();
        this->ui->textEditRev->setText(ui->textEditRev->toPlainText().toUtf8() + tmpHexString);
    }else{
        this->ui->textEditRev->append(str);
        // this->ui->textEditRev->insertPlainText(str);
    }
        labelRecivedStr = QString("Received:%1").arg(this->readCount);  
        this->readCount += str.size();
        ui->labelReceived->setText(std::ref(labelRecivedStr));
}

void Widget::on_checkBoxSendInTime_clicked(bool checked)
{
    if(checked and ui->lineEditMS->text().toInt()){
        timer->start(ui->lineEditMS->text().toInt());
        ui->lineEditMS->setEnabled(false);
        ui->lineEditSendText->setEnabled(false);
        ui->pushButtonSend->setEnabled(false);
    }else{
        timer->stop();
        ui->lineEditMS->setEnabled(true);
        ui->lineEditSendText->setEnabled(true);
        ui->pushButtonSend->setEnabled(true);
    }
}


void Widget::on_pushButtonReceiveClear_clicked()
{
    ui->textEditRev->clear();
}


void Widget::on_pushButtonReceiveSave_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("Save File"),"./serialData.txt",tr("Text(*.txt)"));
    if(!fileName.isEmpty()){
        QFile file(fileName);
        if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
            QTextStream out(&file);
            out << ui->textEditRev->toPlainText();
        }else return;
        file.close();
    }else return;   
    ui->textEditRev->clear();
}

void Widget::update_time(){
    QDateTime time = QDateTime::currentDateTime();
    QDate timeData =  time.date();
    int year = timeData.year();
    int month = timeData.month();
    int day = timeData.day();
    QTime timeTime = time.time();
    int hour = timeTime.hour();
    int minute = timeTime.minute();
    int second = timeTime.second();
    QString strLeft = QString("%1-%2-%3").arg(year).arg(month).arg(day);
    QString strRight = QString("%1:%2:%3").arg(hour).arg(minute).arg(second);
    ui->labelCurrentDate->setText(strLeft);
    ui->labelCurrentTime->setText(strRight);
}




void Widget::on_checkBoxHexShow_clicked(bool checked)
{
    if(checked){
        // 1.读取内容
            QString str = ui->textEditRev->toPlainText();
        // 2.转换
            QByteArray hex =  str.toUtf8();
            hex = hex.toHex();
        // 3.显示
            QString lastShow;
            QString temp = QString::fromUtf8(hex);
            for(int i = 0;i < static_cast<int>(temp.size());i+= 2){
                lastShow += temp.mid(i,2) + " ";
            }
            ui->textEditRev->setText(lastShow.toUpper());
    }else{
        QString str = ui->textEditRev->toPlainText();
        QByteArray  arr = str.toUtf8();
        QByteArray bStr = QByteArray::fromHex(arr);
        ui->textEditRev->setText(QString::fromUtf8(bStr));
    }

}




void Widget::on_pushButtonHideHistory_clicked(bool checked)
{
   if(checked){
    ui->pushButtonHideHistory->setText("拓展历史");
    ui->groupBoxRecord->hide();
   }else{
    ui->pushButtonHideHistory->setText("隐藏历史");
    ui->groupBoxRecord->show();
   }
}


void Widget::on_pushButtonHideTable_clicked(bool checked)
{
     if(checked){
        ui->pushButtonHideTable->setText("拓展面板");
        ui->groupBox->hide();
    }else{
        ui->pushButtonHideTable->setText("隐藏面板");
        ui->groupBox->show();
    }
}

void Widget::refreshSerialName()
{
    ui->comboBoxSerialNum->clear();
    QList<QSerialPortInfo> serialList = QSerialPortInfo::availablePorts();
    // ui->comboBoxSerialNum->setLineEdit(serialList[0]);
    for (const QSerialPortInfo &serialInfo : serialList) {
        std::cout << serialInfo.portName().toStdString() << std::endl;
        ui->comboBoxSerialNum->addItem(serialInfo.portName());
    }
    ui->labelSendStatus->setText("Com Refresh");
}

void Widget::on_command_button_clicked(){
    QPushButton *btn = qobject_cast<QPushButton*>(sender());
    int num = btn->property("buttonId").toInt();
    std::cout << num << std::endl;
    QString lineEditName;
    if(num < 10) lineEditName = QString("lineEdit0%1").arg(num);
    else lineEditName = QString("lineEdit%1").arg(num);

    QLineEdit* lineEdit = findChild<QLineEdit*> (lineEditName);
    if(lineEdit != nullptr){
        ui->lineEditSendText->setText(lineEdit->text());
    }
    QString checkBoxName;
    if(num < 10) checkBoxName = QString("checkBox0%1").arg(num);
    else checkBoxName = QString("checkBox%1").arg(num);

    QCheckBox* checkBox =findChild<QCheckBox*> (checkBoxName);
    if(checkBox->isChecked()) ui->checkBoxHexSend->setChecked(true);
    else ui->checkBoxHexSend->setChecked(false);
    on_pushButtonSend_clicked();
}




