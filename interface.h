//FILE: ../inc/interface.h

//IDL Type: DM430E_1_1_X_X_Applayer
//IDL Name: DM430E_1_1_X_X_Applayer_interface
//IDL Version: 006A
//IDL CheckSum: 4A5EEF
//This file is automatically generated by RatatoskT3,
//so change it only if you know what you are doing...

#ifndef _INTERFACE_H
#define _INTERFACE_H


/*** H:HEAD section BEGIN: ***/
#include "datatypes.h"
#include "HWConfigDM430E.h"
#include "InfoBlocks.h"

/*** H:HEAD section END. ***/


/*** XCLASS Structs section BEGIN: ***/

/*** XCLASS Structs section END. ***/


/*** XCLASS Methods section BEGIN: ***/

/*** XCLASS Methods section END. ***/


/*** XCLASS Macros section BEGIN: ***/

/*** XCLASS Macros section END. ***/


/*** Misc Typedefs section BEGIN: ***/
typedef struct
{
   /**  PC_Set_MasterPassword PC_INSTANCE_NAME_ServiceTool. PC_NO_INSTANCE*/
   U32   Write;

   /**  PC_Get_MasterPassword PC_INSTANCE_NAME_ServiceTool. PC_NO_INSTANCE*/
   U32   Read;
}S_MASTERPASSWORD_t;

typedef struct
{
   S_MASTERPASSWORD_t   MasterPassword;

   /**  PC_DiagCon_Set_DisableRead PC_NO_INSTANCE*/
   BOOL   DisableRead;

   /**  PC_DiagCon_Set_DisableWrite PC_NO_INSTANCE*/
   BOOL   DisableWrite;

   /**  PC_DiagCon_Set_DisableDownload PC_NO_INSTANCE*/
   BOOL   DisableDownload;

   /**  PC_DiagCon_Get_Connect PC_NO_INSTANCE*/
   BOOL   Connect;
}S_DIAGNOSTIC_CONTROL_t;

/**  On the C Open interface this should be tested in demo_PC.h */
typedef struct
{
   U16   Status;
   U16   Intern;
   U16   PendingCount;
}S_NV_STRUCT_t;

typedef struct
{
   /**  PC_CAN_SET_ServerAddr PC_INSTANCE_NAME_ID. PC_NO_INSTANCE  */
   U8   ServerAddr;

   /**  PC_CAN_GET_ClientAddr PC_INSTANCE_NAME_ID. PC_NO_INSTANCE */
   U8   ClientAddr;
}S_NODETYPE_STRUCT_t;

typedef struct
{
   U8   Addr;
}S_NETTYPE_STRUCT_t;

typedef struct
{
   S_NODETYPE_STRUCT_t   Node;
   S_NETTYPE_STRUCT_t    Net[3];
}S_IDTYPE_STRUCT_t;

typedef struct
{
   /**  PC_OS_GET_ETime PC_NO_INSTANCE*/
   U32   ETime; /** Time since power on [10ms] (visible in the API, read) */
   /**  PC_OS_GET_LoopCnt PC_NO_INSTANCE*/
   U32   LoopCnt; /** Already processed loops after the last power cycle (visible in the API, read)   */
   /**  PC_OS_GET_ExecTime PC_NO_INSTANCE*/
   U16   ExecTime;     /** Real Processing time [ms] (visible in the API, read)     */
   U16   ExecTimeSave; /** temp buffer for the actual used loop-time    */
   /**  PC_OS_SET_ExecTimeOut PC_NO_INSTANCE PC_PRIMARY */
   U16   ExecTimeOut; /** Requested processing time [ms] (visible in the API, write in primary, read in secondary)  */
   /**  PC_OS_GET_ExecTimeWork PC_NO_INSTANCE */
   U16   ExecTimeWork; /** Actual work time during processing time [ms] (visible in the API, read)*/
   U16   ExecTimeGraph;

   /**  PC_OS_GET_CrcStatus PC_NO_INSTANCE */
   U16   CrcStatus;     /** CRC calculation has failed    */
   U16   CrcDownloaded; /** CRC has been downloaded */
   U16   CrcCalculated; /** CRC has been calculated  */
   /**  PC_OS_GET_CrcCalcTime PC_NO_INSTANCE*/
   U16   CrcCalcTime; /** CRC background calculation time */
   /**  PC_OS_GET_ChecksumFailure PC_NO_INSTANCE*/
   U16   ChecksumFailure; /** BIT0 = ProgramCode; BIT1 = RAM ; BIT2 = Bootloader*/
   /** BIT0 = ProgramCode; BIT1 = RAM ; BIT2 = Bootloader ; if zero system will stop ASAP */
   /** if one of the above is BITS set to 1 = application stops */
   /**  PC_OS_SET_ChecksumFailureTreatment PC_NO_INSTANCE */
   U16   ChecksumFailureTreatment;

   /** if 1 = ExecTime will be set to ExecTimeWork again   */
   /**  PC_OS_SET_ResetExecTime PC_NO_INSTANCE */
   BOOL   ResetExecTime;
   BOOL   ResetExecTimeOld; /** temp buffer for the request to reset the timing */
   /**  PC_OS_GET_Start PC_NO_INSTANCE */
   BOOL   Start;                    /** Set during the first processing time after a power cycle (visible in the API, read) */
   BOOL   ResetExecTimeSafetyLayer; /** temp buffer for the request to reset the timing */
   /**  PC_OS_GET_RAMTestTimeInterval PC_NO_INSTANCE*/
   U16   RAMTestTimeInterval; /** Time interval of RAM diagnostic self-check [s] (visible in the API, read) */
}S_OSTYPE_STRUCT_t;

