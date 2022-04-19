#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QCanBusDevice>
#include <QMainWindow>
#include <QLabel>
#include <worker.h>
#include <receiverworker.h>
// #include <computefactorialthread.h>

// class connectDialog;
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
    // void connectDevice();
    // void processErrorsSender(QCanBusDevice::CanBusError) const;
    void ActionConnectable(bool value);
/*******************************************************************/
    void computationStarted();
    void computationFinished(int value);
    void progressUpdated(int item, int numberOfItems);
    void on_computeButtion_clicked();
/*******************************************************************/
private:
    Ui::MainWindow *ui = nullptr;
    QThread* rec_thread;
    ReceiverWorker* rec_worker;
    // connectDialog *m_connectDialog = nullptr;
    // void initActionsConnections();
    // QCanBusDevice *m_canDeviceSender =  nullptr;
    // QCanBusDevice *m_canDeviceReceiver =  nullptr;
    // QLabel *m_statusSender = nullptr;
    // QLabel *m_statusReceiver = nullptr;
/*******************************************************************/
    // QThread* m_thread;
    // worker* m_worker;
    // computefactorialthread* m_thread;
/*******************************************************************/



};

#endif // MAINWINDOW_H
