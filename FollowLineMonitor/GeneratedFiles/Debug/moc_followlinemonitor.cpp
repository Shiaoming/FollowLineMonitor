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
    QByteArrayData data[17];
    char stringdata[166];
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
QT_MOC_LITERAL(7, 80, 8), // "StopShow"
QT_MOC_LITERAL(8, 89, 7), // "PlotSet"
QT_MOC_LITERAL(9, 97, 10), // "RecHexShow"
QT_MOC_LITERAL(10, 108, 11), // "SendHexShow"
QT_MOC_LITERAL(11, 120, 10), // "ShowCOMErr"
QT_MOC_LITERAL(12, 131, 1), // "s"
QT_MOC_LITERAL(13, 133, 10), // "GetRecData"
QT_MOC_LITERAL(14, 144, 3), // "rec"
QT_MOC_LITERAL(15, 148, 8), // "SendData"
QT_MOC_LITERAL(16, 157, 8) // "TimerSet"

    },
    "FollowLineMonitor\0SearchCOM\0\0"
    "COMStatusUpdate\0StopCOM\0ClearRecData\0"
    "ClearSendData\0StopShow\0PlotSet\0"
    "RecHexShow\0SendHexShow\0ShowCOMErr\0s\0"
    "GetRecData\0rec\0SendData\0TimerSet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FollowLineMonitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    1,   81,    2, 0x08 /* Private */,
       5,    0,   84,    2, 0x08 /* Private */,
       6,    0,   85,    2, 0x08 /* Private */,
       7,    0,   86,    2, 0x08 /* Private */,
       8,    0,   87,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    1,   90,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QByteArray,   14,
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
        case 5: _t->StopShow(); break;
        case 6: _t->PlotSet(); break;
        case 7: _t->RecHexShow(); break;
        case 8: _t->SendHexShow(); break;
        case 9: _t->ShowCOMErr((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->GetRecData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 11: _t->SendData(); break;
        case 12: _t->TimerSet(); break;
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
