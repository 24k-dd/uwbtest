/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ui/mainwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
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
struct qt_meta_stringdata_CLASSMainWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWidgetENDCLASS = QtMocHelpers::stringData(
    "MainWidget",
    "mySignalCurData",
    "",
    "QList<Show_Info>",
    "timerSlot",
    "buttonSlot",
    "tipSlot",
    "position",
    "isHovering",
    "showCurPoint",
    "data",
    "showPoints",
    "points",
    "updateLocus",
    "speedPlay",
    "checkId",
    "startRequestCurData"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWidgetENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[10];
    char stringdata5[11];
    char stringdata6[8];
    char stringdata7[9];
    char stringdata8[11];
    char stringdata9[13];
    char stringdata10[5];
    char stringdata11[11];
    char stringdata12[7];
    char stringdata13[12];
    char stringdata14[10];
    char stringdata15[8];
    char stringdata16[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWidgetENDCLASS_t qt_meta_stringdata_CLASSMainWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWidget"
        QT_MOC_LITERAL(11, 15),  // "mySignalCurData"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 16),  // "QList<Show_Info>"
        QT_MOC_LITERAL(45, 9),  // "timerSlot"
        QT_MOC_LITERAL(55, 10),  // "buttonSlot"
        QT_MOC_LITERAL(66, 7),  // "tipSlot"
        QT_MOC_LITERAL(74, 8),  // "position"
        QT_MOC_LITERAL(83, 10),  // "isHovering"
        QT_MOC_LITERAL(94, 12),  // "showCurPoint"
        QT_MOC_LITERAL(107, 4),  // "data"
        QT_MOC_LITERAL(112, 10),  // "showPoints"
        QT_MOC_LITERAL(123, 6),  // "points"
        QT_MOC_LITERAL(130, 11),  // "updateLocus"
        QT_MOC_LITERAL(142, 9),  // "speedPlay"
        QT_MOC_LITERAL(152, 7),  // "checkId"
        QT_MOC_LITERAL(160, 19)   // "startRequestCurData"
    },
    "MainWidget",
    "mySignalCurData",
    "",
    "QList<Show_Info>",
    "timerSlot",
    "buttonSlot",
    "tipSlot",
    "position",
    "isHovering",
    "showCurPoint",
    "data",
    "showPoints",
    "points",
    "updateLocus",
    "speedPlay",
    "checkId",
    "startRequestCurData"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   77,    2, 0x08,    3 /* Private */,
       5,    0,   78,    2, 0x08,    4 /* Private */,
       6,    2,   79,    2, 0x08,    5 /* Private */,
       9,    1,   84,    2, 0x08,    8 /* Private */,
      11,    1,   87,    2, 0x08,   10 /* Private */,
      13,    0,   90,    2, 0x08,   12 /* Private */,
      14,    0,   91,    2, 0x08,   13 /* Private */,
      15,    0,   92,    2, 0x08,   14 /* Private */,
      16,    0,   93,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Bool,    7,    8,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void, 0x80000000 | 3,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWidget, std::true_type>,
        // method 'mySignalCurData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<Show_Info> &, std::false_type>,
        // method 'timerSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'buttonSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tipSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPointF, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showCurPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<Show_Info>, std::false_type>,
        // method 'showPoints'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<Show_Info> &, std::false_type>,
        // method 'updateLocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'speedPlay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startRequestCurData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mySignalCurData((*reinterpret_cast< std::add_pointer_t<QList<Show_Info>>>(_a[1]))); break;
        case 1: _t->timerSlot(); break;
        case 2: _t->buttonSlot(); break;
        case 3: _t->tipSlot((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->showCurPoint((*reinterpret_cast< std::add_pointer_t<QList<Show_Info>>>(_a[1]))); break;
        case 5: _t->showPoints((*reinterpret_cast< std::add_pointer_t<QList<Show_Info>>>(_a[1]))); break;
        case 6: _t->updateLocus(); break;
        case 7: _t->speedPlay(); break;
        case 8: _t->checkId(); break;
        case 9: _t->startRequestCurData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWidget::*)(const QVector<Show_Info> & );
            if (_t _q_method = &MainWidget::mySignalCurData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MainWidget::mySignalCurData(const QVector<Show_Info> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
