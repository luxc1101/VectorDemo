#include "receiverworker.h"
#include "connectdialog.h"
#include <QDebug>
ReceiverWorker::ReceiverWorker(QObject *parent) : QObject(parent)
{

}
void ReceiverWorker::processErrorsReceiver(QCanBusDevice::CanBusError error) const{
    switch (error) {
    case QCanBusDevice::ReadError:
    case QCanBusDevice::WriteError:
    case QCanBusDevice::ConnectionError:
    case QCanBusDevice::ConfigurationError:
        m_statusReceiver->setText(m_canDeviceReceiver->errorString());
        break;
    default:
        break;
    }
}

void ReceiverWorker::connectDevice(){
    qDebug() << "Running Receiver Thread Methode connectDevice" << QThread::currentThreadId();
    const connectDialog::ReceiverSettings RecConfig = m_connectDialog->receiversettings();

    QString errorString;
    m_canDeviceReceiver = QCanBus::instance()->createDevice(RecConfig.pluginName, RecConfig.deviceInterfaceName,
                                                            &errorString);
    qDebug() << "DevieceReceiver:" << RecConfig.pluginName << RecConfig.deviceInterfaceName;

    if (!m_canDeviceReceiver) {
        m_statusReceiver->setText(tr("Error creating device %1, reason: %2").arg(RecConfig.pluginName).arg(errorString));
        return;
    }
    connect(m_canDeviceReceiver, &QCanBusDevice::errorOccurred, this, &ReceiverWorker::processErrorsReceiver);
    connect(m_canDeviceReceiver, &QCanBusDevice::framesReceived, this, &ReceiverWorker::processReceivedFrames);

    if (RecConfig.ReceiverBoxEnabled){
        for (const connectDialog::ConfigurationItem &item : RecConfig.rec_configurations)
        {
            // qDebug() << "item first and second:" << item.first << item.second;
            m_canDeviceReceiver->setConfigurationParameter(item.first, item.second);
        }
    }

    if (!m_canDeviceReceiver->connectDevice()){
        m_statusReceiver->setText(tr("Connection error: %1").arg(m_canDeviceReceiver->errorString()));

        delete m_canDeviceReceiver;
        m_canDeviceReceiver = nullptr;
    }else {
        emit ActionConnectable(true);
        const QVariant bitRate =
                m_canDeviceReceiver->configurationParameter(QCanBusDevice::BitRateKey);
        if (bitRate.isValid()){
            const bool isCanFd =
                    m_canDeviceReceiver->configurationParameter(QCanBusDevice::CanFdKey).toBool();
            const QVariant dataBitRate =
                    m_canDeviceReceiver->configurationParameter(QCanBusDevice::DataBitRateKey);
            qDebug() << "CANFD and databitrate:" << isCanFd << dataBitRate;
            if (isCanFd && dataBitRate.isValid()){
                m_statusReceiver->setText(tr("Plugin: %1, connected to %2 at %3 / %4 kBit/s")
                                          .arg(RecConfig.pluginName).arg(RecConfig.deviceInterfaceName)
                                          .arg(bitRate.toInt() / 1000).arg(dataBitRate.toInt() / 1000));
            }else {
                m_statusReceiver->setText(tr("Plugin: %1, connected to %2 at %3 kBit/s")
                                          .arg(RecConfig.pluginName).arg(RecConfig.deviceInterfaceName)
                                          .arg(bitRate.toInt() / 1000));
            }
        }else {
            m_statusReceiver->setText(tr("Plugin: %1, connected to %2")
                                      .arg(RecConfig.pluginName).arg(RecConfig.deviceInterfaceName));
        }

    }

}

void ReceiverWorker::disconnectDevice(){
    if (!m_canDeviceReceiver)
        return;
    m_canDeviceReceiver->disconnectDevice();
    delete m_canDeviceReceiver;
    m_canDeviceReceiver = nullptr;

    emit ActionConnectable(false);
    m_statusReceiver->setText(tr("Disconnected"));
}

static QString frameFlags(const QCanBusFrame &frame){
    QString result = QLatin1String(" ");

    if(frame.hasBitrateSwitch())
        result[1] = QLatin1Char('B');
    if(frame.hasErrorStateIndicator())
        result[2] = QLatin1Char('E');
    if(frame.hasLocalEcho())
        result[3] = QLatin1Char('L');

    return result;
}

void ReceiverWorker::processReceivedFrames(){
    if(!m_canDeviceReceiver)
        return;
    const connectDialog::ReceiverSettings RecConfig = m_connectDialog->receiversettings();
    while (m_canDeviceReceiver->framesAvailable()) {
        const QCanBusFrame frame = m_canDeviceReceiver->readFrame();

        QString view;
        if (frame.frameType() == QCanBusFrame::ErrorFrame){
            view = m_canDeviceReceiver->interpretErrorFrame(frame);
        }else {
            view = frame.toString();
        }
        const QString time = QString::fromLatin1("%1.%2  ")
                .arg(frame.timeStamp().seconds(), 5, 10, QLatin1Char(' '))
                .arg(frame.timeStamp().microSeconds() / 100, 4, 10, QLatin1Char('0'));
        const QString flags = frameFlags(frame);
        QString message = tr("TimeStamps: %1 Channel: %2 ID: 0x%3")
                .arg(time)
                .arg(RecConfig.deviceInterfaceName.back(),2, QLatin1Char(' '))
                .arg(QString::number(frame.frameId(), 16 ));
                // .arg(frame.frameId(),8,16,QLatin1Char( '0' ));
                // "TimeStamp:" + time + flags + view;

        qDebug() << message;
        // qDebug() << frame.;
        emit receivedMessage(message);

    }
}



