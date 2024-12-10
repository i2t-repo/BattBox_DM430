/*!
 @file   infoblocks.h

 <hr>
 <h2> File Creation </h2>
 @author fbjorn

 @date   11.03.2006 - 13:30:06

 @caliberrm <a href="alm://caliberrm!amsapp21.dmz.int_20000_250/38420;ns=requirement"></a>

 @brief This files contains the interface to access the different infoblock information.

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
 00.00  11Jul14      JOM       Codereview #672
 -----  ----------   -------   ------------------------------------------------
 @endverbatim

 &copy; Danfoss Power Solutions, 2014
*/


#ifndef D_INFO_BLOCKS_H
#define D_INFO_BLOCKS_H

/*-------------------------------------------------------
   Include files
   -------------------------------------------------------*/

#include "datatypes.h"
#include "UnitInfo.h"
#include "UnitInfo_HW.h"
#include "InfoBlocksConfig.h"

/*-------------------------------------------------------
   Definitions
   -------------------------------------------------------*/
#define D_KEY_SIZE                  (4U)
#define D_FILE_SIZE          	    (23U)
#define D_TYPE_SIZE                 (23U)
#define D_VERSION_SIZE              (23U)
#define D_ADDR_MODE_SIZE            (23U)
#define D_INFO_BLK5_SIZE            (2U)
#define D_CRCA_SIZE                 (2U)
#define D_CRCA_U32_SIZE             (1U)

#define D_PATH_SIZE                 (3U)
#define D_EXP3_SIZE                 (3U)
#define D_INFO_BLK5_FILEP_SIZE      (4U)
#define D_INFO_BLK6_FILEP_SIZE      (3U)

#define D_S8A_All_SIZE              (42U)

#define _id_ApplicationFileType 	(0U)
#define _id_PLGFileType         	(1U)
#define _id_ParameterFileType   	(2U)
#define _id_AppLogFileType      	(3U)
#define _id_HistLogFileType     	(4U)
#define _id_RopFileType         	(5U)

#define id_InfoBlock11 ECUInfoPacked

/*-------------------------------------------------------
   Type definitions
   -------------------------------------------------------*/

/* id_INFOBLOCKTYP5, Guide referenced symbol, do not change name, exception to coding standard permitted */
/*lint -save -e960 Union declaration violates MISRA rule 18.4, but is necessary here */
typedef struct Id5
{
 U16  InfoBlockTyp : 8 ;      				// LB = BlockType, HB = key 0
 U16  key0 : 8;
 U16  Key[D_KEY_SIZE];                 		// key 1 - key 8
 U16  Key9: 8;                				// LB = key 9, HB = filetype
 U16  FileType : 8;
 U16  AppCmplTime[D_APP_CMPL_TIME_SIZE];    // Tidstämpel från kompileringstillfället
 U16  File[D_FILE_SIZE];               		// ID.File
 U16  Type[D_TYPE_SIZE];               		// ID.Type
 U16  Version[D_VERSION_SIZE];            	// ID.Version
 U16  AddrMode[D_ADDR_MODE_SIZE];           // ID.AddressMode
 U16  Size[D_INFO_BLK5_SIZE];               // Storlek av hela filen inkl detta infoblock
 union
 {
	 U16  CRCA[D_CRCA_SIZE];            	// CRC
	 U32  CRCA_U32[D_CRCA_U32_SIZE];        // CRC
 } crca;
 U16  FileP[D_INFO_BLK5_FILEP_SIZE];       	// Pekare till fil;
 U16  dummy : 8;
 U16  CheckSum : 8;           				// LB = dummy, HB =Checksumma för infiblock 4
 U16  Status;                 				// Status, FFFF ej OK, 0000 OK
} id_INFOBLOCKTYP5;
/*lint -restore */


/* id_INFOBLOCKTYP6, Guide referenced symbol, do not change name, exception to coding standard permitted */
typedef struct Id6
{
   U16 InfoBlockTyp_FileType; 				// LB = BlockType, HB = FileType
   U16 FileAttr;              				// File Attribute
   U32 FreeSpace;             				// Free Space on  Drive/Path (bytes)
   U16 FileSysType;           				// Type of File system ,bit 0 Erase all, bit 1 Single File
   U16 Path[D_PATH_SIZE];               	// Pointer to name of the Drive/Path
   U16 FileP[D_INFO_BLK6_FILEP_SIZE];   	// Pointer to the File
   U16 ExpP[D_EXP3_SIZE];               	// Pointer to more info blocks
   U16 CheckSum;              				// LB = dummy, HB = Checksum for infoblock 4
} id_INFOBLOCKTYP6;


/* id_INFOBLOCKTYP10, Guide referenced symbol, do not change name, exception to coding standard permitted */
typedef struct Id10
{
    U16 InfoBlockTyp;       // type definition (set to 10)
    U8  ProtocolType;       // ProtocolType
    U8 ProtocolVersion;     // Protocol version
    U16 RxBufferLength;     // Receive buffer length
    U16 TxBufferLength;     // Transmit buffer length
    U8 NrOfDynLID;          // No of dynamic local ID:s
    U8 NrOfPosInDynLID;     // No of positions in dynamic local ID
    U16 ExpP[D_EXP3_SIZE];  // Pointer to more info blocks
    U16 CheckSum;           // Checksum of info block
}id_INFOBLOCKTYP10;


