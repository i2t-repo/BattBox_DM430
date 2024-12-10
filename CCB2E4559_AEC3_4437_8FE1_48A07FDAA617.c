/*Danfoss PLUS+1 GUIDE Software: [ChParGU2] Version: 2023.1.4*/
/*Type: Express       */
/*Id: 28120       */
/*Sub ID: 0       */
/*Maintenance until:  1-Jul-2024       */
/*Time limit: 30-Jun-2025       */
/*       */
/*       */
#include "header.h"
#include "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.h"
static _CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_type *p;
#include "_TextDefinitions.h"
static IOFILE *_gaptr;
static IODATA *_glvptr_3_c;
extern PXO _IMAGEID2;
extern char *___SdtGetNextFileName(void);
static char *AXN7;
static char *AXN22;
static char *AXN53;
static char *AXN77;
static char *AXN92;
static char *AXN118;
static char *AXN138;
static char *AXN176;
static char *AXN200;
static char *AXN231;
static char *AXN251;
static char *AXN289;
static char *AXN327;
extern SDFONTTYPE * const BahnschriftSemiLight_13__UNI;
extern SDFONTTYPE * const BahnschriftSemiLight_14__UNI;
extern SDFONTTYPE * const Bahnschrift_24__UNI;
extern U32 _OS_MicroSec(void);
extern int LoopDeadlineTimePassed(void);
static const U8 aXN38[22] = {0x50,0x72,0x65,0x73,0x73,0x20,0x48,0x6F,0x6D,0x65,0x20,0x66,0x6F,0x72,0x20,0x44,0x65,0x74,0x61,0x69,0x6C,0x73};
static const U8 aXN155[7] = {0x42,0x61,0x74,0x74,0x65,0x72,0x79};
static const U8 aXN193[6] = {0x48,0x65,0x61,0x6C,0x74,0x68};
static const U8 aXN268[8] = {0x53,0x74,0x61,0x74,0x65,0x20,0x6F,0x66};
static const U8 aXN306[6] = {0x43,0x68,0x61,0x72,0x67,0x65};

static void _FNC_123_b(void)
{
       BOOL aXN9;
       S32 aXN19;
  S32 _ShLocTmpVar_S32_1;
       BOOL _t_3_b;
       BOOL aXN41;
       S32 aXN51;
       BOOL aXN55;
       S32 aXN60;
       S32 aXN62;
       S32 aXN64;
       S32 aXN66;
       S32 aXN68;
       S32 aXN70;
       S32 aXN74;
       BOOL aXN79;
       S32 aXN89;
       BOOL _t_3_h;
       BOOL aXN105;
       S32 aXN115;
       BOOL aXN120;
       S32 aXN126;
       S32 aXN128;
       S32 aXN130;
       S32 aXN135;
       S32 aXN146;
       BOOL _t_3_i;
       BOOL aXN158;
       S32 aXN164;
       S32 aXN166;
       S32 aXN168;
       S32 aXN173;
       S32 aXN184;
       BOOL _t_3_n;
       BOOL _t_3_s;
       BOOL aXN218;
       S32 aXN228;
       BOOL aXN233;
       S32 aXN239;
       S32 aXN241;
       S32 aXN243;
       S32 aXN248;
       S32 aXN259;
       BOOL _t_3_w;
       BOOL aXN271;
       S32 aXN277;
       S32 aXN279;
       S32 aXN281;
       S32 aXN286;
       S32 aXN297;
       BOOL _t_3_bb;
       BOOL aXN309;
       S32 aXN315;
       S32 aXN317;
       S32 aXN319;
       S32 aXN324;
       S32 aXN335;
       BOOL _t_3_gb;
AXN7 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN7,VisionFileData,p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=271;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=0x00010101;}
aXN9=p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN9);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN19 = 245;
      break;
    default:
      aXN19 = 960;
  }
AXN22 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN22,VisionFileData,p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN19;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=240;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=469;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=260;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_b=p->_t_3_bOld1;
p->_t_3_bOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN22,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=0;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=220;
_glvptr_3_c->DataPtr.TextPtr->Ylen=17;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_13__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_bOld1;
p->_t_3_bOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_d[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_d[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN41=p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN41);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN51 = 130;
      break;
    default:
      aXN51 = 960;
  }
AXN53 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN53,VisionFileData,p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN51;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=80;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=343;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=184;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=p->Input_B_Btn_Util_N_Batt_Level_Color;}
aXN55=p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable && 1;
aXN60 = (S32)(0)+(p->Input_B_Btn_Util_N_Batt_Level_Num);
  aXN62 = (0) - (aXN60);
if((aXN62) < (0))
  aXN64 = 0;
else
  aXN64 = aXN62;
if((0) < (aXN60))
  aXN66 = aXN60;
else
  aXN66 = 0;
aXN68 = (aXN60)+(104);
if((271) < (aXN68)) {
  aXN70 = 271;
} else {
  aXN70 = aXN68;
}
  _ShLocTmpVar_S32_1 = !(aXN55);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN74 = 130;
      break;
    default:
      aXN74 = 960;
  }
