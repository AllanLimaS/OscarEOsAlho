/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../menu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Menu_t {
    QByteArrayData data[17];
    char stringdata[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Menu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Menu_t qt_meta_stringdata_Menu = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 21),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 21),
QT_MOC_LITERAL(4, 50, 20),
QT_MOC_LITERAL(5, 71, 24),
QT_MOC_LITERAL(6, 96, 23),
QT_MOC_LITERAL(7, 120, 19),
QT_MOC_LITERAL(8, 140, 21),
QT_MOC_LITERAL(9, 162, 25),
QT_MOC_LITERAL(10, 188, 24),
QT_MOC_LITERAL(11, 213, 27),
QT_MOC_LITERAL(12, 241, 26),
QT_MOC_LITERAL(13, 268, 25),
QT_MOC_LITERAL(14, 294, 24),
QT_MOC_LITERAL(15, 319, 27),
QT_MOC_LITERAL(16, 347, 26)
    },
    "Menu\0on_pushButton_clicked\0\0"
    "on_B_hp_menos_clicked\0on_B_hp_mais_clicked\0"
    "on_B_forca_menos_clicked\0"
    "on_B_forca_mais_clicked\0on_L_hp_linkHovered\0"
    "on_L_hp_linkActivated\0on_B_defesa_menos_clicked\0"
    "on_B_defesa_mais_clicked\0"
    "on_B_capacete_menos_clicked\0"
    "on_B_capacete_mais_clicked\0"
    "on_B_espada_menos_clicked\0"
    "on_B_espada_mais_clicked\0"
    "on_B_peitoral_menos_clicked\0"
    "on_B_peitoral_mais_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Menu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08,
       3,    0,   90,    2, 0x08,
       4,    0,   91,    2, 0x08,
       5,    0,   92,    2, 0x08,
       6,    0,   93,    2, 0x08,
       7,    0,   94,    2, 0x08,
       8,    0,   95,    2, 0x08,
       9,    0,   96,    2, 0x08,
      10,    0,   97,    2, 0x08,
      11,    0,   98,    2, 0x08,
      12,    0,   99,    2, 0x08,
      13,    0,  100,    2, 0x08,
      14,    0,  101,    2, 0x08,
      15,    0,  102,    2, 0x08,
      16,    0,  103,    2, 0x08,

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
    QMetaType::Void,

       0        // eod
};

void Menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Menu *_t = static_cast<Menu *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_B_hp_menos_clicked(); break;
        case 2: _t->on_B_hp_mais_clicked(); break;
        case 3: _t->on_B_forca_menos_clicked(); break;
        case 4: _t->on_B_forca_mais_clicked(); break;
        //case 5: _t->on_L_hp_linkHovered(); break;
        //case 6: _t->on_L_hp_linkActivated(); break;
        case 7: _t->on_B_defesa_menos_clicked(); break;
        case 8: _t->on_B_defesa_mais_clicked(); break;
        case 9: _t->on_B_capacete_menos_clicked(); break;
        case 10: _t->on_B_capacete_mais_clicked(); break;
        case 11: _t->on_B_espada_menos_clicked(); break;
        case 12: _t->on_B_espada_mais_clicked(); break;
        case 13: _t->on_B_peitoral_menos_clicked(); break;
        case 14: _t->on_B_peitoral_mais_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Menu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Menu.data,
      qt_meta_data_Menu,  qt_static_metacall, 0, 0}
};


const QMetaObject *Menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Menu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Menu.stringdata))
        return static_cast<void*>(const_cast< Menu*>(this));
    return QWidget::qt_metacast(_clname);
}

int Menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
