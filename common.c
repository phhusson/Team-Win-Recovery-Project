/*
	Copyright 2015 Pierre-Hugues Husson <phh@phh.me>
	This file is part of TWRP/TeamWin Recovery Project.

	TWRP is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	TWRP is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with TWRP.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <cutils/properties.h>
#include <sys/system_properties.h>

#include <stdlib.h>
#include "common.h"

int property_get_bool(const char *name, int def) {
	char value[PROP_VALUE_MAX];
	property_get(name, value, "0");
	return atoi(value) == 1;
}
