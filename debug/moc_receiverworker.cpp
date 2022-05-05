/****************************************************************************
** Meta object code from reading C++ file 'receiverworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../receiverworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'receiverworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReceiverWorker_t {
    QByteArrayData data[13];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReceiverWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReceiverWorker_t qt_meta_stringdata_ReceiverWorker = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ReceiverWorker"
QT_MOC_LITERAL(1, 15, 17), // "ActionConnectable"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "value"
QT_MOC_LITERAL(4, 40, 15), // "receivedMessage"
QT_MOC_LITERAL(5, 56, 3), // "msg"
QT_MOC_LITERAL(6, 60, 15), // "busStatusString"
QT_MOC_LITERAL(7, 76, 21), // "processErrorsReceiver"
QT_MOC_LITERAL(8, 98, 26), // "QCanBusDevice::CanBusError"
QT_MOC_LITERAL(9, 125, 16), // "disconnectDevice"
QT_MOC_LITERAL(10, 142, 13), // "connectDevice"
QT_MOC_LITERAL(11, 156, 21), // "processReceivedFrames"
QT_MOC_LITERAL(12, 178, 9) // "busStatus"

    },
    "ReceiverWorker\0ActionConnectable\0\0"
    "value\0receivedMessage\0msg\0busStatusString\0"
    "processErrorsReceiver\0QCanBusDevice::CanBusError\0"
    "disconnectDevice\0connectDevice\0"
    "processReceivedFrames\0busStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReceiverWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   63,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,
      11,    0,   68,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ReceiverWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReceiverWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ActionConnectable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->receivedMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->busStatusString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->processErrorsReceiver((*reinterpret_cast< QCanBusDevice::CanBusError(*)>(_a[1]))); break;
        case 4: _t->disconnectDevice(); break;
        case 5: _t->connectDevice(); break;
        case 6: _t->processReceivedFrames(); break;
        case 7: _t->busStatus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReceiverWorker::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiverWorker::ActionConnectable)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ReceiverWorker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiverWorker::receivedMessage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ReceiverWorker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiverWorker::busStatusString)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReceiverWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ReceiverWorker.data,
    qt_meta_data_ReceiverWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReceiverWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReceiverWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReceiverWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ReceiverWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ReceiverWorker::ActionConnectable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReceiverWorker::receivedMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ReceiverWorker::busStatusString(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
