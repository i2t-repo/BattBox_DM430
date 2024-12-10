#ifndef GUIDE_stg_h
#define GUIDE_stg_h

#ifndef GUIDE_BOOL
  #define GUIDE_BOOL
#endif
//Types:
#include <stdint.h>
#include <limits.h>
typedef float F32;
typedef double F64;

typedef int64_t S64;
typedef uint64_t U64;

#include "math.h"
static inline int32_t _NormU32ITanS32(uint32_t angle)
{
  if(9000 == angle){
    return 2147483647;
  } else {
    int inv = 1;
    if(angle > 9000){
      inv = -1;
      angle = 18000 - angle;
    }
    return inv * (int32_t)(0.5 + 10000.0 * tan(angle * 3.141592653/18000.0));
  }
}
static inline int32_t _U32ITanS32(uint32_t angle)
{
  return _NormU32ITanS32(angle % 18000);
}
static inline int32_t _S32ITanS32(int32_t angle)
{
  if(angle < 0){
    angle = 18000 + angle % 18000;
  } else {
    angle = angle % 18000;
  }
  return _NormU32ITanS32(angle);
}


//NV helpers:
#include "_nvallocation.h"
extern U16 _NVINT[];
extern U16 _NVPND[];
static inline int _NV_GetPending(U16 Index)
{
  return _NVPND[(Index) / 16] &  (1 << ((Index) & (U16)0xF));
}
static inline void _NV_SetPending(U16 Index)
{
  _NVPND[(Index) / 16] |= (1 << ((Index) & (U16)0xF));
}
static inline int _NV_InRange(U16 Index)
{
  return Index < _NVSize;
}
static inline void NVWriteU16(U16 Index, U16 Value)
{
  if  (_NV_InRange(Index) && !_NV_GetPending(Index) && _NVINT[Index] != Value)
  {
    _NVINT[Index] = Value;
    _NV_SetPending(Index);
  }
}
static inline void NVReadU16(U16 Index, U16 * Value)
{
   *Value = _NVINT[Index];
}
//
static inline void NVWriteBOOL(U16 Index, BOOL Value)
{
  if(Value)
  {
    NVWriteU16(Index, 1);
  }
  else
  {
    NVWriteU16(Index, 0);
  }
}
static inline void NVReadBOOL(U16 Index, U8 * Value)
{
  if(_NVINT[Index])
  {
    *Value = 1;
  }
  else
  {
    *Value = 0;
  }
}
//
static inline void NVWriteU8(U16 Index, U8 Value)
{
#if CHAR_BIT == 8
  NVWriteU16(Index, Value);
#else
  NVWriteU16(Index, Value & 0xFF);
#endif
}
static inline void NVReadU8(U16 Index, U8 * Value)
{
#if CHAR_BIT == 8
  *Value = _NVINT[Index];
#else
  *Value = _NVINT[Index] & 0xFF;
#endif
}
//
static inline void NVWriteS8(U16 Index, S8 Value)
{
#if CHAR_BIT == 8
  NVWriteU16(Index, ((U8)Value) & 0xFF);
#else
  if(Value & 0x0080)
  {
	NVWriteU16(Index, ((U16)Value) | 0xFF00);
  }
  else
  {
	NVWriteU16(Index, ((U16)Value) & 0x00FF);
  }
#endif
}
static inline void NVReadS8(U16 Index, S8 * Value)
{
#if CHAR_BIT == 8
  *Value = _NVINT[Index];
#else
  if(_NVINT[Index] & 0x0080)
  {
	*Value = _NVINT[Index] | 0xFF00;
  }
  else
  {
	*Value = _NVINT[Index] & 0x00FF;
  }
#endif
}
//
static inline void NVWriteS16(U16 Index, S16 Value)
{
  NVWriteU16(Index, (U16)Value);
}
static inline void NVReadS16(U16 Index, S16 * Value)
{
   NVReadU16(Index, (U16*)Value);
}
//
static inline void NVWriteU32(U16 Index, U32 Value)
{
  NVWriteU16(Index, Value);
  NVWriteU16(Index+1, Value >> 16);
}
static inline void NVReadU32(U16 Index, U32 * Value)
{
  U16 * buf = (U16*)Value;
  NVReadU16(Index, &buf[0]);
  NVReadU16(Index + 1, &buf[1]);
}
//
static inline void NVWriteS32(U16 Index, S32 Value)
{
  NVWriteU32(Index, (U32)Value);
}
static inline void NVReadS32(U16 Index, S32 * Value)
{
  NVReadU32(Index, (U32*)Value);
}
#ifdef _NVSize
static inline U32 NVOUTUReadU32(U16 Index)
{
  return (_NVOUTU.u16[Index] & 0xFFFF) | (((U32)_NVOUTU.u16[Index+1] << 16) & 0xFFFF0000);
}
static inline S32 NVOUTUReadS32(U16 Index)
{
  return (S32)NVOUTUReadU32(Index);
}
static inline void NVOUTUWriteU32(U16 Index, U32 Value)
{
  _NVOUTU.u16[Index] = Value & 0xFFFF;
  _NVOUTU.u16[Index+1] = (Value>>16) & 0xFFFF;
}
static inline void NVOUTUWriteS32(U16 Index, S32 Value)
{
  NVOUTUWriteU32(Index, (U32)Value);
}
#endif
#endif
