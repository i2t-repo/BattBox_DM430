/*Danfoss PLUS+1 GUIDE Software: [ChParGU2] Version: 2023.1.4*/
/*Type: Express       */
/*Id: 28120       */
/*Sub ID: 0       */
/*Maintenance until:  1-Jul-2024       */
/*Time limit: 30-Jun-2025       */
/*       */
/*       */
#include "header.h"
#ifdef R1
  //This is a workaround for HWD error: P1McX00000506:
  #undef R1
#endif
#include "PLCopenXML_stg_.h"
#include "CD6937D80_DAB3_46BF_BD14_2475965968A1.h"
#include "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.h"
#include "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.h"
#include "C27B4991C_F926_43DC_8BF2_62959109410F.h"
#include "_TextDefinitions.h"
static St_FAULTBITTEXT_Ccp i__330e6c97_134c_4126_bedc_2d3b4fd6b1cd;
static St_ORGANIZE_INTS_Ccp i__330e7d66_5afe_8b8d_7143_95819c746d3c;
static St_MEM_SORT_Ccp i__330e7d59_5ac7_69af_3965_5e7cc50052d5;
static St_BLACKOUTTXT_Ccp i__2934466b_3ea3_1c1a_16cf_b0e409d969b6;
static St_LOG_STRING_Ccp i__293445e9_3c79_496b_eb21_88bba84c5db5;
       U8 _OPT_MAINTASK_123_f[241];
static void _FNC_123_b(void);
static BOOL aN183;
static BOOL aN165;
static BOOL aN164;
static BOOL aN149;
static BOOL aN155;
static BOOL aN154;
static BOOL aN655;
static U8 aN656;
static BOOL aN160;
static BOOL aN161;
static BOOL aN162;
static BOOL aN163;
static BOOL aN670;
static _CANSYM_RX_T _CAN_MAINTASK__123_c;
static BOOL aN668;
static BOOL aN396;
static _CANSYM_RX_T _CAN_MAINTASK__123_d;
static _CANSYM_RX_T _CAN_MAINTASK__123_e;
static _CANSYM_RX_T _CAN_MAINTASK__123_f;
static _CANSYM_RX_T _CAN_MAINTASK__123_g;
static _CANSYM_RX_T _CAN_MAINTASK__123_h;
static _CANSYM_RX_T _CAN_MAINTASK__123_i;
static _CANSYM_RX_T _CAN_MAINTASK__123_j;
static _CANSYM_RX_T _CAN_MAINTASK__123_k;
static void _FNC_123_l(void);
static U8 aN340;
static U8 aN339;
static U8 aN338;
static U8 aN337;
static U8 aN336;
static U8 aN335;
static U8 aN334;
static U8 aN333;
static U8 aN332;
static U8 aN331;
static U8 aN330;
static U8 aN329;
static U8 aN328;
static U8 aN327;
static U8 aN326;
static U8 aN325;
static U8 aN324;
static U8 aN323;
static U8 aN322;
static U8 aN321;
static U8 aN320;
static U8 aN319;
static U8 aN318;
static U8 aN317;
static U8 aN316;
static U8 aN315;
static U8 aN314;
static U8 aN313;
static U8 aN312;
static U8 aN311;
static U8 aN310;
static BOOL aN644;
static BOOL aN253;
static BOOL aN203;
static BOOL aN202;
static BOOL aN201;
static BOOL aN200;
static BOOL aN199;
static BOOL aN198;
static BOOL aN197;
static BOOL aN205;
static BOOL aN252;
static BOOL aN196;
static BOOL aN195;
static BOOL aN204;
static BOOL aN242;
static BOOL aN243;
static BOOL aN244;
static BOOL aN245;
static BOOL aN227;
static BOOL aN228;
static BOOL aN229;
static BOOL aN233;
static BOOL aN230;
static BOOL aN240;
static BOOL aN241;
static BOOL aN239;
static U8 aN248;
static BOOL aN226;
static BOOL aN225;
static BOOL aN224;
static BOOL aN223;
static BOOL aN231;
static BOOL aN232;
static BOOL aN220;
static BOOL aN207;
static BOOL aN247;
static U16 aN216;
static S32 aN222;
static U32 aUN251;
static U16 aUN230;
static PLC_STRING_REF  aN193;
static PLC_STRING_REF  aN192;
static BOOL aN358;
static BOOL aN357;
static BOOL aN354;
static BOOL aN353;
static BOOL aN351;
static BOOL aN308;
static BOOL aN306;
static U8 aN359;
static U8 aN356;
static U8 aN355;
static U8 aN352;
static U8 aN350;
static U8 aN305;
static U8 aN309;
static U8 aN365;
static U8 aN363;
static U8 aN361;
static BOOL aN364;
static BOOL aN362;
static BOOL aN360;
static BOOL aN283;
static BOOL aN286;
static BOOL aN288;
static BOOL aN289;
static BOOL aN282;
static BOOL aN300;
static BOOL aN297;
static BOOL aN295;
static BOOL aN293;
static BOOL aN301;
static BOOL aN304;
static void _FNC_123_m(void);
static BOOL aN390;
static BOOL aN627;
static U8 aN393;
static U8 aN622;
static U8 aN497;
static U8 aN496;
static U8 aN495;
static U8 aN494;
static U8 aN493;
static U8 aN492;
static U8 aN491;
static U8 aN489;
static U8 aN488;
static U8 aN487;
static U8 aN486;
static U8 aN485;
static U8 aN484;
static U8 aN483;
static U8 aN482;
static U8 aN481;
static U8 aN480;
static U8 aN479;
static U8 aN478;
static U8 aN398;
static U8 aN399;
static U8 aN400;
static U8 aN401;
static U8 aN402;
static U8 aN403;
static U8 aN404;
static U8 aN405;
static U8 aN406;
static U8 aN407;
static U8 aN408;
static U8 aN409;
static U8 aN410;
static U8 aN411;
static U8 aN412;
static U8 aN413;
static U8 aN414;
static U8 aN415;
static U8 aN416;
static U8 aN417;
static U8 aN458;
static U8 aN459;
static U8 aN460;
static U8 aN461;
static U8 aN462;
static U8 aN463;
static U8 aN464;
static U8 aN465;
static U8 aN466;
static U8 aN467;
static U8 aN468;
static U8 aN469;
static U8 aN470;
static U8 aN471;
static U8 aN472;
static U8 aN473;
static U8 aN474;
static U8 aN475;
static U8 aN476;
static U8 aN477;
static U16 aUN1011;
static U16 aUN1013;
static U16 aUN1012;
static U16 aUN1018;
static U16 aUN1017;
static U16 aUN1023;
static U16 aUN1022;
static U16 aUN1028;
static U16 aUN1027;
static U8 aN418;
static U8 aN419;
static void _FNC_123_n(void);
static U8 aN394;
static U8 aN625[100];
static U8 aN507;
static U8 aN508;
static U8 aN509;
static U8 aN510;
static U8 aN511;
static U8 aN512;
static U8 aN513;
static U8 aN514;
static U8 aN515;
static U8 aN516;
static U8 aN517;
static U8 aN518;
static U8 aN519;
static U8 aN520;
static U8 aN521;
static U8 aN522;
static U8 aN523;
static U8 aN524;
static U8 aN525;
static U8 aN526;
static U8 aN527;
static U8 aN528;
static U8 aN529;
static U8 aN530;
static U8 aN531;
static U8 aN532;
static U8 aN533;
static U8 aN534;
static U8 aN535;
static U8 aN536;
static U8 aN537;
static U8 aN538;
static U8 aN539;
static U8 aN540;
static U8 aN541;
static U8 aN542;
static U8 aN543;
static U8 aN544;
static U8 aN545;
static U8 aN546;
static U8 aN547;
static U8 aN548;
static U8 aN549;
static U8 aN550;
static U8 aN556;
static U8 aN557;
static U8 aN558;
static U8 aN559;
static U8 aN560;
static U8 aN561;
static U8 aN562;
static U8 aN563;
static U8 aN564;
static U8 aN565;
static U8 aN566;
static U8 aN567;
static U8 aN568;
static U8 aN569;
static U8 aN570;
static U8 aN571;
static U8 aN577;
static U8 aN578;
static U8 aN579;
static U8 aN580;
static U8 aN581;
static U8 aN582;
static U8 aN583;
static U8 aN584;
static U8 aN585;
static U8 aN586;
static U8 aN587;
static U8 aN588;
static U8 aN589;
static U8 aN590;
static U8 aN591;
static U8 aN592;
static U8 aN593;
static U8 aN594;
static U8 aN595;
static U8 aN596;
static BOOL aN498;
static BOOL aN499;
static BOOL aN500;
static BOOL aN501;
static BOOL aN502;
static BOOL aN397;
static BOOL aN503;
static BOOL aN504;
static BOOL aN505;
static BOOL aN506;
static BOOL aN551;
static BOOL aN552;
static BOOL aN553;
static BOOL aN554;
static BOOL aN555;
static BOOL aN572;
static BOOL aN573;
static BOOL aN574;
static BOOL aN575;
static BOOL aN576;
static BOOL aN391;
static U8 aUN462[1] = {0};
static BOOL aN133;
static _CANSYM_RX_T _CAN_MAINTASK__123_o;
static U8 aUN493[3] = {0x00,0xEE,0x00};
static _CANSYM_TX_T _CAN_MAINTASK__123_p;
static _CANSYM_RX_T _CAN_MAINTASK__123_q;
static _CANSYM_RX_T _CAN_MAINTASK__123_r;
static _CANSYM_RX_T _CAN_MAINTASK__123_s;
static _CANSYM_RX_T _CAN_MAINTASK__123_t;
static _CANSYM_RX_T _CAN_MAINTASK__123_u;
static _CANSYM_RX_T _CAN_MAINTASK__123_v;
static U8 aUN1150[3] = {0x50,0x6F,0x6F};
static _CANSYM_TX_T _CAN_MAINTASK__123_w;
static U8 aN159;
static BOOL aN669;
static BOOL aN179;
static PLC_STRING_REF  aN663;
static _CD6937D80_DAB3_46BF_BD14_2475965968A1_type MAINTASKobjb;
static _CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_type MAINTASKobjc;
static _C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_type MAINTASKobjd;
static void _FNC_123_x(void);
static _C27B4991C_F926_43DC_8BF2_62959109410F_type MAINTASKobje;
static U8 aUN36[1] = {0};
extern U32 _OS_MicroSec(void);
static U32 _LoopStart;
static U32 _ExecTimeOut_us;
int LoopDeadlineTimePassed(void)
{
  U32 now = _OS_MicroSec();
  if( now < _LoopStart) {
    return 0xFFFFFFFF - _LoopStart + now > _ExecTimeOut_us;
  } else {
    return (now - _LoopStart) > _ExecTimeOut_us;
  }
}
static uint32_t _TimeSinceStartupInMilliSeconds = 0;
uint32_t GetTimeSinceStartupInMilliSeconds(void)
{
  return _TimeSinceStartupInMilliSeconds;
}
static void __ToggleBufferIndexes(){
if(_GraphicTreeDelivered){
__SdtSampleDataArrayWriteIndex=__SdtSampleDataArrayWriteIndex?0:1;}}
#define ScreenInstanceCount 85
static const char * const ___ScreenInstanceNames[ScreenInstanceCount] = {
"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA", "GA", "HA", "IA", "JA", "KA", "LA", "MA", "NA", "OA", "PA", "QA", "RA", "SA", "TA", "UA", "VA", "WA", "XA", "YA", "ZA", "AB", "BB", "CB", "DB", "EB", "FB", "GB", "HB", "IB", "JB", "KB", "LB", "MB", "NB", "OB", "PB", "QB", "RB", "SB", "TB", "UB", "VB", "WB", "XB", "YB", "ZB", "AC", "BC", "CC", "DC", "EC", "FC", "GC"
};
static U32 ___ScreenInstanceIndex;
char * ___SdtGetNextFileName(){
char * result;
result=___ScreenInstanceNames[(___ScreenInstanceIndex<ScreenInstanceCount)?___ScreenInstanceIndex:0];
___ScreenInstanceIndex++;
return result;
}

void _INITMAINTASK(void)
{
CAN[0].Baudrate = 250000;
ID.Net[0].Addr = 0;
ID.Node.ServerAddr = 23;
CAN[1].Baudrate = 250000;
ID.Net[1].Addr = 1;
OS.ExecTimeOut = 10;
C1p05.DigThresHigh = 3000;
C1p05.DigThresLow = 2000;
C1p06.Bias = 0;
C1p06.Range = 0;
C1p06.DigThresHigh = 3000;
C1p06.DigThresLow = 2000;
C1p07.Bias = 0;
C1p07.Range = 0;
C1p07.DigThresHigh = 3000;
C1p07.DigThresLow = 2000;
C1p10.Bias = 0;
C1p10.Range = 0;
C1p10.DigThresHigh = 3000;
C1p10.DigThresLow = 2000;
C1p10.InputMode = 0;
C1p11.Bias = 0;
C1p11.Range = 0;
C1p11.DigThresHigh = 3000;
C1p11.DigThresLow = 2000;
C1p11.InputMode = 0;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_c);
_CAN_MAINTASK__123_c.protected=0;
_CAN_MAINTASK__123_c.idmask=0xFFFFFFFF;
_CAN_MAINTASK__123_c.idfilter=0x141F2F3F;
_CAN_MAINTASK__123_c.ext=1;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_d);
_CAN_MAINTASK__123_d.protected=0;
_CAN_MAINTASK__123_d.idmask=0x00FFFFFF;
_CAN_MAINTASK__123_d.ext=1;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_e);
_CAN_MAINTASK__123_e.protected=0;
_CAN_MAINTASK__123_e.idmask=0x00FFFFFF;
_CAN_MAINTASK__123_e.ext=1;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_f);
_CAN_MAINTASK__123_f.protected=0;
_CAN_MAINTASK__123_f.idmask=0x00FFFFFF;
_CAN_MAINTASK__123_f.ext=1;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_g);
_CAN_MAINTASK__123_g.protected=0;
_CAN_MAINTASK__123_g.idmask=0x00FFFFFF;
_CAN_MAINTASK__123_g.ext=1;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_h);
_CAN_MAINTASK__123_h.protected=0;
_CAN_MAINTASK__123_h.idmask=0x00FFFFFF;
_CAN_MAINTASK__123_h.ext=1;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_i);
_CAN_MAINTASK__123_i.protected=0;
_CAN_MAINTASK__123_i.idmask=0x00FFFFFF;
_CAN_MAINTASK__123_i.ext=1;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_j);
_CAN_MAINTASK__123_j.protected=0;
_CAN_MAINTASK__123_j.idmask=0x00FFFFFF;
_CAN_MAINTASK__123_j.ext=1;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_k);
_CAN_MAINTASK__123_k.protected=0;
_CAN_MAINTASK__123_k.idmask=0x00FFFFFF;
_CAN_MAINTASK__123_k.ext=1;
  _CALL_St_FAULTBITTEXT_Ccp_INIT(i__330e6c97_134c_4126_bedc_2d3b4fd6b1cd)
  _CALL_St_ORGANIZE_INTS_Ccp_INIT(i__330e7d66_5afe_8b8d_7143_95819c746d3c)
  _CALL_St_MEM_SORT_Ccp_INIT(i__330e7d59_5ac7_69af_3965_5e7cc50052d5)
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_o);
_CAN_MAINTASK__123_o.protected=0;
_CAN_MAINTASK__123_o.idmask=0x00FFFFFF;
_CAN_MAINTASK__123_o.idfilter=0x1CEEFFE8;
_CAN_MAINTASK__123_o.ext=1;
_CANSYM_TX_ADD(&_CAN_MAINTASK__123_p);
_CAN_MAINTASK__123_p.id=0x18EAFFFA;
_CAN_MAINTASK__123_p.rtr=0;
_CAN_MAINTASK__123_p.ext=1;
_CAN_MAINTASK__123_p.data = aUN493;
_CAN_MAINTASK__123_p.dlc = 3;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_q);
_CAN_MAINTASK__123_q.protected=0;
_CAN_MAINTASK__123_q.idmask=0x00FFFFFF;
_CAN_MAINTASK__123_q.idfilter=0x18EEFFF4;
_CAN_MAINTASK__123_q.ext=1;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_r);
_CAN_MAINTASK__123_r.protected=0;
_CAN_MAINTASK__123_r.idmask=0x00FFFFFF;
_CAN_MAINTASK__123_r.idfilter=0x18EEFFF5;
_CAN_MAINTASK__123_r.ext=1;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_s);
_CAN_MAINTASK__123_s.protected=0;
_CAN_MAINTASK__123_s.idmask=0x00FFFFFF;
_CAN_MAINTASK__123_s.idfilter=0x18EEFFF6;
_CAN_MAINTASK__123_s.ext=1;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_t);
_CAN_MAINTASK__123_t.protected=0;
_CAN_MAINTASK__123_t.idmask=0x00FFFFFF;
_CAN_MAINTASK__123_t.idfilter=0x18EEFFF7;
_CAN_MAINTASK__123_t.ext=1;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_u);
_CAN_MAINTASK__123_u.protected=0;
_CAN_MAINTASK__123_u.idmask=0x00FFFFFF;
_CAN_MAINTASK__123_u.idfilter=0x18EEFFF8;
_CAN_MAINTASK__123_u.ext=1;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_v);
_CAN_MAINTASK__123_v.protected=0;
_CAN_MAINTASK__123_v.idmask=0x00FFFFFF;
_CAN_MAINTASK__123_v.idfilter=0x18EEFFF9;
_CAN_MAINTASK__123_v.ext=1;
_CANSYM_TX_ADD(&_CAN_MAINTASK__123_w);
_CAN_MAINTASK__123_w.id=0x141F2F3F;
_CAN_MAINTASK__123_w.rtr=0;
_CAN_MAINTASK__123_w.ext=1;
_CAN_MAINTASK__123_w.data = aUN1150;
_CAN_MAINTASK__123_w.dlc = 3;
  _CALL_St_BLACKOUTTXT_Ccp_INIT(i__2934466b_3ea3_1c1a_16cf_b0e409d969b6)
  _CALL_St_LOG_STRING_Ccp_INIT(i__293445e9_3c79_496b_eb21_88bba84c5db5)
_INITCD6937D80_DAB3_46BF_BD14_2475965968A1(&MAINTASKobjb);
_INITCCB2E4559_AEC3_4437_8FE1_48A07FDAA617(&MAINTASKobjc);
_INITC49B02B97_88A0_4711_A8B6_DB8B71EA5BB0(&MAINTASKobjd);
_INITC27B4991C_F926_43DC_8BF2_62959109410F(&MAINTASKobje);
AppLog.EraseOnDownload = 1;
__SdtSampleDataArrayWriteIndex=1;
}
void _EndLoop_MAINTASK(void){
  _CALL_St_FAULTBITTEXT_Ccp_POSTLOOP(i__330e6c97_134c_4126_bedc_2d3b4fd6b1cd)
  _CALL_St_ORGANIZE_INTS_Ccp_POSTLOOP(i__330e7d66_5afe_8b8d_7143_95819c746d3c)
  _CALL_St_MEM_SORT_Ccp_POSTLOOP(i__330e7d59_5ac7_69af_3965_5e7cc50052d5)
  _CALL_St_BLACKOUTTXT_Ccp_POSTLOOP(i__2934466b_3ea3_1c1a_16cf_b0e409d969b6)
  _CALL_St_LOG_STRING_Ccp_POSTLOOP(i__293445e9_3c79_496b_eb21_88bba84c5db5)
}
void _BeginLoop_MAINTASK(void){
  _CALL_St_FAULTBITTEXT_Ccp_PRELOOP(i__330e6c97_134c_4126_bedc_2d3b4fd6b1cd)
  _CALL_St_ORGANIZE_INTS_Ccp_PRELOOP(i__330e7d66_5afe_8b8d_7143_95819c746d3c)
  _CALL_St_MEM_SORT_Ccp_PRELOOP(i__330e7d59_5ac7_69af_3965_5e7cc50052d5)
  _CALL_St_BLACKOUTTXT_Ccp_PRELOOP(i__2934466b_3ea3_1c1a_16cf_b0e409d969b6)
  _CALL_St_LOG_STRING_Ccp_PRELOOP(i__293445e9_3c79_496b_eb21_88bba84c5db5)
}
static void _FNC_123_b(void)
{
       BOOL aUN25;
       U8 aUN27;
  S32 _ShLocTmpVar_S32_1;
       U8 aUN24;
static U8 aUN28;
       BOOL aUN26;
       BOOL aUN21;
static BOOL aUN21Old1;
static U16 aUN21Old2;
static BOOL aUN20;
       BOOL aUN19;
static BOOL aN17;
static BOOL aN17Old1;
       BOOL aUN13;
       U8 aUN15;
       U8 aUN12;
static U8 aUN16;
       BOOL aUN14;
       BOOL aUN9;
static BOOL aUN9Old1;
static U16 aUN9Old2;
static BOOL aUN8;
       BOOL aUN7;
static BOOL aN16;
static BOOL aN16Old1;
       BOOL aN166;
static BOOL aN166Old1;
       BOOL aN167;
static BOOL aN167Old1;
       BOOL aN168;
static BOOL aN168Old1;
       BOOL aN169;
static BOOL aN169Old1;
       BOOL aN170;
static BOOL aN170Old1;
       BOOL aN172;
static BOOL aN172Old1;
       BOOL aN173;
static BOOL aN173Old1;
       BOOL aN174;
static BOOL aN174Old1;
       BOOL aN175;
static BOOL aN175Old1;
       BOOL aN176;
static BOOL aN176Old1;
       BOOL aN177;
static BOOL aN177Old1;
       BOOL aUN197;
       BOOL aUN196;
       BOOL aN171;
       BOOL aUN76;
static BOOL aUN76Old1;
static BOOL aN183Old1;
       BOOL aUN74;
static BOOL aUN74Old1;
static BOOL aN165Old1;
static BOOL aN164Old1;
       BOOL aUN71;
static BOOL aUN71Old1;
       BOOL aUN70;
static BOOL aUN70Old1;
       BOOL aUN69;
static BOOL aUN69Old1;
       BOOL aUN68;
static BOOL aUN68Old1;
       BOOL aUN67;
static BOOL aUN67Old1;
       BOOL aUN66;
static BOOL aUN66Old1;
       BOOL aUN73;
       BOOL aN111;
       BOOL aUN46;
static BOOL aUN46Old1;
static U8 aUN46Old2;
       BOOL aUN47;
static BOOL aUN47Old1;
static U8 aUN47Old2;
       BOOL aUN50;
static BOOL aUN50Old1;
       BOOL aUN53;
static BOOL aN10;
       BOOL aUN78;
       BOOL aUN77;
       BOOL aUN72;
       BOOL aUN133;
       BOOL aUN135;
       BOOL aUN136;
       BOOL aUN137;
       BOOL aUN138;
       BOOL aUN134;
       BOOL aUN131;
       BOOL aUN130;
       BOOL aUN129;
       BOOL aUN128;
       BOOL aUN110;
       BOOL aUN109;
       BOOL aUN116;
       BOOL aUN112;
       BOOL aUN113;
       BOOL aUN123;
       BOOL aUN111;
       BOOL aUN124;
       BOOL aUN126;
       BOOL aUN127;
       BOOL aUN114;
       BOOL aUN119;
       BOOL aUN115;
       BOOL aUN121;
       BOOL aUN117;
       BOOL aUN118;
       BOOL aUN132;
       BOOL aUN120;
       BOOL aUN125;
       BOOL aUN122;
       BOOL aUN103;
       BOOL aUN104;
       BOOL aUN105;
       BOOL aUN106;
       BOOL aUN107;
       BOOL aUN108;
       BOOL aUN102;
static BOOL aUN102Old1;
       BOOL aUN98;
static BOOL aUN98Old1;
       BOOL aUN97;
static BOOL aUN97Old1;
       BOOL aUN96;
static BOOL aUN96Old1;
       BOOL aUN95;
static BOOL aUN95Old1;
       BOOL aUN94;
static BOOL aUN94Old1;
       BOOL aUN101;
       BOOL aUN99;
       BOOL aUN80;
       BOOL aUN85;
       BOOL aUN84;
       BOOL aUN83;
       BOOL aUN82;
static BOOL aUN92;
static BOOL aUN81;
static BOOL aUN81Old1;
       BOOL aUN86;
static BOOL aUN86Old1;
       BOOL aUN79;
static BOOL aUN79Old1;
       BOOL aUN93;
       BOOL aUN139;
static BOOL aUN139Old1;
static BOOL aUN91;
       BOOL aUN147;
static BOOL aUN147Old1;
       BOOL aUN146;
static BOOL aUN146Old1;
       BOOL aUN90;
static BOOL aUN87;
       BOOL aUN89;
static BOOL aUN145;
       BOOL aUN88;
static BOOL aUN100;
       BOOL aUN142;
static BOOL aUN144;
       BOOL aUN143;
static BOOL aUN140;
       BOOL aUN149;
static BOOL aUN151;
       BOOL aUN141;
static BOOL aUN148;
       BOOL aUN150;
       BOOL aUN57;
static BOOL aUN57Old1;
       BOOL aUN64;
static BOOL aUN64Old1;
       BOOL aUN65;
       BOOL aUN54;
       BOOL aUN878;
static BOOL aN656Old1;
static BOOL aN656Old2;
       U16 aUN60;
       S16 aN147;
static BOOL aN668Old1;
static U8 aN668Old2;
static BOOL aN396Old1;
aUN25=CAN[0].DriverError | CAN[0].BusOff;
  _ShLocTmpVar_S32_1 = !(aN17);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aUN27 = 1;
      break;
    default:
      aUN27 = 0;
  }
aUN24 = (aUN28)+(aUN27);
  _ShLocTmpVar_S32_1 = !(aUN25);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aUN28 = aUN24;
      break;
    default:
      aUN28 = 0;
  }
