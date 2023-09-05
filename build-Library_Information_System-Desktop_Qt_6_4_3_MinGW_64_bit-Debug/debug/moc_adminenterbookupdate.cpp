/****************************************************************************
** Meta object code from reading C++ file 'adminenterbookupdate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../LIS/adminenterbookupdate.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminenterbookupdate.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AdminEnterBookUpdate_t {
    uint offsetsAndSizes[28];
    char stringdata0[21];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[13];
    char stringdata5[14];
    char stringdata6[24];
    char stringdata7[21];
    char stringdata8[21];
    char stringdata9[16];
    char stringdata10[24];
    char stringdata11[23];
    char stringdata12[18];
    char stringdata13[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AdminEnterBookUpdate_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AdminEnterBookUpdate_t qt_meta_stringdata_AdminEnterBookUpdate = {
    {
        QT_MOC_LITERAL(0, 20),  // "AdminEnterBookUpdate"
        QT_MOC_LITERAL(21, 18),  // "bookDetailsUpdated"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 9),  // "bookIndex"
        QT_MOC_LITERAL(51, 12),  // "updatedTitle"
        QT_MOC_LITERAL(64, 13),  // "updatedAuthor"
        QT_MOC_LITERAL(78, 23),  // "handleBookEditCompleted"
        QT_MOC_LITERAL(102, 20),  // "on_confirm_2_clicked"
        QT_MOC_LITERAL(123, 20),  // "on_catalogue_clicked"
        QT_MOC_LITERAL(144, 15),  // "on_back_clicked"
        QT_MOC_LITERAL(160, 23),  // "on_pushButton_2_clicked"
        QT_MOC_LITERAL(184, 22),  // "on_manageBooks_clicked"
        QT_MOC_LITERAL(207, 17),  // "on_status_clicked"
        QT_MOC_LITERAL(225, 21)   // "on_membership_clicked"
    },
    "AdminEnterBookUpdate",
    "bookDetailsUpdated",
    "",
    "bookIndex",
    "updatedTitle",
    "updatedAuthor",
    "handleBookEditCompleted",
    "on_confirm_2_clicked",
    "on_catalogue_clicked",
    "on_back_clicked",
    "on_pushButton_2_clicked",
    "on_manageBooks_clicked",
    "on_status_clicked",
    "on_membership_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AdminEnterBookUpdate[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   75,    2, 0x0a,    5 /* Public */,
       7,    0,   76,    2, 0x08,    6 /* Private */,
       8,    0,   77,    2, 0x08,    7 /* Private */,
       9,    0,   78,    2, 0x08,    8 /* Private */,
      10,    0,   79,    2, 0x08,    9 /* Private */,
      11,    0,   80,    2, 0x08,   10 /* Private */,
      12,    0,   81,    2, 0x08,   11 /* Private */,
      13,    0,   82,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    3,    4,    5,

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

Q_CONSTINIT const QMetaObject AdminEnterBookUpdate::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_AdminEnterBookUpdate.offsetsAndSizes,
    qt_meta_data_AdminEnterBookUpdate,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AdminEnterBookUpdate_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdminEnterBookUpdate, std::true_type>,
        // method 'bookDetailsUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'handleBookEditCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_confirm_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_catalogue_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_manageBooks_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_status_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_membership_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AdminEnterBookUpdate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminEnterBookUpdate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->bookDetailsUpdated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->handleBookEditCompleted(); break;
        case 2: _t->on_confirm_2_clicked(); break;
        case 3: _t->on_catalogue_clicked(); break;
        case 4: _t->on_back_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_manageBooks_clicked(); break;
        case 7: _t->on_status_clicked(); break;
        case 8: _t->on_membership_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AdminEnterBookUpdate::*)(int , const QString & , const QString & );
            if (_t _q_method = &AdminEnterBookUpdate::bookDetailsUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *AdminEnterBookUpdate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminEnterBookUpdate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminEnterBookUpdate.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AdminEnterBookUpdate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AdminEnterBookUpdate::bookDetailsUpdated(int _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
