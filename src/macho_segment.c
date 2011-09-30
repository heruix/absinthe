/**
 * GreenPois0n Absinthe - macho_segment.c
 * Copyright (C) 2010 Chronic-Dev Team
 * Copyright (C) 2010 Joshua Hill
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
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "debug.h"
#include "common.h"
#include "macho_segment.h"

/*
 * Mach-O Segment Functions
 */
macho_segment_t* macho_segment_create() {
	macho_segment_t* segment = NULL;
	return segment;
}

macho_segment_t* macho_segment_load(unsigned char* data, unsigned int offset) {
	macho_segment_t* segment = macho_segment_create();
	return segment;
}

void macho_segment_debug(macho_segment_t* segment) {

}

void macho_segment_free(macho_segment_t* segment) {

}

/*
 * Mach-O Segment Info Functions
 */
macho_segment_cmd_t* macho_segment_cmd_create() {
	macho_segment_cmd_t* info = NULL;
	return info;
}

macho_segment_cmd_t* macho_segment_cmd_load(unsigned char* data, unsigned int offset) {
	macho_segment_cmd_t* info = macho_segment_cmd_create();
	return info;
}

void macho_segment_cmd_debug(macho_segment_cmd_t* cmd) {

}

void macho_segment_cmd_free(macho_segment_cmd_t* cmd	) {

}