#ifndef DBUSNOTIFICATIONS_H
#define DBUSNOTIFICATIONS_H

#include <QDBusAbstractInterface>

class DBusNotifications: public QDBusAbstractInterface
{
	Q_OBJECT
public:
	DBusNotifications(QObject *parent=0);
public slots:
	void notify(const QString & appName, quint32 replacesId, const QString & appIcon, 
			const QString & summary, const QString & body,
			const QStringList & actions, const QVariantMap & hints,
			qint32 timeout);

};

#endif
