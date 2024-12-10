/** @defgroup PAL PAL
 *  This is a Processor Abstraction Layer (PAL) File
 *  @{
 */

/*!
   @file   datatypes.h

   <hr>
   <h2> File Creation </h2>
   @author Byrnes

   @date    Jan 18, 2010

   @caliberrm <a href="alm://caliberrm!amsapp21.dmz.int_20000_250/38437;ns=requirement"> "HOW-SW38437" "Processor Abstraction Layer" </a>

   @brief   This header file contains basic datatype definitions

   <hr>
   <h2> Current Revision </h2>  <!-- This section will be filled by SVN at committing -->
   $Revision:$
   $Author:$
   $Date:$
   $HeadURL:$


   <hr>
   <h2> History </h2>
   @verbatim
   Vers:  Date:         Name:             Comment:
   -----  ----------    -------           ------------------------------------------------
   00.00  18Jan10       Byrnes            Initial start
   01.21  16Apr13       Bendixen          Added typedef PORT SDPORTTYPE;
          24Jun14       GAR               added file header in desired format, corrected file name,
                                          ... added requirement, removed lint warning suppression 537 at line 38
          01Jul14       Krebs             Added MIN/MAX defines for integer data types
          15Jul14       Wolf              Code review #676
          30Aug18       jgieseke          Added types for Display and Applog support
   -----  ----------    -------           ------------------------------------------------
   @endverbatim

   &copy; Danfoss Power Solutions , 2018
 */

#ifndef D_DATATYPES_H
#define D_DATATYPES_H

#include <limits.h>
#include <stdint.h>
#include <stddef.h>
#include <math.h>

typedef enum
{
   E_Ok = 0,
   // These first few values match E_SYS_ERRORS
   //lint -save -e849 -e960  This initialize to zero is done purpose for compatibility
   E_ERR_NO_ERROR=0,
   //lint -restore
   //lint -save -e960  The initialize to zero is done purpose for compatibility
   E_ERR_PIN_NOT_DEFINED,
   E_ERR_PIN_IS_TAKEN,
   E_ERR_NAME_IS_TAKEN,
   E_ERR_FUNCTION_NOT_DEFINED,
   E_ERR_NO_HANDLE,
   /// A passed parameter is invalid (e.g. out of range)
   E_ERR_PARAMETER,
   E_ERR_MODE,
   E_ERR_INIT,
   E_ERR_VALUE_IS_INVALID,
   E_ERR_HARDWARE,
   E_ERR_FUNCTION_NOT_SUPPORTED,
   E_ERR_REAL_INPUT_CANNOT_BE_WRITE,
   E_ERR_NVMEM_INVALID,
   /// A passed device reference (eg handle, or instance index) is invalid, out of range, etc.
   E_ERR_HANDLE_IS_INVALID,
	// more...
	E_Bad
    //lint -restore
}E_RetVal_t;

#if CHAR_BIT > 8
typedef int16_t S8;
typedef uint16_t U8;
#else
typedef int8_t S8;
typedef uint8_t U8;
#endif

typedef char TL;
typedef const     int16_t    TLW;
typedef char CHAR;


typedef uint32_t     SDCOLORTYPE;
typedef SDCOLORTYPE COLOR;
#ifndef BOOL
typedef U8 BOOL;
#endif

typedef int16_t S16;
typedef uint16_t U16;

typedef int32_t S32;
typedef uint32_t U32;

typedef int64_t S64;
typedef uint64_t U64;

typedef float_t FLOAT;
typedef double_t DOUBLE;


#if CHAR_BIT > 8
#define D_S8_MAX  32767

#define D_U8_MAX  65536U
#else
#define D_S8_MAX  127

#define D_U8_MAX  255U
#endif

#define D_S8_MIN (-D_S8_MAX -1)

#define D_U8_MIN  0U

#define D_S16_MAX  32767
#define D_S16_MIN (-D_S16_MAX -1)

#define D_U16_MAX  65535U
#define D_U16_MIN  0U

#define D_S32_MAX   2147483647L
#define D_S32_MIN  (-D_S32_MAX -1L)

#define D_U32_MAX  4294967295UL
#define D_U32_MIN  0UL


#ifdef FALSE
#undef FALSE /*lint !e960 Violates MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged: 'FALSE' */
#endif
#define FALSE ((BOOL)0U)

#ifdef TRUE
#undef TRUE /*lint !e960 Violates MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged: 'TRUE' */
#endif
#define TRUE  /*lint -save -e506 -e960*/ ((BOOL)(!FALSE)) \
              /*lint -restore */

typedef const TL   SDPORTTYPE;
typedef   SDPORTTYPE* PORT;
typedef unsigned char LANG;
/* GUIDE TimeBase */
typedef   U8 T;

typedef unsigned  char     BIT;
typedef unsigned  char     UB;
typedef signed    char     SB;
typedef uint16_t    UW;
typedef int16_t    SW;
typedef unsigned  long     UL;
typedef signed    long     SL;

#define STATUS_FAIL (0U)
#define STATUS_SUCCESS /*lint -save -e506 -e960*/ (!FALSE) \
                       /*lint -restore */

#ifndef NULL
#define NULL 0U
#endif

#ifndef D_FORCE_PTR_CAST
#define D_FORCE_PTR_CAST(type, object) ((type)((void *)object))
#endif

#ifndef D_FORCE_PTR_CAST_W_SPECIFIER
#define D_FORCE_PTR_CAST_W_SPECIFIER(specifier, type, object) ((specifier type)((specifier void *)object))
#endif

typedef struct
{
  U32 AddressStart;
  U32 AddressEnd;
}ACCESS_BLOCK_T;


#define D_BIT00	0x00000001UL
#define D_BIT01	0x00000002UL
#define D_BIT02	0x00000004UL
#define D_BIT03	0x00000008UL

#define D_BIT04	0x00000010UL
#define D_BIT05	0x00000020UL
#define D_BIT06	0x00000040UL
#define D_BIT07	0x00000080UL

#define D_BIT08	0x00000100UL
#define D_BIT09	0x00000200UL
#define D_BIT10	0x00000400UL
#define D_BIT11	0x00000800UL

#define D_BIT12	0x00001000UL
#define D_BIT13	0x00002000UL
#define D_BIT14	0x00004000UL
#define D_BIT15	0x00008000UL

#define D_BIT16	0x00010000UL
#define D_BIT17	0x00020000UL
#define D_BIT18	0x00040000UL
#define D_BIT19	0x00080000UL

#define D_BIT20	0x00100000UL
#define D_BIT21	0x00200000UL
#define D_BIT22	0x00400000UL
#define D_BIT23	0x00800000UL

#define D_BIT24	0x01000000UL
#define D_BIT25	0x02000000UL
#define D_BIT26	0x04000000UL
#define D_BIT27	0x08000000UL

#define D_BIT28	0x10000000UL
#define D_BIT29	0x20000000UL
#define D_BIT30	0x40000000UL
#define D_BIT31	0x80000000UL

#endif      /* #ifndef D_DATATYPES_H */


