/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -p freedesktop_objectmanager -i bluez_helper.h -v -c DBusObjectManagerInterface org.freedesktop.DBus.ObjectManager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef FREEDESKTOP_OBJECTMANAGER_H_1442473386
#define FREEDESKTOP_OBJECTMANAGER_H_1442473386

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "bluez_helper.h"

/*
 * Proxy class for interface org.freedesktop.DBus.ObjectManager
 */
class DBusObjectManagerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.DBus.ObjectManager"; }

public:
    DBusObjectManagerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~DBusObjectManagerInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<ManagedObjectList> GetManagedObjects()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetManagedObjects"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void InterfacesAdded(const QDBusObjectPath &object_path, InterfaceList interfaces_and_properties);
    void InterfacesRemoved(const QDBusObjectPath &object_path, const QStringList &interfaces);
};

namespace org {
  namespace freedesktop {
    namespace DBus {
      typedef ::DBusObjectManagerInterface ObjectManager;
    }
  }
}
#endif
