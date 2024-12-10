/*Danfoss PLUS+1 GUIDE Software: [ChParGU2] Version: 2023.1.4*/
/*Type: Express       */
/*Id: 28120       */
/*Sub ID: 0       */
/*Maintenance until:  1-Jul-2024       */
/*Time limit: 30-Jun-2025       */
/*       */
/*       */
#include "header.h"
#include "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.h"
static _C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_type *p;
#include "_TextDefinitions.h"
static IOFILE *_gaptr;
static IODATA *_glvptr_3_c;
extern PXO _IMAGEID8;
extern PXO _IMAGEID9;
extern PXO _IMAGEID10;
extern PXO _IMAGEID11;
extern PXO _IMAGEID3;
extern PXO _IMAGEID4;
extern PXO _IMAGEID5;
extern PXO _IMAGEID6;
extern PXO _IMAGEID7;
extern char *___SdtGetNextFileName(void);
static char *AXN7;
static char *AXN22;
static char *AXN54;
static char *AXN86;
static char *AXN118;
static char *AXN142;
static char *AXN228;
static char *AXN260;
static char *AXN275;
static char *AXN355;
static char *AXN435;
static char *AXN515;
static char *AXN594;
static char *AXN673;
static char *AXN752;
static char *AXN831;
static char *AXN910;
static char *AXN989;
static char *AXN1068;
static char *AXN1148;
static char *AXN1163;
static char *AXN1212;
static char *AXN1236;
static char *AXN1274;
static char *AXN1306;
static char *AXN1326;
static char *AXN1364;
static char *AXN1388;
static char *AXN1419;
static char *AXN1439;
static char *AXN1477;
static char *AXN1501;
static char *AXN1531;
static char *AXN1551;
static char *AXN1589;
static char *AXN1613;
static char *AXN1644;
static char *AXN1693;
static char *AXN1725;
static char *AXN1774;
static char *AXN1805;
static char *AXN1825;
static char *AXN1863;
static char *AXN1887;
static char *AXN1917;
static char *AXN1937;
static char *AXN1975;
static char *AXN1999;
static char *AXN2029;
static char *AXN2049;
static char *AXN2087;
static char *AXN2111;
static char *AXN2141;
static char *AXN2165;
static char *AXN2214;
static char *AXN2234;
static char *AXN2258;
static char *AXN2289;
static char *AXN2327;
extern SDFONTTYPE * const BahnschriftSemiLight_14__UNI;
extern SDFONTTYPE * const BahnschriftSemiLight_15__UNI;
extern SDFONTTYPE * const Bahnschrift_14__UNI;
extern SDFONTTYPE * const Bahnschrift_20__UNI;
extern SDFONTTYPE * const BahnschriftSemiLight_23__UNI;
extern U32 _OS_MicroSec(void);
extern int LoopDeadlineTimePassed(void);
static const U8 aXN38[14] = {0x42,0x61,0x74,0x74,0x65,0x72,0x79,0x20,0x53,0x74,0x61,0x74,0x75,0x73};
static const U8 aXN70[4] = {0x4D,0x61,0x69,0x6E};
static const U8 aXN102[3] = {0x4C,0x6F,0x67};
static const U8 aXN134[8] = {0x53,0x65,0x74,0x74,0x69,0x6E,0x67,0x73};
static const U8 aXN244[10] = {0x49,0x6E,0x64,0x69,0x63,0x61,0x74,0x6F,0x72,0x73};
static const U8 aXN291[12] = {0x46,0x61,0x75,0x6C,0x74,0x20,0x53,0x74,0x61,0x74,0x75,0x73};
static const U8 aXN371[15] = {0x42,0x61,0x74,0x74,0x65,0x72,0x79,0x20,0x45,0x6E,0x61,0x62,0x6C,0x65,0x64};
static const U8 aXN451[15] = {0x42,0x61,0x74,0x74,0x6C,0x65,0x20,0x4F,0x76,0x65,0x72,0x72,0x69,0x64,0x65};
static const U8 aXN531[10] = {0x42,0x49,0x54,0x20,0x53,0x74,0x61,0x74,0x75,0x73};
static const U8 aXN610[14] = {0x4F,0x76,0x65,0x72,0x6C,0x6F,0x61,0x64,0x20,0x4C,0x61,0x74,0x63,0x68};
static const U8 aXN689[24] = {0x43,0x68,0x61,0x72,0x67,0x65,0x20,0x4F,0x76,0x65,0x72,0x6C,0x6F,0x61,0x64,0x20,0x44,0x65,0x74,0x65,0x63,0x74,0x65,0x64};
static const U8 aXN768[18] = {0x54,0x6F,0x6F,0x20,0x43,0x6F,0x6C,0x64,0x20,0x74,0x6F,0x20,0x43,0x68,0x61,0x72,0x67,0x65};
static const U8 aXN847[28] = {0x52,0x65,0x73,0x65,0x72,0x76,0x65,0x20,0x50,0x72,0x6F,0x74,0x65,0x63,0x74,0x20,0x57,0x61,0x72,0x6E,0x20,0x52,0x65,0x61,0x63,0x68,0x65,0x64};
static const U8 aXN926[14] = {0x48,0x65,0x61,0x74,0x65,0x72,0x20,0x43,0x6F,0x6E,0x74,0x72,0x6F,0x6C};
static const U8 aXN1005[20] = {0x53,0x57,0x20,0x4F,0x76,0x65,0x72,0x6C,0x6F,0x61,0x64,0x20,0x44,0x65,0x74,0x65,0x63,0x74,0x65,0x64};
static const U8 aXN1084[23] = {0x52,0x65,0x73,0x65,0x72,0x76,0x65,0x20,0x50,0x72,0x6F,0x74,0x65,0x63,0x74,0x20,0x45,0x6E,0x61,0x62,0x6C,0x65,0x64};
static const U8 aXN1182[7] = {0x45,0x6E,0x61,0x62,0x6C,0x65,0x64};
static const U8 aXN1184[7] = {0x53,0x74,0x6F,0x72,0x61,0x67,0x65};
static const U8 aXN1186[8] = {0x44,0x69,0x73,0x61,0x62,0x6C,0x65,0x64};
static const U8 aXN1188[11] = {0x4D,0x61,0x69,0x6E,0x74,0x65,0x6E,0x61,0x6E,0x63,0x65};
static const U8 aXN1190[15] = {0x55,0x6E,0x6B,0x6E,0x6F,0x77,0x6E,0x2F,0x49,0x6E,0x76,0x61,0x6C,0x69,0x64};
static const U8 aXN1192[15] = {0x55,0x6E,0x6B,0x6E,0x6F,0x77,0x6E,0x2F,0x49,0x6E,0x76,0x61,0x6C,0x69,0x64};
static const U8 aXN1194[15] = {0x55,0x6E,0x6B,0x6E,0x6F,0x77,0x6E,0x2F,0x49,0x6E,0x76,0x61,0x6C,0x69,0x64};
static const U8 aXN1196[15] = {0x55,0x6E,0x6B,0x6E,0x6F,0x77,0x6E,0x2F,0x49,0x6E,0x76,0x61,0x6C,0x69,0x64};
static const U8 aXN1228[5] = {0x4D,0x6F,0x64,0x65,0x3A};
static const U8 aXN1290[6] = {0x56,0x61,0x6C,0x75,0x65,0x73};
static const U8 aXN1343[7] = {0x42,0x61,0x74,0x74,0x65,0x72,0x79};
static const U8 aXN1381[7] = {0x43,0x75,0x72,0x72,0x65,0x6E,0x74};
static const U8 aXN1456[7] = {0x42,0x61,0x74,0x74,0x65,0x72,0x79};
static const U8 aXN1494[7] = {0x56,0x6F,0x6C,0x74,0x61,0x67,0x65};
static const U8 aXN1568[7] = {0x52,0x65,0x73,0x65,0x72,0x76,0x65};
static const U8 aXN1606[7] = {0x4C,0x69,0x6D,0x69,0x74,0x20,0x25};
static const U8 aXN1663[13] = {0x4C,0x6F,0x77,0x20,0x50,0x6F,0x77,0x65,0x72,0x20,0x4F,0x46,0x46};
static const U8 aXN1665[9] = {0x4E,0x6F,0x20,0x43,0x68,0x61,0x72,0x67,0x65};
static const U8 aXN1667[19] = {0x4E,0x6F,0x20,0x43,0x68,0x61,0x72,0x67,0x65,0x2F,0x44,0x69,0x73,0x63,0x68,0x61,0x72,0x67,0x65};
static const U8 aXN1669[6] = {0x41,0x6C,0x6C,0x20,0x4F,0x6E};
static const U8 aXN1671[11] = {0x4D,0x61,0x69,0x6E,0x74,0x65,0x6E,0x61,0x6E,0x63,0x65};
static const U8 aXN1673[15] = {0x55,0x6E,0x6B,0x6E,0x6F,0x77,0x6E,0x2F,0x49,0x6E,0x76,0x61,0x6C,0x69,0x64};
static const U8 aXN1675[15] = {0x55,0x6E,0x6B,0x6E,0x6F,0x77,0x6E,0x2F,0x49,0x6E,0x76,0x61,0x6C,0x69,0x64};
static const U8 aXN1677[15] = {0x55,0x6E,0x6B,0x6E,0x6F,0x77,0x6E,0x2F,0x49,0x6E,0x76,0x61,0x6C,0x69,0x64};
static const U8 aXN1709[4] = {0x46,0x45,0x54,0x3A};
static const U8 aXN1744[7] = {0x55,0x6E,0x6B,0x6E,0x6F,0x77,0x6E};
static const U8 aXN1746[4] = {0x49,0x6E,0x69,0x74};
static const U8 aXN1748[10] = {0x4E,0x6F,0x20,0x43,0x75,0x72,0x72,0x65,0x6E,0x74};
static const U8 aXN1750[2] = {0x43,0x43};
static const U8 aXN1752[15] = {0x55,0x6E,0x6B,0x6E,0x6F,0x77,0x6E,0x2F,0x49,0x6E,0x76,0x61,0x6C,0x69,0x64};
static const U8 aXN1754[15] = {0x55,0x6E,0x6B,0x6E,0x6F,0x77,0x6E,0x2F,0x49,0x6E,0x76,0x61,0x6C,0x69,0x64};
static const U8 aXN1756[15] = {0x55,0x6E,0x6B,0x6E,0x6F,0x77,0x6E,0x2F,0x49,0x6E,0x76,0x61,0x6C,0x69,0x64};
static const U8 aXN1758[15] = {0x55,0x6E,0x6B,0x6E,0x6F,0x77,0x6E,0x2F,0x49,0x6E,0x76,0x61,0x6C,0x69,0x64};
static const U8 aXN1790[4] = {0x53,0x4F,0x43,0x3A};
static const U8 aXN1842[3] = {0x45,0x43,0x55};
static const U8 aXN1880[1] = {0x20};
static const U8 aXN1954[7] = {0x43,0x65,0x6C,0x6C,0x20,0x23,0x31};
static const U8 aXN1992[1] = {0x20};
static const U8 aXN2066[7] = {0x43,0x65,0x6C,0x6C,0x20,0x23,0x32};
static const U8 aXN2104[1] = {0x20};
static const U8 aXN2157[15] = {0x54,0x65,0x6D,0x70,0x65,0x72,0x61,0x74,0x75,0x72,0x65,0x20,0x28,0x46,0x29};
static const U8 aXN2251[8] = {0x53,0x65,0x74,0x74,0x69,0x6E,0x67,0x73};
static const U8 aXN2306[12] = {0x54,0x6F,0x67,0x67,0x6C,0x65,0x20,0x56,0x61,0x6C,0x75,0x65};
static const U8 aXN2344[8] = {0x42,0x6C,0x61,0x63,0x6B,0x6F,0x75,0x74};

static const GUIDEHANDLETYPE TextlistArray_3_zdTextDefs[] = {
0,0,0,0,0,0,0,0,
};
static const GUIDEHANDLETYPE TextlistArray_3_chTextDefs[] = {
0,0,0,0,0,0,0,0,
};
static const GUIDEHANDLETYPE TextlistArray_3_hiTextDefs[] = {
0,0,0,0,0,0,0,0,
};
static void _FNC_123_b(void)
{
       BOOL aXN9;
       S32 aXN19;
  S32 _ShLocTmpVar_S32_1;
       BOOL _t_3_b;
       BOOL aXN41;
       S32 aXN51;
       BOOL _t_3_h;
       BOOL aXN73;
       S32 aXN83;
       BOOL _t_3_m;
       BOOL aXN105;
       S32 aXN115;
       BOOL _t_3_r;
       BOOL _t_3_w;
       BOOL _t_3_x;
       BOOL _t_3_y;
       BOOL _t_3_z;
       BOOL _t_3_ab;
       BOOL _t_3_bb;
       BOOL _t_3_cb;
       BOOL _t_3_db;
       BOOL _t_3_eb;
       BOOL aXN215;
       S32 aXN225;
       BOOL _t_3_fb;
       BOOL aXN247;
       S32 aXN257;
       BOOL aXN262;
       S32 aXN272;
       BOOL _t_3_kb;
       U32 aXN299;
       PXO aXN300;
       U32 aXN307;
       U32 aXN308;
       U32 aXN315;
       U32 aXN316;
       U32 aXN323;
       S32 aXN324;
       U32 aXN331;
       S32 aXN332;
       BOOL _t_3_pb;
       BOOL aXN342;
AXN7 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN7,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=271;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=0x00010101;}
aXN9=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN9);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN19 = 65;
      break;
    default:
      aXN19 = 960;
  }
AXN22 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN22,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN19;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=304;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=29;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_b=p->_t_3_bOld1;
p->_t_3_bOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN22,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=0;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_bOld1;
p->_t_3_bOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_d[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_d[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN41=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN41);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN51 = 0;
      break;
    default:
      aXN51 = 960;
  }
AXN54 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN54,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN51;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=235;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=62;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=264;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_h=p->_t_3_hOld1;
p->_t_3_hOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN54,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=-197;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=255;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_15__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_hOld1;
p->_t_3_hOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_i[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_i[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN73=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN73);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN83 = 208;
      break;
    default:
      aXN83 = 960;
  }
AXN86 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN86,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN83;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=235;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=467;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=264;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_m=p->_t_3_mOld1;
p->_t_3_mOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN86,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=0;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=255;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_15__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_mOld1;
p->_t_3_mOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_n[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_n[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN105=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN105);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN115 = 142;
      break;
    default:
      aXN115 = 960;
  }
