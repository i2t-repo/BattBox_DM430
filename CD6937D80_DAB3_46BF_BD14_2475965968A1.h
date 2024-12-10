#ifndef __CD6937D80_DAB3_46BF_BD14_2475965968A1
#define __CD6937D80_DAB3_46BF_BD14_2475965968A1
#include "_TextDefinitions.h"
typedef struct {
//io data
       U8 Input_N_Ver_Major;
       U8 Input_N_Ver_Minor;
       BOOL CD6937D80_DAB3_46BF_BD14_2475965968A1_Enable;
 // lokala data
 BOOL _t_3_bOld1;
 BOOL _t_3_dOld1;
 union __SDTSampleData sample1_3_f[3];
 union __SDTSampleData sample2_3_g[3];
 struct __SdtSampleString StrSmplStruct_3_h;
 struct __SdtTextInstance textinst_3_e[2];
} _CD6937D80_DAB3_46BF_BD14_2475965968A1_type;
void _CD6937D80_DAB3_46BF_BD14_2475965968A1(_CD6937D80_DAB3_46BF_BD14_2475965968A1_type *instanceStruct);
void _INITCD6937D80_DAB3_46BF_BD14_2475965968A1(_CD6937D80_DAB3_46BF_BD14_2475965968A1_type *instanceStruct);
#endif
