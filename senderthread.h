#ifndef SENDERTHREAD_H
#define SENDERTHREAD_H
#include <QThread>
#include <QDebug>

class SenderThread : public QThread
{
public:
    explicit SenderThread(QObject *parent = nullptr);

    void run();
};

#endif // SENDERTHREAD_H
