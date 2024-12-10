/*!
 @file   HWConfigDM430E.h

 <hr>
 <h2> File Creation </h2>
 @author jbendixen

 @date   18.01.2011 - 11:17:45

 @caliberrm alm://caliberrm!amsapp21.dmz.int_20000_250/38420;ns=requirement

 @brief  Macros for hardware configuration
 

 <hr>
 <h2> Current Revision </h2>  <!-- This section will be filled by SVN at committing -->
 $Revision:$
 $Author:$
 $Date:$
 $HeadURL:$

 
 <hr>
 <h2> History </h2>
 @verbatim
 Vers:  Date:        Name:        Comment:
 -----  ----------   -------      ------------------------------------------------
 00.00  18.01.2011   jbendixen    Initial start
 00.01  18.07.2014   grogers      Code review #750 do to #627, added #define D_U16_MF_IN_MODE_MASK
 00.02  24.07.2014   rwolf        Code review #750
 00.03  25.07.2014   grogers      Code review #627, merged in changes from Code Review #750, committed
 00.04  04.08.2014   grogers      Code review #627, added D_CURRENTINPUT_OVERCURRENT_TURN_ON
 00.05  24Oct2016    mroggon      P1McX00000506
 -----  ----------   -------      ------------------------------------------------
 @endverbatim

 &copy; Danfoss Power Solutions , 2018
 */
 
#ifndef __HWCONFIGDM430E_H__
#define __HWCONFIGDM430E_H__


/*-------------------------------------------------------
   Include files
   -------------------------------------------------------*/


/*-------------------------------------------------------
   Definitions
   -------------------------------------------------------*/
/*
 *  DAF4_unit scale
 */
#define DAF4_R1_zyx		(1841UL)
#define DAF4_R2_zyx		(511UL)

#define D_R1_zyx (100U)
#define D_R2_zyx (133U)
#define D_R3_zyx (1000U)
#define D_R4_zyx (93U)
#define D_R5_zyx (200U)

#define D_OP_DEVIDER_10 (143U)
#define D_OP_FACTOR_LIHGHT1 (2U)
#define D_AD_RESOLUTION ((1024U*32U)-1U)

// macro to calculate digits to mv
#define D_LOCAL_DIG2MV(x) ((((U32)(x))*3300UL)/(U32)D_AD_RESOLUTION)
#define D_DIG2MV(x) ((U16)D_LOCAL_DIG2MV(x))

// macro to calculate supply voltage digits to mv
#define D_SUPDIGIT2SENSMV(x) ((U16)D_LOCAL_SUP_FACTORDIG2MV(x))

/* macro to calculate DAF4_ voltage (digits to mv) */
#define D_DAF4DIGIT2MV(x) (((U32)D_DIG2MV(x) * DAF4_R1_zyx)/DAF4_R2_zyx)

// macro to calculate sensor power voltage digits to mv
//#define D_SENPDIGIT2SENSMV(x) (((U32)D_LOCAL_DIG2MV(x)*125UL)/10UL)
#define D_SENPDIGIT2SENSMV(x) (D_SUP_FACTORDIG2MV(x))

#define D_LOCAL_SENS_FACTORDIG2MV(x) (((((U32)(x)*330UL*(U32)(D_R1_zyx+D_R2_zyx))/D_R2_zyx)*10UL)/D_AD_RESOLUTION)

// macro to calculate scaled digits to mv for 5,25 V range
#define D_SENS_FACTORDIG2MV(x) ((U16)D_LOCAL_SENS_FACTORDIG2MV(x))

// macro to calculate scaled digits to mv for supply Volt range
#define D_LOCAL_SUP_FACTORDIG2MV(x) ((((((((U32)330UL*(D_R3_zyx+D_R4_zyx))/D_R4_zyx))*(x))/D_AD_RESOLUTION))*10U)
#define D_SUP_FACTORDIG2MV(x) ((U16)D_LOCAL_SUP_FACTORDIG2MV(x))

// macro to calculate scaled digits to mv for 5,25 V range with op active
#define D_SENS_FACTORDIG2MV_OP(x)	 ((U16)((D_LOCAL_SENS_FACTORDIG2MV(x)*10UL)/D_OP_DEVIDER_10))

// macro to calculate scaled digits to mv for supply Volt range	with op active
#define D_SUP_FACTORDIG2MV_OP(x) ((U16)((D_LOCAL_SUP_FACTORDIG2MV(x)*10UL)/D_OP_DEVIDER_10))

// macro to calculate scaled digits to mv for supply Volt range	with op active
#define D_SENS_FACTOR_LIGHT1_OP(x) ((U16)((D_LOCAL_DIG2MV(x))/D_OP_FACTOR_LIHGHT1))

#define D_DAC_RESOLUTION (4095U)

// macro to calculate DAC value for sensor power
#define D_DAC_CALC(x) ((U16)(((U32)(x)* D_DAC_RESOLUTION)/15000U))

/* Clamp value for the max measured resistor value */
#define D_RHEOSTAT_MAX_OHM (10000U)
//#define D_RHEO_AD_LIMIT (3796U*8U)
#define D_RHEO_AD_LIMIT (3450U*8U)
/* value of RHEO resistor */
#define D_RHEO_OHM (1330U)
#define D_RHEO_CALC(x)  (U16)(((((U32)(D_R1_zyx+D_R2_zyx))*D_RHEO_OHM)*1000U) / ((((((((((U32)5U*D_AD_RESOLUTION)*D_R2_zyx)*100U)/33U)/(x))*100U)-D_RHEO_OHM)-((U32)D_R1_zyx*1000U))-((U32)D_R2_zyx*1000U)))