if ((aN17 == 0 && aUN25 == 0) || (aN17 != 0 && aUN25 != 0)) 
aUN26=0;
else
aUN26=1;
if (aUN26 && !aUN21Old1)
aUN21Old2 = 1000;
if (aUN21Old2 > _ElapsedTime[T1M])
{
aUN21Old2 = aUN21Old2 - _ElapsedTime[T1M];
aUN21=0;
}
else
{
aUN21Old2 = 0;
aUN21=aUN26;
}
aUN21Old1 = aUN26;
if (5 <= aUN28)
aUN20=0;
if ((5) > aUN28)
aUN20=1;
aUN19=aUN21 && aUN20;
if (aUN19 && !aN17Old1)
aN17=1;
else
aN17=0;
aN17Old1 = aUN19;
CAN[0].Reset=CAN[0].BusOff && aN17;
CAN[0].DriverReset=CAN[0].DriverError && aN17;
CAN[0].Baudrate = 250000;
aUN13=CAN[1].DriverError | CAN[1].BusOff;
  _ShLocTmpVar_S32_1 = !(aN16);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aUN15 = 1;
      break;
    default:
      aUN15 = 0;
  }
aUN12 = (aUN16)+(aUN15);
  _ShLocTmpVar_S32_1 = !(aUN13);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aUN16 = aUN12;
      break;
    default:
      aUN16 = 0;
  }
if ((aN16 == 0 && aUN13 == 0) || (aN16 != 0 && aUN13 != 0)) 
aUN14=0;
else
aUN14=1;
if (aUN14 && !aUN9Old1)
aUN9Old2 = 1000;
if (aUN9Old2 > _ElapsedTime[T1M])
{
aUN9Old2 = aUN9Old2 - _ElapsedTime[T1M];
aUN9=0;
}
else
{
aUN9Old2 = 0;
aUN9=aUN14;
}
aUN9Old1 = aUN14;
if (5 <= aUN16)
aUN8=0;
if ((5) > aUN16)
aUN8=1;
aUN7=aUN9 && aUN8;
if (aUN7 && !aN16Old1)
aN16=1;
else
aN16=0;
aN16Old1 = aUN7;
CAN[1].Reset=CAN[1].BusOff && aN16;
CAN[1].DriverReset=CAN[1].DriverError && aN16;
CAN[1].Baudrate = 250000;
RTC.Stop = 0;
RTC.Set = 0;
if (0 != 0)
RTC.Hour=23;
if (0 != 0)
RTC.Minute=59;
if (0 != 0)
RTC.Second=59;
if (0 != 0)
RTC.Year=2000;
if (0 != 0)
RTC.Month=12;
if (0 != 0)
RTC.Day=31;
if (Button.One && !aN166Old1)
aN166=1;
else
aN166=0;
aN166Old1 = Button.One;
if (Button.Two && !aN167Old1)
aN167=1;
else
aN167=0;
aN167Old1 = Button.Two;
if (Button.Three && !aN168Old1)
aN168=1;
else
aN168=0;
aN168Old1 = Button.Three;
if (Button.Four && !aN169Old1)
aN169=1;
else
aN169=0;
aN169Old1 = Button.Four;
if (Button.Right && !aN170Old1)
aN170=1;
else
aN170=0;
aN170Old1 = Button.Right;
if (Button.Up && !aN172Old1)
aN172=1;
else
aN172=0;
aN172Old1 = Button.Up;
if (Button.Left && !aN173Old1)
aN173=1;
else
aN173=0;
aN173Old1 = Button.Left;
if (Button.Down && !aN174Old1)
aN174=1;
else
aN174=0;
aN174Old1 = Button.Down;
if (Button.Center && !aN175Old1)
aN175=1;
else
aN175=0;
aN175Old1 = Button.Center;
if (Button.Esc && !aN176Old1)
aN176=1;
else
aN176=0;
aN176Old1 = Button.Esc;
if (Button.Home && !aN177Old1)
aN177=1;
else
aN177=0;
aN177Old1 = Button.Home;
aUN197=aN174 | aN173 | aN172 | aN170 | aN169 | aN168 | aN167 | aN166;
aUN196=aN177 | aN176 | aN175;
aN171=aUN196 | aUN197;
C1p05.DigThresHigh = 3000;
C1p05.DigThresLow = 2000;
C1p06.Bias = 0;
C1p06.Range = 0;
C1p06.DigThresHigh = 3000;
C1p06.DigThresLow = 2000;
C1p07.Bias = 0;
C1p07.Range = 0;
C1p07.DigThresHigh = 3000;
C1p07.DigThresLow = 2000;
C1p10.Bias = 0;
C1p10.Range = 0;
C1p10.DigThresHigh = 3000;
C1p10.DigThresLow = 2000;
C1p10.InputMode = 0;
C1p11.Bias = 0;
C1p11.Range = 0;
C1p11.DigThresHigh = 3000;
C1p11.DigThresLow = 2000;
C1p11.InputMode = 0;
if (0 != 0)
UART[0].TxMsg.Tx=0;
if (Button.Up && !aUN76Old1)
aUN76=1;
else
aUN76=0;
aUN76Old1 = Button.Up;
if (Button.Right && !aN183Old1)
aN183=1;
else
aN183=0;
aN183Old1 = Button.Right;
if (Button.Left && !aUN74Old1)
aUN74=1;
else
aUN74=0;
aUN74Old1 = Button.Left;
if (Button.Home && !aN165Old1)
aN165=1;
else
aN165=0;
aN165Old1 = Button.Home;
if (Button.Esc && !aN164Old1)
aN164=1;
else
aN164=0;
aN164Old1 = Button.Esc;
if (Button.Down && !aUN71Old1)
aUN71=1;
else
aUN71=0;
aUN71Old1 = Button.Down;
if (Button.Center && !aUN70Old1)
aUN70=1;
else
aUN70=0;
aUN70Old1 = Button.Center;
if (Button.Four && !aUN69Old1)
aUN69=1;
else
aUN69=0;
aUN69Old1 = Button.Four;
if (Button.Three && !aUN68Old1)
aUN68=1;
else
aUN68=0;
aUN68Old1 = Button.Three;
if (Button.Two && !aUN67Old1)
aUN67=1;
else
aUN67=0;
aUN67Old1 = Button.Two;
if (Button.One && !aUN66Old1)
aUN66=1;
else
aUN66=0;
aUN66Old1 = Button.One;
aUN73 = 2 == aN159;
aN111 = 3 == aN159;
if (Button.Two && !aUN46Old1)
aUN46Old2 = 5;
if (aUN46Old2 > _ElapsedTime[T1S])
{
aUN46Old2 = aUN46Old2 - _ElapsedTime[T1S];
aUN46=0;
}
else
{
aUN46Old2 = 0;
aUN46=Button.Two;
}
aUN46Old1 = Button.Two;
if (aN10 && !aUN47Old1)
aUN47Old2 = 8;
if (aUN47Old2 > _ElapsedTime[T1S])
{
aUN47Old2 = aUN47Old2 - _ElapsedTime[T1S];
aUN47=0;
}
else
{
aUN47Old2 = 0;
aUN47=aN10;
}
aUN47Old1 = aN10;
if (aUN46 && !aUN50Old1)
aUN50=1;
else
aUN50=0;
aUN50Old1 = aUN46;
aUN53=aUN50 && Button.Two && 1;
aN10 = !(aUN47) && (aN10 || aUN53);
aUN78=aUN69 | aUN70 | aUN71 | aN164 | aN165 | aUN74 | aN183 | aUN76;
aUN77=aUN66 | aUN67 | aUN68;
aN149=aUN77 | aUN78;
aN155=aN10 && aUN73;
aUN72=!aN155;
aUN133=!Button.Down;
aUN135=!Button.Left;
aUN136=!Button.Right;
aUN137=!Button.Three;
aUN138=!Button.Four;
aUN134=!Button.Up;
aUN131=!Button.Left;
aUN130=!Button.Right;
aUN129=!Button.Three;
aUN128=!Button.Four;
aUN110=!Button.Up;
aUN109=!Button.Down;
aUN116=!Button.Right;
aUN112=!Button.Three;
aUN113=!Button.Four;
aUN123=!Button.Up;
aUN111=!Button.Down;
aUN124=!Button.Left;
aUN126=!Button.Three;
aUN127=!Button.Four;
aUN114=!Button.Up;
aUN119=!Button.Down;
aUN115=!Button.Left;
aUN121=!Button.Right;
aUN117=!Button.Four;
aUN118=!Button.Up;
aUN132=!Button.Down;
aUN120=!Button.Left;
aUN125=!Button.Right;
aUN122=!Button.Three;
aUN103=aN149 && aUN138 && aUN137 && aUN136 && aUN135 && aUN133 && Button.Up;
aUN104=aN149 && aUN128 && aUN129 && aUN130 && aUN131 && aUN134 && Button.Down;
aUN105=aN149 && aUN113 && aUN112 && aUN116 && aUN109 && aUN110 && Button.Left;
aUN106=aN149 && aUN127 && aUN126 && aUN124 && aUN111 && aUN123 && Button.Right;
aUN107=aN149 && aUN117 && aUN121 && aUN115 && aUN119 && aUN114 && Button.Three;
aUN108=aN149 && aUN122 && aUN125 && aUN120 && aUN132 && aUN118 && Button.Four;
if (aUN103 && !aUN102Old1)
aUN102=1;
else
aUN102=0;
aUN102Old1 = aUN103;
if (aUN104 && !aUN98Old1)
aUN98=1;
else
aUN98=0;
aUN98Old1 = aUN104;
if (aUN105 && !aUN97Old1)
aUN97=1;
else
aUN97=0;
aUN97Old1 = aUN105;
if (aUN106 && !aUN96Old1)
aUN96=1;
else
aUN96=0;
aUN96Old1 = aUN106;
if (aUN107 && !aUN95Old1)
aUN95=1;
else
aUN95=0;
aUN95Old1 = aUN107;
if (aUN108 && !aUN94Old1)
aUN94=1;
else
aUN94=0;
aUN94Old1 = aUN108;
aUN101=aN149 && aUN102 && aN155;
aUN99=aUN94 | aUN95 | aUN96 | aUN97 | aUN98;
aUN80=aUN94 | aUN95 | aUN96 | aUN97 | aUN102;
aUN85=aUN94 | aUN95 | aUN96 | aUN98 | aUN102;
aUN84=aUN94 | aUN95 | aUN98 | aUN97 | aUN102;
aUN83=aUN94 | aUN96 | aUN98 | aUN97 | aUN102;
aUN82=aUN96 | aUN95 | aUN102 | aUN97 | aUN98;
aUN92 = !(aUN81) && (aUN92 || aUN101);
aUN81 = aUN81Old1 ;
aUN81Old1 = aUN99;
aUN86 = aUN86Old1 ;
aUN86Old1 = aUN80;
aUN79 = aUN79Old1 ;
aUN79Old1 = aUN85;
aUN93=aUN102 && aUN92 && aN155;
aUN139 = aUN139Old1 ;
aUN139Old1 = aUN84;
aUN91 = !(aUN81) && (aUN91 || aUN93);
aUN147 = aUN147Old1 ;
aUN147Old1 = aUN83;
aUN146 = aUN146Old1 ;
aUN146Old1 = aUN82;
aUN90=aUN98 && aUN91 && aN155;
aUN87 = !(aUN86) && (aUN87 || aUN90);
aUN89=aUN98 && aUN87 && aN155;
aUN145 = !(aUN86) && (aUN145 || aUN89);
aUN88=aUN97 && aUN145 && aN155;
aUN100 = !(aUN79) && (aUN100 || aUN88);
aUN142=aUN96 && aUN100 && aN155;
aUN144 = !(aUN139) && (aUN144 || aUN142);
aUN143=aUN97 && aUN144 && aN155;
aUN140 = !(aUN79) && (aUN140 || aUN143);
aUN149=aUN95 && aUN148 && aN155;
aUN151 = !(aUN147) && (aUN151 || aUN149);
aUN141=aUN96 && aUN140 && aN155;
aUN148 = !(aUN139) && (aUN148 || aUN141);
aUN150=aUN94 && aUN151 && aN155;
aN154 = !(aUN146) && (aN154 || aUN150);
if (Button.Down && !aUN57Old1)
aUN57=1;
else
aUN57=0;
aUN57Old1 = Button.Down;
if (Button.Up && !aUN64Old1)
aUN64=1;
else
aUN64=0;
aUN64Old1 = Button.Up;
aUN65=aN111 && aUN57;
aUN54=aN111 && aUN64;
aUN878=!aN111;
aN655=aUN54 | aUN65 | aUN878;
if (aUN65 && !aN656Old2)
{
if (aN656!=45)
aN656++;
}
if (aUN54 && !aN656Old1)
{
if (aN656!=0)
aN656--;
}
if (0!=0)
aN656=45;
if (aUN878!=0)
aN656=0;
if (aN656>45)
aN656=45;
if (aN656<0)
aN656=0;
aN656Old2 = aUN65;
aN656Old1 = aUN54;
aUN60=(aN656)*(37);
  aN147 = (30) - (aUN60);
