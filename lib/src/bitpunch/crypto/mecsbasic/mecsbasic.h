/**
This file is part of PROGRAM
Copyright (C) 2015 Frantisek Uhrecky <frantisek.uhrecky[what here]gmail.com>

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
#ifndef MECSBASIC_H
#define MECSBASIC_H

#include <bitpunch/crypto/mecsctx.h>

/**
 * Encrypt plaintext.
 * @param  out    cyphertext
 * @param  message  plaintext
 * @param  ctx  McEliece context
 * @return     0 - succes, else error
 */
int BPU_mecsBasicEncrypt(BPU_T_Vector_GF2 *out, const BPU_T_Vector_GF2 *in, const BPU_T_Mecs_Ctx *ctx);

/**
 * Encrypt plaintext.
 * @param  out    cyphertext, will be allocated inside function
 * @param  message  plaintext
 * @param  ctx  McEliece context
 * @return     0 - succes, else error
 */
int BPU_mecsBasicEncryptA(BPU_T_Vector_GF2 *out, const BPU_T_Vector_GF2 *in, const BPU_T_Mecs_Ctx *ctx);

int BPU_mecsBasicDecrypt(BPU_T_Vector_GF2 *out, const BPU_T_Vector_GF2 *in, const BPU_T_Mecs_Ctx *ctx);

int BPU_mecsBasicDecryptA(BPU_T_Vector_GF2 *out, const BPU_T_Vector_GF2 *in, const BPU_T_Mecs_Ctx *ctx);

#endif // MECSBASIC_H