AXN77 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN77,VisionFileData,p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN74;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=aXN66;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=344;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=aXN70;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=0x00000000;}
aXN79=p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN79);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN89 = 120;
      break;
    default:
      aXN89 = 960;
  }
AXN92 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN92,VisionFileData,p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN89;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=40;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=354;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=196;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_h=p->_t_3_hOld1;
p->_t_3_hOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN92,BmpData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.GraphPtr->Rotation=0;
_glvptr_3_c->DataPtr.GraphPtr->Xpos=0;
_glvptr_3_c->DataPtr.GraphPtr->Ypos=0;
_glvptr_3_c->DataPtr.GraphPtr->ColorCode=0x00010101;
_glvptr_3_c->DataPtr.GraphPtr->ObjectPtr=_IMAGEID2;
_glvptr_3_c->Active =&p->_t_3_hOld1;
p->_t_3_hOld1=1;
}}
aXN105=p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN105);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN115 = 345;
      break;
    default:
      aXN115 = 960;
  }
AXN118 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN118,VisionFileData,p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN115;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=115;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=454;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=194;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
aXN120=aXN105 && 1;
  aXN126 = (aXN115) - (210);
if((aXN126) < (0))
  aXN128 = 0;
else
  aXN128 = aXN126;
if((aXN115) < (210))
  aXN130 = 210;
else
  aXN130 = aXN115;
  _ShLocTmpVar_S32_1 = !(aXN120);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN135 = aXN130;
      break;
    default:
      aXN135 = 960;
  }
