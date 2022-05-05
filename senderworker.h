#ifndef SENDERWORKER_H
#define SENDERWORKER_H
#include <QObject>
#include <QThread>
#include <QCanBusDevice> // for CanBusError
#include <QCanBus>
#include <QLabel>
#include <QTimer>

class connectDialog;

class Senderworker: public QObject
{
    Q_OBJECT
public:
    explicit Senderworker(QObject *parent = nullptr);

signals:
    void ActionConnectable(bool value);
    // void sendedMessage(QString msg);
    void busStatusString(QString msg);
    void sendFrame(const QCanBusFrame &frame);

private slots:
    void connectDevice();

};

#endif // SENDERWORKER_H
