/*
** This file has been pre-processed with DynASM.
** http://luajit.org/dynasm.html
** DynASM version 1.4.0, DynASM arm version 1.4.0
** DO NOT EDIT! The original file is in "call_arm64.dasc".
*/

/* vim: ts=4 sw=4 sts=4 et tw=78
 * Portions copyright (c) 2015-present, Facebook, Inc. All rights reserved.
 * Portions copyright (c) 2011 James R. McKaskill.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */
//|.arch arm64
#if DASM_VERSION != 10400
#error "Version mismatch between DynASM and included encoding engine"
#endif

//|.actionlist build_actionlist
static const unsigned int build_actionlist[711] = {
0xF84002A9,
0x000E0000,
0x00000000,
0xF84002A9,
0x000E0000,
0x00000000,
0xB84002A9,
0x000E0000,
0x00000000,
0xF80003E0,
0x000E0000,
0x00000000,
0xF80003E0,
0x000E0000,
0x00000000,
0xB80003E0,
0x000E0000,
0x00000000,
0xFC4002A0,
0x000E0000,
0x00000000,
0xBC4002B0,
0x000E0000,
0x1E22C200,
0x00000000,
0xFC0003E0,
0x000E0000,
0x00000000,
0x1E624000,
0xBC0003E0,
0x000E0000,
0x00000000,
0xFC0003E0,
0x000E0000,
0x00000000,
0x1E624000,
0xBC0003E0,
0x000E0000,
0x00000000,
0xD100C3FF,
0xA9027BFD,
0xA9015BF5,
0xA90053F3,
0x910043F5,
0xAA0003F3,
0x00000000,
0xAA1303E0,
0x94000000,
0x00030000,
0xAA0003F4,
0xF100001F,
0x000B0000,
0x00000000,
0x5400000A,
0x00050802,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xAA0903E1,
0xAA1303E0,
0x94000000,
0x00030001,
0x0006000C,
0x5400000D,
0x00050801,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xAA0903E1,
0xAA1303E0,
0x94000000,
0x00030001,
0x00000000,
0x5400000A,
0x00050801,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xAA0903E1,
0xAA1303E0,
0x94000000,
0x00030001,
0x00000000,
0x0006000B,
0x00000000,
0xCB3473FF,
0xD10003FF,
0x000B0000,
0x00000000,
0x52800009,
0x00090205,
0x72A00009,
0x00090205,
0x93407D29,
0xD2800003,
0x00090205,
0xF2A00003,
0x00090205,
0xF2C00003,
0x00090205,
0xF2E00003,
0x00090205,
0x2A0903E2,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030002,
0x00000000,
0x52800009,
0x00090205,
0x72A00009,
0x00090205,
0x93407D29,
0xD2800003,
0x00090205,
0xF2A00003,
0x00090205,
0xF2C00003,
0x00090205,
0xF2E00003,
0x00090205,
0x2A0903E2,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030003,
0x00000000,
0x52800009,
0x00090205,
0x72A00009,
0x00090205,
0x93407D29,
0xD2800003,
0x00090205,
0xF2A00003,
0x00090205,
0xF2C00003,
0x00090205,
0xF2E00003,
0x00090205,
0x2A0903E2,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030004,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030005,
0x00000000,
0xD3401C00,
0x00000000,
0x93401C00,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030005,
0x00000000,
0xD3403C00,
0x00000000,
0x93403C00,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030005,
0xF100001F,
0x54000000,
0x00050801,
0x52800020,
0x0006000B,
0xD3401C00,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030006,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030005,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030007,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030008,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x00030009,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000A,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000B,
0x00000000,
0x1E604020,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000A,
0x00000000,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000C,
0x00000000,
0x910003E9,
0x91000129,
0x000B0000,
0xAA0903E4,
0x52800003,
0x00090205,
0xAA1403E2,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000D,
0x00000000,
0x910003E9,
0x91000129,
0x000B0000,
0xAA0903E4,
0x52800003,
0x00090205,
0xAA1403E2,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000E,
0x00000000,
0x910003E9,
0x91000129,
0x000B0000,
0xAA0903E5,
0x52800004,
0x00090205,
0x52800003,
0x00090205,
0xAA1403E2,
0x52800001,
0x00090205,
0xAA1303E0,
0x94000000,
0x0003000F,
0x00000000,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xAA1F03EA,
0xB940012A,
0x2A0A03E0,
0x94000000,
0x00030010,
0x00000000,
0x910083FF,
0x00000000,
0xFC4003E7,
0x000E0000,
0x00000000,
0xFC4003E6,
0x000E0000,
0x00000000,
0xFC4003E5,
0x000E0000,
0x00000000,
0xFC4003E4,
0x000E0000,
0x00000000,
0xFC4003E3,
0x000E0000,
0x00000000,
0xFC4003E2,
0x000E0000,
0x00000000,
0xFC4003E1,
0x000E0000,
0x00000000,
0xFC4003E0,
0x000E0000,
0x00000000,
0xF9401FE8,
0x00000000,
0xF9401BE7,
0x00000000,
0xF94017E6,
0x00000000,
0xF94013E5,
0x00000000,
0xF9400FE4,
0x00000000,
0xF9400BE3,
0x00000000,
0xF94007E2,
0x00000000,
0xF94003E0,
0x00000000,
0x910003FF,
0x000B0000,
0x00000000,
0x94000000,
0x00030011,
0x8B3473FF,
0xD100C3FF,
0x00000000,
0xF90013E0,
0x94000000,
0x00030012,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0x52800009,
0x00090205,
0x72A00009,
0x00090205,
0x93407D29,
0xD2800002,
0x00090205,
0xF2A00002,
0x00090205,
0xF2C00002,
0x00090205,
0xF2E00002,
0x00090205,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030013,
0xF94013E9,
0xF9000009,
0x52800020,
0xF85F02B4,
0xF85F82B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xF90013E0,
0x94000000,
0x00030012,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0x52800009,
0x00090205,
0x72A00009,
0x00090205,
0x93407D29,
0xD2800002,
0x00090205,
0xF2A00002,
0x00090205,
0xF2C00002,
0x00090205,
0xF2E00002,
0x00090205,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030013,
0xF94013E9,
0xF9000009,
0x52800020,
0xF85F02B4,
0xF85F82B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xF90013E0,
0x94000000,
0x00030012,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xF94013E0,
0xAA0003E1,
0xAA1303E0,
0x94000000,
0x00030014,
0x52800020,
0xF85F02B4,
0xF85F82B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xF90013E0,
0x94000000,
0x00030012,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xF94013E0,
0xAA0003E1,
0xAA1303E0,
0x94000000,
0x00030014,
0x52800020,
0xF85F02B4,
0xF85F82B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0x94000000,
0x00030012,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xAA1F03E0,
0xF85F02B4,
0xF85F82B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xD3401C00,
0xF90013E0,
0x94000000,
0x00030012,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xB94023E9,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030015,
0x52800020,
0xF85F02B4,
0xF85F82B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xD3401C00,
0x00000000,
0x93401C00,
0x00000000,
0xF90013E0,
0x94000000,
0x00030012,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xB94023E9,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030016,
0x52800020,
0xF85F02B4,
0xF85F82B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xD3403C00,
0x00000000,
0x93403C00,
0x00000000,
0xF90013E0,
0x94000000,
0x00030012,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xB94023E9,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030016,
0x52800020,
0xF85F02B4,
0xF85F82B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xF90013E0,
0x94000000,
0x00030012,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xB94023E9,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030017,
0x52800020,
0xF85F02B4,
0xF85F82B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xF90013E0,
0x94000000,
0x00030012,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xB94023E9,
0x2A0903E1,
0xAA1303E0,
0x94000000,
0x00030016,
0x52800020,
0xF85F02B4,
0xF85F82B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0x1E22C000,
0xFD0013E0,
0x94000000,
0x00030012,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xFD4013E0,
0xAA1303E0,
0x94000000,
0x00030018,
0x52800020,
0xF85F02B4,
0xF85F82B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000,
0xFD0013E0,
0x94000000,
0x00030012,
0xD2800009,
0x00090205,
0xF2A00009,
0x00090205,
0xF2C00009,
0x00090205,
0xF2E00009,
0x00090205,
0xB9000120,
0xFD4013E0,
0xAA1303E0,
0x94000000,
0x00030018,
0x52800020,
0xF85F02B4,
0xF85F82B3,
0x910002BF,
0xA9405BF5,
0x910043FF,
0xA9407BFD,
0x910043FF,
0xD65F03C0,
0x00000000
};

