/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../bloco_de_notas/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[32];
    char stringdata0[385];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 23), // "on_actionbrir_triggered"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 23), // "on_actionNovo_triggered"
QT_MOC_LITERAL(60, 30), // "on_actionSalvar_como_triggered"
QT_MOC_LITERAL(91, 25), // "on_actionSalvar_triggered"
QT_MOC_LITERAL(117, 25), // "on_actionFechar_triggered"
QT_MOC_LITERAL(143, 25), // "on_actionCopiar_triggered"
QT_MOC_LITERAL(169, 27), // "on_actionRecortar_triggered"
QT_MOC_LITERAL(197, 24), // "on_actionColar_triggered"
QT_MOC_LITERAL(222, 27), // "on_actionDesfazer_triggered"
QT_MOC_LITERAL(250, 26), // "on_actionRefazer_triggered"
QT_MOC_LITERAL(277, 24), // "on_actionFonte_triggered"
QT_MOC_LITERAL(302, 22), // "on_actionCor_triggered"
QT_MOC_LITERAL(325, 31), // "on_actionCor_de_fundo_triggered"
QT_MOC_LITERAL(357, 27) // "on_actionImprimir_triggered"

    },
    "MainWindow\0on_actionbrir_triggered\0\0"
    "on_actionNovo_triggered\0"
    "on_actionSalvar_como_triggered\0"
    "on_actionSalvar_triggered\0"
    "on_actionFechar_triggered\0"
    "on_actionCopiar_triggered\0"
    "on_actionRecortar_triggered\0"
    "on_actionColar_triggered\0"
    "on_actionDesfazer_triggered\0"
    "on_actionRefazer_triggered\0"
    "on_actionFonte_triggered\0"
    "on_actionCor_triggered\0"
    "on_actionCor_de_fundo_triggered\0"
    "on_actionImprimir_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    0 /* Private */,
       3,    0,   99,    2, 0x08,    1 /* Private */,
       4,    0,  100,    2, 0x08,    2 /* Private */,
       5,    0,  101,    2, 0x08,    3 /* Private */,
       6,    0,  102,    2, 0x08,    4 /* Private */,
       7,    0,  103,    2, 0x08,    5 /* Private */,
       8,    0,  104,    2, 0x08,    6 /* Private */,
       9,    0,  105,    2, 0x08,    7 /* Private */,
      10,    0,  106,    2, 0x08,    8 /* Private */,
      11,    0,  107,    2, 0x08,    9 /* Private */,
      12,    0,  108,    2, 0x08,   10 /* Private */,
      13,    0,  109,    2, 0x08,   11 /* Private */,
      14,    0,  110,    2, 0x08,   12 /* Private */,
      15,    0,  111,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionbrir_triggered(); break;
        case 1: _t->on_actionNovo_triggered(); break;
        case 2: _t->on_actionSalvar_como_triggered(); break;
        case 3: _t->on_actionSalvar_triggered(); break;
        case 4: _t->on_actionFechar_triggered(); break;
        case 5: _t->on_actionCopiar_triggered(); break;
        case 6: _t->on_actionRecortar_triggered(); break;
        case 7: _t->on_actionColar_triggered(); break;
        case 8: _t->on_actionDesfazer_triggered(); break;
        case 9: _t->on_actionRefazer_triggered(); break;
        case 10: _t->on_actionFonte_triggered(); break;
        case 11: _t->on_actionCor_triggered(); break;
        case 12: _t->on_actionCor_de_fundo_triggered(); break;
        case 13: _t->on_actionImprimir_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
