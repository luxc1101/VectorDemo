#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QThread>

class worker : public QObject
{
    Q_OBJECT
public:
    explicit worker(QObject *parent = nullptr);

signals:
    void valueComputed(int value);
    void progressUpdated(int item, int itemCount);

private slots:
    void testEvent();

public:
    Q_INVOKABLE void computeFaculty(int value);
};

#endif // WORKER_H
