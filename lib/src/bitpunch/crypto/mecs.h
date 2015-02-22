/**
This file is part of BitPunch
Copyright (C) 2013-2014 Frantisek Uhrecky <frantisek.uhrecky[what here]gmail.com>
Copyright (C) 2013-2014 Andrej Gulyas <andrej.guly[what here]gmail.com>
Copyright (C) 2013-2014 Marek Klein  <kleinmrk[what here]gmail.com>
Copyright (C) 2013-2014 Filip Machovec  <filipmachovec[what here]yahoo.com>
Copyright (C) 2013-2014 Jozef Kudlac <jozef[what here]kudlac.sk>

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
#ifndef BPU_MECS_H
#define BPU_MECS_H

#include "mecsctx.h"

#include <bitpunch/math/gf2.h>
#include <bitpunch/math/gf2x.h>
#include <bitpunch/code/codectx.h>

/********************************** dsadsadsad ********************************/
/**
 * Key generation, first must be initialized context using BPU_mecsInitCtx().
 * @param  ctx McEliece context
 * @return     0 - success, else error
 */
/// Key generation, first must be initialized context using BPU_mecsInitCtx.
int BPU_mecsGenKeyPair(BPU_T_Mecs_Ctx *ctx);

/**
 * Encrypt plaintext (pt) and save it to cipher text. All strctures must be allocated before use.
 * @param  ct  cipher text
 * @param  pt  plain text
 * @param  ctx McEliece context
 * @return     0 - succes, else error
 */
/// Encrypt plaintext (pt) and save it to cipher text.
int BPU_mecsEncrypt(BPU_T_Vector_GF2 *ct, const BPU_T_Vector_GF2 *pt, const BPU_T_Mecs_Ctx *ctx);


/**
 * Decrypt cipher text (ct) and save it to plain text. All strctures must be allocated before use.
 * @param  pt  plain text
 * @param  ct  cipher text
 * @param  ctx McEliece context
 * @return     0 - succes, else error
 */
/// Decrypt cipher text (ct) and save it to plain text.
int BPU_mecsDecrypt(BPU_T_Vector_GF2 *pt, BPU_T_Vector_GF2 *ct, const BPU_T_Mecs_Ctx *ctx);

#endif // BPU_MECS_H
