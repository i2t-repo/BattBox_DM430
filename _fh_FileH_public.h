
/**************************************************************************
 File        : _fh_FileH_public.c

Vers:   Date:      Name:     Comment:
-----  -------   -------   ------------------------------------------------
02.53  03Oct06   fbjorn    Initial start
04.31  06MAy11   fbjorn    Added SeekLn and Read functionality
04.31  06May11   fbjorn    Added SeekLn and Read functionality (copied from DP200)

Description :  This header file contains the structures for a file handler
**************************************************************************/

#ifndef _FH_FILEH_PUBLIC_H_
#define _FH_FILEH_PUBLIC_H_

/*-------------------------------------------------------
   include files
-------------------------------------------------------*/
#include "datatypes.h"
/*-------------------------------------------------------
   Definitions
-------------------------------------------------------*/

// File Types
#define _fh_T_EEFIFO 1U
#define _fh_T_FlashFIFO  2U

// File Status
#define _fh_S_Closed	(U16)0x00
#define _fh_S_Open		(U16)0x01
#define _fh_S_Write		(U16)0x02
#define _fh_S_Read		(U16)0x04
#define _fh_S_Append	(U16)0x08

//#define _MsgAvailable
//#define _WriteOnly

// File Errors
/*lint -esym(758, FILE_ERRORS_E) */ /* disable enum not referenced again */
/* this is because depending of the configuration of the device several enums are not used ( Output module has not inputs etc... */
enum FILE_ERRORS_E
{
	_fh_E_OK = 0,
	_fh_E_AllreadyOpen			,
	_fh_E_AllreadyClosed		,
	_fh_E_NotOpen				,
	_fh_E_CouldNotRead			,
	_fh_E_CouldNotWrite			,
	_fh_E_ServiceNotImplemented	,
	_fh_E_WrongFileType			,
	_fh_E_FileNotInitialized 	,
	_fh_E_FileNotFound 			,
	_fh_E_NOK               	,
	_fh_E_EOF					,
	_fh_E_CS					,
	_fh_E_WriteAccessDenied		,
	_fh_E_ReadAccessDenied		,
	_fh_E_Count // Number of fh errors
};

/*-------------------------------------------------------
   Type definitions
-------------------------------------------------------*/


typedef struct tFileStruct {
   const U16   type;
   U16 (*Open) (struct tFileStruct *f,U16 status); 
   U16 (*Close)(struct tFileStruct *f); 
#ifndef _WriteOnly
   U16 (*Read) (struct tFileStruct *f,U8 *dst,U16 len,U16 *lread); 
   U16 (*Readln)(struct tFileStruct *f,U8 *dst,U16 maxlen,U16 *lread);
#endif
   U16 (*Write)(struct tFileStruct *f,U8 *src,U16 len); 
#ifndef _WriteOnly
   U16 (*Seek) (struct tFileStruct *f,U32 pos); 
   U16 (*Seekln)(struct tFileStruct *f,U32 pos);
#endif
#ifdef _MsgAvailable
   U16 (*Msg)  (struct tFileStruct *f,U8 type,void *p); 
#endif
   void	*p;
	BOOL Initialized;
} fh_FILE;

   
/*-------------------------------------------------------
   Variables
-------------------------------------------------------*/

/*-------------------------------------------------------
   prototype functions
-------------------------------------------------------*/

/*-------------------------------------------------------
   functions
-------------------------------------------------------*/

/********************************************************
 Function   : 

 Parameters : 
              
 Returns    : 

 Description:
********************************************************/



#endif
