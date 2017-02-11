/*
 This file is part of BitPunch
 Copyright (C) 2015 Frantisek Uhrecky <frantisek.uhrecky[what here]gmail.com>
 Copyright (C) 2016 Marek Klein <kleinmrk[what here]gmail.com>

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef BITPUNCH_H
#define BITPUNCH_H

#include "config.h"
#include "debugio.h"

#include <bitpunch/crypto/mecs.h>

#define BPU_SUCCESS 0
#define BPU_ERROR -1

#define BPU_SAFE_FREE(function, pointer) do { if(NULL != pointer) { function(pointer); pointer = NULL; } } while(0)

#endif // BITPUNCH_H
