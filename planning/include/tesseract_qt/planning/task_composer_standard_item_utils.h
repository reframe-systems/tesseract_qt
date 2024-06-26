/**
 * @author Levi Armstrong <levi.armstrong@gmail.com>
 *
 * @copyright Copyright (C) 2022 Levi Armstrong <levi.armstrong@gmail.com>
 *
 * @par License
 * GNU Lesser General Public License Version 3, 29 June 2007
 * @par
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 * @par
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * @par
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
#ifndef TESSERACT_QT_PLANNING_TASK_COMPOSER_STANDARD_ITEM_UTILS_H
#define TESSERACT_QT_PLANNING_TASK_COMPOSER_STANDARD_ITEM_UTILS_H

#include <tesseract_common/fwd.h>

#include <QStandardItem>
#include <QList>

namespace tesseract_gui
{
/**
 * @brief This will return a standard item anything stored in the AnyPoly.
 * @param any_poly The any poly to create a standard item
 * @return A standard item representation of the AnyPoly
 */
QList<QStandardItem*> createStandardItemAnyPoly(const QString& key, const tesseract_common::AnyPoly& any_poly);

}  // namespace tesseract_gui

#endif  // TESSERACT_QT_PLANNING_TASK_COMPOSER_STANDARD_ITEM_UTILS_H