aN160=aUN72 && aUN66;
aN161=aUN72 && aUN67;
aN162=aUN72 && aUN68;
aN163=aUN72 && aUN69;
aN670=Button.Three && aN111;
_CAN_MAINTASK__123_c.port=CAN[0].Port;
if (!_CAN_MAINTASK__123_c.rx && aN668Old1)
aN668Old2 = 2;
if (aN668Old2 > _ElapsedTime[T1S])
{
aN668Old2 = aN668Old2 - _ElapsedTime[T1S];
aN668=1;
}
else
{
aN668Old2 = 0;
aN668=_CAN_MAINTASK__123_c.rx;
}
aN668Old1 = _CAN_MAINTASK__123_c.rx;
_CAN_MAINTASK__123_d.idfilter=_TEST.CHECK.Addr_set|0x18FF0300;
_CAN_MAINTASK__123_e.idfilter=_TEST.CHECK.Addr_set|0x18FFD900;
_CAN_MAINTASK__123_f.idfilter=_TEST.CHECK.Addr_set|0x18FFD200;
_CAN_MAINTASK__123_g.idfilter=_TEST.CHECK.Addr_set|0x18FFD300;
_CAN_MAINTASK__123_h.idfilter=_TEST.CHECK.Addr_set|0x18FFD100;
_CAN_MAINTASK__123_i.idfilter=_TEST.CHECK.Addr_set|0x18FFDA00;
_CAN_MAINTASK__123_j.idfilter=_TEST.CHECK.Addr_set|0x18FFD600;
_CAN_MAINTASK__123_k.idfilter=_TEST.CHECK.Addr_set|0x18FFD700;
if (1 && !aN396Old1)
aN396=1;
else
aN396=0;
aN396Old1 = 1;
_CAN_MAINTASK__123_d.port=CAN[0].Port;
_CAN_MAINTASK__123_e.port=CAN[0].Port;
_CAN_MAINTASK__123_f.port=CAN[0].Port;
_CAN_MAINTASK__123_g.port=CAN[0].Port;
_CAN_MAINTASK__123_h.port=CAN[0].Port;
_CAN_MAINTASK__123_i.port=CAN[0].Port;
_CAN_MAINTASK__123_j.port=CAN[0].Port;
_CAN_MAINTASK__123_k.port=CAN[0].Port;
}
static void _FNC_123_l(void)
{
       U8 aN213;
       U8 aN214;
       U8 aN208;
       U8 aN217;
       U8 aN218;
       U8 aN219;
       U8 aN259;
       U8 aN258;
       U8 aN257;
       U8 aN256;
       U8 aN254;
       U8 aN265;
       U8 aN264;
       U8 aN263;
       U8 aN262;
       U8 aN261;
       U8 aUN237;
       U8 aUN236;
       U8 aUN235;
       U8 aUN234;
       U8 aUN256;
       U8 aUN247;
       U8 aUN248;
       U8 aUN249;
       U8 aUN250;
       U8 aN345;
       U8 aN346;
       U8 aN347;
       U8 aN348;
       U8 aN341;
       U8 aN342;
       U8 aN343;
       U8 aN344;
       U8 aUN1129;
static U8 aUN1129Old1;
       U8 aUN1136;
static U8 aUN1136Old1;
       U8 aUN1051;
static U8 aUN1051Old1;
       U8 aUN646;
static U8 aUN646Old1;
       BOOL aUN1131;
       BOOL aUN1134;
       BOOL aUN1048;
       BOOL aUN876;
       BOOL aUN1132;
       BOOL aUN1133;
static U8 aUN1130;
static U8 aUN1135;
       BOOL aUN998;
       BOOL aUN937;
static U8 aUN1050;
static U8 aUN660;
       U8 aUN1121;
static U8 aUN1121Old1;
       U8 aUN1128;
static U8 aUN1128Old1;
       U8 aUN1120;
static U8 aUN1120Old1;
       U8 aUN1060;
static U8 aUN1060Old1;
       BOOL aUN815;
       BOOL aUN816;
       BOOL aUN817;
       BOOL aUN818;
       BOOL aUN814;
       BOOL aUN813;
       BOOL aUN819;
       BOOL aUN820;
 U8 aUN815Int1;
       BOOL aUN802;
       BOOL aUN801;
       BOOL aUN800;
       BOOL aUN799;
       BOOL aUN803;
       BOOL aUN804;
       BOOL aUN798;
       BOOL aUN797;
 U8 aUN802Int1;
       BOOL aUN790;
       BOOL aUN789;
       BOOL aUN788;
       BOOL aUN787;
       BOOL aUN791;
       BOOL aUN792;
       BOOL aUN786;
       BOOL aUN785;
 U8 aUN790Int1;
       BOOL aUN778;
       BOOL aUN777;
       BOOL aUN776;
       BOOL aUN775;
       BOOL aUN779;
       BOOL aUN780;
       BOOL aUN774;
       BOOL aUN773;
 U8 aUN778Int1;
       U8 aUN766;
 U8 aUN766Int1;
       U8 aUN762;
 U8 aUN762Int1;
       U8 aUN750;
 U8 aUN750Int1;
       U8 aUN745;
 U8 aUN745Int1;
       U8 aUN768;
 U8 aUN768Int1;
       U8 aUN760;
 U8 aUN760Int1;
       U8 aUN752;
 U8 aUN752Int1;
       U8 aUN743;
 U8 aUN743Int1;
       U8 aUN770;
 U8 aUN770Int1;
       U8 aUN758;
 U8 aUN758Int1;
       U8 aUN754;
 U8 aUN754Int1;
       U8 aUN741;
 U8 aUN741Int1;
       U8 aUN771;
 U8 aUN771Int1;
       U8 aUN757;
 U8 aUN757Int1;
       U8 aUN755;
 U8 aUN755Int1;
       U8 aUN747;
 U8 aUN747Int1;
       BOOL aUN671;
       BOOL aUN670;
       BOOL aUN669;
       BOOL aUN668;
       BOOL aUN672;
       BOOL aUN673;
       BOOL aUN667;
       BOOL aUN666;
 U8 aUN671Int1;
       BOOL aUN684;
       BOOL aUN685;
       BOOL aUN686;
       BOOL aUN687;
       BOOL aUN683;
       BOOL aUN682;
       BOOL aUN688;
       BOOL aUN689;
 U8 aUN684Int1;
       BOOL aUN696;
       BOOL aUN697;
       BOOL aUN698;
       BOOL aUN699;
       BOOL aUN695;
       BOOL aUN694;
       BOOL aUN700;
       BOOL aUN701;
 U8 aUN696Int1;
       BOOL aUN707;
       BOOL aUN708;
       BOOL aUN706;
       BOOL aUN705;
       BOOL aUN709;
       BOOL aUN710;
 U8 aUN707Int1;
       U8 aUN717;
 U8 aUN717Int1;
       U8 aUN721;
 U8 aUN721Int1;
       U8 aUN733;
 U8 aUN733Int1;
       U8 aUN715;
 U8 aUN715Int1;
       U8 aUN723;
 U8 aUN723Int1;
       U8 aUN731;
 U8 aUN731Int1;
       U8 aUN738;
 U8 aUN738Int1;
       U8 aUN713;
 U8 aUN713Int1;
       U8 aUN725;
 U8 aUN725Int1;
       U8 aUN729;
 U8 aUN729Int1;
       U8 aUN740;
 U8 aUN740Int1;
       U8 aUN712;
 U8 aUN712Int1;
       U8 aUN726;
 U8 aUN726Int1;
       U8 aUN728;
 U8 aUN728Int1;
       U8 aUN736;
 U8 aUN736Int1;
       BOOL aUN1123;
       BOOL aUN1126;
       BOOL aUN1118;
       BOOL aUN1109;
       BOOL aUN1124;
static U8 aUN1122;
       BOOL aUN1125;
static U8 aUN1127;
       BOOL aUN1117;
static U8 aUN1119;
       BOOL aUN1113;
static U8 aUN1107;
       U8 aUN397;
       U8 aUN398;
 U8 aN253Int1;
 U8 aN200Int1;
       BOOL aUN405;
static BOOL aUN405Old1;
       BOOL aUN407;
static BOOL aUN407Old1;
       BOOL aUN409;
static BOOL aUN409Old1;
       BOOL aUN411;
static BOOL aUN411Old1;
       BOOL aUN401;
static BOOL aUN401Old1;
       BOOL aUN406;
static BOOL aUN406Old1;
       BOOL aUN408;
static BOOL aUN408Old1;
       BOOL aUN410;
static BOOL aUN410Old1;
       BOOL aUN402;
       BOOL aUN399;
static BOOL aUN399Old1;
       BOOL aUN404;
static BOOL aUN404Old1;
       BOOL aUN400;
static BOOL aUN400Old1;
       BOOL aUN403;
static BOOL aUN403Old1;
       BOOL aUN291;
       BOOL aUN292;
       BOOL aUN293;
       BOOL aUN294;
 U8 aUN291Int1;
       BOOL aUN283;
       BOOL aUN284;
       BOOL aUN285;
       BOOL aUN286;
       BOOL aUN287;
       BOOL aUN288;
       BOOL aUN289;
       BOOL aUN290;
 U8 aUN283Int1;
       BOOL aUN275;
       BOOL aUN276;
       BOOL aUN277;
       BOOL aUN278;
       BOOL aUN279;
       BOOL aUN280;
       BOOL aUN281;
       BOOL aUN282;
 U8 aUN275Int1;
       U8 aUN273;
       U8 aUN272;
       U8 aUN428;
       U8 aUN352;
       U16 aUN271;
       U16 aUN270;
       U32 aN215;
       S16 aUN302;
       S16 aUN307;
       S16 aUN255;
 S32 aUN255Int1;
       S16 aE1UN6;
       S16 aE1UN2;
       S16 aE1UN7;
 S32 aE1UN7Int1;
       S16 aE1N1;
       S16 aE2UN6;
       S16 aE2UN2;
       S16 aE2UN7;
 S32 aE2UN7Int1;
       S16 aE2N1;
       S16 aE3UN6;
       S16 aE3UN2;
       S16 aE3UN7;
 S32 aE3UN7Int1;
       S16 aE3N1;
       BOOL aN210;
       BOOL aN209;
 U8 aN210Int1;
       U16 aUN229;
       U16 aUN228;
       U16 aUN246;
       U16 aUN245;
       U8 aUN334;
       U8 aUN319;
       U8 aUN320;
       U8 aUN318;
       U8 aUN346;
       U8 aUN347;
       BOOL aUN342;
       BOOL aUN341;
       BOOL aUN340;
       BOOL aUN339;
       BOOL aUN338;
       BOOL aUN337;
       BOOL aUN336;
       BOOL aUN335;
 U8 aUN342Int1;
 U8 aN242Int1;
       BOOL aUN378;
       BOOL aUN377;
 U8 aUN378Int1;
       BOOL aUN386;
       BOOL aUN385;
       BOOL aUN384;
       BOOL aUN383;
       BOOL aUN382;
       BOOL aUN381;
       BOOL aUN380;
       BOOL aUN379;
 U8 aUN386Int1;
       BOOL aUN391;
       BOOL aUN392;
       BOOL aUN393;
 U8 aN230Int1;
       U8 aUN389;
       U8 aUN388;
 U8 aUN388Int1;
 U8 aN236Int1;
 U8 aN235Int1;
 U8 aN234Int1;
       BOOL aUN325;
static BOOL aUN325Old1;
       BOOL aUN321;
static BOOL aUN321Old1;
       U16 aN249;
       BOOL aUN326;
static BOOL aUN326Old1;
       BOOL aUN322;
static BOOL aUN322Old1;
 U8 aN248Int1;
 U8 aN226Int1;
       BOOL aUN367;
       U16 aUN395;
       BOOL aUN327;
static BOOL aUN327Old1;
       BOOL aUN329;
static BOOL aUN329Old1;
       BOOL aUN331;
static BOOL aUN331Old1;
       BOOL aUN333;
static BOOL aUN333Old1;
       BOOL aUN323;
static BOOL aUN323Old1;
       BOOL aUN328;
static BOOL aUN328Old1;
       BOOL aUN330;
static BOOL aUN330Old1;
       BOOL aUN332;
static BOOL aUN332Old1;
       BOOL aUN324;
       BOOL aUN375;
static BOOL aUN375Old1;
       BOOL aUN373;
static BOOL aUN373Old1;
       BOOL aUN371;
static BOOL aUN371Old1;
       BOOL aUN369;
static BOOL aUN369Old1;
       BOOL aUN376;
static BOOL aUN376Old1;
       BOOL aUN374;
static BOOL aUN374Old1;
       BOOL aUN372;
static BOOL aUN372Old1;
       BOOL aUN370;
static BOOL aUN370Old1;
       BOOL aUN368;
       U16 aN187;
       BOOL aUN298;
       BOOL aUN297;
       BOOL aUN296;
       BOOL aUN295;
 U8 aUN298Int1;
       U8 aUN301;
       U16 aUN300;
       U16 aUN433;
       U16 aUN432;
       U32 aUN435;
       S16 aE4UN6;
       S16 aE4UN2;
       S16 aE4UN7;
 S32 aE4UN7Int1;
       S16 aE5UN6;
       S16 aE5UN2;
       S16 aE5UN7;
 S32 aE5UN7Int1;
       U16 aE6UN2;
  S32 Unused_S32__4_Return;
  U16 Unused_U16__4_RuntimeErrors;
static BOOL aN358Old1;
static BOOL aN357Old1;
static BOOL aN354Old1;
static BOOL aN353Old1;
static BOOL aN351Old1;
static BOOL aN308Old1;
static BOOL aN306Old1;
  S32 _ShLocTmpVar_S32_1;
       U8 aUN651;
static U8 aUN651Old1;
       U8 aUN620;
static U8 aUN620Old1;
       U8 aUN615;
static U8 aUN615Old1;
static BOOL aN283Old1;
static BOOL aN286Old1;
static BOOL aN288Old1;
static BOOL aN289Old1;
static BOOL aN282Old1;
static BOOL aN300Old1;
static BOOL aN297Old1;
static BOOL aN295Old1;
static BOOL aN293Old1;
static BOOL aN301Old1;
static BOOL aN304Old1;
aN213=_CAN_MAINTASK__123_i.data[2];
aN214=_CAN_MAINTASK__123_i.data[3];
aN208=_CAN_MAINTASK__123_i.data[4];
aN217=_CAN_MAINTASK__123_i.data[5];
aN218=_CAN_MAINTASK__123_i.data[6];
aN219=_CAN_MAINTASK__123_i.data[7];
aN259=_CAN_MAINTASK__123_j.data[0];
aN258=_CAN_MAINTASK__123_j.data[1];
aN257=_CAN_MAINTASK__123_j.data[2];
aN256=_CAN_MAINTASK__123_j.data[3];
aN254=_CAN_MAINTASK__123_k.data[0];
aN265=_CAN_MAINTASK__123_k.data[1];
aN264=_CAN_MAINTASK__123_k.data[2];
aN263=_CAN_MAINTASK__123_k.data[3];
aN262=_CAN_MAINTASK__123_k.data[4];
aN261=_CAN_MAINTASK__123_k.data[5];
aUN237=_CAN_MAINTASK__123_d.data[0];
aUN236=_CAN_MAINTASK__123_d.data[1];
aUN235=_CAN_MAINTASK__123_d.data[2];
aUN234=_CAN_MAINTASK__123_d.data[3];
aUN256=_CAN_MAINTASK__123_f.data[1];
aUN247=_CAN_MAINTASK__123_e.data[0];
aUN248=_CAN_MAINTASK__123_e.data[1];
aUN249=_CAN_MAINTASK__123_e.data[2];
aUN250=_CAN_MAINTASK__123_e.data[3];
aN345=_CAN_MAINTASK__123_g.data[0];
aN346=_CAN_MAINTASK__123_g.data[1];
aN347=_CAN_MAINTASK__123_g.data[2];
aN348=_CAN_MAINTASK__123_g.data[3];
aN341=_CAN_MAINTASK__123_g.data[4];
aN342=_CAN_MAINTASK__123_g.data[5];
aN343=_CAN_MAINTASK__123_g.data[6];
aN344=_CAN_MAINTASK__123_g.data[7];
aUN1129 = aUN1129Old1 ;
aUN1129Old1 = aUN1130;
aUN1136 = aUN1136Old1 ;
aUN1136Old1 = aUN1135;
aUN1051 = aUN1051Old1 ;
aUN1051Old1 = aUN1050;
aUN646 = aUN646Old1 ;
aUN646Old1 = aUN660;
aUN1131 = aN345 != aUN1129;
aUN1134 = aN347 != aUN1136;
aUN1048 = aN341 != aUN1051;
aUN876 = aN343 != aUN646;
aUN1132=aUN1131 && _CAN_MAINTASK__123_g.rx;
aUN1133=aUN1134 && _CAN_MAINTASK__123_g.rx;
  if(aUN1132) {
    aUN1130 = aN345;
  }
  if(aUN1133) {
    aUN1135 = aN347;
  }
aUN998=aUN1048 && _CAN_MAINTASK__123_g.rx;
aUN937=aUN876 && _CAN_MAINTASK__123_g.rx;
  if(aUN998) {
    aUN1050 = aN341;
  }
  if(aUN937) {
    aUN660 = aN343;
  }
aUN1121 = aUN1121Old1 ;
aUN1121Old1 = aUN1122;
aUN1128 = aUN1128Old1 ;
aUN1128Old1 = aUN1127;
aUN1120 = aUN1120Old1 ;
aUN1120Old1 = aUN1119;
aUN1060 = aUN1060Old1 ;
aUN1060Old1 = aUN1107;
aUN815Int1 =aN345;
if (aUN815Int1 < 0)
aUN815Int1 = 0;
aUN815 = aUN815Int1 & 0x80;
aUN816 = aUN815Int1 & 0x40;
aUN817 = aUN815Int1 & 0x20;
aUN818 = aUN815Int1 & 0x10;
aUN814 = aUN815Int1 & 0x08;
aUN813 = aUN815Int1 & 0x04;
aUN819 = aUN815Int1 & 0x02;
aUN820 = aUN815Int1 & 0x01;
aUN802Int1 =aN346;
if (aUN802Int1 < 0)
aUN802Int1 = 0;
aUN802 = aUN802Int1 & 0x80;
aUN801 = aUN802Int1 & 0x40;
aUN800 = aUN802Int1 & 0x20;
aUN799 = aUN802Int1 & 0x10;
aUN803 = aUN802Int1 & 0x08;
aUN804 = aUN802Int1 & 0x04;
aUN798 = aUN802Int1 & 0x02;
aUN797 = aUN802Int1 & 0x01;
aUN790Int1 =aN347;
if (aUN790Int1 < 0)
aUN790Int1 = 0;
aUN790 = aUN790Int1 & 0x80;
aUN789 = aUN790Int1 & 0x40;
aUN788 = aUN790Int1 & 0x20;
aUN787 = aUN790Int1 & 0x10;
aUN791 = aUN790Int1 & 0x08;
aUN792 = aUN790Int1 & 0x04;
aUN786 = aUN790Int1 & 0x02;
aUN785 = aUN790Int1 & 0x01;
aUN778Int1 =aN348;
if (aUN778Int1 < 0)
aUN778Int1 = 0;
aUN778 = aUN778Int1 & 0x80;
aUN777 = aUN778Int1 & 0x40;
aUN776 = aUN778Int1 & 0x20;
aUN775 = aUN778Int1 & 0x10;
aUN779 = aUN778Int1 & 0x08;
aUN780 = aUN778Int1 & 0x04;
aUN774 = aUN778Int1 & 0x02;
aUN773 = aUN778Int1 & 0x01;
aUN766Int1 = 0;
if (aUN816 != 0)
aUN766Int1 = aUN766Int1 + 1;
if (aUN815 != 0)
aUN766Int1 = aUN766Int1 + 2;
if (0 != 0)
aUN766Int1 = aUN766Int1 + 4;
if (0 != 0)
aUN766Int1 = aUN766Int1 + 8;
aUN766 = aUN766Int1;
aUN762Int1 = 0;
if (aUN801 != 0)
aUN762Int1 = aUN762Int1 + 1;
if (aUN802 != 0)
aUN762Int1 = aUN762Int1 + 2;
if (0 != 0)
aUN762Int1 = aUN762Int1 + 4;
if (0 != 0)
aUN762Int1 = aUN762Int1 + 8;
aUN762 = aUN762Int1;
aUN750Int1 = 0;
if (aUN789 != 0)
aUN750Int1 = aUN750Int1 + 1;
if (aUN790 != 0)
aUN750Int1 = aUN750Int1 + 2;
if (0 != 0)
aUN750Int1 = aUN750Int1 + 4;
if (0 != 0)
aUN750Int1 = aUN750Int1 + 8;
aUN750 = aUN750Int1;
aUN745Int1 = 0;
if (aUN777 != 0)
aUN745Int1 = aUN745Int1 + 1;
if (aUN778 != 0)
aUN745Int1 = aUN745Int1 + 2;
if (0 != 0)
aUN745Int1 = aUN745Int1 + 4;
if (0 != 0)
aUN745Int1 = aUN745Int1 + 8;
aUN745 = aUN745Int1;
aUN768Int1 = 0;
if (aUN818 != 0)
aUN768Int1 = aUN768Int1 + 1;
if (aUN817 != 0)
aUN768Int1 = aUN768Int1 + 2;
if (0 != 0)
aUN768Int1 = aUN768Int1 + 4;
if (0 != 0)
aUN768Int1 = aUN768Int1 + 8;
aUN768 = aUN768Int1;
aUN760Int1 = 0;
if (aUN799 != 0)
aUN760Int1 = aUN760Int1 + 1;
if (aUN800 != 0)
aUN760Int1 = aUN760Int1 + 2;
if (0 != 0)
aUN760Int1 = aUN760Int1 + 4;
if (0 != 0)
aUN760Int1 = aUN760Int1 + 8;
aUN760 = aUN760Int1;
aUN752Int1 = 0;
if (aUN787 != 0)
aUN752Int1 = aUN752Int1 + 1;
if (aUN788 != 0)
aUN752Int1 = aUN752Int1 + 2;
if (0 != 0)
aUN752Int1 = aUN752Int1 + 4;
if (0 != 0)
aUN752Int1 = aUN752Int1 + 8;
aUN752 = aUN752Int1;
aUN743Int1 = 0;
if (aUN775 != 0)
aUN743Int1 = aUN743Int1 + 1;
if (aUN776 != 0)
aUN743Int1 = aUN743Int1 + 2;
if (0 != 0)
aUN743Int1 = aUN743Int1 + 4;
if (0 != 0)
aUN743Int1 = aUN743Int1 + 8;
aUN743 = aUN743Int1;
aUN770Int1 = 0;
if (aUN813 != 0)
aUN770Int1 = aUN770Int1 + 1;
if (aUN814 != 0)
aUN770Int1 = aUN770Int1 + 2;
if (0 != 0)
aUN770Int1 = aUN770Int1 + 4;
if (0 != 0)
aUN770Int1 = aUN770Int1 + 8;
aUN770 = aUN770Int1;
aUN758Int1 = 0;
if (aUN804 != 0)
aUN758Int1 = aUN758Int1 + 1;
if (aUN803 != 0)
aUN758Int1 = aUN758Int1 + 2;
if (0 != 0)
aUN758Int1 = aUN758Int1 + 4;
if (0 != 0)
aUN758Int1 = aUN758Int1 + 8;
aUN758 = aUN758Int1;
aUN754Int1 = 0;
if (aUN792 != 0)
aUN754Int1 = aUN754Int1 + 1;
if (aUN791 != 0)
aUN754Int1 = aUN754Int1 + 2;
if (0 != 0)
aUN754Int1 = aUN754Int1 + 4;
if (0 != 0)
aUN754Int1 = aUN754Int1 + 8;
aUN754 = aUN754Int1;
aUN741Int1 = 0;
if (aUN780 != 0)
aUN741Int1 = aUN741Int1 + 1;
if (aUN779 != 0)
aUN741Int1 = aUN741Int1 + 2;
if (0 != 0)
aUN741Int1 = aUN741Int1 + 4;
if (0 != 0)
aUN741Int1 = aUN741Int1 + 8;
aUN741 = aUN741Int1;
aUN771Int1 = 0;
if (aUN820 != 0)
aUN771Int1 = aUN771Int1 + 1;
if (aUN819 != 0)
aUN771Int1 = aUN771Int1 + 2;
if (0 != 0)
aUN771Int1 = aUN771Int1 + 4;
if (0 != 0)
aUN771Int1 = aUN771Int1 + 8;
aUN771 = aUN771Int1;
aUN757Int1 = 0;
if (aUN797 != 0)
aUN757Int1 = aUN757Int1 + 1;
if (aUN798 != 0)
aUN757Int1 = aUN757Int1 + 2;
if (0 != 0)
aUN757Int1 = aUN757Int1 + 4;
if (0 != 0)
aUN757Int1 = aUN757Int1 + 8;
aUN757 = aUN757Int1;
aUN755Int1 = 0;
if (aUN785 != 0)
aUN755Int1 = aUN755Int1 + 1;
if (aUN786 != 0)
aUN755Int1 = aUN755Int1 + 2;
if (0 != 0)
aUN755Int1 = aUN755Int1 + 4;
if (0 != 0)
aUN755Int1 = aUN755Int1 + 8;
aUN755 = aUN755Int1;
aUN747Int1 = 0;
if (aUN773 != 0)
aUN747Int1 = aUN747Int1 + 1;
if (aUN774 != 0)
aUN747Int1 = aUN747Int1 + 2;
if (0 != 0)
aUN747Int1 = aUN747Int1 + 4;
if (0 != 0)
aUN747Int1 = aUN747Int1 + 8;
aUN747 = aUN747Int1;
aN340 = (aUN771)+(67);
aN339 = (aUN770)+(70);
aN338 = (aUN768)+(73);
aN337 = (aUN766)+(76);
aN336 = (aUN757)+(79);
aN335 = (aUN758)+(82);
aN334 = (aUN760)+(85);
aN333 = (aUN762)+(88);
aN332 = (aUN755)+(91);
aN331 = (aUN754)+(94);
aN330 = (aUN752)+(97);
aN329 = (aUN750)+(100);
aN328 = (aUN747)+(103);
aN327 = (aUN741)+(106);
aN326 = (aUN743)+(109);
aN325 = (aUN745)+(112);
aUN671Int1 =aN341;
if (aUN671Int1 < 0)
aUN671Int1 = 0;
aUN671 = aUN671Int1 & 0x80;
aUN670 = aUN671Int1 & 0x40;
aUN669 = aUN671Int1 & 0x20;
aUN668 = aUN671Int1 & 0x10;
aUN672 = aUN671Int1 & 0x08;
aUN673 = aUN671Int1 & 0x04;
aUN667 = aUN671Int1 & 0x02;
aUN666 = aUN671Int1 & 0x01;
aUN684Int1 =aN342;
if (aUN684Int1 < 0)
aUN684Int1 = 0;
aUN684 = aUN684Int1 & 0x80;
aUN685 = aUN684Int1 & 0x40;
aUN686 = aUN684Int1 & 0x20;
aUN687 = aUN684Int1 & 0x10;
aUN683 = aUN684Int1 & 0x08;
aUN682 = aUN684Int1 & 0x04;
aUN688 = aUN684Int1 & 0x02;
aUN689 = aUN684Int1 & 0x01;
aUN696Int1 =aN343;
if (aUN696Int1 < 0)
aUN696Int1 = 0;
aUN696 = aUN696Int1 & 0x80;
aUN697 = aUN696Int1 & 0x40;
aUN698 = aUN696Int1 & 0x20;
aUN699 = aUN696Int1 & 0x10;
aUN695 = aUN696Int1 & 0x08;
aUN694 = aUN696Int1 & 0x04;
aUN700 = aUN696Int1 & 0x02;
aUN701 = aUN696Int1 & 0x01;
aUN707Int1 =aN344;
if (aUN707Int1 < 0)
aUN707Int1 = 0;
aUN707 = aUN707Int1 & 0x20;
aUN708 = aUN707Int1 & 0x10;
aUN706 = aUN707Int1 & 0x08;
aUN705 = aUN707Int1 & 0x04;
aUN709 = aUN707Int1 & 0x02;
aUN710 = aUN707Int1 & 0x01;
aUN717Int1 = 0;
if (aUN670 != 0)
aUN717Int1 = aUN717Int1 + 1;
if (aUN671 != 0)
aUN717Int1 = aUN717Int1 + 2;
if (0 != 0)
aUN717Int1 = aUN717Int1 + 4;
if (0 != 0)
aUN717Int1 = aUN717Int1 + 8;
aUN717 = aUN717Int1;
aUN721Int1 = 0;
if (aUN685 != 0)
aUN721Int1 = aUN721Int1 + 1;
if (aUN684 != 0)
aUN721Int1 = aUN721Int1 + 2;
if (0 != 0)
aUN721Int1 = aUN721Int1 + 4;
if (0 != 0)
aUN721Int1 = aUN721Int1 + 8;
aUN721 = aUN721Int1;
aUN733Int1 = 0;
if (aUN697 != 0)
aUN733Int1 = aUN733Int1 + 1;
if (aUN696 != 0)
aUN733Int1 = aUN733Int1 + 2;
if (0 != 0)
aUN733Int1 = aUN733Int1 + 4;
if (0 != 0)
aUN733Int1 = aUN733Int1 + 8;
aUN733 = aUN733Int1;
aUN715Int1 = 0;
if (aUN668 != 0)
aUN715Int1 = aUN715Int1 + 1;
if (aUN669 != 0)
aUN715Int1 = aUN715Int1 + 2;
if (0 != 0)
aUN715Int1 = aUN715Int1 + 4;
if (0 != 0)
aUN715Int1 = aUN715Int1 + 8;
aUN715 = aUN715Int1;
aUN723Int1 = 0;
if (aUN687 != 0)
aUN723Int1 = aUN723Int1 + 1;
if (aUN686 != 0)
aUN723Int1 = aUN723Int1 + 2;
if (0 != 0)
aUN723Int1 = aUN723Int1 + 4;
if (0 != 0)
aUN723Int1 = aUN723Int1 + 8;
aUN723 = aUN723Int1;
aUN731Int1 = 0;
if (aUN699 != 0)
aUN731Int1 = aUN731Int1 + 1;
if (aUN698 != 0)
aUN731Int1 = aUN731Int1 + 2;
if (0 != 0)
aUN731Int1 = aUN731Int1 + 4;
if (0 != 0)
aUN731Int1 = aUN731Int1 + 8;
aUN731 = aUN731Int1;
aUN738Int1 = 0;
if (aUN708 != 0)
aUN738Int1 = aUN738Int1 + 1;
if (aUN707 != 0)
aUN738Int1 = aUN738Int1 + 2;
if (0 != 0)
aUN738Int1 = aUN738Int1 + 4;
if (0 != 0)
aUN738Int1 = aUN738Int1 + 8;
aUN738 = aUN738Int1;
aUN713Int1 = 0;
if (aUN673 != 0)
aUN713Int1 = aUN713Int1 + 1;
if (aUN672 != 0)
aUN713Int1 = aUN713Int1 + 2;
if (0 != 0)
aUN713Int1 = aUN713Int1 + 4;
if (0 != 0)
aUN713Int1 = aUN713Int1 + 8;
aUN713 = aUN713Int1;
aUN725Int1 = 0;
if (aUN682 != 0)
aUN725Int1 = aUN725Int1 + 1;
if (aUN683 != 0)
aUN725Int1 = aUN725Int1 + 2;
if (0 != 0)
aUN725Int1 = aUN725Int1 + 4;
if (0 != 0)
aUN725Int1 = aUN725Int1 + 8;
aUN725 = aUN725Int1;
aUN729Int1 = 0;
if (aUN694 != 0)
aUN729Int1 = aUN729Int1 + 1;
if (aUN695 != 0)
aUN729Int1 = aUN729Int1 + 2;
if (0 != 0)
aUN729Int1 = aUN729Int1 + 4;
if (0 != 0)
aUN729Int1 = aUN729Int1 + 8;
aUN729 = aUN729Int1;
aUN740Int1 = 0;
if (aUN705 != 0)
aUN740Int1 = aUN740Int1 + 1;
if (aUN706 != 0)
aUN740Int1 = aUN740Int1 + 2;
if (0 != 0)
aUN740Int1 = aUN740Int1 + 4;
if (0 != 0)
aUN740Int1 = aUN740Int1 + 8;
aUN740 = aUN740Int1;
aUN712Int1 = 0;
if (aUN666 != 0)
aUN712Int1 = aUN712Int1 + 1;
if (aUN667 != 0)
aUN712Int1 = aUN712Int1 + 2;
if (0 != 0)
aUN712Int1 = aUN712Int1 + 4;
if (0 != 0)
aUN712Int1 = aUN712Int1 + 8;
aUN712 = aUN712Int1;
aUN726Int1 = 0;
if (aUN689 != 0)
aUN726Int1 = aUN726Int1 + 1;
if (aUN688 != 0)
aUN726Int1 = aUN726Int1 + 2;
if (0 != 0)
aUN726Int1 = aUN726Int1 + 4;
if (0 != 0)
aUN726Int1 = aUN726Int1 + 8;
aUN726 = aUN726Int1;
aUN728Int1 = 0;
if (aUN701 != 0)
aUN728Int1 = aUN728Int1 + 1;
if (aUN700 != 0)
aUN728Int1 = aUN728Int1 + 2;
if (0 != 0)
aUN728Int1 = aUN728Int1 + 4;
if (0 != 0)
aUN728Int1 = aUN728Int1 + 8;
aUN728 = aUN728Int1;
aUN736Int1 = 0;
if (aUN710 != 0)
aUN736Int1 = aUN736Int1 + 1;
if (aUN709 != 0)
aUN736Int1 = aUN736Int1 + 2;
if (0 != 0)
aUN736Int1 = aUN736Int1 + 4;
if (0 != 0)
aUN736Int1 = aUN736Int1 + 8;
aUN736 = aUN736Int1;
aN324 = (aUN712)+(115);
aN323 = (aUN713)+(118);
aN322 = (aUN715)+(121);
aN321 = (aUN717)+(124);
aN320 = (aUN726)+(127);
aN319 = (aUN725)+(130);
aN318 = (aUN723)+(133);
aN317 = (aUN721)+(136);
aN316 = (aUN728)+(139);
aN315 = (aUN729)+(142);
aN314 = (aUN731)+(145);
aN313 = (aUN733)+(148);
aN312 = (aUN736)+(151);
aN311 = (aUN740)+(154);
aN310 = (aUN738)+(157);
aUN1123 = aN346 != aUN1121;
aUN1126 = aN348 != aUN1128;
aUN1118 = aN342 != aUN1120;
aUN1109 = aN344 != aUN1060;
aUN1124=aUN1123 && _CAN_MAINTASK__123_g.rx;
  if(aUN1124) {
    aUN1122 = aN346;
  }
aUN1125=aUN1126 && _CAN_MAINTASK__123_g.rx;
  if(aUN1125) {
    aUN1127 = aN348;
  }
aUN1117=aUN1118 && _CAN_MAINTASK__123_g.rx;
  if(aUN1117) {
    aUN1119 = aN342;
  }
aUN1113=aUN1109 && _CAN_MAINTASK__123_g.rx;
  if(aUN1113) {
    aUN1107 = aN344;
  }
aN644=aUN1113 | aUN937 | aUN1117 | aUN998 | aUN1125 | aUN1133 | aUN1124 | aUN1132;
aUN397=_CAN_MAINTASK__123_h.data[0];
aUN398=_CAN_MAINTASK__123_h.data[1];
aN253Int1 =aUN398;
if (aN253Int1 < 0)
aN253Int1 = 0;
aN253 = aN253Int1 & 0x08;
aN203 = aN253Int1 & 0x04;
aN202 = aN253Int1 & 0x02;
aN201 = aN253Int1 & 0x01;
aN200Int1 =aUN397;
if (aN200Int1 < 0)
aN200Int1 = 0;
aN200 = aN200Int1 & 0x80;
aN199 = aN200Int1 & 0x40;
aN198 = aN200Int1 & 0x20;
aN197 = aN200Int1 & 0x10;
aN205 = aN200Int1 & 0x08;
aN252 = aN200Int1 & 0x04;
aN196 = aN200Int1 & 0x02;
aN195 = aN200Int1 & 0x01;
if ((aN203 && !aUN405Old1) || (!aN203 && aUN405Old1))
aUN405=1;
else
aUN405=0;
aUN405Old1 = aN203;
if ((aN201 && !aUN407Old1) || (!aN201 && aUN407Old1))
aUN407=1;
else
aUN407=0;
aUN407Old1 = aN201;
if ((aN199 && !aUN409Old1) || (!aN199 && aUN409Old1))
aUN409=1;
else
aUN409=0;
aUN409Old1 = aN199;
if ((aN197 && !aUN411Old1) || (!aN197 && aUN411Old1))
aUN411=1;
else
aUN411=0;
aUN411Old1 = aN197;
if ((aN253 && !aUN401Old1) || (!aN253 && aUN401Old1))
aUN401=1;
else
aUN401=0;
aUN401Old1 = aN253;
if ((aN202 && !aUN406Old1) || (!aN202 && aUN406Old1))
aUN406=1;
else
aUN406=0;
aUN406Old1 = aN202;
if ((aN200 && !aUN408Old1) || (!aN200 && aUN408Old1))
aUN408=1;
else
aUN408=0;
aUN408Old1 = aN200;
if ((aN198 && !aUN410Old1) || (!aN198 && aUN410Old1))
aUN410=1;
else
aUN410=0;
aUN410Old1 = aN198;
aUN402=aUN411 | aUN410 | aUN409 | aUN408 | aUN407 | aUN406 | aUN405 | aUN401;
if ((aN252 && !aUN399Old1) || (!aN252 && aUN399Old1))
aUN399=1;
else
aUN399=0;
aUN399Old1 = aN252;
if ((aN195 && !aUN404Old1) || (!aN195 && aUN404Old1))
aUN404=1;
else
aUN404=0;
aUN404Old1 = aN195;
if ((aN205 && !aUN400Old1) || (!aN205 && aUN400Old1))
aUN400=1;
else
aUN400=0;
aUN400Old1 = aN205;
if ((aN196 && !aUN403Old1) || (!aN196 && aUN403Old1))
aUN403=1;
else
aUN403=0;
aUN403Old1 = aN196;
aN204=aUN402 | aUN404 | aUN403 | aUN399 | aUN400;
aUN291Int1 =aN213;
if (aUN291Int1 < 0)
aUN291Int1 = 0;
aUN291 = aUN291Int1 & 0x80;
aUN292 = aUN291Int1 & 0x40;
aUN293 = aUN291Int1 & 0x20;
aUN294 = aUN291Int1 & 0x10;
aUN283Int1 =aN214;
if (aUN283Int1 < 0)
aUN283Int1 = 0;
aUN283 = aUN283Int1 & 0x80;
aUN284 = aUN283Int1 & 0x40;
aUN285 = aUN283Int1 & 0x20;
aUN286 = aUN283Int1 & 0x10;
aUN287 = aUN283Int1 & 0x08;
aUN288 = aUN283Int1 & 0x04;
aUN289 = aUN283Int1 & 0x02;
aUN290 = aUN283Int1 & 0x01;
aUN275Int1 =aN208;
if (aUN275Int1 < 0)
aUN275Int1 = 0;
aUN275 = aUN275Int1 & 0x80;
aUN276 = aUN275Int1 & 0x40;
aUN277 = aUN275Int1 & 0x20;
aUN278 = aUN275Int1 & 0x10;
aUN279 = aUN275Int1 & 0x08;
aUN280 = aUN275Int1 & 0x04;
aUN281 = aUN275Int1 & 0x02;
aUN282 = aUN275Int1 & 0x01;
aUN273 = 0;
if(aUN294)
{
  aUN273 = aUN273 + 1;
}
if(aUN293)
{
  aUN273 = aUN273 + 2;
}
if(aUN292)
{
  aUN273 = aUN273 + 4;
}
if(aUN291)
{
  aUN273 = aUN273 + 8;
}
if(aUN290)
{
  aUN273 = aUN273 + 16;
}
if(aUN289)
{
  aUN273 = aUN273 + 32;
}
if(aUN288)
{
  aUN273 = aUN273 + 64;
}
if(aUN287)
{
  aUN273 = aUN273 + 128;
}
aUN272 = 0;
if(aUN286)
{
  aUN272 = aUN272 + 1;
}
if(aUN285)
{
  aUN272 = aUN272 + 2;
}
if(aUN284)
{
  aUN272 = aUN272 + 4;
}
if(aUN283)
{
  aUN272 = aUN272 + 8;
}
if(aUN282)
{
  aUN272 = aUN272 + 16;
}
if(aUN281)
{
  aUN272 = aUN272 + 32;
}
if(aUN280)
{
  aUN272 = aUN272 + 64;
}
if(aUN279)
{
  aUN272 = aUN272 + 128;
}
aUN428 = 0;
if(aUN278)
{
  aUN428 = aUN428 + 1;
}
if(aUN277)
{
  aUN428 = aUN428 + 2;
}
if(aUN276)
{
  aUN428 = aUN428 + 4;
}
if(aUN275)
{
  aUN428 = aUN428 + 8;
}
aUN352 = 0;
aUN271=(aUN273&(255))|(((U16)(aUN272))<<8);
aUN270=(aUN428&(255))|(((U16)(aUN352))<<8);
aN215=(aUN271&(65535))|(((U32)(aUN270))<<16);
  aUN302 = (aN254) - (40);
aUN307=(9)*(aUN302);
aUN255Int1=((aUN307<0)?-1:1);
aUN255=(((((aUN307*2))/5)+aUN255Int1)/2);
MAINTASKobjd.Input_B_CAN_Input_N_ECU_Temp_S16 = (32)+(aUN255);
  aE1UN6 = (aN265) - (50);
aE1UN2=(9)*(aE1UN6);
aE1UN7Int1=((aE1UN2<0)?-1:1);
aE1UN7=(((((aE1UN2*2))/5)+aE1UN7Int1)/2);
aE1N1 = (32)+(aE1UN7);
  aE2UN6 = (aN264) - (50);
aE2UN2=(9)*(aE2UN6);
aE2UN7Int1=((aE2UN2<0)?-1:1);
aE2UN7=(((((aE2UN2*2))/5)+aE2UN7Int1)/2);
aE2N1 = (32)+(aE2UN7);
  aE3UN6 = (aN261) - (50);
aE3UN2=(9)*(aE3UN6);
aE3UN7Int1=((aE3UN2<0)?-1:1);
aE3UN7=(((((aE3UN2*2))/5)+aE3UN7Int1)/2);
aE3N1 = (32)+(aE3UN7);
aN210Int1 =aUN256;
if (aN210Int1 < 0)
aN210Int1 = 0;
aN210 = aN210Int1 & 0x02;
aN209 = aN210Int1 & 0x01;
aUN229=(aUN237&(255))|(((U16)(aUN236))<<8);
aUN228=(aUN235&(255))|(((U16)(aUN234))<<8);
aUN246=(aUN247&(255))|(((U16)(aUN248))<<8);
aUN245=(aUN249&(255))|(((U16)(aUN250))<<8);
aUN334=_CAN_MAINTASK__123_f.data[0];
aUN319=_CAN_MAINTASK__123_f.data[1];
aUN320=_CAN_MAINTASK__123_f.data[2];
aUN318=_CAN_MAINTASK__123_f.data[3];
aUN346=_CAN_MAINTASK__123_f.data[4];
aUN347=_CAN_MAINTASK__123_f.data[5];
aUN342Int1 =aUN334;
if (aUN342Int1 < 0)
aUN342Int1 = 0;
aUN342 = aUN342Int1 & 0x80;
aUN341 = aUN342Int1 & 0x40;
aUN340 = aUN342Int1 & 0x20;
aUN339 = aUN342Int1 & 0x10;
aUN338 = aUN342Int1 & 0x08;
aUN337 = aUN342Int1 & 0x04;
aUN336 = aUN342Int1 & 0x02;
aUN335 = aUN342Int1 & 0x01;
aN242Int1 =aUN320;
if (aN242Int1 < 0)
aN242Int1 = 0;
aN242 = aN242Int1 & 0x80;
aN243 = aN242Int1 & 0x40;
aN244 = aN242Int1 & 0x20;
aN245 = aN242Int1 & 0x10;
aN227 = aN242Int1 & 0x08;
aN228 = aN242Int1 & 0x04;
aN229 = aN242Int1 & 0x02;
aN233 = aN242Int1 & 0x01;
aUN378Int1 =aUN346;
if (aUN378Int1 < 0)
aUN378Int1 = 0;
aUN378 = aUN378Int1 & 0x80;
aUN377 = aUN378Int1 & 0x40;
aUN386Int1 =aUN347;
if (aUN386Int1 < 0)
aUN386Int1 = 0;
aUN386 = aUN386Int1 & 0x80;
aUN385 = aUN386Int1 & 0x40;
aUN384 = aUN386Int1 & 0x20;
aUN383 = aUN386Int1 & 0x10;
aUN382 = aUN386Int1 & 0x08;
aUN381 = aUN386Int1 & 0x04;
aUN380 = aUN386Int1 & 0x02;
aUN379 = aUN386Int1 & 0x01;
aN230Int1 =aUN318;
if (aN230Int1 < 0)
aN230Int1 = 0;
aN230 = aN230Int1 & 0x40;
aUN391 = aN230Int1 & 0x20;
aUN392 = aN230Int1 & 0x10;
aUN393 = aN230Int1 & 0x08;
aN240 = aN230Int1 & 0x04;
aN241 = aN230Int1 & 0x02;
aN239 = aN230Int1 & 0x01;
aUN389 = 0;
if(aUN377)
{
  aUN389 = aUN389 + 1;
}
if(aUN378)
{
  aUN389 = aUN389 + 2;
}
if(aUN379)
{
  aUN389 = aUN389 + 4;
}
if(aUN380)
{
  aUN389 = aUN389 + 8;
}
if(aUN381)
{
  aUN389 = aUN389 + 16;
}
if(aUN382)
{
  aUN389 = aUN389 + 32;
}
if(aUN383)
{
  aUN389 = aUN389 + 64;
}
if(aUN384)
{
  aUN389 = aUN389 + 128;
}
aUN388Int1 = 0;
if (aUN385 != 0)
aUN388Int1 = aUN388Int1 + 1;
if (aUN386 != 0)
aUN388Int1 = aUN388Int1 + 2;
if (0 != 0)
aUN388Int1 = aUN388Int1 + 4;
if (0 != 0)
aUN388Int1 = aUN388Int1 + 8;
aUN388 = aUN388Int1;
aN236Int1 = 0;
if (aUN335 != 0)
aN236Int1 = aN236Int1 + 1;
if (aUN336 != 0)
aN236Int1 = aN236Int1 + 2;
if (aUN337 != 0)
aN236Int1 = aN236Int1 + 4;
if (0 != 0)
aN236Int1 = aN236Int1 + 8;
MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Battery_Mode_U8 = aN236Int1;
aN235Int1 = 0;
if (aUN338 != 0)
aN235Int1 = aN235Int1 + 1;
if (aUN339 != 0)
aN235Int1 = aN235Int1 + 2;
if (aUN340 != 0)
aN235Int1 = aN235Int1 + 4;
if (0 != 0)
aN235Int1 = aN235Int1 + 8;
MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_FET_Array_State_U8 = aN235Int1;
aN234Int1 = 0;
if (aUN341 != 0)
aN234Int1 = aN234Int1 + 1;
if (aUN342 != 0)
aN234Int1 = aN234Int1 + 2;
if (0 != 0)
aN234Int1 = aN234Int1 + 4;
if (0 != 0)
aN234Int1 = aN234Int1 + 8;
MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_SOC_Mode_U8 = aN234Int1;
if ((aN241 && !aUN325Old1) || (!aN241 && aUN325Old1))
aUN325=1;
else
aUN325=0;
aUN325Old1 = aN241;
if ((aN230 && !aUN321Old1) || (!aN230 && aUN321Old1))
aUN321=1;
else
aUN321=0;
aUN321Old1 = aN230;
aN249=(aUN389&(255))|(((U16)(aUN388))<<8);
if ((aN239 && !aUN326Old1) || (!aN239 && aUN326Old1))
aUN326=1;
else
aUN326=0;
aUN326Old1 = aN239;
if ((aN240 && !aUN322Old1) || (!aN240 && aUN322Old1))
aUN322=1;
else
aUN322=0;
aUN322Old1 = aN240;
aN248Int1 = 0;
if (aUN393 != 0)
aN248Int1 = aN248Int1 + 1;
if (aUN392 != 0)
aN248Int1 = aN248Int1 + 2;
if (aUN391 != 0)
aN248Int1 = aN248Int1 + 4;
if (0 != 0)
aN248Int1 = aN248Int1 + 8;
aN248 = aN248Int1;
aN226Int1 =aUN319;
if (aN226Int1 < 0)
aN226Int1 = 0;
aN226 = aN226Int1 & 0x80;
aN225 = aN226Int1 & 0x40;
aN224 = aN226Int1 & 0x20;
aN223 = aN226Int1 & 0x10;
aN231 = aN226Int1 & 0x08;
aN232 = aN226Int1 & 0x04;
aN220 = aN226Int1 & 0x02;
aN207 = aN226Int1 & 0x01;
aUN367=aUN321 | aUN322 | aUN325 | aUN326;
if (10!=0){
MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Limit_Perc_W_U8=(aN249)/(U32)(10);
}else{
MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Limit_Perc_W_U8=0;}
aUN395=(10)*(MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Limit_Perc_W_U8);
  MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Limit_Perc_D_U8 = (aN249) - (aUN395);
if ((aN229 && !aUN327Old1) || (!aN229 && aUN327Old1))
aUN327=1;
else
aUN327=0;
aUN327Old1 = aN229;
if ((aN227 && !aUN329Old1) || (!aN227 && aUN329Old1))
aUN329=1;
else
aUN329=0;
aUN329Old1 = aN227;
if ((aN244 && !aUN331Old1) || (!aN244 && aUN331Old1))
aUN331=1;
else
aUN331=0;
aUN331Old1 = aN244;
if ((aN242 && !aUN333Old1) || (!aN242 && aUN333Old1))
aUN333=1;
else
aUN333=0;
aUN333Old1 = aN242;
if ((aN233 && !aUN323Old1) || (!aN233 && aUN323Old1))
aUN323=1;
else
aUN323=0;
aUN323Old1 = aN233;
if ((aN228 && !aUN328Old1) || (!aN228 && aUN328Old1))
aUN328=1;
else
aUN328=0;
aUN328Old1 = aN228;
if ((aN245 && !aUN330Old1) || (!aN245 && aUN330Old1))
aUN330=1;
else
aUN330=0;
aUN330Old1 = aN245;
if ((aN243 && !aUN332Old1) || (!aN243 && aUN332Old1))
aUN332=1;
else
aUN332=0;
aUN332Old1 = aN243;
aUN324=aUN333 | aUN332 | aUN331 | aUN330 | aUN329 | aUN328 | aUN327 | aUN323;
if ((aN220 && !aUN375Old1) || (!aN220 && aUN375Old1))
aUN375=1;
else
aUN375=0;
aUN375Old1 = aN220;
if ((aN231 && !aUN373Old1) || (!aN231 && aUN373Old1))
aUN373=1;
else
aUN373=0;
aUN373Old1 = aN231;
if ((aN224 && !aUN371Old1) || (!aN224 && aUN371Old1))
aUN371=1;
else
aUN371=0;
aUN371Old1 = aN224;
if ((aN226 && !aUN369Old1) || (!aN226 && aUN369Old1))
aUN369=1;
else
aUN369=0;
aUN369Old1 = aN226;
if ((aN207 && !aUN376Old1) || (!aN207 && aUN376Old1))
aUN376=1;
else
aUN376=0;
aUN376Old1 = aN207;
if ((aN232 && !aUN374Old1) || (!aN232 && aUN374Old1))
aUN374=1;
else
aUN374=0;
aUN374Old1 = aN232;
if ((aN223 && !aUN372Old1) || (!aN223 && aUN372Old1))
aUN372=1;
else
aUN372=0;
aUN372Old1 = aN223;
if ((aN225 && !aUN370Old1) || (!aN225 && aUN370Old1))
aUN370=1;
else
aUN370=0;
aUN370Old1 = aN225;
aUN368=aUN369 | aUN370 | aUN371 | aUN372 | aUN373 | aUN374 | aUN375 | aUN376;
aN247=aUN367 | aUN324 | aUN368;
if (100!=0){
aN187=(aN215)/(100);
}else{
aN187=0;}
aUN298Int1 =aN219;
if (aUN298Int1 < 0)
aUN298Int1 = 0;
aUN298 = aUN298Int1 & 0x08;
aUN297 = aUN298Int1 & 0x04;
aUN296 = aUN298Int1 & 0x02;
aUN295 = aUN298Int1 & 0x01;
aUN301 = 0;
if(aUN295)
{
  aUN301 = aUN301 + 1;
}
if(aUN296)
{
  aUN301 = aUN301 + 2;
}
if(aUN297)
{
  aUN301 = aUN301 + 4;
}
if(aUN298)
{
  aUN301 = aUN301 + 8;
}
aUN300=(aN217&(255))|(((U16)(aN218))<<8);
aN216=(aUN300&(255))|(((U16)(aUN301))<<8);
aUN433=(aN259&(255))|(((U16)(aN258))<<8);
aUN432=(aN257&(255))|(((U16)(aN256))<<8);
aUN435=(aUN433&(65535))|(((U32)(aUN432))<<16);
  aN222 = (aUN435) - (360000);
aUN251=(aUN246&(65535))|(((U32)(aUN245))<<16);
aUN230 = (aUN228)+(aUN229);
  aE4UN6 = (aN263) - (50);
aE4UN2=(9)*(aE4UN6);
aE4UN7Int1=((aE4UN2<0)?-1:1);
aE4UN7=(((((aE4UN2*2))/5)+aE4UN7Int1)/2);
MAINTASKobjd.Input_B_CAN_Input_N_Cell_Temp1_S16 = (32)+(aE4UN7);
  aE5UN6 = (aN262) - (50);
aE5UN2=(9)*(aE5UN6);
aE5UN7Int1=((aE5UN2<0)?-1:1);
aE5UN7=(((((aE5UN2*2))/5)+aE5UN7Int1)/2);
MAINTASKobjd.Input_B_CAN_Input_N_Cell_Temp2_S16 = (32)+(aE5UN7);
if (100!=0){
MAINTASKobjd.Input_B_CAN_Input_N_Batt_Volt_W_U8=(aN187)/(U32)(100);
}else{
MAINTASKobjd.Input_B_CAN_Input_N_Batt_Volt_W_U8=0;}
aE6UN2=(100)*(MAINTASKobjd.Input_B_CAN_Input_N_Batt_Volt_W_U8);
  MAINTASKobjd.Input_B_CAN_Input_N_Batt_Volt_D_U8 = (aN187) - (aE6UN2);

  _CALL_St_FAULTBITTEXT_Ccp_St_FAULTBITTEXT_Exec(i__330e6c97_134c_4126_bedc_2d3b4fd6b1cd, 1, aN209, aN210, Unused_S32__4_Return, Unused_U16__4_RuntimeErrors, aN193, aN192)

if (aN207 && !aN358Old1)
aN358=1;
else
aN358=0;
aN358Old1 = aN207;
if (aN220 && !aN357Old1)
aN357=1;
else
aN357=0;
aN357Old1 = aN220;
if ((aN232 && !aN354Old1) || (!aN232 && aN354Old1))
aN354=1;
else
aN354=0;
aN354Old1 = aN232;
if (aN231 && !aN353Old1)
aN353=1;
else
aN353=0;
aN353Old1 = aN231;
if ((aN223 && !aN351Old1) || (!aN223 && aN351Old1))
aN351=1;
else
aN351=0;
aN351Old1 = aN223;
if (aN224 && !aN308Old1)
aN308=1;
else
aN308=0;
aN308Old1 = aN224;
if (aN225 && !aN306Old1)
aN306=1;
else
aN306=0;
aN306Old1 = aN225;
  if(aN207) {
    aN359 = 27;
  }
  if(aN220) {
    aN356 = 28;
  }
  _ShLocTmpVar_S32_1 = !(aN232);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN355 = 30;
      break;
    default:
      aN355 = 29;
  }
  if(aN231) {
    aN352 = 31;
  }
  _ShLocTmpVar_S32_1 = !(aN223);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN350 = 33;
      break;
    default:
      aN350 = 32;
  }
  if(aN225) {
    aN305 = 35;
  }
  if(aN224) {
    aN309 = 34;
  }
  _ShLocTmpVar_S32_1 = MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Battery_Mode_U8;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN365 = 12;
      break;
    case 1:
      aN365 = 13;
      break;
    case 2:
      aN365 = 14;
      break;
    case 3:
      aN365 = 15;
      break;
    default:
      aN365 = 16;
  }
  _ShLocTmpVar_S32_1 = MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_FET_Array_State_U8;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN363 = 17;
      break;
    case 1:
      aN363 = 18;
      break;
    case 2:
      aN363 = 19;
      break;
    case 3:
      aN363 = 20;
      break;
    case 4:
      aN363 = 21;
      break;
    default:
      aN363 = 22;
  }
  _ShLocTmpVar_S32_1 = MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_SOC_Mode_U8;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN361 = 23;
      break;
    case 1:
      aN361 = 24;
      break;
    case 2:
      aN361 = 25;
      break;
    default:
      aN361 = 26;
  }