#define D_DIG2UA(x) ((U32)(((U32)(((U32)((U32)(((U32)((((U32)D_R1_zyx*100U)+((U32)D_R2_zyx*100U))*(U32)(x))/(U32)D_R5_zyx)*10U)+(U32)(x))*33U)/D_R2_zyx)*100U)/D_AD_RESOLUTION))
#define D_DIG2UASP(x) ((U32)((((U32)(((U32)((U32)((((U32)(((U32)D_R3_zyx*100U)+((U32)D_R4_zyx*100U))*(U32)(x))/(U32)D_R5_zyx)*10U)+(U32)(x))*33U)/D_R4_zyx)*10U)/D_AD_RESOLUTION)*10U))


#define D_CONFIG_ERROR_NOERROR           	(0x0000U)
#define D_CONFIG_ERROR_GENERIC_ERROR     	(0x0001U)  /* BIT 0 */
#define D_CONFIG_ERROR_BIAS              	(0x0002U)  /* BIT 1 */
#define D_CONFIG_ERROR_RANGE             	(0x0004U)  /* BIT 2 */
#define D_CONFIG_ERROR_MODE              	(0x0008U)  /* BIT 3 */
#define D_CONFIG_OVERCURRENT             	(0x0010U)  /* BIT 4 */


#define D_STATUS_ERROR_GENERIC_ERROR     	(0x0004U)  /* BIT 2 */
#define D_STATUS_ERROR_OVERTEMP          	(0x0008U)  /* BIT 3 */
#define D_STATUS_ERROR_OVERLOAD          	(0x0010U)  /* BIT 4 */
#define D_STATUS_ERROR_MODE_CFG        		(0x0020U)  /* BIT 5 */
#define D_STATUS_ERROR_SAFETY            	(0x0040U)  /* BIT 6 */
#define D_STATUS_SAFE_FET_OFF            	(0x0080U)  /* BIT 7 */
#define D_STATUS_PWR_SUPPLY_OUT_OF_RANGE    (0x0100U)  /* BIT 8 */


/*lint -esym(758, PD_PU) */ /* do not complain about not used enum */
enum PD_PU
{
   E_NOPD_NOPU = 0,
   E_NOPD_PU,
   E_PD_NOPU,
   E_PD_PU
};

/*lint -esym(758, BATT) */ /* do not complain about not used enum */
enum BATT
{
   E_NO_BATT = 0,
   E_BATT,
   E_LOW
};

/*lint -esym(758, FREQ) */ /* do not complain about not used enum */
enum FREQ
{
   E_HIGHFREQ_NOBATT  = 0,
   E_HIGHFREQ_BATT,
   E_LOWFREQ_NOBATT,
   E_LOWFREQ_BATT
};

/*lint -esym(758, MF_IN_MODES) */ /* do not complain about not used enum */
enum MF_IN_MODES
{
	E_MODE_INPUT        = 0U,
	E_MODE_RESISTANCE   = 1U,
    E_MODE_CURRENT      = 2U,
    E_MODE_QUADENC      = 3U,
    E_MODE_PHASE        = 4U,
    E_MODE_5            = 5U, /* not used */
    E_MODE_6            = 6U, /* not used */
    E_MODE_REFERENCE    = 7U,
    E_MODE_NOFREQFILTER = 0x100U
};
#define D_U16_MF_IN_MODE_MASK       ((U16) 0x00FFU)      // all bits less than MODE_NOFREQFILTER

#define D_CURRENTINPUT_RESET_TIME_MS  (5400U)
#define D_CURRENTINPUT_OVERCURRENT    (24000U)
#define D_CURRENTINPUT_OVERCURRENT_TURN_ON    (D_CURRENTINPUT_OVERCURRENT * 6U)     // 6 times normal, during initial turn on period
#define D_CURRENTINPUT_STARTTIME_MS   (100U)


#define D_VALVE_RESET_TIME_MS 		  (250U)
#define D_REDUNDANT_FETS_OFF_TIMES_MS (250U)
#define D_CURRENT_PWM_DEFAULT_FREQ 	  (1000U)

/*lint -esym(758, MF_OUT_MODES) */ /* do not complain about not used enum */
enum MF_OUT_MODES{
E_DIG_OUT_PP                = 0,
E_DIG_OUT_SOURCE            = 1,
E_DIG_OUT_SINK              = 2,
E_PWM_OPEN_LOOP             = 3,
E_PWM_CLOSED_LOOP           = 4,
E_PWM_CLOSED_LOOP_DITHER    = 5,
E_PVE_OUT                   = 6,
E_EGAS_OUT                  = 7,
E_PWM_CLOSED_LOOP_DITHER_BI = 8,
E_PVE_PWR                   = 10

};
#define D_REDUNDANT_FETS_STATE_INIT  (0U)
#define D_REDUNDANT_FETS_STATE_OFF   (1U)
#define D_REDUNDANT_FETS_STATE_TRANS (2U)
#define D_REDUNDANT_FETS_STATE_ON    (3U)
#define D_REDUNDANT_FETS_STATE_WAIT_FOR_DIGOUT_ON (4U)

#define D_DIG_SWTICH_HYST_MV      (100U)
#define D_DIGIN_TRESHIGH_MV       (3000U)
#define D_DIGIN_TRESLOW_MV        (2000U)

/*-------------------------------------------------------
   Type definitions
   -------------------------------------------------------*/


/*-------------------------------------------------------
   Variables
   -------------------------------------------------------*/


/*-------------------------------------------------------
   prototype functions
   -------------------------------------------------------*/


/*-------------------------------------------------------
   functions
   -------------------------------------------------------*/


#endif /* __HYDRAHWCONFIG_H__ */