//|.globalnames globnames
static const char *const globnames[] = {
  (const char *)0
};
//|.externnames extnames
static const char *const extnames[] = {
  "lua_gettop",
  "luaL_error",
  "check_typed_pointer",
  "check_typed_cfunction",
  "check_enum",
  "check_int32",
  "check_uint32",
  "check_uintptr",
  "check_uint64",
  "check_int64",
  "check_double",
  "check_complex_double",
  "check_complex_float",
  "unpack_varargs_float",
  "unpack_varargs_int",
  "unpack_varargs_stack_skip",
  "SetLastError",
  "FUNCTION",
  "GetLastError",
  "push_cdata",
  "lua_pushinteger",
  "lua_pushboolean",
  "push_int",
  "push_uint",
  "lua_pushnumber",
  (const char *)0
};

//|.define L_ARG, x19
//|.define TOP, x20
//|.define rbp, x21
//|.define EXTRA_REG, x22

#define ZERO_TO_FIFTEEN_OF_64(x) (0x000000000000FFFF & (int64_t)x)
#define SIXTEEN_TO_THIRTYONE_OF_64(x) ((0x00000000FFFF0000 & (int64_t)x) >> 16)
#define THIRTYTWO_TO_FORTYSEVEN_OF_64(x) ((0x0000FFFF00000000 & (int64_t)x) >> 32)
#define FORTYEIGHT_TO_SIXTYTHREE_OF_64(x) ((0xFFFF000000000000 & (int64_t)x) >> 48)

//|.macro mov64, reg, imm
//|  movz reg, #(ZERO_TO_FIFTEEN_OF_64(imm))
//|  movk reg, #(SIXTEEN_TO_THIRTYONE_OF_64(imm)), lsl #16
//|  movk reg, #(THIRTYTWO_TO_FORTYSEVEN_OF_64(imm)), lsl #32
//|  movk reg, #(FORTYEIGHT_TO_SIXTYTHREE_OF_64(imm)), lsl #48
//|.endmacro

//|.macro mov32, reg, imm
//|  movz reg, #(ZERO_TO_FIFTEEN_OF_64(imm))
//|  movk reg, #(SIXTEEN_TO_THIRTYONE_OF_64(imm)), lsl #16
//|.endmacro

