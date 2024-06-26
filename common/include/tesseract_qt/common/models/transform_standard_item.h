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
#ifndef TESSERACT_QT_COMMON_TRANSFORM_STANDARD_ITEM_H
#define TESSERACT_QT_COMMON_TRANSFORM_STANDARD_ITEM_H

#include <Eigen/Geometry>
#include <boost/uuid/uuid.hpp>

#include <QStandardItem>

namespace tesseract_gui
{
class ToolPathPose;
class PositionStandardItem;
class QuaternionStandardItem;
class TransformStandardItem : public QStandardItem
{
public:
  explicit TransformStandardItem(const Eigen::Isometry3d& transform);
  explicit TransformStandardItem(const QString& text, const Eigen::Isometry3d& transform);
  explicit TransformStandardItem(const QIcon& icon, const QString& text, const Eigen::Isometry3d& transform);
  explicit TransformStandardItem(const ToolPathPose& transform);
  explicit TransformStandardItem(const QString& text, const ToolPathPose& transform);
  explicit TransformStandardItem(const QIcon& icon, const QString& text, const ToolPathPose& transform);
  int type() const override;

  /**
   * @brief Get the transform
   * @return The Eigen Transform
   */
  Eigen::Isometry3d getTransfrom() const;

  /**
   * @brief Set the transform
   * @param transform The transform to assign
   */
  void setTransform(const Eigen::Isometry3d& transform);

  /** @brief Get the uuid */
  boost::uuids::uuid getUUID() const;

  /**
   * @brief Get the parent uuid
   * @details This can be null
   */
  const boost::uuids::uuid& getParentUUID() const;

  /** @brief Set the segment description */
  void setDescription(const std::string& desc);

  /** @brief Get the segment description */
  const std::string& getDescription() const;

private:
  void ctor(const Eigen::Isometry3d& transform);
  boost::uuids::uuid uuid_{};
  boost::uuids::uuid parent_uuid_{};
  std::string description_;
  PositionStandardItem* position_;
  QuaternionStandardItem* orientation_;
};
}  // namespace tesseract_gui

#endif  // TESSERACT_QT_COMMON_TRANSFORM_STANDARD_ITEM_H
