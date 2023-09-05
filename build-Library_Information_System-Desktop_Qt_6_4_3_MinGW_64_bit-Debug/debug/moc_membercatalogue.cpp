/****************************************************************************
** Meta object code from reading C++ file 'membercatalogue.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Desktop/DEV with MJ code/LIS/membercatalogue.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'membercatalogue.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_MemberCatalogue_t {
    uint offsetsAndSizes[24];
    char stringdata0[16];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[23];
    char stringdata5[18];
    char stringdata6[22];
    char stringdata7[13];
    char stringdata8[22];
    char stringdata9[14];
    char stringdata10[6];
    char stringdata11[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MemberCatalogue_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MemberCatalogue_t qt_meta_stringdata_MemberCatalogue = {
    {
        QT_MOC_LITERAL(0, 15),  // "MemberCatalogue"
        QT_MOC_LITERAL(16, 15),  // "on_back_clicked"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 17),  // "on_logout_clicked"
        QT_MOC_LITERAL(51, 22),  // "on_manageBooks_clicked"
        QT_MOC_LITERAL(74, 17),  // "on_status_clicked"
        QT_MOC_LITERAL(92, 21),  // "on_membership_clicked"
        QT_MOC_LITERAL(114, 12),  // "saveBookInfo"
        QT_MOC_LITERAL(127, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(149, 13),  // "isBookOrdered"
        QT_MOC_LITERAL(163, 5),  // "title"
        QT_MOC_LITERAL(169, 6)   // "author"
    },
    "MemberCatalogue",
    "on_back_clicked",
    "",
    "on_logout_clicked",
    "on_manageBooks_clicked",
    "on_status_clicked",
    "on_membership_clicked",
    "saveBookInfo",
    "on_pushButton_clicked",
    "isBookOrdered",
    "title",
    "author"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MemberCatalogue[] = {

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
       9,    2,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   10,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject MemberCatalogue::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MemberCatalogue.offsetsAndSizes,
    qt_meta_data_MemberCatalogue,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MemberCatalogue_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MemberCatalogue, std::true_type>,
        // method 'on_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_logout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_manageBooks_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_status_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_membership_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveBookInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isBookOrdered'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void MemberCatalogue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MemberCatalogue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_back_clicked(); break;
        case 1: _t->on_logout_clicked(); break;
        case 2: _t->on_manageBooks_clicked(); break;
        case 3: _t->on_status_clicked(); break;
        case 4: _t->on_membership_clicked(); break;
        case 5: _t->saveBookInfo(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: { bool _r = _t->isBookOrdered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *MemberCatalogue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MemberCatalogue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MemberCatalogue.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MemberCatalogue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
