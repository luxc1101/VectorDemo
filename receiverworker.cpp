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