//| // the 5 and 6 arg forms are only used on posix x64
//|.macro call_ririir, func, arg0, arg1, arg2, arg3, arg4, arg5
//| mov x5, arg5
//| mov x4, #arg4
//| mov x3, #arg3
//| mov x2, arg2
//| mov x1, #arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rrrrrr, func, arg0, arg1, arg2, arg3, arg4, arg5
//| mov x5, arg5
//| mov x4, arg4
//| mov x3, arg3
//| mov x2, arg2
//| mov x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_ririr, func, arg0, arg1, arg2, arg3, arg4
//| mov x4, arg4
//| mov x3, #arg3
//| mov x2, arg2
//| mov x1, #arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rrrrr, func, arg0, arg1, arg2, arg3, arg4
//| mov x4, arg4
//| mov x3, arg3
//| mov x2, arg2
//| mov x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|
//|.macro call_riwp, func, arg0, arg1, arg2, arg3
//| mov64 x3, arg3
//| mov w2, arg2
//| mov x1, #arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rrrp, func, arg0, arg1, arg2, arg3
//| mov64 x3, arg3
//| mov x2, arg2
//| mov x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rrrr, func, arg0, arg1, arg2, arg3
//| mov x3, arg3
//| mov x2, arg2
//| mov x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|
//|.macro call_rwp, func, arg0, arg1, arg2
//| mov64 x2, arg2
//| mov w1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rrp, func, arg0, arg1, arg2
//| mov64 x2, arg2
//| mov x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rrr, func, arg0, arg1, arg2
//| mov x2, arg2
//| mov x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|
//|.macro call_rp, func, arg0, arg1
//| mov64 x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_ri, func, arg0, arg1
//| mov x1, #arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rw, func, arg0, arg1
//| mov w1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|.macro call_rr, func, arg0, arg1
//| mov x1, arg1
//| mov x0, arg0
//| bl func
//|.endmacro
//|
//|.macro call_w, func, arg0
//| mov w0, arg0
//| bl func
//|.endmacro
//|.macro call_r, func, arg0
//| mov x0, arg0
//| bl func
//|.endmacro
//|

//|.macro call_debug
//| mov x15, x0
//| bl extern debug_statement 
//| mov x0, x15
//|.endmacro

//|.macro call_debug_1, one
//| mov x9, x0
//| mov x0, one
//| bl extern debug_statement_with_arg
//| mov x0, x9
//| call_debug
//|.endmacro

//|.macro epilog
//| ldr TOP, [rbp, #(-16)]
//| ldr L_ARG, [rbp, #(-8)]
//| mov sp, rbp
//| ldp rbp, EXTRA_REG, [sp]
//| add sp, sp, #16
//| ldp x29, x30, [sp]
//| add sp, sp, #16
//| ret
//|.endmacro

//|.macro get_errno // note trashes registers
//| bl extern GetLastError
//| mov64 x9, perr
//| str w0, [x9]
//|.endmacro

#define MESSAGE_1 "Too few arguments"
#define MESSAGE_2 "Too many arguments"

//|.macro too_few_arguments
//| mov64 x9, MESSAGE_1
//| call_rr extern luaL_error, L_ARG, x9
//|.endmacro

//|.macro too_many_arguments
//| mov64 x9, MESSAGE_2
//| call_rr extern luaL_error, L_ARG, x9
//|.endmacro

//|.macro lua_return_arg
//| mov x0, #1
//| epilog
//|.endmacro

//|.macro lua_return_void
//| get_errno
//| mov x0, xzr
//| epilog
//|.endmacro

//|.macro lua_return_double
//| str d0, [sp, #32]
//| get_errno
//| ldr d0, [sp, #32]
//| mov x0, L_ARG
//| bl extern lua_pushnumber
//| lua_return_arg
//|.endmacro

//|.macro lua_return_bool
//| ubfm x0, x0, #0, #7
//| str x0, [sp,#32]
//| get_errno
//| ldr w9, [sp,#32]
//| call_rw extern lua_pushboolean, L_ARG, w9
//| lua_return_arg
//|.endmacro

//|.macro lua_return_int
//| //mov [sp,#32], eax
//| str x0, [sp,#32]
//| get_errno
//| ldr w9, [sp,#32]
//| call_rw extern push_int, L_ARG, w9
//| lua_return_arg
//|.endmacro

//|.macro lua_return_uint
//| str x0, [sp,#32]
//| get_errno
//| ldr w9, [sp,#32]
//| call_rw extern push_uint, L_ARG, w9
//| lua_return_arg
//|.endmacro

//|.macro lua_return_long
//| str x0, [sp,#32]
//| get_errno
//| ldr x0, [sp,#32]
//| call_rr extern lua_pushinteger, L_ARG, x0
//| lua_return_arg
//|.endmacro

//|.macro lua_return_ulong
//| str x0, [sp,#32]
//| get_errno
//| ldr x0, [sp,#32]
//| call_rr extern lua_pushinteger, L_ARG, x0
//| lua_return_arg
//|.endmacro

//|.macro save_registers
//| // use rbp relative so we store values in the outer stack frame
//| movq qword [rbp-16], xmm0
//| movq qword [rbp-24], xmm1
//| movq qword [rbp-32], xmm2
//| movq qword [rbp-40], xmm3
//| movq qword [rbp-48], xmm4
//| movq qword [rbp-56], xmm5
//| movq qword [rbp-64], xmm6
//| movq qword [rbp-72], xmm7
//| mov [rbp-80], rdi
//| mov [rbp-88], rsi
//| mov [rbp-96], rdx
//| mov [rbp-104], rcx
//| mov [rbp-112], r8
//| mov [rbp-120], r9
//|.endmacro

#define JUMP_SIZE 20
#define MIN_BRANCH ((INT32_MIN) >> 6)
#define MAX_BRANCH ((INT32_MAX) >> 6)
#define BRANCH_OFF -4

