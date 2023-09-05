/****************************************************************************
** Meta object code from reading C++ file 'adminmanagebooks.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../LIS/adminmanagebooks.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminmanagebooks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_AdminManageBooks_t {
    uint offsetsAndSizes[18];
    char stringdata0[17];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[24];
    char stringdata5[21];
    char stringdata6[22];
    char stringdata7[18];
    char stringdata8[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AdminManageBooks_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AdminManageBooks_t qt_meta_stringdata_AdminManageBooks = {
    {
        QT_MOC_LITERAL(0, 16),  // "AdminManageBooks"
        QT_MOC_LITERAL(17, 19),  // "on_add_Book_clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 15),  // "on_back_clicked"
        QT_MOC_LITERAL(54, 23),  // "on_pushButton_2_clicked"
        QT_MOC_LITERAL(78, 20),  // "on_catalogue_clicked"
        QT_MOC_LITERAL(99, 21),  // "on_add_Book_3_clicked"
        QT_MOC_LITERAL(121, 17),  // "on_status_clicked"
        QT_MOC_LITERAL(139, 21)   // "on_membership_clicked"
    },
    "AdminManageBooks",
    "on_add_Book_clicked",
    "",
    "on_back_clicked",
    "on_pushButton_2_clicked",
    "on_catalogue_clicked",
    "on_add_Book_3_clicked",
    "on_status_clicked",
    "on_membership_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AdminManageBooks[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

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

Q_CONSTINIT const QMetaObject AdminManageBooks::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_AdminManageBooks.offsetsAndSizes,
    qt_meta_data_AdminManageBooks,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AdminManageBooks_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdminManageBooks, std::true_type>,
        // method 'on_add_Book_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_catalogue_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_Book_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_status_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_membership_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AdminManageBooks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminManageBooks *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_add_Book_clicked(); break;
        case 1: _t->on_back_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_catalogue_clicked(); break;
        case 4: _t->on_add_Book_3_clicked(); break;
        case 5: _t->on_status_clicked(); break;
        case 6: _t->on_membership_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *AdminManageBooks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminManageBooks::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminManageBooks.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AdminManageBooks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
