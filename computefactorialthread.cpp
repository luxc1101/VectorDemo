#include "computefactorialthread.h"
#include <QDebug>
computefactorialthread::computefactorialthread(QObject *parent) : QThread(parent)
{

}

void computefactorialthread::run(){
    qDebug() << "Runinig thread" << QThread::currentThread();
    int result = 1;
    for(int i =1; i <= m_value; i++){
        emit progressUpdated(i-1, m_value);

        qDebug() << " Progress of " << QThread::currentThread() << " is " << i << "/" << m_value;

        if(QThread::currentThread()->isInterruptionRequested()){
            qDebug() << "Interrupting now.";
            return;
        }

        QThread::sleep(1);

        result *= i;
    }

    qDebug() << "Thread" << QThread::currentThread() << "finished";

    emit progressUpdated(m_value, m_value);
    emit valueComputed(result);
}
