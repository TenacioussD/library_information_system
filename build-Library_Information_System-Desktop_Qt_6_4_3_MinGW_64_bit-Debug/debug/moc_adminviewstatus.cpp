/****************************************************************************
** Meta object code from reading C++ file 'adminviewstatus.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../LIS/adminviewstatus.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminviewstatus.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AdminViewStatus_t {
    uint offsetsAndSizes[20];
    char stringdata0[16];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[18];
    char stringdata5[16];
    char stringdata6[24];
    char stringdata7[32];
    char stringdata8[23];
    char stringdata9[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AdminViewStatus_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AdminViewStatus_t qt_meta_stringdata_AdminViewStatus = {
    {
        QT_MOC_LITERAL(0, 15),  // "AdminViewStatus"
        QT_MOC_LITERAL(16, 20),  // "on_catalogue_clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 22),  // "on_manageBooks_clicked"
        QT_MOC_LITERAL(61, 17),  // "on_logout_clicked"
        QT_MOC_LITERAL(79, 15),  // "on_back_clicked"
        QT_MOC_LITERAL(95, 23),  // "on_adminoverdue_clicked"
        QT_MOC_LITERAL(119, 31),  // "on_adminpreorderedbooks_clicked"
        QT_MOC_LITERAL(151, 22),  // "on_adminreturn_clicked"
        QT_MOC_LITERAL(174, 21)   // "on_membership_clicked"
    },
    "AdminViewStatus",
    "on_catalogue_clicked",
    "",
    "on_manageBooks_clicked",
    "on_logout_clicked",
    "on_back_clicked",
    "on_adminoverdue_clicked",
    "on_adminpreorderedbooks_clicked",
    "on_adminreturn_clicked",
    "on_membership_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AdminViewStatus[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
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

Q_CONSTINIT const QMetaObject AdminViewStatus::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_AdminViewStatus.offsetsAndSizes,
    qt_meta_data_AdminViewStatus,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AdminViewStatus_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdminViewStatus, std::true_type>,
        // method 'on_catalogue_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_manageBooks_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_logout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_adminoverdue_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_adminpreorderedbooks_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_adminreturn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_membership_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AdminViewStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminViewStatus *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_catalogue_clicked(); break;
        case 1: _t->on_manageBooks_clicked(); break;
        case 2: _t->on_logout_clicked(); break;
        case 3: _t->on_back_clicked(); break;
        case 4: _t->on_adminoverdue_clicked(); break;
        case 5: _t->on_adminpreorderedbooks_clicked(); break;
        case 6: _t->on_adminreturn_clicked(); break;
        case 7: _t->on_membership_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *AdminViewStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminViewStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminViewStatus.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AdminViewStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
