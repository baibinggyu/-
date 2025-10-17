#include "mycombobox.h"

#include <QMouseEvent>


MyComboBox::MyComboBox(QWidget *parent):QComboBox(parent)
{

}
void MyComboBox::mousePressEvent(QMouseEvent *e){
    // 发送一个信号
    if(e->button() == Qt::LeftButton){
        emit this->refresh();
    }
    QComboBox::mousePressEvent(e);

}

