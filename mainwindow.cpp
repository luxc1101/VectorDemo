#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connectdialog.h"
/*************************************************************************************/
#include "worker.h"
/*************************************************************************************/
#include "receiverworker.h"
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

    // Receiver
    rec_thread = new QThread();
    rec_worker = new ReceiverWorker();
    rec_worker->m_connectDialog = new connectDialog;
    rec_worker->m_statusReceiver = new QLabel;

    QTimer::singleShot(50, rec_worker->m_connectDialog, &connectDialog::show);

    connect(ui->actionConnect, SIGNAL(triggered()), rec_worker->m_connectDialog, SLOT(show()));
    connect(ui->actionDisconnect, SIGNAL(triggered()), rec_worker, SLOT(disconnectDevice()));
    connect(rec_worker->m_connectDialog, SIGNAL(accepted()), rec_worker, SLOT(connectDevice()));
    connect(rec_worker, SIGNAL(ActionConnectable(bool)), this, SLOT(ActionConnectable(bool)));

    rec_worker->moveToThread(rec_thread);
    rec_thread->start();
    ui->statusBar->addPermanentWidget(rec_worker->m_statusReceiver);

    qDebug() << "Main thread ID is:" << QThread::currentThread();
/*************************************************************************************/
    ui->progressBar->setRange(0,100);
    /*m_thread = new computefactorialthread();
    connect(m_thread, SIGNAL(started()), this, SLOT(computationStarted()));
    connect(m_thread, SIGNAL(finished()), this, SLOT(computationFinished()));
    connect(m_thread, SIGNAL(progressUpdated(int,int)), this, SLOT(progressUpdated(int,int)));
    connect(m_thread, SIGNAL(valueComputed(int)), ui->resultlabel, SLOT(setNum(int)));

    qDebug() << "Main thread ID is:" << QThread::currentThread();*/
    /*m_thread = new QThread();
    m_worker = new worker();
    connect(m_worker, SIGNAL(valueComputed(int)), this, SLOT(computationFinished(int)));
    connect(m_worker, SIGNAL(progressUpdated(int,int)), this, SLOT(progressUpdated(int,int)));

    m_worker->moveToThread(m_thread);
    m_thread->start();

    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), m_worker, SLOT(testEvent()));
    timer->start(1000);

    qDebug() << "Main thread ID is: " << QThread::currentThreadId();*/
/*************************************************************************************/
}

MainWindow::~MainWindow()
{
/*************************************************************************************/
    /*m_thread->requestInterruption();
    m_thread->quit();
    m_thread->wait();
    delete m_thread;
    delete m_worker;
/*************************************************************************************/
    rec_thread->quit();
    rec_thread->wait();
    delete rec_thread;
    delete rec_worker;
    delete ui;
}

void MainWindow::ActionConnectable(bool value){
    if(value){
        qDebug() << "ActionConnectable bool: " << value;
        ui->actionConnect->setEnabled(false);
        ui->actionDisconnect->setEnabled(true);
    }
    if(!value){
        qDebug() << "ActionConnectable bool: " << value;
        ui->actionConnect->setEnabled(true);
        ui->actionDisconnect->setEnabled(false);
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
    ui->computeButtion->setEnabled(false);
    // QMetaObject::invokeMethod(m_worker, "computeFaculty", Q_ARG(int, ui->inputValue->text().toInt()));

}
void MainWindow::computationStarted(){
    ui->computeButtion->setEnabled(false);

}
void MainWindow::computationFinished(int value){
    ui->resultlabel->setNum(value);
    ui->computeButtion->setEnabled(true);
}
void MainWindow::progressUpdated(int item, int numberOfItems){
    ui->progressBar->setValue(item/(double)numberOfItems * 100.0);
}
/*************************************************************************************/
