 /*!
   @file UnitInfo_HW.h

   <hr>
   <h2> File Creation </h2>
   @author jbendixen

   @date 10.09.2010 - 18:29:32

   @caliberrm <a href="alm://caliberrm!amsapp21.dmz.int_20000_250/38420;ns=requirement"> "TASK38420" 
                 "Compatible with PLUS+1 Tools and Development" </a>

   @brief  Contains the declaration to the ID information block

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
   00.00  10Oct10      jbendixen Initial start
   00.01  25Jun14      bcrouse   Code review #698 updates
   -----  ----------   -------   ------------------------------------------------
   @endverbatim

   &copy; Danfoss Power Solutions., 2014
 */

#ifndef UNITINFO_HW_H
#define UNITINFO_HW_H


typedef struct
{
   S_OTP_BASE_STRUCT_t       S_Base;
   S_BOARD_REVISION_STRUCT_t S_Revision;
   S_END_STRUCT_t            S_End;
   U16                       U16_CheckSum; 
}S_OTP_STRUCT_t;

#endif /* UNITINFO_HW_H */

