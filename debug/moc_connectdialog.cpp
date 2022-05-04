/****************************************************************************
** Meta object code from reading C++ file 'connectdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../connectdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_connectDialog_t {
    QByteArrayData data[14];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_connectDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_connectDialog_t qt_meta_stringdata_connectDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "connectDialog"
QT_MOC_LITERAL(1, 14, 35), // "on_pluginListBox_currentTextC..."
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 6), // "plugin"
QT_MOC_LITERAL(4, 58, 38), // "on_interfaceListBox_currentTe..."
QT_MOC_LITERAL(5, 97, 9), // "interface"
QT_MOC_LITERAL(6, 107, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(7, 129, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(8, 151, 37), // "on_pluginListBox_2_currentTex..."
QT_MOC_LITERAL(9, 189, 40), // "on_interfaceListBox_2_current..."
QT_MOC_LITERAL(10, 230, 22), // "on_ReceiverBox_clicked"
QT_MOC_LITERAL(11, 253, 7), // "checked"
QT_MOC_LITERAL(12, 261, 20), // "on_SenderBox_clicked"
QT_MOC_LITERAL(13, 282, 27) // "on_configurationBox_clicked"

    },
    "connectDialog\0on_pluginListBox_currentTextChanged\0"
    "\0plugin\0on_interfaceListBox_currentTextChanged\0"
    "interface\0on_buttonBox_accepted\0"
    "on_buttonBox_rejected\0"
    "on_pluginListBox_2_currentTextChanged\0"
    "on_interfaceListBox_2_currentTextChanged\0"
    "on_ReceiverBox_clicked\0checked\0"
    "on_SenderBox_clicked\0on_configurationBox_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_connectDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       6,    0,   65,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    1,   67,    2, 0x08 /* Private */,
       9,    1,   70,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      12,    1,   76,    2, 0x08 /* Private */,
      13,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void connectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<connectDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pluginListBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_interfaceListBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_buttonBox_accepted(); break;
        case 3: _t->on_buttonBox_rejected(); break;
        case 4: _t->on_pluginListBox_2_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_interfaceListBox_2_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_ReceiverBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_SenderBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_configurationBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject connectDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_connectDialog.data,
    qt_meta_data_connectDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *connectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *connectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_connectDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int connectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
