/****************************************************************************
** Meta object code from reading C++ file 'glopwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwidget/glopwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glopwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlopWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      30,   11,   11,   11, 0x05,
      47,   11,   11,   11, 0x05,
      69,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      99,   95,   11,   11, 0x0a,
     119,   11,   11,   11, 0x0a,
     138,   11,   11,   11, 0x0a,
     155,   11,   11,   11, 0x0a,
     173,   11,   11,   11, 0x0a,
     196,   11,   11,   11, 0x0a,
     212,   11,   11,   11, 0x0a,
     236,   11,   11,   11, 0x0a,
     257,   11,   11,   11, 0x0a,
     278,   11,   11,   11, 0x0a,
     294,   11,   11,   11, 0x0a,
     314,   11,   11,   11, 0x0a,
     328,   11,   11,   11, 0x0a,
     354,  346,   11,   11, 0x0a,
     389,   11,   11,   11, 0x0a,
     407,   11,   11,   11, 0x0a,
     425,  423,   11,   11, 0x0a,
     447,   11,   11,   11, 0x0a,
     472,  466,   11,   11, 0x0a,
     488,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlopWidget[] = {
    "GlopWidget\0\0isComputing(bool)\0"
    "isChecking(bool)\0globalRefreshNeeded()\0"
    "setVisibleUpperPart(bool)\0num\0"
    "read_text_file(int)\0startComputation()\0"
    "stop_computing()\0pause_computing()\0"
    "readModuleParameters()\0gameChoice(int)\0"
    "selectPossibleNode(int)\0traversalChoice(int)\0"
    "activate_timer(bool)\0trace_refresh()\0"
    "nodeStore_refresh()\0wait_result()\0"
    "displayExplorer()\0compute\0"
    "initChildrenAfterComputation(bool)\0"
    "initChildrenTab()\0printChildren()\0,\0"
    "nextChildren(int,int)\0previousChildren()\0"
    "index\0tabClicked(int)\0parentPositionInfo()\0"
};

void GlopWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GlopWidget *_t = static_cast<GlopWidget *>(_o);
        switch (_id) {
        case 0: _t->isComputing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->isChecking((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->globalRefreshNeeded(); break;
        case 3: _t->setVisibleUpperPart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->read_text_file((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->startComputation(); break;
        case 6: _t->stop_computing(); break;
        case 7: _t->pause_computing(); break;
        case 8: _t->readModuleParameters(); break;
        case 9: _t->gameChoice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->selectPossibleNode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->traversalChoice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->activate_timer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->trace_refresh(); break;
        case 14: _t->nodeStore_refresh(); break;
        case 15: _t->wait_result(); break;
        case 16: _t->displayExplorer(); break;
        case 17: _t->initChildrenAfterComputation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->initChildrenTab(); break;
        case 19: _t->printChildren(); break;
        case 20: _t->nextChildren((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->previousChildren(); break;
        case 22: _t->tabClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->parentPositionInfo(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlopWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlopWidget::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GlopWidget,
      qt_meta_data_GlopWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlopWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlopWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlopWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlopWidget))
        return static_cast<void*>(const_cast< GlopWidget*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GlopWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void GlopWidget::isComputing(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GlopWidget::isChecking(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GlopWidget::globalRefreshNeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GlopWidget::setVisibleUpperPart(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
