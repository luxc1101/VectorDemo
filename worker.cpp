#include "worker.h"
#include <QDebug>
worker::worker(QObject *parent) : QObject(parent)
{

}

void worker::computeFaculty(int value){
    qDebug() << "Running thread" << QThread::currentThreadId();

    int result = 1;
    for(int i = 1; i<=value; i++){
        emit progressUpdated(i-1, value);
        qDebug() << " Progress of " << QThread::currentThread() << " is " << i << "/" << value;

        if(QThread::currentThread()->isInterruptionRequested()){
            qDebug() << "Interrupting now.";
            return;
        }
        QThread::sleep(1);
        result *= i;
    }
    qDebug()<<"Thread" << QThread::currentThreadId() << "finished.";

    emit progressUpdated(value,value);
    emit valueComputed(result);

}

void worker::testEvent(){
    qDebug() << "Test event occured. Thread ID:" << QThread::currentThreadId();
    QThread::sleep(2);
}
