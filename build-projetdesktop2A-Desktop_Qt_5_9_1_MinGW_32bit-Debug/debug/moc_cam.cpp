/****************************************************************************
** Meta object code from reading C++ file 'cam.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../securite/cam.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cam_t {
    QByteArrayData data[16];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cam_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cam_t qt_meta_stringdata_cam = {
    {
QT_MOC_LITERAL(0, 0, 3), // "cam"
QT_MOC_LITERAL(1, 4, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(4, 51, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 75, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(6, 99, 20), // "on_optioncam_clicked"
QT_MOC_LITERAL(7, 120, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(8, 144, 18), // "on_livecam_clicked"
QT_MOC_LITERAL(9, 163, 18), // "on_nomrech_clicked"
QT_MOC_LITERAL(10, 182, 21), // "on_rechercher_clicked"
QT_MOC_LITERAL(11, 204, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(12, 228, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(13, 252, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(14, 274, 5), // "index"
QT_MOC_LITERAL(15, 280, 23) // "on_pushButton_8_clicked"

    },
    "cam\0on_pushButton_clicked\0\0"
    "on_pushButton_3_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_4_clicked\0on_optioncam_clicked\0"
    "on_pushButton_5_clicked\0on_livecam_clicked\0"
    "on_nomrech_clicked\0on_rechercher_clicked\0"
    "on_pushButton_6_clicked\0on_pushButton_7_clicked\0"
    "on_comboBox_activated\0index\0"
    "on_pushButton_8_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cam[] = {

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
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    1,   90,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,

       0        // eod
};

void cam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cam *_t = static_cast<cam *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_3_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_pushButton_4_clicked(); break;
        case 4: _t->on_optioncam_clicked(); break;
        case 5: _t->on_pushButton_5_clicked(); break;
        case 6: _t->on_livecam_clicked(); break;
        case 7: _t->on_nomrech_clicked(); break;
        case 8: _t->on_rechercher_clicked(); break;
        case 9: _t->on_pushButton_6_clicked(); break;
        case 10: _t->on_pushButton_7_clicked(); break;
        case 11: _t->on_comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_pushButton_8_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject cam::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cam.data,
      qt_meta_data_cam,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cam::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cam.stringdata0))
        return static_cast<void*>(const_cast< cam*>(this));
    return QDialog::qt_metacast(_clname);
}

int cam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
