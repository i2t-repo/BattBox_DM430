#include "header.h"
#define _ApplogStartSector 0
static const U16 ApplTextArray[] ={
/*<INF>
<Application>TENK_DM430</Application>
<Port>
<N>ROPPort</N>
</Port>
<Set>DYNAMICNV=1</Set>
<Set>ADDRESSMODE=LSBFIRST</Set>
<Set>ADDRESS_SIZE=16</Set>
<Set>MIN_DATASIZE=8</Set>
<STR>
<S n="LO_1" t="C"/>
<S n="LO_2" t="C"/>
</STR>
</INF>
<APP>
U16 Init_pulses C;
U16 Update_Mem_1_Cnt C;
U16 Batt_SN_rxAddVal C;
U16 Batt_SN_pendVal C;
U16 Batt_SN_setVal C;
U8 _SetDummy0 SHH;
U8 _CheckDummy1 CH;
U8 Log_Num_Ints C;
U8 Log_Val_7_U8 C;
BOOL Update_Mem_1_Bool C;
BOOL Update_Log2_bool C;
BOOL Batt_SN_matchVal_nonZero C;
BOOL Addr_243_setBool C;
BOOL Addr_244_setBool C;
BOOL Addr_245_setBool C;
BOOL Addr_246_setBool C;
BOOL Addr_247_setBool C;
BOOL Addr_248_setBool C;
BOOL Addr_249_setBool C;
BOOL Addr_0_setBool C;
U8 Addr_pend C;
U8 Addr_set C;
U8 Log_head_inString C;
BOOL INIT_NV_CK C;
U8 Log_array_Ints1[0-160] C;
U8 Log_array_Ints2[0-99] C;
U8 Log_outArray[0-99] C;
U16 len_LO_1 H;
U8 LO_1[0-4999] H;
U16 len_LO_2 H;
U8 LO_2[0-4999] H;
U8 LogListHead NW;
U8 LogListLength NW;
U32 Log_1 NW;
U32 Log_2 NW;
U32 Log_3 NW;
U32 Log_4 NW;
U32 Log_5 NW;
U32 Log_6 NW;
U32 Log_7 NW;
U32 Log_8 NW;
U32 Log_9 NW;
U32 Log_10 NW;
U32 Log_11 NW;
U32 Log_12 NW;
U32 Log_13 NW;
U32 Log_14 NW;
U32 Log_15 NW;
U32 Log_16 NW;
U32 Log_17 NW;
U32 Log_18 NW;
U32 Log_19 NW;
U32 Log_20 NW;
U32 Log_21 NW;
U32 Log_22 NW;
U32 Log_23 NW;
U32 Log_24 NW;
U32 Log_25 NW;
U16 Batt_SN NW;
</APP>
*/
0xBE17
,0x0052
,0x0000
,0x0000
,0x0000
,0x0513
,0x0000
,0x75E4
,0x5D7B
,0x562E
,0x372F
,0x7BF9
,0xFAF8
,0xFDFB
,0x17A0
,0xBFBF
,0x0FD6
,0xA383
,0xD787
,0xF4F5
,0x3C3B
,0xFE0D
,0xA6F2
,0x54EE
,0x5F2F
,0x73B9
,0xBAFE
,0x35A7
,0x9D2A
,0xDDEE
,0x6854
,0x6A2A
,0x72CA
,0x1E4F
,0x14A6
,0xFCEF
,0x4966
,0xE567
,0x0287
,0x13CB
,0x0F9F
,0x938B
,0xA2BD
,0xF074
,0x0043
,0x8315
,0x1D0A
,0xB425
,0x88D3
,0xED13
,0x93B9
,0x46EC
,0x61E7
,0x743B
,0xBEC5
,0x3D2C
,0xC468
,0x342F
,0x9246
,0x2C5C
,0x6610
,0xAE2A
,0x622E
,0xF442
,0xC321
,0x4B3C
,0x2239
,0x0DEA
,0x0990
,0xB8AC
,0xAE7F
,0x4E86
,0x63ED
,0x7C73
,0xD0C2
,0xB4CA
,0xFE26
,0xDF12
,0x842D
,0x4C8E
,0x562B
,0x1E6D
,0xA54A
,0x0B6F
,0xC457
,0x2307
,0x4140
,0x6808
,0xD437
,0x7279
,0x8615
,0xE4F8
,0x2A02
,0x7D2A
,0x6517
,0x240F
,0x9154
,0x4253
,0x3A45
,0xA9B3
,0x68A1
,0xE810
,0xC973
,0x758F
,0x104B
,0xFF28
,0x507E
,0x17F1
,0x5BA0
,0xBFEF
,0xE02A
,0xEFA8
,0x9BFD
,0x1C85
,0xF8BB
,0x81E0
,0xA016
,0xE17D
,0xAD11
,0x74F8
,0x5910
,0x4790
,0x907A
,0xC57B
,0xC03E
,0x8398
,0xE876
,0xEC12
,0x91F0
,0x9FFB
,0x4F89
,0xF5C1
,0x46C8
,0x807F
,0xC847
,0xFD83
,0x0096
,0xEFA1
,0x9EC9
,0xB02D
,0xAE8D
,0x5E9C
,0x31E3
,0x3325
,0xC32A
,0xC819
,0x6056
,0x9C24
,0xEEC2
,0x2E27
,0x1CAC
,0x90F1
,0x23E1
,0xEE7E
,0xFAFA
,0x674F
,0x607D
,0xD4FE
,0xE24B
,0x1F9B
,0xA65F
,0xC383
,0x8F64
,0x0BDE
,0xCCE6
,0xEC42
,0x089F
,0x635F
,0x2E28
,0xDC11
,0xD817
,0x179A
,0x9E04
,0xFC0C
,0x716D
,0x356F
,0x2026
,0x92AF
,0xEAFE
,0x7407
,0x651B
,0xDCAB
,0xF4FA
,0xA29A
,0xA3A9
,0xEDDE
,0x424A
,0x547D
,0xB488
,0x4EC3
,0x6557
,0xFF4B
,0x94AF
,0xB751
,0xBE16
,0x7124
,0xAD2F
,0xFE6A
,0x8EB2
,0xF8FE
,0xD269
,0x6F70
,0xD0D1
,0x66DF
,0x90D2
,0xD86B
,0x767D
,0x1C73
,0x0BC7
,0xF1BE
,0xCB4C
,0x185D
,0x0382
,0x6A86
,0x41D5
,0x83AA
,0x3BDE
,0x8E4E
,0x0834
,0x10D8
,0x5540
,0x2608
,0xDB25
,0x0862
,0x4C9C
,0x256C
,0xB575
,0xFCD0
,0xFE5E
,0xC8BE
,0x3C46
,0xDDB5
,0xC9EB
,0x4E30
,0x8CD2
,0xC1CE
,0x306F
,0xD465
,0xCD60
,0xC008
,0x18C7
,0x9E01
,0xC00C
,0x47C8
,0x2B83
,0x06D6
,0xC276
,0x6F0C
,0x96D9
,0x6293
,0xD420
,0x0D33
,0x638C
,0xF511
,0x2C06
,0x4C30
,0xEA6A
,0xF898
,0xECCB
,0xDC60
,0x4D86
,0x99C6
,0x2658
,0xE765
,0xCB74
,0xF23B
,0xE0A3
,0xD232
,0xCBA0
,0xD37A
,0xE42D
,0x5DA6
,0xD4D9
,0x1D8C
,0x788D
,0x8A16
,0x0040
};
static const U32 ApplAddrArray[59] =
{
  (U32)&_TEST.CHECK.Init_pulses,
  (U32)&_TEST.CHECK.Update_Mem_1_Cnt,
  (U32)&_TEST.CHECK.Batt_SN_rxAddVal,
  (U32)&_TEST.CHECK.Batt_SN_pendVal,
  (U32)&_TEST.CHECK.Batt_SN_setVal,
  (U32)&_TEST.SET._SetDummy0,
  (U32)&_TEST.CHECK._CheckDummy1,
  (U32)&_TEST.CHECK.Log_Num_Ints,
  (U32)&_TEST.CHECK.Log_Val_7_U8,
  (U32)&_TEST.CHECK.Update_Mem_1_Bool,
  (U32)&_TEST.CHECK.Update_Log2_bool,
  (U32)&_TEST.CHECK.Batt_SN_matchVal_nonZero,
  (U32)&_TEST.CHECK.Addr_243_setBool,
  (U32)&_TEST.CHECK.Addr_244_setBool,
  (U32)&_TEST.CHECK.Addr_245_setBool,
  (U32)&_TEST.CHECK.Addr_246_setBool,
  (U32)&_TEST.CHECK.Addr_247_setBool,
  (U32)&_TEST.CHECK.Addr_248_setBool,
  (U32)&_TEST.CHECK.Addr_249_setBool,
  (U32)&_TEST.CHECK.Addr_0_setBool,
  (U32)&_TEST.CHECK.Addr_pend,
  (U32)&_TEST.CHECK.Addr_set,
  (U32)&_TEST.CHECK.Log_head_inString,
  (U32)&_TEST.CHECK.INIT_NV_CK,
  (U32)&_TEST.CHECK.Log_array_Ints1[0],
  (U32)&_TEST.CHECK.Log_array_Ints2[0],
  (U32)&_TEST.CHECK.Log_outArray[0],
  (U32)&_TEST.CHECK.len_LO_1,  (U32)&_TEST.CHECK.LO_1[0],
  (U32)&_TEST.CHECK.len_LO_2,  (U32)&_TEST.CHECK.LO_2[0],
  (U32)&_NVINT[0],
  (U32)&_NVINT[52],
  (U32)&_NVINT[50],
  (U32)&_NVINT[38],
  (U32)&_NVINT[8],
  (U32)&_NVINT[4],
  (U32)&_NVINT[16],
  (U32)&_NVINT[48],
  (U32)&_NVINT[14],
  (U32)&_NVINT[2],
  (U32)&_NVINT[6],
  (U32)&_NVINT[44],
  (U32)&_NVINT[42],
  (U32)&_NVINT[46],
  (U32)&_NVINT[10],
  (U32)&_NVINT[24],
  (U32)&_NVINT[18],
  (U32)&_NVINT[36],
  (U32)&_NVINT[12],
  (U32)&_NVINT[40],
  (U32)&_NVINT[20],
  (U32)&_NVINT[22],
  (U32)&_NVINT[32],
  (U32)&_NVINT[28],
  (U32)&_NVINT[26],
  (U32)&_NVINT[30],
  (U32)&_NVINT[34],
  (U32)&_NVINT[1]
};
 _APPL_DIAG_INFO(2,1)
 APPL_WRITE_RANGE_START
 APPL_WRITE_RANGE_VAR(_TEST.SET)
 APPL_WRITE_RANGE_END
