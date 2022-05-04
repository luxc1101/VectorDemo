/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionClear_log;
    QAction *actionQuit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *sendFrameBox;
    QGroupBox *TraceMsgBox;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_receiver;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit_reseiveMsg;
    QLabel *receiverCanBusStatusLabel;
    QWidget *tab_sender;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *textEdit_sendMsg;
    QLineEdit *inputValue;
    QPushButton *computeButtion;
    QLabel *resultlabel;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QMenu *menuCalls;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 450);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon1);
        actionClear_log = new QAction(MainWindow);
        actionClear_log->setObjectName(QString::fromUtf8("actionClear_log"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear_log->setIcon(icon2);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        sendFrameBox = new QGroupBox(centralWidget);
        sendFrameBox->setObjectName(QString::fromUtf8("sendFrameBox"));

        verticalLayout_2->addWidget(sendFrameBox);

        TraceMsgBox = new QGroupBox(centralWidget);
        TraceMsgBox->setObjectName(QString::fromUtf8("TraceMsgBox"));
        verticalLayout = new QVBoxLayout(TraceMsgBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(TraceMsgBox);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_receiver = new QWidget();
        tab_receiver->setObjectName(QString::fromUtf8("tab_receiver"));
        verticalLayout_3 = new QVBoxLayout(tab_receiver);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textEdit_reseiveMsg = new QTextEdit(tab_receiver);
        textEdit_reseiveMsg->setObjectName(QString::fromUtf8("textEdit_reseiveMsg"));

        verticalLayout_3->addWidget(textEdit_reseiveMsg);

        receiverCanBusStatusLabel = new QLabel(tab_receiver);
        receiverCanBusStatusLabel->setObjectName(QString::fromUtf8("receiverCanBusStatusLabel"));

        verticalLayout_3->addWidget(receiverCanBusStatusLabel);

        tabWidget->addTab(tab_receiver, QString());
        tab_sender = new QWidget();
        tab_sender->setObjectName(QString::fromUtf8("tab_sender"));
        verticalLayout_4 = new QVBoxLayout(tab_sender);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        textEdit_sendMsg = new QTextEdit(tab_sender);
        textEdit_sendMsg->setObjectName(QString::fromUtf8("textEdit_sendMsg"));

        verticalLayout_4->addWidget(textEdit_sendMsg);

        tabWidget->addTab(tab_sender, QString());

        verticalLayout->addWidget(tabWidget);

        inputValue = new QLineEdit(TraceMsgBox);
        inputValue->setObjectName(QString::fromUtf8("inputValue"));

        verticalLayout->addWidget(inputValue);

        computeButtion = new QPushButton(TraceMsgBox);
        computeButtion->setObjectName(QString::fromUtf8("computeButtion"));

        verticalLayout->addWidget(computeButtion);

        resultlabel = new QLabel(TraceMsgBox);
        resultlabel->setObjectName(QString::fromUtf8("resultlabel"));

        verticalLayout->addWidget(resultlabel);

        progressBar = new QProgressBar(TraceMsgBox);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);


        verticalLayout_2->addWidget(TraceMsgBox);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 480, 22));
        menuCalls = new QMenu(menuBar);
        menuCalls->setObjectName(QString::fromUtf8("menuCalls"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuCalls->menuAction());
        menuCalls->addAction(actionConnect);
        menuCalls->addAction(actionDisconnect);
        menuCalls->addAction(actionClear_log);
        menuCalls->addAction(actionQuit);
        mainToolBar->addAction(actionConnect);
        mainToolBar->addAction(actionDisconnect);
        mainToolBar->addAction(actionClear_log);
        mainToolBar->addAction(actionQuit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        actionDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        actionClear_log->setText(QCoreApplication::translate("MainWindow", "Clear log", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        sendFrameBox->setTitle(QCoreApplication::translate("MainWindow", "Send CAN frame", nullptr));
        TraceMsgBox->setTitle(QCoreApplication::translate("MainWindow", "Trace Window", nullptr));
        receiverCanBusStatusLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_receiver), QCoreApplication::translate("MainWindow", "Receiver", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_sender), QCoreApplication::translate("MainWindow", "Sender", nullptr));
        computeButtion->setText(QCoreApplication::translate("MainWindow", "compute", nullptr));
        resultlabel->setText(QString());
        menuCalls->setTitle(QCoreApplication::translate("MainWindow", "Calls", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
