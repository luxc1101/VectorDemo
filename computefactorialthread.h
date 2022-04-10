#ifndef COMPUTEFACTORIALTHREAD_H
#define COMPUTEFACTORIALTHREAD_H

#include <QThread>
#include <QDebug>
class computefactorialthread : public QThread
{
    Q_OBJECT

public:
   explicit computefactorialthread(QObject *parent = nullptr);

    void setValues(int value){
        m_value = value;
    }
    void run();
signals:
    void progressUpdated(int item, int itemCount);
    void valueComputed(int value);

private:
    int m_value;
};

#endif // COMPUTEFACTORIALTHREAD_H
