#ifndef RECEIVERWORKER_H
#define RECEIVERWORKER_H
#include <QObject>
#include <QThread>
#include <QCanBusDevice> // for CanBusError
#include <QCanBus>
#include <QLabel>

class connectDialog;

class ReceiverWorker: public QObject
{
    Q_OBJECT
public:
    explicit ReceiverWorker(QObject *parent = nullptr);

signals:
    void ActionConnectable(bool value);
    void receivedMessage(QString msg);

private slots:
    void processErrorsReceiver(QCanBusDevice::CanBusError) const;
    void disconnectDevice();
    void connectDevice();
    void processReceivedFrames();

public:
    QCanBusDevice *m_canDeviceReceiver =  nullptr;
    QLabel *m_statusReceiver = nullptr;
    connectDialog *m_connectDialog = nullptr;

private:


};

#endif // RECEIVERWORKER_H
