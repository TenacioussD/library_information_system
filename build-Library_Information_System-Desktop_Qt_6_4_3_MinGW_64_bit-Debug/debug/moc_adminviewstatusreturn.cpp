/****************************************************************************
** Meta object code from reading C++ file 'adminviewstatusreturn.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Desktop/DEV with MJ code/LIS/adminviewstatusreturn.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminviewstatusreturn.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AdminViewStatusReturn_t {
    uint offsetsAndSizes[14];
    char stringdata0[22];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[29];
    char stringdata4[18];
    char stringdata5[18];
    char stringdata6[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AdminViewStatusReturn_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AdminViewStatusReturn_t qt_meta_stringdata_AdminViewStatusReturn = {
    {
        QT_MOC_LITERAL(0, 21),  // "AdminViewStatusReturn"
        QT_MOC_LITERAL(22, 26),  // "on_catalogueButton_clicked"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 28),  // "on_manageBooksButton_clicked"
        QT_MOC_LITERAL(79, 17),  // "on_status_clicked"
        QT_MOC_LITERAL(97, 17),  // "on_logout_clicked"
        QT_MOC_LITERAL(115, 15)   // "on_back_clicked"
    },
    "AdminViewStatusReturn",
    "on_catalogueButton_clicked",
    "",
    "on_manageBooksButton_clicked",
    "on_status_clicked",
    "on_logout_clicked",
    "on_back_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AdminViewStatusReturn[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AdminViewStatusReturn::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_AdminViewStatusReturn.offsetsAndSizes,
    qt_meta_data_AdminViewStatusReturn,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AdminViewStatusReturn_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdminViewStatusReturn, std::true_type>,
        // method 'on_catalogueButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_manageBooksButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_status_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_logout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AdminViewStatusReturn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminViewStatusReturn *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_catalogueButton_clicked(); break;
        case 1: _t->on_manageBooksButton_clicked(); break;
        case 2: _t->on_status_clicked(); break;
        case 3: _t->on_logout_clicked(); break;
        case 4: _t->on_back_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *AdminViewStatusReturn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminViewStatusReturn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminViewStatusReturn.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AdminViewStatusReturn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE