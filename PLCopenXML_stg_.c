//FILE: PLCopenXML_stg_.c
//IDL Type: CCP_STM32F7XX541
//IDL Name: PLCopenXML_stg_
//IDL Version: 010A
//IDL CheckSum: 222B69
//This file is automatically generated by RatatoskT3,
//so change it only if you know what you are doing...

//Head section:

//Generated code:

#include "PLCopenXML_stg_.h"

#define CCP_METHOD_DATA(x) CCP_METHOD.x
#define CCP_METHOD_ARRAY_LENGTH(x) CCP_METHOD.Lengths.x
#define CCP_METHOD_ARRAY_INDEX(x, y) CCP_METHOD.x[y]
#define CCP_SHARED SELF->SHARED
#define CCP_SHARED_DATA(x) SELF->SHARED->x
#define CCP_INST_DATA(x) SELF->x
#define CCP_ALIEN_DATA(x) SELF->ALIEN.x

St_ORGANIZE_INTS_Ccp_222B69_SHARED_TYPE St_ORGANIZE_INTS_Ccp_222B69_SHARED_INSTANCE;

#define CCP_METHOD SELF->St_ORGANIZE_INTS_Exec
void St_ORGANIZE_INTS_Ccp_St_ORGANIZE_INTS_Exec(St_ORGANIZE_INTS_Ccp * SELF)
{
  //
  extern U16 __RUNTIME_ERROR_FLAGS;
  __RUNTIME_ERROR_FLAGS = 0;
  CCP_METHOD_DATA(st_Return_ret) = p1Plc_func_ORGANIZE_INTS((BOOL*)0,  CCP_METHOD_DATA(st_FFD1_0_data),  CCP_METHOD_DATA(st_FFD1_0_update_data),  CCP_METHOD_DATA(st_FFD1_1_data),  CCP_METHOD_DATA(st_FFD1_1_update_data),  CCP_METHOD_DATA(st_FFD1_2_data),  CCP_METHOD_DATA(st_FFD1_2_update_data),  CCP_METHOD_DATA(st_FFD1_3_data),  CCP_METHOD_DATA(st_FFD1_3_update_data),  CCP_METHOD_DATA(st_FFD1_4_data),  CCP_METHOD_DATA(st_FFD1_4_update_data),  CCP_METHOD_DATA(st_FFD1_5_data),  CCP_METHOD_DATA(st_FFD1_5_update_data),  CCP_METHOD_DATA(st_FFD1_6_data),  CCP_METHOD_DATA(st_FFD1_6_update_data),  CCP_METHOD_DATA(st_FFD1_7_data),  CCP_METHOD_DATA(st_FFD1_7_update_data),  CCP_METHOD_DATA(st_FFD1_8_data),  CCP_METHOD_DATA(st_FFD1_8_update_data),  CCP_METHOD_DATA(st_FFD1_9_data),  CCP_METHOD_DATA(st_FFD1_9_update_data),  CCP_METHOD_DATA(st_FFD1_10_data),  CCP_METHOD_DATA(st_FFD1_10_update_data),  CCP_METHOD_DATA(st_FFD1_11_data),  CCP_METHOD_DATA(st_FFD1_11_update_data),  CCP_METHOD_DATA(st_FFD2_0_data),  CCP_METHOD_DATA(st_FFD2_0_update_data),  CCP_METHOD_DATA(st_FFD2_1_data),  CCP_METHOD_DATA(st_FFD2_1_update_data),  CCP_METHOD_DATA(st_FFD2_2_data),  CCP_METHOD_DATA(st_FFD2_2_update_data),  CCP_METHOD_DATA(st_FFD2_3_data),  CCP_METHOD_DATA(st_FFD2_3_update_data),  CCP_METHOD_DATA(st_FFD2_4_data),  CCP_METHOD_DATA(st_FFD2_4_update_data),  CCP_METHOD_DATA(st_FFD2_5_data),  CCP_METHOD_DATA(st_FFD2_5_update_data),  CCP_METHOD_DATA(st_FFD2_6_data),  CCP_METHOD_DATA(st_FFD2_6_update_data),  CCP_METHOD_DATA(st_FFD2_7_data),  CCP_METHOD_DATA(st_FFD2_7_update_data),  CCP_METHOD_DATA(st_FFD2_8_data),  CCP_METHOD_DATA(st_FFD2_8_update_data),  CCP_METHOD_DATA(st_FFD2_9_data),  CCP_METHOD_DATA(st_FFD2_9_update_data),  CCP_METHOD_DATA(st_FFD2_10_data),  CCP_METHOD_DATA(st_FFD2_10_update_data),  CCP_METHOD_DATA(st_FFD2_11_data),  CCP_METHOD_DATA(st_FFD2_11_update_data),  CCP_METHOD_DATA(st_FFD2_12_data),  CCP_METHOD_DATA(st_FFD2_12_update_data),  CCP_METHOD_DATA(st_FFD2_13_data),  CCP_METHOD_DATA(st_FFD2_13_update_data),  CCP_METHOD_DATA(st_FFD2_14_data),  CCP_METHOD_DATA(st_FFD2_14_update_data),  CCP_METHOD_DATA(st_FFD2_15_data),  CCP_METHOD_DATA(st_FFD2_15_update_data),  CCP_METHOD_DATA(st_FFD2_16_data),  CCP_METHOD_DATA(st_FFD2_16_update_data),  CCP_METHOD_DATA(st_FFD2_17_data),  CCP_METHOD_DATA(st_FFD2_17_update_data),  CCP_METHOD_DATA(st_FFD2_18_data),  CCP_METHOD_DATA(st_FFD2_18_update_data),  CCP_METHOD_DATA(st_FFD2_19_data),  CCP_METHOD_DATA(st_FFD2_19_update_data),  CCP_METHOD_DATA(st_FFD2_20_data),  CCP_METHOD_DATA(st_FFD2_20_update_data),  CCP_METHOD_DATA(st_FFD2_21_data),  CCP_METHOD_DATA(st_FFD2_21_update_data),  CCP_METHOD_DATA(st_FFD2_22_data),  CCP_METHOD_DATA(st_FFD2_22_update_data),  CCP_METHOD_DATA(st_FFD2_23_data),  CCP_METHOD_DATA(st_FFD2_23_update_data),  CCP_METHOD_DATA(st_FFD3_0_data),  CCP_METHOD_DATA(st_FFD3_1_data),  CCP_METHOD_DATA(st_FFD3_2_data),  CCP_METHOD_DATA(st_FFD3_3_data),  CCP_METHOD_DATA(st_FFD3_4_data),  CCP_METHOD_DATA(st_FFD3_5_data),  CCP_METHOD_DATA(st_FFD3_6_data),  CCP_METHOD_DATA(st_FFD3_7_data),  CCP_METHOD_DATA(st_FFD3_8_data),  CCP_METHOD_DATA(st_FFD3_9_data),  CCP_METHOD_DATA(st_FFD3_10_data),  CCP_METHOD_DATA(st_FFD3_11_data),  CCP_METHOD_DATA(st_FFD3_12_data),  CCP_METHOD_DATA(st_FFD3_13_data),  CCP_METHOD_DATA(st_FFD3_14_data),  CCP_METHOD_DATA(st_FFD3_15_data),  CCP_METHOD_DATA(st_FFD3_16_data),  CCP_METHOD_DATA(st_FFD3_17_data),  CCP_METHOD_DATA(st_FFD3_18_data),  CCP_METHOD_DATA(st_FFD3_19_data),  CCP_METHOD_DATA(st_FFD3_20_data),  CCP_METHOD_DATA(st_FFD3_21_data),  CCP_METHOD_DATA(st_FFD3_22_data),  CCP_METHOD_DATA(st_FFD3_23_data),  CCP_METHOD_DATA(st_FFD3_24_data),  CCP_METHOD_DATA(st_FFD3_25_data),  CCP_METHOD_DATA(st_FFD3_26_data),  CCP_METHOD_DATA(st_FFD3_27_data),  CCP_METHOD_DATA(st_FFD3_28_data),  CCP_METHOD_DATA(st_FFD3_29_data),  CCP_METHOD_DATA(st_FFD3_30_data),  CCP_METHOD_DATA(st_BIT_Status_update_data),  CCP_METHOD_DATA(st_init_NV_log_data),  CCP_METHOD_DATA(st_Org_ints_data), & CCP_METHOD_DATA(st_Number_of_ints_data), & CCP_METHOD_DATA(st_Update_memory_data));
   CCP_METHOD_DATA(st_RuntimeError_err) = __RUNTIME_ERROR_FLAGS;
  __RUNTIME_ERROR_FLAGS = 0;
}
#undef CCP_METHOD

St_LOG_STRING_Ccp_222B69_SHARED_TYPE St_LOG_STRING_Ccp_222B69_SHARED_INSTANCE;

#define CCP_METHOD SELF->St_LOG_STRING_Exec
void St_LOG_STRING_Ccp_St_LOG_STRING_Exec(St_LOG_STRING_Ccp * SELF)
{
  //
  extern U16 __RUNTIME_ERROR_FLAGS;
  __RUNTIME_ERROR_FLAGS = 0;
  CCP_METHOD_DATA(st_Return_ret) = p1Plc_func_LOG_STRING((BOOL*)0,  CCP_METHOD_DATA(st_Log_head_data),  CCP_METHOD_DATA(st_Scroll_head_data),  CCP_METHOD_DATA(st_Log_array_data),  CCP_METHOD_DATA(st_Log_test_data),  CCP_METHOD_DATA(st_Log_noMemStore_data),  CCP_METHOD_DATA(st_List_length_data),  CCP_METHOD_DATA(st_Log_outString_data).str_ref,  CCP_METHOD_DATA(st_adjusted_log_data), & CCP_METHOD_DATA(st_Made_it_here_data));
   CCP_METHOD_DATA(st_RuntimeError_err) = __RUNTIME_ERROR_FLAGS;
  __RUNTIME_ERROR_FLAGS = 0;
}
#undef CCP_METHOD

St_BLACKOUTTXT_Ccp_222B69_SHARED_TYPE St_BLACKOUTTXT_Ccp_222B69_SHARED_INSTANCE;

#define CCP_METHOD SELF->St_BLACKOUTTXT_Exec
void St_BLACKOUTTXT_Ccp_St_BLACKOUTTXT_Exec(St_BLACKOUTTXT_Ccp * SELF)
{
  //
  extern U16 __RUNTIME_ERROR_FLAGS;
  __RUNTIME_ERROR_FLAGS = 0;
  p1Plc_func_BLACKOUTTXT((BOOL*)0,  CCP_METHOD_DATA(st_BlkOutSet_data),  CCP_METHOD_DATA(st_BlkOutText_data).str_ref, CCP_METHOD_DATA(st_Return_ret).str_ref);
   CCP_METHOD_DATA(st_RuntimeError_err) = __RUNTIME_ERROR_FLAGS;
  __RUNTIME_ERROR_FLAGS = 0;
}
#undef CCP_METHOD

St_FAULTBITTEXT_Ccp_222B69_SHARED_TYPE St_FAULTBITTEXT_Ccp_222B69_SHARED_INSTANCE;

#define CCP_METHOD SELF->St_FAULTBITTEXT_Exec
void St_FAULTBITTEXT_Ccp_St_FAULTBITTEXT_Exec(St_FAULTBITTEXT_Ccp * SELF)
{
  //
  extern U16 __RUNTIME_ERROR_FLAGS;
  __RUNTIME_ERROR_FLAGS = 0;
  CCP_METHOD_DATA(st_Return_ret) = p1Plc_func_FAULTBITTEXT((BOOL*)0,  CCP_METHOD_DATA(st_Fault_Status_Bool_data),  CCP_METHOD_DATA(st_BIT_Status_Bool_data),  CCP_METHOD_DATA(st_Fault_Status_String_data).str_ref,  CCP_METHOD_DATA(st_BIT_Status_String_data).str_ref);
   CCP_METHOD_DATA(st_RuntimeError_err) = __RUNTIME_ERROR_FLAGS;
  __RUNTIME_ERROR_FLAGS = 0;
}
#undef CCP_METHOD

St_MEM_SORT_Ccp_222B69_SHARED_TYPE St_MEM_SORT_Ccp_222B69_SHARED_INSTANCE;

