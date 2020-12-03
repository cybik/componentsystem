/*
 * Copyright (C) 2020 Adrian Carpenter
 *
 * This file is part of the Nedrysoft component system (https://github.com/fizzyade/componentsystem)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "IComponentManager.h"

#include <QDebug>

Nedrysoft::ComponentSystem::IComponentManager::~IComponentManager() = default;

Nedrysoft::ComponentSystem::IComponentManager *Nedrysoft::ComponentSystem::IComponentManager::getInstance() {
    static auto componentManager = new IComponentManager();

    return componentManager;
}

void Nedrysoft::ComponentSystem::IComponentManager::addObject(QObject *object) {
    m_objectList.append(object);
}

void Nedrysoft::ComponentSystem::IComponentManager::removeObject(QObject *object) {
    m_objectList.removeAll(object);
}

QList<QObject *> Nedrysoft::ComponentSystem::IComponentManager::allObjects() {
    return m_objectList;
}
