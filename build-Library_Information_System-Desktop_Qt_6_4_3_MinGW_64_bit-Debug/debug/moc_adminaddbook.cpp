/****************************************************************************
** Meta object code from reading C++ file 'adminaddbook.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Desktop/DEV with MJ code/LIS/adminaddbook.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminaddbook.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AdminAddBook_t {
    uint offsetsAndSizes[16];
    char stringdata0[13];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[21];
    char stringdata5[19];
    char stringdata6[18];
    char stringdata7[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AdminAddBook_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AdminAddBook_t qt_meta_stringdata_AdminAddBook = {
    {
        QT_MOC_LITERAL(0, 12),  // "AdminAddBook"
        QT_MOC_LITERAL(13, 15),  // "on_back_clicked"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 23),  // "on_pushButton_2_clicked"
        QT_MOC_LITERAL(54, 20),  // "on_catalogue_clicked"
        QT_MOC_LITERAL(75, 18),  // "on_confirm_clicked"
        QT_MOC_LITERAL(94, 17),  // "on_status_clicked"
        QT_MOC_LITERAL(112, 22)   // "on_manageBooks_clicked"
    },
    "AdminAddBook",
    "on_back_clicked",
    "",
    "on_pushButton_2_clicked",
    "on_catalogue_clicked",
    "on_confirm_clicked",
    "on_status_clicked",
    "on_manageBooks_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AdminAddBook[] = {

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

Q_CONSTINIT const QMetaObject AdminAddBook::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_AdminAddBook.offsetsAndSizes,
    qt_meta_data_AdminAddBook,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AdminAddBook_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdminAddBook, std::true_type>,
        // method 'on_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_catalogue_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_confirm_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_status_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_manageBooks_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AdminAddBook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminAddBook *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_back_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_catalogue_clicked(); break;
        case 3: _t->on_confirm_clicked(); break;
        case 4: _t->on_status_clicked(); break;
        case 5: _t->on_manageBooks_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *AdminAddBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminAddBook::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminAddBook.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AdminAddBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
