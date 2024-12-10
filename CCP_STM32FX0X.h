/*!
   @file   CCP_STM32FX0X.h

   <hr>
   <h2> File Creation </h2>
   @author jgieseke

   @date   Jan 22, 2013 - 10:38:43 AM

   @caliberrm <a href="alm://caliberrm!amsapp21.dmz.int_20000_250/38420;ns=requirement">PLUS+1 Interface</a>

   @brief  Basic GUIDE datatypes for CCP that works with ST based HWD files and GNU compiler


   <hr>
   <h2> Current Revision </h2>  <!-- This section will be filled by SVN at committing -->
   $Revision:$
   $Author:$
   $Date:$
   $HeadURL:$


   <hr>
   <h2> History </h2>
   @verbatim
   Vers:  Date:        Name:     Comment:
   -----  ----------   -------   ------------------------------------------------
   00.00  22Jan13   	 jmichael  Initial start
   00.00  19Jun14      JOM			 Codereview #670
          06Nov18      JAG         added support for new compiler V541 in combination with STM32F7
   -----  ----------   -------   ------------------------------------------------
   @endverbatim

   Copyright &copy; 2014 Danfoss Power Solutions. All rights reserved.
 */

#ifndef CCP_STM32FX0X_H
#define CCP_STM32FX0X_H

#include <stdint.h>
#include <math.h>

#ifdef CCP_STM32FX0X441
#if CHAR_BIT > 8
typedef int16_t S8;
typedef uint16_t U8;
#else
typedef int8_t S8;
typedef uint8_t U8;
#endif


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

#ifdef FALSE
#undef FALSE
#endif
#define FALSE ((BOOL)0U)

#ifdef TRUE
#undef TRUE
#endif
/* Lint 506 complains: Constant value Boolean, when TRUE is used in an arithmetic expression */
/* Lint 960 complains: (Rule 19.6) Use of '#undef' prohibited */
#define TRUE  /*lint -save -e506 -e960*/ ((BOOL)(!FALSE)) \
              /*lint -restore */

#endif

#ifdef CCP_STM32FX0X462 
#if CHAR_BIT > 8
typedef int16_t S8;
typedef uint16_t U8;
#else
typedef int8_t S8;
typedef uint8_t U8;
#endif


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

#ifdef FALSE
#undef FALSE
#endif
#define FALSE ((BOOL)0U)

#ifdef TRUE
#undef TRUE
#endif
/* Lint 506 complains: Constant value Boolean, when TRUE is used in an arithmetic expression */
/* Lint 960 complains: (Rule 19.6) Use of '#undef' prohibited */
#define TRUE  /*lint -save -e506 -e960*/ ((BOOL)(!FALSE)) \
              /*lint -restore */

#endif

#if defined (CCP_STM32FX0X474) || defined (CCP_STM32F7XX541)
#if CHAR_BIT > 8
typedef int16_t S8;
typedef uint16_t U8;
#else
typedef int8_t S8;
typedef uint8_t U8;
#endif


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

#ifdef FALSE
#undef FALSE
#endif
#define FALSE ((BOOL)0U)

#ifdef TRUE
#undef TRUE
#endif
/* Lint 506 complains: Constant value Boolean, when TRUE is used in an arithmetic expression */
/* Lint 960 complains: (Rule 19.6) Use of '#undef' prohibited */
#define TRUE  /*lint -save -e506 -e960*/ ((BOOL)(!FALSE)) \
              /*lint -restore */

#endif
#endif /* CCP_STM32FX0X_H */
