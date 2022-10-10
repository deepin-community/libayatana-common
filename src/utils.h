/*
 * Copyright 2021 Marius Gripsgard <marius@ubports.com>
 * Copyright 2021 Robert Tari <robert@tari.in>
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3, as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#pragma once

#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>

static const char *DESKTOP_LOMIRI = "Lomiri";
static const char *DESKTOP_UNITY = "Unity";
static const char *DESKTOP_MATE = "MATE";
static const char *DESKTOP_GNOME = "GNOME";
static const char *DESKTOP_XFCE = "XFCE";
static const char *DESKTOP_PANTHEON = "PANTHEON";
static const char *DESKTOP_BUDGIE = "Budgie";
static const char *SESSION_LOMIRI = "ubuntu-touch";
static const char *SESSION_UNITY = NULL;
static const char *SESSION_MATE = "mate";
static const char *SESSION_GNOME = "gnome";
static const char *SESSION_XFCE = "xfce";
static const char *SESSION_PANTHEON = NULL;
static const char *SESSION_BUDGIE = "budgie-desktop";

gboolean ayatana_common_utils_is_lomiri();
gboolean ayatana_common_utils_is_unity();
gboolean ayatana_common_utils_is_gnome();
gboolean ayatana_common_utils_is_mate();
gboolean ayatana_common_utils_is_xfce();
gboolean ayatana_common_utils_is_pantheon();
gboolean ayatana_common_utils_is_budgie();

gboolean ayatana_common_utils_have_unity_program (const gchar *program);
gboolean ayatana_common_utils_have_gnome_program (const gchar *program);
gboolean ayatana_common_utils_have_mate_program (const gchar *program);
gboolean ayatana_common_utils_have_xfce_program (const gchar *program);
gboolean ayatana_common_utils_have_pantheon_program (const gchar *program);
gboolean ayatana_common_utils_have_budgie_program (const gchar *program);

gboolean ayatana_common_utils_execute_command(const gchar * cmd);
gboolean ayatana_common_utils_open_url(const gchar * url);
gboolean ayatana_common_utils_have_program(const gchar * program);
gboolean ayatana_common_utils_zenity_warning(const char *icon_name, const char *title, const char *text);

void ayatana_common_utils_ellipsize(char *sText);