/* id_INFOBLOCKTYP11, Guide referenced symbol, do not change name, exception to coding standard permitted */
typedef struct// Id11
{
	   U16 InfoBlockTyp;   						// type definition (set to 9)
	   U16 uiNodeIDLo;      					// node identifier
	   U16 uiNodeIDHi;      					// node identifier
	   U8  OS[D_OS_SIZE];          				// OS Description
	   U16 AppCmplTime[D_APP_CMPL_TIME_SIZE]; 	// Time Stamp of the compilation
	   U8  Plus1Ver[D_PLUS1_VER_SIZE];     		// PLUS1 version used by the compiler
	   U16 PNr2[D_PNR2_SIZE];        			// EAN code 40 bit Integer + Checksum
	   U16 SerNr0[D_SER_NR0_SIZE];      		// Serial Number 40 bits integer
	   U16 BDate[D_BIRTH_DATE_SIZE];       		// Birth Date of HW
	   U16 PNr0[D_PNR0_SIZE];        			// HW Part Number 0 (Basic)
	   U16 PRev0[D_PREV0_SIZE];       			// HW Part Revision 0 (Basic)
	   U16 PNr1[D_PNR1_SIZE];        			// HW Part Number 1 (Customer)
	   U16 PRev1[D_PREV1_SIZE];       			// HW Part Revision 1 (Customer)
	   U16 AppId[D_APP_ID_SIZE];      			// Program identity
	   U16 AppType[D_APP_TYPE_SIZE];    		// Program Type
	   U16 AppVer[D_APP_VER_SIZE];     			// Program Version
	   U16 ExpP[D_EXT_INFO_BLK_PTR_SIZE];       // Extended Info Block pointer
	   U16 BootVer0;        					// Version of the bootloader

	   U16 FunctionField1; // functionality field 1, based on the following bitfield definitions:
	                         //  U16 RequestDownloadParameterType : 2; // 0 = TargetDescriptionInfo, 1 .. 3 is reserved
	                         //  U16 TargetLocatonDefMode         : 2; // 0 = ByLocalId, 1 = ByAddress, 2=ByName, 3 is  reserved
	                         //  U16 TransferDataFrameFormat      : 2; // 0 = Undefined, 1 = StandardFrameFormat, 2..3 is reserved
	                         //  U16 TransferDataFormat           : 2; // 0 = Binary, 1 = Binary Intel Hex, 2 .. 3 is reserved
	                         //  U16 TargetType_Application       : 1; // 0 = not supported, 1 = supported
	                         //  U16 TargetType_Parameter         : 1; // 0 = not supported, 1 = supported
	                         //  U16 reserved                     : 6; // 0 = Reserved

	   U16 FunctionField2;   // functionality field 2, based on the following bitfield definitions:
	                         //  U16 ApplicationDefinedBaudRate   : 1; // 0 = not supported, 1 = supported
	                         //  U16 SerialFlash                  : 1; // 0 = not supported, 1 = supported
	                         //  U16 SequentialBlockDownload 	  : 1; // 0 = not supported, 1 = supported
	                         //	 U16 ExtParallelFlash			  : 1; // 0 = not supported, 1 = supported
	                         //	 U16 ExtDiagData				  : 1; // 0 = not supported, 1 = supported
	                         //	 U16 ExecutionMode				  : 2; // 0 = Unknown, 1 = bootloader, 2 = application, 3 = reserved
	                         //	 U16 reserved                     : 9;	// 0 = Reserved

	   U16 CheckSum;   // Checksum of info block
}id_INFOBLOCKTYP11;


typedef struct{
  S8              S8A_All[D_S8A_All_SIZE];
}S_OS_STRUCT_t;

/*-------------------------------------------------------
   Variables
   -------------------------------------------------------*/

extern id_INFOBLOCKTYP11 id_InfoBlock11;

/*-------------------------------------------------------
   prototype functions
   -------------------------------------------------------*/

extern void KC_V_InitInfoBlock11(id_INFOBLOCKTYP11   *InfoBlock11);

extern void KC_V_LoadAppInfo(id_INFOBLOCKTYP11   *InfoBlock11,
                             const U8             OS_str[],
                             const U8             TimeKey[],
                             const U8             Plus1Ver[],
                             const U8             AppID[],
                             const U8             AppType[],
                             const U8             AppVer[]);

extern void KC_V_LoadHWInfo(id_INFOBLOCKTYP11                    *InfoBlock11,
                            const S_CONFIGURATION_BASE_STRUCT_t  *HWInfo);

extern void KC_V_LoadProductionInfo(id_INFOBLOCKTYP11             *InfoBlock11,
                                    const S_OTP_BASE_STRUCT_t     *ProductionInfo);

extern void KC_V_UpdateNodeId(id_INFOBLOCKTYP11   *InfoBlock11,
                              U8                  Net,
                              U8                  Node);

extern void KC_V_InitAndAddInfoBlock6(id_INFOBLOCKTYP11   *InfoBlock11,
                                      id_INFOBLOCKTYP6    *InfoBlock6,
                                      U32                  PlgFile,
                                      U16                  PlgSize);

extern void KC_V_InitAndAddInfoBlock10(id_INFOBLOCKTYP6   *InfoBlock6,
                                       id_INFOBLOCKTYP10  *InfoBlock10,
                                       U16                 KWP2kRxBufferSize,
                                       U16                 KWP2kTxBufferSize);

extern void KC_V_UpdateAllInfoBlockChecksums(id_INFOBLOCKTYP11   *InfoBlock11);

extern void KC_V_GetAppInfo(S_UNIT_INFORMATION_STRUCT_t   *AppInfo,
                            const id_INFOBLOCKTYP11   *InfoBlock11);

extern void KC_V_GetHWInfo(S_CONFIGURATION_BASE_STRUCT_t   *HWInfo,
                           const id_INFOBLOCKTYP11     *InfoBlock11);

#endif  /* D_INFO_BLOCKS_H */
