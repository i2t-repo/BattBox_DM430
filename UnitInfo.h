/*!
 @file   UnitInfo.h

 <hr>
 <h2> File Creation </h2>
 @author jbendixen

 @date  10.09.2010 - 18:29:32

 @caliberrm <a href="alm://caliberrm!amsapp21.dmz.int_20000_250/38420;ns=requirement"></a>

 @brief Contains the declaration to the ID information block

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
 00.00               fbjorn    Initial start
 00.00  18Jul14      JOM       Code review #672
 -----  ----------   -------   ------------------------------------------------
 @endverbatim

 &copy; Danfoss Power Solutions, 2014
*/

#ifndef D_UNIT_INFO_H
#define D_UNIT_INFO_H

/*-------------------------------------------------------
   Include files
   -------------------------------------------------------*/
#include "InfoBlocksConfig.h"
/*-------------------------------------------------------
   Definitions
   -------------------------------------------------------*/
#define D_FILE_NAME_SIZE        4U

#define NMB_HIST_ENTRYS (20U)

#define D_SPACE_CHAR (0x30U)

#define D_DIGIT0_OF_NUMBER(number) (((number)%10U)/1U)
#define D_DIGIT0_OF_NUMBER_CHAR(number) (D_DIGIT0_OF_NUMBER(number)+D_SPACE_CHAR)

#define D_DIGIT1_OF_NUMBER(number) (((number)%100U)/10U)
#define D_DIGIT1_OF_NUMBER_CHAR(number) (D_DIGIT1_OF_NUMBER(number)+D_SPACE_CHAR)

#define D_DIGIT2_OF_NUMBER(number) (((number)%1000U)/100U)
#define D_DIGIT2_OF_NUMBER_CHAR(number) (D_DIGIT2_OF_NUMBER(number)+D_SPACE_CHAR)

#define D_DIGIT3_OF_NUMBER(number) (((number)%10000U)/1000U)
#define D_DIGIT3_OF_NUMBER_CHAR(number) (D_DIGIT3_OF_NUMBER(number)+D_SPACE_CHAR)

#define D_DIGIT4_OF_NUMBER(number) (((number)%100000UL)/10000U)
#define D_DIGIT4_OF_NUMBER_CHAR(number) (D_DIGIT4_OF_NUMBER(number)+D_SPACE_CHAR)

#define D_DIGIT5_OF_NUMBER(number) (((number)%1000000UL)/100000UL)
#define D_DIGIT5_OF_NUMBER_CHAR(number) (D_DIGIT5_OF_NUMBER(number)+D_SPACE_CHAR)

#define D_DIGIT6_OF_NUMBER(number) (((number)%10000000UL)/1000000UL)
#define D_DIGIT6_OF_NUMBER_CHAR(number) (D_DIGIT6_OF_NUMBER(number)+D_SPACE_CHAR)

#define D_DIGIT7_OF_NUMBER(number) (((number)%100000000UL)/10000000UL)
#define D_DIGIT7_OF_NUMBER_CHAR(number) (D_DIGIT7_OF_NUMBER(number)+D_SPACE_CHAR)


/*-------------------------------------------------------
   Type definitions
   -------------------------------------------------------*/

/* Possible types in structure */
typedef enum
{
   E_IDTYPE_END = 0,          /* this is the last item in the list */
   E_IDTYPE_BASE_TYPE,        /* U16A_PNr2 + serial */
   E_IDTYPE_REVISION,         /* board revision */
   E_IDTYPE_UNIT_INFORMATION,
   E_IDTYPE_SOFTWARE_ACCESS
}E_IDType_t;


typedef enum
{
   E_UPDATE_DONE = 0,
   E_UPDATE_REQUEST,
   E_UPDATE_BUSY,
   E_UPDATE_FAULT
}E_HW_InfoUpdateStatusType_t;


typedef struct{
 U16 U16_IDType;
 U16 U16_SizeType;
}S_TypeSTRUCT_t;

typedef struct 
{
	U16 U16_StructVersion;
	U16 U16A_PNr2[D_PNR2_SIZE];
	U16 U16A_SerNr0[D_SER_NR0_SIZE];
	U16 U16A_BDate[D_BIRTH_DATE_SIZE];
	U16 U16_SizeOfAll;
}S_OTP_BASE_STRUCT_t;

