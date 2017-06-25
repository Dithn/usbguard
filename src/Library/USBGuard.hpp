//
// Copyright (C) 2017 Red Hat, Inc.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// Authors: Daniel Kopecek <dkopecek@redhat.com>
//
#pragma once
#include "Typedefs.hpp"
#include <string>

namespace usbguard
{
  DLL_PUBLIC std::string getDaemonConfigPath();
  DLL_PUBLIC std::string getIPCAccessControlFilesPath();
  DLL_PUBLIC std::string getIPCAccessControlFileBasename(const std::string& name, bool is_group);
} /* namespace usbguard */

/* vim: set ts=2 sw=2 et */