typedef struct
{
   U32    Ident_No;
   U32    SW_Vers;
   U32    Param_Vers;
   BOOL   Release;
}S_UNITVERSION_STRUCT_t;

typedef struct
{
   U16    Status;
   U16    Year;
   U8     Second;
   U8     Minute;
   U8     Hour;
   U8     Day;
   U8     DayOfWeek;
   U8     Month;
   BOOL   Set;
   BOOL   SetOld;
   BOOL   Stop;
}S_RTC_INTERFACE_STRUCT_t;

typedef struct
{
   U8     Backlight;
   BOOL   STBY_Mode;
   U16    Status;
   PORT   Port;
   U16    Freq;
   U16    FreqOld;
}S_LCD1_INTERFACE_STRUCT_t;

typedef struct
{
   COLOR   Transparent;
}COLORSTYPE;

typedef struct
{
   U16   AnIn;
}S_LIGHT1_INTERFACE_STRUCT_t;

typedef struct
{
   BOOL   EraseOnDownload;
}S_APPLOG_INTERFACE_STRUCT_t;

typedef struct
{
   U16    Type;
   BOOL   Backlight;
   BOOL   One;
   BOOL   Two;
   BOOL   Three;
   BOOL   Four;
   BOOL   Up;
   BOOL   Left;
   BOOL   Center;
   BOOL   Down;
   BOOL   Right;
   BOOL   Home;
   BOOL   Esc;
}S_BUTTON_INTERFACE_STRUCT_t;

typedef struct
{
   BOOL   GreenRight;
   BOOL   RedRight;
   BOOL   AmberRight;
   BOOL   GreenLeft;
   BOOL   RedLeft;
   BOOL   AmberLeft;
}S_DISPLAY_LED_INTERFACE_STRUCT_t;

typedef struct
{
   /**  PC_DA1_Set_Input_Config */
   /**  PC_DA1_Get_Analog_RawCounts */
   U16   AnIn;

   /**  PC_DA1_Get_Analog_mVolts */
   U16   Voltage;

   /**  0 -> NO Pulldown, NO Pullup */
   /**  1 -> NO Pulldown,    Pullup */
   /**  2 ->    Pulldown, NO Pullup */
   /**  3 ->    Pulldown,    Pullup */
   /**  PC_CONFIG_PARAMETER */
   U8   Bias;

   /**  0 ->  AD 5    V range */
   /**  1 ->  AD sup  V range */
   /**  PC_CONFIG_PARAMETER */
   U8   Range;

   /**  PC_CONFIG_PARAMETER */
   U16   DigThresLow;

   /**  PC_CONFIG_PARAMETER */
   U16   DigThresHigh;

   /**  PC_DA1_Get_Status */
   U16   Status;

   /**  PC_DA1_Get_Digital */
   BOOL   DigIn;
}S_DA1_INTERFACE_STRUCT_t;

typedef struct
{
   /**  PC_DA3_Set_Input_Config*/
   /**  PC_DA3_Get_Analog_RawCounts */
   U16   AnIn;

   /**  PC_DA3_Get_Analog_mVolts */
   U16   Voltage;

   /**  PC_CONFIG_PARAMETER */
   U16   DigThresLow;

   /**  PC_CONFIG_PARAMETER */
   U16   DigThresHigh;

   /**  PC_DA3_Get_Digital */
   BOOL   DigIn;
}S_DA3_INTERFACE_STRUCT_t;