AXN118 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN118,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN115;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=235;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=401;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=264;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_r=p->_t_3_rOld1;
p->_t_3_rOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN118,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=0;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=255;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_15__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_rOld1;
p->_t_3_rOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_s[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_s[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
AXN142 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN142,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=271;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_w=p->_t_3_wOld1;
p->_t_3_wOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN142,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=260;
_glvptr_3_c->DataPtr.LinePtr->Xend=5;
_glvptr_3_c->DataPtr.LinePtr->Ystart=270;
_glvptr_3_c->DataPtr.LinePtr->Xstart=0;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_wOld1;
p->_t_3_wOld1=1;
}}
_t_3_x=p->_t_3_xOld1;
p->_t_3_xOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN142,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=280;
_glvptr_3_c->DataPtr.LinePtr->Xend=75;
_glvptr_3_c->DataPtr.LinePtr->Ystart=260;
_glvptr_3_c->DataPtr.LinePtr->Xstart=65;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_xOld1;
p->_t_3_xOld1=1;
}}
_t_3_y=p->_t_3_yOld1;
p->_t_3_yOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN142,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=260;
_glvptr_3_c->DataPtr.LinePtr->Xend=65;
_glvptr_3_c->DataPtr.LinePtr->Ystart=260;
_glvptr_3_c->DataPtr.LinePtr->Xstart=5;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_yOld1;
p->_t_3_yOld1=1;
}}
_t_3_z=p->_t_3_zOld1;
p->_t_3_zOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN142,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=260;
_glvptr_3_c->DataPtr.LinePtr->Xend=415;
_glvptr_3_c->DataPtr.LinePtr->Ystart=280;
_glvptr_3_c->DataPtr.LinePtr->Xstart=405;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_zOld1;
p->_t_3_zOld1=1;
}}
_t_3_ab=p->_t_3_abOld1;
p->_t_3_abOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN142,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=260;
_glvptr_3_c->DataPtr.LinePtr->Xend=330;
_glvptr_3_c->DataPtr.LinePtr->Ystart=280;
_glvptr_3_c->DataPtr.LinePtr->Xstart=320;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_abOld1;
p->_t_3_abOld1=1;
}}
_t_3_bb=p->_t_3_bbOld1;
p->_t_3_bbOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN142,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=260;
_glvptr_3_c->DataPtr.LinePtr->Xend=390;
_glvptr_3_c->DataPtr.LinePtr->Ystart=260;
_glvptr_3_c->DataPtr.LinePtr->Xstart=330;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_bbOld1;
p->_t_3_bbOld1=1;
}}
_t_3_cb=p->_t_3_cbOld1;
p->_t_3_cbOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN142,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=260;
_glvptr_3_c->DataPtr.LinePtr->Xend=475;
_glvptr_3_c->DataPtr.LinePtr->Ystart=260;
_glvptr_3_c->DataPtr.LinePtr->Xstart=415;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_cbOld1;
p->_t_3_cbOld1=1;
}}
_t_3_db=p->_t_3_dbOld1;
p->_t_3_dbOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN142,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=280;
_glvptr_3_c->DataPtr.LinePtr->Xend=400;
_glvptr_3_c->DataPtr.LinePtr->Ystart=260;
_glvptr_3_c->DataPtr.LinePtr->Xstart=390;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_dbOld1;
p->_t_3_dbOld1=1;
}}
_t_3_eb=p->_t_3_ebOld1;
p->_t_3_ebOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN142,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=270;
_glvptr_3_c->DataPtr.LinePtr->Xend=480;
_glvptr_3_c->DataPtr.LinePtr->Ystart=260;
_glvptr_3_c->DataPtr.LinePtr->Xstart=475;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_ebOld1;
p->_t_3_ebOld1=1;
}}
aXN215=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && p->Input_N_IndicatorX_Bool;
  _ShLocTmpVar_S32_1 = !(aXN215);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN225 = 0;
      break;
    default:
      aXN225 = 960;
  }
AXN228 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN228,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN225;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=235;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=174;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=264;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_fb=p->_t_3_fbOld1;
p->_t_3_fbOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN228,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=-85;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=255;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_15__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_fbOld1;
p->_t_3_fbOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_gb[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_gb[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN247=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 0;
  _ShLocTmpVar_S32_1 = !(aXN247);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN257 = 5;
      break;
    default:
      aXN257 = 960;
  }
AXN260 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN260,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN257;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=474;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=239;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=0x00004000;}
aXN262=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN262);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN272 = 0;
      break;
    default:
      aXN272 = 960;
  }
AXN275 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN275,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN272;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=55;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=299;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=84;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_kb=p->_t_3_kbOld1;
p->_t_3_kbOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN275,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=33;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=277;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_kbOld1;
p->_t_3_kbOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_lb[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_lb[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED<3)?1:0)) {
case 0: case 7: aXN299=p->Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED;
break;
case 1: case 6: aXN299=3;
break;
case 3: case 4: aXN299=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN299;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN300 = _IMAGEID8;
      break;
    case 1:
      aXN300 = _IMAGEID9;
      break;
    case 2:
      aXN300 = _IMAGEID10;
      break;
    default:
      aXN300 = _IMAGEID11;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED<3)?1:0)) {
case 0: case 7: aXN307=p->Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED;
break;
case 1: case 6: aXN307=3;
break;
case 3: case 4: aXN307=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN307;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN308 = 22;
      break;
    case 1:
      aXN308 = 22;
      break;
    case 2:
      aXN308 = 22;
      break;
    default:
      aXN308 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED<3)?1:0)) {
case 0: case 7: aXN315=p->Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED;
break;
case 1: case 6: aXN315=3;
break;
case 3: case 4: aXN315=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN315;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN316 = 22;
      break;
    case 1:
      aXN316 = 22;
      break;
    case 2:
      aXN316 = 22;
      break;
    default:
      aXN316 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED<3)?1:0)) {
case 0: case 7: aXN323=p->Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED;
break;
case 1: case 6: aXN323=3;
break;
case 3: case 4: aXN323=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN323;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN324 = 0;
      break;
    case 1:
      aXN324 = 0;
      break;
    case 2:
      aXN324 = 0;
      break;
    default:
      aXN324 = 0;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED<3)?1:0)) {
case 0: case 7: aXN331=p->Input_B_CAN_Input_B_ECU_Status_N_Fault_Status_LED;
break;
case 1: case 6: aXN331=3;
break;
case 3: case 4: aXN331=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN331;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN332 = 0;
      break;
    case 1:
      aXN332 = 0;
      break;
    case 2:
      aXN332 = 0;
      break;
    default:
      aXN332 = 0;
  }
_t_3_pb=p->_t_3_pbOld1;
p->_t_3_pbOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN275,BmpData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.GraphPtr->Rotation=0;
_glvptr_3_c->DataPtr.GraphPtr->Xpos=7;
_glvptr_3_c->DataPtr.GraphPtr->Ypos=2;
_glvptr_3_c->DataPtr.GraphPtr->ColorCode=0x00010101;
_glvptr_3_c->DataPtr.GraphPtr->ObjectPtr=aXN300;
_glvptr_3_c->Active =&p->_t_3_pbOld1;
p->_t_3_pbOld1=1;
}}
aXN342=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN342);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      p->aXN352 = 0;
      break;
    default:
      p->aXN352 = 960;
  }
}
static void _FNC_123_c(void)
{
       BOOL _t_3_qb;
       U32 aXN379;
       PXO aXN380;
  S32 _ShLocTmpVar_S32_1;
       U32 aXN387;
       U32 aXN388;
       U32 aXN395;
       U32 aXN396;
       U32 aXN403;
       S32 aXN404;
       U32 aXN411;
       S32 aXN412;
       BOOL _t_3_vb;
       BOOL aXN422;
       S32 aXN432;
       BOOL _t_3_wb;
       U32 aXN459;
       PXO aXN460;
       U32 aXN467;
       U32 aXN468;
       U32 aXN475;
       U32 aXN476;
       U32 aXN483;
       S32 aXN484;
       U32 aXN491;
       S32 aXN492;
       BOOL _t_3_bc;
       BOOL aXN502;
       S32 aXN512;
       BOOL _t_3_cc;
       U32 aXN539;
       PXO aXN540;
       U32 aXN547;
       U32 aXN548;
       U32 aXN555;
       U32 aXN556;
       U32 aXN563;
       S32 aXN564;
       U32 aXN571;
       S32 aXN572;
       BOOL _t_3_hc;
       BOOL aXN581;
       S32 aXN591;
       BOOL _t_3_ic;
       U32 aXN618;
       PXO aXN619;
       U32 aXN626;
       U32 aXN627;
       U32 aXN634;
       U32 aXN635;
       U32 aXN642;
       S32 aXN643;
       U32 aXN650;
       S32 aXN651;
       BOOL _t_3_nc;
       BOOL aXN660;
       S32 aXN670;
       BOOL _t_3_oc;
       U32 aXN697;
       PXO aXN698;
       U32 aXN705;
       U32 aXN706;
       U32 aXN713;
       U32 aXN714;
       U32 aXN721;
       S32 aXN722;
       U32 aXN729;
       S32 aXN730;
       BOOL _t_3_tc;
AXN355 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN355,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=p->aXN352;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=30;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=299;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=59;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_qb=p->_t_3_qbOld1;
p->_t_3_qbOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN355,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=33;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=277;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_qbOld1;
p->_t_3_qbOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_rb[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_rb[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED<3)?1:0)) {
case 0: case 7: aXN379=p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED;
break;
case 1: case 6: aXN379=3;
break;
case 3: case 4: aXN379=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN379;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN380 = _IMAGEID8;
      break;
    case 1:
      aXN380 = _IMAGEID9;
      break;
    case 2:
      aXN380 = _IMAGEID10;
      break;
    default:
      aXN380 = _IMAGEID11;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED<3)?1:0)) {
case 0: case 7: aXN387=p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED;
break;
case 1: case 6: aXN387=3;
break;
case 3: case 4: aXN387=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN387;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN388 = 22;
      break;
    case 1:
      aXN388 = 22;
      break;
    case 2:
      aXN388 = 22;
      break;
    default:
      aXN388 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED<3)?1:0)) {
case 0: case 7: aXN395=p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED;
break;
case 1: case 6: aXN395=3;
break;
case 3: case 4: aXN395=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN395;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN396 = 22;
      break;
    case 1:
      aXN396 = 22;
      break;
    case 2:
      aXN396 = 22;
      break;
    default:
      aXN396 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED<3)?1:0)) {
case 0: case 7: aXN403=p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED;
break;
case 1: case 6: aXN403=3;
break;
case 3: case 4: aXN403=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN403;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN404 = 0;
      break;
    case 1:
      aXN404 = 0;
      break;
    case 2:
      aXN404 = 0;
      break;
    default:
      aXN404 = 0;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED<3)?1:0)) {
case 0: case 7: aXN411=p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Enable_LED;
break;
case 1: case 6: aXN411=3;
break;
case 3: case 4: aXN411=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN411;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN412 = 0;
      break;
    case 1:
      aXN412 = 0;
      break;
    case 2:
      aXN412 = 0;
      break;
    default:
      aXN412 = 0;
  }
_t_3_vb=p->_t_3_vbOld1;
p->_t_3_vbOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN355,BmpData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.GraphPtr->Rotation=0;
_glvptr_3_c->DataPtr.GraphPtr->Xpos=7;
_glvptr_3_c->DataPtr.GraphPtr->Ypos=2;
_glvptr_3_c->DataPtr.GraphPtr->ColorCode=0x00010101;
_glvptr_3_c->DataPtr.GraphPtr->ObjectPtr=aXN380;
_glvptr_3_c->Active =&p->_t_3_vbOld1;
p->_t_3_vbOld1=1;
}}
aXN422=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN422);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN432 = 0;
      break;
    default:
      aXN432 = 960;
  }
AXN435 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN435,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN432;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=105;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=299;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=134;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_wb=p->_t_3_wbOld1;
p->_t_3_wbOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN435,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=33;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=277;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_wbOld1;
p->_t_3_wbOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_xb[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_xb[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED<3)?1:0)) {
case 0: case 7: aXN459=p->Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED;
break;
case 1: case 6: aXN459=3;
break;
case 3: case 4: aXN459=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN459;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN460 = _IMAGEID8;
      break;
    case 1:
      aXN460 = _IMAGEID9;
      break;
    case 2:
      aXN460 = _IMAGEID10;
      break;
    default:
      aXN460 = _IMAGEID11;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED<3)?1:0)) {
case 0: case 7: aXN467=p->Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED;
break;
case 1: case 6: aXN467=3;
break;
case 3: case 4: aXN467=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN467;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN468 = 22;
      break;
    case 1:
      aXN468 = 22;
      break;
    case 2:
      aXN468 = 22;
      break;
    default:
      aXN468 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED<3)?1:0)) {
case 0: case 7: aXN475=p->Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED;
break;
case 1: case 6: aXN475=3;
break;
case 3: case 4: aXN475=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN475;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN476 = 22;
      break;
    case 1:
      aXN476 = 22;
      break;
    case 2:
      aXN476 = 22;
      break;
    default:
      aXN476 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED<3)?1:0)) {
case 0: case 7: aXN483=p->Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED;
break;
case 1: case 6: aXN483=3;
break;
case 3: case 4: aXN483=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN483;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN484 = 0;
      break;
    case 1:
      aXN484 = 0;
      break;
    case 2:
      aXN484 = 0;
      break;
    default:
      aXN484 = 0;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED<3)?1:0)) {
case 0: case 7: aXN491=p->Input_B_CAN_Input_B_ECU_Status_N_Battle_Oride_Status_LED;
break;
case 1: case 6: aXN491=3;
break;
case 3: case 4: aXN491=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN491;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN492 = 0;
      break;
    case 1:
      aXN492 = 0;
      break;
    case 2:
      aXN492 = 0;
      break;
    default:
      aXN492 = 0;
  }
_t_3_bc=p->_t_3_bcOld1;
p->_t_3_bcOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN435,BmpData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.GraphPtr->Rotation=0;
_glvptr_3_c->DataPtr.GraphPtr->Xpos=7;
_glvptr_3_c->DataPtr.GraphPtr->Ypos=2;
_glvptr_3_c->DataPtr.GraphPtr->ColorCode=0x00010101;
_glvptr_3_c->DataPtr.GraphPtr->ObjectPtr=aXN460;
_glvptr_3_c->Active =&p->_t_3_bcOld1;
p->_t_3_bcOld1=1;
}}
aXN502=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN502);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN512 = 0;
      break;
    default:
      aXN512 = 960;
  }
AXN515 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN515,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN512;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=80;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=299;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=109;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_cc=p->_t_3_ccOld1;
p->_t_3_ccOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN515,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=33;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=277;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_ccOld1;
p->_t_3_ccOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_dc[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_dc[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED<3)?1:0)) {
case 0: case 7: aXN539=p->Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED;
break;
case 1: case 6: aXN539=3;
break;
case 3: case 4: aXN539=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN539;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN540 = _IMAGEID8;
      break;
    case 1:
      aXN540 = _IMAGEID9;
      break;
    case 2:
      aXN540 = _IMAGEID10;
      break;
    default:
      aXN540 = _IMAGEID11;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED<3)?1:0)) {
case 0: case 7: aXN547=p->Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED;
break;
case 1: case 6: aXN547=3;
break;
case 3: case 4: aXN547=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN547;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN548 = 22;
      break;
    case 1:
      aXN548 = 22;
      break;
    case 2:
      aXN548 = 22;
      break;
    default:
      aXN548 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED<3)?1:0)) {
case 0: case 7: aXN555=p->Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED;
break;
case 1: case 6: aXN555=3;
break;
case 3: case 4: aXN555=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN555;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN556 = 22;
      break;
    case 1:
      aXN556 = 22;
      break;
    case 2:
      aXN556 = 22;
      break;
    default:
      aXN556 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED<3)?1:0)) {
case 0: case 7: aXN563=p->Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED;
break;
case 1: case 6: aXN563=3;
break;
case 3: case 4: aXN563=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN563;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN564 = 0;
      break;
    case 1:
      aXN564 = 0;
      break;
    case 2:
      aXN564 = 0;
      break;
    default:
      aXN564 = 0;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED<3)?1:0)) {
case 0: case 7: aXN571=p->Input_B_CAN_Input_B_ECU_Status_N_BIT_Status_LED;
break;
case 1: case 6: aXN571=3;
break;
case 3: case 4: aXN571=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN571;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN572 = 0;
      break;
    case 1:
      aXN572 = 0;
      break;
    case 2:
      aXN572 = 0;
      break;
    default:
      aXN572 = 0;
  }
