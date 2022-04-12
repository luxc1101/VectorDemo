#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connectdialog.h"
/*************************************************************************************/
#include "worker.h"
/*************************************************************************************/
#include <QCanBus>
#include <QCanBusFrame>
#include <QCloseEvent>
#include <QDesktopServices>
#include <QTimer>
#include <QProgressBar>
#include <QThread>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_connectDialog = new connectDialog;

    initActionsConnections();
    m_statusSender = new QLabel;
    ui->statusBar->addPermanentWidget(m_statusSender);
    m_statusReceiver = new QLabel;
    ui->statusBar->addPermanentWidget(m_statusReceiver);

/*************************************************************************************/
    ui->progressBar->setRange(0,100);
    /*m_thread = new computefactorialthread();
    connect(m_thread, SIGNAL(started()), this, SLOT(computationStarted()));
    connect(m_thread, SIGNAL(finished()), this, SLOT(computationFinished()));
    connect(m_thread, SIGNAL(progressUpdated(int,int)), this, SLOT(progressUpdated(int,int)));
    connect(m_thread, SIGNAL(valueComputed(int)), ui->resultlabel, SLOT(setNum(int)));

    qDebug() << "Main thread ID is:" << QThread::currentThread();*/
    m_thread = new QThread();
    m_worker = new worker();
    connect(m_worker, SIGNAL(valueComputed(int)), this, SLOT(computationFinished(int)));
    connect(m_worker, SIGNAL(progressUpdated(int,int)), this, SLOT(progressUpdated(int,int)));

    m_worker->moveToThread(m_thread);
    m_thread->start();

    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), m_worker, SLOT(testEvent()));
    timer->start(1000);

    qDebug() << "Main thread ID is: " << QThread::currentThreadId();
/*************************************************************************************/
}

MainWindow::~MainWindow()
{
/*************************************************************************************/
    m_thread->requestInterruption();
    m_thread->quit();
    m_thread->wait();
    delete m_thread;
    delete m_worker;
/*************************************************************************************/
    delete ui;
}

void MainWindow::initActionsConnections(){
    ui->actionDisconnect->setEnabled(false);
    ui->sendFrameBox->setEnabled(false);

    connect(ui->actionConnect, &QAction::triggered,m_connectDialog,&connectDialog::show);
}

void MainWindow::processErrorsSender(QCanBusDevice::CanBusError error) const
{
    switch (error) {
    case QCanBusDevice::ReadError:
    case QCanBusDevice::WriteError:
    case QCanBusDevice::ConnectionError:
    case QCanBusDevice::ConfigurationError:
    case QCanBusDevice::UnknownError:
        m_statusSender->setText(m_canDeviceSender->errorString());
        break;
    default:
        break;
    }
}

void MainWindow::connectDevice(){
    const connectDialog::Settings sender = m_connectDialog->sendersettings();
    QString errorString;
    if (m_connectDialog->m_isSenderEnabled){
        m_canDeviceSender = QCanBus::instance()->createDevice(sender.pluginName,
                                                              sender.deviceInterfaceName,
                                                              &errorString);
        if (!m_canDeviceSender){
            m_statusSender->setText(tr("Error creating device '%1', reason: '%2'")
                                    .arg(sender.pluginName)
                                    .arg(errorString));
            return;
        }

        connect(m_canDeviceSender, &QCanBusDevice::errorOccurred, this, &MainWindow::processErrorsSender);
        if (sender.SenderBoxEnabled){

        }
    }

}
/*************************************************************************************/
void MainWindow::on_computeButtion_clicked()
{
    /*if(m_thread->isRunning()){
        return;
    }
    m_thread->setValues(ui->inputValue->text().toInt());
    m_thread->start();*/


}
void MainWindow::computationStarted(){
    ui->computeButtion->setEnabled(false);

}
void MainWindow::computationFinished(){
    ui->computeButtion->setEnabled(true);
}
void MainWindow::progressUpdated(int item, int numberOfItems){
    ui->progressBar->setValue(item/(double)numberOfItems * 100.0);
}
/*************************************************************************************/