static void compile_extern_jump(struct jit* jit, lua_State* L, cfunction func, uint8_t* code)
{
    /* The jump code is the function pointer followed by a stub to call the
     * function pointer. The stub exists so we can jump to functions with an
     * offset farther than +/-128MB.
     *
     * Note we have to manually set this up since there are commands buffered
     * in the jit state.
     */
    *((cfunction*) (&code[0])) = func;
    *((uint32_t*) (&code[8])) = 0x10FFFFC9U; // ADR X9, #-8
    *((uint32_t*) (&code[12])) = 0xF940012aU; // LDR x10, [x9]
    *((uint32_t*) (&code[16])) = 0xD61F0140U; // BR X10
    //printf("%s:%d addr = [%p] sizeof(cfunction) = [%zu] function=[%p]\n",
            //__FILE__, __LINE__, &(code[8]), sizeof(cfunction), (*((cfunction*)(&code[0]))));
}

void compile_globals(struct jit* jit, lua_State* L)
{
    struct jit* Dst = jit;
    int* perr = &jit->last_errno;
    dasm_setup(Dst, build_actionlist);

    /* Note: since the return code uses EBP to reset the stack pointer, we
     * don't have to track the amount of stack space used. It also means we
     * can handle stdcall and cdecl with the same code.
     */

    /* Note the various call_* functions want 32 bytes of 16 byte aligned
     * stack
     */

    compile(Dst, L, NULL, LUA_NOREF);
}

int arm64_return_size(lua_State* L, int usr, const struct ctype* ct)
{
    int ret = 0;
    const struct ctype* mt;

    if (ct->calling_convention != C_CALL) {
        size_t i;
        size_t argn = lua_rawlen(L, usr);
        for (i = 1; i <= argn; i++) {
            lua_rawgeti(L, usr, (int) i);
            mt = (const struct ctype*) lua_touserdata(L, -1);

            if (mt->pointers || mt->is_reference) {
                ret += sizeof(void*);
            } else {
                switch (mt->type) {
                case DOUBLE_TYPE:
                case COMPLEX_FLOAT_TYPE:
                case INT64_TYPE:
                    ret += 8;
                    break;
                case COMPLEX_DOUBLE_TYPE:
                    ret += 16;
                    break;
                case INTPTR_TYPE:
                    ret += sizeof(intptr_t);
                    break;
                case FUNCTION_PTR_TYPE:
                    ret += sizeof(cfunction);
                    break;
                case BOOL_TYPE:
                case FLOAT_TYPE:
                case INT8_TYPE:
                case INT16_TYPE:
                case INT32_TYPE:
                case ENUM_TYPE:
                    ret += 4;
                    break;
                default:
                    return luaL_error(L, "NYI - argument type");
                }
            }

            lua_pop(L, 1);
        }
    }

    return ret;
}

#define MAX_INT_REGISTERS(ct) 8 /* x0-x7 */
#define MAX_FLOAT_REGISTERS(ct) 8 /* q0-q7 */

struct reg_alloc {
    int floats;
    int ints;
    int off;
};

#define REGISTER_STACK_SPACE(ct) ((8*8) + (128*8)) /* 8, 64 bit registers x0-x7 and 8, 128 bit registers v0-v7 */

/* Fastcall:
 * Uses ecx, edx as first two int registers
 * Everything else on stack (include 64bit ints)
 * No overflow stack space
 * Pops the stack before returning
 * Returns int in eax, float in ST0
 * We use the same register allocation logic as posix x64 with 2 int regs and 0 float regs
 */

static void get_int(Dst_DECL, const struct ctype* ct, struct reg_alloc* reg, int is_int64)
{
    /* grab the register from the shadow space */
    if (reg->ints < MAX_INT_REGISTERS(ct)) {
		int x = -(80 + 8*reg->ints);
        //| ldr x9, [rbp , #x]
        dasm_put(Dst, 0, x);
        reg->ints++;
    }
    else if (is_int64) {
        //| ldr x9, [rbp , #(reg->off)] // x9 is a scratch register
        dasm_put(Dst, 3, (reg->off));
        reg->off += 8;
	}
    else {
        //| ldr w9, [rbp , #(reg->off)]
        dasm_put(Dst, 6, (reg->off));
        reg->off += 8;
    }
}

static void add_int(Dst_DECL, const struct ctype* ct, struct reg_alloc* reg, int is_int64)
{
    if (reg->ints < MAX_INT_REGISTERS(ct)) {
        //| str x0, [sp , #(32 + 8*reg->ints)]
        dasm_put(Dst, 9, (32 + 8*reg->ints));
        reg->ints++;
    }
    else {
        if (reg->off % 8 != 0) {
            reg->off += 8 - (reg->off % 8);
        }
		if (is_int64 == 1) {
			//| str x0, [sp , #(reg->off)]
			dasm_put(Dst, 12, (reg->off));
			reg->off += 8;
		} else {
			//| str w0, [sp , #(reg->off)]
			dasm_put(Dst, 15, (reg->off));
			reg->off += 8;
		}
    }
}

static void get_float(Dst_DECL, const struct ctype* ct, struct reg_alloc* reg, int is_double)
{
    int off;

    if (reg->floats < MAX_FLOAT_REGISTERS(ct)) {
        off = -16 - 8*reg->floats;
        reg->floats++;
    }
    else {
        off = reg->off;
        reg->off += is_double ? 8 : 4;
    }

    if (is_double) {
        //| ldr d0, [rbp, #off]
        dasm_put(Dst, 18, off);
    } else {
		//| ldr s16, [rbp, #off] // s16 is a scratch register
        //| fcvt d0, s16
        dasm_put(Dst, 21, off);
    }
}

