#ifndef CONNECTDIALOG_H
#define CONNECTDIALOG_H
#include <QCanBusDevice>
#include <QCanBusDeviceInfo>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class connectDialog;
}
QT_END_NAMESPACE

class connectDialog : public QDialog
{
    Q_OBJECT

public:
    typedef QPair<QCanBusDevice::ConfigurationKey, QVariant> ConfigurationItem;
    // friend class MainWindow;
    struct ReceiverSettings
    {
        QString pluginName;
        QString deviceInterfaceName;
        QList<ConfigurationItem> rec_configurations;
        bool useConfigurationEnabled = false;
        // bool SenderBoxEnabled = false;
        bool ReceiverBoxEnabled = false;
    };
    struct SenderSettings
    {
        QString pluginName;
        QString deviceInterfaceName;
        QList<ConfigurationItem> sen_configurations;
        bool useConfigurationEnabled = false;
        bool SenderBoxEnabled = false;
        // bool ReceiverBoxEnabled = false;
    };

    SenderSettings sendersettings() const;
    ReceiverSettings receiversettings() const;
    explicit connectDialog(QWidget *parent = nullptr);
    ~connectDialog();

    void buttionBoxStatus();

private slots:
    void on_pluginListBox_currentTextChanged(const QString &plugin);

    void on_interfaceListBox_currentTextChanged(const QString &interface);

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_pluginListBox_2_currentTextChanged(const QString &plugin);

    void on_interfaceListBox_2_currentTextChanged(const QString &interface);

    void on_ReceiverBox_clicked(bool checked);

    void on_SenderBox_clicked(bool checked);

    void on_configurationBox_clicked(bool checked);

private:
    QString configurationValueSender(QCanBusDevice::ConfigurationKey key);
    QString configurationValueReceiver(QCanBusDevice::ConfigurationKey key);
    Ui::connectDialog *ui;
    SenderSettings m_currentSenderSettings;
    ReceiverSettings m_currentReceiverSettings;
    QList<QCanBusDeviceInfo> m_interfaces;
    QString vectorplugin = "vectorcan";
    bool m_isSenderEnabled = false;
    bool m_isReceiverEnabled = false;
    bool m_configBoxEnabled = false;
    bool m_buttonBoxEnabled = false;

    void reverSettings();
    void updateSettings();
};

#endif // CONNECTDIALOG_H
