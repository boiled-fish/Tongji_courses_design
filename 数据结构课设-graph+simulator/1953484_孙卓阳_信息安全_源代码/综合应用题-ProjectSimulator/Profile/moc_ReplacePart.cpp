/****************************************************************************
** Meta object code from reading C++ file 'ReplacePart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ReplacePart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ReplacePart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReplacePart_t {
    QByteArrayData data[9];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReplacePart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReplacePart_t qt_meta_stringdata_ReplacePart = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ReplacePart"
QT_MOC_LITERAL(1, 12, 19), // "on_partBtnA_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "on_partBtnB_clicked"
QT_MOC_LITERAL(4, 53, 19), // "on_partBtnC_clicked"
QT_MOC_LITERAL(5, 73, 19), // "on_partBtnD_clicked"
QT_MOC_LITERAL(6, 93, 25), // "on_topPartLeftBtn_clicked"
QT_MOC_LITERAL(7, 119, 26), // "on_topPartRightBtn_clicked"
QT_MOC_LITERAL(8, 146, 18) // "on_nextBtn_clicked"

    },
    "ReplacePart\0on_partBtnA_clicked\0\0"
    "on_partBtnB_clicked\0on_partBtnC_clicked\0"
    "on_partBtnD_clicked\0on_topPartLeftBtn_clicked\0"
    "on_topPartRightBtn_clicked\0"
    "on_nextBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReplacePart[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ReplacePart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReplacePart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_partBtnA_clicked(); break;
        case 1: _t->on_partBtnB_clicked(); break;
        case 2: _t->on_partBtnC_clicked(); break;
        case 3: _t->on_partBtnD_clicked(); break;
        case 4: _t->on_topPartLeftBtn_clicked(); break;
        case 5: _t->on_topPartRightBtn_clicked(); break;
        case 6: _t->on_nextBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ReplacePart::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ReplacePart.data,
    qt_meta_data_ReplacePart,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReplacePart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReplacePart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReplacePart.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ReplacePart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
