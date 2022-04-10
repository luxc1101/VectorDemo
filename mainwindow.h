#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QCanBusDevice>
#include <QMainWindow>
#include <QLabel>
#include <computefactorialthread.h>

class connectDialog;
QT_BEGIN_NAMESPACE
class QCanBusFrame;

namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void connectDevice();
    void processErrorsSender(QCanBusDevice::CanBusError) const;
/*******************************************************************/
    void computationStarted();
    void computationFinished();
    void progressUpdated(int item, int numberOfItems);
    void on_computeButtion_clicked();
/*******************************************************************/
private:
    Ui::MainWindow *ui = nullptr;
    connectDialog *m_connectDialog = nullptr;
    void initActionsConnections();
    QCanBusDevice *m_canDeviceSender =  nullptr;
    QCanBusDevice *m_canDeviceReceiver =  nullptr;
    QLabel *m_statusSender = nullptr;
    QLabel *m_statusReceiver = nullptr;
    computefactorialthread* m_thread;



};

#endif // MAINWINDOW_H