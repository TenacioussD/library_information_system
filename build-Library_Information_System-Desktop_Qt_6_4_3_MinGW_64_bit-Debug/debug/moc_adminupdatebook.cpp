/****************************************************************************
** Meta object code from reading C++ file 'adminupdatebook.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Desktop/DEV with MJ code/LIS/adminupdatebook.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminupdatebook.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AdminUpdateBook_t {
    uint offsetsAndSizes[40];
    char stringdata0[16];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[7];
    char stringdata5[6];
    char stringdata6[10];
    char stringdata7[23];
    char stringdata8[18];
    char stringdata9[24];
    char stringdata10[17];
    char stringdata11[17];
    char stringdata12[17];
    char stringdata13[17];
    char stringdata14[16];
    char stringdata15[6];
    char stringdata16[13];
    char stringdata17[14];
    char stringdata18[20];
    char stringdata19[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AdminUpdateBook_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AdminUpdateBook_t qt_meta_stringdata_AdminUpdateBook = {
    {
        QT_MOC_LITERAL(0, 15),  // "AdminUpdateBook"
        QT_MOC_LITERAL(16, 15),  // "editBookClicked"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 5),  // "title"
        QT_MOC_LITERAL(39, 6),  // "author"
        QT_MOC_LITERAL(46, 5),  // "image"
        QT_MOC_LITERAL(52, 9),  // "bookIndex"
        QT_MOC_LITERAL(62, 22),  // "on_catalogue_3_clicked"
        QT_MOC_LITERAL(85, 17),  // "on_back_2_clicked"
        QT_MOC_LITERAL(103, 23),  // "on_pushButton_3_clicked"
        QT_MOC_LITERAL(127, 16),  // "on_edit1_clicked"
        QT_MOC_LITERAL(144, 16),  // "on_edit2_clicked"
        QT_MOC_LITERAL(161, 16),  // "on_edit3_clicked"
        QT_MOC_LITERAL(178, 16),  // "on_edit4_clicked"
        QT_MOC_LITERAL(195, 15),  // "updateCatalogue"
        QT_MOC_LITERAL(211, 5),  // "index"
        QT_MOC_LITERAL(217, 12),  // "updatedTitle"
        QT_MOC_LITERAL(230, 13),  // "updatedAuthor"
        QT_MOC_LITERAL(244, 19),  // "on_status_3_clicked"
        QT_MOC_LITERAL(264, 24)   // "on_manageBooks_3_clicked"
    },
    "AdminUpdateBook",
    "editBookClicked",
    "",
    "title",
    "author",
    "image",
    "bookIndex",
    "on_catalogue_3_clicked",
    "on_back_2_clicked",
    "on_pushButton_3_clicked",
    "on_edit1_clicked",
    "on_edit2_clicked",
    "on_edit3_clicked",
    "on_edit4_clicked",
    "updateCatalogue",
    "index",
    "updatedTitle",
    "updatedAuthor",
    "on_status_3_clicked",
    "on_manageBooks_3_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AdminUpdateBook[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   80,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   89,    2, 0x08,    6 /* Private */,
       8,    0,   90,    2, 0x08,    7 /* Private */,
       9,    0,   91,    2, 0x08,    8 /* Private */,
      10,    0,   92,    2, 0x08,    9 /* Private */,
      11,    0,   93,    2, 0x08,   10 /* Private */,
      12,    0,   94,    2, 0x08,   11 /* Private */,
      13,    0,   95,    2, 0x08,   12 /* Private */,
      14,    3,   96,    2, 0x08,   13 /* Private */,
      18,    0,  103,    2, 0x08,   17 /* Private */,
      19,    0,  104,    2, 0x08,   18 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QPixmap, QMetaType::Int,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   15,   16,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AdminUpdateBook::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_AdminUpdateBook.offsetsAndSizes,
    qt_meta_data_AdminUpdateBook,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AdminUpdateBook_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdminUpdateBook, std::true_type>,
        // method 'editBookClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_catalogue_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_edit1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_edit2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_edit3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_edit4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateCatalogue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_status_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_manageBooks_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AdminUpdateBook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminUpdateBook *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->editBookClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 1: _t->on_catalogue_3_clicked(); break;
        case 2: _t->on_back_2_clicked(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_edit1_clicked(); break;
        case 5: _t->on_edit2_clicked(); break;
        case 6: _t->on_edit3_clicked(); break;
        case 7: _t->on_edit4_clicked(); break;
        case 8: _t->updateCatalogue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 9: _t->on_status_3_clicked(); break;
        case 10: _t->on_manageBooks_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AdminUpdateBook::*)(const QString & , const QString & , const QPixmap & , int );
            if (_t _q_method = &AdminUpdateBook::editBookClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *AdminUpdateBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminUpdateBook::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminUpdateBook.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AdminUpdateBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void AdminUpdateBook::editBookClicked(const QString & _t1, const QString & _t2, const QPixmap & _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
