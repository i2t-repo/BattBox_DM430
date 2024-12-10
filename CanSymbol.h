/*!
   @file CanSymbol.h

   <hr>
   <h2> File Creation </h2>
   @author fbjorn

   @date 28Feb05

   @caliberrm alm://caliberrm!amsapp21.dmz.int_20000_250/38428;ns=requirement

   @brief   Header file for Guide code generator CAN interface structures.

   <hr>
   <h2> Current Revision </h2>  <!-- This section will be filled by SVN at committing -->
   $Revision:$
   $Author:$
   $Date:$
   $HeadURL:$


   <hr>
   <h2> History </h2>
   @verbatim
   Vers:  Date:        Name:      Comment:
   -----  ----------   -------    ------------------------------------------------
   00.00  28Feb05      fbjorn     Initial start
   00.01  12Aug14      Wolf	      Code review #629
   00.02  26Aug14      jmutzbauer Changed the preprozessor-code for "D_NUMBER_CANMESSAGES"
   -----  ----------   -------    ------------------------------------------------
   @endverbatim

   &copy; Danfoss Power Solutions, 2014
 */


#ifndef D_CANSYMBOL_H
#define D_CANSYMBOL_H

/*-------------------------------------------------------
   include files
   -------------------------------------------------------*/

#include "datatypes.h"

/*-------------------------------------------------------
   Definitions
   -------------------------------------------------------*/

/*-------------------------------------------------------
   Type definitions
   -------------------------------------------------------*/

/* The following structures interface with GUIDE, do not change names */

typedef struct _cansym_tx_struct
{
   // Public
   U32    id;        // Input
   BOOL   ext;       // Input
   BOOL   rtr;       // Input
   U8     dlc;       // Input
   U8    *data;      // Input
   BOOL   tx;        // Input
   PORT   port;      // Input
   BOOL   override;  // Output
   BOOL   pending;   // Output
   // Private
   struct _cansym_tx_struct  *Next;
   U32                        last_id;
   U8   last_data[8];
   U8   last_dlc;
}_CANSYM_TX_T;


typedef struct _cansym_rx_struct
{
   // Public
   U32    idfilter;   // Input
   U32    idmask;     // Input
   BOOL   ext;        // Input
   BOOL   rtr;        // Input
   U32    id;         // Output
   U8     dlc;        // Output
   U8     data[8];    // Output
   BOOL   rx;         // Output
   BOOL   overflow;   // Output
   U8    *datafilter; // Input
   U8    *datamask;   // Input
   U8     masklen;    // Input
   BOOL   protected;  // Input
   PORT   port;       // Input
   // Private
   struct _cansym_rx_struct  *Next;
}_CANSYM_RX_T;

/*-------------------------------------------------------
   Variables
   -------------------------------------------------------*/


/*-------------------------------------------------------
   prototype functions
   -------------------------------------------------------*/


/*-------------------------------------------------------
   functions
   -------------------------------------------------------*/

extern void _CANSYM_TX_ADD(_CANSYM_TX_T *CanSymTx);

extern void _CANSYM_RX_ADD(_CANSYM_RX_T *CanSymRx);

/*lint -e553 */
#if (D_NUMBER_CANMESSAGES)
extern void _CANSYM_TX_REMOVE(const _CANSYM_TX_T *CanSym);
extern void _CANSYM_RX_REMOVE(const _CANSYM_RX_T *CanSym);
#endif /* D_NUMBER_CANMESSAGES */
/*lint +e553 */

extern void AC_V_ProcessCanRxSymbols(void);

extern void AC_V_ProcessCanTxSymbols(void);

extern void AC_V_DisableCanSymbols(void);

extern void AC_V_EnableCanSymbols(void);

#endif /* ifndef D_CANSYMBOL_H */