aUN651 = aUN651Old1 ;
aUN651Old1 = aN365;
aUN620 = aUN620Old1 ;
aUN620Old1 = aN363;
aUN615 = aUN615Old1 ;
aUN615Old1 = aN361;
aN364 = aN365 != aUN651;
aN362 = aN363 != aUN620;
aN360 = aN361 != aUN615;
if ((aN226 && !aN283Old1) || (!aN226 && aN283Old1))
aN283=1;
else
aN283=0;
aN283Old1 = aN226;
if ((aN233 && !aN286Old1) || (!aN233 && aN286Old1))
aN286=1;
else
aN286=0;
aN286Old1 = aN233;
if ((aN229 && !aN288Old1) || (!aN229 && aN288Old1))
aN288=1;
else
aN288=0;
aN288Old1 = aN229;
if ((aN228 && !aN289Old1) || (!aN228 && aN289Old1))
aN289=1;
else
aN289=0;
aN289Old1 = aN228;
if (aN227 && !aN282Old1)
aN282=1;
else
aN282=0;
aN282Old1 = aN227;
if ((aN245 && !aN300Old1) || (!aN245 && aN300Old1))
aN300=1;
else
aN300=0;
aN300Old1 = aN245;
if ((aN244 && !aN297Old1) || (!aN244 && aN297Old1))
aN297=1;
else
aN297=0;
aN297Old1 = aN244;
if ((aN243 && !aN295Old1) || (!aN243 && aN295Old1))
aN295=1;
else
aN295=0;
aN295Old1 = aN243;
if ((aN242 && !aN293Old1) || (!aN242 && aN293Old1))
aN293=1;
else
aN293=0;
aN293Old1 = aN242;
if (aN239 && !aN301Old1)
aN301=1;
else
aN301=0;
aN301Old1 = aN239;
if (aN241 && !aN304Old1)
aN304=1;
else
aN304=0;
aN304Old1 = aN241;
}
static void _FNC_123_m(void)
{
       U8 aN284;
  S32 _ShLocTmpVar_S32_1;
       U8 aN285;
       U8 aN287;
       U8 aN290;
static U8 aN281;
       U8 aN299;
       U8 aN298;
       U8 aN296;
       U8 aN291;
static U8 aN302;
static U8 aN303;
       BOOL aN279;
static BOOL aN279Old1;
       BOOL aN278;
static BOOL aN278Old1;
       U8 aN280;
       U8 aN260;
       U8 aN277;
       U8 aUN355;
static U8 aUN355Old1;
       BOOL aN274;
       BOOL aN366;
static BOOL aN366Old1;
       BOOL aN389;
static BOOL aN389Old1;
       BOOL aN383;
static BOOL aN383Old1;
       BOOL aN384;
static BOOL aN384Old1;
       BOOL aN379;
static BOOL aN379Old1;
       BOOL aN380;
static BOOL aN380Old1;
       BOOL aN375;
static BOOL aN375Old1;
       BOOL aN376;
static BOOL aN376Old1;
       BOOL aN371;
static BOOL aN371Old1;
       BOOL aN372;
static BOOL aN372Old1;
       BOOL aN367;
static BOOL aN367Old1;
       BOOL aN368;
static BOOL aN368Old1;
static U8 aN388;
static U8 aN385;
static U8 aN381;
static U8 aN377;
static U8 aN373;
static U8 aN369;
static U8 aN387;
static U8 aN386;
static U8 aN382;
static U8 aN378;
static U8 aN374;
static U8 aN370;
       U16 aUN243;
       U16 aN191;
       U16 aUN232;
       U16 aN186;
       U16 aE7UN2;
       U8 aN664;
       U16 aE8UN2;
       U8 aN665;
       S32 aUN316;
       S8 aUN350;
       S8 aUN353;
static BOOL aUN348;
       S8 aUN305;
       U8 aN628;
       U8 aN631;
       U8 aN633;
       U8 aN634;
       U8 aN637;
       U8 aN638;
       U8 aN639;
       U8 aN642;
       U8 aN647;
       BOOL aUN644;
       BOOL aUN1139;
static BOOL aUN1139Old1;
  S32 Unused_S32__4_Return;
  U16 Unused_U16__4_RuntimeErrors;
  static U8 AB_i__330e7d66_5afe_8b8d_7143_95819c746d3c_Org_ints[161];
static BOOL aN392;
static BOOL aN390Old1;
static U8 aN390Old2;
       BOOL aUN639;
       BOOL aUN1182;
static BOOL aUN1182Old1;
       BOOL aUN1176;
       U8 aUN1178;
       U8 aUN1179;
       BOOL aUN866;
 U16 _U16Index1;
       BOOL aUN645;
static BOOL aUN645Old1;
       BOOL aUN865;
static BOOL aUN865Old1;
       BOOL aUN649;
       BOOL aUN650;
       BOOL aUN1061;
static BOOL aUN1061Old1;
       BOOL aUN1175;
static BOOL aUN1175Old1;
       BOOL aUN1181;
static BOOL aUN1181Old1;
       BOOL aUN1062;
static BOOL aUN1062Old1;
       BOOL aUN662;
       BOOL aUN648;
       U16 aUN1105;
       U16 aUN1104;
       U16 aUN1074;
       U16 aUN1075;
       U16 aUN1071;
       U16 aUN1072;
       U16 aUN1068;
       U16 aUN1069;
       U16 aUN1065;
       U16 aUN1066;
       BOOL aUN1166;
       BOOL aUN1108;
       U32 aUN1112;
       U32 aUN1073;
       U32 aUN1070;
       U32 aUN1067;
       U32 aUN1064;
       BOOL aUN1110;
static BOOL aUN1110Old1;
       BOOL aUN1056;
static BOOL aUN1056Old1;
       BOOL aUN1057;
static BOOL aUN1057Old1;
       BOOL aUN1058;
static BOOL aUN1058Old1;
       BOOL aUN1059;
static BOOL aUN1059Old1;
       BOOL aUN1049;
static BOOL aUN1049Old1;
       BOOL aUN1116;
       BOOL aUN1079;
       BOOL aUN1078;
       BOOL aUN1077;
       BOOL aUN1076;
       BOOL aUN1115;
       BOOL aUN1095;
       BOOL aUN1090;
       BOOL aUN1085;
       BOOL aUN1080;
static U32 aUN928;
static U32 aUN1097;
static U32 aUN1092;
static U32 aUN1087;
static U32 aUN1082;
       U16 aUN1101;
       U16 aUN1100;
       U16 aUN1098;
       U16 aUN1099;
       U16 aUN1093;
       U16 aUN1094;
       U16 aUN1088;
       U16 aUN1089;
       U16 aUN1083;
       U16 aUN1084;
       U16 aUN884;
       U16 aUN885;
       U16 aUN915;
       U16 aUN914;
       U16 aUN918;
       U16 aUN917;
       U16 aUN921;
       U16 aUN920;
       U16 aUN924;
       U16 aUN923;
       BOOL aUN1165;
       U32 aUN877;
       U32 aUN916;
       U32 aUN919;
       U32 aUN922;
       U32 aUN925;
       BOOL aUN881;
       BOOL aUN879;
static BOOL aUN879Old1;
       BOOL aUN933;
static BOOL aUN933Old1;
       BOOL aUN932;
static BOOL aUN932Old1;
       BOOL aUN931;
static BOOL aUN931Old1;
       BOOL aUN930;
static BOOL aUN930Old1;
       BOOL aUN880;
static BOOL aUN880Old1;
       BOOL aUN873;
       BOOL aUN910;
       BOOL aUN911;
       BOOL aUN912;
       BOOL aUN913;
       BOOL aUN874;
       BOOL aUN894;
       BOOL aUN899;
       BOOL aUN904;
       BOOL aUN909;
static U32 aUN887;
static U32 aUN892;
static U32 aUN897;
static U32 aUN902;
static U32 aUN907;
       U16 aUN888;
       U16 aUN889;
       U16 aUN891;
       U16 aUN890;
       U16 aUN896;
       U16 aUN895;
       U16 aUN901;
       U16 aUN900;
       U16 aUN906;
       U16 aUN905;
       U16 aUN823;
       U16 aUN824;
       U16 aUN854;
       U16 aUN853;
       U16 aUN857;
       U16 aUN856;
       U16 aUN860;
       U16 aUN859;
       U16 aUN863;
       U16 aUN862;
       BOOL aUN1164;
       U32 aUN661;
       U32 aUN855;
       U32 aUN858;
       U32 aUN861;
       U32 aUN864;
       BOOL aUN665;
       BOOL aUN663;
static BOOL aUN663Old1;
       BOOL aUN872;
static BOOL aUN872Old1;
       BOOL aUN871;
static BOOL aUN871Old1;
       BOOL aUN870;
static BOOL aUN870Old1;
       BOOL aUN869;
static BOOL aUN869Old1;
       BOOL aUN664;
static BOOL aUN664Old1;
       BOOL aUN657;
       BOOL aUN849;
       BOOL aUN850;
       BOOL aUN851;
       BOOL aUN852;
       BOOL aUN658;
       BOOL aUN833;
       BOOL aUN838;
       BOOL aUN843;
       BOOL aUN848;
static U32 aUN826;
static U32 aUN831;
static U32 aUN836;
static U32 aUN841;
static U32 aUN846;
       U16 aUN827;
       U16 aUN828;
       U16 aUN830;
       U16 aUN829;
       U16 aUN835;
       U16 aUN834;
       U16 aUN840;
       U16 aUN839;
       U16 aUN845;
       U16 aUN844;
       U16 aUN1006;
       U16 aUN1007;
       U16 aUN1037;
       U16 aUN1036;
       U16 aUN1040;
       U16 aUN1039;
       U16 aUN1043;
       U16 aUN1042;
       U16 aUN1046;
       U16 aUN1045;
       BOOL aUN1163;
       U32 aUN999;
       U32 aUN1038;
       U32 aUN1041;
       U32 aUN1044;
       U32 aUN1047;
       BOOL aUN1003;
       BOOL aUN1001;
static BOOL aUN1001Old1;
       BOOL aUN1055;
static BOOL aUN1055Old1;
       BOOL aUN1054;
static BOOL aUN1054Old1;
       BOOL aUN1053;
static BOOL aUN1053Old1;
       BOOL aUN1052;
static BOOL aUN1052Old1;
       BOOL aUN1002;
static BOOL aUN1002Old1;
       BOOL aUN995;
       BOOL aUN1032;
       BOOL aUN1033;
       BOOL aUN1034;
       BOOL aUN1035;
       BOOL aUN996;
       BOOL aUN1016;
       BOOL aUN1021;
       BOOL aUN1026;
       BOOL aUN1031;
static U32 aUN1009;
static U32 aUN1014;
static U32 aUN1019;
static U32 aUN1024;
static U32 aUN1029;
       U16 aUN1010;
  _ShLocTmpVar_S32_1 = !(aN226);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN284 = 37;
      break;
    default:
      aN284 = 36;
  }
  _ShLocTmpVar_S32_1 = !(aN233);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN285 = 39;
      break;
    default:
      aN285 = 38;
  }
  _ShLocTmpVar_S32_1 = !(aN229);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN287 = 41;
      break;
    default:
      aN287 = 40;
  }
  _ShLocTmpVar_S32_1 = !(aN228);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN290 = 43;
      break;
    default:
      aN290 = 42;
  }
  if(aN227) {
    aN281 = 44;
  }
  _ShLocTmpVar_S32_1 = !(aN245);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN299 = 46;
      break;
    default:
      aN299 = 45;
  }
  _ShLocTmpVar_S32_1 = !(aN244);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN298 = 48;
      break;
    default:
      aN298 = 47;
  }
  _ShLocTmpVar_S32_1 = !(aN243);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN296 = 50;
      break;
    default:
      aN296 = 49;
  }
  _ShLocTmpVar_S32_1 = !(aN242);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN291 = 52;
      break;
    default:
      aN291 = 51;
  }
  if(aN239) {
    aN302 = 53;
  }
  if(aN241) {
    aN303 = 54;
  }