_t_3_hc=p->_t_3_hcOld1;
p->_t_3_hcOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN515,BmpData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.GraphPtr->Rotation=0;
_glvptr_3_c->DataPtr.GraphPtr->Xpos=7;
_glvptr_3_c->DataPtr.GraphPtr->Ypos=2;
_glvptr_3_c->DataPtr.GraphPtr->ColorCode=0x00010101;
_glvptr_3_c->DataPtr.GraphPtr->ObjectPtr=aXN540;
_glvptr_3_c->Active =&p->_t_3_hcOld1;
p->_t_3_hcOld1=1;
}}
aXN581=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && p->Input_N_Indicator_Bool;
  _ShLocTmpVar_S32_1 = !(aXN581);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN591 = 280;
      break;
    default:
      aXN591 = 960;
  }
AXN594 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN594,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN591;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=205;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=234;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_ic=p->_t_3_icOld1;
p->_t_3_icOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN594,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=33;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=277;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_icOld1;
p->_t_3_icOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_jc[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_jc[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED<3)?1:0)) {
case 0: case 7: aXN618=p->Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED;
break;
case 1: case 6: aXN618=3;
break;
case 3: case 4: aXN618=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN618;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN619 = _IMAGEID8;
      break;
    case 1:
      aXN619 = _IMAGEID9;
      break;
    case 2:
      aXN619 = _IMAGEID10;
      break;
    default:
      aXN619 = _IMAGEID11;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED<3)?1:0)) {
case 0: case 7: aXN626=p->Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED;
break;
case 1: case 6: aXN626=3;
break;
case 3: case 4: aXN626=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN626;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN627 = 22;
      break;
    case 1:
      aXN627 = 22;
      break;
    case 2:
      aXN627 = 22;
      break;
    default:
      aXN627 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED<3)?1:0)) {
case 0: case 7: aXN634=p->Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED;
break;
case 1: case 6: aXN634=3;
break;
case 3: case 4: aXN634=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN634;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN635 = 22;
      break;
    case 1:
      aXN635 = 22;
      break;
    case 2:
      aXN635 = 22;
      break;
    default:
      aXN635 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED<3)?1:0)) {
case 0: case 7: aXN642=p->Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED;
break;
case 1: case 6: aXN642=3;
break;
case 3: case 4: aXN642=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN642;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN643 = 0;
      break;
    case 1:
      aXN643 = 0;
      break;
    case 2:
      aXN643 = 0;
      break;
    default:
      aXN643 = 0;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED<3)?1:0)) {
case 0: case 7: aXN650=p->Input_B_CAN_Input_B_ECU_Status_N_Oload_Latch_Status_LED;
break;
case 1: case 6: aXN650=3;
break;
case 3: case 4: aXN650=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN650;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN651 = 0;
      break;
    case 1:
      aXN651 = 0;
      break;
    case 2:
      aXN651 = 0;
      break;
    default:
      aXN651 = 0;
  }
_t_3_nc=p->_t_3_ncOld1;
p->_t_3_ncOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN594,BmpData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.GraphPtr->Rotation=0;
_glvptr_3_c->DataPtr.GraphPtr->Xpos=7;
_glvptr_3_c->DataPtr.GraphPtr->Ypos=2;
_glvptr_3_c->DataPtr.GraphPtr->ColorCode=0x00010101;
_glvptr_3_c->DataPtr.GraphPtr->ObjectPtr=aXN619;
_glvptr_3_c->Active =&p->_t_3_ncOld1;
p->_t_3_ncOld1=1;
}}
aXN660=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && p->Input_N_Indicator_Bool;
  _ShLocTmpVar_S32_1 = !(aXN660);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN670 = 0;
      break;
    default:
      aXN670 = 960;
  }
AXN673 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN673,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN670;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=180;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=299;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=209;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_oc=p->_t_3_ocOld1;
p->_t_3_ocOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN673,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=33;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=277;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_ocOld1;
p->_t_3_ocOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_pc[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_pc[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED<3)?1:0)) {
case 0: case 7: aXN697=p->Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED;
break;
case 1: case 6: aXN697=3;
break;
case 3: case 4: aXN697=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN697;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN698 = _IMAGEID8;
      break;
    case 1:
      aXN698 = _IMAGEID9;
      break;
    case 2:
      aXN698 = _IMAGEID10;
      break;
    default:
      aXN698 = _IMAGEID11;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED<3)?1:0)) {
case 0: case 7: aXN705=p->Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED;
break;
case 1: case 6: aXN705=3;
break;
case 3: case 4: aXN705=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN705;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN706 = 22;
      break;
    case 1:
      aXN706 = 22;
      break;
    case 2:
      aXN706 = 22;
      break;
    default:
      aXN706 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED<3)?1:0)) {
case 0: case 7: aXN713=p->Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED;
break;
case 1: case 6: aXN713=3;
break;
case 3: case 4: aXN713=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN713;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN714 = 22;
      break;
    case 1:
      aXN714 = 22;
      break;
    case 2:
      aXN714 = 22;
      break;
    default:
      aXN714 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED<3)?1:0)) {
case 0: case 7: aXN721=p->Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED;
break;
case 1: case 6: aXN721=3;
break;
case 3: case 4: aXN721=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN721;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN722 = 0;
      break;
    case 1:
      aXN722 = 0;
      break;
    case 2:
      aXN722 = 0;
      break;
    default:
      aXN722 = 0;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED<3)?1:0)) {
case 0: case 7: aXN729=p->Input_B_CAN_Input_B_ECU_Status_N_Charge_Oload_Det_LED;
break;
case 1: case 6: aXN729=3;
break;
case 3: case 4: aXN729=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN729;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN730 = 0;
      break;
    case 1:
      aXN730 = 0;
      break;
    case 2:
      aXN730 = 0;
      break;
    default:
      aXN730 = 0;
  }
_t_3_tc=p->_t_3_tcOld1;
p->_t_3_tcOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN673,BmpData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.GraphPtr->Rotation=0;
_glvptr_3_c->DataPtr.GraphPtr->Xpos=7;
_glvptr_3_c->DataPtr.GraphPtr->Ypos=2;
_glvptr_3_c->DataPtr.GraphPtr->ColorCode=0x00010101;
_glvptr_3_c->DataPtr.GraphPtr->ObjectPtr=aXN698;
_glvptr_3_c->Active =&p->_t_3_tcOld1;
p->_t_3_tcOld1=1;
}}
p->aXN739=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && p->Input_N_Indicator_Bool;
}
static void _FNC_123_d(void)
{
       S32 aXN749;
  S32 _ShLocTmpVar_S32_1;
       BOOL _t_3_uc;
       U32 aXN776;
       PXO aXN777;
       U32 aXN784;
       U32 aXN785;
       U32 aXN792;
       U32 aXN793;
       U32 aXN800;
       S32 aXN801;
       U32 aXN808;
       S32 aXN809;
       BOOL _t_3_zc;
       BOOL aXN818;
       S32 aXN828;
       BOOL _t_3_ad;
       U32 aXN855;
       PXO aXN856;
       U32 aXN863;
       U32 aXN864;
       U32 aXN871;
       U32 aXN872;
       U32 aXN879;
       S32 aXN880;
       U32 aXN887;
       S32 aXN888;
       BOOL _t_3_fd;
       BOOL aXN897;
       S32 aXN907;
       BOOL _t_3_gd;
       U32 aXN934;
       PXO aXN935;
       U32 aXN942;
       U32 aXN943;
       U32 aXN950;
       U32 aXN951;
       U32 aXN958;
       S32 aXN959;
       U32 aXN966;
       S32 aXN967;
       BOOL _t_3_ld;
       BOOL aXN976;
       S32 aXN986;
       BOOL _t_3_md;
       U32 aXN1013;
       PXO aXN1014;
       U32 aXN1021;
       U32 aXN1022;
       U32 aXN1029;
       U32 aXN1030;
       U32 aXN1037;
       S32 aXN1038;
       U32 aXN1045;
       S32 aXN1046;
       BOOL _t_3_rd;
       BOOL aXN1055;
       S32 aXN1065;
       BOOL _t_3_sd;
       U32 aXN1092;
       PXO aXN1093;
       U32 aXN1100;
       U32 aXN1101;
       U32 aXN1108;
       U32 aXN1109;
       U32 aXN1116;
       S32 aXN1117;
       U32 aXN1124;
       S32 aXN1125;
       BOOL _t_3_xd;
  _ShLocTmpVar_S32_1 = !(p->aXN739);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN749 = 280;
      break;
    default:
      aXN749 = 960;
  }
AXN752 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN752,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN749;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=155;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=184;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_uc=p->_t_3_ucOld1;
p->_t_3_ucOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN752,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=33;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=277;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_ucOld1;
p->_t_3_ucOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_vc[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_vc[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED<3)?1:0)) {
case 0: case 7: aXN776=p->Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED;
break;
case 1: case 6: aXN776=3;
break;
case 3: case 4: aXN776=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN776;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN777 = _IMAGEID8;
      break;
    case 1:
      aXN777 = _IMAGEID9;
      break;
    case 2:
      aXN777 = _IMAGEID10;
      break;
    default:
      aXN777 = _IMAGEID11;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED<3)?1:0)) {
case 0: case 7: aXN784=p->Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED;
break;
case 1: case 6: aXN784=3;
break;
case 3: case 4: aXN784=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN784;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN785 = 22;
      break;
    case 1:
      aXN785 = 22;
      break;
    case 2:
      aXN785 = 22;
      break;
    default:
      aXN785 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED<3)?1:0)) {
case 0: case 7: aXN792=p->Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED;
break;
case 1: case 6: aXN792=3;
break;
case 3: case 4: aXN792=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN792;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN793 = 22;
      break;
    case 1:
      aXN793 = 22;
      break;
    case 2:
      aXN793 = 22;
      break;
    default:
      aXN793 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED<3)?1:0)) {
case 0: case 7: aXN800=p->Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED;
break;
case 1: case 6: aXN800=3;
break;
case 3: case 4: aXN800=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN800;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN801 = 0;
      break;
    case 1:
      aXN801 = 0;
      break;
    case 2:
      aXN801 = 0;
      break;
    default:
      aXN801 = 0;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED<3)?1:0)) {
case 0: case 7: aXN808=p->Input_B_CAN_Input_B_ECU_Status_N_TooCold_2Chrg_LED;
break;
case 1: case 6: aXN808=3;
break;
case 3: case 4: aXN808=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN808;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN809 = 0;
      break;
    case 1:
      aXN809 = 0;
      break;
    case 2:
      aXN809 = 0;
      break;
    default:
      aXN809 = 0;
  }
_t_3_zc=p->_t_3_zcOld1;
p->_t_3_zcOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN752,BmpData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.GraphPtr->Rotation=0;
_glvptr_3_c->DataPtr.GraphPtr->Xpos=7;
_glvptr_3_c->DataPtr.GraphPtr->Ypos=2;
_glvptr_3_c->DataPtr.GraphPtr->ColorCode=0x00010101;
_glvptr_3_c->DataPtr.GraphPtr->ObjectPtr=aXN777;
_glvptr_3_c->Active =&p->_t_3_zcOld1;
p->_t_3_zcOld1=1;
}}
aXN818=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && p->Input_N_Indicator_Bool;
  _ShLocTmpVar_S32_1 = !(aXN818);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN828 = 0;
      break;
    default:
      aXN828 = 960;
  }
AXN831 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN831,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN828;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=130;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=299;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=159;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_ad=p->_t_3_adOld1;
p->_t_3_adOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN831,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=33;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=277;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_adOld1;
p->_t_3_adOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_bd[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_bd[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED<3)?1:0)) {
case 0: case 7: aXN855=p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED;
break;
case 1: case 6: aXN855=3;
break;
case 3: case 4: aXN855=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN855;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN856 = _IMAGEID8;
      break;
    case 1:
      aXN856 = _IMAGEID9;
      break;
    case 2:
      aXN856 = _IMAGEID10;
      break;
    default:
      aXN856 = _IMAGEID11;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED<3)?1:0)) {
case 0: case 7: aXN863=p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED;
break;
case 1: case 6: aXN863=3;
break;
case 3: case 4: aXN863=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN863;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN864 = 22;
      break;
    case 1:
      aXN864 = 22;
      break;
    case 2:
      aXN864 = 22;
      break;
    default:
      aXN864 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED<3)?1:0)) {
case 0: case 7: aXN871=p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED;
break;
case 1: case 6: aXN871=3;
break;
case 3: case 4: aXN871=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN871;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN872 = 22;
      break;
    case 1:
      aXN872 = 22;
      break;
    case 2:
      aXN872 = 22;
      break;
    default:
      aXN872 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED<3)?1:0)) {
case 0: case 7: aXN879=p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED;
break;
case 1: case 6: aXN879=3;
break;
case 3: case 4: aXN879=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN879;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN880 = 0;
      break;
    case 1:
      aXN880 = 0;
      break;
    case 2:
      aXN880 = 0;
      break;
    default:
      aXN880 = 0;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED<3)?1:0)) {
case 0: case 7: aXN887=p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Warn_Reached_LED;
break;
case 1: case 6: aXN887=3;
break;
case 3: case 4: aXN887=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN887;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN888 = 0;
      break;
    case 1:
      aXN888 = 0;
      break;
    case 2:
      aXN888 = 0;
      break;
    default:
      aXN888 = 0;
  }
_t_3_fd=p->_t_3_fdOld1;
p->_t_3_fdOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN831,BmpData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.GraphPtr->Rotation=0;
_glvptr_3_c->DataPtr.GraphPtr->Xpos=7;
_glvptr_3_c->DataPtr.GraphPtr->Ypos=2;
_glvptr_3_c->DataPtr.GraphPtr->ColorCode=0x00010101;
_glvptr_3_c->DataPtr.GraphPtr->ObjectPtr=aXN856;
_glvptr_3_c->Active =&p->_t_3_fdOld1;
p->_t_3_fdOld1=1;
}}
aXN897=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && p->Input_N_Indicator_Bool;
  _ShLocTmpVar_S32_1 = !(aXN897);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN907 = 280;
      break;
    default:
      aXN907 = 960;
  }
AXN910 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN910,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN907;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=180;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=209;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_gd=p->_t_3_gdOld1;
p->_t_3_gdOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN910,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=33;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=277;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_gdOld1;
p->_t_3_gdOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_hd[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_hd[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED<3)?1:0)) {
case 0: case 7: aXN934=p->Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED;
break;
case 1: case 6: aXN934=3;
break;
case 3: case 4: aXN934=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN934;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN935 = _IMAGEID8;
      break;
    case 1:
      aXN935 = _IMAGEID9;
      break;
    case 2:
      aXN935 = _IMAGEID10;
      break;
    default:
      aXN935 = _IMAGEID11;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED<3)?1:0)) {
case 0: case 7: aXN942=p->Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED;
break;
case 1: case 6: aXN942=3;
break;
case 3: case 4: aXN942=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN942;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN943 = 22;
      break;
    case 1:
      aXN943 = 22;
      break;
    case 2:
      aXN943 = 22;
      break;
    default:
      aXN943 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED<3)?1:0)) {
case 0: case 7: aXN950=p->Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED;
break;
case 1: case 6: aXN950=3;
break;
case 3: case 4: aXN950=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN950;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN951 = 22;
      break;
    case 1:
      aXN951 = 22;
      break;
    case 2:
      aXN951 = 22;
      break;
    default:
      aXN951 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED<3)?1:0)) {
case 0: case 7: aXN958=p->Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED;
break;
case 1: case 6: aXN958=3;
break;
case 3: case 4: aXN958=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN958;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN959 = 0;
      break;
    case 1:
      aXN959 = 0;
      break;
    case 2:
      aXN959 = 0;
      break;
    default:
      aXN959 = 0;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED<3)?1:0)) {
case 0: case 7: aXN966=p->Input_B_CAN_Input_B_ECU_Status_N_Heater_Ctrl_LED;
break;
case 1: case 6: aXN966=3;
break;
case 3: case 4: aXN966=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN966;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN967 = 0;
      break;
    case 1:
      aXN967 = 0;
      break;
    case 2:
      aXN967 = 0;
      break;
    default:
      aXN967 = 0;
  }
