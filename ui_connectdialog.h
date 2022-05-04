/********************************************************************************
** Form generated from reading UI file 'connectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTDIALOG_H
#define UI_CONNECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "bitratebox.h"

QT_BEGIN_NAMESPACE

class Ui_connectDialog
{
public:
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget_properties;
    QWidget *tab_Senderpro;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_ReadBaudrate_;
    QLabel *label_5;
    QLabel *label_InterfaceDes_;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_SN_;
    QLabel *label_InterfaceName_;
    QCheckBox *isFlexibleDataRateCapable;
    QCheckBox *isVirtual;
    QWidget *tab_Receiverpro;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_6;
    QLabel *label_8;
    QLabel *label_ReadBaudrate_1;
    QLabel *label_10;
    QLabel *label_InterfaceDes_1;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_SN_1;
    QLabel *label_InterfaceName_1;
    QCheckBox *isFlexibleDataRateCapable_2;
    QCheckBox *isVirtual_2;
    QGroupBox *specifyInterfaceNameBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *SenderBox;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QComboBox *interfaceListBox;
    QComboBox *pluginListBox;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *ReceiverBox;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QComboBox *pluginListBox_2;
    QLabel *label_6;
    QComboBox *interfaceListBox_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer;
    QGroupBox *configurationBox;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget_configBox;
    QWidget *Sender;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_3;
    QLineEdit *rawFilterEdit;
    QComboBox *canFdBox;
    BitRateBox *dataBitrateBox;
    QLabel *rawFilterLabel;
    QLabel *loopbackLabel;
    BitRateBox *bitrateBox;
    QLabel *canFdLabel;
    QComboBox *receiveOwnBox;
    QLabel *bitrateLabel;
    QLabel *dataBitrateLabel;
    QLineEdit *errorFilterEdit;
    QLabel *receiveOwnLabel;
    QLabel *errorFilterLabel;
    QComboBox *loopbackBox;
    QWidget *Receiver;
    QVBoxLayout *verticalLayout_11;
    QGridLayout *gridLayout_7;
    QLineEdit *rawFilterEdit_2;
    QComboBox *canFdBox_2;
    BitRateBox *dataBitrateBox_2;
    QLabel *rawFilterLabel_2;
    QLabel *loopbackLabel_2;
    BitRateBox *bitrateBox_2;
    QLabel *canFdLabel_2;
    QComboBox *receiveOwnBox_2;
    QLabel *bitrateLabel_2;
    QLabel *dataBitrateLabel_2;
    QLineEdit *errorFilterEdit_2;
    QLabel *receiveOwnLabel_2;
    QLabel *errorFilterLabel_2;
    QComboBox *loopbackBox_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *connectDialog)
    {
        if (connectDialog->objectName().isEmpty())
            connectDialog->setObjectName(QString::fromUtf8("connectDialog"));
        connectDialog->resize(510, 450);
        gridLayout_4 = new QGridLayout(connectDialog);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tabWidget_properties = new QTabWidget(connectDialog);
        tabWidget_properties->setObjectName(QString::fromUtf8("tabWidget_properties"));
        tab_Senderpro = new QWidget();
        tab_Senderpro->setObjectName(QString::fromUtf8("tab_Senderpro"));
        verticalLayout_7 = new QVBoxLayout(tab_Senderpro);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_2 = new QGroupBox(tab_Senderpro);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_ReadBaudrate_ = new QLabel(groupBox_2);
        label_ReadBaudrate_->setObjectName(QString::fromUtf8("label_ReadBaudrate_"));

        gridLayout_2->addWidget(label_ReadBaudrate_, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        label_InterfaceDes_ = new QLabel(groupBox_2);
        label_InterfaceDes_->setObjectName(QString::fromUtf8("label_InterfaceDes_"));

        gridLayout_2->addWidget(label_InterfaceDes_, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 3, 0, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        label_SN_ = new QLabel(groupBox_2);
        label_SN_->setObjectName(QString::fromUtf8("label_SN_"));

        gridLayout_2->addWidget(label_SN_, 0, 1, 1, 1);

        label_InterfaceName_ = new QLabel(groupBox_2);
        label_InterfaceName_->setObjectName(QString::fromUtf8("label_InterfaceName_"));

        gridLayout_2->addWidget(label_InterfaceName_, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        isFlexibleDataRateCapable = new QCheckBox(groupBox_2);
        isFlexibleDataRateCapable->setObjectName(QString::fromUtf8("isFlexibleDataRateCapable"));

        verticalLayout_2->addWidget(isFlexibleDataRateCapable);

        isVirtual = new QCheckBox(groupBox_2);
        isVirtual->setObjectName(QString::fromUtf8("isVirtual"));

        verticalLayout_2->addWidget(isVirtual);


        verticalLayout_7->addWidget(groupBox_2);

        tabWidget_properties->addTab(tab_Senderpro, QString());
        tab_Receiverpro = new QWidget();
        tab_Receiverpro->setObjectName(QString::fromUtf8("tab_Receiverpro"));
        verticalLayout_9 = new QVBoxLayout(tab_Receiverpro);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        groupBox_4 = new QGroupBox(tab_Receiverpro);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_8 = new QVBoxLayout(groupBox_4);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        label_ReadBaudrate_1 = new QLabel(groupBox_4);
        label_ReadBaudrate_1->setObjectName(QString::fromUtf8("label_ReadBaudrate_1"));

        gridLayout_6->addWidget(label_ReadBaudrate_1, 3, 1, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_6->addWidget(label_10, 1, 0, 1, 1);

        label_InterfaceDes_1 = new QLabel(groupBox_4);
        label_InterfaceDes_1->setObjectName(QString::fromUtf8("label_InterfaceDes_1"));

        gridLayout_6->addWidget(label_InterfaceDes_1, 1, 1, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_6->addWidget(label_11, 3, 0, 1, 1);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_6->addWidget(label_12, 2, 0, 1, 1);

        label_SN_1 = new QLabel(groupBox_4);
        label_SN_1->setObjectName(QString::fromUtf8("label_SN_1"));

        gridLayout_6->addWidget(label_SN_1, 0, 1, 1, 1);

        label_InterfaceName_1 = new QLabel(groupBox_4);
        label_InterfaceName_1->setObjectName(QString::fromUtf8("label_InterfaceName_1"));

        gridLayout_6->addWidget(label_InterfaceName_1, 2, 1, 1, 1);


        verticalLayout_8->addLayout(gridLayout_6);

        isFlexibleDataRateCapable_2 = new QCheckBox(groupBox_4);
        isFlexibleDataRateCapable_2->setObjectName(QString::fromUtf8("isFlexibleDataRateCapable_2"));

        verticalLayout_8->addWidget(isFlexibleDataRateCapable_2);

        isVirtual_2 = new QCheckBox(groupBox_4);
        isVirtual_2->setObjectName(QString::fromUtf8("isVirtual_2"));

        verticalLayout_8->addWidget(isVirtual_2);


        verticalLayout_9->addWidget(groupBox_4);

        tabWidget_properties->addTab(tab_Receiverpro, QString());

        gridLayout_4->addWidget(tabWidget_properties, 1, 0, 1, 1);

        specifyInterfaceNameBox = new QGroupBox(connectDialog);
        specifyInterfaceNameBox->setObjectName(QString::fromUtf8("specifyInterfaceNameBox"));
        verticalLayout = new QVBoxLayout(specifyInterfaceNameBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SenderBox = new QGroupBox(specifyInterfaceNameBox);
        SenderBox->setObjectName(QString::fromUtf8("SenderBox"));
        SenderBox->setEnabled(true);
        SenderBox->setCheckable(true);
        SenderBox->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(SenderBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        interfaceListBox = new QComboBox(SenderBox);
        interfaceListBox->setObjectName(QString::fromUtf8("interfaceListBox"));

        gridLayout->addWidget(interfaceListBox, 1, 1, 1, 1);

        pluginListBox = new QComboBox(SenderBox);
        pluginListBox->setObjectName(QString::fromUtf8("pluginListBox"));

        gridLayout->addWidget(pluginListBox, 0, 1, 1, 1);

        label = new QLabel(SenderBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(SenderBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout);


        verticalLayout->addWidget(SenderBox);

        ReceiverBox = new QGroupBox(specifyInterfaceNameBox);
        ReceiverBox->setObjectName(QString::fromUtf8("ReceiverBox"));
        ReceiverBox->setEnabled(true);
        ReceiverBox->setCheckable(true);
        ReceiverBox->setChecked(false);
        verticalLayout_6 = new QVBoxLayout(ReceiverBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_3 = new QLabel(ReceiverBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        pluginListBox_2 = new QComboBox(ReceiverBox);
        pluginListBox_2->setObjectName(QString::fromUtf8("pluginListBox_2"));

        gridLayout_5->addWidget(pluginListBox_2, 0, 1, 1, 1);

        label_6 = new QLabel(ReceiverBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 1, 0, 1, 1);

        interfaceListBox_2 = new QComboBox(ReceiverBox);
        interfaceListBox_2->setObjectName(QString::fromUtf8("interfaceListBox_2"));

        gridLayout_5->addWidget(interfaceListBox_2, 1, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_5);


        verticalLayout->addWidget(ReceiverBox);


        gridLayout_4->addWidget(specifyInterfaceNameBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(connectDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(235, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 4, 0, 1, 2);

        configurationBox = new QGroupBox(connectDialog);
        configurationBox->setObjectName(QString::fromUtf8("configurationBox"));
        configurationBox->setEnabled(true);
        configurationBox->setCheckable(true);
        configurationBox->setChecked(false);
        verticalLayout_4 = new QVBoxLayout(configurationBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tabWidget_configBox = new QTabWidget(configurationBox);
        tabWidget_configBox->setObjectName(QString::fromUtf8("tabWidget_configBox"));
        Sender = new QWidget();
        Sender->setObjectName(QString::fromUtf8("Sender"));
        verticalLayout_10 = new QVBoxLayout(Sender);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        rawFilterEdit = new QLineEdit(Sender);
        rawFilterEdit->setObjectName(QString::fromUtf8("rawFilterEdit"));
        rawFilterEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(rawFilterEdit, 0, 1, 1, 1);

        canFdBox = new QComboBox(Sender);
        canFdBox->setObjectName(QString::fromUtf8("canFdBox"));

        gridLayout_3->addWidget(canFdBox, 5, 1, 1, 1);

        dataBitrateBox = new BitRateBox(Sender);
        dataBitrateBox->setObjectName(QString::fromUtf8("dataBitrateBox"));

        gridLayout_3->addWidget(dataBitrateBox, 6, 1, 1, 1);

        rawFilterLabel = new QLabel(Sender);
        rawFilterLabel->setObjectName(QString::fromUtf8("rawFilterLabel"));

        gridLayout_3->addWidget(rawFilterLabel, 0, 0, 1, 1);

        loopbackLabel = new QLabel(Sender);
        loopbackLabel->setObjectName(QString::fromUtf8("loopbackLabel"));

        gridLayout_3->addWidget(loopbackLabel, 2, 0, 1, 1);

        bitrateBox = new BitRateBox(Sender);
        bitrateBox->setObjectName(QString::fromUtf8("bitrateBox"));

        gridLayout_3->addWidget(bitrateBox, 4, 1, 1, 1);

        canFdLabel = new QLabel(Sender);
        canFdLabel->setObjectName(QString::fromUtf8("canFdLabel"));

        gridLayout_3->addWidget(canFdLabel, 5, 0, 1, 1);

        receiveOwnBox = new QComboBox(Sender);
        receiveOwnBox->setObjectName(QString::fromUtf8("receiveOwnBox"));

        gridLayout_3->addWidget(receiveOwnBox, 3, 1, 1, 1);

        bitrateLabel = new QLabel(Sender);
        bitrateLabel->setObjectName(QString::fromUtf8("bitrateLabel"));

        gridLayout_3->addWidget(bitrateLabel, 4, 0, 1, 1);

        dataBitrateLabel = new QLabel(Sender);
        dataBitrateLabel->setObjectName(QString::fromUtf8("dataBitrateLabel"));

        gridLayout_3->addWidget(dataBitrateLabel, 6, 0, 1, 1);

        errorFilterEdit = new QLineEdit(Sender);
        errorFilterEdit->setObjectName(QString::fromUtf8("errorFilterEdit"));
        errorFilterEdit->setMaxLength(0);
        errorFilterEdit->setEchoMode(QLineEdit::NoEcho);
        errorFilterEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(errorFilterEdit, 1, 1, 1, 1);

        receiveOwnLabel = new QLabel(Sender);
        receiveOwnLabel->setObjectName(QString::fromUtf8("receiveOwnLabel"));

        gridLayout_3->addWidget(receiveOwnLabel, 3, 0, 1, 1);

        errorFilterLabel = new QLabel(Sender);
        errorFilterLabel->setObjectName(QString::fromUtf8("errorFilterLabel"));

        gridLayout_3->addWidget(errorFilterLabel, 1, 0, 1, 1);

        loopbackBox = new QComboBox(Sender);
        loopbackBox->setObjectName(QString::fromUtf8("loopbackBox"));

        gridLayout_3->addWidget(loopbackBox, 2, 1, 1, 1);


        verticalLayout_10->addLayout(gridLayout_3);

        tabWidget_configBox->addTab(Sender, QString());
        Receiver = new QWidget();
        Receiver->setObjectName(QString::fromUtf8("Receiver"));
        verticalLayout_11 = new QVBoxLayout(Receiver);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        rawFilterEdit_2 = new QLineEdit(Receiver);
        rawFilterEdit_2->setObjectName(QString::fromUtf8("rawFilterEdit_2"));
        rawFilterEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(rawFilterEdit_2, 0, 1, 1, 1);

        canFdBox_2 = new QComboBox(Receiver);
        canFdBox_2->setObjectName(QString::fromUtf8("canFdBox_2"));

        gridLayout_7->addWidget(canFdBox_2, 5, 1, 1, 1);

        dataBitrateBox_2 = new BitRateBox(Receiver);
        dataBitrateBox_2->setObjectName(QString::fromUtf8("dataBitrateBox_2"));

        gridLayout_7->addWidget(dataBitrateBox_2, 6, 1, 1, 1);

        rawFilterLabel_2 = new QLabel(Receiver);
        rawFilterLabel_2->setObjectName(QString::fromUtf8("rawFilterLabel_2"));

        gridLayout_7->addWidget(rawFilterLabel_2, 0, 0, 1, 1);

        loopbackLabel_2 = new QLabel(Receiver);
        loopbackLabel_2->setObjectName(QString::fromUtf8("loopbackLabel_2"));

        gridLayout_7->addWidget(loopbackLabel_2, 2, 0, 1, 1);

        bitrateBox_2 = new BitRateBox(Receiver);
        bitrateBox_2->setObjectName(QString::fromUtf8("bitrateBox_2"));

        gridLayout_7->addWidget(bitrateBox_2, 4, 1, 1, 1);

        canFdLabel_2 = new QLabel(Receiver);
        canFdLabel_2->setObjectName(QString::fromUtf8("canFdLabel_2"));

        gridLayout_7->addWidget(canFdLabel_2, 5, 0, 1, 1);

        receiveOwnBox_2 = new QComboBox(Receiver);
        receiveOwnBox_2->setObjectName(QString::fromUtf8("receiveOwnBox_2"));

        gridLayout_7->addWidget(receiveOwnBox_2, 3, 1, 1, 1);

        bitrateLabel_2 = new QLabel(Receiver);
        bitrateLabel_2->setObjectName(QString::fromUtf8("bitrateLabel_2"));

        gridLayout_7->addWidget(bitrateLabel_2, 4, 0, 1, 1);

        dataBitrateLabel_2 = new QLabel(Receiver);
        dataBitrateLabel_2->setObjectName(QString::fromUtf8("dataBitrateLabel_2"));

        gridLayout_7->addWidget(dataBitrateLabel_2, 6, 0, 1, 1);

        errorFilterEdit_2 = new QLineEdit(Receiver);
        errorFilterEdit_2->setObjectName(QString::fromUtf8("errorFilterEdit_2"));
        errorFilterEdit_2->setMaxLength(0);
        errorFilterEdit_2->setEchoMode(QLineEdit::NoEcho);
        errorFilterEdit_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_7->addWidget(errorFilterEdit_2, 1, 1, 1, 1);

        receiveOwnLabel_2 = new QLabel(Receiver);
        receiveOwnLabel_2->setObjectName(QString::fromUtf8("receiveOwnLabel_2"));

        gridLayout_7->addWidget(receiveOwnLabel_2, 3, 0, 1, 1);

        errorFilterLabel_2 = new QLabel(Receiver);
        errorFilterLabel_2->setObjectName(QString::fromUtf8("errorFilterLabel_2"));

        gridLayout_7->addWidget(errorFilterLabel_2, 1, 0, 1, 1);

        loopbackBox_2 = new QComboBox(Receiver);
        loopbackBox_2->setObjectName(QString::fromUtf8("loopbackBox_2"));

        gridLayout_7->addWidget(loopbackBox_2, 2, 1, 1, 1);


        verticalLayout_11->addLayout(gridLayout_7);

        tabWidget_configBox->addTab(Receiver, QString());

        verticalLayout_4->addWidget(tabWidget_configBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        gridLayout_4->addWidget(configurationBox, 0, 1, 2, 2);


        retranslateUi(connectDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), connectDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), connectDialog, SLOT(accept()));

        tabWidget_properties->setCurrentIndex(1);
        tabWidget_configBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(connectDialog);
    } // setupUi

    void retranslateUi(QDialog *connectDialog)
    {
        connectDialog->setWindowTitle(QCoreApplication::translate("connectDialog", "Dialog", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("connectDialog", "CAN Interface properties", nullptr));
        label_4->setText(QCoreApplication::translate("connectDialog", "Serial Nr.:", nullptr));
        label_ReadBaudrate_->setText(QString());
        label_5->setText(QCoreApplication::translate("connectDialog", "Interface Description:", nullptr));
        label_InterfaceDes_->setText(QString());
        label_9->setText(QCoreApplication::translate("connectDialog", "Chn Bitrate (bps):", nullptr));
        label_7->setText(QCoreApplication::translate("connectDialog", "Interface Chn Name:", nullptr));
        label_SN_->setText(QString());
        label_InterfaceName_->setText(QString());
        isFlexibleDataRateCapable->setText(QCoreApplication::translate("connectDialog", "Flexeble Data Rate", nullptr));
        isVirtual->setText(QCoreApplication::translate("connectDialog", "Virtual", nullptr));
        tabWidget_properties->setTabText(tabWidget_properties->indexOf(tab_Senderpro), QCoreApplication::translate("connectDialog", "Sender properties", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("connectDialog", "CAN Interface properties", nullptr));
        label_8->setText(QCoreApplication::translate("connectDialog", "Serial Nr.:", nullptr));
        label_ReadBaudrate_1->setText(QString());
        label_10->setText(QCoreApplication::translate("connectDialog", "Interface Description:", nullptr));
        label_InterfaceDes_1->setText(QString());
        label_11->setText(QCoreApplication::translate("connectDialog", "Chn Bitrate (bps):", nullptr));
        label_12->setText(QCoreApplication::translate("connectDialog", "Interface Chn Name:", nullptr));
        label_SN_1->setText(QString());
        label_InterfaceName_1->setText(QString());
        isFlexibleDataRateCapable_2->setText(QCoreApplication::translate("connectDialog", "Flexeble Data Rate", nullptr));
        isVirtual_2->setText(QCoreApplication::translate("connectDialog", "Virtual", nullptr));
        tabWidget_properties->setTabText(tabWidget_properties->indexOf(tab_Receiverpro), QCoreApplication::translate("connectDialog", "Receiver properties", nullptr));
        specifyInterfaceNameBox->setTitle(QCoreApplication::translate("connectDialog", "Specity CAN Interface name ", nullptr));
        SenderBox->setTitle(QCoreApplication::translate("connectDialog", "Sender", nullptr));
        label->setText(QCoreApplication::translate("connectDialog", "plugin :", nullptr));
        label_2->setText(QCoreApplication::translate("connectDialog", "interface name :", nullptr));
        ReceiverBox->setTitle(QCoreApplication::translate("connectDialog", "Receiver", nullptr));
        label_3->setText(QCoreApplication::translate("connectDialog", "plugin :", nullptr));
        label_6->setText(QCoreApplication::translate("connectDialog", "interface name : ", nullptr));
        configurationBox->setTitle(QCoreApplication::translate("connectDialog", "Specify Configuration", nullptr));
        rawFilterLabel->setText(QCoreApplication::translate("connectDialog", "RAW Filter", nullptr));
        loopbackLabel->setText(QCoreApplication::translate("connectDialog", "Loopback", nullptr));
        canFdLabel->setText(QCoreApplication::translate("connectDialog", "CAN FD", nullptr));
        bitrateLabel->setText(QCoreApplication::translate("connectDialog", "Bitrate", nullptr));
        dataBitrateLabel->setText(QCoreApplication::translate("connectDialog", "Data Bitrate", nullptr));
        errorFilterEdit->setPlaceholderText(QCoreApplication::translate("connectDialog", "FrameError bits", nullptr));
        receiveOwnLabel->setText(QCoreApplication::translate("connectDialog", "Receive Own", nullptr));
        errorFilterLabel->setText(QCoreApplication::translate("connectDialog", "Error Filter", nullptr));
        tabWidget_configBox->setTabText(tabWidget_configBox->indexOf(Sender), QCoreApplication::translate("connectDialog", "Sender", nullptr));
        rawFilterLabel_2->setText(QCoreApplication::translate("connectDialog", "RAW Filter", nullptr));
        loopbackLabel_2->setText(QCoreApplication::translate("connectDialog", "Loopback", nullptr));
        canFdLabel_2->setText(QCoreApplication::translate("connectDialog", "CAN FD", nullptr));
        bitrateLabel_2->setText(QCoreApplication::translate("connectDialog", "Bitrate", nullptr));
        dataBitrateLabel_2->setText(QCoreApplication::translate("connectDialog", "Data Bitrate", nullptr));
        errorFilterEdit_2->setPlaceholderText(QCoreApplication::translate("connectDialog", "FrameError bits", nullptr));
        receiveOwnLabel_2->setText(QCoreApplication::translate("connectDialog", "Receive Own", nullptr));
        errorFilterLabel_2->setText(QCoreApplication::translate("connectDialog", "Error Filter", nullptr));
        tabWidget_configBox->setTabText(tabWidget_configBox->indexOf(Receiver), QCoreApplication::translate("connectDialog", "Receiver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class connectDialog: public Ui_connectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTDIALOG_H
