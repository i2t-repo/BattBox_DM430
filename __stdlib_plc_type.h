/*------------------------------------------------------------------------------
Elementary type definitions
-------------------------------------------------------------------------------
Copyright (c) 2019 Danfoss

Warning: This header file is subject to change.
Do not use anything defined here directly in manually written C code.

@Author  mponomarenko
@Version 10.0 2017.08.30 pliapota  plc2c-611 Header update
@Version 11.0 2018.09.01 pliapota  plc2c-587 string structure update
-------------------------------------------------------------------------------*/

#ifndef _FILE___STDLIB_PLC_TYPE_H
#define _FILE___STDLIB_PLC_TYPE_H

#include <stdint.h>
#include <limits.h>
#include <wchar.h>
#include "__stdlib_plc_type_string.h"

#if CHAR_BIT == 8
    typedef int8_t int8_st;
    typedef uint8_t uint8_st;
#elif CHAR_BIT == 16
    typedef int16_t int8_st;
    typedef uint16_t uint8_st;
#else
    #error "Unsupported CHAR_BIT value!"
#endif

typedef uint8_st PLC_BOOL;
typedef int8_st PLC_SINT;
typedef int16_t PLC_INT;
typedef int32_t PLC_DINT;
typedef int64_t PLC_LINT;
typedef uint8_st PLC_USINT;
typedef uint16_t PLC_UINT;
typedef uint32_t PLC_UDINT;
typedef uint64_t PLC_ULINT;
typedef float PLC_REAL;
typedef double PLC_LREAL;

typedef PLC_USINT PLC_CHAR;
typedef PLC_UINT PLC_WCHAR;

typedef PLC_LREAL PLC_TIME;
typedef PLC_LREAL PLC_TOD;
typedef PLC_LREAL PLC_DATE;
typedef PLC_LREAL PLC_DT;

typedef PLC_LINT PLC_LTIME;
typedef PLC_LINT PLC_LTOD;
typedef PLC_LINT PLC_LDATE;
typedef PLC_LINT PLC_LDT;

typedef struct {
    PLC_UINT max_len;
    PLC_UINT cur_len_val;
    PLC_UINT* cur_len_ref;
    PLC_WCHAR* value;
} PLC_WSTRING_REF;

typedef struct {
    PLC_DINT _type;
} PLC_OBJECT;

typedef PLC_OBJECT* PLC_INTERFACE;

typedef void(*PLC_FUN_REF)();

typedef struct {
    PLC_DINT method_id;
    PLC_FUN_REF method_ref;
} PLC_METHOD_INFO;

#endif /* _FILE___STDLIB_PLC_TYPE_H */
