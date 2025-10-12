#ifndef WIDGET_H
#define WIDGET_H

#include <QSerialPort>
#include <QWidget>
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButtonCloseOpenSerial_clicked();
    void on_pushButtonSend_clicked();
    void on_SerialData_readyToRead();
    void on_checkBoxSendInTime_clicked(bool checked);
    void on_pushButtonReceiveClear_clicked();
    void on_pushButtonReceiveSave_clicked();
    void update_time();
private:
    Ui::Widget *ui;
    QSerialPort * serialPort;
    QString serialStrRev;
    int writeCount = 0;
    int readCount = 0;
    bool serialOpenOrCloseFlag = false; // 默认关闭
    QTimer *timer;
    QTimer* updateTimer;
};
#endif // WIDGET_H
