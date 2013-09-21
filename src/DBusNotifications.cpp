#include "DBusNotifications.h"

#include <QDBusPendingCall>

DBusNotifications::DBusNotifications(QObject * parent)
:QDBusAbstractInterface("org.freedesktop.Notifications", "/org/freedesktop/Notifications", "org.freedesktop.Notifications", QDBusConnection::sessionBus(), parent)
{
}

void DBusNotifications::notify(const QString & appName, quint32 replacesId, const QString & appIcon, 
			const QString & summary, const QString & body,
			const QStringList & actions, const QVariantMap & hints,
			qint32 timeout)
{
	asyncCall("Notify", appName, replacesId, appIcon, summary, body, actions, hints, timeout);
}