typedef struct
{
   S32   Phase;
   U32   Per;
   U16   Freq;
   U16   Count;
   U16   Duty;
   S16   QuadCount;

   /**  PC_DARC1_Set_Input_Config */
   /**  PC_DARC1_Get_Analog_Current */
   U32   Current;

   /**  PC_DARC1_Get_Analog_RawCounts */
   U16   AnIn;

   /**  PC_DARC1_Get_Analog_mVolts */
   U16   Voltage;

   /**  PC_DARC1_Get_Analog_Resistance */
   U16   Resistance;

   /**  0 -> NO Pulldown, NO Pullup */
   /**  1 -> NO Pulldown,    Pullup */
   /**  2 ->    Pulldown, NO Pullup */
   /**  3 ->    Pulldown,    Pullup */
   /**  PC_CONFIG_PARAMETER */
   U8   Bias;

   /**  0 ->  AD 5    V range */
   /**  1 ->  AD sup  V range */
   /**  PC_CONFIG_PARAMETER */
   U8   Range;

   /**  0 ->  normal AD input */
   /**  1 ->  temperature/rheostat */
   /**  2 ->  current */
   /**  PC_CONFIG_PARAMETER */
   U16   InputMode;

   /**  PC_CONFIG_PARAMETER */
   U16   DigThresLow;

   /**  PC_CONFIG_PARAMETER */
   U16   DigThresHigh;
   U16   uiCurrentInResetCounter;
   U16   uiStartCounter;

   /**  PC_DARC1_Get_Status */
   U16   Status;

   /**  PC_DARC1_Get_Digital */
   BOOL   DigIn;
}S_DAFRC3_INTERFACE_STRUCT_t;

typedef struct
{
   U32    Id;
   U32    Mask;
   U8     Data[8];
   U8     Length;
   BOOL   Tx;
   BOOL   Rx;
   BOOL   Overrun;
   BOOL   TransmitMode;
   BOOL   ReceiveMode;
   BOOL   ExtendedMode;
   BOOL   OverwriteProtect;
}CAN_INTERFACE_MSG_STRUCT;

typedef struct
{
   U32    Baudrate;
   BOOL   BusOff;
   BOOL   Reset;
   BOOL   DriverError;
   BOOL   DriverReset;
   BOOL   Overflow;
   BOOL   ErrorPassive;
   PORT   Port;
}S_CAN_INTERFACE_STRUCT_t;

typedef struct
{
   /**  PC_VLDP1_Get_Raw_Analog */
   U16   AnIn;

   /**  PC_VLDP1_Get_Analog_mVolts */
   U16   Voltage;
}S_VLDP_INTERFACE_STRUCT_t;

typedef struct
{
   /**  PC_DOUT14_Get_Output_FeedBack */
   BOOL   DigFeedBack;

   /**  PC_DOUT14_Set_Output */
   BOOL   DigOut;
}S_DOUT14_INTERFACE_STRUCT_t;

typedef struct
{
   U16    Len;
   BOOL   Tx;
   BOOL   Rdy;
   U8     Data[241];
}S_UART_TX_STRUCT_t;

typedef struct
{
   U16    Len;
   BOOL   Rx;
   BOOL   Clear;
   BOOL   Overflow;
   U8     Data[128];
}S_UART_RX_STRUCT_t;

typedef struct
{
   U32                  BaudrateOld;
   U32                  Baudrate;
   BOOL                 TwoStopBitsOld;
   BOOL                 TwoStopBits;
   S_UART_TX_STRUCT_t   TxMsg;
   S_UART_RX_STRUCT_t   RxMsg;
}S_UART4_INTERFACE_STRUCT_t;

/*** Misc Typedefs section END. ***/


/*** Externals section BEGIN: ***/
extern void InitExtFunc(void);
extern void ProcessExtFunc(void);
extern void InitBootFunc(void);
extern void ProcessBootFunc(void);

extern BOOL   _MAINTASKDisable;
#if defined(D_SAFETY_CRITICAL_STATIC_DATA)
extern BOOL   _MAINTASKDisableSafety;
#endif   // #if defined(D_SAFETY_CRITICAL_STATIC_DATA)
extern BOOL   _TestDone;

/**  The following 2 variables are used to start the system and set parameters without starting the application */
extern BOOL   _ApplicationDisableAfterReset;
extern BOOL   _ApplicationDisableAfterResetDone;

/**  End of start-up parameter adjustment */
extern U8   _SUsage;
extern U8   _SBACKTASKUsage;
extern S_DIAGNOSTIC_CONTROL_t             ServiceTool;
extern BOOL                               EEDirStoreOld;
extern U32                                EEUpdTime;
extern BOOL                               EEDirStore;
extern S_NV_STRUCT_t                      NVMem;
extern S_IDTYPE_STRUCT_t                  ID;
extern S_OSTYPE_STRUCT_t                  OS;
extern S_UNITVERSION_STRUCT_t             UnitVersion;
extern S_RTC_INTERFACE_STRUCT_t           RTC;
extern S_LCD1_INTERFACE_STRUCT_t          Display;
extern S_LIGHT1_INTERFACE_STRUCT_t        Ambient;
extern S_APPLOG_INTERFACE_STRUCT_t        AppLog;
extern S_BUTTON_INTERFACE_STRUCT_t        Button;
extern S_DISPLAY_LED_INTERFACE_STRUCT_t   Led;
extern S_DA1_INTERFACE_STRUCT_t           C1p06;
extern S_DA1_INTERFACE_STRUCT_t           C1p07;
extern S_DA3_INTERFACE_STRUCT_t           C1p05;
extern S_DAFRC3_INTERFACE_STRUCT_t        C1p10;
extern S_DAFRC3_INTERFACE_STRUCT_t        C1p11;
extern S_VLDP_INTERFACE_STRUCT_t          C1p02;
extern S_DOUT14_INTERFACE_STRUCT_t        C1p12;
extern S_UART4_INTERFACE_STRUCT_t         UART[1];

