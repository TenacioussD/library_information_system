/****************************************************************************
** Meta object code from reading C++ file 'admineditbookdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Desktop/DEV with MJ code/LIS/admineditbookdialog.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admineditbookdialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AdminEditBookDialog_t {
    uint offsetsAndSizes[22];
    char stringdata0[20];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[13];
    char stringdata5[14];
    char stringdata6[18];
    char stringdata7[22];
    char stringdata8[24];
    char stringdata9[25];
    char stringdata10[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AdminEditBookDialog_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AdminEditBookDialog_t qt_meta_stringdata_AdminEditBookDialog = {
    {
        QT_MOC_LITERAL(0, 19),  // "AdminEditBookDialog"
        QT_MOC_LITERAL(20, 18),  // "bookDetailsUpdated"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 9),  // "bookIndex"
        QT_MOC_LITERAL(50, 12),  // "updatedTitle"
        QT_MOC_LITERAL(63, 13),  // "updatedAuthor"
        QT_MOC_LITERAL(77, 17),  // "bookEditCompleted"
        QT_MOC_LITERAL(95, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(117, 23),  // "on_cancelButton_clicked"
        QT_MOC_LITERAL(141, 24),  // "handleMessageBoxFinished"
        QT_MOC_LITERAL(166, 6)   // "result"
    },
    "AdminEditBookDialog",
    "bookDetailsUpdated",
    "",
    "bookIndex",
    "updatedTitle",
    "updatedAuthor",
    "bookEditCompleted",
    "on_pushButton_clicked",
    "on_cancelButton_clicked",
    "handleMessageBoxFinished",
    "result"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AdminEditBookDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   44,    2, 0x06,    1 /* Public */,
       6,    0,   51,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   52,    2, 0x08,    6 /* Private */,
       8,    0,   53,    2, 0x08,    7 /* Private */,
       9,    1,   54,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject AdminEditBookDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AdminEditBookDialog.offsetsAndSizes,
    qt_meta_data_AdminEditBookDialog,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AdminEditBookDialog_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdminEditBookDialog, std::true_type>,
        // method 'bookDetailsUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'bookEditCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cancelButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleMessageBoxFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void AdminEditBookDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminEditBookDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->bookDetailsUpdated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->bookEditCompleted(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_cancelButton_clicked(); break;
        case 4: _t->handleMessageBoxFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AdminEditBookDialog::*)(int , const QString & , const QString & );
            if (_t _q_method = &AdminEditBookDialog::bookDetailsUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AdminEditBookDialog::*)();
            if (_t _q_method = &AdminEditBookDialog::bookEditCompleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *AdminEditBookDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminEditBookDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminEditBookDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdminEditBookDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AdminEditBookDialog::bookDetailsUpdated(int _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AdminEditBookDialog::bookEditCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