static void add_float(Dst_DECL, const struct ctype* ct, struct reg_alloc* reg, int is_double)
{
    if (reg->floats < MAX_FLOAT_REGISTERS(ct)) {
        if (is_double) {
            //| str d0, [sp , #(32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats))]
            dasm_put(Dst, 25, (32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats)));
        } else {
            //| fcvt s0, d0
            //| str s0, [sp, #(32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats))]
            dasm_put(Dst, 28, (32 + 8*(MAX_INT_REGISTERS(ct) + reg->floats)));
        }
        reg->floats++;
    }
    else if (is_double) {
        //| str d0, [sp, #(reg->off)]
        dasm_put(Dst, 32, (reg->off));
        reg->off += 8;
    } else {
        //| fcvt s0, d0
        //| str s0, [sp, #(reg->off)]
        dasm_put(Dst, 35, (reg->off));
        reg->off += 8;
    }
}

#define add_pointer(jit, ct, reg) add_int(jit, ct, reg, 1)
#define get_pointer(jit, ct, reg) get_int(jit, ct, reg, 1)

cfunction compile_callback(lua_State* L, int fidx, int ct_usr, const struct ctype* ct)
{
    int i, nargs;
    cfunction* pf;
    struct ctype ct2 = *ct;
    const struct ctype* mt;
    struct reg_alloc reg;
    int num_upvals = 0;
    int top = lua_gettop(L);
    struct jit* Dst = get_jit(L);
    int ref;
    int hidden_arg_off = 0;

    return *pf;
}