if ((aN240 && !aN279Old1) || (!aN240 && aN279Old1))
aN279=1;
else
aN279=0;
aN279Old1 = aN240;
if ((aN230 && !aN278Old1) || (!aN230 && aN278Old1))
aN278=1;
else
aN278=0;
aN278Old1 = aN230;
  _ShLocTmpVar_S32_1 = !(aN240);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN280 = 56;
      break;
    default:
      aN280 = 55;
  }
  _ShLocTmpVar_S32_1 = aN248;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN260 = 57;
      break;
    case 1:
      aN260 = 58;
      break;
    case 2:
      aN260 = 59;
      break;
    case 3:
      aN260 = 60;
      break;
    case 4:
      aN260 = 61;
      break;
    case 5:
      aN260 = 62;
      break;
    case 6:
      aN260 = 63;
      break;
    default:
      aN260 = 64;
  }
  _ShLocTmpVar_S32_1 = !(aN230);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN277 = 66;
      break;
    default:
      aN277 = 65;
  }
aUN355 = aUN355Old1 ;
aUN355Old1 = aN260;
aN274 = aN260 != aUN355;
if (aN195 && !aN366Old1)
aN366=1;
else
aN366=0;
aN366Old1 = aN195;
if (aN196 && !aN389Old1)
aN389=1;
else
aN389=0;
aN389Old1 = aN196;
if (aN252 && !aN383Old1)
aN383=1;
else
aN383=0;
aN383Old1 = aN252;
if (aN205 && !aN384Old1)
aN384=1;
else
aN384=0;
aN384Old1 = aN205;
if (aN197 && !aN379Old1)
aN379=1;
else
aN379=0;
aN379Old1 = aN197;
if (aN198 && !aN380Old1)
aN380=1;
else
aN380=0;
aN380Old1 = aN198;
if (aN199 && !aN375Old1)
aN375=1;
else
aN375=0;
aN375Old1 = aN199;
if (aN200 && !aN376Old1)
aN376=1;
else
aN376=0;
aN376Old1 = aN200;
if (aN201 && !aN371Old1)
aN371=1;
else
aN371=0;
aN371Old1 = aN201;
if (aN202 && !aN372Old1)
aN372=1;
else
aN372=0;
aN372Old1 = aN202;
if (aN203 && !aN367Old1)
aN367=1;
else
aN367=0;
aN367Old1 = aN203;
if (aN253 && !aN368Old1)
aN368=1;
else
aN368=0;
aN368Old1 = aN253;
  if(aN195) {
    aN388 = 160;
  }
  if(aN252) {
    aN385 = 2;
  }
  if(aN197) {
    aN381 = 4;
  }
  if(aN199) {
    aN377 = 6;
  }
  if(aN201) {
    aN373 = 8;
  }
  if(aN203) {
    aN369 = 10;
  }
  if(aN196) {
    aN387 = 1;
  }
  if(aN205) {
    aN386 = 3;
  }
  if(aN198) {
    aN382 = 5;
  }
  if(aN200) {
    aN378 = 7;
  }
  if(aN202) {
    aN374 = 9;
  }
  if(aN253) {
    aN370 = 11;
  }
if (2!=0){
aUN243=(aUN230)/(U32)(2);
}else{
aUN243=0;}
if (10000!=0){
aN191=(aUN251)/(10000);
}else{
aN191=0;}
if (10!=0){
aUN232=(aUN243)/(U32)(10);
}else{
aUN232=0;}
if (100!=0){
aN186=(aN216)/(U32)(100);
}else{
aN186=0;}
if (100!=0){
MAINTASKobjc.Input_B_CAN_Input_N_Hlth_W_U8=(aN191)/(U32)(100);
}else{
MAINTASKobjc.Input_B_CAN_Input_N_Hlth_W_U8=0;}
aE7UN2=(100)*(MAINTASKobjc.Input_B_CAN_Input_N_Hlth_W_U8);
  MAINTASKobjc.Input_B_CAN_Input_N_Hlth_D_U8 = (aN191) - (aE7UN2);
  MAINTASKobjc.Input_B_CAN_Input_N_SoC_Ave_S16 = (aUN232) - (10);
if (100!=0){
aN664=(aN186)/(U32)(100);
}else{
aN664=0;}
aE8UN2=(100)*(aN664);
  aN665 = (aN186) - (aE8UN2);
if (100!=0){
MAINTASKobjd.Input_B_CAN_Input_N_Batt_Curr_W_S32=(aN222)/(100);
}else{
MAINTASKobjd.Input_B_CAN_Input_N_Batt_Curr_W_S32=0;}
aUN316=(100)*(MAINTASKobjd.Input_B_CAN_Input_N_Batt_Curr_W_S32);
  aUN350 = (aN222) - (aUN316);
aUN353 = (aUN316)+(aN222);
if (aN222 >= 0)
aUN348=0;
if ((aN222) < 0)
aUN348=1;
  _ShLocTmpVar_S32_1 = !(aUN348);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aUN305 = aUN350;
      break;
    default:
      aUN305 = aUN353;
  }

if (aUN305 < 0){
  MAINTASKobjd.Input_B_CAN_Input_N_Batt_Curr_D_U8 = -aUN305;
} else {
  MAINTASKobjd.Input_B_CAN_Input_N_Batt_Curr_D_U8 = aUN305;
}

  _ShLocTmpVar_S32_1 = !(aN240);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN628 = 1;
      break;
    default:
      aN628 = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN232);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED = 1;
      break;
    default:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN227);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED = 1;
      break;
    default:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN220);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED = 1;
      break;
    default:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN233);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN631 = 1;
      break;
    default:
      aN631 = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN224);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED = 1;
      break;
    default:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN229);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN633 = 1;
      break;
    default:
      aN633 = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN243);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN634 = 1;
      break;
    default:
      aN634 = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN207);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED = 1;
      break;
    default:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN226);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED = 1;
      break;
    default:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN244);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN637 = 1;
      break;
    default:
      aN637 = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN245);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN638 = 1;
      break;
    default:
      aN638 = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN225);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN639 = 1;
      break;
    default:
      aN639 = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN223);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED = 1;
      break;
    default:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN242);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED = 1;
      break;
    default:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN241);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN642 = 1;
      break;
    default:
      aN642 = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN239);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED = 1;
      break;
    default:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN230);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aN647 = 1;
      break;
    default:
      aN647 = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN231);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED = 1;
      break;
    default:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED = 0;
  }
  _ShLocTmpVar_S32_1 = !(aN228);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED = 1;
      break;
    default:
      MAINTASKobjd.Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED = 0;
  }
aUN644=aN204 | aN644 | aN247;
if (aN396 && !aUN1139Old1)
aUN1139=1;
else
aUN1139=0;
aUN1139Old1 = aN396;

  _CALL_St_ORGANIZE_INTS_Ccp_St_ORGANIZE_INTS_Exec(i__330e7d66_5afe_8b8d_7143_95819c746d3c, aUN644, aN388, aN366, aN387, aN389, aN385, aN383, aN386, aN384, aN381, aN379, aN382, aN380, aN377, aN375, aN378, aN376, aN373, aN371, aN374, aN372, aN369, aN367, aN370, aN368, aN365, aN364, aN363, aN362, aN361, aN360, aN359, aN358, aN356, aN357, aN355, aN354, aN352, aN353, aN350, aN351, aN309, aN308, aN305, aN306, aN284, aN283, aN285, aN286, aN287, aN288, aN290, aN289, aN281, aN282, aN299, aN300, aN298, aN297, aN296, aN295, aN291, aN293, aN302, aN301, aN303, aN304, aN280, aN279, aN260, aN274, aN277, aN278, aN340, aN339, aN338, aN337, aN336, aN335, aN334, aN333, aN332, aN331, aN330, aN329, aN328, aN327, aN326, aN325, aN324, aN323, aN322, aN321, aN320, aN319, aN318, aN317, aN316, aN315, aN314, aN313, aN312, aN311, aN310, aN644, aN668, Unused_S32__4_Return, Unused_U16__4_RuntimeErrors, AB_i__330e7d66_5afe_8b8d_7143_95819c746d3c_Org_ints, 161, _TEST.CHECK.Log_Num_Ints, aN392)
    memcpy(_TEST.CHECK.Log_array_Ints1, AB_i__330e7d66_5afe_8b8d_7143_95819c746d3c_Org_ints, 161 * sizeof(U8));
if (!aUN1139 && aN390Old1)
aN390Old2 = 20;
if (aN390Old2 > _ElapsedTime[T10M])
{
aN390Old2 = aN390Old2 - _ElapsedTime[T10M];
aN390=1;
}
else
{
aN390Old2 = 0;
aN390=aUN1139;
}
aN390Old1 = aUN1139;
aUN639=aN392 && aUN644;
_TEST.CHECK.Update_Mem_1_Bool=aN390 | aUN639;
if (aN391 && !aUN1182Old1)
aUN1182=1;
else
aUN1182=0;
aUN1182Old1 = aN391;
aUN1176=aUN1182 | aN669;
  _ShLocTmpVar_S32_1 = !(aN669);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aUN1178 = 0;
      break;
    default:
      aUN1178 = _TEST.CHECK.Log_head_inString;
  }
  _ShLocTmpVar_S32_1 = !(aN669);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aUN1179 = 0;
      break;
    default:
      aUN1179 = aN394;
  }
aUN866=aUN1182 | aN390;
  if(aUN866) {
    for (_U16Index1 = 0; _U16Index1 < 100; _U16Index1++) {
      _TEST.CHECK.Log_array_Ints2[_U16Index1] = aN625[_U16Index1];
    }
  }
aUN645 = aUN645Old1 ;
aUN645Old1 = aUN1176;
aUN865 = aUN865Old1 ;
aUN865Old1 = aUN1182;
if (aN390 != 0)
{
_NVOUTU.al16u8[0].u8 = _NVINT[0];
}
else if (aN669 != 0)
{
  _NVOUTU.al16u8[0].u8 = 0;
}
else if (aUN1176 != 0)
{
  _NVOUTU.al16u8[0].u8 = aUN1178;
}
if
   ((( _NVPND[(0) / 16]) & ( 1 << ((0) & 0xF)))==0)
{
  if (aUN645 != 0)
  {
    _NVINT[0] = _NVOUTU.al16u8[0].u8;
    _NVPND[(0) / 16 ] = _NVPND[(0) / 16 ] | (1 << ((0) & 0xF));
    aUN649 = 1;
  } else {aUN649 = 0;}
} else {aUN649 = 1;}
if (aN390 != 0)
{
_NVOUTU.al16u8[52].u8 = _NVINT[52];
}
else if (aN669 != 0)
{
  _NVOUTU.al16u8[52].u8 = 0;
}
else if (aUN1182 != 0)
{
  _NVOUTU.al16u8[52].u8 = aUN1179;
}
if
   ((( _NVPND[(52) / 16]) & ( 1 << ((52) & 0xF)))==0)
{
  if (aUN865 != 0)
  {
    _NVINT[52] = _NVOUTU.al16u8[52].u8;
    _NVPND[(52) / 16 ] = _NVPND[(52) / 16 ] | (1 << ((52) & 0xF));
    aUN650 = 1;
  } else {aUN650 = 0;}
} else {aUN650 = 1;}
aUN1061 = aUN1061Old1 ;
aUN1061Old1 = aN390;
aUN1175 = aUN1175Old1 ;
aUN1175Old1 = aN669;
aUN1181 = aUN1181Old1 ;
aUN1181Old1 = aN390;
aUN1062 = aUN1062Old1 ;
aUN1062Old1 = aN669;
aUN662=aUN650 | aUN1062 | aUN1181;
aN627=!aN390;
aUN648=aUN649 | aUN1175 | aUN1061;
  if(aUN648) {
    aN393 = (_NVOUTU.al16u8[0].u8);
  }
  if(aUN662) {
    aN622 = (_NVOUTU.al16u8[52].u8);
  }
aUN1105=(aN507&(255))|(((U16)(aN508))<<8);
aUN1104=(aN509&(255))|(((U16)(aN510))<<8);
aUN1074=(aN511&(255))|(((U16)(aN512))<<8);
aUN1075=(aN513&(255))|(((U16)(aN514))<<8);
aUN1071=(aN515&(255))|(((U16)(aN516))<<8);
aUN1072=(aN517&(255))|(((U16)(aN518))<<8);
aUN1068=(aN519&(255))|(((U16)(aN520))<<8);
aUN1069=(aN521&(255))|(((U16)(aN522))<<8);
aUN1065=(aN523&(255))|(((U16)(aN524))<<8);
aUN1066=(aN525&(255))|(((U16)(aN526))<<8);
aUN1166 = 0 == aN394;
aUN1108=aUN1166 | aN669;
aUN1112=(aUN1105&(65535))|(((U32)(aUN1104))<<16);
aUN1073=(aUN1074&(65535))|(((U32)(aUN1075))<<16);
aUN1070=(aUN1071&(65535))|(((U32)(aUN1072))<<16);
aUN1067=(aUN1068&(65535))|(((U32)(aUN1069))<<16);
aUN1064=(aUN1065&(65535))|(((U32)(aUN1066))<<16);
aUN1110 = aUN1110Old1 ;
aUN1110Old1 = aN498;
aUN1056 = aUN1056Old1 ;
aUN1056Old1 = aN499;
aUN1057 = aUN1057Old1 ;
aUN1057Old1 = aN500;
aUN1058 = aUN1058Old1 ;
aUN1058Old1 = aN501;
aUN1059 = aUN1059Old1 ;
aUN1059Old1 = aN502;
aUN1049 = aUN1049Old1 ;
aUN1049Old1 = aN390;
if (aN390 != 0)
{
_NVOUTU.u16[50] = _NVINT[50];
_NVOUTU.u16[51] = _NVINT[51];
}
else if (aUN1108 != 0)
{
(*(U32 *)&_NVOUTU.u16[50])=0x00000000;
}
else if (aN498 != 0)
{
(*(U32 *)&_NVOUTU.u16[50])=aUN1112;
}
if(
   ((( _NVPND[(50) / 16]) & ( 1 << ((50) & 0xF)))==0)
   &&
   ((( _NVPND[(51) / 16]) & ( 1 << ((51) & 0xF)))==0)
  )
{
  if (aUN1110 != 0)
  {
    _NVINT[50] = _NVOUTU.u16[50];
    _NVINT[51] = _NVOUTU.u16[51];
    _NVPND[(50) / 16 ] = _NVPND[(50) / 16 ] | (1 << ((50) & 0xF));
    _NVPND[(51) / 16 ] = _NVPND[(51) / 16 ] | (1 << ((51) & 0xF));
    aUN1116 = 1;
  } else {aUN1116 = 0;}
} else {aUN1116 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[38] = _NVINT[38];
_NVOUTU.u16[39] = _NVINT[39];
}
else if (aUN1108 != 0)
{
(*(U32 *)&_NVOUTU.u16[38])=0x00000000;
}
else if (aN499 != 0)
{
(*(U32 *)&_NVOUTU.u16[38])=aUN1073;
}
if(
   ((( _NVPND[(38) / 16]) & ( 1 << ((38) & 0xF)))==0)
   &&
   ((( _NVPND[(39) / 16]) & ( 1 << ((39) & 0xF)))==0)
  )
{
  if (aUN1056 != 0)
  {
    _NVINT[38] = _NVOUTU.u16[38];
    _NVINT[39] = _NVOUTU.u16[39];
    _NVPND[(38) / 16 ] = _NVPND[(38) / 16 ] | (1 << ((38) & 0xF));
    _NVPND[(39) / 16 ] = _NVPND[(39) / 16 ] | (1 << ((39) & 0xF));
    aUN1079 = 1;
  } else {aUN1079 = 0;}
} else {aUN1079 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[8] = _NVINT[8];
_NVOUTU.u16[9] = _NVINT[9];
}
else if (aUN1108 != 0)
{
(*(U32 *)&_NVOUTU.u16[8])=0x00000000;
}
else if (aN500 != 0)
{
(*(U32 *)&_NVOUTU.u16[8])=aUN1070;
}
if(
   ((( _NVPND[(8) / 16]) & ( 1 << ((8) & 0xF)))==0)
   &&
   ((( _NVPND[(9) / 16]) & ( 1 << ((9) & 0xF)))==0)
  )
{
  if (aUN1057 != 0)
  {
    _NVINT[8] = _NVOUTU.u16[8];
    _NVINT[9] = _NVOUTU.u16[9];
    _NVPND[(8) / 16 ] = _NVPND[(8) / 16 ] | (1 << ((8) & 0xF));
    _NVPND[(9) / 16 ] = _NVPND[(9) / 16 ] | (1 << ((9) & 0xF));
    aUN1078 = 1;
  } else {aUN1078 = 0;}
} else {aUN1078 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[4] = _NVINT[4];
_NVOUTU.u16[5] = _NVINT[5];
}
else if (aUN1108 != 0)
{
(*(U32 *)&_NVOUTU.u16[4])=0x00000000;
}
else if (aN501 != 0)
{
(*(U32 *)&_NVOUTU.u16[4])=aUN1067;
}
if(
   ((( _NVPND[(4) / 16]) & ( 1 << ((4) & 0xF)))==0)
   &&
   ((( _NVPND[(5) / 16]) & ( 1 << ((5) & 0xF)))==0)
  )
{
  if (aUN1058 != 0)
  {
    _NVINT[4] = _NVOUTU.u16[4];
    _NVINT[5] = _NVOUTU.u16[5];
    _NVPND[(4) / 16 ] = _NVPND[(4) / 16 ] | (1 << ((4) & 0xF));
    _NVPND[(5) / 16 ] = _NVPND[(5) / 16 ] | (1 << ((5) & 0xF));
    aUN1077 = 1;
  } else {aUN1077 = 0;}
} else {aUN1077 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[16] = _NVINT[16];
_NVOUTU.u16[17] = _NVINT[17];
}
else if (aUN1108 != 0)
{
(*(U32 *)&_NVOUTU.u16[16])=0x00000000;
}
else if (aN502 != 0)
{
(*(U32 *)&_NVOUTU.u16[16])=aUN1064;
}
if(
   ((( _NVPND[(16) / 16]) & ( 1 << ((16) & 0xF)))==0)
   &&
   ((( _NVPND[(17) / 16]) & ( 1 << ((17) & 0xF)))==0)
  )
{
  if (aUN1059 != 0)
  {
    _NVINT[16] = _NVOUTU.u16[16];
    _NVINT[17] = _NVOUTU.u16[17];
    _NVPND[(16) / 16 ] = _NVPND[(16) / 16 ] | (1 << ((16) & 0xF));
    _NVPND[(17) / 16 ] = _NVPND[(17) / 16 ] | (1 << ((17) & 0xF));
    aUN1076 = 1;
  } else {aUN1076 = 0;}
} else {aUN1076 = 1;}
aUN1115=aUN1116 | aUN1049;
aUN1095=aUN1079 | aUN1049;
aUN1090=aUN1078 | aUN1049;
aUN1085=aUN1077 | aUN1049;
aUN1080=aUN1076 | aUN1049;
  if(aUN1115) {
    aUN928 = (*(U32 *)&_NVOUTU.u16[50]);
  }
  if(aUN1095) {
    aUN1097 = (*(U32 *)&_NVOUTU.u16[38]);
  }
  if(aUN1090) {
    aUN1092 = (*(U32 *)&_NVOUTU.u16[8]);
  }
  if(aUN1085) {
    aUN1087 = (*(U32 *)&_NVOUTU.u16[4]);
  }
  if(aUN1080) {
    aUN1082 = (*(U32 *)&_NVOUTU.u16[16]);
  }
