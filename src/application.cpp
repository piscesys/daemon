/*
 * Copyright (C) 2021 Piscesys Team.
 *
 * Author:     Kate Leet <kate@piscesys.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "application.h"

#include <QDBusConnection>
#include <QDebug>

Application::Application(int &argc, char **argv)
    : QCoreApplication(argc, argv)
{
}

int Application::run()
{
//    if (!QDBusConnection::systemBus().registerService("com.pisces.Daemon")) {
//        return 0;
//    } else {
//        m_appManager = new AppManager(this);
//    }

//    qDebug() << QDBusConnection::systemBus().registerService("com.pisces.Daemon") << " registerService";
    m_appManager = new AppManager(this);

    return QCoreApplication::exec();
}
