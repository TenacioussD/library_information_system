/****************************************************************************
** Meta object code from reading C++ file 'adminoverdue.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../LIS/adminoverdue.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminoverdue.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AdminOverdue_t {
    uint offsetsAndSizes[16];
    char stringdata0[13];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[29];
    char stringdata4[27];
    char stringdata5[18];
    char stringdata6[16];
    char stringdata7[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AdminOverdue_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AdminOverdue_t qt_meta_stringdata_AdminOverdue = {
    {
        QT_MOC_LITERAL(0, 12),  // "AdminOverdue"
        QT_MOC_LITERAL(13, 26),  // "on_catalogueButton_clicked"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 28),  // "on_manageBooksButton_clicked"
        QT_MOC_LITERAL(70, 26),  // "on_adminviewstatus_clicked"
        QT_MOC_LITERAL(97, 17),  // "on_logout_clicked"
        QT_MOC_LITERAL(115, 15),  // "on_back_clicked"
        QT_MOC_LITERAL(131, 27)   // "on_membershipButton_clicked"
    },
    "AdminOverdue",
    "on_catalogueButton_clicked",
    "",
    "on_manageBooksButton_clicked",
    "on_adminviewstatus_clicked",
    "on_logout_clicked",
    "on_back_clicked",
    "on_membershipButton_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AdminOverdue[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AdminOverdue::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_AdminOverdue.offsetsAndSizes,
    qt_meta_data_AdminOverdue,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AdminOverdue_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdminOverdue, std::true_type>,
        // method 'on_catalogueButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_manageBooksButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_adminviewstatus_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_logout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_membershipButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AdminOverdue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminOverdue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_catalogueButton_clicked(); break;
        case 1: _t->on_manageBooksButton_clicked(); break;
        case 2: _t->on_adminviewstatus_clicked(); break;
        case 3: _t->on_logout_clicked(); break;
        case 4: _t->on_back_clicked(); break;
        case 5: _t->on_membershipButton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *AdminOverdue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminOverdue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminOverdue.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AdminOverdue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
