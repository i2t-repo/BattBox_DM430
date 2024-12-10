/*!
 @file _romparameters_public.h

 <hr>
 <h2> File Creation </h2>
 @author fbjorn

 @date   10.03.2006 - 13:30:06

 @caliberrm <a href="alm://caliberrm!amsapp21.dmz.int_20000_250/38420;ns=requirement!</a>


 @brief This is the header file belonging to romparameters.c

 <hr>
 <h2> Current Revision </h2>  <!-- This section will be filled by SVN at committing -->
 $Revision:$
 $Author:$
 $Date:$
 $HeadURL:$


 <hr>
 <h2> History </h2>   \verbatim
 Vers:   Date:     Name:     Comment:
 -----  -------    -------   ------------------------------------------------
 02.53  03Oct06    fbjorn    Initial start
 03.05  4Apr08     fbjorn    Support for multiple ROM parameters
 03.15  03Nov08    mkrebs    Changed/added comments for doxygen
 00.00  11Jul14    JOM       Codereview #672
 00.01  02Apr15    mkrebs    Fixed P1McX00000445 - added support for XMC4000
 00.02  01Feb18    jgieseke  Fixed STM32F7 header issues with CRC as parameter name
                             Added support for STM32F7 CPU
 -----  ---------- -------   ------------------------------------------------
 @endverbatim

 &copy; Danfoss Power Solutions, 2018
*/

#ifndef D_ROMPARAMETERS_PUBLIC_H
#define D_ROMPARAMETERS_PUBLIC_H


/*-------------------------------------------------------
   Definitions
-------------------------------------------------------*/
#define _FILEMEM	

#define _MultipleFiles ///< undefine this to support single ROP File

#if defined(__TMS320C28XX__)
	#ifdef _MultipleFiles
	    #define ROPPort 0x3F4000UL	 ///< ROP Port
	    #define _PARAFILE_ADDR(Port, ByteOffset) ((Port)+((ByteOffset)>>1))   ///< Parameter file address
	#else
	    #define _PARAFILE_ADDR(n) 0x3F4000UL 						 ///< Parameter file address
	#endif						
#elif defined(__INFINEON_XMC4000__)
	#ifdef _MultipleFiles
	    #define ROPPort 0x0C008000UL	 ///< ROP Port
	    #define _PARAFILE_ADDR(Port, ByteOffset) ((Port)+((ByteOffset)))   ///< Parameter file address
	#else
	    #define _PARAFILE_ADDR(n) 0x0C008000UL 						 ///< Parameter file address
	#endif
#elif (CPU_FAMILY_TYPE == MSK_STM32F7XX)
#ifdef _MultipleFiles
	    #define ROPPort 0x08010000UL	 ///< ROP Port
	    #define _PARAFILE_ADDR(Port, ByteOffset) ((Port)+((ByteOffset)))   ///< Parameter file address
	#else
	    #define _PARAFILE_ADDR(n) 0x08010000UL 						 ///< Parameter file address
	#endif
#else// ST is and should be kept as default to remain backwards compatible
	#ifdef _MultipleFiles
	    #define ROPPort 0x08008000UL	 ///< ROP Port
	    #define _PARAFILE_ADDR(Port, ByteOffset) ((Port)+((ByteOffset)))   ///< Parameter file address
	#else
	    #define _PARAFILE_ADDR(n) 0x08008000UL 						 ///< Parameter file address
	#endif						
#endif																							 
/*-------------------------------------------------------
   functions
-------------------------------------------------------*/

#ifdef _MultipleFiles
_FILEMEM void* _U__USES_PARAM(const TL *FileType,U32 U32_CRC,BOOL *Valid,U32 Port,U32 ByteOffset);
#else
_FILEMEM void* _U__USES_PARAM(const TL *FileType,U32 U32_CRC,BOOL *Valid);
#endif


#endif  /* D_ROMPARAMETERS_PUBLIC_H */