AXN138 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN138,VisionFileData,p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN135;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=150;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=449;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=179;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN146 = (0) - (aXN128);
_t_3_i=p->_t_3_iOld1;
p->_t_3_iOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN138,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN146;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_iOld1;
p->_t_3_iOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_j[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_j[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN158=aXN105 && 1;
  aXN164 = (aXN115) - (210);
if((aXN164) < (0))
  aXN166 = 0;
else
  aXN166 = aXN164;
if((aXN115) < (210))
  aXN168 = 210;
else
  aXN168 = aXN115;
  _ShLocTmpVar_S32_1 = !(aXN158);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN173 = aXN168;
      break;
    default:
      aXN173 = 960;
  }
AXN176 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN176,VisionFileData,p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN173;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=170;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=449;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=194;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN184 = (0) - (aXN166);
_t_3_n=p->_t_3_nOld1;
p->_t_3_nOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN176,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN184;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_nOld1;
p->_t_3_nOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_o[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_o[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
AXN200 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN200,VisionFileData,p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN115;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=115;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=454;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=194;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_s=p->_t_3_sOld1;
p->_t_3_sOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN200,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=5;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=97;
_glvptr_3_c->DataPtr.TextPtr->Ylen=40;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =Bahnschrift_24__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_sOld1;
p->_t_3_sOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_t[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_t[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
p->textinst_3_t[__SdtSampleDataArrayWriteIndex] .Samples[0]._unsigned=p->Input_B_CAN_Input_N_Hlth_W_U8;
p->textinst_3_t[__SdtSampleDataArrayWriteIndex] .Samples[1]._unsigned=p->Input_B_CAN_Input_N_Hlth_D_U8;
}
aXN218=p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN218);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN228 = 15;
      break;
    default:
      aXN228 = 960;
  }
AXN231 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN231,VisionFileData,p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN228;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=115;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=94;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=194;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
aXN233=aXN218 && 1;
  aXN239 = (aXN228) - (-145);
if((aXN239) < (0))
  aXN241 = 0;
else
  aXN241 = aXN239;
if((aXN228) < (-145))
  aXN243 = -145;
else
  aXN243 = aXN228;
  _ShLocTmpVar_S32_1 = !(aXN233);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN248 = aXN243;
      break;
    default:
      aXN248 = 960;
  }
AXN251 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN251,VisionFileData,p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN248;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=150;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=94;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=179;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN259 = (0) - (aXN241);
_t_3_w=p->_t_3_wOld1;
p->_t_3_wOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN251,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN259;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_wOld1;
p->_t_3_wOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_x[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_x[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN271=aXN218 && 1;
  aXN277 = (aXN228) - (-145);
if((aXN277) < (0))
  aXN279 = 0;
else
  aXN279 = aXN277;
if((aXN228) < (-145))
  aXN281 = -145;
else
  aXN281 = aXN228;
  _ShLocTmpVar_S32_1 = !(aXN271);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN286 = aXN281;
      break;
    default:
      aXN286 = 960;
  }
AXN289 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN289,VisionFileData,p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN286;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=170;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=94;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=194;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN297 = (0) - (aXN279);
_t_3_bb=p->_t_3_bbOld1;
p->_t_3_bbOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN289,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN297;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_bbOld1;
p->_t_3_bbOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_cb[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_cb[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN309=aXN218 && 1;
  aXN315 = (aXN228) - (15);
if((aXN315) < (0))
  aXN317 = 0;
else
  aXN317 = aXN315;
if((aXN228) < (15))
  aXN319 = 15;
else
  aXN319 = aXN228;
  _ShLocTmpVar_S32_1 = !(aXN309);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN324 = aXN319;
      break;
    default:
      aXN324 = 960;
  }
AXN327 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN327,VisionFileData,p->CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN324;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=115;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=94;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=154;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
  aXN335 = (0) - (aXN317);
_t_3_gb=p->_t_3_gbOld1;
p->_t_3_gbOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN327,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=aXN335;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=75;
_glvptr_3_c->DataPtr.TextPtr->Ylen=40;
_glvptr_3_c->DataPtr.TextPtr->Justification=2;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =Bahnschrift_24__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_gbOld1;
p->_t_3_gbOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_hb[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_hb[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
p->textinst_3_hb[__SdtSampleDataArrayWriteIndex] .Samples[0]._signed=p->Input_B_CAN_Input_N_SoC_Ave_S16;
}
}
void _INITCCB2E4559_AEC3_4437_8FE1_48A07FDAA617(_CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_type *instanceStruct)
{
p=instanceStruct;
p->textinst_3_d[0] .TextDef=0;
p->textinst_3_d[1] .TextDef=0;
p->textinst_3_d[0] .Language=0;
p->textinst_3_d[1] .Language=0;
p->textinst_3_d[0] .Samples=p->sample1_3_e;
p->textinst_3_d[1] .Samples=p->sample2_3_f;
p->StrSmplStruct_3_g .length=22;
p->StrSmplStruct_3_g .bytes=&aXN38;
p->sample1_3_e[0]._string=&p->StrSmplStruct_3_g;
p->sample2_3_f[0]._string=&p->StrSmplStruct_3_g;
p->textinst_3_j[0] .TextDef=0;
p->textinst_3_j[1] .TextDef=0;
p->textinst_3_j[0] .Language=0;
p->textinst_3_j[1] .Language=0;
p->textinst_3_j[0] .Samples=p->sample1_3_k;
p->textinst_3_j[1] .Samples=p->sample2_3_l;
p->StrSmplStruct_3_m .length=7;
p->StrSmplStruct_3_m .bytes=&aXN155;
p->sample1_3_k[0]._string=&p->StrSmplStruct_3_m;
p->sample2_3_l[0]._string=&p->StrSmplStruct_3_m;
p->textinst_3_o[0] .TextDef=0;
p->textinst_3_o[1] .TextDef=0;
p->textinst_3_o[0] .Language=0;
p->textinst_3_o[1] .Language=0;
p->textinst_3_o[0] .Samples=p->sample1_3_p;
p->textinst_3_o[1] .Samples=p->sample2_3_q;
p->StrSmplStruct_3_r .length=6;
p->StrSmplStruct_3_r .bytes=&aXN193;
p->sample1_3_p[0]._string=&p->StrSmplStruct_3_r;
p->sample2_3_q[0]._string=&p->StrSmplStruct_3_r;
p->textinst_3_t[0] .TextDef=3;
p->textinst_3_t[1] .TextDef=3;
p->textinst_3_t[0] .Language=0;
p->textinst_3_t[1] .Language=0;
p->textinst_3_t[0] .Samples=p->sample1_3_u;
p->textinst_3_t[1] .Samples=p->sample2_3_v;
p->textinst_3_x[0] .TextDef=0;
p->textinst_3_x[1] .TextDef=0;
p->textinst_3_x[0] .Language=0;
p->textinst_3_x[1] .Language=0;
p->textinst_3_x[0] .Samples=p->sample1_3_y;
p->textinst_3_x[1] .Samples=p->sample2_3_z;
p->StrSmplStruct_3_ab .length=8;
p->StrSmplStruct_3_ab .bytes=&aXN268;
p->sample1_3_y[0]._string=&p->StrSmplStruct_3_ab;
p->sample2_3_z[0]._string=&p->StrSmplStruct_3_ab;
p->textinst_3_cb[0] .TextDef=0;
p->textinst_3_cb[1] .TextDef=0;
p->textinst_3_cb[0] .Language=0;
p->textinst_3_cb[1] .Language=0;
p->textinst_3_cb[0] .Samples=p->sample1_3_db;
p->textinst_3_cb[1] .Samples=p->sample2_3_eb;
p->StrSmplStruct_3_fb .length=6;
p->StrSmplStruct_3_fb .bytes=&aXN306;
p->sample1_3_db[0]._string=&p->StrSmplStruct_3_fb;
p->sample2_3_eb[0]._string=&p->StrSmplStruct_3_fb;
p->textinst_3_hb[0] .TextDef=5;
p->textinst_3_hb[1] .TextDef=5;
p->textinst_3_hb[0] .Language=0;
p->textinst_3_hb[1] .Language=0;
p->textinst_3_hb[0] .Samples=p->sample1_3_ib;
p->textinst_3_hb[1] .Samples=p->sample2_3_jb;
}

void _CCB2E4559_AEC3_4437_8FE1_48A07FDAA617(_CCB2E4559_AEC3_4437_8FE1_48A07FDAA617_type *instanceStruct)
{

p=instanceStruct;

_FNC_123_b();
}
