#include "connectdialog.h"
#include "ui_connectdialog.h"


#include <QCanBus>
#include <QDebug>

connectDialog::connectDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::connectDialog)
{
    ui->setupUi(this);
    ui->loopbackBox->addItem(tr("unspecified"),QVariant());
    ui->loopbackBox->addItem(tr("false"),QVariant(false));
    ui->loopbackBox->addItem(tr("true"),QVariant(true));
    ui->loopbackBox_2->addItem(tr("unspecified"),QVariant());
    ui->loopbackBox_2->addItem(tr("false"),QVariant(false));
    ui->loopbackBox_2->addItem(tr("true"),QVariant(true));

    ui->receiveOwnBox->addItem(tr("unspecified"), QVariant());
    ui->receiveOwnBox->addItem(tr("false"), QVariant(false));
    ui->receiveOwnBox->addItem(tr("true"), QVariant(true));
    ui->receiveOwnBox_2->addItem(tr("unspecified"), QVariant());
    ui->receiveOwnBox_2->addItem(tr("false"), QVariant(false));
    ui->receiveOwnBox_2->addItem(tr("true"), QVariant(true));

    ui->canFdBox->addItem(tr("false"), QVariant(false));
    ui->canFdBox->addItem(tr("true"), QVariant(true));
    ui->canFdBox_2->addItem(tr("false"), QVariant(false));
    ui->canFdBox_2->addItem(tr("true"), QVariant(true));

    ui->buttonBox->setEnabled(m_buttonBoxEnabled);
    ui->tabWidget_configBox->setTabEnabled(0, false);
    ui->tabWidget_configBox->setTabEnabled(1, false);

    on_SenderBox_clicked(m_currentSenderSettings.SenderBoxEnabled);

    ui->dataBitrateBox->setFlexibleDataRateEnabled(true);
    ui->dataBitrateBox_2->setFlexibleDataRateEnabled(true);

    on_ReceiverBox_clicked(m_currentReceiverSettings.ReceiverBoxEnabled);
}

connectDialog::~connectDialog()
{
    delete ui;
}

connectDialog::SenderSettings connectDialog::sendersettings() const{
    return m_currentSenderSettings;
}
connectDialog::ReceiverSettings connectDialog::receiversettings() const{
    return m_currentReceiverSettings;
}
void connectDialog::buttionBoxStatus(){
    if ((m_isSenderEnabled || m_isReceiverEnabled) && m_configBoxEnabled){
        ui->buttonBox->setEnabled(true);
    }
    else{
        ui->buttonBox->setEnabled(false);
    }
}
/*************************************************************************
 *
 *              Setup Sender Box
 *
 ************************************************************************/
void connectDialog::on_pluginListBox_currentTextChanged(const QString &plugin)
{

    ui->interfaceListBox->clear();
    m_interfaces = QCanBus::instance()->availableDevices(plugin);
    for (const QCanBusDeviceInfo &info : qAsConst(m_interfaces))
        ui->interfaceListBox->addItem(info.name());
}

void connectDialog::on_interfaceListBox_currentTextChanged(const QString &interface)
{
    ui->isVirtual->setChecked(false);
    ui->isFlexibleDataRateCapable->setChecked(false);
    for (const QCanBusDeviceInfo &info : qAsConst(m_interfaces))
    {
        if (info.name() == interface){
            ui->label_InterfaceDes_->setText(info.description());
             QString SN = info.serialNumber();
             if (SN.length()<=1)
                 SN = "No real interface found";
             ui->label_SN_->setText(SN);
             ui->label_InterfaceName_->setText(tr("Channel: %1").arg(info.channel()));
             ui->isVirtual->setChecked(info.isVirtual());
             ui->isFlexibleDataRateCapable->setChecked(info.hasFlexibleDataRate());
             break;

        }

    }

}

