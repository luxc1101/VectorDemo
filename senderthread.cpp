#include "senderthread.h"

SenderThread::SenderThread(QObject *parent) : QThread(parent)
{

}

void SenderThread::run(){
    qDebug()<< "Runing thread" << QThread::currentThreadId();
    // run methode führt lang andauernde Berechnung durch. currentThreadID() gibt den Identifier des aktuellen Thread aus
    for(int i = 0; i<40; i++){
        qDebug()<< "  Progress of " << QThread::currentThreadId() << " is "
                << (i+1) << "/" << 40;

        if(QThread::currentThread()->isInterruptionRequested())
        {
            qDebug() <<"This thread should be interrupted.";
            return;
         }
        long l = 0;
        for(int j = 0; j < 100000; j++){
            for (int k = 0; k<1000; k++){
                l += j*k;
            }
        }
    }
    qDebug() << "Thread" << QThread::currentThreadId() << "finished.";
}
