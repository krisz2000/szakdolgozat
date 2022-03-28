/****************************************************************************
** Meta object code from reading C++ file 'tracewidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/computation/tracewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tracewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WidgetTrace[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   12,   12,   12, 0x0a,
      66,   48,   12,   12, 0x0a,
      94,   83,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WidgetTrace[] = {
    "WidgetTrace\0\0requestExplorer()\0"
    "update_display()\0lockedComputation\0"
    "initialize(bool)\0row,column\0"
    "click_on_position(int,int)\0"
};

void WidgetTrace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WidgetTrace *_t = static_cast<WidgetTrace *>(_o);
        switch (_id) {
        case 0: _t->requestExplorer(); break;
        case 1: _t->update_display(); break;
        case 2: _t->initialize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->click_on_position((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WidgetTrace::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WidgetTrace::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WidgetTrace,
      qt_meta_data_WidgetTrace, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WidgetTrace::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WidgetTrace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WidgetTrace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetTrace))
        return static_cast<void*>(const_cast< WidgetTrace*>(this));
    return QWidget::qt_metacast(_clname);
}

int WidgetTrace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void WidgetTrace::requestExplorer()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_WidgetChildren[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      29,   15,   15,   15, 0x0a,
      57,   46,   15,   15, 0x08,
      87,   46,   15,   15, 0x08,
     114,   46,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WidgetChildren[] = {
    "WidgetChildren\0\0initialize()\0"
    "update_display()\0row,column\0"
    "click_on_currentNode(int,int)\0"
    "click_on_children(int,int)\0"
    "click_on_parent(int,int)\0"
};

void WidgetChildren::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WidgetChildren *_t = static_cast<WidgetChildren *>(_o);
        switch (_id) {
        case 0: _t->initialize(); break;
        case 1: _t->update_display(); break;
        case 2: _t->click_on_currentNode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->click_on_children((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->click_on_parent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WidgetChildren::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WidgetChildren::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WidgetChildren,
      qt_meta_data_WidgetChildren, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WidgetChildren::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WidgetChildren::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WidgetChildren::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetChildren))
        return static_cast<void*>(const_cast< WidgetChildren*>(this));
    return QWidget::qt_metacast(_clname);
}

int WidgetChildren::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
