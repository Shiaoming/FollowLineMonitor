/****************************************************************************
** Meta object code from reading C++ file 'followlinemonitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../followlinemonitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'followlinemonitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FollowLineMonitor_t {
    QByteArrayData data[14];
    char stringdata[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FollowLineMonitor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FollowLineMonitor_t qt_meta_stringdata_FollowLineMonitor = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FollowLineMonitor"
QT_MOC_LITERAL(1, 18, 9), // "SearchCOM"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "COMStatusUpdate"
QT_MOC_LITERAL(4, 45, 7), // "StopCOM"
QT_MOC_LITERAL(5, 53, 12), // "ClearRecData"
QT_MOC_LITERAL(6, 66, 13), // "ClearSendData"
QT_MOC_LITERAL(7, 80, 17), // "UpDateCheckConfig"
QT_MOC_LITERAL(8, 98, 10), // "ShowCOMErr"
QT_MOC_LITERAL(9, 109, 1), // "s"
QT_MOC_LITERAL(10, 111, 10), // "GetRecData"
QT_MOC_LITERAL(11, 122, 3), // "rec"
QT_MOC_LITERAL(12, 126, 8), // "SendData"
QT_MOC_LITERAL(13, 135, 8) // "TimerSet"

    },
    "FollowLineMonitor\0SearchCOM\0\0"
    "COMStatusUpdate\0StopCOM\0ClearRecData\0"
    "ClearSendData\0UpDateCheckConfig\0"
    "ShowCOMErr\0s\0GetRecData\0rec\0SendData\0"
    "TimerSet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FollowLineMonitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       5,    0,   69,    2, 0x08 /* Private */,
       6,    0,   70,    2, 0x08 /* Private */,
       7,    0,   71,    2, 0x08 /* Private */,
       8,    1,   72,    2, 0x08 /* Private */,
      10,    1,   75,    2, 0x08 /* Private */,
      12,    0,   78,    2, 0x08 /* Private */,
      13,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FollowLineMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FollowLineMonitor *_t = static_cast<FollowLineMonitor *>(_o);
        switch (_id) {
        case 0: _t->SearchCOM(); break;
        case 1: _t->COMStatusUpdate(); break;
        case 2: _t->StopCOM((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ClearRecData(); break;
        case 4: _t->ClearSendData(); break;
        case 5: _t->UpDateCheckConfig(); break;
        case 6: _t->ShowCOMErr((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->GetRecData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 8: _t->SendData(); break;
        case 9: _t->TimerSet(); break;
        default: ;
        }
    }
}

const QMetaObject FollowLineMonitor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FollowLineMonitor.data,
      qt_meta_data_FollowLineMonitor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FollowLineMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FollowLineMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FollowLineMonitor.stringdata))
        return static_cast<void*>(const_cast< FollowLineMonitor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FollowLineMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
