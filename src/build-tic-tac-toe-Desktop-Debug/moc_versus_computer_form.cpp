/****************************************************************************
** Meta object code from reading C++ file 'versus_computer_form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../source-tic-tac-toe/versus_computer_form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'versus_computer_form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_versus_computer_form_t {
    QByteArrayData data[12];
    char stringdata[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_versus_computer_form_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_versus_computer_form_t qt_meta_stringdata_versus_computer_form = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 15),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 15),
QT_MOC_LITERAL(4, 54, 15),
QT_MOC_LITERAL(5, 70, 15),
QT_MOC_LITERAL(6, 86, 15),
QT_MOC_LITERAL(7, 102, 15),
QT_MOC_LITERAL(8, 118, 15),
QT_MOC_LITERAL(9, 134, 15),
QT_MOC_LITERAL(10, 150, 15),
QT_MOC_LITERAL(11, 166, 28)
    },
    "versus_computer_form\0on_pb00_clicked\0"
    "\0on_pb01_clicked\0on_pb02_clicked\0"
    "on_pb10_clicked\0on_pb11_clicked\0"
    "on_pb12_clicked\0on_pb20_clicked\0"
    "on_pb21_clicked\0on_pb22_clicked\0"
    "on_commandLinkButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_versus_computer_form[] = {

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
       1,    0,   64,    2, 0x08,
       3,    0,   65,    2, 0x08,
       4,    0,   66,    2, 0x08,
       5,    0,   67,    2, 0x08,
       6,    0,   68,    2, 0x08,
       7,    0,   69,    2, 0x08,
       8,    0,   70,    2, 0x08,
       9,    0,   71,    2, 0x08,
      10,    0,   72,    2, 0x08,
      11,    0,   73,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void versus_computer_form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        versus_computer_form *_t = static_cast<versus_computer_form *>(_o);
        switch (_id) {
        case 0: _t->on_pb00_clicked(); break;
        case 1: _t->on_pb01_clicked(); break;
        case 2: _t->on_pb02_clicked(); break;
        case 3: _t->on_pb10_clicked(); break;
        case 4: _t->on_pb11_clicked(); break;
        case 5: _t->on_pb12_clicked(); break;
        case 6: _t->on_pb20_clicked(); break;
        case 7: _t->on_pb21_clicked(); break;
        case 8: _t->on_pb22_clicked(); break;
        case 9: _t->on_commandLinkButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject versus_computer_form::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_versus_computer_form.data,
      qt_meta_data_versus_computer_form,  qt_static_metacall, 0, 0}
};


const QMetaObject *versus_computer_form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *versus_computer_form::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_versus_computer_form.stringdata))
        return static_cast<void*>(const_cast< versus_computer_form*>(this));
    return QWidget::qt_metacast(_clname);
}

int versus_computer_form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
