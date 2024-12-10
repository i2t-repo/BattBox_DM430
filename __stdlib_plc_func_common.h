/*------------------------------------------------------------------------------
Constants and types used by another files
-------------------------------------------------------------------------------
Copyright (c) 2019 Danfoss

Warning: This header file is subject to change.
Do not use anything defined here directly in manually written C code.

@Author  pliapota
@Version 11.0 2018.09.01 pliapota  plc2c-587 Added NULL constants of string references
@Version 11.0 2018.09.01 pliapota  plc2c-587 Added structure declarations of flexible types
@Version 11.0 2018.09.07 pliapota  plc2c-631 Added time constants
-------------------------------------------------------------------------------*/

#ifndef _FILE___STDLIB_PLC_FUNC_COMMON_H
#define _FILE___STDLIB_PLC_FUNC_COMMON_H

#include "__stdlib_plc_type.h"

typedef PLC_BOOL BOOL;
typedef PLC_SINT SINT;
typedef PLC_INT INT;
typedef PLC_DINT DINT;
typedef PLC_LINT LINT;
typedef PLC_USINT USINT;
typedef PLC_UINT UINT;
typedef PLC_UDINT UDINT;
typedef PLC_ULINT ULINT;
typedef PLC_REAL REAL;
typedef PLC_LREAL LREAL;

typedef PLC_CHAR CHAR;
typedef PLC_WCHAR WCHAR;

typedef PLC_TIME TIME;
typedef PLC_TOD TOD;
typedef PLC_DATE DATE;
typedef PLC_DT DT;

typedef PLC_LTIME LTIME;
typedef PLC_LTOD LTOD;
typedef PLC_LDATE LDATE;
typedef PLC_LDT LDT;

typedef const PLC_STRING_REF STRING;
typedef const PLC_STRING_REF STRING_OUT_REF;
typedef const PLC_WSTRING_REF WSTRING;
typedef const PLC_WSTRING_REF WSTRING_OUT_REF;

typedef struct {
    UINT cur_len;
    CHAR value[1];
} PLC_ANY_STRING;

typedef struct {
    UINT cur_len;
    WCHAR value[1];
} PLC_ANY_WSTRING;

typedef struct {
    DINT lower_bound[1];
    DINT upper_bound[1];
    void* value;
} PLC_ANY_FLEX_ARR_1;

typedef struct {
    DINT lower_bound[2];
    DINT upper_bound[2];
    void* value;
} PLC_ANY_FLEX_ARR_2;

typedef struct {
    DINT lower_bound[3];
    DINT upper_bound[3];
    void* value;
} PLC_ANY_FLEX_ARR_3;

typedef struct {
    DINT lower_bound[4];
    DINT upper_bound[4];
    void* value;
} PLC_ANY_FLEX_ARR_4;

typedef struct {
    DINT lower_bound[5];
    DINT upper_bound[5];
    void* value;
} PLC_ANY_FLEX_ARR_5;

typedef void* ANY_REF;

typedef union { UDINT u; REAL f; } plc_uf_union_REAL;
typedef union { ULINT u; LREAL f; } plc_uf_union_LREAL;


// Error
typedef UINT PLC_RUNTIME_ERROR;

extern PLC_RUNTIME_ERROR __RUNTIME_ERROR_FLAGS;


// External
extern int LoopDeadlineTimePassed(void);

extern UDINT GetTimeSinceStartupInMilliSeconds(void);


// BOOL constants
#define false ((BOOL)0)
#define true ((BOOL)1)


// INT constants
#define PLC_SINT_MIN  (-127 - 1)
#define PLC_SINT_MAX  127

#define PLC_INT_MIN   (-32767 - 1)
#define PLC_INT_MAX   32767

#define PLC_DINT_MIN  (-2147483647l - 1)
#define PLC_DINT_MAX  2147483647l

#define PLC_LINT_MIN  (-9223372036854775807ll - 1)
#define PLC_LINT_MAX  9223372036854775807ll

#define PLC_USINT_MIN 0u
#define PLC_USINT_MAX 255u

#define PLC_UINT_MIN  0u
#define PLC_UINT_MAX  65535u

#define PLC_UDINT_MIN 0ul
#define PLC_UDINT_MAX 4294967295ul

#define PLC_ULINT_MIN 0ull
#define PLC_ULINT_MAX 18446744073709551615ull


// TIME constants
#define plc_DATE_year_min 1
#define plc_DATE_year_max 9999

#define plc_LDATE_year_min 1970
#define plc_LDATE_year_max 2261

#define plc_month_min 1
#define plc_month_max 12

#define plc_day_min 1
#define plc_day_max 31

#define plc_hour_min 0
#define plc_hour_max 23

#define plc_minute_min 0
#define plc_minute_max 59

#define plc_second_min 0
#define plc_second_max 59

#define plc_millisecond_min 0
#define plc_millisecond_max 999

#define plc_time_days_max 9999
#define plc_time_sign_min -1
#define plc_time_sign_max 1


// POINTER constants
#ifndef NULL
    #define NULL ((ANY_REF)0)
#endif

extern STRING PLC_STRING_NULL;
extern WSTRING PLC_WSTRING_NULL;


// Error bit constants
#define plc_error_bit__division_by_zero               0  /* DIV, MOD */
#define plc_error_bit__arithmetic_overflow_underflow  1  /* NOT SUPPORTED IN R 6.0 */
#define plc_error_bit__invalid_subscript              2  /* array index ARR[INDEX] */
#define plc_error_bit__out_of_type_range              3  /* ANY_INT subrange INT (1..2) */
#define plc_error_bit__loop_deadline_passed           4  /* REPEAT and WHILE loop statements in ST code */
#define plc_error_bit__invalid_argument               5  /* MUX */
#define plc_error_bit__null_pointer                   6  /* NULL_POINTER */

#endif /* _FILE___STDLIB_PLC_FUNC_COMMON_H */
