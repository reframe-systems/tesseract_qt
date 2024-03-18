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
#ifndef TESSERACT_QT_ENVIRONMENT_ENVIRONMENT_WIDGET_H
#define TESSERACT_QT_ENVIRONMENT_ENVIRONMENT_WIDGET_H

#ifndef Q_MOC_RUN
#include <memory>
#include <QWidget>
#endif

namespace Ui
{
class EnvironmentWidget;
}

class QStandardItem;

namespace tesseract_gui
{
class ComponentInfo;
struct LinkVisibilityProperties;

class EnvironmentWidget : public QWidget
{
  Q_OBJECT

public:
  explicit EnvironmentWidget(QWidget* parent = nullptr);
  explicit EnvironmentWidget(std::shared_ptr<const ComponentInfo> component_info, QWidget* parent = nullptr);
  ~EnvironmentWidget() override;

  void setComponentInfo(std::shared_ptr<const ComponentInfo> component_info);
  std::shared_ptr<const ComponentInfo> getComponentInfo() const;

public Q_SLOTS:
  virtual void onPlotSceneGraph();

private:
  struct Implementation;
  std::unique_ptr<Ui::EnvironmentWidget> ui;
  std::unique_ptr<Implementation> data_;

  //  void updateModels();
};
}  // namespace tesseract_gui

#endif  // TESSERACT_QT_ENVIRONMENT_ENVIRONMENT_WIDGET_H
