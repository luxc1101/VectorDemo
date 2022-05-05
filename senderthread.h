#ifndef SENDERTHREAD_H
#define SENDERTHREAD_H
#include <QThread>
#include <QDebug>

class senderThread : public QThread
{
public:
    explicit senderThread(QObject *parent = nullptr);

    void run();
};

#endif // SENDERTHREAD_H
