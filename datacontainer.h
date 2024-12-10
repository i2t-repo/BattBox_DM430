/*
   @file   datacontainer.h

   <hr>
   <h2> File Creation </h2>
   @author mbyrnes

   @date    Jun 10, 2010

   @caliberrm alm://caliberrm!amsapp21.dmz.int_20000_250/38420;ns=requirement

   @brief   This header file contains data structures for the PLUS+1 down load tool

   <hr>
   <h2> Current Revision </h2>  <!-- This section will be filled by SVN at committing -->
   $Revision: 32519 $
   $Author: rwolf $
   $Date: 2014-08-12 19:30:29 +0200 (Di, 12 Aug 2014) $
   $HeadURL: https://mpssvn01.network.int/svn/EOS/SSS/EOS/CAP/ECUs/SC050_120/Primary/branches/SC_RLC_V1.00/inc/datacontainer.h $


   <hr>
   <h2> History </h2>
   @verbatim
   Vers:  Date:         Name:             Comment:
   -----  ----------    -------           ------------------------------------------------
   00.00  10Jun10       Byrnes            Initial start
   00.01  16Jul14       Wolf              Code review #657
   -----  ----------    -------           ------------------------------------------------
   @endverbatim

   &copy; Danfoss Power Solutions , 2014
 */

#ifndef D_DATACONTAINER_H
#define D_DATACONTAINER_H


#ifdef MAKEDEF_NMB_INT_CAN_CONTROLLER
 #define D_NUMBER_INT_CANCONTROLLERS   (MAKEDEF_NMB_INT_CAN_CONTROLLER)
#else
 #define D_NUMBER_INT_CANCONTROLLERS   0
#endif

#ifdef MAKEDEF_NMB_EXT_CAN_CONTROLLER
 #define D_NUMBER_EXT_CANCONTROLLERS   (MAKEDEF_NMB_EXT_CAN_CONTROLLER)
#else
 #define D_NUMBER_EXT_CANCONTROLLERS   0
#endif

#ifdef MAKEDEF_NMB_USB_CAN_CONTROLLER
 #define D_NUMBER_USB_CANCONTROLLERS   (MAKEDEF_NMB_USB_CAN_CONTROLLER)
#else
 #define D_NUMBER_USB_CANCONTROLLERS   0
#endif

#define D_NUMBER_CANCONTROLLERS   ((D_NUMBER_INT_CANCONTROLLERS + D_NUMBER_EXT_CANCONTROLLERS) + D_NUMBER_USB_CANCONTROLLERS)

#include "P1_OS.h"
#include "idapp.h"
#include "InfoBlocks.h"

#include "interface.h"
#include "_applogsymbol_public.h"

extern const S_OS_STRUCT_t   g_KS_Os;

/* _ElapsedTime: Guide referenced symbol do not change name, exception to coding standard permitted */
extern U8   _ElapsedTime[NUMBER_TIME_ELEMENTS];

/** \brief Filled by code generator of the GUIDE, called every loop */
extern void _MAINTASK(void);

/** \brief Filled by code generator of the GUIDE, called once before first loop cycle */
extern void _INITTASK(void);

extern _MS_AppId_T _AppId1_T  *_AppId1;    ///< Filled by code generator of the GUIDE, contains name/description of the application
extern _MS_AppId_T _AppId2_T  *_AppId2;    ///< Filled by code generator of the GUIDE, contains type of the application
extern _MS_AppId_T _AppId3_T  *_AppId3;    ///< Filled by code generator of the GUIDE, contains version of the application

extern LANG        _AktSprak;
extern MsgPort_T   FlashDrive;
extern void ECU_V_InitDataContainer(void);


#endif /* D_DATACONTAINER_H */

