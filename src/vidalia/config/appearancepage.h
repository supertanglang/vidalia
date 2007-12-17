/****************************************************************
 *  Vidalia is distributed under the following license:
 *
 *  Copyright (C) 2006,  Matt Edman, Justin Hipple
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, 
 *  Boston, MA  02110-1301, USA.
 ****************************************************************/

/** 
 * \file appearancepage.h
 * \version $Id$
 * \brief Displays Vidalia language and style settings
 */

#ifndef _APPEARANCEPAGE_H
#define _APPEARANCEPAGE_H

#include <QStyleFactory>
#include <QLineEdit>

#include <vidaliasettings.h>
#include <languagesupport.h>

#include "configpage.h"
#include "ui_appearancepage.h"

class AppearancePage : public ConfigPage
{
  Q_OBJECT

public:
  /** Default Constructor */
  AppearancePage(QWidget *parent = 0);
  /** Default Destructor */
  ~AppearancePage();
  /** Saves the changes on this page */
  bool save(QString &errmsg);
  /** Loads the settings for this page */
  void load();
  
private:
  /** Returns the flag icon to use for the given <b>languageCode</b>. */
  QIcon flagForLanguage(const QString &languageCode);

  /** A VidaliaSettings object used for saving/loading settings */
  VidaliaSettings* _settings;

  /** Qt Designer generated object */
  Ui::AppearancePage ui;
};

#endif