aUN1101= (((U32)(aUN928))&(65535));
aUN1100= (((U32)(aUN928))>>16);
aUN1098= (((U32)(aUN1097))&(65535));
aUN1099= (((U32)(aUN1097))>>16);
aUN1093= (((U32)(aUN1092))&(65535));
aUN1094= (((U32)(aUN1092))>>16);
aUN1088= (((U32)(aUN1087))&(65535));
aUN1089= (((U32)(aUN1087))>>16);
aUN1083= (((U32)(aUN1082))&(65535));
aUN1084= (((U32)(aUN1082))>>16);
aN497= (((U16)(aUN1101))&(255));
aN496= (((U16)(aUN1101))>>8);
aN495= (((U16)(aUN1100))&(255));
aN494= (((U16)(aUN1100))>>8);
aN493= (((U16)(aUN1098))&(255));
aN492= (((U16)(aUN1098))>>8);
aN491= (((U16)(aUN1099))&(255));
_TEST.CHECK.Log_Val_7_U8= (((U16)(aUN1099))>>8);
aN489= (((U16)(aUN1093))&(255));
aN488= (((U16)(aUN1093))>>8);
aN487= (((U16)(aUN1094))&(255));
aN486= (((U16)(aUN1094))>>8);
aN485= (((U16)(aUN1088))&(255));
aN484= (((U16)(aUN1088))>>8);
aN483= (((U16)(aUN1089))&(255));
aN482= (((U16)(aUN1089))>>8);
aN481= (((U16)(aUN1083))&(255));
aN480= (((U16)(aUN1083))>>8);
aN479= (((U16)(aUN1084))&(255));
aN478= (((U16)(aUN1084))>>8);
aUN884=(aN527&(255))|(((U16)(aN528))<<8);
aUN885=(aN529&(255))|(((U16)(aN530))<<8);
aUN915=(aN531&(255))|(((U16)(aN532))<<8);
aUN914=(aN533&(255))|(((U16)(aN534))<<8);
aUN918=(aN535&(255))|(((U16)(aN536))<<8);
aUN917=(aN537&(255))|(((U16)(aN538))<<8);
aUN921=(aN539&(255))|(((U16)(aN540))<<8);
aUN920=(aN541&(255))|(((U16)(aN542))<<8);
aUN924=(aN543&(255))|(((U16)(aN544))<<8);
aUN923=(aN545&(255))|(((U16)(aN546))<<8);
aUN1165 = 0 == aN394;
aUN877=(aUN884&(65535))|(((U32)(aUN885))<<16);
aUN916=(aUN915&(65535))|(((U32)(aUN914))<<16);
aUN919=(aUN918&(65535))|(((U32)(aUN917))<<16);
aUN922=(aUN921&(65535))|(((U32)(aUN920))<<16);
aUN925=(aUN924&(65535))|(((U32)(aUN923))<<16);
aUN881=aUN1165 | aN669;
aUN879 = aUN879Old1 ;
aUN879Old1 = aN397;
aUN933 = aUN933Old1 ;
aUN933Old1 = aN503;
aUN932 = aUN932Old1 ;
aUN932Old1 = aN504;
aUN931 = aUN931Old1 ;
aUN931Old1 = aN505;
aUN930 = aUN930Old1 ;
aUN930Old1 = aN506;
aUN880 = aUN880Old1 ;
aUN880Old1 = aN390;
if (aN390 != 0)
{
_NVOUTU.u16[48] = _NVINT[48];
_NVOUTU.u16[49] = _NVINT[49];
}
else if (aUN881 != 0)
{
(*(U32 *)&_NVOUTU.u16[48])=0x00000000;
}
else if (aN397 != 0)
{
(*(U32 *)&_NVOUTU.u16[48])=aUN877;
}
if(
   ((( _NVPND[(48) / 16]) & ( 1 << ((48) & 0xF)))==0)
   &&
   ((( _NVPND[(49) / 16]) & ( 1 << ((49) & 0xF)))==0)
  )
{
  if (aUN879 != 0)
  {
    _NVINT[48] = _NVOUTU.u16[48];
    _NVINT[49] = _NVOUTU.u16[49];
    _NVPND[(48) / 16 ] = _NVPND[(48) / 16 ] | (1 << ((48) & 0xF));
    _NVPND[(49) / 16 ] = _NVPND[(49) / 16 ] | (1 << ((49) & 0xF));
    aUN873 = 1;
  } else {aUN873 = 0;}
} else {aUN873 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[14] = _NVINT[14];
_NVOUTU.u16[15] = _NVINT[15];
}
else if (aUN881 != 0)
{
(*(U32 *)&_NVOUTU.u16[14])=0x00000000;
}
else if (aN503 != 0)
{
(*(U32 *)&_NVOUTU.u16[14])=aUN916;
}
if(
   ((( _NVPND[(14) / 16]) & ( 1 << ((14) & 0xF)))==0)
   &&
   ((( _NVPND[(15) / 16]) & ( 1 << ((15) & 0xF)))==0)
  )
{
  if (aUN933 != 0)
  {
    _NVINT[14] = _NVOUTU.u16[14];
    _NVINT[15] = _NVOUTU.u16[15];
    _NVPND[(14) / 16 ] = _NVPND[(14) / 16 ] | (1 << ((14) & 0xF));
    _NVPND[(15) / 16 ] = _NVPND[(15) / 16 ] | (1 << ((15) & 0xF));
    aUN910 = 1;
  } else {aUN910 = 0;}
} else {aUN910 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[2] = _NVINT[2];
_NVOUTU.u16[3] = _NVINT[3];
}
else if (aUN881 != 0)
{
(*(U32 *)&_NVOUTU.u16[2])=0x00000000;
}
else if (aN504 != 0)
{
(*(U32 *)&_NVOUTU.u16[2])=aUN919;
}
if(
   ((( _NVPND[(2) / 16]) & ( 1 << ((2) & 0xF)))==0)
   &&
   ((( _NVPND[(3) / 16]) & ( 1 << ((3) & 0xF)))==0)
  )
{
  if (aUN932 != 0)
  {
    _NVINT[2] = _NVOUTU.u16[2];
    _NVINT[3] = _NVOUTU.u16[3];
    _NVPND[(2) / 16 ] = _NVPND[(2) / 16 ] | (1 << ((2) & 0xF));
    _NVPND[(3) / 16 ] = _NVPND[(3) / 16 ] | (1 << ((3) & 0xF));
    aUN911 = 1;
  } else {aUN911 = 0;}
} else {aUN911 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[6] = _NVINT[6];
_NVOUTU.u16[7] = _NVINT[7];
}
else if (aUN881 != 0)
{
(*(U32 *)&_NVOUTU.u16[6])=0x00000000;
}
else if (aN505 != 0)
{
(*(U32 *)&_NVOUTU.u16[6])=aUN922;
}
if(
   ((( _NVPND[(6) / 16]) & ( 1 << ((6) & 0xF)))==0)
   &&
   ((( _NVPND[(7) / 16]) & ( 1 << ((7) & 0xF)))==0)
  )
{
  if (aUN931 != 0)
  {
    _NVINT[6] = _NVOUTU.u16[6];
    _NVINT[7] = _NVOUTU.u16[7];
    _NVPND[(6) / 16 ] = _NVPND[(6) / 16 ] | (1 << ((6) & 0xF));
    _NVPND[(7) / 16 ] = _NVPND[(7) / 16 ] | (1 << ((7) & 0xF));
    aUN912 = 1;
  } else {aUN912 = 0;}
} else {aUN912 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[44] = _NVINT[44];
_NVOUTU.u16[45] = _NVINT[45];
}
else if (aUN881 != 0)
{
(*(U32 *)&_NVOUTU.u16[44])=0x00000000;
}
else if (aN506 != 0)
{
(*(U32 *)&_NVOUTU.u16[44])=aUN925;
}
if(
   ((( _NVPND[(44) / 16]) & ( 1 << ((44) & 0xF)))==0)
   &&
   ((( _NVPND[(45) / 16]) & ( 1 << ((45) & 0xF)))==0)
  )
{
  if (aUN930 != 0)
  {
    _NVINT[44] = _NVOUTU.u16[44];
    _NVINT[45] = _NVOUTU.u16[45];
    _NVPND[(44) / 16 ] = _NVPND[(44) / 16 ] | (1 << ((44) & 0xF));
    _NVPND[(45) / 16 ] = _NVPND[(45) / 16 ] | (1 << ((45) & 0xF));
    aUN913 = 1;
  } else {aUN913 = 0;}
} else {aUN913 = 1;}
aUN874=aUN873 | aUN880;
aUN894=aUN910 | aUN880;
aUN899=aUN911 | aUN880;
aUN904=aUN912 | aUN880;
aUN909=aUN913 | aUN880;
  if(aUN874) {
    aUN887 = (*(U32 *)&_NVOUTU.u16[48]);
  }
  if(aUN894) {
    aUN892 = (*(U32 *)&_NVOUTU.u16[14]);
  }
  if(aUN899) {
    aUN897 = (*(U32 *)&_NVOUTU.u16[2]);
  }
  if(aUN904) {
    aUN902 = (*(U32 *)&_NVOUTU.u16[6]);
  }
  if(aUN909) {
    aUN907 = (*(U32 *)&_NVOUTU.u16[44]);
  }
aUN888= (((U32)(aUN887))&(65535));
aUN889= (((U32)(aUN887))>>16);
aUN891= (((U32)(aUN892))&(65535));
aUN890= (((U32)(aUN892))>>16);
aUN896= (((U32)(aUN897))&(65535));
aUN895= (((U32)(aUN897))>>16);
aUN901= (((U32)(aUN902))&(65535));
aUN900= (((U32)(aUN902))>>16);
aUN906= (((U32)(aUN907))&(65535));
aUN905= (((U32)(aUN907))>>16);
aN398= (((U16)(aUN888))&(255));
aN399= (((U16)(aUN888))>>8);
aN400= (((U16)(aUN889))&(255));
aN401= (((U16)(aUN889))>>8);
aN402= (((U16)(aUN891))&(255));
aN403= (((U16)(aUN891))>>8);
aN404= (((U16)(aUN890))&(255));
aN405= (((U16)(aUN890))>>8);
aN406= (((U16)(aUN896))&(255));
aN407= (((U16)(aUN896))>>8);
aN408= (((U16)(aUN895))&(255));
aN409= (((U16)(aUN895))>>8);
aN410= (((U16)(aUN901))&(255));
aN411= (((U16)(aUN901))>>8);
aN412= (((U16)(aUN900))&(255));
aN413= (((U16)(aUN900))>>8);
aN414= (((U16)(aUN906))&(255));
aN415= (((U16)(aUN906))>>8);
aN416= (((U16)(aUN905))&(255));
aN417= (((U16)(aUN905))>>8);
aUN823=(aN547&(255))|(((U16)(aN548))<<8);
aUN824=(aN549&(255))|(((U16)(aN550))<<8);
aUN854=(aN556&(255))|(((U16)(aN557))<<8);
aUN853=(aN558&(255))|(((U16)(aN559))<<8);
aUN857=(aN560&(255))|(((U16)(aN561))<<8);
aUN856=(aN562&(255))|(((U16)(aN563))<<8);
aUN860=(aN564&(255))|(((U16)(aN565))<<8);
aUN859=(aN566&(255))|(((U16)(aN567))<<8);
aUN863=(aN568&(255))|(((U16)(aN569))<<8);
aUN862=(aN570&(255))|(((U16)(aN571))<<8);
aUN1164 = 0 == aN394;
aUN661=(aUN823&(65535))|(((U32)(aUN824))<<16);
aUN855=(aUN854&(65535))|(((U32)(aUN853))<<16);
aUN858=(aUN857&(65535))|(((U32)(aUN856))<<16);
aUN861=(aUN860&(65535))|(((U32)(aUN859))<<16);
aUN864=(aUN863&(65535))|(((U32)(aUN862))<<16);
aUN665=aUN1164 | aN669;
aUN663 = aUN663Old1 ;
aUN663Old1 = aN551;
aUN872 = aUN872Old1 ;
aUN872Old1 = aN552;
aUN871 = aUN871Old1 ;
aUN871Old1 = aN553;
aUN870 = aUN870Old1 ;
aUN870Old1 = aN554;
aUN869 = aUN869Old1 ;
aUN869Old1 = aN555;
aUN664 = aUN664Old1 ;
aUN664Old1 = aN390;
if (aN390 != 0)
{
_NVOUTU.u16[42] = _NVINT[42];
_NVOUTU.u16[43] = _NVINT[43];
}
else if (aUN665 != 0)
{
(*(U32 *)&_NVOUTU.u16[42])=0x00000000;
}
else if (aN551 != 0)
{
(*(U32 *)&_NVOUTU.u16[42])=aUN661;
}
if(
   ((( _NVPND[(42) / 16]) & ( 1 << ((42) & 0xF)))==0)
   &&
   ((( _NVPND[(43) / 16]) & ( 1 << ((43) & 0xF)))==0)
  )
{
  if (aUN663 != 0)
  {
    _NVINT[42] = _NVOUTU.u16[42];
    _NVINT[43] = _NVOUTU.u16[43];
    _NVPND[(42) / 16 ] = _NVPND[(42) / 16 ] | (1 << ((42) & 0xF));
    _NVPND[(43) / 16 ] = _NVPND[(43) / 16 ] | (1 << ((43) & 0xF));
    aUN657 = 1;
  } else {aUN657 = 0;}
} else {aUN657 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[46] = _NVINT[46];
_NVOUTU.u16[47] = _NVINT[47];
}
else if (aUN665 != 0)
{
(*(U32 *)&_NVOUTU.u16[46])=0x00000000;
}
else if (aN552 != 0)
{
(*(U32 *)&_NVOUTU.u16[46])=aUN855;
}
if(
   ((( _NVPND[(46) / 16]) & ( 1 << ((46) & 0xF)))==0)
   &&
   ((( _NVPND[(47) / 16]) & ( 1 << ((47) & 0xF)))==0)
  )
{
  if (aUN872 != 0)
  {
    _NVINT[46] = _NVOUTU.u16[46];
    _NVINT[47] = _NVOUTU.u16[47];
    _NVPND[(46) / 16 ] = _NVPND[(46) / 16 ] | (1 << ((46) & 0xF));
    _NVPND[(47) / 16 ] = _NVPND[(47) / 16 ] | (1 << ((47) & 0xF));
    aUN849 = 1;
  } else {aUN849 = 0;}
} else {aUN849 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[10] = _NVINT[10];
_NVOUTU.u16[11] = _NVINT[11];
}
else if (aUN665 != 0)
{
(*(U32 *)&_NVOUTU.u16[10])=0x00000000;
}
else if (aN553 != 0)
{
(*(U32 *)&_NVOUTU.u16[10])=aUN858;
}
if(
   ((( _NVPND[(10) / 16]) & ( 1 << ((10) & 0xF)))==0)
   &&
   ((( _NVPND[(11) / 16]) & ( 1 << ((11) & 0xF)))==0)
  )
{
  if (aUN871 != 0)
  {
    _NVINT[10] = _NVOUTU.u16[10];
    _NVINT[11] = _NVOUTU.u16[11];
    _NVPND[(10) / 16 ] = _NVPND[(10) / 16 ] | (1 << ((10) & 0xF));
    _NVPND[(11) / 16 ] = _NVPND[(11) / 16 ] | (1 << ((11) & 0xF));
    aUN850 = 1;
  } else {aUN850 = 0;}
} else {aUN850 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[24] = _NVINT[24];
_NVOUTU.u16[25] = _NVINT[25];
}
else if (aUN665 != 0)
{
(*(U32 *)&_NVOUTU.u16[24])=0x00000000;
}
else if (aN554 != 0)
{
(*(U32 *)&_NVOUTU.u16[24])=aUN861;
}
if(
   ((( _NVPND[(24) / 16]) & ( 1 << ((24) & 0xF)))==0)
   &&
   ((( _NVPND[(25) / 16]) & ( 1 << ((25) & 0xF)))==0)
  )
{
  if (aUN870 != 0)
  {
    _NVINT[24] = _NVOUTU.u16[24];
    _NVINT[25] = _NVOUTU.u16[25];
    _NVPND[(24) / 16 ] = _NVPND[(24) / 16 ] | (1 << ((24) & 0xF));
    _NVPND[(25) / 16 ] = _NVPND[(25) / 16 ] | (1 << ((25) & 0xF));
    aUN851 = 1;
  } else {aUN851 = 0;}
} else {aUN851 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[18] = _NVINT[18];
_NVOUTU.u16[19] = _NVINT[19];
}
else if (aUN665 != 0)
{
(*(U32 *)&_NVOUTU.u16[18])=0x00000000;
}
else if (aN555 != 0)
{
(*(U32 *)&_NVOUTU.u16[18])=aUN864;
}
if(
   ((( _NVPND[(18) / 16]) & ( 1 << ((18) & 0xF)))==0)
   &&
   ((( _NVPND[(19) / 16]) & ( 1 << ((19) & 0xF)))==0)
  )
{
  if (aUN869 != 0)
  {
    _NVINT[18] = _NVOUTU.u16[18];
    _NVINT[19] = _NVOUTU.u16[19];
    _NVPND[(18) / 16 ] = _NVPND[(18) / 16 ] | (1 << ((18) & 0xF));
    _NVPND[(19) / 16 ] = _NVPND[(19) / 16 ] | (1 << ((19) & 0xF));
    aUN852 = 1;
  } else {aUN852 = 0;}
} else {aUN852 = 1;}
aUN658=aUN657 | aUN664;
aUN833=aUN849 | aUN664;
aUN838=aUN850 | aUN664;
aUN843=aUN851 | aUN664;
aUN848=aUN852 | aUN664;
  if(aUN658) {
    aUN826 = (*(U32 *)&_NVOUTU.u16[42]);
  }
  if(aUN833) {
    aUN831 = (*(U32 *)&_NVOUTU.u16[46]);
  }
  if(aUN838) {
    aUN836 = (*(U32 *)&_NVOUTU.u16[10]);
  }
  if(aUN843) {
    aUN841 = (*(U32 *)&_NVOUTU.u16[24]);
  }
  if(aUN848) {
    aUN846 = (*(U32 *)&_NVOUTU.u16[18]);
  }
aUN827= (((U32)(aUN826))&(65535));
aUN828= (((U32)(aUN826))>>16);
aUN830= (((U32)(aUN831))&(65535));
aUN829= (((U32)(aUN831))>>16);
aUN835= (((U32)(aUN836))&(65535));
aUN834= (((U32)(aUN836))>>16);
aUN840= (((U32)(aUN841))&(65535));
aUN839= (((U32)(aUN841))>>16);
aUN845= (((U32)(aUN846))&(65535));
aUN844= (((U32)(aUN846))>>16);
aN458= (((U16)(aUN827))&(255));
aN459= (((U16)(aUN827))>>8);
aN460= (((U16)(aUN828))&(255));
aN461= (((U16)(aUN828))>>8);
aN462= (((U16)(aUN830))&(255));
aN463= (((U16)(aUN830))>>8);
aN464= (((U16)(aUN829))&(255));
aN465= (((U16)(aUN829))>>8);
aN466= (((U16)(aUN835))&(255));
aN467= (((U16)(aUN835))>>8);
aN468= (((U16)(aUN834))&(255));
aN469= (((U16)(aUN834))>>8);
aN470= (((U16)(aUN840))&(255));
aN471= (((U16)(aUN840))>>8);
aN472= (((U16)(aUN839))&(255));
aN473= (((U16)(aUN839))>>8);
aN474= (((U16)(aUN845))&(255));
aN475= (((U16)(aUN845))>>8);
aN476= (((U16)(aUN844))&(255));
aN477= (((U16)(aUN844))>>8);
aUN1006=(aN577&(255))|(((U16)(aN578))<<8);
aUN1007=(aN579&(255))|(((U16)(aN580))<<8);
aUN1037=(aN581&(255))|(((U16)(aN582))<<8);
aUN1036=(aN583&(255))|(((U16)(aN584))<<8);
aUN1040=(aN585&(255))|(((U16)(aN586))<<8);
aUN1039=(aN587&(255))|(((U16)(aN588))<<8);
aUN1043=(aN589&(255))|(((U16)(aN590))<<8);
aUN1042=(aN591&(255))|(((U16)(aN592))<<8);
aUN1046=(aN593&(255))|(((U16)(aN594))<<8);
aUN1045=(aN595&(255))|(((U16)(aN596))<<8);
aUN1163 = 0 == aN394;
aUN999=(aUN1006&(65535))|(((U32)(aUN1007))<<16);
aUN1038=(aUN1037&(65535))|(((U32)(aUN1036))<<16);
aUN1041=(aUN1040&(65535))|(((U32)(aUN1039))<<16);
aUN1044=(aUN1043&(65535))|(((U32)(aUN1042))<<16);
aUN1047=(aUN1046&(65535))|(((U32)(aUN1045))<<16);
aUN1003=aUN1163 | aN669;
aUN1001 = aUN1001Old1 ;
aUN1001Old1 = aN572;
aUN1055 = aUN1055Old1 ;
aUN1055Old1 = aN573;
aUN1054 = aUN1054Old1 ;
aUN1054Old1 = aN574;
aUN1053 = aUN1053Old1 ;
aUN1053Old1 = aN575;
aUN1052 = aUN1052Old1 ;
aUN1052Old1 = aN576;
aUN1002 = aUN1002Old1 ;
aUN1002Old1 = aN390;
if (aN390 != 0)
{
_NVOUTU.u16[36] = _NVINT[36];
_NVOUTU.u16[37] = _NVINT[37];
}
else if (aUN1003 != 0)
{
(*(U32 *)&_NVOUTU.u16[36])=0x00000000;
}
else if (aN572 != 0)
{
(*(U32 *)&_NVOUTU.u16[36])=aUN999;
}
if(
   ((( _NVPND[(36) / 16]) & ( 1 << ((36) & 0xF)))==0)
   &&
   ((( _NVPND[(37) / 16]) & ( 1 << ((37) & 0xF)))==0)
  )
{
  if (aUN1001 != 0)
  {
    _NVINT[36] = _NVOUTU.u16[36];
    _NVINT[37] = _NVOUTU.u16[37];
    _NVPND[(36) / 16 ] = _NVPND[(36) / 16 ] | (1 << ((36) & 0xF));
    _NVPND[(37) / 16 ] = _NVPND[(37) / 16 ] | (1 << ((37) & 0xF));
    aUN995 = 1;
  } else {aUN995 = 0;}
} else {aUN995 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[12] = _NVINT[12];
_NVOUTU.u16[13] = _NVINT[13];
}
else if (aUN1003 != 0)
{
(*(U32 *)&_NVOUTU.u16[12])=0x00000000;
}
else if (aN573 != 0)
{
(*(U32 *)&_NVOUTU.u16[12])=aUN1038;
}
if(
   ((( _NVPND[(12) / 16]) & ( 1 << ((12) & 0xF)))==0)
   &&
   ((( _NVPND[(13) / 16]) & ( 1 << ((13) & 0xF)))==0)
  )
{
  if (aUN1055 != 0)
  {
    _NVINT[12] = _NVOUTU.u16[12];
    _NVINT[13] = _NVOUTU.u16[13];
    _NVPND[(12) / 16 ] = _NVPND[(12) / 16 ] | (1 << ((12) & 0xF));
    _NVPND[(13) / 16 ] = _NVPND[(13) / 16 ] | (1 << ((13) & 0xF));
    aUN1032 = 1;
  } else {aUN1032 = 0;}
} else {aUN1032 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[40] = _NVINT[40];
_NVOUTU.u16[41] = _NVINT[41];
}
else if (aUN1003 != 0)
{
(*(U32 *)&_NVOUTU.u16[40])=0x00000000;
}
else if (aN574 != 0)
{
(*(U32 *)&_NVOUTU.u16[40])=aUN1041;
}
if(
   ((( _NVPND[(40) / 16]) & ( 1 << ((40) & 0xF)))==0)
   &&
   ((( _NVPND[(41) / 16]) & ( 1 << ((41) & 0xF)))==0)
  )
{
  if (aUN1054 != 0)
  {
    _NVINT[40] = _NVOUTU.u16[40];
    _NVINT[41] = _NVOUTU.u16[41];
    _NVPND[(40) / 16 ] = _NVPND[(40) / 16 ] | (1 << ((40) & 0xF));
    _NVPND[(41) / 16 ] = _NVPND[(41) / 16 ] | (1 << ((41) & 0xF));
    aUN1033 = 1;
  } else {aUN1033 = 0;}
} else {aUN1033 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[20] = _NVINT[20];
_NVOUTU.u16[21] = _NVINT[21];
}
else if (aUN1003 != 0)
{
(*(U32 *)&_NVOUTU.u16[20])=0x00000000;
}
else if (aN575 != 0)
{
(*(U32 *)&_NVOUTU.u16[20])=aUN1044;
}
if(
   ((( _NVPND[(20) / 16]) & ( 1 << ((20) & 0xF)))==0)
   &&
   ((( _NVPND[(21) / 16]) & ( 1 << ((21) & 0xF)))==0)
  )
{
  if (aUN1053 != 0)
  {
    _NVINT[20] = _NVOUTU.u16[20];
    _NVINT[21] = _NVOUTU.u16[21];
    _NVPND[(20) / 16 ] = _NVPND[(20) / 16 ] | (1 << ((20) & 0xF));
    _NVPND[(21) / 16 ] = _NVPND[(21) / 16 ] | (1 << ((21) & 0xF));
    aUN1034 = 1;
  } else {aUN1034 = 0;}
} else {aUN1034 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[22] = _NVINT[22];
_NVOUTU.u16[23] = _NVINT[23];
}
else if (aUN1003 != 0)
{
(*(U32 *)&_NVOUTU.u16[22])=0x00000000;
}
else if (aN576 != 0)
{
(*(U32 *)&_NVOUTU.u16[22])=aUN1047;
}
if(
   ((( _NVPND[(22) / 16]) & ( 1 << ((22) & 0xF)))==0)
   &&
   ((( _NVPND[(23) / 16]) & ( 1 << ((23) & 0xF)))==0)
  )
{
  if (aUN1052 != 0)
  {
    _NVINT[22] = _NVOUTU.u16[22];
    _NVINT[23] = _NVOUTU.u16[23];
    _NVPND[(22) / 16 ] = _NVPND[(22) / 16 ] | (1 << ((22) & 0xF));
    _NVPND[(23) / 16 ] = _NVPND[(23) / 16 ] | (1 << ((23) & 0xF));
    aUN1035 = 1;
  } else {aUN1035 = 0;}
} else {aUN1035 = 1;}
aUN996=aUN995 | aUN1002;
aUN1016=aUN1032 | aUN1002;
aUN1021=aUN1033 | aUN1002;
aUN1026=aUN1034 | aUN1002;
aUN1031=aUN1035 | aUN1002;
  if(aUN996) {
    aUN1009 = (*(U32 *)&_NVOUTU.u16[36]);
  }
  if(aUN1016) {
    aUN1014 = (*(U32 *)&_NVOUTU.u16[12]);
  }
  if(aUN1021) {
    aUN1019 = (*(U32 *)&_NVOUTU.u16[40]);
  }
  if(aUN1026) {
    aUN1024 = (*(U32 *)&_NVOUTU.u16[20]);
  }
  if(aUN1031) {
    aUN1029 = (*(U32 *)&_NVOUTU.u16[22]);
  }
