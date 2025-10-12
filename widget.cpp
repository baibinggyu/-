#include "widget.h"
#include "./ui_widget.h"
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QList>
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QTimer>
#define SIZE 1024
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->serialPort = new QSerialPort(this);
    this->timer = new QTimer(this);
    QObject::connect(this->serialPort,&QSerialPort::readyRead,this,&Widget::on_SerialData_readyToRead);
    QObject::connect(this->timer,&QTimer::timeout,[=](){on_pushButtonSend_clicked();});

    this->setLayout(ui->gridLayoutGlobal);
    QList<QSerialPortInfo> serialList = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &serialInfo : serialList) {
        qDebug() << serialInfo.portName();
        ui->comboBoxSerialNum->addItem(serialInfo.portName());
    }
    ui->labelSendStatus->setText("暂未有发送信息!");
    ui->pushButtonSend->setEnabled(false);
    ui->lineEditMS->setEnabled(false);
    ui->checkBoxSendInTime->setEnabled(false);

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
    QByteArray sendData  = str.toUtf8();
    // if(str.size() > 1023){
    //     qDebug() << "lineEditSendTExt is so far!";
    //     QMessageBox msg;
    //     QIcon icon("提示");
    //     msg.setWindowIcon(std::ref(icon));
    //     msg.setWindowTitle("提示!");
    //     msg.setText("您输入的内容过长,请缩短后再次尝试!");
    //     msg.setStandardButtons(QMessageBox::Ok);
    //     msg.setMinimumHeight(200);
    //     msg.setMinimumWidth(400);
    //     msg.exec();
    //     return;
    // } 
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
    QString str = QString::fromLocal8Bit(byteData);
    this->ui->textEditRev->append(str);
    // this->ui->textEditRev->insertPlainText(str);
    this->readCount += str.size();
    QString labelRecivedStr = QString("Received:%1").arg(this->readCount);
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

