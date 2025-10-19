#include "customthread.h"

CustomThread::CustomThread(QWidget *parent)
    : QThread{parent}
{

}

void CustomThread::run() {
    while(true){
        msleep(1000);
    }
}
