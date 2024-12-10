#ifndef _DYNAMIC_DIAGNOSTICS_H
#define _DYNAMIC_DIAGNOSTICS_H
typedef struct {
	struct {
 U8 _SetDummy0;
	}SET;
struct {
 U16 Init_pulses;
 U16 Update_Mem_1_Cnt;
 U16 Batt_SN_rxAddVal;
 U16 Batt_SN_pendVal;
 U16 Batt_SN_setVal;
 U8 _CheckDummy1;
 U8 Log_Num_Ints;
 U8 Log_Val_7_U8;
 BOOL Update_Mem_1_Bool;
 BOOL Update_Log2_bool;
 BOOL Batt_SN_matchVal_nonZero;
 BOOL Addr_243_setBool;
 BOOL Addr_244_setBool;
 BOOL Addr_245_setBool;
 BOOL Addr_246_setBool;
 BOOL Addr_247_setBool;
 BOOL Addr_248_setBool;
 BOOL Addr_249_setBool;
 BOOL Addr_0_setBool;
 U8 Addr_pend;
 U8 Addr_set;
 U8 Log_head_inString;
 BOOL INIT_NV_CK;
 U8 Log_array_Ints1[161];
 U8 Log_array_Ints2[100];
 U8 Log_outArray[100];
 U16 len_LO_1;
 U8 LO_1[5000];
 U16 len_LO_2;
 U8 LO_2[5000];
}CHECK;
} TEST_T;
extern TEST_T _TEST;
#endif