void connectDialog::on_SenderBox_clicked(bool checked)
{
    m_isSenderEnabled = checked;
    m_currentSenderSettings.SenderBoxEnabled = checked;
    ui->tabWidget_configBox->setTabEnabled(0, checked);
    if (m_isSenderEnabled){
        ui->pluginListBox->addItem(vectorplugin);
    }else {
        ui->pluginListBox->clear();
        ui->interfaceListBox->clear();
        ui->label_InterfaceDes_->clear();
        ui->label_InterfaceName_->clear();
        ui->label_SN_->clear();
        ui->isVirtual->setChecked(false);
        ui->isFlexibleDataRateCapable->setChecked(false);
        m_isSenderEnabled = false;
    }
    buttionBoxStatus();

}

/*************************************************************************
 *
 *              Setup Receiver Box
 *
 ************************************************************************/
void connectDialog::on_pluginListBox_2_currentTextChanged(const QString &plugin)
{
    ui->interfaceListBox_2->clear();
    m_interfaces = QCanBus::instance()->availableDevices(plugin);
    for (const QCanBusDeviceInfo &info : qAsConst(m_interfaces))
        ui->interfaceListBox_2->addItem(info.name());
}

void connectDialog::on_interfaceListBox_2_currentTextChanged(const QString &interface)
{
    ui->isVirtual_2->setChecked(false);
    ui->isFlexibleDataRateCapable_2->setChecked(false);
    for (const QCanBusDeviceInfo &info : qAsConst(m_interfaces))
    {
        if (info.name() == interface){
            ui->label_InterfaceDes_1->setText(info.description());
             QString SN = info.serialNumber();
             if (SN.length()<=1)
                 SN = "No real interface found";
             ui->label_SN_1->setText(SN);
             ui->label_InterfaceName_1->setText(tr("Channel: %1").arg(info.channel()));
             ui->isVirtual_2->setChecked(info.isVirtual());
             ui->isFlexibleDataRateCapable_2->setChecked(info.hasFlexibleDataRate());
             break;

        }

    }

}

void connectDialog::on_ReceiverBox_clicked(bool checked)
{
    m_isReceiverEnabled = checked;
    m_currentReceiverSettings.ReceiverBoxEnabled = checked;
    ui->tabWidget_configBox->setTabEnabled(1, checked);
    if (m_isReceiverEnabled){
        ui->pluginListBox_2->addItem(vectorplugin);
    }else {
        ui->pluginListBox_2->clear();
        ui->interfaceListBox_2->clear();
        ui->label_InterfaceDes_1->clear();
        ui->label_InterfaceName_1->clear();
        ui->label_SN_1->clear();
        ui->isVirtual_2->setChecked(false);
        ui->isFlexibleDataRateCapable_2->setChecked(false);
        m_isReceiverEnabled = false;
    }
    buttionBoxStatus();
}

/*************************************************************************
 *
 *          accect current setting or reject current setting
 *
 ************************************************************************/
void connectDialog::on_buttonBox_accepted()
{
    updateSettings();
    // accept();

}

void connectDialog::on_buttonBox_rejected()
{
    reverSettings();
    reject();

}
/*************************************************************************
 *
 *          setup configuration box
 *
 ************************************************************************/
QString connectDialog::configurationValueSender(QCanBusDevice::ConfigurationKey key){
    QVariant result;
    for (const ConfigurationItem &item : qAsConst(m_currentSenderSettings.sen_configurations)){
        if (item.first == key){
            result = item.second;
            break;
        }
    }
    if (result.isNull() && (key == QCanBusDevice::LoopbackKey || key == QCanBusDevice::ReceiveOwnKey)){
        return tr("unspecified");
    }
    return result.toString();
}

QString connectDialog::configurationValueReceiver(QCanBusDevice::ConfigurationKey key){
    QVariant result;
    for (const ConfigurationItem &item : qAsConst(m_currentReceiverSettings.rec_configurations)){
        if (item.first == key){
            result = item.second;
            break;
        }
    }
    if (result.isNull() && (key == QCanBusDevice::LoopbackKey || key == QCanBusDevice::ReceiveOwnKey)){
        return tr("unspecified");
    }
    return result.toString();
}