typedef struct 
{
	S_TypeSTRUCT_t S_Type;
	U16 U16_BoardRevNumber;
	U16 U16_BoardIdNumberLW;
	U16 U16_BoardIdNumberHW;
	U16 U16_EEPROMSizeLW;
	U16 U16_EEPROMSizeHW;
}S_BOARD_REVISION_STRUCT_t;


typedef struct 
{
   S_TypeSTRUCT_t S_Type;

}S_END_STRUCT_t;

typedef struct 
{
   U16 U16_StructVersion;
   U8  U8A_PNr0[2U * D_PNR0_SIZE];
   U8  U8A_PRev0[2U * D_PREV0_SIZE];
   U8  U8A_PNr1[2U * D_PNR1_SIZE];
   U8  U8A_PRev1[2U * D_PREV1_SIZE];
   U16 U16_SizeOfAll;
   U16 U16_CheckSum;
}S_CONFIGURATION_BASE_STRUCT_t;

typedef struct 
{
   S_TypeSTRUCT_t S_Type;
   U32   U32_NodeID;         							// node identifier
   U8    U8A_OS[D_OS_SIZE];	 							// OS Description
   U8    U8A_AppCmplTime[2U * D_APP_CMPL_TIME_SIZE]; 	// Time Stamp of the compilation
   U8    U8A_Plus1Ver[D_PLUS1_VER_SIZE];    			// PLUS1 version used by the compiler
   U8    U8A_AppId[2U * D_APP_ID_SIZE];      			// Program identity
   U8    U8A_AppType[2U * D_APP_TYPE_SIZE];    		    // Program Type
   U8    U8A_AppVer[2U * D_APP_VER_SIZE];     			// Program Version
   U16   U8A_ExpP[D_EXT_INFO_BLK_PTR_SIZE];     		// Extended Info Block pointer
   U16   U16_CheckSum;       							// Checksum of info block
}S_UNIT_INFORMATION_STRUCT_t; 


typedef struct
{
   U16   U16_Format;         							// should always be one
   U16   U16_Date;           							// days since 2000-01-01
   U16   U16_License;        							// license number
   U16   U16_User;	         							// USER information
   U16   U16_Activity;       							// LSB what has been done ; MSB failure or not
   U16   U16A_AppCmplTime[D_APP_CMPL_TIME_SIZE];		// Time Stamp of the compilation
   U16   U16A_FileName[D_FILE_NAME_SIZE];   			//
   U16   U16_CheckSum;       							// Checksum of info block
}S_UNIT_HISTORY_STRUCT_t;

typedef struct _FLASHSTATUS
{
  U32  U32_NbmrOfExeDwnloads;
  U32  U32_FirstFailedAddress;
  U16  U16_StatusFlashloader;
  U16  U16_Timelock;
  U16  U16_LastProgError;
  U16  U16_ExpectedData;
  U16  U16_ActualData;
  U16  U16_LastHistoryRecord;
}S_FLASHSTATUS_ST_t;

/*-------------------------------------------------------
   Variables
   -------------------------------------------------------*/

/*-------------------------------------------------------
   prototype functions
   -------------------------------------------------------*/
extern U16 K_U16_GetKernelProductionInfo(U16 *puiaPNr2, U16 *puiaSerNr0, U16 * puiaBirth);

extern U16 K_U16_GetHardwareRevision(U16 *puiRevision,
                                     U32 *pulBoardIdentNumber,
                                     U32 *pulEEpromSize       );

extern U16 K_U16_GetKernelHWInfo(U8 * pPNr0, U8 *prev0, U8 * pPNr1, U8 *prev1);

extern E_HW_InfoUpdateStatusType_t K_E_SetKernelHWInfo(const U8 * pPNr0,
                                                       const  U8 *prev0,
                                                       const  U8 * pPNr1,
                                                       const  U8 *prev1);

extern E_HW_InfoUpdateStatusType_t K_E_CheckKernelHWInfoStatus(void);

extern void K_V_KernelHWInfoUpdate(void);

extern U16 K_V_ReadEEPROMUnitInfo(S_UNIT_INFORMATION_STRUCT_t   *psUnit);

extern U16 K_V_WriteEEPROMUnitInfo(const S_UNIT_INFORMATION_STRUCT_t   *psUnit);


#endif /* #ifndef D_UNIT_INFO_H */