_t_3_ld=p->_t_3_ldOld1;
p->_t_3_ldOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN910,BmpData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.GraphPtr->Rotation=0;
_glvptr_3_c->DataPtr.GraphPtr->Xpos=7;
_glvptr_3_c->DataPtr.GraphPtr->Ypos=2;
_glvptr_3_c->DataPtr.GraphPtr->ColorCode=0x00010101;
_glvptr_3_c->DataPtr.GraphPtr->ObjectPtr=aXN935;
_glvptr_3_c->Active =&p->_t_3_ldOld1;
p->_t_3_ldOld1=1;
}}
aXN976=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && p->Input_N_Indicator_Bool;
  _ShLocTmpVar_S32_1 = !(aXN976);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN986 = 0;
      break;
    default:
      aXN986 = 960;
  }
AXN989 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN989,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN986;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=205;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=299;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=234;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_md=p->_t_3_mdOld1;
p->_t_3_mdOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN989,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=33;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=277;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_mdOld1;
p->_t_3_mdOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_nd[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_nd[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED<3)?1:0)) {
case 0: case 7: aXN1013=p->Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED;
break;
case 1: case 6: aXN1013=3;
break;
case 3: case 4: aXN1013=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN1013;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1014 = _IMAGEID8;
      break;
    case 1:
      aXN1014 = _IMAGEID9;
      break;
    case 2:
      aXN1014 = _IMAGEID10;
      break;
    default:
      aXN1014 = _IMAGEID11;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED<3)?1:0)) {
case 0: case 7: aXN1021=p->Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED;
break;
case 1: case 6: aXN1021=3;
break;
case 3: case 4: aXN1021=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN1021;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1022 = 22;
      break;
    case 1:
      aXN1022 = 22;
      break;
    case 2:
      aXN1022 = 22;
      break;
    default:
      aXN1022 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED<3)?1:0)) {
case 0: case 7: aXN1029=p->Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED;
break;
case 1: case 6: aXN1029=3;
break;
case 3: case 4: aXN1029=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN1029;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1030 = 22;
      break;
    case 1:
      aXN1030 = 22;
      break;
    case 2:
      aXN1030 = 22;
      break;
    default:
      aXN1030 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED<3)?1:0)) {
case 0: case 7: aXN1037=p->Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED;
break;
case 1: case 6: aXN1037=3;
break;
case 3: case 4: aXN1037=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN1037;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1038 = 0;
      break;
    case 1:
      aXN1038 = 0;
      break;
    case 2:
      aXN1038 = 0;
      break;
    default:
      aXN1038 = 0;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED<3)?1:0)) {
case 0: case 7: aXN1045=p->Input_B_CAN_Input_B_ECU_Status_N_SW_Oload_Det_LED;
break;
case 1: case 6: aXN1045=3;
break;
case 3: case 4: aXN1045=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN1045;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1046 = 0;
      break;
    case 1:
      aXN1046 = 0;
      break;
    case 2:
      aXN1046 = 0;
      break;
    default:
      aXN1046 = 0;
  }
_t_3_rd=p->_t_3_rdOld1;
p->_t_3_rdOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN989,BmpData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.GraphPtr->Rotation=0;
_glvptr_3_c->DataPtr.GraphPtr->Xpos=7;
_glvptr_3_c->DataPtr.GraphPtr->Ypos=2;
_glvptr_3_c->DataPtr.GraphPtr->ColorCode=0x00010101;
_glvptr_3_c->DataPtr.GraphPtr->ObjectPtr=aXN1014;
_glvptr_3_c->Active =&p->_t_3_rdOld1;
p->_t_3_rdOld1=1;
}}
aXN1055=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && p->Input_N_Indicator_Bool;
  _ShLocTmpVar_S32_1 = !(aXN1055);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1065 = 0;
      break;
    default:
      aXN1065 = 960;
  }
AXN1068 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1068,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1065;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=155;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=299;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=184;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_sd=p->_t_3_sdOld1;
p->_t_3_sdOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1068,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=33;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=277;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_sdOld1;
p->_t_3_sdOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_td[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_td[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED<3)?1:0)) {
case 0: case 7: aXN1092=p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED;
break;
case 1: case 6: aXN1092=3;
break;
case 3: case 4: aXN1092=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN1092;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1093 = _IMAGEID8;
      break;
    case 1:
      aXN1093 = _IMAGEID9;
      break;
    case 2:
      aXN1093 = _IMAGEID10;
      break;
    default:
      aXN1093 = _IMAGEID11;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED<3)?1:0)) {
case 0: case 7: aXN1100=p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED;
break;
case 1: case 6: aXN1100=3;
break;
case 3: case 4: aXN1100=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN1100;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1101 = 22;
      break;
    case 1:
      aXN1101 = 22;
      break;
    case 2:
      aXN1101 = 22;
      break;
    default:
      aXN1101 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED<3)?1:0)) {
case 0: case 7: aXN1108=p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED;
break;
case 1: case 6: aXN1108=3;
break;
case 3: case 4: aXN1108=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN1108;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1109 = 22;
      break;
    case 1:
      aXN1109 = 22;
      break;
    case 2:
      aXN1109 = 22;
      break;
    default:
      aXN1109 = 22;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED<3)?1:0)) {
case 0: case 7: aXN1116=p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED;
break;
case 1: case 6: aXN1116=3;
break;
case 3: case 4: aXN1116=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN1116;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1117 = 0;
      break;
    case 1:
      aXN1117 = 0;
      break;
    case 2:
      aXN1117 = 0;
      break;
    default:
      aXN1117 = 0;
  }
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED<3)?1:0)) {
case 0: case 7: aXN1124=p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Enabled_LED;
break;
case 1: case 6: aXN1124=3;
break;
case 3: case 4: aXN1124=0;
break;
}
  _ShLocTmpVar_S32_1 = aXN1124;
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1125 = 0;
      break;
    case 1:
      aXN1125 = 0;
      break;
    case 2:
      aXN1125 = 0;
      break;
    default:
      aXN1125 = 0;
  }
_t_3_xd=p->_t_3_xdOld1;
p->_t_3_xdOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN1068,BmpData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.GraphPtr->Rotation=0;
_glvptr_3_c->DataPtr.GraphPtr->Xpos=7;
_glvptr_3_c->DataPtr.GraphPtr->Ypos=2;
_glvptr_3_c->DataPtr.GraphPtr->ColorCode=0x00010101;
_glvptr_3_c->DataPtr.GraphPtr->ObjectPtr=aXN1093;
_glvptr_3_c->Active =&p->_t_3_xdOld1;
p->_t_3_xdOld1=1;
}}
}
static void _FNC_123_e(void)
{
       BOOL aXN1135;
       S32 aXN1145;
  S32 _ShLocTmpVar_S32_1;
       BOOL aXN1150;
       S32 aXN1160;
       U32 aXN1181;
       BOOL _t_3_yd;
       BOOL aXN1199;
       S32 aXN1209;
       BOOL _t_3_ye;
       BOOL _t_3_df;
       BOOL _t_3_ef;
       BOOL _t_3_ff;
       BOOL aXN1261;
       S32 aXN1271;
       BOOL _t_3_gf;
       BOOL aXN1293;
       S32 aXN1303;
       BOOL aXN1308;
       S32 aXN1314;
       S32 aXN1316;
       S32 aXN1318;
       S32 aXN1323;
       S32 aXN1334;
       BOOL _t_3_lf;
       BOOL aXN1346;
       S32 aXN1352;
       S32 aXN1354;
       S32 aXN1356;
       S32 aXN1361;
       S32 aXN1372;
       BOOL _t_3_qf;
       BOOL _t_3_vf;
       BOOL aXN1406;
       S32 aXN1416;
       BOOL aXN1421;
       S32 aXN1427;
       S32 aXN1429;
       S32 aXN1431;
       S32 aXN1436;
       S32 aXN1447;
       BOOL _t_3_zf;
       BOOL aXN1459;
       S32 aXN1465;
       S32 aXN1467;
       S32 aXN1469;
       S32 aXN1474;
       S32 aXN1485;
       BOOL _t_3_eg;
aXN1135=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 0;
  _ShLocTmpVar_S32_1 = !(aXN1135);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1145 = 15;
      break;
    default:
      aXN1145 = 960;
  }
AXN1148 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1148,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1145;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=15;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=269;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=0x40008000;}
aXN1150=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN1150);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1160 = 235;
      break;
    default:
      aXN1160 = 960;
  }
AXN1163 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1163,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1160;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=27;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=474;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=56;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Mode_U8)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Mode_U8<7)?1:0)) {
case 0: case 7: aXN1181=p->Input_B_CAN_Input_B_ECU_Status_N_Battery_Mode_U8;
break;
case 1: case 6: aXN1181=7;
break;
case 3: case 4: aXN1181=0;
break;
}
_t_3_yd=p->_t_3_ydOld1;
p->_t_3_ydOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1163,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=5;
_glvptr_3_c->DataPtr.TextPtr->Ypos=3;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =Bahnschrift_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_ydOld1;
p->_t_3_ydOld1=1;
p->TextlistArray_3_zd[aXN1181][__SdtSampleDataArrayWriteIndex].Language=_AktSprak;
switch(aXN1181){
case 0:
break;
case 1:
break;
case 2:
break;
case 3:
break;
case 4:
break;
case 5:
break;
case 6:
break;
case 7:
break;
}
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&p->TextlistArray_3_zd[aXN1181][__SdtSampleDataArrayWriteIndex];
}
aXN1199=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN1199);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1209 = 3;
      break;
    default:
      aXN1209 = 960;
  }
AXN1212 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1212,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1209;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=30;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=242;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=59;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_ye=p->_t_3_yeOld1;
p->_t_3_yeOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1212,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=0;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_yeOld1;
p->_t_3_yeOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_ze[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_ze[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
AXN1236 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1236,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=271;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_df=p->_t_3_dfOld1;
p->_t_3_dfOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN1236,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=260;
_glvptr_3_c->DataPtr.LinePtr->Xend=90;
_glvptr_3_c->DataPtr.LinePtr->Ystart=280;
_glvptr_3_c->DataPtr.LinePtr->Xstart=80;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_dfOld1;
p->_t_3_dfOld1=1;
}}
_t_3_ef=p->_t_3_efOld1;
p->_t_3_efOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN1236,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=260;
_glvptr_3_c->DataPtr.LinePtr->Xend=150;
_glvptr_3_c->DataPtr.LinePtr->Ystart=260;
_glvptr_3_c->DataPtr.LinePtr->Xstart=90;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_efOld1;
p->_t_3_efOld1=1;
}}
_t_3_ff=p->_t_3_ffOld1;
p->_t_3_ffOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN1236,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=280;
_glvptr_3_c->DataPtr.LinePtr->Xend=160;
_glvptr_3_c->DataPtr.LinePtr->Ystart=260;
_glvptr_3_c->DataPtr.LinePtr->Xstart=150;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_ffOld1;
p->_t_3_ffOld1=1;
}}
aXN1261=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && p->Input_N_Indicator_Bool;
  _ShLocTmpVar_S32_1 = !(aXN1261);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1271 = 0;
      break;
    default:
      aXN1271 = 960;
  }
AXN1274 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1274,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1271;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=235;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=157;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=264;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_gf=p->_t_3_gfOld1;
p->_t_3_gfOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1274,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=-102;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=255;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_15__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_gfOld1;
p->_t_3_gfOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_hf[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_hf[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN1293=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN1293);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1303 = 370;
      break;
    default:
      aXN1303 = 960;
  }
AXN1306 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1306,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1303;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=80;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=149;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
aXN1308=aXN1293 && 1;
  aXN1314 = (aXN1303) - (240);
if((aXN1314) < (0))
  aXN1316 = 0;
else
  aXN1316 = aXN1314;
if((aXN1303) < (240))
  aXN1318 = 240;
else
  aXN1318 = aXN1303;
  _ShLocTmpVar_S32_1 = !(aXN1308);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1323 = aXN1318;
      break;
    default:
      aXN1323 = 960;
  }
