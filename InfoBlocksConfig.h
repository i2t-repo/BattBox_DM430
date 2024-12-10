/*!
 @file   InfoblocksConfig.h

 <hr>
 <h2> File Creation </h2>
 @author rwolf

 @date   08.08.2014

 @caliberrm <a href="alm://caliberrm!amsapp21.dmz.int_20000_250/38420;ns=requirement"></a>

 @brief This header file contains size definitions for Info block fields.

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
 00.00  08Aug14      RWolf     Initial start requested from code review #629
 -----  ----------   -------   ------------------------------------------------
 @endverbatim

 &copy; Danfoss Power Solutions, 2014
*/


#ifndef D_INFO_BLOCKS_CONFIG_H
#define D_INFO_BLOCKS_CONFIG_H

/*-------------------------------------------------------
   Include files
   -------------------------------------------------------*/

/*-------------------------------------------------------
   Definitions
   -------------------------------------------------------*/
#define D_OS_SIZE               42U
#define D_PLUS1_VER_SIZE        8U
#define D_PNR2_SIZE             3U
#define D_SER_NR0_SIZE          3U
#define D_BIRTH_DATE_SIZE       4U
#define D_PNR0_SIZE             6U
#define D_PREV0_SIZE            2U
#define D_PNR1_SIZE             6U
#define D_PREV1_SIZE            2U
#define D_APP_ID_SIZE           26U
#define D_APP_TYPE_SIZE         16U
#define D_APP_VER_SIZE          11U
#define D_EXT_INFO_BLK_PTR_SIZE 3U
#define D_APP_CMPL_TIME_SIZE 	4U



/*-------------------------------------------------------
   Type definitions
   -------------------------------------------------------*/

/*-------------------------------------------------------
   Variables
   -------------------------------------------------------*/

/*-------------------------------------------------------
   prototype functions
   -------------------------------------------------------*/

#endif  /* #ifndef D_INFO_BLOCKS_CONFIG_H */
