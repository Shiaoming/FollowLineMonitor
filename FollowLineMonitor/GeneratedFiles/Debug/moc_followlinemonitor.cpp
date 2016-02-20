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
    QByteArrayData data[7];
    char stringdata[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FollowLineMonitor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FollowLineMonitor_t qt_meta_stringdata_FollowLineMonitor = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FollowLineMonitor"
QT_MOC_LITERAL(1, 18, 15), // "COMStatusUpdate"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "StopCOM"
QT_MOC_LITERAL(4, 43, 12), // "ClearRecData"
QT_MOC_LITERAL(5, 56, 13), // "ClearSendData"
QT_MOC_LITERAL(6, 70, 17) // "UpDateCheckConfig"

    },
    "FollowLineMonitor\0COMStatusUpdate\0\0"
    "StopCOM\0ClearRecData\0ClearSendData\0"
    "UpDateCheckConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FollowLineMonitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       4,    0,   43,    2, 0x08 /* Private */,
       5,    0,   44,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FollowLineMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FollowLineMonitor *_t = static_cast<FollowLineMonitor *>(_o);
        switch (_id) {
        case 0: _t->COMStatusUpdate(); break;
        case 1: _t->StopCOM((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ClearRecData(); break;
        case 3: _t->ClearSendData(); break;
        case 4: _t->UpDateCheckConfig(); break;
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
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