AXN1326 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1326,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1323;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=101;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=130;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN1334 = (0) - (aXN1316);
_t_3_lf=p->_t_3_lfOld1;
p->_t_3_lfOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1326,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN1334;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_lfOld1;
p->_t_3_lfOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_mf[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_mf[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN1346=aXN1293 && 1;
  aXN1352 = (aXN1303) - (240);
if((aXN1352) < (0))
  aXN1354 = 0;
else
  aXN1354 = aXN1352;
if((aXN1303) < (240))
  aXN1356 = 240;
else
  aXN1356 = aXN1303;
  _ShLocTmpVar_S32_1 = !(aXN1346);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1361 = aXN1356;
      break;
    default:
      aXN1361 = 960;
  }
AXN1364 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1364,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1361;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=120;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=149;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN1372 = (0) - (aXN1354);
_t_3_qf=p->_t_3_qfOld1;
p->_t_3_qfOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1364,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN1372;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_qfOld1;
p->_t_3_qfOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_rf[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_rf[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
AXN1388 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1388,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1303;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=80;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=149;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_vf=p->_t_3_vfOld1;
p->_t_3_vfOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1388,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=0;
_glvptr_3_c->DataPtr.TextPtr->Ypos=-5;
_glvptr_3_c->DataPtr.TextPtr->Xlen=107;
_glvptr_3_c->DataPtr.TextPtr->Ylen=40;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =Bahnschrift_20__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_vfOld1;
p->_t_3_vfOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_wf[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_wf[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
p->textinst_3_wf[__SdtSampleDataArrayWriteIndex] .Samples[0]._signed=p->Input_B_CAN_Input_N_Batt_Curr_W_S32;
p->textinst_3_wf[__SdtSampleDataArrayWriteIndex] .Samples[1]._unsigned=p->Input_B_CAN_Input_N_Batt_Curr_D_U8;
}
aXN1406=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN1406);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1416 = 370;
      break;
    default:
      aXN1416 = 960;
  }
AXN1419 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1419,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1416;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=10;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=79;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
aXN1421=aXN1406 && 1;
  aXN1427 = (aXN1416) - (240);
if((aXN1427) < (0))
  aXN1429 = 0;
else
  aXN1429 = aXN1427;
if((aXN1416) < (240))
  aXN1431 = 240;
else
  aXN1431 = aXN1416;
  _ShLocTmpVar_S32_1 = !(aXN1421);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1436 = aXN1431;
      break;
    default:
      aXN1436 = 960;
  }
AXN1439 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1439,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1436;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=31;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=60;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN1447 = (0) - (aXN1429);
_t_3_zf=p->_t_3_zfOld1;
p->_t_3_zfOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1439,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN1447;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_zfOld1;
p->_t_3_zfOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_ag[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_ag[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN1459=aXN1406 && 1;
  aXN1465 = (aXN1416) - (240);
if((aXN1465) < (0))
  aXN1467 = 0;
else
  aXN1467 = aXN1465;
if((aXN1416) < (240))
  aXN1469 = 240;
else
  aXN1469 = aXN1416;
  _ShLocTmpVar_S32_1 = !(aXN1459);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1474 = aXN1469;
      break;
    default:
      aXN1474 = 960;
  }
AXN1477 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1477,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1474;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=50;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=79;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN1485 = (0) - (aXN1467);
_t_3_eg=p->_t_3_egOld1;
p->_t_3_egOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1477,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN1485;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_egOld1;
p->_t_3_egOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_fg[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_fg[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
AXN1501 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1501,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1416;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=10;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=79;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
}
static void _FNC_123_f(void)
{
       BOOL _t_3_jg;
       BOOL aXN1518;
       S32 aXN1528;
  S32 _ShLocTmpVar_S32_1;
       BOOL aXN1533;
       S32 aXN1539;
       S32 aXN1541;
       S32 aXN1543;
       S32 aXN1548;
       S32 aXN1559;
       BOOL _t_3_ng;
       BOOL aXN1571;
       S32 aXN1577;
       S32 aXN1579;
       S32 aXN1581;
       S32 aXN1586;
       S32 aXN1597;
       BOOL _t_3_sg;
       BOOL _t_3_xg;
       BOOL aXN1631;
       S32 aXN1641;
       U32 aXN1662;
       BOOL _t_3_bh;
       BOOL aXN1680;
       S32 aXN1690;
       BOOL _t_3_bi;
       BOOL aXN1712;
       S32 aXN1722;
       U32 aXN1743;
       BOOL _t_3_gi;
       BOOL aXN1761;
       S32 aXN1771;
       BOOL _t_3_gj;
       BOOL aXN1792;
       BOOL aXN1807;
       S32 aXN1813;
       S32 aXN1815;
       S32 aXN1817;
       S32 aXN1822;
       S32 aXN1833;
       BOOL _t_3_lj;
       BOOL aXN1845;
       S32 aXN1851;
       S32 aXN1853;
       S32 aXN1855;
       S32 aXN1860;
       S32 aXN1871;
       BOOL _t_3_qj;
_t_3_jg=p->_t_3_jgOld1;
p->_t_3_jgOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1501,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=0;
_glvptr_3_c->DataPtr.TextPtr->Ypos=-5;
_glvptr_3_c->DataPtr.TextPtr->Xlen=107;
_glvptr_3_c->DataPtr.TextPtr->Ylen=40;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =Bahnschrift_20__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_jgOld1;
p->_t_3_jgOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_kg[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_kg[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
p->textinst_3_kg[__SdtSampleDataArrayWriteIndex] .Samples[0]._unsigned=p->Input_B_CAN_Input_N_Batt_Volt_W_U8;
p->textinst_3_kg[__SdtSampleDataArrayWriteIndex] .Samples[1]._unsigned=p->Input_B_CAN_Input_N_Batt_Volt_D_U8;
}
aXN1518=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && p->Input_N_IndicatorX_Bool;
  _ShLocTmpVar_S32_1 = !(aXN1518);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1528 = 370;
      break;
    default:
      aXN1528 = 960;
  }
AXN1531 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1531,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1528;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=150;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=219;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
aXN1533=aXN1518 && 1;
  aXN1539 = (aXN1528) - (240);
if((aXN1539) < (0))
  aXN1541 = 0;
else
  aXN1541 = aXN1539;
if((aXN1528) < (240))
  aXN1543 = 240;
else
  aXN1543 = aXN1528;
  _ShLocTmpVar_S32_1 = !(aXN1533);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1548 = aXN1543;
      break;
    default:
      aXN1548 = 960;
  }
AXN1551 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1551,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1548;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=171;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=200;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN1559 = (0) - (aXN1541);
_t_3_ng=p->_t_3_ngOld1;
p->_t_3_ngOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1551,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN1559;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_ngOld1;
p->_t_3_ngOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_og[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_og[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN1571=aXN1518 && 1;
  aXN1577 = (aXN1528) - (240);
if((aXN1577) < (0))
  aXN1579 = 0;
else
  aXN1579 = aXN1577;
if((aXN1528) < (240))
  aXN1581 = 240;
else
  aXN1581 = aXN1528;
  _ShLocTmpVar_S32_1 = !(aXN1571);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1586 = aXN1581;
      break;
    default:
      aXN1586 = 960;
  }
AXN1589 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1589,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1586;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=190;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=219;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN1597 = (0) - (aXN1579);
_t_3_sg=p->_t_3_sgOld1;
p->_t_3_sgOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1589,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN1597;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_sgOld1;
p->_t_3_sgOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_tg[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_tg[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
AXN1613 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1613,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1528;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=150;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=219;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_xg=p->_t_3_xgOld1;
p->_t_3_xgOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1613,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=0;
_glvptr_3_c->DataPtr.TextPtr->Ypos=-5;
_glvptr_3_c->DataPtr.TextPtr->Xlen=107;
_glvptr_3_c->DataPtr.TextPtr->Ylen=40;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =Bahnschrift_20__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_xgOld1;
p->_t_3_xgOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_yg[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_yg[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
p->textinst_3_yg[__SdtSampleDataArrayWriteIndex] .Samples[0]._unsigned=p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Limit_Perc_W_U8;
p->textinst_3_yg[__SdtSampleDataArrayWriteIndex] .Samples[1]._unsigned=p->Input_B_CAN_Input_B_ECU_Status_N_Reserve_Prtct_Limit_Perc_D_U8;
}
aXN1631=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN1631);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1641 = 220;
      break;
    default:
      aXN1641 = 960;
  }
AXN1644 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1644,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1641;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=52;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=459;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=81;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_FET_Array_State_U8)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_FET_Array_State_U8<7)?1:0)) {
case 0: case 7: aXN1662=p->Input_B_CAN_Input_B_ECU_Status_N_FET_Array_State_U8;
break;
case 1: case 6: aXN1662=7;
break;
case 3: case 4: aXN1662=0;
break;
}
_t_3_bh=p->_t_3_bhOld1;
p->_t_3_bhOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1644,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=5;
_glvptr_3_c->DataPtr.TextPtr->Ypos=3;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =Bahnschrift_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_bhOld1;
p->_t_3_bhOld1=1;
p->TextlistArray_3_ch[aXN1662][__SdtSampleDataArrayWriteIndex].Language=_AktSprak;
switch(aXN1662){
case 0:
break;
case 1:
break;
case 2:
break;
case 3:
break;
case 4:
break;
case 5:
break;
case 6:
break;
case 7:
break;
}
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&p->TextlistArray_3_ch[aXN1662][__SdtSampleDataArrayWriteIndex];
}
aXN1680=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN1680);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1690 = 0;
      break;
    default:
      aXN1690 = 960;
  }
AXN1693 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1693,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1690;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=55;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=227;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=84;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_bi=p->_t_3_biOld1;
p->_t_3_biOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1693,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=-12;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_biOld1;
p->_t_3_biOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_ci[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_ci[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN1712=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN1712);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1722 = 225;
      break;
    default:
      aXN1722 = 960;
  }
AXN1725 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1725,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1722;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=77;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=464;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=106;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
switch(2|((0<p->Input_B_CAN_Input_B_ECU_Status_N_SOC_Mode_U8)?4:0)|((p->Input_B_CAN_Input_B_ECU_Status_N_SOC_Mode_U8<7)?1:0)) {
case 0: case 7: aXN1743=p->Input_B_CAN_Input_B_ECU_Status_N_SOC_Mode_U8;
break;
case 1: case 6: aXN1743=7;
break;
case 3: case 4: aXN1743=0;
break;
}
_t_3_gi=p->_t_3_giOld1;
p->_t_3_giOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1725,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=5;
_glvptr_3_c->DataPtr.TextPtr->Ypos=3;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =Bahnschrift_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_giOld1;
p->_t_3_giOld1=1;
p->TextlistArray_3_hi[aXN1743][__SdtSampleDataArrayWriteIndex].Language=_AktSprak;
switch(aXN1743){
case 0:
break;
case 1:
break;
case 2:
break;
case 3:
break;
case 4:
break;
case 5:
break;
case 6:
break;
case 7:
break;
}
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&p->TextlistArray_3_hi[aXN1743][__SdtSampleDataArrayWriteIndex];
}
aXN1761=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN1761);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1771 = 0;
      break;
    default:
      aXN1771 = 960;
  }
AXN1774 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1774,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1771;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=80;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=232;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=109;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_gj=p->_t_3_gjOld1;
p->_t_3_gjOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1774,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=-7;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_gjOld1;
p->_t_3_gjOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_hj[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_hj[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN1792=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && p->Input_N_IndicatorX_Bool;
  _ShLocTmpVar_S32_1 = !(aXN1792);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      p->aXN1802 = 40;
      break;
    default:
      p->aXN1802 = 960;
  }
AXN1805 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1805,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=p->aXN1802;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=160;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=119;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=229;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
aXN1807=aXN1792 && 1;
  aXN1813 = (p->aXN1802) - (-120);
if((aXN1813) < (0))
  aXN1815 = 0;
else
  aXN1815 = aXN1813;
if((p->aXN1802) < (-120))
  aXN1817 = -120;
else
  aXN1817 = p->aXN1802;
  _ShLocTmpVar_S32_1 = !(aXN1807);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1822 = aXN1817;
      break;
    default:
      aXN1822 = 960;
  }