void compile_function(lua_State* L, cfunction func, int ct_usr, const struct ctype* ct)
{
    size_t i, nargs;
    int num_upvals;
    int orig_top;
    const struct ctype* mbr_ct;
    struct jit* Dst = get_jit(L);
    struct reg_alloc reg;
    void* p;
    int top = lua_gettop(L);
    int* perr = &Dst->last_errno;

    ct_usr = lua_absindex(L, ct_usr);

    memset(&reg, 0, sizeof(reg));
    reg.off = 32 + REGISTER_STACK_SPACE(ct);

    dasm_setup(Dst, build_actionlist);

    orig_top = lua_gettop(L);
    p = push_cdata(L, ct_usr, ct);
    *(cfunction*) p = func;

    nargs = lua_rawlen(L, ct_usr);
	assert(nargs <= ((unsigned int)(0xFFE))); // <= 4094 s.t. 4095 can fit into imm12

    if (ct->calling_convention != C_CALL && ct->has_var_arg) {
        luaL_error(L, "vararg is only allowed with the c calling convention");
    }

    //printf("%s:%d\n", __FILE__, __LINE__);
    //| sub sp, sp, #48 // = -48
    //| stp x29, x30, [sp, #32] // 16-byte Folded Spill
    //| stp rbp, EXTRA_REG, [sp, #16] // 16-byte Folded Spill
	//| stp L_ARG, TOP, [sp]
    //| // stack is 0 (mod 16) (TOP, L_ARG, EXTRA_REG, rbp, x30, x29)
	//| add rbp, sp, #16
    //|
    //| // Get L from our arguments and allocate some stack for lua_gettop
    //| mov L_ARG, x0 // First argument to the lua function int f(lua_State * L);
    dasm_put(Dst, 39);

    //|
    //| call_r extern lua_gettop, L_ARG
    //| mov TOP, x0
    //| cmp x0, #(nargs)
    dasm_put(Dst, 46, (nargs));
    if (!ct->has_var_arg) {
        //| bge >2
        //| too_few_arguments
        //| 2:
        //| ble >1
        //| too_many_arguments
        dasm_put(Dst, 53, (ZERO_TO_FIFTEEN_OF_64(MESSAGE_1)), (SIXTEEN_TO_THIRTYONE_OF_64(MESSAGE_1)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(MESSAGE_1)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(MESSAGE_1)), (ZERO_TO_FIFTEEN_OF_64(MESSAGE_2)), (SIXTEEN_TO_THIRTYONE_OF_64(MESSAGE_2)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(MESSAGE_2)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(MESSAGE_2)));
    } else {
        //| bge >1
        //| too_few_arguments
        dasm_put(Dst, 83, (ZERO_TO_FIFTEEN_OF_64(MESSAGE_1)), (SIXTEEN_TO_THIRTYONE_OF_64(MESSAGE_1)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(MESSAGE_1)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(MESSAGE_1)));
    }

    //| 1:
    //| //call_debug_1 rbp
    //| //call_debug
    dasm_put(Dst, 98);

    /* no need to zero extend eax returned by lua_gettop to rax as x86-64
     * preguarentees that the upper 32 bits will be zero */
    //| sub sp, sp, TOP, lsl #4 // reserve 16 bytes per argument - this maintains the alignment mod 16
    //| sub sp, sp, #(32 + REGISTER_STACK_SPACE(ct)) // reserve an extra 32 to call local functions
    dasm_put(Dst, 100, (32 + REGISTER_STACK_SPACE(ct)));

    for (i = 1; i <= nargs; i++) {
        lua_rawgeti(L, ct_usr, (int) i);
        mbr_ct = (const struct ctype*) lua_touserdata(L, -1);

        if (mbr_ct->pointers || mbr_ct->is_reference) {
            lua_getuservalue(L, -1);
            num_upvals = lua_gettop(L) - orig_top;
			//printf("%s:%d lua_upvalueindex(num_upvals) = [%d] \n", __FILE__, __LINE__,  lua_upvalueindex(num_upvals));
            //| mov32 w9, lua_upvalueindex(num_upvals)
            //| sxtw x9, w9
            //| call_riwp extern check_typed_pointer, L_ARG, i, w9, mbr_ct
            dasm_put(Dst, 104, (ZERO_TO_FIFTEEN_OF_64(lua_upvalueindex(num_upvals))), (SIXTEEN_TO_THIRTYONE_OF_64(lua_upvalueindex(num_upvals))), (ZERO_TO_FIFTEEN_OF_64(mbr_ct)), (SIXTEEN_TO_THIRTYONE_OF_64(mbr_ct)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mbr_ct)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mbr_ct)), i);
            add_pointer(Dst, ct, &reg);
        } else {
            switch (mbr_ct->type) {
            case FUNCTION_PTR_TYPE:
                lua_getuservalue(L, -1);
                num_upvals = lua_gettop(L) - orig_top;
                //| mov32 w9, lua_upvalueindex(num_upvals)
                //| sxtw x9, w9
                //| call_riwp extern check_typed_cfunction, L_ARG, i, w9, mbr_ct
                dasm_put(Dst, 124, (ZERO_TO_FIFTEEN_OF_64(lua_upvalueindex(num_upvals))), (SIXTEEN_TO_THIRTYONE_OF_64(lua_upvalueindex(num_upvals))), (ZERO_TO_FIFTEEN_OF_64(mbr_ct)), (SIXTEEN_TO_THIRTYONE_OF_64(mbr_ct)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mbr_ct)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mbr_ct)), i);
                add_pointer(Dst, ct, &reg);
                break;

            case ENUM_TYPE:
                lua_getuservalue(L, -1);
                num_upvals = lua_gettop(L) - orig_top;
                //| mov32 w9, lua_upvalueindex(num_upvals)
                //| sxtw x9, w9
                //| call_riwp, extern check_enum, L_ARG, i, w9, mbr_ct
                dasm_put(Dst, 144, (ZERO_TO_FIFTEEN_OF_64(lua_upvalueindex(num_upvals))), (SIXTEEN_TO_THIRTYONE_OF_64(lua_upvalueindex(num_upvals))), (ZERO_TO_FIFTEEN_OF_64(mbr_ct)), (SIXTEEN_TO_THIRTYONE_OF_64(mbr_ct)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mbr_ct)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mbr_ct)), i);
                add_int(Dst, ct, &reg, 0);
                break;

            case INT8_TYPE:
                //| call_ri extern check_int32, L_ARG, i
                dasm_put(Dst, 164, i);
                if (mbr_ct->is_unsigned) {
                    //| ubfm x0, x0, #0, #7
                    dasm_put(Dst, 170);
                } else {
                    //| sbfm x0, x0, #0, #7
                    dasm_put(Dst, 172);
                    //| sxtb x0, x0
                }
                add_int(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

            case INT16_TYPE:
                //| call_ri extern check_int32, L_ARG, i
                dasm_put(Dst, 174, i);
                if (mbr_ct->is_unsigned) {
                    //| ubfm x0, x0, #0, #15
                    dasm_put(Dst, 180);
                } else {
                    //| sbfm x0, x0, #0, #15
                    dasm_put(Dst, 182);
                }
                add_int(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

            case BOOL_TYPE:
                //| call_ri extern check_int32, L_ARG, i
                //| cmp x0, #0
                //| beq >1
				//| mov b0, #1
				//| 1:
				//| ubfm x0, x0, #0, #7
				dasm_put(Dst, 184, i);
                add_int(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

            case INT32_TYPE:
                if (mbr_ct->is_unsigned) {
                    //| call_ri extern check_uint32, L_ARG, i
                    dasm_put(Dst, 196, i);
                } else {
                    //| call_ri extern check_int32, L_ARG, i
                    dasm_put(Dst, 202, i);
                }
                add_int(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

            case INTPTR_TYPE:
                //| call_ri extern check_uintptr, L_ARG, i
                dasm_put(Dst, 208, i);
                add_pointer(Dst, ct, &reg);
                lua_pop(L, 1);
                break;

            case INT64_TYPE:
                if (mbr_ct->is_unsigned) {
                    //| call_ri extern check_uint64, L_ARG, i
                    dasm_put(Dst, 214, i);
                } else {
                    //| call_ri extern check_int64, L_ARG, i
                    dasm_put(Dst, 220, i);
                }
                add_int(Dst, ct, &reg, 1);
                lua_pop(L, 1);
                break;

            case DOUBLE_TYPE:
                //| call_ri extern check_double, L_ARG, i
                dasm_put(Dst, 226, i);
                add_float(Dst, ct, &reg, 1);
                lua_pop(L, 1);
                break;

			/*
            case COMPLEX_DOUBLE_TYPE:
            */
                /* on 64 bit, returned complex doubles use xmm0, xmm1, on 32 bit
                 * there is a hidden first parameter that points to 16 bytes where
                 * the returned arg is stored (this is popped by the called
                 * function) */
            /*
                //| call_ri extern check_complex_double, L_ARG, i
                dasm_put(Dst, 232, i);
                add_float(Dst, ct, &reg, 1);
                //| fmov d0, d1
                dasm_put(Dst, 238);
                add_float(Dst, ct, &reg, 1);
                lua_pop(L, 1);
                break;
			*/

            case FLOAT_TYPE:
                //| call_ri extern check_double, L_ARG, i
                dasm_put(Dst, 240, i);
                add_float(Dst, ct, &reg, 0);
                lua_pop(L, 1);
                break;

			/*
            case COMPLEX_FLOAT_TYPE:
            */
                //| call_ri extern check_complex_float, L_ARG, i
                dasm_put(Dst, 246, i);
                /* complex floats are two floats packed into a double */
            /*
                add_float(Dst, ct, &reg, 1);
                lua_pop(L, 1);
                break;
			*/

            default:
                luaL_error(L, "NYI: call arg type");
            }
        }
    }

    if (ct->has_var_arg) {
        if (reg.floats < MAX_FLOAT_REGISTERS(ct)) {
            //| mov x9, sp
            //| add x9, x9, #(32 + 8*(MAX_INT_REGISTERS(ct) + reg.floats))
            //| call_ririr extern unpack_varargs_float, L_ARG, (nargs+1), TOP, (MAX_FLOAT_REGISTERS(ct) - reg.floats), x9
            dasm_put(Dst, 252, (32 + 8*(MAX_INT_REGISTERS(ct) + reg.floats)), (MAX_FLOAT_REGISTERS(ct) - reg.floats), (nargs+1));
        }

        if (reg.ints < MAX_INT_REGISTERS(ct)) {
            //| mov x9, sp
            //| add x9, x9, #(32 + 8*(reg.ints))
            //| call_ririr extern unpack_varargs_int, L_ARG, (nargs+1), TOP, (MAX_INT_REGISTERS(ct) - reg.ints), x9
            dasm_put(Dst, 265, (32 + 8*(reg.ints)), (MAX_INT_REGISTERS(ct) - reg.ints), (nargs+1));
        }

        //| mov x9, sp
        //| add x9, x9, #(reg.off)
        //| call_ririir extern unpack_varargs_stack_skip, L_ARG, (nargs+1), TOP, (MAX_INT_REGISTERS(ct) - reg.ints), (MAX_FLOAT_REGISTERS(ct) - reg.floats), x9
        dasm_put(Dst, 278, (reg.off), (MAX_FLOAT_REGISTERS(ct) - reg.floats), (MAX_INT_REGISTERS(ct) - reg.ints), (nargs+1));

        reg.floats = MAX_FLOAT_REGISTERS(ct);
        reg.ints = MAX_INT_REGISTERS(ct);
    }

    //| mov64 x9, perr
	//| mov x10, xzr
    //| ldr w10, [x9]
    //| call_w extern SetLastError, w10
    dasm_put(Dst, 293, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));

    /* remove the stack space to call local functions */
    //| add sp, sp, #(32)
    dasm_put(Dst, 307);

    switch (reg.floats) {
    case 8:
        //| ldr d7, [sp, #(8*(MAX_INT_REGISTERS(ct)+7))]
        dasm_put(Dst, 309, (8*(MAX_INT_REGISTERS(ct)+7)));
    case 7:
        //| ldr d6, [sp, #(8*(MAX_INT_REGISTERS(ct)+6))]
        dasm_put(Dst, 312, (8*(MAX_INT_REGISTERS(ct)+6)));
    case 6:
        //| ldr d5, [sp, #(8*(MAX_INT_REGISTERS(ct)+5))]
        dasm_put(Dst, 315, (8*(MAX_INT_REGISTERS(ct)+5)));
    case 5:
        //| ldr d4, [sp, #(8*(MAX_INT_REGISTERS(ct)+4))]
        dasm_put(Dst, 318, (8*(MAX_INT_REGISTERS(ct)+4)));
    case 4:
        //| ldr d3, [sp, #(8*(MAX_INT_REGISTERS(ct)+3))]
        dasm_put(Dst, 321, (8*(MAX_INT_REGISTERS(ct)+3)));
    case 3:
        //| ldr d2, [sp, #(8*(MAX_INT_REGISTERS(ct)+2))]
        dasm_put(Dst, 324, (8*(MAX_INT_REGISTERS(ct)+2)));
    case 2:
        //| ldr d1, [sp, #(8*(MAX_INT_REGISTERS(ct)+1))]
        dasm_put(Dst, 327, (8*(MAX_INT_REGISTERS(ct)+1)));
    case 1:
        //| ldr d0, [sp, #(8*(MAX_INT_REGISTERS(ct)))]
        dasm_put(Dst, 330, (8*(MAX_INT_REGISTERS(ct))));
    case 0:
        break;
    }

    switch (reg.ints) {
    case 8:
        //| ldr x8, [sp, #(8*7)]
        dasm_put(Dst, 333);
    case 7:
        //| ldr x7, [sp, #(8*6)]
        dasm_put(Dst, 335);
    case 6:
        //| ldr x6, [sp, #(8*5)]
        dasm_put(Dst, 337);
    case 5:
        //| ldr x5, [sp, #(8*4)]
        dasm_put(Dst, 339);
    case 4:
        //| ldr x4, [sp, #(8*3)]
        dasm_put(Dst, 341);
    case 3:
        //| ldr x3, [sp, #(8*2)]
        dasm_put(Dst, 343);
    case 2:
        //| ldr x2, [sp, #(8*1)]
        dasm_put(Dst, 345);
    case 1:
        //| ldr x0, [sp]
        dasm_put(Dst, 347);
    case 0:
        break;
    }

    //| add sp, sp, #(REGISTER_STACK_SPACE(ct))
    dasm_put(Dst, 349, (REGISTER_STACK_SPACE(ct)));

    //| bl extern FUNCTION
	//|
    //| add sp, sp, TOP, lsl #4 // Free up the stack space reserved for FUNCTION call
    //| sub sp, sp, #48 // 32 to be able to call local functions, 16 so we can store some local variables
    dasm_put(Dst, 352);

    lua_rawgeti(L, ct_usr, 0); /* i = 0 is the return type */
    mbr_ct = (const struct ctype*) lua_touserdata(L, -1);

    if (mbr_ct->pointers || mbr_ct->is_reference || mbr_ct->type == INTPTR_TYPE) {
        lua_getuservalue(L, -1);
        num_upvals = lua_gettop(L) - orig_top;
        //| str x0, [sp, #32] // save the pointer
        //| get_errno
        //| mov32 w9, lua_upvalueindex(num_upvals)
        //| sxtw x9, w9
        //| call_rwp extern push_cdata, L_ARG, w9, mbr_ct
        //| ldr x9, [sp, #32]
        //| str x9, [x0] // *(void**) cdata = val
        //| lua_return_arg
        dasm_put(Dst, 357, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)), (ZERO_TO_FIFTEEN_OF_64(lua_upvalueindex(num_upvals))), (SIXTEEN_TO_THIRTYONE_OF_64(lua_upvalueindex(num_upvals))), (ZERO_TO_FIFTEEN_OF_64(mbr_ct)), (SIXTEEN_TO_THIRTYONE_OF_64(mbr_ct)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mbr_ct)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mbr_ct)));

    } else {
        switch (mbr_ct->type) {
        case FUNCTION_PTR_TYPE:
            lua_getuservalue(L, -1);
            num_upvals = lua_gettop(L) - orig_top;
			//| str x0, [sp, #32] // save the function pointer
            //| get_errno
            //| mov32 w9, lua_upvalueindex(num_upvals)
            //| sxtw x9, w9
			//| call_rwp extern push_cdata, L_ARG, w9, mbr_ct
			//| ldr x9, [sp, #32]
			//| str x9, [x0] // *(void**) cdata = val
            //| lua_return_arg
            dasm_put(Dst, 398, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)), (ZERO_TO_FIFTEEN_OF_64(lua_upvalueindex(num_upvals))), (SIXTEEN_TO_THIRTYONE_OF_64(lua_upvalueindex(num_upvals))), (ZERO_TO_FIFTEEN_OF_64(mbr_ct)), (SIXTEEN_TO_THIRTYONE_OF_64(mbr_ct)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(mbr_ct)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(mbr_ct)));
            break;

        case INT64_TYPE:
            lua_pop(L, 1);
            if (mbr_ct->is_unsigned) {
                //| lua_return_ulong
                dasm_put(Dst, 439, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            } else {
                //| lua_return_long
                dasm_put(Dst, 466, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            }
            break;

		/*
        case COMPLEX_FLOAT_TYPE:
            lua_getuservalue(L, -1);
            num_upvals = lua_gettop(L) - orig_top;
            //| // complex floats are returned as two floats packed into xmm0
            //| // movq qword [rsp+32], xmm0
            //|
            //| // get_errno
            //| // mov32 w9, lua_upvalueindex(num_upvals)
            //| // sxtw x9, w9
			//| // call_rwp extern push_cdata, L_ARG, w9, mbr_ct
            //|
            //| // ((complex_float*) cdata) = val
            //| // mov rcx, [rsp+32]
            //| // mov [rax], rcx
            //|
            //| // lua_return_arg
            break;
		*/

		/*
        case COMPLEX_DOUBLE_TYPE:
            lua_getuservalue(L, -1);
            num_upvals = lua_gettop(L) - orig_top;
            //| // complex doubles are returned as xmm0 and xmm1
            //| // movq qword [rsp+40], xmm1
            //| // movq qword [rsp+32], xmm0
            //|
            //| // get_errno
            //| // mov32 w9, lua_upvalueindex(num_upvals)
            //| // sxtw x9, w9
			//| // call_rwp extern push_cdata, L_ARG, w9, mbr_ct
            //|
            //| // ((complex_double*) cdata)->real = val0
            //| // ((complex_double*) cdata)->imag = val1
            //| // mov rcx, [rsp+40]
            //| // mov [rax+8], rcx
            //| // mov rcx, [rsp+32]
            //| // mov [rax], rcx
            //|
            //|
            //| // lua_return_arg
            break;
		*/

        case VOID_TYPE:
            lua_pop(L, 1);
            //| lua_return_void
            dasm_put(Dst, 493, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            break;

        case BOOL_TYPE:
            lua_pop(L, 1);
            //| lua_return_bool
            dasm_put(Dst, 514, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            break;

        case INT8_TYPE:
            lua_pop(L, 1);
            if (mbr_ct->is_unsigned) {
                //| // movzx eax, al
				//| ubfm x0, x0, #0, #7
				dasm_put(Dst, 542);
            } else {
                //| //movsx eax, al
				//| sbfm x0, x0, #0, #7
				dasm_put(Dst, 544);
            }
            //| lua_return_int
            dasm_put(Dst, 546, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            break;

        case INT16_TYPE:
            lua_pop(L, 1);
            if (mbr_ct->is_unsigned) {
                //| //movzx eax, ax
				//| ubfm x0, x0, #0, #15
				dasm_put(Dst, 573);
            } else {
                //| //movsx eax, ax
				//| sbfm x0, x0, #0, #15
				dasm_put(Dst, 575);
            }
            //| lua_return_int
            dasm_put(Dst, 577, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            break;

        case INT32_TYPE:
        case ENUM_TYPE:
            lua_pop(L, 1);
            if (mbr_ct->is_unsigned) {
                //| lua_return_uint
                dasm_put(Dst, 604, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            } else {
                //| lua_return_int
                dasm_put(Dst, 631, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            }
            break;

        case FLOAT_TYPE:
            lua_pop(L, 1);
            //| fcvt d0, s0
            //| lua_return_double
            dasm_put(Dst, 658, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            break;

        case DOUBLE_TYPE:
            lua_pop(L, 1);
            //| lua_return_double
            dasm_put(Dst, 685, (ZERO_TO_FIFTEEN_OF_64(perr)), (SIXTEEN_TO_THIRTYONE_OF_64(perr)), (THIRTYTWO_TO_FORTYSEVEN_OF_64(perr)), (FORTYEIGHT_TO_SIXTYTHREE_OF_64(perr)));
            break;

        default:
            luaL_error(L, "NYI: call return type");
        }
    }

    {
        cfunction f = compile(Dst, L, func, LUA_NOREF);
        /* add a callback as an upval so that the jitted code gets cleaned up when
         * the function gets gc'd */
        push_callback(L, f, func);
        num_upvals = lua_gettop(L) - orig_top;
        lua_pushcclosure(L, (lua_CFunction) f, num_upvals);
    }
}