aUN1010= (((U32)(aUN1009))&(65535));
aUN1011= (((U32)(aUN1009))>>16);
aUN1013= (((U32)(aUN1014))&(65535));
aUN1012= (((U32)(aUN1014))>>16);
aUN1018= (((U32)(aUN1019))&(65535));
aUN1017= (((U32)(aUN1019))>>16);
aUN1023= (((U32)(aUN1024))&(65535));
aUN1022= (((U32)(aUN1024))>>16);
aUN1028= (((U32)(aUN1029))&(65535));
aUN1027= (((U32)(aUN1029))>>16);
aN418= (((U16)(aUN1010))&(255));
aN419= (((U16)(aUN1010))>>8);
}
static void _FNC_123_n(void)
{
       U8 aN420;
       U8 aN421;
       U8 aN422;
       U8 aN423;
       U8 aN424;
       U8 aN425;
       U8 aN426;
       U8 aN427;
       U8 aN428;
       U8 aN429;
       U8 aN430;
       U8 aN431;
       U8 aN432;
       U8 aN433;
       U8 aN434;
       U8 aN435;
       U8 aN436;
       U8 aN437;
       U16 aUN945;
       U16 aUN946;
       U16 aUN976;
       U16 aUN975;
       U16 aUN979;
       U16 aUN978;
       U16 aUN982;
       U16 aUN981;
       U16 aUN985;
       U16 aUN984;
       BOOL aUN1162;
       U32 aUN938;
       U32 aUN977;
       U32 aUN980;
       U32 aUN983;
       U32 aUN986;
       BOOL aUN942;
       BOOL aUN940;
static BOOL aUN940Old1;
       BOOL aUN994;
static BOOL aUN994Old1;
       BOOL aUN993;
static BOOL aUN993Old1;
       BOOL aUN992;
static BOOL aUN992Old1;
       BOOL aUN991;
static BOOL aUN991Old1;
       BOOL aUN941;
static BOOL aUN941Old1;
       BOOL aUN934;
       BOOL aUN971;
       BOOL aUN972;
       BOOL aUN973;
       BOOL aUN974;
       BOOL aUN935;
       BOOL aUN955;
       BOOL aUN960;
       BOOL aUN965;
       BOOL aUN970;
static U32 aUN948;
static U32 aUN953;
static U32 aUN958;
static U32 aUN963;
static U32 aUN968;
       U16 aUN949;
       U16 aUN950;
       U16 aUN952;
       U16 aUN951;
       U16 aUN957;
       U16 aUN956;
       U16 aUN962;
       U16 aUN961;
       U16 aUN967;
       U16 aUN966;
       U8 aN438;
       U8 aN439;
       U8 aN440;
       U8 aN441;
       U8 aN442;
       U8 aN443;
       U8 aN444;
       U8 aN445;
       U8 aN446;
       U8 aN447;
       U8 aN448;
       U8 aN449;
       U8 aN450;
       U8 aN451;
       U8 aN452;
       U8 aN453;
       U8 aN454;
       U8 aN455;
       U8 aN456;
       U8 aN457;
  static U8 AB_i__330e7d59_5ac7_69af_3965_5e7cc50052d5_Org_ints[161];
  static U8 AB_i__330e7d59_5ac7_69af_3965_5e7cc50052d5_Cur_log[100];
  S16 Unused_S16__4_Return;
  U16 Unused_U16__4_RuntimeErrors;
  BOOL Unused_BOOL_firstRunDoneOut;
  static U8 AB_i__330e7d59_5ac7_69af_3965_5e7cc50052d5_Log_array[100];
static U8 aN597;
static U8 aN598;
static U8 aN599;
static U8 aN600;
static U8 aN602;
static U8 aN603;
static U8 aN608;
static U8 aN609;
static U8 aN610;
static U8 aN611;
static U8 aN612;
static U8 aN613;
static U8 aN614;
static U8 aN615;
static U8 aN616;
static U8 aN617;
static U8 aN618;
static U8 aN619;
static U8 aN620;
static U8 aN621;
static BOOL aN601;
static BOOL aN604;
static BOOL aN605;
static BOOL aN606;
static BOOL aN607;
  BOOL Unused_BOOL_Log_Val_init_update;
static BOOL aN623;
static BOOL aUN1144Old1;
static BOOL aUN1144Old2;
       BOOL aUN1111;
static BOOL aUN1111Old1;
       BOOL aUN867;
static BOOL aUN867Old1;
static BOOL aUN1183Old1;
       BOOL aUN987;
static BOOL aUN987Old1;
static U8 aUN987Old2;
static BOOL aUN882Old1;
static BOOL aUN882Old2;
       BOOL aN662;
         PLC_STRING_REF aN211;
static U8 aN211_buffer_3_b[5000];
         PLC_STRING_REF aN212;
static U8 aN212_buffer_3_c[5000];
       BOOL aUN488;
static BOOL aUN488Old1;
static U8 aUN488Old2;
 S16 _S16Index2;
static BOOL aN133Old1;
       BOOL aUN456;
static BOOL aUN456Old1;
       BOOL aN268;
static BOOL aN268Old1;
       BOOL aN269;
static BOOL aN269Old1;
static U8 aN269Old2;
static U32 aUN479;
static BOOL aUN479Old1;
static BOOL aUN479Old2;
       U8 aUN429;
       U8 aUN430;
       U8 aN270;
       U8 aN271;
       U16 aUN1167;
       BOOL aUN577;
       BOOL aUN585;
       BOOL aUN591;
       BOOL aUN592;
       BOOL aUN584;
static BOOL aUN584Old1;
static U8 aUN584Old2;
       BOOL aUN580;
static BOOL aUN580Old1;
       BOOL aUN581;
       BOOL aUN579;
static BOOL aUN579Old1;
       BOOL aUN582;
       BOOL aUN587;
static BOOL aUN587Old1;
       BOOL aUN583;
static BOOL aUN1160Old1;
       U16 aUN478;
       U16 aUN477;
       U8 aUN531;
       U8 aUN532;
       U8 aUN535;
       U8 aUN536;
       U8 aUN539;
       U8 aUN540;
       U8 aUN533;
       U8 aUN534;
       U8 aUN537;
       U8 aUN538;
       U8 aUN541;
       U8 aUN542;
       U16 aUN546;
       U16 aUN547;
       U16 aUN544;
       U16 aUN545;
       U16 aUN548;
       U16 aUN543;
       BOOL aUN500;
       BOOL aUN575;
       BOOL aUN576;
       BOOL aUN564;
static BOOL aUN564Old1;
       BOOL aUN565;
static BOOL aUN565Old1;
       BOOL aUN550;
static BOOL aUN550Old1;
       BOOL aUN551;
static BOOL aUN551Old1;
       BOOL aUN569;
static BOOL aUN569Old1;
       BOOL aUN553;
static BOOL aUN553Old1;
       BOOL aUN567;
static BOOL aUN567Old1;
       BOOL aUN499;
       BOOL aUN498;
       BOOL aUN497;
       BOOL aUN496;
       BOOL aUN495;
       BOOL aUN494;
       BOOL aUN572;
static BOOL aUN571;
       BOOL aN267;
       U8 aUN476;
       U8 aUN475;
       U8 aUN474;
       U8 aUN473;
 S16 _S16Index1;
       BOOL aN150;
static BOOL aN150Old1;
static U8 aN150Old2;
       U8 aUN188;
  S32 _ShLocTmpVar_S32_1;
       U8 aUN181;
static U8 aUN181Old1;
       BOOL aUN175;
       BOOL aUN177;
       BOOL aUN186;
       BOOL aUN189;
       BOOL aUN176;
       BOOL aUN179;
       BOOL aUN185;
       BOOL aUN192;
       BOOL aUN180;
       BOOL aUN190;
static BOOL aUN190Old1;
       BOOL aUN187;
static BOOL aUN187Old1;
       BOOL aUN191;
static BOOL aUN191Old1;
       BOOL aUN173;
static BOOL aUN173Old1;
       BOOL aUN1172;
static BOOL aUN1172Old1;
static U8 aUN1172Old2;
       U8 aUN172;
       U8 aUN171;
       U8 aUN41;
       BOOL aUN1171;
       BOOL aUN199;
       BOOL aUN206;
       BOOL aUN425;
       BOOL aUN193;
static BOOL aUN193Old1;
       BOOL aUN202;
static BOOL aUN202Old1;
static BOOL aUN203;
static BOOL aN181Old2;
static BOOL aN181Old1;
static BOOL aN275Old2;
static BOOL aN275Old1;
       BOOL aUN201;
static BOOL aUN201Old1;
       BOOL aUN211;
       BOOL aUN200;
       BOOL aUN75;
static BOOL aUN209;
static BOOL aUN75Old2;
static BOOL aUN75Old1;
       BOOL aUN198;
static BOOL aN182;
static BOOL aUN240;
       BOOL aUN868;
  PLC_STRING_REF Unused_STRING__4_Return;
static   PLC_STRING_REF aN184;
  static U8 AB_i__293445e9_3c79_496b_eb21_88bba84c5db5_Log_array[100];
static   PLC_STRING_REF aN649;
  static U8 AB_i__293445e9_3c79_496b_eb21_88bba84c5db5_adjusted_log[100];
static BOOL aN651;
         PLC_STRING_REF aN185;
static U8 aN185_buffer_3_d[5000];
static U8 aN663_buffer_3_e[5000];
       BOOL aUN1155;
static BOOL aUN1155Old1;
static  PLC_STRING_REF LO_1;
static  PLC_STRING_REF LO_2;
aN420= (((U16)(aUN1011))&(255));
aN421= (((U16)(aUN1011))>>8);
aN422= (((U16)(aUN1013))&(255));
aN423= (((U16)(aUN1013))>>8);
aN424= (((U16)(aUN1012))&(255));
aN425= (((U16)(aUN1012))>>8);
aN426= (((U16)(aUN1018))&(255));
aN427= (((U16)(aUN1018))>>8);
aN428= (((U16)(aUN1017))&(255));
aN429= (((U16)(aUN1017))>>8);
aN430= (((U16)(aUN1023))&(255));
aN431= (((U16)(aUN1023))>>8);
aN432= (((U16)(aUN1022))&(255));
aN433= (((U16)(aUN1022))>>8);
aN434= (((U16)(aUN1028))&(255));
aN435= (((U16)(aUN1028))>>8);
aN436= (((U16)(aUN1027))&(255));
aN437= (((U16)(aUN1027))>>8);
aUN945=(aN597&(255))|(((U16)(aN598))<<8);
aUN946=(aN599&(255))|(((U16)(aN600))<<8);
aUN976=(aN602&(255))|(((U16)(aN603))<<8);
aUN975=(aN608&(255))|(((U16)(aN609))<<8);
aUN979=(aN610&(255))|(((U16)(aN611))<<8);
aUN978=(aN612&(255))|(((U16)(aN613))<<8);
aUN982=(aN614&(255))|(((U16)(aN615))<<8);
aUN981=(aN616&(255))|(((U16)(aN617))<<8);
aUN985=(aN618&(255))|(((U16)(aN619))<<8);
aUN984=(aN620&(255))|(((U16)(aN621))<<8);
aUN1162 = 0 == aN394;
aUN938=(aUN945&(65535))|(((U32)(aUN946))<<16);
aUN977=(aUN976&(65535))|(((U32)(aUN975))<<16);
aUN980=(aUN979&(65535))|(((U32)(aUN978))<<16);
aUN983=(aUN982&(65535))|(((U32)(aUN981))<<16);
aUN986=(aUN985&(65535))|(((U32)(aUN984))<<16);
aUN942=aUN1162 | aN669;
aUN940 = aUN940Old1 ;
aUN940Old1 = aN601;
aUN994 = aUN994Old1 ;
aUN994Old1 = aN604;
aUN993 = aUN993Old1 ;
aUN993Old1 = aN605;
aUN992 = aUN992Old1 ;
aUN992Old1 = aN606;
aUN991 = aUN991Old1 ;
aUN991Old1 = aN607;
aUN941 = aUN941Old1 ;
aUN941Old1 = aN390;
if (aN390 != 0)
{
_NVOUTU.u16[32] = _NVINT[32];
_NVOUTU.u16[33] = _NVINT[33];
}
else if (aUN942 != 0)
{
(*(U32 *)&_NVOUTU.u16[32])=0x00000000;
}
else if (aN601 != 0)
{
(*(U32 *)&_NVOUTU.u16[32])=aUN938;
}
if(
   ((( _NVPND[(32) / 16]) & ( 1 << ((32) & 0xF)))==0)
   &&
   ((( _NVPND[(33) / 16]) & ( 1 << ((33) & 0xF)))==0)
  )
{
  if (aUN940 != 0)
  {
    _NVINT[32] = _NVOUTU.u16[32];
    _NVINT[33] = _NVOUTU.u16[33];
    _NVPND[(32) / 16 ] = _NVPND[(32) / 16 ] | (1 << ((32) & 0xF));
    _NVPND[(33) / 16 ] = _NVPND[(33) / 16 ] | (1 << ((33) & 0xF));
    aUN934 = 1;
  } else {aUN934 = 0;}
} else {aUN934 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[28] = _NVINT[28];
_NVOUTU.u16[29] = _NVINT[29];
}
else if (aUN942 != 0)
{
(*(U32 *)&_NVOUTU.u16[28])=0x00000000;
}
else if (aN604 != 0)
{
(*(U32 *)&_NVOUTU.u16[28])=aUN977;
}
if(
   ((( _NVPND[(28) / 16]) & ( 1 << ((28) & 0xF)))==0)
   &&
   ((( _NVPND[(29) / 16]) & ( 1 << ((29) & 0xF)))==0)
  )
{
  if (aUN994 != 0)
  {
    _NVINT[28] = _NVOUTU.u16[28];
    _NVINT[29] = _NVOUTU.u16[29];
    _NVPND[(28) / 16 ] = _NVPND[(28) / 16 ] | (1 << ((28) & 0xF));
    _NVPND[(29) / 16 ] = _NVPND[(29) / 16 ] | (1 << ((29) & 0xF));
    aUN971 = 1;
  } else {aUN971 = 0;}
} else {aUN971 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[26] = _NVINT[26];
_NVOUTU.u16[27] = _NVINT[27];
}
else if (aUN942 != 0)
{
(*(U32 *)&_NVOUTU.u16[26])=0x00000000;
}
else if (aN605 != 0)
{
(*(U32 *)&_NVOUTU.u16[26])=aUN980;
}
if(
   ((( _NVPND[(26) / 16]) & ( 1 << ((26) & 0xF)))==0)
   &&
   ((( _NVPND[(27) / 16]) & ( 1 << ((27) & 0xF)))==0)
  )
{
  if (aUN993 != 0)
  {
    _NVINT[26] = _NVOUTU.u16[26];
    _NVINT[27] = _NVOUTU.u16[27];
    _NVPND[(26) / 16 ] = _NVPND[(26) / 16 ] | (1 << ((26) & 0xF));
    _NVPND[(27) / 16 ] = _NVPND[(27) / 16 ] | (1 << ((27) & 0xF));
    aUN972 = 1;
  } else {aUN972 = 0;}
} else {aUN972 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[30] = _NVINT[30];
_NVOUTU.u16[31] = _NVINT[31];
}
else if (aUN942 != 0)
{
(*(U32 *)&_NVOUTU.u16[30])=0x00000000;
}
else if (aN606 != 0)
{
(*(U32 *)&_NVOUTU.u16[30])=aUN983;
}
if(
   ((( _NVPND[(30) / 16]) & ( 1 << ((30) & 0xF)))==0)
   &&
   ((( _NVPND[(31) / 16]) & ( 1 << ((31) & 0xF)))==0)
  )
{
  if (aUN992 != 0)
  {
    _NVINT[30] = _NVOUTU.u16[30];
    _NVINT[31] = _NVOUTU.u16[31];
    _NVPND[(30) / 16 ] = _NVPND[(30) / 16 ] | (1 << ((30) & 0xF));
    _NVPND[(31) / 16 ] = _NVPND[(31) / 16 ] | (1 << ((31) & 0xF));
    aUN973 = 1;
  } else {aUN973 = 0;}
} else {aUN973 = 1;}
if (aN390 != 0)
{
_NVOUTU.u16[34] = _NVINT[34];
_NVOUTU.u16[35] = _NVINT[35];
}
else if (aUN942 != 0)
{
(*(U32 *)&_NVOUTU.u16[34])=0x00000000;
}
else if (aN607 != 0)
{
(*(U32 *)&_NVOUTU.u16[34])=aUN986;
}
if(
   ((( _NVPND[(34) / 16]) & ( 1 << ((34) & 0xF)))==0)
   &&
   ((( _NVPND[(35) / 16]) & ( 1 << ((35) & 0xF)))==0)
  )
{
  if (aUN991 != 0)
  {
    _NVINT[34] = _NVOUTU.u16[34];
    _NVINT[35] = _NVOUTU.u16[35];
    _NVPND[(34) / 16 ] = _NVPND[(34) / 16 ] | (1 << ((34) & 0xF));
    _NVPND[(35) / 16 ] = _NVPND[(35) / 16 ] | (1 << ((35) & 0xF));
    aUN974 = 1;
  } else {aUN974 = 0;}
} else {aUN974 = 1;}
aUN935=aUN934 | aUN941;
aUN955=aUN971 | aUN941;
aUN960=aUN972 | aUN941;
aUN965=aUN973 | aUN941;
aUN970=aUN974 | aUN941;
  if(aUN935) {
    aUN948 = (*(U32 *)&_NVOUTU.u16[32]);
  }
  if(aUN955) {
    aUN953 = (*(U32 *)&_NVOUTU.u16[28]);
  }
  if(aUN960) {
    aUN958 = (*(U32 *)&_NVOUTU.u16[26]);
  }
  if(aUN965) {
    aUN963 = (*(U32 *)&_NVOUTU.u16[30]);
  }
  if(aUN970) {
    aUN968 = (*(U32 *)&_NVOUTU.u16[34]);
  }
aUN949= (((U32)(aUN948))&(65535));
aUN950= (((U32)(aUN948))>>16);
aUN952= (((U32)(aUN953))&(65535));
aUN951= (((U32)(aUN953))>>16);
aUN957= (((U32)(aUN958))&(65535));
aUN956= (((U32)(aUN958))>>16);
aUN962= (((U32)(aUN963))&(65535));
aUN961= (((U32)(aUN963))>>16);
aUN967= (((U32)(aUN968))&(65535));
aUN966= (((U32)(aUN968))>>16);
aN438= (((U16)(aUN949))&(255));
aN439= (((U16)(aUN949))>>8);
aN440= (((U16)(aUN950))&(255));
aN441= (((U16)(aUN950))>>8);
aN442= (((U16)(aUN952))&(255));
aN443= (((U16)(aUN952))>>8);
aN444= (((U16)(aUN951))&(255));
aN445= (((U16)(aUN951))>>8);
aN446= (((U16)(aUN957))&(255));
aN447= (((U16)(aUN957))>>8);
aN448= (((U16)(aUN956))&(255));
aN449= (((U16)(aUN956))>>8);
aN450= (((U16)(aUN962))&(255));
aN451= (((U16)(aUN962))>>8);
aN452= (((U16)(aUN961))&(255));
aN453= (((U16)(aUN961))>>8);
aN454= (((U16)(aUN967))&(255));
aN455= (((U16)(aUN967))>>8);
aN456= (((U16)(aUN966))&(255));
aN457= (((U16)(aUN966))>>8);
    memcpy(AB_i__330e7d59_5ac7_69af_3965_5e7cc50052d5_Org_ints, _TEST.CHECK.Log_array_Ints1, 161 * sizeof(U8));
    memcpy(AB_i__330e7d59_5ac7_69af_3965_5e7cc50052d5_Cur_log, _TEST.CHECK.Log_array_Ints2, 100 * sizeof(U8));
  _CALL_St_MEM_SORT_Ccp_St_MEM_SORT_Exec(i__330e7d59_5ac7_69af_3965_5e7cc50052d5, _TEST.CHECK.Update_Mem_1_Bool, 0, aN627, aN497, aN496, aN495, aN494, aN493, aN492, aN491, _TEST.CHECK.Log_Val_7_U8, aN489, aN488, aN487, aN486, aN485, aN484, aN483, aN482, aN481, aN480, aN479, aN478, aN398, aN399, aN400, aN401, aN402, aN403, aN404, aN405, aN406, aN407, aN408, aN409, aN410, aN411, aN412, aN413, aN414, aN415, aN416, aN417, aN458, aN459, aN460, aN461, aN462, aN463, aN464, aN465, aN466, aN467, aN468, aN469, aN470, aN471, aN472, aN473, aN474, aN475, aN476, aN477, aN418, aN419, aN420, aN421, aN422, aN423, aN424, aN425, aN426, aN427, aN428, aN429, aN430, aN431, aN432, aN433, aN434, aN435, aN436, aN437, aN438, aN439, aN440, aN441, aN442, aN443, aN444, aN445, aN446, aN447, aN448, aN449, aN450, aN451, aN452, aN453, aN454, aN455, aN456, aN457, aN393, aN622, _TEST.CHECK.Log_Num_Ints, AB_i__330e7d59_5ac7_69af_3965_5e7cc50052d5_Org_ints, 161, AB_i__330e7d59_5ac7_69af_3965_5e7cc50052d5_Cur_log, 100, aN669, Unused_S16__4_Return, Unused_U16__4_RuntimeErrors, Unused_BOOL_firstRunDoneOut, _TEST.CHECK.Log_head_inString, aN394, AB_i__330e7d59_5ac7_69af_3965_5e7cc50052d5_Log_array, 100, aN507, aN508, aN509, aN510, aN511, aN512, aN513, aN514, aN515, aN516, aN517, aN518, aN519, aN520, aN521, aN522, aN523, aN524, aN525, aN526, aN527, aN528, aN529, aN530, aN531, aN532, aN533, aN534, aN535, aN536, aN537, aN538, aN539, aN540, aN541, aN542, aN543, aN544, aN545, aN546, aN547, aN548, aN549, aN550, aN556, aN557, aN558, aN559, aN560, aN561, aN562, aN563, aN564, aN565, aN566, aN567, aN568, aN569, aN570, aN571, aN577, aN578, aN579, aN580, aN581, aN582, aN583, aN584, aN585, aN586, aN587, aN588, aN589, aN590, aN591, aN592, aN593, aN594, aN595, aN596, aN597, aN598, aN599, aN600, aN602, aN603, aN608, aN609, aN610, aN611, aN612, aN613, aN614, aN615, aN616, aN617, aN618, aN619, aN620, aN621, aN498, aN499, aN500, aN501, aN502, aN397, aN503, aN504, aN505, aN506, aN551, aN552, aN553, aN554, aN555, aN572, aN573, aN574, aN575, aN576, aN601, aN604, aN605, aN606, aN607, Unused_BOOL_Log_Val_init_update, aN391, aN623)
    memcpy(aN625, AB_i__330e7d59_5ac7_69af_3965_5e7cc50052d5_Log_array, 100 * sizeof(U8));
if (aN390 && !aUN1144Old2)
{
if (_TEST.CHECK.Init_pulses!=65535)
_TEST.CHECK.Init_pulses++;
}
if (0 && !aUN1144Old1)
{
if (_TEST.CHECK.Init_pulses!=0)
_TEST.CHECK.Init_pulses--;
}
if (0!=0)
_TEST.CHECK.Init_pulses=65535;
if (0!=0)
_TEST.CHECK.Init_pulses=0;
if (_TEST.CHECK.Init_pulses>65535)
_TEST.CHECK.Init_pulses=65535;
if (_TEST.CHECK.Init_pulses<0)
_TEST.CHECK.Init_pulses=0;
aUN1144Old2 = aN390;
aUN1144Old1 = 0;
if (_TEST.CHECK.Update_Mem_1_Bool && !aUN1111Old1)
aUN1111=1;
else
aUN1111=0;
aUN1111Old1 = _TEST.CHECK.Update_Mem_1_Bool;
if (1 && !aUN867Old1)
aUN867=1;
else
aUN867=0;
aUN867Old1 = 1;
if (aN391 && !aUN1183Old1)
_TEST.CHECK.Update_Log2_bool=1;
else
_TEST.CHECK.Update_Log2_bool=0;
aUN1183Old1 = aN391;
if (!aUN867 && aUN987Old1)
aUN987Old2 = 10;
if (aUN987Old2 > _ElapsedTime[T10M])
{
aUN987Old2 = aUN987Old2 - _ElapsedTime[T10M];
aUN987=1;
}
else
{
aUN987Old2 = 0;
aUN987=aUN867;
}
aUN987Old1 = aUN867;
if (aUN1111 && !aUN882Old2)
{
if (_TEST.CHECK.Update_Mem_1_Cnt!=65535)
_TEST.CHECK.Update_Mem_1_Cnt++;
}
if (0 && !aUN882Old1)
{
if (_TEST.CHECK.Update_Mem_1_Cnt!=0)
_TEST.CHECK.Update_Mem_1_Cnt--;
}
if (0!=0)
_TEST.CHECK.Update_Mem_1_Cnt=65535;
if (0!=0)
_TEST.CHECK.Update_Mem_1_Cnt=0;
if (_TEST.CHECK.Update_Mem_1_Cnt>65535)
_TEST.CHECK.Update_Mem_1_Cnt=65535;
if (_TEST.CHECK.Update_Mem_1_Cnt<0)
_TEST.CHECK.Update_Mem_1_Cnt=0;
aUN882Old2 = aUN1111;
aUN882Old1 = 0;
aN662=_TEST.CHECK.Update_Log2_bool | aUN987;
  aN211 .value = aN211_buffer_3_b;
  aN211 .cur_len_val = (5000 < aN193 .cur_len_val) ? (5000) : (aN193 .cur_len_val);
aN211 .cur_len_ref = 0;
  CopyValidUtf8CodeUnits(aN211_buffer_3_b, aN193 .value, &aN211 .cur_len_val, 0);
  aN212 .value = aN212_buffer_3_c;
  aN212 .cur_len_val = (5000 < aN192 .cur_len_val) ? (5000) : (aN192 .cur_len_val);
aN212 .cur_len_ref = 0;
  CopyValidUtf8CodeUnits(aN212_buffer_3_c, aN192 .value, &aN212 .cur_len_val, 0);
if (1 && !aUN488Old1)
aUN488Old2 = 1;
if (aUN488Old2 > _ElapsedTime[T1S])
{
aUN488Old2 = aUN488Old2 - _ElapsedTime[T1S];
aUN488=1;
}
else
{
aUN488Old2 = 0;
aUN488=0;
}
aUN488Old1 = 1;
_S16Index2=0;
while(_S16Index2<241) _OPT_MAINTASK_123_f[_S16Index2++]=0;
if ((aUN488 && !aN133Old1) || (!aUN488 && aN133Old1))
aN133=1;
else
aN133=0;
aN133Old1 = aUN488;
if (aN154 && !aUN456Old1)
aUN456=1;
else
aUN456=0;
aUN456Old1 = aN154;
_OPT_MAINTASK_123_f[0]=0xE3;
_OPT_MAINTASK_123_f[1]=0x72;
_OPT_MAINTASK_123_f[2]=0xFD;
if (1 && !aN268Old1)
aN268=1;
else
aN268=0;
aN268Old1 = 1;
if (!aUN456 && aN269Old1)
aN269Old2 = 5;
if (aN269Old2 > _ElapsedTime[T100M])
{
aN269Old2 = aN269Old2 - _ElapsedTime[T100M];
aN269=1;
}
else
{
aN269Old2 = 0;
aN269=aUN456;
}
aN269Old1 = aUN456;
_CAN_MAINTASK__123_o.port=CAN[0].Port;
if (aN133 && !aUN479Old2)
{
if (aUN479!=4294967295)
aUN479++;
}
if (0 && !aUN479Old1)
{
if (aUN479!=0)
aUN479--;
}
if (0!=0)
aUN479=1;
if (0!=0)
aUN479=0;
if (aUN479>4294967295)
aUN479=4294967295;
if (aUN479<0)
aUN479=0;
aUN479Old2 = aN133;
aUN479Old1 = 0;
aUN429= (((U16)(_TEST.CHECK.Batt_SN_setVal))&(255));
aUN430= (((U16)(_TEST.CHECK.Batt_SN_setVal))>>8);
aN270=_CAN_MAINTASK__123_o.data[0];
aN271=_CAN_MAINTASK__123_o.data[1];
_CAN_MAINTASK__123_p.tx=aN133 | aN269;
_TEST.CHECK.Batt_SN_rxAddVal = (aN271)+(aN270);
aUN1167=(aN270&(255))|(((U16)(aN271))<<8);
aUN577 = 0 == _TEST.CHECK.Batt_SN_setVal;
aUN585=aUN577 && aN269;
aUN591=!aUN577;
aUN592 = aUN1167 == (_NVOUTU.u16[1]);
if (!aUN585 && aUN584Old1)
aUN584Old2 = 5;
if (aUN584Old2 > _ElapsedTime[T100M])
{
aUN584Old2 = aUN584Old2 - _ElapsedTime[T100M];
aUN584=1;
}
else
{
aUN584Old2 = 0;
aUN584=aUN585;
}
aUN584Old1 = aUN585;
_TEST.CHECK.Batt_SN_matchVal_nonZero=aUN591 && aUN592;
if (aUN585 && !aUN580Old1)
aUN580=1;
else
aUN580=0;
aUN580Old1 = aUN585;
aUN581=aUN592 && aUN584;
if (aUN581 && !aUN579Old1)
aUN579=1;
else
aUN579=0;
aUN579Old1 = aUN581;
if (_CAN_MAINTASK__123_o.rx != 0)
{
_NVOUTU.u16[1] = _NVINT[1];
}
else if (aUN580 != 0)
{
  _NVOUTU.u16[1] = aUN1167;
}
if
   ((( _NVPND[(1) / 16]) & ( 1 << ((1) & 0xF)))==0)
{
  if (aUN579 != 0)
  {
    _NVINT[1] = _NVOUTU.u16[1];
    _NVPND[(1) / 16 ] = _NVPND[(1) / 16 ] | (1 << ((1) & 0xF));
    aUN582 = 1;
  } else {aUN582 = 0;}
} else {aUN582 = 1;}
if (!aUN582 && aUN587Old1)
aUN587=1;
else
aUN587=0;
aUN587Old1 = aUN582;
_TEST.CHECK.Batt_SN_pendVal = (_NVOUTU.u16[1]);
aUN583=aUN587 | aN268;
  if(aUN583) {
    _TEST.CHECK.Batt_SN_setVal = (_NVOUTU.u16[1]);
  }
_CAN_MAINTASK__123_p.port=CAN[0].Port;
if (1 && !aUN1160Old1)
_CAN_MAINTASK__123_w.tx=1;
else
_CAN_MAINTASK__123_w.tx=0;
aUN1160Old1 = 1;
aUN478= (((U32)(aUN479))&(65535));
aUN477= (((U32)(aUN479))>>16);
_CAN_MAINTASK__123_q.port=CAN[0].Port;
_CAN_MAINTASK__123_r.port=CAN[0].Port;
_CAN_MAINTASK__123_s.port=CAN[0].Port;
_CAN_MAINTASK__123_t.port=CAN[0].Port;
_CAN_MAINTASK__123_u.port=CAN[0].Port;
_CAN_MAINTASK__123_v.port=CAN[0].Port;
aUN531=_CAN_MAINTASK__123_q.data[0];
aUN532=_CAN_MAINTASK__123_q.data[1];
aUN535=_CAN_MAINTASK__123_s.data[0];
aUN536=_CAN_MAINTASK__123_s.data[1];
aUN539=_CAN_MAINTASK__123_u.data[0];
aUN540=_CAN_MAINTASK__123_u.data[1];
aUN533=_CAN_MAINTASK__123_r.data[0];
aUN534=_CAN_MAINTASK__123_r.data[1];
aUN537=_CAN_MAINTASK__123_t.data[0];
aUN538=_CAN_MAINTASK__123_t.data[1];
aUN541=_CAN_MAINTASK__123_v.data[0];
aUN542=_CAN_MAINTASK__123_v.data[1];
aUN546=(aUN531&(255))|(((U16)(aUN532))<<8);
aUN547=(aUN535&(255))|(((U16)(aUN536))<<8);
aUN544=(aUN539&(255))|(((U16)(aUN540))<<8);
aUN545=(aUN533&(255))|(((U16)(aUN534))<<8);
aUN548=(aUN537&(255))|(((U16)(aUN538))<<8);
aUN543=(aUN541&(255))|(((U16)(aUN542))<<8);
_TEST.CHECK.Addr_244_setBool = _TEST.CHECK.Batt_SN_setVal == aUN546;
_TEST.CHECK.Addr_245_setBool = _TEST.CHECK.Batt_SN_setVal == aUN545;
_TEST.CHECK.Addr_246_setBool = _TEST.CHECK.Batt_SN_setVal == aUN547;
_TEST.CHECK.Addr_247_setBool = _TEST.CHECK.Batt_SN_setVal == aUN548;
_TEST.CHECK.Addr_248_setBool = _TEST.CHECK.Batt_SN_setVal == aUN544;
_TEST.CHECK.Addr_249_setBool = _TEST.CHECK.Batt_SN_setVal == aUN543;
aUN500=!_TEST.CHECK.Batt_SN_matchVal_nonZero;
aUN575 = _TEST.CHECK.Batt_SN_setVal != 0;
aUN576=aUN575 && aUN500;
_TEST.CHECK.Addr_243_setBool = _TEST.CHECK.Batt_SN_matchVal_nonZero;
if (_TEST.CHECK.Batt_SN_matchVal_nonZero && !aUN564Old1)
aUN564=1;
else
aUN564=0;
aUN564Old1 = _TEST.CHECK.Batt_SN_matchVal_nonZero;
if (_TEST.CHECK.Addr_244_setBool && !aUN565Old1)
aUN565=1;
else
aUN565=0;
aUN565Old1 = _TEST.CHECK.Addr_244_setBool;
if (_TEST.CHECK.Addr_245_setBool && !aUN550Old1)
aUN550=1;
else
aUN550=0;
aUN550Old1 = _TEST.CHECK.Addr_245_setBool;
if (_TEST.CHECK.Addr_246_setBool && !aUN551Old1)
aUN551=1;
else
aUN551=0;
aUN551Old1 = _TEST.CHECK.Addr_246_setBool;
if (_TEST.CHECK.Addr_247_setBool && !aUN569Old1)
aUN569=1;
else
aUN569=0;
aUN569Old1 = _TEST.CHECK.Addr_247_setBool;
if (_TEST.CHECK.Addr_248_setBool && !aUN553Old1)
aUN553=1;
else
aUN553=0;
aUN553Old1 = _TEST.CHECK.Addr_248_setBool;
if (_TEST.CHECK.Addr_249_setBool && !aUN567Old1)
aUN567=1;
else
aUN567=0;
aUN567Old1 = _TEST.CHECK.Addr_249_setBool;
aUN499=aUN565 && aUN576;
aUN498=aUN550 && aUN576;
aUN497=aUN551 && aUN576;
aUN496=aUN569 && aUN576;
aUN495=aUN553 && aUN576;
aUN494=aUN567 && aUN576;
aUN572=aUN494 | aUN495 | aUN496 | aUN497 | aUN498 | aUN499 | aUN564;
aUN571 = (aUN571 || aUN572);
_TEST.CHECK.Addr_0_setBool=!aUN571;
  if(aUN564) {
    _TEST.CHECK.Addr_pend = 0xE8;
  }
  if(aUN499) {
    _TEST.CHECK.Addr_pend = 0xF4;
  }
  if(aUN498) {
    _TEST.CHECK.Addr_pend = 0xF5;
  }
  if(aUN497) {
    _TEST.CHECK.Addr_pend = 0xF6;
  }
  if(aUN496) {
    _TEST.CHECK.Addr_pend = 0xF7;
  }
  if(aUN495) {
    _TEST.CHECK.Addr_pend = 0xF8;
  }
  if(aUN494) {
    _TEST.CHECK.Addr_pend = 0xF9;
  }
aN267=aUN494 | aUN495 | aUN496 | aUN497 | aUN498 | aUN499 | aUN564 | _TEST.CHECK.Addr_0_setBool;
_OPT_MAINTASK_123_f[3]=aUN429;
aUN476= (((U16)(aUN478))&(255));
aUN475= (((U16)(aUN478))>>8);
aUN474= (((U16)(aUN477))&(255));
aUN473= (((U16)(aUN477))>>8);
_OPT_MAINTASK_123_f[4]=aUN430;
_OPT_MAINTASK_123_f[8]=aUN476;
_OPT_MAINTASK_123_f[7]=aUN475;
_OPT_MAINTASK_123_f[6]=aUN474;
for (_S16Index1 = 0; _S16Index1 < 241; _S16Index1++) {
if (_S16Index1 < 241 && _S16Index1 >= 0  && _S16Index1 < 241) 
UART[0].TxMsg.Data[_S16Index1] = _OPT_MAINTASK_123_f[_S16Index1];
else break;
}
for (_S16Index1 = _S16Index1; _S16Index1 < 241; _S16Index1++) 
UART[0].TxMsg.Data[_S16Index1] = 0;
UART[0].TxMsg.Data[5]=aUN473;
  if(aN267) {
    _TEST.CHECK.Addr_set = _TEST.CHECK.Addr_pend;
  }
_CAN_MAINTASK__123_w.port=CAN[0].Port;
if (1 && !aN150Old1)
aN150Old2 = 20;
if (aN150Old2 > _ElapsedTime[T100M])
{
aN150Old2 = aN150Old2 - _ElapsedTime[T100M];
aN150=0;
}
else
{
aN150Old2 = 0;
aN150=1;
}
aN150Old1 = 1;
  _ShLocTmpVar_S32_1 = !(aN150);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aUN188 = 1;
      break;
    default:
      aUN188 = 0;
  }