AXN1825 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1825,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1822;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=181;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=119;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=210;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN1833 = (0) - (aXN1815);
_t_3_lj=p->_t_3_ljOld1;
p->_t_3_ljOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1825,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN1833;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_ljOld1;
p->_t_3_ljOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_mj[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_mj[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN1845=aXN1792 && 1;
  aXN1851 = (p->aXN1802) - (-120);
if((aXN1851) < (0))
  aXN1853 = 0;
else
  aXN1853 = aXN1851;
if((p->aXN1802) < (-120))
  aXN1855 = -120;
else
  aXN1855 = p->aXN1802;
  _ShLocTmpVar_S32_1 = !(aXN1845);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1860 = aXN1855;
      break;
    default:
      aXN1860 = 960;
  }
AXN1863 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1863,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1860;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=200;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=119;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=229;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN1871 = (0) - (aXN1853);
_t_3_qj=p->_t_3_qjOld1;
p->_t_3_qjOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1863,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN1871;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_qjOld1;
p->_t_3_qjOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_rj[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_rj[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
}
static void _FNC_123_g(void)
{
       BOOL _t_3_vj;
       BOOL aXN1904;
       S32 aXN1914;
  S32 _ShLocTmpVar_S32_1;
       BOOL aXN1919;
       S32 aXN1925;
       S32 aXN1927;
       S32 aXN1929;
       S32 aXN1934;
       S32 aXN1945;
       BOOL _t_3_zj;
       BOOL aXN1957;
       S32 aXN1963;
       S32 aXN1965;
       S32 aXN1967;
       S32 aXN1972;
       S32 aXN1983;
       BOOL _t_3_ek;
       BOOL _t_3_jk;
       BOOL aXN2016;
       S32 aXN2026;
       BOOL aXN2031;
       S32 aXN2037;
       S32 aXN2039;
       S32 aXN2041;
       S32 aXN2046;
       S32 aXN2057;
       BOOL _t_3_nk;
       BOOL aXN2069;
       S32 aXN2075;
       S32 aXN2077;
       S32 aXN2079;
       S32 aXN2084;
       S32 aXN2095;
       BOOL _t_3_sk;
       BOOL _t_3_xk;
       BOOL aXN2128;
       S32 aXN2138;
       BOOL _t_3_bl;
       BOOL _t_3_gl;
       BOOL _t_3_hl;
       BOOL _t_3_il;
       BOOL _t_3_jl;
       BOOL _t_3_kl;
       BOOL aXN2216;
       S32 aXN2222;
       S32 aXN2224;
       S32 aXN2226;
       S32 aXN2231;
       S32 aXN2242;
       BOOL _t_3_ll;
       BOOL _t_3_ql;
AXN1887 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1887,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=p->aXN1802;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=160;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=119;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=229;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_vj=p->_t_3_vjOld1;
p->_t_3_vjOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1887,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=0;
_glvptr_3_c->DataPtr.TextPtr->Ypos=-5;
_glvptr_3_c->DataPtr.TextPtr->Xlen=77;
_glvptr_3_c->DataPtr.TextPtr->Ylen=31;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =Bahnschrift_20__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_vjOld1;
p->_t_3_vjOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_wj[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_wj[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
p->textinst_3_wj[__SdtSampleDataArrayWriteIndex] .Samples[0]._signed=p->Input_B_CAN_Input_N_ECU_Temp_S16;
}
aXN1904=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && p->Input_N_IndicatorX_Bool;
  _ShLocTmpVar_S32_1 = !(aXN1904);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1914 = 150;
      break;
    default:
      aXN1914 = 960;
  }
AXN1917 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1917,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1914;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=160;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=229;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=229;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
aXN1919=aXN1904 && 1;
  aXN1925 = (aXN1914) - (-10);
if((aXN1925) < (0))
  aXN1927 = 0;
else
  aXN1927 = aXN1925;
if((aXN1914) < (-10))
  aXN1929 = -10;
else
  aXN1929 = aXN1914;
  _ShLocTmpVar_S32_1 = !(aXN1919);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1934 = aXN1929;
      break;
    default:
      aXN1934 = 960;
  }
AXN1937 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1937,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1934;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=181;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=229;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=210;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN1945 = (0) - (aXN1927);
_t_3_zj=p->_t_3_zjOld1;
p->_t_3_zjOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1937,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN1945;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_zjOld1;
p->_t_3_zjOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_ak[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_ak[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN1957=aXN1904 && 1;
  aXN1963 = (aXN1914) - (-10);
if((aXN1963) < (0))
  aXN1965 = 0;
else
  aXN1965 = aXN1963;
if((aXN1914) < (-10))
  aXN1967 = -10;
else
  aXN1967 = aXN1914;
  _ShLocTmpVar_S32_1 = !(aXN1957);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN1972 = aXN1967;
      break;
    default:
      aXN1972 = 960;
  }
AXN1975 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1975,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1972;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=200;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=229;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=229;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN1983 = (0) - (aXN1965);
_t_3_ek=p->_t_3_ekOld1;
p->_t_3_ekOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1975,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN1983;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_ekOld1;
p->_t_3_ekOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_fk[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_fk[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
AXN1999 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN1999,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN1914;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=160;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=229;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=229;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_jk=p->_t_3_jkOld1;
p->_t_3_jkOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN1999,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=0;
_glvptr_3_c->DataPtr.TextPtr->Ypos=-5;
_glvptr_3_c->DataPtr.TextPtr->Xlen=77;
_glvptr_3_c->DataPtr.TextPtr->Ylen=31;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =Bahnschrift_20__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_jkOld1;
p->_t_3_jkOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_kk[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_kk[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
p->textinst_3_kk[__SdtSampleDataArrayWriteIndex] .Samples[0]._signed=p->Input_B_CAN_Input_N_Cell_Temp1_S16;
}
aXN2016=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && p->Input_N_IndicatorX_Bool;
  _ShLocTmpVar_S32_1 = !(aXN2016);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN2026 = 260;
      break;
    default:
      aXN2026 = 960;
  }
AXN2029 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN2029,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN2026;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=160;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=339;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=229;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
aXN2031=aXN2016 && 1;
  aXN2037 = (aXN2026) - (100);
if((aXN2037) < (0))
  aXN2039 = 0;
else
  aXN2039 = aXN2037;
if((aXN2026) < (100))
  aXN2041 = 100;
else
  aXN2041 = aXN2026;
  _ShLocTmpVar_S32_1 = !(aXN2031);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN2046 = aXN2041;
      break;
    default:
      aXN2046 = 960;
  }
AXN2049 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN2049,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN2046;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=181;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=339;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=210;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN2057 = (0) - (aXN2039);
_t_3_nk=p->_t_3_nkOld1;
p->_t_3_nkOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN2049,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN2057;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_nkOld1;
p->_t_3_nkOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_ok[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_ok[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN2069=aXN2016 && 1;
  aXN2075 = (aXN2026) - (100);
if((aXN2075) < (0))
  aXN2077 = 0;
else
  aXN2077 = aXN2075;
if((aXN2026) < (100))
  aXN2079 = 100;
else
  aXN2079 = aXN2026;
  _ShLocTmpVar_S32_1 = !(aXN2069);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN2084 = aXN2079;
      break;
    default:
      aXN2084 = 960;
  }
AXN2087 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN2087,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN2084;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=200;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=339;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=229;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN2095 = (0) - (aXN2077);
_t_3_sk=p->_t_3_skOld1;
p->_t_3_skOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN2087,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN2095;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_skOld1;
p->_t_3_skOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_tk[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_tk[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
AXN2111 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN2111,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN2026;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=160;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=339;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=229;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_xk=p->_t_3_xkOld1;
p->_t_3_xkOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN2111,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=0;
_glvptr_3_c->DataPtr.TextPtr->Ypos=-5;
_glvptr_3_c->DataPtr.TextPtr->Xlen=77;
_glvptr_3_c->DataPtr.TextPtr->Ylen=31;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =Bahnschrift_20__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_xkOld1;
p->_t_3_xkOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_yk[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_yk[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
p->textinst_3_yk[__SdtSampleDataArrayWriteIndex] .Samples[0]._signed=p->Input_B_CAN_Input_N_Cell_Temp2_S16;
}
aXN2128=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && p->Input_N_IndicatorX_Bool;
  _ShLocTmpVar_S32_1 = !(aXN2128);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN2138 = 39;
      break;
    default:
      aXN2138 = 960;
  }
AXN2141 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN2141,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN2138;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=130;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=278;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=159;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_bl=p->_t_3_blOld1;
p->_t_3_blOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN2141,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=0;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_blOld1;
p->_t_3_blOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_cl[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_cl[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
AXN2165 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN2165,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=271;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_gl=p->_t_3_glOld1;
p->_t_3_glOld1=0;
if (p->Input_N_IndicatorX_Bool) { 
_glvptr_3_c= _FIND_IODATA(0,AXN2165,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=145;
_glvptr_3_c->DataPtr.LinePtr->Xend=375;
_glvptr_3_c->DataPtr.LinePtr->Ystart=145;
_glvptr_3_c->DataPtr.LinePtr->Xstart=280;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_glOld1;
p->_t_3_glOld1=1;
}}
_t_3_hl=p->_t_3_hlOld1;
p->_t_3_hlOld1=0;
if (p->Input_N_IndicatorX_Bool) { 
_glvptr_3_c= _FIND_IODATA(0,AXN2165,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=145;
_glvptr_3_c->DataPtr.LinePtr->Xend=130;
_glvptr_3_c->DataPtr.LinePtr->Ystart=145;
_glvptr_3_c->DataPtr.LinePtr->Xstart=35;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_hlOld1;
p->_t_3_hlOld1=1;
}}
_t_3_il=p->_t_3_ilOld1;
p->_t_3_ilOld1=0;
if (p->Input_N_IndicatorX_Bool) { 
_glvptr_3_c= _FIND_IODATA(0,AXN2165,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=220;
_glvptr_3_c->DataPtr.LinePtr->Xend=375;
_glvptr_3_c->DataPtr.LinePtr->Ystart=220;
_glvptr_3_c->DataPtr.LinePtr->Xstart=35;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_ilOld1;
p->_t_3_ilOld1=1;
}}
_t_3_jl=p->_t_3_jlOld1;
p->_t_3_jlOld1=0;
if (p->Input_N_IndicatorX_Bool) { 
_glvptr_3_c= _FIND_IODATA(0,AXN2165,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=220;
_glvptr_3_c->DataPtr.LinePtr->Xend=35;
_glvptr_3_c->DataPtr.LinePtr->Ystart=145;
_glvptr_3_c->DataPtr.LinePtr->Xstart=35;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_jlOld1;
p->_t_3_jlOld1=1;
}}
_t_3_kl=p->_t_3_klOld1;
p->_t_3_klOld1=0;
if (p->Input_N_IndicatorX_Bool) { 
_glvptr_3_c= _FIND_IODATA(0,AXN2165,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=220;
_glvptr_3_c->DataPtr.LinePtr->Xend=375;
_glvptr_3_c->DataPtr.LinePtr->Ystart=145;
_glvptr_3_c->DataPtr.LinePtr->Xstart=375;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_klOld1;
p->_t_3_klOld1=1;
}}
p->aXN2201=p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable && p->Input_N_Setting_PopUp;
  _ShLocTmpVar_S32_1 = !(p->aXN2201);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      p->aXN2211 = 100;
      break;
    default:
      p->aXN2211 = 960;
  }
AXN2214 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN2214,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=p->aXN2211;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=15;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=379;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=214;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=0x80808000;}
aXN2216=p->aXN2201 && 1;
  aXN2222 = (p->aXN2211) - (61);
if((aXN2222) < (0))
  aXN2224 = 0;
else
  aXN2224 = aXN2222;
if((p->aXN2211) < (61))
  aXN2226 = 61;
else
  aXN2226 = p->aXN2211;
  _ShLocTmpVar_S32_1 = !(aXN2216);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN2231 = aXN2226;
      break;
    default:
      aXN2231 = 960;
  }
AXN2234 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN2234,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN2231;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=15;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=300;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=64;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN2242 = (0) - (aXN2224);
_t_3_ll=p->_t_3_llOld1;
p->_t_3_llOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN2234,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN2242;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=42;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_23__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_llOld1;
p->_t_3_llOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_ml[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_ml[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
AXN2258 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN2258,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=p->aXN2211;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=15;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=379;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=214;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_ql=p->_t_3_qlOld1;
p->_t_3_qlOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN2258,BmpData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.GraphPtr->Rotation=0;
_glvptr_3_c->DataPtr.GraphPtr->Xpos=75;
_glvptr_3_c->DataPtr.GraphPtr->Ypos=175;
_glvptr_3_c->DataPtr.GraphPtr->ColorCode=0x00010101;
_glvptr_3_c->DataPtr.GraphPtr->ObjectPtr=_IMAGEID3;
_glvptr_3_c->Active =&p->_t_3_qlOld1;
p->_t_3_qlOld1=1;
}}
}
static void _FNC_123_h(void)
{
       BOOL aXN2271;
       S32 aXN2277;
       S32 aXN2279;
       S32 aXN2281;
       S32 aXN2286;
  S32 _ShLocTmpVar_S32_1;
       S32 aXN2297;
       BOOL _t_3_rl;
       BOOL aXN2309;
       S32 aXN2315;
       S32 aXN2317;
       S32 aXN2319;
       S32 aXN2324;
       S32 aXN2335;
       BOOL _t_3_wl;
       S32 aXN2358;
       BOOL _t_3_fm;
aXN2271=p->aXN2201 && 1;
  aXN2277 = (p->aXN2211) - (70);
if((aXN2277) < (0))
  aXN2279 = 0;
else
  aXN2279 = aXN2277;
if((p->aXN2211) < (70))
  aXN2281 = 70;
else
  aXN2281 = p->aXN2211;
  _ShLocTmpVar_S32_1 = !(aXN2271);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN2286 = aXN2281;
      break;
    default:
      aXN2286 = 960;
  }
AXN2289 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN2289,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN2286;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=185;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=309;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=214;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN2297 = (0) - (aXN2279);
_t_3_rl=p->_t_3_rlOld1;
p->_t_3_rlOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN2289,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN2297;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_rlOld1;
p->_t_3_rlOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_sl[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_sl[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN2309=p->aXN2201 && 1;
  aXN2315 = (p->aXN2211) - (185);
if((aXN2315) < (0))
  aXN2317 = 0;
else
  aXN2317 = aXN2315;
if((p->aXN2211) < (185))
  aXN2319 = 185;
else
  aXN2319 = p->aXN2211;
  _ShLocTmpVar_S32_1 = !(aXN2309);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN2324 = aXN2319;
      break;
    default:
      aXN2324 = 960;
  }
AXN2327 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN2327,VisionFileData,p->C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN2324;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=70;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=379;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=99;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN2335 = (0) - (aXN2317);
_t_3_wl=p->_t_3_wlOld1;
p->_t_3_wlOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN2327,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN2335;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_wlOld1;
p->_t_3_wlOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_xl[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_xl[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
p->textinst_3_xl[__SdtSampleDataArrayWriteIndex] .Samples[1]. _string->length =(p->Input_N_BlkOutText .cur_len_val<5000)?p->Input_N_BlkOutText .cur_len_val:5000;
CopyValidUtf8CodeUnits(p->textinst_3_xl[__SdtSampleDataArrayWriteIndex] .Samples[1]. _string->bytes,p->Input_N_BlkOutText .value, &p->textinst_3_xl[__SdtSampleDataArrayWriteIndex] .Samples[1]. _string->length, 0);
}
  aXN2358 = (20) - (aXN2317);
_t_3_fm=p->_t_3_fmOld1;
p->_t_3_fmOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN2327,BmpData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.GraphPtr->Rotation=0;
_glvptr_3_c->DataPtr.GraphPtr->Xpos=aXN2358;
_glvptr_3_c->DataPtr.GraphPtr->Ypos=175;
_glvptr_3_c->DataPtr.GraphPtr->ColorCode=0x00010101;
_glvptr_3_c->DataPtr.GraphPtr->ObjectPtr=_IMAGEID7;
_glvptr_3_c->Active =&p->_t_3_fmOld1;
p->_t_3_fmOld1=1;
}}
}
void _INITC49B02B97_88A0_4711_A8B6_DB8B71EA5BB0(_C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_type *instanceStruct)
{
S32 textlist_index;
p=instanceStruct;
p->textinst_3_d[0] .TextDef=0;
p->textinst_3_d[1] .TextDef=0;
p->textinst_3_d[0] .Language=0;
p->textinst_3_d[1] .Language=0;
p->textinst_3_d[0] .Samples=p->sample1_3_e;
p->textinst_3_d[1] .Samples=p->sample2_3_f;
p->StrSmplStruct_3_g .length=14;
p->StrSmplStruct_3_g .bytes=&aXN38;
p->sample1_3_e[0]._string=&p->StrSmplStruct_3_g;
p->sample2_3_f[0]._string=&p->StrSmplStruct_3_g;
p->textinst_3_i[0] .TextDef=0;
p->textinst_3_i[1] .TextDef=0;
p->textinst_3_i[0] .Language=0;
p->textinst_3_i[1] .Language=0;
p->textinst_3_i[0] .Samples=p->sample1_3_j;
p->textinst_3_i[1] .Samples=p->sample2_3_k;
p->StrSmplStruct_3_l .length=4;
p->StrSmplStruct_3_l .bytes=&aXN70;
p->sample1_3_j[0]._string=&p->StrSmplStruct_3_l;
p->sample2_3_k[0]._string=&p->StrSmplStruct_3_l;
p->textinst_3_n[0] .TextDef=0;
p->textinst_3_n[1] .TextDef=0;
p->textinst_3_n[0] .Language=0;
p->textinst_3_n[1] .Language=0;
p->textinst_3_n[0] .Samples=p->sample1_3_o;
p->textinst_3_n[1] .Samples=p->sample2_3_p;
p->StrSmplStruct_3_q .length=3;
p->StrSmplStruct_3_q .bytes=&aXN102;
p->sample1_3_o[0]._string=&p->StrSmplStruct_3_q;
p->sample2_3_p[0]._string=&p->StrSmplStruct_3_q;
p->textinst_3_s[0] .TextDef=0;
p->textinst_3_s[1] .TextDef=0;
p->textinst_3_s[0] .Language=0;
p->textinst_3_s[1] .Language=0;
p->textinst_3_s[0] .Samples=p->sample1_3_t;
p->textinst_3_s[1] .Samples=p->sample2_3_u;
p->StrSmplStruct_3_v .length=8;
p->StrSmplStruct_3_v .bytes=&aXN134;
p->sample1_3_t[0]._string=&p->StrSmplStruct_3_v;
p->sample2_3_u[0]._string=&p->StrSmplStruct_3_v;
p->textinst_3_gb[0] .TextDef=0;
p->textinst_3_gb[1] .TextDef=0;
p->textinst_3_gb[0] .Language=0;
p->textinst_3_gb[1] .Language=0;
p->textinst_3_gb[0] .Samples=p->sample1_3_hb;
p->textinst_3_gb[1] .Samples=p->sample2_3_ib;
p->StrSmplStruct_3_jb .length=10;
p->StrSmplStruct_3_jb .bytes=&aXN244;
p->sample1_3_hb[0]._string=&p->StrSmplStruct_3_jb;
p->sample2_3_ib[0]._string=&p->StrSmplStruct_3_jb;
p->textinst_3_lb[0] .TextDef=0;
p->textinst_3_lb[1] .TextDef=0;
p->textinst_3_lb[0] .Language=0;
p->textinst_3_lb[1] .Language=0;
p->textinst_3_lb[0] .Samples=p->sample1_3_mb;
p->textinst_3_lb[1] .Samples=p->sample2_3_nb;
p->StrSmplStruct_3_ob .length=12;
p->StrSmplStruct_3_ob .bytes=&aXN291;
p->sample1_3_mb[0]._string=&p->StrSmplStruct_3_ob;
p->sample2_3_nb[0]._string=&p->StrSmplStruct_3_ob;
p->textinst_3_rb[0] .TextDef=0;
p->textinst_3_rb[1] .TextDef=0;
p->textinst_3_rb[0] .Language=0;
p->textinst_3_rb[1] .Language=0;
p->textinst_3_rb[0] .Samples=p->sample1_3_sb;
p->textinst_3_rb[1] .Samples=p->sample2_3_tb;
p->StrSmplStruct_3_ub .length=15;
p->StrSmplStruct_3_ub .bytes=&aXN371;
p->sample1_3_sb[0]._string=&p->StrSmplStruct_3_ub;
p->sample2_3_tb[0]._string=&p->StrSmplStruct_3_ub;
p->textinst_3_xb[0] .TextDef=0;
p->textinst_3_xb[1] .TextDef=0;
p->textinst_3_xb[0] .Language=0;
p->textinst_3_xb[1] .Language=0;
p->textinst_3_xb[0] .Samples=p->sample1_3_yb;
p->textinst_3_xb[1] .Samples=p->sample2_3_zb;
p->StrSmplStruct_3_ac .length=15;
p->StrSmplStruct_3_ac .bytes=&aXN451;
p->sample1_3_yb[0]._string=&p->StrSmplStruct_3_ac;
p->sample2_3_zb[0]._string=&p->StrSmplStruct_3_ac;
p->textinst_3_dc[0] .TextDef=0;
p->textinst_3_dc[1] .TextDef=0;
p->textinst_3_dc[0] .Language=0;
p->textinst_3_dc[1] .Language=0;
p->textinst_3_dc[0] .Samples=p->sample1_3_ec;
p->textinst_3_dc[1] .Samples=p->sample2_3_fc;
p->StrSmplStruct_3_gc .length=10;
p->StrSmplStruct_3_gc .bytes=&aXN531;
p->sample1_3_ec[0]._string=&p->StrSmplStruct_3_gc;
p->sample2_3_fc[0]._string=&p->StrSmplStruct_3_gc;
p->textinst_3_jc[0] .TextDef=0;
p->textinst_3_jc[1] .TextDef=0;
p->textinst_3_jc[0] .Language=0;
p->textinst_3_jc[1] .Language=0;
p->textinst_3_jc[0] .Samples=p->sample1_3_kc;
p->textinst_3_jc[1] .Samples=p->sample2_3_lc;
p->StrSmplStruct_3_mc .length=14;
p->StrSmplStruct_3_mc .bytes=&aXN610;
p->sample1_3_kc[0]._string=&p->StrSmplStruct_3_mc;
p->sample2_3_lc[0]._string=&p->StrSmplStruct_3_mc;
p->textinst_3_pc[0] .TextDef=0;
p->textinst_3_pc[1] .TextDef=0;
p->textinst_3_pc[0] .Language=0;
p->textinst_3_pc[1] .Language=0;
p->textinst_3_pc[0] .Samples=p->sample1_3_qc;
p->textinst_3_pc[1] .Samples=p->sample2_3_rc;
p->StrSmplStruct_3_sc .length=24;
p->StrSmplStruct_3_sc .bytes=&aXN689;
p->sample1_3_qc[0]._string=&p->StrSmplStruct_3_sc;
p->sample2_3_rc[0]._string=&p->StrSmplStruct_3_sc;
p->textinst_3_vc[0] .TextDef=0;
p->textinst_3_vc[1] .TextDef=0;
p->textinst_3_vc[0] .Language=0;
p->textinst_3_vc[1] .Language=0;
p->textinst_3_vc[0] .Samples=p->sample1_3_wc;
p->textinst_3_vc[1] .Samples=p->sample2_3_xc;
p->StrSmplStruct_3_yc .length=18;
p->StrSmplStruct_3_yc .bytes=&aXN768;
p->sample1_3_wc[0]._string=&p->StrSmplStruct_3_yc;
p->sample2_3_xc[0]._string=&p->StrSmplStruct_3_yc;
p->textinst_3_bd[0] .TextDef=0;
p->textinst_3_bd[1] .TextDef=0;
p->textinst_3_bd[0] .Language=0;
p->textinst_3_bd[1] .Language=0;
p->textinst_3_bd[0] .Samples=p->sample1_3_cd;
p->textinst_3_bd[1] .Samples=p->sample2_3_dd;
p->StrSmplStruct_3_ed .length=28;
p->StrSmplStruct_3_ed .bytes=&aXN847;
p->sample1_3_cd[0]._string=&p->StrSmplStruct_3_ed;
p->sample2_3_dd[0]._string=&p->StrSmplStruct_3_ed;
p->textinst_3_hd[0] .TextDef=0;
p->textinst_3_hd[1] .TextDef=0;
p->textinst_3_hd[0] .Language=0;
p->textinst_3_hd[1] .Language=0;
p->textinst_3_hd[0] .Samples=p->sample1_3_id;
p->textinst_3_hd[1] .Samples=p->sample2_3_jd;
p->StrSmplStruct_3_kd .length=14;
p->StrSmplStruct_3_kd .bytes=&aXN926;
p->sample1_3_id[0]._string=&p->StrSmplStruct_3_kd;
p->sample2_3_jd[0]._string=&p->StrSmplStruct_3_kd;
p->textinst_3_nd[0] .TextDef=0;
p->textinst_3_nd[1] .TextDef=0;
p->textinst_3_nd[0] .Language=0;
p->textinst_3_nd[1] .Language=0;
p->textinst_3_nd[0] .Samples=p->sample1_3_od;
p->textinst_3_nd[1] .Samples=p->sample2_3_pd;
p->StrSmplStruct_3_qd .length=20;
p->StrSmplStruct_3_qd .bytes=&aXN1005;
p->sample1_3_od[0]._string=&p->StrSmplStruct_3_qd;
p->sample2_3_pd[0]._string=&p->StrSmplStruct_3_qd;
p->textinst_3_td[0] .TextDef=0;
p->textinst_3_td[1] .TextDef=0;
p->textinst_3_td[0] .Language=0;
p->textinst_3_td[1] .Language=0;
p->textinst_3_td[0] .Samples=p->sample1_3_ud;
p->textinst_3_td[1] .Samples=p->sample2_3_vd;
p->StrSmplStruct_3_wd .length=23;
p->StrSmplStruct_3_wd .bytes=&aXN1084;
p->sample1_3_ud[0]._string=&p->StrSmplStruct_3_wd;
p->sample2_3_vd[0]._string=&p->StrSmplStruct_3_wd;
p->TextlistArray_3_zd[0][0] .Samples=p->sample1_3_ae;
p->TextlistArray_3_zd[0][1] .Samples=p->sample2_3_be;
p->StrSmplStruct_3_ce .length=7;
p->StrSmplStruct_3_ce .bytes=&aXN1182;
p->sample1_3_ae[0]._string=&p->StrSmplStruct_3_ce;
p->sample2_3_be[0]._string=&p->StrSmplStruct_3_ce;
p->TextlistArray_3_zd[1][0] .Samples=p->sample1_3_de;
p->TextlistArray_3_zd[1][1] .Samples=p->sample2_3_ee;
p->StrSmplStruct_3_fe .length=7;
p->StrSmplStruct_3_fe .bytes=&aXN1184;
p->sample1_3_de[0]._string=&p->StrSmplStruct_3_fe;
p->sample2_3_ee[0]._string=&p->StrSmplStruct_3_fe;
p->TextlistArray_3_zd[2][0] .Samples=p->sample1_3_ge;
p->TextlistArray_3_zd[2][1] .Samples=p->sample2_3_he;
p->StrSmplStruct_3_ie .length=8;
p->StrSmplStruct_3_ie .bytes=&aXN1186;
p->sample1_3_ge[0]._string=&p->StrSmplStruct_3_ie;
p->sample2_3_he[0]._string=&p->StrSmplStruct_3_ie;
p->TextlistArray_3_zd[3][0] .Samples=p->sample1_3_je;
p->TextlistArray_3_zd[3][1] .Samples=p->sample2_3_ke;
p->StrSmplStruct_3_le .length=11;
p->StrSmplStruct_3_le .bytes=&aXN1188;
p->sample1_3_je[0]._string=&p->StrSmplStruct_3_le;
p->sample2_3_ke[0]._string=&p->StrSmplStruct_3_le;
p->TextlistArray_3_zd[4][0] .Samples=p->sample1_3_me;
p->TextlistArray_3_zd[4][1] .Samples=p->sample2_3_ne;
p->StrSmplStruct_3_oe .length=15;
p->StrSmplStruct_3_oe .bytes=&aXN1190;
p->sample1_3_me[0]._string=&p->StrSmplStruct_3_oe;
p->sample2_3_ne[0]._string=&p->StrSmplStruct_3_oe;
p->TextlistArray_3_zd[5][0] .Samples=p->sample1_3_pe;
p->TextlistArray_3_zd[5][1] .Samples=p->sample2_3_qe;
p->StrSmplStruct_3_re .length=15;
p->StrSmplStruct_3_re .bytes=&aXN1192;
p->sample1_3_pe[0]._string=&p->StrSmplStruct_3_re;
p->sample2_3_qe[0]._string=&p->StrSmplStruct_3_re;
p->TextlistArray_3_zd[6][0] .Samples=p->sample1_3_se;
p->TextlistArray_3_zd[6][1] .Samples=p->sample2_3_te;
p->StrSmplStruct_3_ue .length=15;
p->StrSmplStruct_3_ue .bytes=&aXN1194;
p->sample1_3_se[0]._string=&p->StrSmplStruct_3_ue;
p->sample2_3_te[0]._string=&p->StrSmplStruct_3_ue;
p->TextlistArray_3_zd[7][0] .Samples=p->sample1_3_ve;
p->TextlistArray_3_zd[7][1] .Samples=p->sample2_3_we;
p->StrSmplStruct_3_xe .length=15;
p->StrSmplStruct_3_xe .bytes=&aXN1196;
p->sample1_3_ve[0]._string=&p->StrSmplStruct_3_xe;
p->sample2_3_we[0]._string=&p->StrSmplStruct_3_xe;
for(textlist_index=0;textlist_index<8;textlist_index++) {
p->TextlistArray_3_zd[textlist_index][0].TextDef=TextlistArray_3_zdTextDefs[textlist_index];
p->TextlistArray_3_zd[textlist_index][1].TextDef=TextlistArray_3_zdTextDefs[textlist_index];
}
p->textinst_3_ze[0] .TextDef=0;
p->textinst_3_ze[1] .TextDef=0;
p->textinst_3_ze[0] .Language=0;
p->textinst_3_ze[1] .Language=0;
p->textinst_3_ze[0] .Samples=p->sample1_3_af;
p->textinst_3_ze[1] .Samples=p->sample2_3_bf;
p->StrSmplStruct_3_cf .length=5;
p->StrSmplStruct_3_cf .bytes=&aXN1228;
p->sample1_3_af[0]._string=&p->StrSmplStruct_3_cf;
p->sample2_3_bf[0]._string=&p->StrSmplStruct_3_cf;
p->textinst_3_hf[0] .TextDef=0;
p->textinst_3_hf[1] .TextDef=0;
p->textinst_3_hf[0] .Language=0;
p->textinst_3_hf[1] .Language=0;
p->textinst_3_hf[0] .Samples=p->sample1_3_if;
p->textinst_3_hf[1] .Samples=p->sample2_3_jf;
p->StrSmplStruct_3_kf .length=6;
p->StrSmplStruct_3_kf .bytes=&aXN1290;
p->sample1_3_if[0]._string=&p->StrSmplStruct_3_kf;
p->sample2_3_jf[0]._string=&p->StrSmplStruct_3_kf;
p->textinst_3_mf[0] .TextDef=0;
p->textinst_3_mf[1] .TextDef=0;
p->textinst_3_mf[0] .Language=0;
p->textinst_3_mf[1] .Language=0;
p->textinst_3_mf[0] .Samples=p->sample1_3_nf;
p->textinst_3_mf[1] .Samples=p->sample2_3_of;
p->StrSmplStruct_3_pf .length=7;
p->StrSmplStruct_3_pf .bytes=&aXN1343;
p->sample1_3_nf[0]._string=&p->StrSmplStruct_3_pf;
p->sample2_3_of[0]._string=&p->StrSmplStruct_3_pf;
p->textinst_3_rf[0] .TextDef=0;
p->textinst_3_rf[1] .TextDef=0;
p->textinst_3_rf[0] .Language=0;
p->textinst_3_rf[1] .Language=0;
p->textinst_3_rf[0] .Samples=p->sample1_3_sf;
p->textinst_3_rf[1] .Samples=p->sample2_3_tf;
p->StrSmplStruct_3_uf .length=7;
p->StrSmplStruct_3_uf .bytes=&aXN1381;
p->sample1_3_sf[0]._string=&p->StrSmplStruct_3_uf;
p->sample2_3_tf[0]._string=&p->StrSmplStruct_3_uf;
p->textinst_3_wf[0] .TextDef=6;
p->textinst_3_wf[1] .TextDef=6;
p->textinst_3_wf[0] .Language=0;
p->textinst_3_wf[1] .Language=0;
p->textinst_3_wf[0] .Samples=p->sample1_3_xf;
p->textinst_3_wf[1] .Samples=p->sample2_3_yf;
p->textinst_3_ag[0] .TextDef=0;
p->textinst_3_ag[1] .TextDef=0;
p->textinst_3_ag[0] .Language=0;
p->textinst_3_ag[1] .Language=0;
p->textinst_3_ag[0] .Samples=p->sample1_3_bg;
p->textinst_3_ag[1] .Samples=p->sample2_3_cg;
p->StrSmplStruct_3_dg .length=7;
p->StrSmplStruct_3_dg .bytes=&aXN1456;
p->sample1_3_bg[0]._string=&p->StrSmplStruct_3_dg;
p->sample2_3_cg[0]._string=&p->StrSmplStruct_3_dg;
p->textinst_3_fg[0] .TextDef=0;
p->textinst_3_fg[1] .TextDef=0;
p->textinst_3_fg[0] .Language=0;
p->textinst_3_fg[1] .Language=0;
p->textinst_3_fg[0] .Samples=p->sample1_3_gg;
p->textinst_3_fg[1] .Samples=p->sample2_3_hg;
p->StrSmplStruct_3_ig .length=7;
p->StrSmplStruct_3_ig .bytes=&aXN1494;
p->sample1_3_gg[0]._string=&p->StrSmplStruct_3_ig;
p->sample2_3_hg[0]._string=&p->StrSmplStruct_3_ig;
p->textinst_3_kg[0] .TextDef=3;
p->textinst_3_kg[1] .TextDef=3;
p->textinst_3_kg[0] .Language=0;
p->textinst_3_kg[1] .Language=0;
p->textinst_3_kg[0] .Samples=p->sample1_3_lg;
p->textinst_3_kg[1] .Samples=p->sample2_3_mg;
p->textinst_3_og[0] .TextDef=0;
p->textinst_3_og[1] .TextDef=0;
p->textinst_3_og[0] .Language=0;
p->textinst_3_og[1] .Language=0;
p->textinst_3_og[0] .Samples=p->sample1_3_pg;
p->textinst_3_og[1] .Samples=p->sample2_3_qg;
p->StrSmplStruct_3_rg .length=7;
p->StrSmplStruct_3_rg .bytes=&aXN1568;
p->sample1_3_pg[0]._string=&p->StrSmplStruct_3_rg;
p->sample2_3_qg[0]._string=&p->StrSmplStruct_3_rg;
p->textinst_3_tg[0] .TextDef=0;
p->textinst_3_tg[1] .TextDef=0;
p->textinst_3_tg[0] .Language=0;
p->textinst_3_tg[1] .Language=0;
p->textinst_3_tg[0] .Samples=p->sample1_3_ug;
p->textinst_3_tg[1] .Samples=p->sample2_3_vg;
p->StrSmplStruct_3_wg .length=7;
p->StrSmplStruct_3_wg .bytes=&aXN1606;
p->sample1_3_ug[0]._string=&p->StrSmplStruct_3_wg;
p->sample2_3_vg[0]._string=&p->StrSmplStruct_3_wg;
p->textinst_3_yg[0] .TextDef=3;
p->textinst_3_yg[1] .TextDef=3;
p->textinst_3_yg[0] .Language=0;
p->textinst_3_yg[1] .Language=0;
p->textinst_3_yg[0] .Samples=p->sample1_3_zg;
p->textinst_3_yg[1] .Samples=p->sample2_3_ah;
p->TextlistArray_3_ch[0][0] .Samples=p->sample1_3_dh;
p->TextlistArray_3_ch[0][1] .Samples=p->sample2_3_eh;
p->StrSmplStruct_3_fh .length=13;
p->StrSmplStruct_3_fh .bytes=&aXN1663;
p->sample1_3_dh[0]._string=&p->StrSmplStruct_3_fh;
p->sample2_3_eh[0]._string=&p->StrSmplStruct_3_fh;
p->TextlistArray_3_ch[1][0] .Samples=p->sample1_3_gh;
p->TextlistArray_3_ch[1][1] .Samples=p->sample2_3_hh;
p->StrSmplStruct_3_ih .length=9;
p->StrSmplStruct_3_ih .bytes=&aXN1665;
p->sample1_3_gh[0]._string=&p->StrSmplStruct_3_ih;
p->sample2_3_hh[0]._string=&p->StrSmplStruct_3_ih;
p->TextlistArray_3_ch[2][0] .Samples=p->sample1_3_jh;
p->TextlistArray_3_ch[2][1] .Samples=p->sample2_3_kh;
p->StrSmplStruct_3_lh .length=19;
p->StrSmplStruct_3_lh .bytes=&aXN1667;
p->sample1_3_jh[0]._string=&p->StrSmplStruct_3_lh;
p->sample2_3_kh[0]._string=&p->StrSmplStruct_3_lh;
p->TextlistArray_3_ch[3][0] .Samples=p->sample1_3_mh;
p->TextlistArray_3_ch[3][1] .Samples=p->sample2_3_nh;
p->StrSmplStruct_3_oh .length=6;
p->StrSmplStruct_3_oh .bytes=&aXN1669;
p->sample1_3_mh[0]._string=&p->StrSmplStruct_3_oh;
p->sample2_3_nh[0]._string=&p->StrSmplStruct_3_oh;
p->TextlistArray_3_ch[4][0] .Samples=p->sample1_3_ph;
p->TextlistArray_3_ch[4][1] .Samples=p->sample2_3_qh;
p->StrSmplStruct_3_rh .length=11;
p->StrSmplStruct_3_rh .bytes=&aXN1671;
p->sample1_3_ph[0]._string=&p->StrSmplStruct_3_rh;
p->sample2_3_qh[0]._string=&p->StrSmplStruct_3_rh;
p->TextlistArray_3_ch[5][0] .Samples=p->sample1_3_sh;
p->TextlistArray_3_ch[5][1] .Samples=p->sample2_3_th;
p->StrSmplStruct_3_uh .length=15;
p->StrSmplStruct_3_uh .bytes=&aXN1673;
p->sample1_3_sh[0]._string=&p->StrSmplStruct_3_uh;
p->sample2_3_th[0]._string=&p->StrSmplStruct_3_uh;
p->TextlistArray_3_ch[6][0] .Samples=p->sample1_3_vh;
p->TextlistArray_3_ch[6][1] .Samples=p->sample2_3_wh;
p->StrSmplStruct_3_xh .length=15;
p->StrSmplStruct_3_xh .bytes=&aXN1675;
p->sample1_3_vh[0]._string=&p->StrSmplStruct_3_xh;
p->sample2_3_wh[0]._string=&p->StrSmplStruct_3_xh;
p->TextlistArray_3_ch[7][0] .Samples=p->sample1_3_yh;
p->TextlistArray_3_ch[7][1] .Samples=p->sample2_3_zh;
p->StrSmplStruct_3_ai .length=15;
p->StrSmplStruct_3_ai .bytes=&aXN1677;
p->sample1_3_yh[0]._string=&p->StrSmplStruct_3_ai;
p->sample2_3_zh[0]._string=&p->StrSmplStruct_3_ai;
for(textlist_index=0;textlist_index<8;textlist_index++) {
p->TextlistArray_3_ch[textlist_index][0].TextDef=TextlistArray_3_chTextDefs[textlist_index];
p->TextlistArray_3_ch[textlist_index][1].TextDef=TextlistArray_3_chTextDefs[textlist_index];
}
p->textinst_3_ci[0] .TextDef=0;
p->textinst_3_ci[1] .TextDef=0;
p->textinst_3_ci[0] .Language=0;
p->textinst_3_ci[1] .Language=0;
p->textinst_3_ci[0] .Samples=p->sample1_3_di;
p->textinst_3_ci[1] .Samples=p->sample2_3_ei;
p->StrSmplStruct_3_fi .length=4;
p->StrSmplStruct_3_fi .bytes=&aXN1709;
p->sample1_3_di[0]._string=&p->StrSmplStruct_3_fi;
p->sample2_3_ei[0]._string=&p->StrSmplStruct_3_fi;
p->TextlistArray_3_hi[0][0] .Samples=p->sample1_3_ii;
p->TextlistArray_3_hi[0][1] .Samples=p->sample2_3_ji;
p->StrSmplStruct_3_ki .length=7;
p->StrSmplStruct_3_ki .bytes=&aXN1744;
p->sample1_3_ii[0]._string=&p->StrSmplStruct_3_ki;
p->sample2_3_ji[0]._string=&p->StrSmplStruct_3_ki;
p->TextlistArray_3_hi[1][0] .Samples=p->sample1_3_li;
p->TextlistArray_3_hi[1][1] .Samples=p->sample2_3_mi;
p->StrSmplStruct_3_ni .length=4;
p->StrSmplStruct_3_ni .bytes=&aXN1746;
p->sample1_3_li[0]._string=&p->StrSmplStruct_3_ni;
p->sample2_3_mi[0]._string=&p->StrSmplStruct_3_ni;
p->TextlistArray_3_hi[2][0] .Samples=p->sample1_3_oi;
p->TextlistArray_3_hi[2][1] .Samples=p->sample2_3_pi;
p->StrSmplStruct_3_qi .length=10;
p->StrSmplStruct_3_qi .bytes=&aXN1748;
p->sample1_3_oi[0]._string=&p->StrSmplStruct_3_qi;
p->sample2_3_pi[0]._string=&p->StrSmplStruct_3_qi;
p->TextlistArray_3_hi[3][0] .Samples=p->sample1_3_ri;
p->TextlistArray_3_hi[3][1] .Samples=p->sample2_3_si;
p->StrSmplStruct_3_ti .length=2;
p->StrSmplStruct_3_ti .bytes=&aXN1750;
p->sample1_3_ri[0]._string=&p->StrSmplStruct_3_ti;
p->sample2_3_si[0]._string=&p->StrSmplStruct_3_ti;
p->TextlistArray_3_hi[4][0] .Samples=p->sample1_3_ui;
p->TextlistArray_3_hi[4][1] .Samples=p->sample2_3_vi;
p->StrSmplStruct_3_wi .length=15;
p->StrSmplStruct_3_wi .bytes=&aXN1752;
p->sample1_3_ui[0]._string=&p->StrSmplStruct_3_wi;
p->sample2_3_vi[0]._string=&p->StrSmplStruct_3_wi;
p->TextlistArray_3_hi[5][0] .Samples=p->sample1_3_xi;
p->TextlistArray_3_hi[5][1] .Samples=p->sample2_3_yi;
p->StrSmplStruct_3_zi .length=15;
p->StrSmplStruct_3_zi .bytes=&aXN1754;
p->sample1_3_xi[0]._string=&p->StrSmplStruct_3_zi;
p->sample2_3_yi[0]._string=&p->StrSmplStruct_3_zi;
p->TextlistArray_3_hi[6][0] .Samples=p->sample1_3_aj;
p->TextlistArray_3_hi[6][1] .Samples=p->sample2_3_bj;
p->StrSmplStruct_3_cj .length=15;
p->StrSmplStruct_3_cj .bytes=&aXN1756;
p->sample1_3_aj[0]._string=&p->StrSmplStruct_3_cj;
p->sample2_3_bj[0]._string=&p->StrSmplStruct_3_cj;
p->TextlistArray_3_hi[7][0] .Samples=p->sample1_3_dj;
p->TextlistArray_3_hi[7][1] .Samples=p->sample2_3_ej;
p->StrSmplStruct_3_fj .length=15;
p->StrSmplStruct_3_fj .bytes=&aXN1758;
p->sample1_3_dj[0]._string=&p->StrSmplStruct_3_fj;
p->sample2_3_ej[0]._string=&p->StrSmplStruct_3_fj;
for(textlist_index=0;textlist_index<8;textlist_index++) {
p->TextlistArray_3_hi[textlist_index][0].TextDef=TextlistArray_3_hiTextDefs[textlist_index];
p->TextlistArray_3_hi[textlist_index][1].TextDef=TextlistArray_3_hiTextDefs[textlist_index];
}
p->textinst_3_hj[0] .TextDef=0;
p->textinst_3_hj[1] .TextDef=0;
p->textinst_3_hj[0] .Language=0;
p->textinst_3_hj[1] .Language=0;
p->textinst_3_hj[0] .Samples=p->sample1_3_ij;
p->textinst_3_hj[1] .Samples=p->sample2_3_jj;
p->StrSmplStruct_3_kj .length=4;
p->StrSmplStruct_3_kj .bytes=&aXN1790;
p->sample1_3_ij[0]._string=&p->StrSmplStruct_3_kj;
p->sample2_3_jj[0]._string=&p->StrSmplStruct_3_kj;
p->textinst_3_mj[0] .TextDef=0;
p->textinst_3_mj[1] .TextDef=0;
p->textinst_3_mj[0] .Language=0;
p->textinst_3_mj[1] .Language=0;
p->textinst_3_mj[0] .Samples=p->sample1_3_nj;
p->textinst_3_mj[1] .Samples=p->sample2_3_oj;
p->StrSmplStruct_3_pj .length=3;
p->StrSmplStruct_3_pj .bytes=&aXN1842;
p->sample1_3_nj[0]._string=&p->StrSmplStruct_3_pj;
p->sample2_3_oj[0]._string=&p->StrSmplStruct_3_pj;
p->textinst_3_rj[0] .TextDef=0;
p->textinst_3_rj[1] .TextDef=0;
p->textinst_3_rj[0] .Language=0;
p->textinst_3_rj[1] .Language=0;
p->textinst_3_rj[0] .Samples=p->sample1_3_sj;
p->textinst_3_rj[1] .Samples=p->sample2_3_tj;
p->StrSmplStruct_3_uj .length=1;
p->StrSmplStruct_3_uj .bytes=&aXN1880;
p->sample1_3_sj[0]._string=&p->StrSmplStruct_3_uj;
p->sample2_3_tj[0]._string=&p->StrSmplStruct_3_uj;
p->textinst_3_wj[0] .TextDef=7;
p->textinst_3_wj[1] .TextDef=7;
p->textinst_3_wj[0] .Language=0;
p->textinst_3_wj[1] .Language=0;
p->textinst_3_wj[0] .Samples=p->sample1_3_xj;
p->textinst_3_wj[1] .Samples=p->sample2_3_yj;
p->textinst_3_ak[0] .TextDef=0;
p->textinst_3_ak[1] .TextDef=0;
p->textinst_3_ak[0] .Language=0;
p->textinst_3_ak[1] .Language=0;
p->textinst_3_ak[0] .Samples=p->sample1_3_bk;
p->textinst_3_ak[1] .Samples=p->sample2_3_ck;
p->StrSmplStruct_3_dk .length=7;
p->StrSmplStruct_3_dk .bytes=&aXN1954;
p->sample1_3_bk[0]._string=&p->StrSmplStruct_3_dk;
p->sample2_3_ck[0]._string=&p->StrSmplStruct_3_dk;
p->textinst_3_fk[0] .TextDef=0;
p->textinst_3_fk[1] .TextDef=0;
p->textinst_3_fk[0] .Language=0;
p->textinst_3_fk[1] .Language=0;
p->textinst_3_fk[0] .Samples=p->sample1_3_gk;
p->textinst_3_fk[1] .Samples=p->sample2_3_hk;
p->StrSmplStruct_3_ik .length=1;
p->StrSmplStruct_3_ik .bytes=&aXN1992;
p->sample1_3_gk[0]._string=&p->StrSmplStruct_3_ik;
p->sample2_3_hk[0]._string=&p->StrSmplStruct_3_ik;
p->textinst_3_kk[0] .TextDef=7;
p->textinst_3_kk[1] .TextDef=7;
p->textinst_3_kk[0] .Language=0;
p->textinst_3_kk[1] .Language=0;
p->textinst_3_kk[0] .Samples=p->sample1_3_lk;
p->textinst_3_kk[1] .Samples=p->sample2_3_mk;
p->textinst_3_ok[0] .TextDef=0;
p->textinst_3_ok[1] .TextDef=0;
p->textinst_3_ok[0] .Language=0;
p->textinst_3_ok[1] .Language=0;
p->textinst_3_ok[0] .Samples=p->sample1_3_pk;
p->textinst_3_ok[1] .Samples=p->sample2_3_qk;
p->StrSmplStruct_3_rk .length=7;
p->StrSmplStruct_3_rk .bytes=&aXN2066;
p->sample1_3_pk[0]._string=&p->StrSmplStruct_3_rk;
p->sample2_3_qk[0]._string=&p->StrSmplStruct_3_rk;
p->textinst_3_tk[0] .TextDef=0;
p->textinst_3_tk[1] .TextDef=0;
p->textinst_3_tk[0] .Language=0;
p->textinst_3_tk[1] .Language=0;
p->textinst_3_tk[0] .Samples=p->sample1_3_uk;
p->textinst_3_tk[1] .Samples=p->sample2_3_vk;
p->StrSmplStruct_3_wk .length=1;
p->StrSmplStruct_3_wk .bytes=&aXN2104;
p->sample1_3_uk[0]._string=&p->StrSmplStruct_3_wk;
p->sample2_3_vk[0]._string=&p->StrSmplStruct_3_wk;
p->textinst_3_yk[0] .TextDef=7;
p->textinst_3_yk[1] .TextDef=7;
p->textinst_3_yk[0] .Language=0;
p->textinst_3_yk[1] .Language=0;
p->textinst_3_yk[0] .Samples=p->sample1_3_zk;
p->textinst_3_yk[1] .Samples=p->sample2_3_al;
p->textinst_3_cl[0] .TextDef=0;
p->textinst_3_cl[1] .TextDef=0;
p->textinst_3_cl[0] .Language=0;
p->textinst_3_cl[1] .Language=0;
p->textinst_3_cl[0] .Samples=p->sample1_3_dl;
p->textinst_3_cl[1] .Samples=p->sample2_3_el;
p->StrSmplStruct_3_fl .length=15;
p->StrSmplStruct_3_fl .bytes=&aXN2157;
p->sample1_3_dl[0]._string=&p->StrSmplStruct_3_fl;
p->sample2_3_el[0]._string=&p->StrSmplStruct_3_fl;
p->textinst_3_ml[0] .TextDef=0;
p->textinst_3_ml[1] .TextDef=0;
p->textinst_3_ml[0] .Language=0;
p->textinst_3_ml[1] .Language=0;
p->textinst_3_ml[0] .Samples=p->sample1_3_nl;
p->textinst_3_ml[1] .Samples=p->sample2_3_ol;
p->StrSmplStruct_3_pl .length=8;
p->StrSmplStruct_3_pl .bytes=&aXN2251;
p->sample1_3_nl[0]._string=&p->StrSmplStruct_3_pl;
p->sample2_3_ol[0]._string=&p->StrSmplStruct_3_pl;
p->textinst_3_sl[0] .TextDef=0;
p->textinst_3_sl[1] .TextDef=0;
p->textinst_3_sl[0] .Language=0;
p->textinst_3_sl[1] .Language=0;
p->textinst_3_sl[0] .Samples=p->sample1_3_tl;
p->textinst_3_sl[1] .Samples=p->sample2_3_ul;
p->StrSmplStruct_3_vl .length=12;
p->StrSmplStruct_3_vl .bytes=&aXN2306;
p->sample1_3_tl[0]._string=&p->StrSmplStruct_3_vl;
p->sample2_3_ul[0]._string=&p->StrSmplStruct_3_vl;
p->textinst_3_xl[0] .TextDef=4;
p->textinst_3_xl[1] .TextDef=4;
p->textinst_3_xl[0] .Language=0;
p->textinst_3_xl[1] .Language=0;
p->textinst_3_xl[0] .Samples=p->sample1_3_yl;
p->textinst_3_xl[1] .Samples=p->sample2_3_zl;
p->StrSmplStruct_3_am .length=8;
p->StrSmplStruct_3_am .bytes=&aXN2344;
p->sample1_3_yl[0]._string=&p->StrSmplStruct_3_am;
p->sample2_3_zl[0]._string=&p->StrSmplStruct_3_am;
p->StrSmplStruct_3_bm .length=0;
p->StrSmplStruct_3_bm .bytes=&p->StrBuf_3_cm;
p->sample1_3_yl[1]._string=&p->StrSmplStruct_3_bm;
p->StrSmplStruct_3_dm .length=0;
p->StrSmplStruct_3_dm .bytes=&p->StrBuf_3_em;
p->sample2_3_zl[1]._string=&p->StrSmplStruct_3_dm;
}

void _C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0(_C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0_type *instanceStruct)
{

p=instanceStruct;

_FNC_123_b();
_FNC_123_c();
_FNC_123_d();
_FNC_123_e();
_FNC_123_f();
_FNC_123_g();
_FNC_123_h();
}
