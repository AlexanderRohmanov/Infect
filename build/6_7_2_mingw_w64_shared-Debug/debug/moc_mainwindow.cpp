/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "updateCountLabel",
    "",
    "QGraphicsScene*",
    "updScene",
    "updSceneChart",
    "QLabel*",
    "labelSickCount",
    "labelHealthyCount",
    "labelRecoveredCount",
    "int*",
    "chartNumber",
    "QTimer*",
    "timer",
    "QPushButton*",
    "button",
    "on_pushButton_clicked",
    "on_pushButton_Distance_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    8,   32,    2, 0x0a,    1 /* Public */,
      16,    0,   49,    2, 0x08,   10 /* Private */,
      17,    0,   50,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 14,    4,    5,    7,    8,    9,   11,   13,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'updateCountLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGraphicsScene *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGraphicsScene *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTimer *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Distance_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateCountLabel((*reinterpret_cast< std::add_pointer_t<QGraphicsScene*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QGraphicsScene*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<int*>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QTimer*>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QPushButton*>>(_a[8]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_Distance_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGraphicsScene* >(); break;
            case 4:
            case 3:
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            case 7:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPushButton* >(); break;
            case 6:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTimer* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