void connectDialog::reverSettings(){
    ui->pluginListBox->setCurrentText(m_currentSenderSettings.pluginName);
    ui->interfaceListBox->setCurrentText(m_currentSenderSettings.deviceInterfaceName);
    ui->pluginListBox_2->setCurrentText(m_currentReceiverSettings.pluginName);
    ui->interfaceListBox_2->setCurrentText(m_currentReceiverSettings.deviceInterfaceName);
    ui->configurationBox->setChecked(m_configBoxEnabled);

    // Sender
    if (m_configBoxEnabled && m_isSenderEnabled)
    {
        QString value = configurationValueSender(QCanBusDevice::LoopbackKey);
        ui->loopbackBox->setCurrentText(value);

        value = configurationValueSender(QCanBusDevice::ReceiveOwnKey);
        ui->receiveOwnBox->setCurrentText(value);

        value = configurationValueSender(QCanBusDevice::ErrorFilterKey);
        ui->errorFilterEdit->setText(value);

        value = configurationValueSender(QCanBusDevice::BitRateKey);
        ui->bitrateBox->setCurrentText(value);

        value = configurationValueSender(QCanBusDevice::CanFdKey);
        ui->canFdBox->setCurrentText(value);

        value = configurationValueSender(QCanBusDevice::DataBitRateKey);
        ui->dataBitrateBox->setCurrentText(value);
    }

    // Recevier
    if (m_configBoxEnabled && m_isReceiverEnabled)
    {
        QString value2 = configurationValueReceiver(QCanBusDevice::LoopbackKey);
        ui->loopbackBox_2->setCurrentText(value2);

        value2 = configurationValueReceiver(QCanBusDevice::ReceiveOwnKey);
        ui->receiveOwnBox_2->setCurrentText(value2);

        value2 = configurationValueReceiver(QCanBusDevice::ErrorFilterKey);
        ui->errorFilterEdit_2->setText(value2);

        value2 = configurationValueReceiver(QCanBusDevice::BitRateKey);
        ui->bitrateBox_2->setCurrentText(value2);

        value2 = configurationValueReceiver(QCanBusDevice::CanFdKey);
        ui->canFdBox_2->setCurrentText(value2);

        value2 = configurationValueReceiver(QCanBusDevice::DataBitRateKey);
        ui->dataBitrateBox_2->setCurrentText(value2);
    }
}

