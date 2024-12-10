/*------------------------------------------------------------------------------
Constants and types used by another files
-------------------------------------------------------------------------------
Copyright (c) 2019 Danfoss

@Author  pliapota
@Version 11.0 2018.09.01 pliapota  plc2c-587 Added NULL constants of string references
-------------------------------------------------------------------------------*/

#include "__stdlib_plc_func_common.h"

// Errors
PLC_RUNTIME_ERROR __RUNTIME_ERROR_FLAGS;


// POINTER constants
STRING PLC_STRING_NULL = { 0, 0, NULL, NULL };

WSTRING PLC_WSTRING_NULL = { 0, 0, NULL, NULL };