aUN181 = aUN181Old1 ;
aUN181Old1 = aN159;
aUN175 = 2 == aN159;
aUN177 = 3 == aN159;
aUN186=aN160 && aN150;
aUN189=aUN175 && aN163 && aN150;
aUN176=aUN177 && aN163 && aN150;
aUN179=aN165 && aN150;
aUN185=aN150 && aN164;
aUN192=aUN185 | aUN186;
aUN180=aUN179 | aUN176;
if (aN150 && !aUN190Old1)
aUN190=1;
else
aUN190=0;
aUN190Old1 = aN150;
if (aUN192 && !aUN187Old1)
aUN187=1;
else
aUN187=0;
aUN187Old1 = aUN192;
if (aUN180 && !aUN191Old1)
aUN191=1;
else
aUN191=0;
aUN191Old1 = aUN180;
if (aUN189 && !aUN173Old1)
aUN173=1;
else
aUN173=0;
aUN173Old1 = aUN189;
if (aN670 && !aUN1172Old1)
aUN1172Old2 = 3;
if (aUN1172Old2 > _ElapsedTime[T1S])
{
aUN1172Old2 = aUN1172Old2 - _ElapsedTime[T1S];
aUN1172=0;
}
else
{
aUN1172Old2 = 0;
aUN1172=aN670;
}
aUN1172Old1 = aN670;
  _ShLocTmpVar_S32_1 = !(aUN187);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aUN172 = 1;
      break;
    default:
      aUN172 = aUN181;
  }
  _ShLocTmpVar_S32_1 = !(aUN191);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aUN171 = 2;
      break;
    default:
      aUN171 = aUN181;
  }
  _ShLocTmpVar_S32_1 = !(aUN173);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aUN41 = 3;
      break;
    default:
      aUN41 = aUN181;
  }
aUN1171=aUN1172 && aN670;
  if(aUN190) {
    aN159 = aUN188;
  }
  if(aUN187) {
    aN159 = aUN172;
  }
  if(aUN191) {
    aN159 = aUN171;
  }
  if(aUN173) {
    aN159 = aUN41;
  }
  _ShLocTmpVar_S32_1 = aN159;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobjb.CD6937D80_DAB3_46BF_BD14_2475965968A1_Enable = 1;
      break;
    case 1:
      MAINTASKobjb.CD6937D80_DAB3_46BF_BD14_2475965968A1_Enable = 0;
      break;
    case 2:
      MAINTASKobjb.CD6937D80_DAB3_46BF_BD14_2475965968A1_Enable = 0;
      break;
    default:
      MAINTASKobjb.CD6937D80_DAB3_46BF_BD14_2475965968A1_Enable = 0;
  }
  _ShLocTmpVar_S32_1 = aN159;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobjc.CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable = 0;
      break;
    case 1:
      MAINTASKobjc.CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable = 1;
      break;
    case 2:
      MAINTASKobjc.CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable = 0;
      break;
    default:
      MAINTASKobjc.CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable = 0;
  }
  _ShLocTmpVar_S32_1 = aN159;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobjd.C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable = 0;
      break;
    case 1:
      MAINTASKobjd.C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable = 0;
      break;
    case 2:
      MAINTASKobjd.C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable = 1;
      break;
    default:
      MAINTASKobjd.C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable = 0;
  }
  _ShLocTmpVar_S32_1 = aN159;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobje.C27B4991C_F926_43DC_8BF2_62959109410F_Enable = 0;
      break;
    case 1:
      MAINTASKobje.C27B4991C_F926_43DC_8BF2_62959109410F_Enable = 0;
      break;
    case 2:
      MAINTASKobje.C27B4991C_F926_43DC_8BF2_62959109410F_Enable = 0;
      break;
    default:
      MAINTASKobje.C27B4991C_F926_43DC_8BF2_62959109410F_Enable = 1;
  }
aUN199=aN182 && MAINTASKobjc.CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable;
aUN206=aN162 && MAINTASKobjd.C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable;
aUN425=aN161 && MAINTASKobjd.C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable;
aUN193 = aUN193Old1 ;
aUN193Old1 = aUN199;
aUN202 = aUN202Old1 ;
aUN202Old1 = aUN185;
if (0!=0)
aN181Old2=0;
else
{
if (0==0)
{
if (aUN206 && !aN181Old1)
aN181Old2=aUN203;
}
else
aN181Old2=1;
}
aN181Old1 = aUN206;
MAINTASKobjd.Input_N_Setting_PopUp = aN181Old2;
aUN203 = !aN181Old2;
if (0!=0)
aN275Old2=0;
else
{
if (0==0)
{
if (aUN425 && !aN275Old1)
aN275Old2=MAINTASKobjd.Input_N_IndicatorX_Bool;
}
else
aN275Old2=1;
}
aN275Old1 = aUN425;
MAINTASKobjd.Input_N_Indicator_Bool = aN275Old2;
MAINTASKobjd.Input_N_IndicatorX_Bool = !aN275Old2;
aN669=aUN1171 && MAINTASKobje.C27B4991C_F926_43DC_8BF2_62959109410F_Enable;
if (aUN193 && !aUN201Old1)
aUN201=1;
else
aUN201=0;
aUN201Old1 = aUN193;
aUN211=aN183 && MAINTASKobjd.Input_N_Setting_PopUp;
aUN200=aUN202 && aUN199;
if (0!=0)
aUN75Old2=0;
else
{
if (0==0)
{
if (aUN211 && !aUN75Old1)
aUN75Old2=aUN209;
}
else
aUN75Old2=1;
}
aUN75Old1 = aUN211;
aUN75 = aUN75Old2;
aUN209 = !aUN75Old2;
aUN198=aUN200 | aUN201;
aN179 = !(aN149) && (aN179 || aUN198);
aN182=!aUN75;
  MAINTASKobjc.Input_B_Btn_Util_N_Batt_Level_Num = (80) - (MAINTASKobjc.Input_B_CAN_Input_N_SoC_Ave_S16);
if (MAINTASKobjc.Input_B_CAN_Input_N_SoC_Ave_S16 >= 15)
aUN240=0;
if ((MAINTASKobjc.Input_B_CAN_Input_N_SoC_Ave_S16) < 15)
aUN240=1;
  _ShLocTmpVar_S32_1 = !(aUN240);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      MAINTASKobjc.Input_B_Btn_Util_N_Batt_Level_Color = 0xFF000000;
      break;
    default:
      MAINTASKobjc.Input_B_Btn_Util_N_Batt_Level_Color = 0x00FF0000;
  }
aUN868=aN662 | aN655 | aN150;

  _CALL_St_BLACKOUTTXT_Ccp_St_BLACKOUTTXT_Exec(i__2934466b_3ea3_1c1a_16cf_b0e409d969b6, 1, aN182, Unused_STRING__4_Return, Unused_U16__4_RuntimeErrors, aN184)

    memcpy(AB_i__293445e9_3c79_496b_eb21_88bba84c5db5_Log_array, _TEST.CHECK.Log_array_Ints2, 100 * sizeof(U8));
  _CALL_St_LOG_STRING_Ccp_St_LOG_STRING_Exec(i__293445e9_3c79_496b_eb21_88bba84c5db5, aUN868, _TEST.CHECK.Log_head_inString, aN656, AB_i__293445e9_3c79_496b_eb21_88bba84c5db5_Log_array, 100, 0, 0, aN622, Unused_S16__4_Return, Unused_U16__4_RuntimeErrors, aN649, AB_i__293445e9_3c79_496b_eb21_88bba84c5db5_adjusted_log, 100, aN651)
    memcpy(_TEST.CHECK.Log_outArray, AB_i__293445e9_3c79_496b_eb21_88bba84c5db5_adjusted_log, 100 * sizeof(U8));
  aN185 .value = aN185_buffer_3_d;
  aN185 .cur_len_val = (5000 < aN184 .cur_len_val) ? (5000) : (aN184 .cur_len_val);
aN185 .cur_len_ref = 0;
  CopyValidUtf8CodeUnits(aN185_buffer_3_d, aN184 .value, &aN185 .cur_len_val, 0);
  aN663 .value = aN663_buffer_3_e;
  aN663 .cur_len_val = (5000 < aN649 .cur_len_val) ? (5000) : (aN649 .cur_len_val);
aN663 .cur_len_ref = 0;
  CopyValidUtf8CodeUnits(aN663_buffer_3_e, aN649 .value, &aN663 .cur_len_val, 0);
if (aN651 && !aUN1155Old1)
aUN1155=1;
else
aUN1155=0;
aUN1155Old1 = aN651;
  LO_1 .value = _TEST.CHECK.LO_1;
  LO_1 .cur_len_val = (5000 < aN649 .cur_len_val) ? (5000) : (aN649 .cur_len_val);
LO_1 .cur_len_ref = 0;
  CopyValidUtf8CodeUnits(_TEST.CHECK.LO_1, aN649 .value, &LO_1 .cur_len_val, 0);
  _TEST.CHECK.len_LO_1 = LO_1 .cur_len_val;
  if(aUN1155) {
    _TEST.CHECK.INIT_NV_CK = 1;
  }
  LO_2 .value = _TEST.CHECK.LO_2;
  LO_2 .cur_len_val = (5000 < aN663 .cur_len_val) ? (5000) : (aN663 .cur_len_val);
LO_2 .cur_len_ref = 0;
  CopyValidUtf8CodeUnits(_TEST.CHECK.LO_2, aN663 .value, &LO_2 .cur_len_val, 0);
  _TEST.CHECK.len_LO_2 = LO_2 .cur_len_val;
MAINTASKobjb.Input_N_Ver_Minor = 98;
MAINTASKobjb.Input_N_Ver_Major = 0;
if(1!=0)  _CD6937D80_DAB3_46BF_BD14_2475965968A1(&MAINTASKobjb);
if(1!=0)  _CCB2E4559_AEC3_4437_8FE1_48A07FDAA617(&MAINTASKobjc);
MAINTASKobjd.Input_N_BlkOutText = aN185;
}
static void _FNC_123_x(void)
{
       BOOL aUN154;
static BOOL aUN154Old1;
       BOOL aUN1168;
static BOOL aUN1168Old1;
       BOOL aUN155;
static BOOL aUN155Old1;
static U8 aUN155Old2;
       BOOL aUN1161;
static BOOL aUN1161Old1;
static U8 aUN1161Old2;
       BOOL aUN2;
       BOOL aUN31;
static BOOL aUN34;
static U8 aUN34Old1;
static U8 aUN34Old2;
       BOOL aN122;
       BOOL aUN35;
       BOOL aUN32;
       BOOL aUN33;
       BOOL aN9;
static U8 aN148Old1;
static U8 aN148Old2;
static U8 aN14Old1;
static U8 aN14Old2;
  S32 _ShLocTmpVar_S32_1;
static U8 aN11Old1;
static U8 aN11Old2;
if(1!=0)  _C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0(&MAINTASKobjd);
MAINTASKobje.Input_N_Batt_SN = _TEST.CHECK.Batt_SN_setVal;
MAINTASKobje.Input_N_Batt_Addr = _TEST.CHECK.Addr_set;
MAINTASKobje.Input_N_Log_outString = aN663;
if(1!=0)  _C27B4991C_F926_43DC_8BF2_62959109410F(&MAINTASKobje);
OS.ResetExecTime = 0;
if (aN154 && !aUN154Old1)
aUN154=1;
else
aUN154=0;
aUN154Old1 = aN154;
if (aN669 && !aUN1168Old1)
aUN1168=1;
else
aUN1168=0;
aUN1168Old1 = aN669;
if (!aUN154 && aUN155Old1)
aUN155Old2 = 5;
if (aUN155Old2 > _ElapsedTime[T1S])
{
aUN155Old2 = aUN155Old2 - _ElapsedTime[T1S];
aUN155=1;
}
else
{
aUN155Old2 = 0;
aUN155=aUN154;
}
aUN155Old1 = aUN154;
if (!aUN1168 && aUN1161Old1)
aUN1161Old2 = 5;
if (aUN1161Old2 > _ElapsedTime[T1S])
{
aUN1161Old2 = aUN1161Old2 - _ElapsedTime[T1S];
aUN1161=1;
}
else
{
aUN1161Old2 = 0;
aUN1161=aUN1168;
}
aUN1161Old1 = aUN1168;
aUN2=CAN[1].BusOff | CAN[0].BusOff;
aUN31=CAN[1].DriverError | CAN[0].DriverError;
if (1==0)
{
aUN34Old1 = 0;
aUN34=0;
}
else
{
if (aUN34Old1 > _ElapsedTime[T100M])
aUN34Old1 = aUN34Old1 - _ElapsedTime[T100M];
else
{
if ((aUN34== 0) || ((1!=0)&&(aUN34Old2 == 0)) )
{if (10 > 2){
aUN34Old1 = 2;
aUN34Old2 = 10 - 2;
}else{
aUN34Old1 = 10;
aUN34Old2 = 0;}
if ((aUN34Old1 ==0) && (10 != 0))
aUN34=0;
else
aUN34=1;
}
else
{
aUN34=0;
aUN34Old1 = aUN34Old2;
}
}
}
aN122=aUN2 | aUN31;
aUN35=!aUN34;
aUN32=aUN2 && aUN34;
aUN33=aUN31 && aUN35;
aN9=aUN33 | aUN32;
if (aN155==0)
{
aN148Old1 = 0;
Led.AmberLeft=0;
}
else
{
if (aN148Old1 > _ElapsedTime[T100M])
aN148Old1 = aN148Old1 - _ElapsedTime[T100M];
else
{
if ((Led.AmberLeft== 0) || ((aN155!=0)&&(aN148Old2 == 0)) )
{if (10 > 5){
aN148Old1 = 5;
aN148Old2 = 10 - 5;
}else{
aN148Old1 = 10;
aN148Old2 = 0;}
if ((aN148Old1 ==0) && (10 != 0))
Led.AmberLeft=0;
else
Led.AmberLeft=1;
}
else
{
Led.AmberLeft=0;
aN148Old1 = aN148Old2;
}
}
}
if (aUN155==0)
{
aN14Old1 = 0;
Led.GreenRight=0;
}
else
{
if (aN14Old1 > _ElapsedTime[T100M])
aN14Old1 = aN14Old1 - _ElapsedTime[T100M];
else
{
if ((Led.GreenRight== 0) || ((aUN155!=0)&&(aN14Old2 == 0)) )
{if (10 > 5){
aN14Old1 = 5;
aN14Old2 = 10 - 5;
}else{
aN14Old1 = 10;
aN14Old2 = 0;}
if ((aN14Old1 ==0) && (10 != 0))
Led.GreenRight=0;
else
Led.GreenRight=1;
}
else
{
Led.GreenRight=0;
aN14Old1 = aN14Old2;
}
}
}
  _ShLocTmpVar_S32_1 = !(aN122);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      Led.RedLeft = aN9;
      break;
    default:
      Led.RedLeft = 0;
  }
if (aUN1161==0)
{
aN11Old1 = 0;
Led.AmberRight=0;
}
else
{
if (aN11Old1 > _ElapsedTime[T100M])
aN11Old1 = aN11Old1 - _ElapsedTime[T100M];
else
{
if ((Led.AmberRight== 0) || ((aUN1161!=0)&&(aN11Old2 == 0)) )
{if (10 > 5){
aN11Old1 = 5;
aN11Old2 = 10 - 5;
}else{
aN11Old1 = 10;
aN11Old2 = 0;}
if ((aN11Old1 ==0) && (10 != 0))
Led.AmberRight=0;
else
Led.AmberRight=1;
}
else
{
Led.AmberRight=0;
aN11Old1 = aN11Old2;
}
}
}
ServiceTool.MasterPassword.Read = 0;
ServiceTool.DisableRead = 0;
ServiceTool.DisableWrite = 0;
ServiceTool.DisableDownload = 0;
  _ShLocTmpVar_S32_1 = !(aN179);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      Display.Backlight = 0;
      break;
    default:
      Display.Backlight = 100;
  }
Button.Backlight=!aN179;
C1p12.DigOut = 0;
if (1 != 0)
UART[0].TxMsg.Tx=aN133;
UART[0].RxMsg.Clear = 0;
UART[0].TxMsg.Len = 9;
UART[0].Baudrate = 9600;
}

static void _BeginModule_MAINTASK(void){
  ___ScreenInstanceIndex=0;
  _LoopStart      = _OS_MicroSec();
  _ExecTimeOut_us = OS.ExecTimeOut * 1000;
  _TimeSinceStartupInMilliSeconds = _ElapsedTime[T1M] + _TimeSinceStartupInMilliSeconds;

  _CALL_St_FAULTBITTEXT_Ccp_PROCESS(i__330e6c97_134c_4126_bedc_2d3b4fd6b1cd)
  _CALL_St_ORGANIZE_INTS_Ccp_PROCESS(i__330e7d66_5afe_8b8d_7143_95819c746d3c)
  _CALL_St_MEM_SORT_Ccp_PROCESS(i__330e7d59_5ac7_69af_3965_5e7cc50052d5)
  _CALL_St_BLACKOUTTXT_Ccp_PROCESS(i__2934466b_3ea3_1c1a_16cf_b0e409d969b6)
  _CALL_St_LOG_STRING_Ccp_PROCESS(i__293445e9_3c79_496b_eb21_88bba84c5db5)
  _TEST.CHECK.Addr_pend = 0x00;
}

void _MAINTASK(void)
{
  _BeginModule_MAINTASK();

__ToggleBufferIndexes();
_FNC_123_b();
_FNC_123_l();
_FNC_123_m();
_FNC_123_n();
_FNC_123_x();

  _EndLoop_MAINTASK();
}