/*** Externals section END. ***/


/*** H:TAIL section BEGIN: ***/
extern S_CAN_INTERFACE_STRUCT_t   CAN[3];

/*** H:TAIL section END. ***/


#define NUMBER_D3_BUTTON_CHANNEL_CONFIG          (7U + 4U)
extern BOOL *const   g_KpSA_D3ButtonInPtr[NUMBER_D3_BUTTON_CHANNEL_CONFIG];
#define NUMBER_BUTTON_BACKLIGHT_CHANNEL_CONFIG   1
extern BOOL *const   g_KpSA_ButtonBacklightPtr[NUMBER_BUTTON_BACKLIGHT_CHANNEL_CONFIG];
#define NUMBER_LED2_DISPLAY_CHANNEL_CONFIG       6
extern BOOL *const   g_KpSA_LED2DisplayInPtr[NUMBER_LED2_DISPLAY_CHANNEL_CONFIG];
#define NUMBER_DA1_CHANNEL_CONFIG                2U
extern S_DA1_INTERFACE_STRUCT_t *const   g_KpSA_DA1InPtr[NUMBER_DA1_CHANNEL_CONFIG];
#define NUMBER_DA3_CHANNEL_CONFIG                1
extern S_DA3_INTERFACE_STRUCT_t *const   g_KpSA_DA3InPtr[NUMBER_DA3_CHANNEL_CONFIG];
#define NUMBER_D_A_R_C_CHANNEL_CONFIG            0U
#define NUMBER_DAFRC3_CHANNEL_CONFIG             2
extern S_DAFRC3_INTERFACE_STRUCT_t *const   g_KpSA_DAFRC3InPtr[NUMBER_DAFRC3_CHANNEL_CONFIG];
#define NUMBER_DAR1_CHANNEL_CONFIG               0U
#define NUMBER_D_A_R_CHANNEL_CONFIG              0U
#ifndef NUMBER_DAFR1_CHANNEL_CONFIG
 #define NUMBER_DAFR1_CHANNEL_CONFIG             0U
#endif
#define NUMBER_VLDP_CHANNEL_CONFIG               1
extern S_VLDP_INTERFACE_STRUCT_t *const   g_KpSA_VldpAdInPtr[NUMBER_VLDP_CHANNEL_CONFIG];
#define NUMBER_DOUT_CHANNEL_CONFIG               0
#define NUMBER_DOUT14_CHANNEL_CONFIG             (1u)
extern S_DOUT14_INTERFACE_STRUCT_t *const   g_KpSA_DOut14Ptr[NUMBER_DOUT14_CHANNEL_CONFIG];
#define D_BATTERY_INPUT_NUMBER                   0
#define NUMBER_SPI_CHIPSELECTS_CHANNEL_CONFIG    3
#define NUMBER_SERIAL_IO_CHANNEL_CONFIG          1
#define NUMBER_SHIFTREG_OUTPUT_CHANNEL_CONFIG    1
#define NUMBER_UART4_CHANNEL_CONFIG              1
extern S_UART4_INTERFACE_STRUCT_t *const   g_KpSA_UART4Ptr[NUMBER_UART4_CHANNEL_CONFIG];
#define NUMBER_SPI_CHANNEL_CONFIG                1
#define NUMBER_I2C_CHANNEL_CONFIG                1
#define NUMBER_RTC_CHANNEL_CONFIG                1
extern S_RTC_INTERFACE_STRUCT_t *const   g_KpSA_RTCPtr[NUMBER_RTC_CHANNEL_CONFIG];
#define NUMBER_LCD1_CHANNEL_CONFIG               1
extern S_LCD1_INTERFACE_STRUCT_t *const   g_KpSA_LCD1Ptr[NUMBER_LCD1_CHANNEL_CONFIG];
#define NUMBER_LIGHT1_CHANNEL_CONFIG             1
extern S_LIGHT1_INTERFACE_STRUCT_t *const   g_KpSA_LIGHT1Ptr[NUMBER_LIGHT1_CHANNEL_CONFIG];
#define _NUM_SAFETY_UART_                        +0
#endif /* ifndef _INTERFACE_H */
