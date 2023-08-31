/****************************************************************************
** Meta object code from reading C++ file 'adminbookconfirmation.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Desktop/DEV with MJ code/LIS/adminbookconfirmation.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminbookconfirmation.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AdminBookConfirmation_t {
    uint offsetsAndSizes[16];
    char stringdata0[22];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[23];
    char stringdata5[24];
    char stringdata6[25];
    char stringdata7[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AdminBookConfirmation_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AdminBookConfirmation_t qt_meta_stringdata_AdminBookConfirmation = {
    {
        QT_MOC_LITERAL(0, 21),  // "AdminBookConfirmation"
        QT_MOC_LITERAL(22, 25),  // "on_confirmDetails_clicked"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 17),  // "on_back_2_clicked"
        QT_MOC_LITERAL(67, 22),  // "on_catalogue_3_clicked"
        QT_MOC_LITERAL(90, 23),  // "on_pushButton_3_clicked"
        QT_MOC_LITERAL(114, 24),  // "on_manageBooks_3_clicked"
        QT_MOC_LITERAL(139, 19)   // "on_status_3_clicked"
    },
    "AdminBookConfirmation",
    "on_confirmDetails_clicked",
    "",
    "on_back_2_clicked",
    "on_catalogue_3_clicked",
    "on_pushButton_3_clicked",
    "on_manageBooks_3_clicked",
    "on_status_3_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AdminBookConfirmation[] = {

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

Q_CONSTINIT const QMetaObject AdminBookConfirmation::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_AdminBookConfirmation.offsetsAndSizes,
    qt_meta_data_AdminBookConfirmation,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AdminBookConfirmation_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdminBookConfirmation, std::true_type>,
        // method 'on_confirmDetails_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_catalogue_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_manageBooks_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_status_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AdminBookConfirmation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminBookConfirmation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_confirmDetails_clicked(); break;
        case 1: _t->on_back_2_clicked(); break;
        case 2: _t->on_catalogue_3_clicked(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_manageBooks_3_clicked(); break;
        case 5: _t->on_status_3_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *AdminBookConfirmation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminBookConfirmation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminBookConfirmation.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AdminBookConfirmation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
