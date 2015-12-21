/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DBusDockEntry -p dbusdockentry dde.dock.entry.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DBUSDOCKENTRY_H_1450418911
#define DBUSDOCKENTRY_H_1450418911

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

typedef QMap<QString, QString> StringMap;
Q_DECLARE_METATYPE(StringMap)
/*
 * Proxy class for interface dde.dock.Entry
 */
class DBusDockEntry: public QDBusAbstractInterface
{
    Q_OBJECT

    Q_SLOT void __propertyChanged__(const QDBusMessage& msg)
    {
        QList<QVariant> arguments = msg.arguments();
        if (3 != arguments.count())
            return;
        QString interfaceName = msg.arguments().at(0).toString();
        if (interfaceName !="dde.dock.Entry")
            return;
        QVariantMap changedProps = qdbus_cast<QVariantMap>(arguments.at(1).value<QDBusArgument>());
        foreach(const QString &prop, changedProps.keys()) {
        const QMetaObject* self = metaObject();
            for (int i=self->propertyOffset(); i < self->propertyCount(); ++i) {
                QMetaProperty p = self->property(i);
                if (p.name() == prop) {
 	            Q_EMIT p.notifySignal().invoke(this);
                }
            }
        }
   }
public:
    static inline const char *staticServerPath()
    { return "com.deepin.daemon.Dock"; }
    static inline const char *staticInterfaceName()
    { return "dde.dock.Entry"; }

public:
    DBusDockEntry(const QString &path, QObject *parent = 0);

    ~DBusDockEntry();

    Q_PROPERTY(StringMap Data READ data NOTIFY DataChanged)
    inline StringMap data() const
    { return qvariant_cast< StringMap >(property("Data")); }

    Q_PROPERTY(QString Id READ id NOTIFY IdChanged)
    inline QString id() const
    { return qvariant_cast< QString >(property("Id")); }

    Q_PROPERTY(QString Type READ type NOTIFY TypeChanged)
    inline QString type() const
    { return qvariant_cast< QString >(property("Type")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<bool> Activate(int in0, int in1, uint in2)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1) << QVariant::fromValue(in2);
        return asyncCallWithArgumentList(QStringLiteral("Activate"), argumentList);
    }

    inline QDBusPendingReply<> ContextMenu(int in0, int in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("ContextMenu"), argumentList);
    }

    inline QDBusPendingReply<> HandleDragDrop(int in0, int in1, const QString &in2, uint in3)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1) << QVariant::fromValue(in2) << QVariant::fromValue(in3);
        return asyncCallWithArgumentList(QStringLiteral("HandleDragDrop"), argumentList);
    }

    inline QDBusPendingReply<> HandleDragEnter(int in0, int in1, const QString &in2, uint in3)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1) << QVariant::fromValue(in2) << QVariant::fromValue(in3);
        return asyncCallWithArgumentList(QStringLiteral("HandleDragEnter"), argumentList);
    }

    inline QDBusPendingReply<> HandleDragLeave(int in0, int in1, const QString &in2, uint in3)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1) << QVariant::fromValue(in2) << QVariant::fromValue(in3);
        return asyncCallWithArgumentList(QStringLiteral("HandleDragLeave"), argumentList);
    }

    inline QDBusPendingReply<> HandleDragOver(int in0, int in1, const QString &in2, uint in3)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1) << QVariant::fromValue(in2) << QVariant::fromValue(in3);
        return asyncCallWithArgumentList(QStringLiteral("HandleDragOver"), argumentList);
    }

    inline QDBusPendingReply<> HandleMenuItem(const QString &in0, uint in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("HandleMenuItem"), argumentList);
    }

    inline QDBusPendingReply<> HandleMouseWheel(int in0, int in1, int in2, uint in3)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1) << QVariant::fromValue(in2) << QVariant::fromValue(in3);
        return asyncCallWithArgumentList(QStringLiteral("HandleMouseWheel"), argumentList);
    }

    inline QDBusPendingReply<> SecondaryActivate(int in0, int in1, uint in2)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1) << QVariant::fromValue(in2);
        return asyncCallWithArgumentList(QStringLiteral("SecondaryActivate"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void DataChanged(const QString &in0, const QString &in1);
// begin property changed signals
//void DataChanged();
void IdChanged();
void TypeChanged();
};

namespace dde {
  namespace dock {
    typedef ::DBusDockEntry Entry;
  }
}
#endif