void connectDialog::updateSettings(){
    if (m_configBoxEnabled && m_isSenderEnabled){

        m_currentSenderSettings.pluginName = ui->pluginListBox->currentText();
        m_currentSenderSettings.deviceInterfaceName = ui->interfaceListBox->currentText();
        m_currentSenderSettings.sen_configurations.clear();
        m_currentSenderSettings.SenderBoxEnabled = ui->SenderBox->isChecked();
        m_currentSenderSettings.useConfigurationEnabled = ui->configurationBox->isChecked();
        if (ui->loopbackBox->currentIndex() != 0){
            ConfigurationItem item;
            item.first = QCanBusDevice::LoopbackKey;
            item.second = ui->loopbackBox->currentData();
            m_currentSenderSettings.sen_configurations.append(item);
        }

        // prozess ReceivOwnKey
        if (ui->receiveOwnBox->currentIndex() != 0){
            ConfigurationItem item;
            item.first = QCanBusDevice::ReceiveOwnKey;
            item.second = ui->receiveOwnBox->currentData();
            m_currentSenderSettings.sen_configurations.append(item);
        }

        // prozess error filter
        if (!ui->errorFilterEdit->text().isEmpty()){
            QString value = ui->errorFilterEdit->text();
            bool ok = false;
            int dec = value.toInt(&ok);
            if (ok){
                ConfigurationItem item;
                item.first = QCanBusDevice::ErrorFilterKey;
                item.second = QVariant::fromValue(QCanBusFrame::FrameErrors(dec));
                m_currentSenderSettings.sen_configurations.append(item);
            }
        }

        // process raw filter list
        if (!ui->rawFilterEdit->text().isEmpty()) {
            //TODO current ui not sfficient to reflect this param
        }

        const int bitrate = ui->bitrateBox->bitRate();
        qDebug() << "Sender birate: " << bitrate;
        if (bitrate > 0){
            const ConfigurationItem item(QCanBusDevice::BitRateKey, QVariant(bitrate));
            m_currentSenderSettings.sen_configurations.append(item);
        }

        // process CAN FD setting
        ConfigurationItem fdItem;
        fdItem.first = QCanBusDevice::CanFdKey;
        fdItem.second = ui->canFdBox->currentData();
        m_currentSenderSettings.sen_configurations.append(fdItem);

        const int dataBitrate = ui->dataBitrateBox->bitRate();
        if (dataBitrate > 0){
            const ConfigurationItem item(QCanBusDevice::DataBitRateKey, QVariant(dataBitrate));
            m_currentSenderSettings.sen_configurations.append(item);
        }

    }


    if (m_configBoxEnabled && m_isReceiverEnabled){
        m_currentReceiverSettings.pluginName = ui->pluginListBox_2->currentText();
        m_currentReceiverSettings.deviceInterfaceName = ui->interfaceListBox_2->currentText();
        m_currentReceiverSettings.rec_configurations.clear();
        m_currentReceiverSettings.ReceiverBoxEnabled = ui->ReceiverBox->isChecked();
        m_currentReceiverSettings.useConfigurationEnabled = ui->configurationBox->isChecked();

        // process LoopBack
        if (ui->loopbackBox_2->currentIndex() != 0){
            ConfigurationItem item;
            item.first = QCanBusDevice::LoopbackKey;
            item.second = ui->loopbackBox_2->currentData();
            m_currentReceiverSettings.rec_configurations.append(item);
        }

        // prozess ReceivOwnKey
        if (ui->receiveOwnBox_2->currentIndex() != 0){
            ConfigurationItem item;
            item.first = QCanBusDevice::ReceiveOwnKey;
            item.second = ui->receiveOwnBox_2->currentData();
            m_currentReceiverSettings.rec_configurations.append(item);
        }

        // prozess error filter
        if (!ui->errorFilterEdit_2->text().isEmpty()){
            QString value = ui->errorFilterEdit_2->text();
            bool ok = false;
            int dec = value.toInt(&ok);
            if (ok){
                ConfigurationItem item;
                item.first = QCanBusDevice::ErrorFilterKey;
                item.second = QVariant::fromValue(QCanBusFrame::FrameErrors(dec));
                m_currentReceiverSettings.rec_configurations.append(item);
            }
        }

        // process raw filter list
        if (!ui->rawFilterEdit_2->text().isEmpty()) {
            //TODO current ui not sfficient to reflect this param
        }

        const int bitrate = ui->bitrateBox_2->bitRate();
        qDebug() << "Receiver birate: " << bitrate;
        if (bitrate > 0){
            const ConfigurationItem item(QCanBusDevice::BitRateKey, QVariant(bitrate));
            m_currentReceiverSettings.rec_configurations.append(item);
        }

        // process CAN FD setting
        ConfigurationItem fdItem;
        fdItem.first = QCanBusDevice::CanFdKey;
        fdItem.second = ui->canFdBox_2->currentData().toBool();
        m_currentReceiverSettings.rec_configurations.append(fdItem);

        const int dataBitrate = ui->dataBitrateBox_2->bitRate();
        if (dataBitrate > 0){
            const ConfigurationItem item(QCanBusDevice::DataBitRateKey, QVariant(dataBitrate));
            m_currentReceiverSettings.rec_configurations.append(item);
        }
    }

}

void connectDialog::on_configurationBox_clicked(bool checked)
{
    m_configBoxEnabled = checked;
    buttionBoxStatus();
}

















