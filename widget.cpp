#include "widget.h"
#include "./ui_widget.h"
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QList>
#include <QString>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->serialPort = new QSerialPort(this);
    this->setLayout(ui->gridLayoutGlobal);
    QList<QSerialPortInfo> serialList = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &serialInfo : serialList) {
        qDebug() << serialInfo.portName();
        ui->comboBoxSerialNum->addItem(serialInfo.portName());
    }

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonCloseOpenSerial_clicked()
{
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
            serialPort->setParity(QSerialPort::Parity::UnknownParity);
            break;
    }   
    // 5.配置停止位
    serialPort->setStopBits(static_cast<QSerialPort::StopBits>(ui->comboBoxStopBit->currentText().toUInt()));
    // 6.流控
    if(ui->comboBoxFlowControl->currentText() == "None") serialPort->setFlowControl(QSerialPort::FlowControl::NoFlowControl);
    else serialPort->setFlowControl(static_cast<QSerialPort::FlowControl>(ui->comboBoxFlowControl->currentText().toUInt()));
}

