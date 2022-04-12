#include "mainwindow.h"
#include <QApplication>
// #include <senderthread.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // qDebug() << "Main thread started with" << QThread::currentThreadId() << ".";

    /*SenderThread* thread1 = new SenderThread();
    // SenderThread* thread2 = new SenderThread();
    // Thread wird gestartet und damit dei überschriebene run() Methode.
    // Die main Funktion läuft indes weiter.
    thread1->start(QThread::HighestPriority);
    // thread2->start();

    qDebug() << "Thread is started. Main programm continues.";

    // wir warten auf das Ende des Threads. HauptThread / main Funktion wird an dieser Stelle blokiert.
    QThread::sleep(1);

    qDebug() << "Waiting for end of thread.";
    QThread::sleep(1);
    thread1 -> requestInterruption();

    thread1 -> wait();

    qDebug() << "Done";
    thread1 -> quit();
    thread1 -> wait(); // wait for end of thread

    delete thread1;*/

    // clean up
    return a.exec();
}