#define CCP_METHOD SELF->St_MEM_SORT_Exec
void St_MEM_SORT_Ccp_St_MEM_SORT_Exec(St_MEM_SORT_Ccp * SELF)
{
  //
  extern U16 __RUNTIME_ERROR_FLAGS;
  __RUNTIME_ERROR_FLAGS = 0;
  CCP_METHOD_DATA(st_Return_ret) = p1Plc_func_MEM_SORT((BOOL*)0,  CCP_METHOD_DATA(st_noMemStore_data),  CCP_METHOD_DATA(st_firstRunDone_data),  CCP_METHOD_DATA(st_Log_Val_0_data),  CCP_METHOD_DATA(st_Log_Val_1_data),  CCP_METHOD_DATA(st_Log_Val_2_data),  CCP_METHOD_DATA(st_Log_Val_3_data),  CCP_METHOD_DATA(st_Log_Val_4_data),  CCP_METHOD_DATA(st_Log_Val_5_data),  CCP_METHOD_DATA(st_Log_Val_6_data),  CCP_METHOD_DATA(st_Log_Val_7_data),  CCP_METHOD_DATA(st_Log_Val_8_data),  CCP_METHOD_DATA(st_Log_Val_9_data),  CCP_METHOD_DATA(st_Log_Val_10_data),  CCP_METHOD_DATA(st_Log_Val_11_data),  CCP_METHOD_DATA(st_Log_Val_12_data),  CCP_METHOD_DATA(st_Log_Val_13_data),  CCP_METHOD_DATA(st_Log_Val_14_data),  CCP_METHOD_DATA(st_Log_Val_15_data),  CCP_METHOD_DATA(st_Log_Val_16_data),  CCP_METHOD_DATA(st_Log_Val_17_data),  CCP_METHOD_DATA(st_Log_Val_18_data),  CCP_METHOD_DATA(st_Log_Val_19_data),  CCP_METHOD_DATA(st_Log_Val_20_data),  CCP_METHOD_DATA(st_Log_Val_21_data),  CCP_METHOD_DATA(st_Log_Val_22_data),  CCP_METHOD_DATA(st_Log_Val_23_data),  CCP_METHOD_DATA(st_Log_Val_24_data),  CCP_METHOD_DATA(st_Log_Val_25_data),  CCP_METHOD_DATA(st_Log_Val_26_data),  CCP_METHOD_DATA(st_Log_Val_27_data),  CCP_METHOD_DATA(st_Log_Val_28_data),  CCP_METHOD_DATA(st_Log_Val_29_data),  CCP_METHOD_DATA(st_Log_Val_30_data),  CCP_METHOD_DATA(st_Log_Val_31_data),  CCP_METHOD_DATA(st_Log_Val_32_data),  CCP_METHOD_DATA(st_Log_Val_33_data),  CCP_METHOD_DATA(st_Log_Val_34_data),  CCP_METHOD_DATA(st_Log_Val_35_data),  CCP_METHOD_DATA(st_Log_Val_36_data),  CCP_METHOD_DATA(st_Log_Val_37_data),  CCP_METHOD_DATA(st_Log_Val_38_data),  CCP_METHOD_DATA(st_Log_Val_39_data),  CCP_METHOD_DATA(st_Log_Val_40_data),  CCP_METHOD_DATA(st_Log_Val_41_data),  CCP_METHOD_DATA(st_Log_Val_42_data),  CCP_METHOD_DATA(st_Log_Val_43_data),  CCP_METHOD_DATA(st_Log_Val_44_data),  CCP_METHOD_DATA(st_Log_Val_45_data),  CCP_METHOD_DATA(st_Log_Val_46_data),  CCP_METHOD_DATA(st_Log_Val_47_data),  CCP_METHOD_DATA(st_Log_Val_48_data),  CCP_METHOD_DATA(st_Log_Val_49_data),  CCP_METHOD_DATA(st_Log_Val_50_data),  CCP_METHOD_DATA(st_Log_Val_51_data),  CCP_METHOD_DATA(st_Log_Val_52_data),  CCP_METHOD_DATA(st_Log_Val_53_data),  CCP_METHOD_DATA(st_Log_Val_54_data),  CCP_METHOD_DATA(st_Log_Val_55_data),  CCP_METHOD_DATA(st_Log_Val_56_data),  CCP_METHOD_DATA(st_Log_Val_57_data),  CCP_METHOD_DATA(st_Log_Val_58_data),  CCP_METHOD_DATA(st_Log_Val_59_data),  CCP_METHOD_DATA(st_Log_Val_60_data),  CCP_METHOD_DATA(st_Log_Val_61_data),  CCP_METHOD_DATA(st_Log_Val_62_data),  CCP_METHOD_DATA(st_Log_Val_63_data),  CCP_METHOD_DATA(st_Log_Val_64_data),  CCP_METHOD_DATA(st_Log_Val_65_data),  CCP_METHOD_DATA(st_Log_Val_66_data),  CCP_METHOD_DATA(st_Log_Val_67_data),  CCP_METHOD_DATA(st_Log_Val_68_data),  CCP_METHOD_DATA(st_Log_Val_69_data),  CCP_METHOD_DATA(st_Log_Val_70_data),  CCP_METHOD_DATA(st_Log_Val_71_data),  CCP_METHOD_DATA(st_Log_Val_72_data),  CCP_METHOD_DATA(st_Log_Val_73_data),  CCP_METHOD_DATA(st_Log_Val_74_data),  CCP_METHOD_DATA(st_Log_Val_75_data),  CCP_METHOD_DATA(st_Log_Val_76_data),  CCP_METHOD_DATA(st_Log_Val_77_data),  CCP_METHOD_DATA(st_Log_Val_78_data),  CCP_METHOD_DATA(st_Log_Val_79_data),  CCP_METHOD_DATA(st_Log_Val_80_data),  CCP_METHOD_DATA(st_Log_Val_81_data),  CCP_METHOD_DATA(st_Log_Val_82_data),  CCP_METHOD_DATA(st_Log_Val_83_data),  CCP_METHOD_DATA(st_Log_Val_84_data),  CCP_METHOD_DATA(st_Log_Val_85_data),  CCP_METHOD_DATA(st_Log_Val_86_data),  CCP_METHOD_DATA(st_Log_Val_87_data),  CCP_METHOD_DATA(st_Log_Val_88_data),  CCP_METHOD_DATA(st_Log_Val_89_data),  CCP_METHOD_DATA(st_Log_Val_90_data),  CCP_METHOD_DATA(st_Log_Val_91_data),  CCP_METHOD_DATA(st_Log_Val_92_data),  CCP_METHOD_DATA(st_Log_Val_93_data),  CCP_METHOD_DATA(st_Log_Val_94_data),  CCP_METHOD_DATA(st_Log_Val_95_data),  CCP_METHOD_DATA(st_Log_Val_96_data),  CCP_METHOD_DATA(st_Log_Val_97_data),  CCP_METHOD_DATA(st_Log_Val_98_data),  CCP_METHOD_DATA(st_Log_Val_99_data),  CCP_METHOD_DATA(st_List_head_data),  CCP_METHOD_DATA(st_List_length_data),  CCP_METHOD_DATA(st_Number_of_ints_data),  CCP_METHOD_DATA(st_Org_ints_data),  CCP_METHOD_DATA(st_Cur_log_data),  CCP_METHOD_DATA(st_Res_List_data), & CCP_METHOD_DATA(st_firstRunDoneOut_data), & CCP_METHOD_DATA(st_Log_head_data), & CCP_METHOD_DATA(st_Log_count_data),  CCP_METHOD_DATA(st_Log_array_data), & CCP_METHOD_DATA(st_MemSlotOut_1_data), & CCP_METHOD_DATA(st_MemSlotOut_2_data), & CCP_METHOD_DATA(st_MemSlotOut_3_data), & CCP_METHOD_DATA(st_MemSlotOut_4_data), & CCP_METHOD_DATA(st_MemSlotOut_5_data), & CCP_METHOD_DATA(st_MemSlotOut_6_data), & CCP_METHOD_DATA(st_MemSlotOut_7_data), & CCP_METHOD_DATA(st_MemSlotOut_8_data), & CCP_METHOD_DATA(st_MemSlotOut_9_data), & CCP_METHOD_DATA(st_MemSlotOut_10_data), & CCP_METHOD_DATA(st_MemSlotOut_11_data), & CCP_METHOD_DATA(st_MemSlotOut_12_data), & CCP_METHOD_DATA(st_MemSlotOut_13_data), & CCP_METHOD_DATA(st_MemSlotOut_14_data), & CCP_METHOD_DATA(st_MemSlotOut_15_data), & CCP_METHOD_DATA(st_MemSlotOut_16_data), & CCP_METHOD_DATA(st_MemSlotOut_17_data), & CCP_METHOD_DATA(st_MemSlotOut_18_data), & CCP_METHOD_DATA(st_MemSlotOut_19_data), & CCP_METHOD_DATA(st_MemSlotOut_20_data), & CCP_METHOD_DATA(st_MemSlotOut_21_data), & CCP_METHOD_DATA(st_MemSlotOut_22_data), & CCP_METHOD_DATA(st_MemSlotOut_23_data), & CCP_METHOD_DATA(st_MemSlotOut_24_data), & CCP_METHOD_DATA(st_MemSlotOut_25_data), & CCP_METHOD_DATA(st_MemSlotOut_26_data), & CCP_METHOD_DATA(st_MemSlotOut_27_data), & CCP_METHOD_DATA(st_MemSlotOut_28_data), & CCP_METHOD_DATA(st_MemSlotOut_29_data), & CCP_METHOD_DATA(st_MemSlotOut_30_data), & CCP_METHOD_DATA(st_MemSlotOut_31_data), & CCP_METHOD_DATA(st_MemSlotOut_32_data), & CCP_METHOD_DATA(st_MemSlotOut_33_data), & CCP_METHOD_DATA(st_MemSlotOut_34_data), & CCP_METHOD_DATA(st_MemSlotOut_35_data), & CCP_METHOD_DATA(st_MemSlotOut_36_data), & CCP_METHOD_DATA(st_MemSlotOut_37_data), & CCP_METHOD_DATA(st_MemSlotOut_38_data), & CCP_METHOD_DATA(st_MemSlotOut_39_data), & CCP_METHOD_DATA(st_MemSlotOut_40_data), & CCP_METHOD_DATA(st_MemSlotOut_41_data), & CCP_METHOD_DATA(st_MemSlotOut_42_data), & CCP_METHOD_DATA(st_MemSlotOut_43_data), & CCP_METHOD_DATA(st_MemSlotOut_44_data), & CCP_METHOD_DATA(st_MemSlotOut_45_data), & CCP_METHOD_DATA(st_MemSlotOut_46_data), & CCP_METHOD_DATA(st_MemSlotOut_47_data), & CCP_METHOD_DATA(st_MemSlotOut_48_data), & CCP_METHOD_DATA(st_MemSlotOut_49_data), & CCP_METHOD_DATA(st_MemSlotOut_50_data), & CCP_METHOD_DATA(st_MemSlotOut_51_data), & CCP_METHOD_DATA(st_MemSlotOut_52_data), & CCP_METHOD_DATA(st_MemSlotOut_53_data), & CCP_METHOD_DATA(st_MemSlotOut_54_data), & CCP_METHOD_DATA(st_MemSlotOut_55_data), & CCP_METHOD_DATA(st_MemSlotOut_56_data), & CCP_METHOD_DATA(st_MemSlotOut_57_data), & CCP_METHOD_DATA(st_MemSlotOut_58_data), & CCP_METHOD_DATA(st_MemSlotOut_59_data), & CCP_METHOD_DATA(st_MemSlotOut_60_data), & CCP_METHOD_DATA(st_MemSlotOut_61_data), & CCP_METHOD_DATA(st_MemSlotOut_62_data), & CCP_METHOD_DATA(st_MemSlotOut_63_data), & CCP_METHOD_DATA(st_MemSlotOut_64_data), & CCP_METHOD_DATA(st_MemSlotOut_65_data), & CCP_METHOD_DATA(st_MemSlotOut_66_data), & CCP_METHOD_DATA(st_MemSlotOut_67_data), & CCP_METHOD_DATA(st_MemSlotOut_68_data), & CCP_METHOD_DATA(st_MemSlotOut_69_data), & CCP_METHOD_DATA(st_MemSlotOut_70_data), & CCP_METHOD_DATA(st_MemSlotOut_71_data), & CCP_METHOD_DATA(st_MemSlotOut_72_data), & CCP_METHOD_DATA(st_MemSlotOut_73_data), & CCP_METHOD_DATA(st_MemSlotOut_74_data), & CCP_METHOD_DATA(st_MemSlotOut_75_data), & CCP_METHOD_DATA(st_MemSlotOut_76_data), & CCP_METHOD_DATA(st_MemSlotOut_77_data), & CCP_METHOD_DATA(st_MemSlotOut_78_data), & CCP_METHOD_DATA(st_MemSlotOut_79_data), & CCP_METHOD_DATA(st_MemSlotOut_80_data), & CCP_METHOD_DATA(st_MemSlotOut_81_data), & CCP_METHOD_DATA(st_MemSlotOut_82_data), & CCP_METHOD_DATA(st_MemSlotOut_83_data), & CCP_METHOD_DATA(st_MemSlotOut_84_data), & CCP_METHOD_DATA(st_MemSlotOut_85_data), & CCP_METHOD_DATA(st_MemSlotOut_86_data), & CCP_METHOD_DATA(st_MemSlotOut_87_data), & CCP_METHOD_DATA(st_MemSlotOut_88_data), & CCP_METHOD_DATA(st_MemSlotOut_89_data), & CCP_METHOD_DATA(st_MemSlotOut_90_data), & CCP_METHOD_DATA(st_MemSlotOut_91_data), & CCP_METHOD_DATA(st_MemSlotOut_92_data), & CCP_METHOD_DATA(st_MemSlotOut_93_data), & CCP_METHOD_DATA(st_MemSlotOut_94_data), & CCP_METHOD_DATA(st_MemSlotOut_95_data), & CCP_METHOD_DATA(st_MemSlotOut_96_data), & CCP_METHOD_DATA(st_MemSlotOut_97_data), & CCP_METHOD_DATA(st_MemSlotOut_98_data), & CCP_METHOD_DATA(st_MemSlotOut_99_data), & CCP_METHOD_DATA(st_MemSlotOut_100_data), & CCP_METHOD_DATA(st_Log_Val_1_update_data), & CCP_METHOD_DATA(st_Log_Val_2_update_data), & CCP_METHOD_DATA(st_Log_Val_3_update_data), & CCP_METHOD_DATA(st_Log_Val_4_update_data), & CCP_METHOD_DATA(st_Log_Val_5_update_data), & CCP_METHOD_DATA(st_Log_Val_6_update_data), & CCP_METHOD_DATA(st_Log_Val_7_update_data), & CCP_METHOD_DATA(st_Log_Val_8_update_data), & CCP_METHOD_DATA(st_Log_Val_9_update_data), & CCP_METHOD_DATA(st_Log_Val_10_update_data), & CCP_METHOD_DATA(st_Log_Val_11_update_data), & CCP_METHOD_DATA(st_Log_Val_12_update_data), & CCP_METHOD_DATA(st_Log_Val_13_update_data), & CCP_METHOD_DATA(st_Log_Val_14_update_data), & CCP_METHOD_DATA(st_Log_Val_15_update_data), & CCP_METHOD_DATA(st_Log_Val_16_update_data), & CCP_METHOD_DATA(st_Log_Val_17_update_data), & CCP_METHOD_DATA(st_Log_Val_18_update_data), & CCP_METHOD_DATA(st_Log_Val_19_update_data), & CCP_METHOD_DATA(st_Log_Val_20_update_data), & CCP_METHOD_DATA(st_Log_Val_21_update_data), & CCP_METHOD_DATA(st_Log_Val_22_update_data), & CCP_METHOD_DATA(st_Log_Val_23_update_data), & CCP_METHOD_DATA(st_Log_Val_24_update_data), & CCP_METHOD_DATA(st_Log_Val_25_update_data), & CCP_METHOD_DATA(st_Log_Val_init_update_data), & CCP_METHOD_DATA(st_Update_log_data), & CCP_METHOD_DATA(st_Update_length_data));
   CCP_METHOD_DATA(st_RuntimeError_err) = __RUNTIME_ERROR_FLAGS;
  __RUNTIME_ERROR_FLAGS = 0;
}
#undef CCP_METHOD


//Variables:

//Functions:

//Tail section:
