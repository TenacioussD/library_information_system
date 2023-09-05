/****************************************************************************
** Meta object code from reading C++ file 'adminmembership.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Desktop/DEV with MJ code/LIS/adminmembership.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminmembership.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AdminMembership_t {
    uint offsetsAndSizes[20];
    char stringdata0[16];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[23];
    char stringdata5[20];
    char stringdata6[16];
    char stringdata7[22];
    char stringdata8[21];
    char stringdata9[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AdminMembership_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AdminMembership_t qt_meta_stringdata_AdminMembership = {
    {
        QT_MOC_LITERAL(0, 15),  // "AdminMembership"
        QT_MOC_LITERAL(16, 21),  // "on_membership_clicked"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 20),  // "on_catalogue_clicked"
        QT_MOC_LITERAL(60, 22),  // "on_manageBooks_clicked"
        QT_MOC_LITERAL(83, 19),  // "on_add_Book_clicked"
        QT_MOC_LITERAL(103, 15),  // "on_back_clicked"
        QT_MOC_LITERAL(119, 21),  // "on_add_Book_3_clicked"
        QT_MOC_LITERAL(141, 20),  // "on_removeMem_clicked"
        QT_MOC_LITERAL(162, 21)   // "on_add_Book_2_clicked"
    },
    "AdminMembership",
    "on_membership_clicked",
    "",
    "on_catalogue_clicked",
    "on_manageBooks_clicked",
    "on_add_Book_clicked",
    "on_back_clicked",
    "on_add_Book_3_clicked",
    "on_removeMem_clicked",
    "on_add_Book_2_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AdminMembership[] = {

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

Q_CONSTINIT const QMetaObject AdminMembership::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AdminMembership.offsetsAndSizes,
    qt_meta_data_AdminMembership,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AdminMembership_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdminMembership, std::true_type>,
        // method 'on_membership_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_catalogue_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_manageBooks_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_Book_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_Book_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_removeMem_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_Book_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AdminMembership::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminMembership *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_membership_clicked(); break;
        case 1: _t->on_catalogue_clicked(); break;
        case 2: _t->on_manageBooks_clicked(); break;
        case 3: _t->on_add_Book_clicked(); break;
        case 4: _t->on_back_clicked(); break;
        case 5: _t->on_add_Book_3_clicked(); break;
        case 6: _t->on_removeMem_clicked(); break;
        case 7: _t->on_add_Book_2_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *AdminMembership::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminMembership::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminMembership.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdminMembership::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
