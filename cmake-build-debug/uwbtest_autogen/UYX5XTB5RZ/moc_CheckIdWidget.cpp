/****************************************************************************
** Meta object code from reading C++ file 'CheckIdWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ui/CheckIdWidget.h"
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
#error "The header file 'CheckIdWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCheckIdWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSCheckIdWidgetENDCLASS = QtMocHelpers::stringData(
    "CheckIdWidget",
    "mySignalPoints",
    "",
    "QList<Show_Info>",
    "points",
    "mySignalClose",
    "stateSignal",
    "checkIdBtn",
    "stateChange",
    "a"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCheckIdWidgetENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[14];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[7];
    char stringdata5[14];
    char stringdata6[12];
    char stringdata7[11];
    char stringdata8[12];
    char stringdata9[2];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCheckIdWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCheckIdWidgetENDCLASS_t qt_meta_stringdata_CLASSCheckIdWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "CheckIdWidget"
        QT_MOC_LITERAL(14, 14),  // "mySignalPoints"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 16),  // "QList<Show_Info>"
        QT_MOC_LITERAL(47, 6),  // "points"
        QT_MOC_LITERAL(54, 13),  // "mySignalClose"
        QT_MOC_LITERAL(68, 11),  // "stateSignal"
        QT_MOC_LITERAL(80, 10),  // "checkIdBtn"
        QT_MOC_LITERAL(91, 11),  // "stateChange"
        QT_MOC_LITERAL(103, 1)   // "a"
    },
    "CheckIdWidget",
    "mySignalPoints",
    "",
    "QList<Show_Info>",
    "points",
    "mySignalClose",
    "stateSignal",
    "checkIdBtn",
    "stateChange",
    "a"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCheckIdWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       5,    0,   47,    2, 0x06,    3 /* Public */,
       6,    0,   48,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   49,    2, 0x0a,    5 /* Public */,
       8,    1,   50,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject CheckIdWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSCheckIdWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCheckIdWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCheckIdWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CheckIdWidget, std::true_type>,
        // method 'mySignalPoints'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<struct Show_Info> &, std::false_type>,
        // method 'mySignalClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stateSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkIdBtn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stateChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void CheckIdWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CheckIdWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mySignalPoints((*reinterpret_cast< std::add_pointer_t<QList<Show_Info>>>(_a[1]))); break;
        case 1: _t->mySignalClose(); break;
        case 2: _t->stateSignal(); break;
        case 3: _t->checkIdBtn(); break;
        case 4: _t->stateChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CheckIdWidget::*)(const QVector<struct Show_Info> & );
            if (_t _q_method = &CheckIdWidget::mySignalPoints; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CheckIdWidget::*)();
            if (_t _q_method = &CheckIdWidget::mySignalClose; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CheckIdWidget::*)();
            if (_t _q_method = &CheckIdWidget::stateSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *CheckIdWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CheckIdWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCheckIdWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CheckIdWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void CheckIdWidget::mySignalPoints(const QVector<struct Show_Info> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CheckIdWidget::mySignalClose()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CheckIdWidget::stateSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
