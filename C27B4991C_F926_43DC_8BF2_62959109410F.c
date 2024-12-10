/*Danfoss PLUS+1 GUIDE Software: [ChParGU2] Version: 2023.1.4*/
/*Type: Express       */
/*Id: 28120       */
/*Sub ID: 0       */
/*Maintenance until:  1-Jul-2024       */
/*Time limit: 30-Jun-2025       */
/*       */
/*       */
#include "header.h"
#include "C27B4991C_F926_43DC_8BF2_62959109410F.h"
static _C27B4991C_F926_43DC_8BF2_62959109410F_type *p;
#include "_TextDefinitions.h"
static IOFILE *_gaptr;
static IODATA *_glvptr_3_c;
extern char *___SdtGetNextFileName(void);
static char *AXN7;
static char *AXN38;
static char *AXN53;
static char *AXN85;
static char *AXN100;
static char *AXN132;
static char *AXN156;
static char *AXN219;
static char *AXN251;
static char *AXN275;
extern SDFONTTYPE * const BahnschriftLightSemiCondensed_12__UNI;
extern SDFONTTYPE * const BahnschriftSemiLight_14__UNI;
extern SDFONTTYPE * const BahnschriftSemiLight_15__UNI;
extern U32 _OS_MicroSec(void);
extern int LoopDeadlineTimePassed(void);
static const U8 aXN69[8] = {0x44,0x61,0x74,0x61,0x20,0x4C,0x6F,0x67};
static const U8 aXN116[4] = {0x4D,0x61,0x69,0x6E};
static const U8 aXN148[7] = {0x44,0x65,0x74,0x61,0x69,0x6C,0x73};
static const U8 aXN235[2] = {0x53,0x4E};
static const U8 aXN267[7] = {0x41,0x64,0x64,0x72,0x65,0x73,0x73};

static void _FNC_123_b(void)
{
       BOOL _t_3_b;
       BOOL aXN25;
       S32 aXN35;
  S32 _ShLocTmpVar_S32_1;
       BOOL aXN40;
       S32 aXN50;
       BOOL _t_3_k;
       BOOL aXN72;
       S32 aXN82;
       BOOL aXN87;
       S32 aXN97;
       BOOL _t_3_p;
       BOOL aXN119;
       S32 aXN129;
       BOOL _t_3_u;
       BOOL _t_3_z;
       BOOL _t_3_ab;
       BOOL _t_3_bb;
       BOOL _t_3_cb;
       BOOL _t_3_db;
       BOOL _t_3_eb;
       BOOL aXN206;
       S32 aXN216;
       BOOL _t_3_fb;
       BOOL aXN238;
       S32 aXN248;
       BOOL _t_3_kb;
       BOOL _t_3_pb;
       BOOL _t_3_qb;
       BOOL _t_3_rb;
       BOOL _t_3_sb;
AXN7 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN7,VisionFileData,p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=271;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=0x00010101;}
_t_3_b=p->_t_3_bOld1;
p->_t_3_bOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN7,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=15;
_glvptr_3_c->DataPtr.TextPtr->Ypos=30;
_glvptr_3_c->DataPtr.TextPtr->Xlen=450;
_glvptr_3_c->DataPtr.TextPtr->Ylen=200;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftLightSemiCondensed_12__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_bOld1;
p->_t_3_bOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_d[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_d[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
p->textinst_3_d[__SdtSampleDataArrayWriteIndex] .Samples[0]. _string->length =(p->Input_N_Log_outString .cur_len_val<5000)?p->Input_N_Log_outString .cur_len_val:5000;
CopyValidUtf8CodeUnits(p->textinst_3_d[__SdtSampleDataArrayWriteIndex] .Samples[0]. _string->bytes,p->Input_N_Log_outString .value, &p->textinst_3_d[__SdtSampleDataArrayWriteIndex] .Samples[0]. _string->length, 0);
}
aXN25=p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN25);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN35 = 0;
      break;
    default:
      aXN35 = 960;
  }
AXN38 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN38,VisionFileData,p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN35;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=29;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=0x00000000;}
aXN40=p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN40);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN50 = 42;
      break;
    default:
      aXN50 = 960;
  }
AXN53 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN53,VisionFileData,p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN50;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=281;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=29;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_k=p->_t_3_kOld1;
p->_t_3_kOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN53,TxtFknData);
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
_glvptr_3_c->Active=&p->_t_3_kOld1;
p->_t_3_kOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_l[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_l[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN72=p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN72);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN82 = 0;
      break;
    default:
      aXN82 = 960;
  }
AXN85 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN85,VisionFileData,p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN82;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=225;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=271;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=0x00000000;}
aXN87=p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN87);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN97 = 0;
      break;
    default:
      aXN97 = 960;
  }
AXN100 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN100,VisionFileData,p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN97;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=235;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=62;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=264;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_p=p->_t_3_pOld1;
p->_t_3_pOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN100,TxtFknData);
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
_glvptr_3_c->Active=&p->_t_3_pOld1;
p->_t_3_pOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_q[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_q[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
aXN119=p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN119);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN129 = 220;
      break;
    default:
      aXN129 = 960;
  }
AXN132 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN132,VisionFileData,p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN129;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=235;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=264;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_u=p->_t_3_uOld1;
p->_t_3_uOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN132,TxtFknData);
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
_glvptr_3_c->Active=&p->_t_3_uOld1;
p->_t_3_uOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_v[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_v[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
}
AXN156 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN156,VisionFileData,p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=271;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_z=p->_t_3_zOld1;
p->_t_3_zOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN156,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=260;
_glvptr_3_c->DataPtr.LinePtr->Xend=5;
_glvptr_3_c->DataPtr.LinePtr->Ystart=270;
_glvptr_3_c->DataPtr.LinePtr->Xstart=0;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_zOld1;
p->_t_3_zOld1=1;
}}
_t_3_ab=p->_t_3_abOld1;
p->_t_3_abOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN156,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=280;
_glvptr_3_c->DataPtr.LinePtr->Xend=75;
_glvptr_3_c->DataPtr.LinePtr->Ystart=260;
_glvptr_3_c->DataPtr.LinePtr->Xstart=65;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_abOld1;
p->_t_3_abOld1=1;
}}
_t_3_bb=p->_t_3_bbOld1;
p->_t_3_bbOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN156,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=260;
_glvptr_3_c->DataPtr.LinePtr->Xend=65;
_glvptr_3_c->DataPtr.LinePtr->Ystart=260;
_glvptr_3_c->DataPtr.LinePtr->Xstart=5;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_bbOld1;
p->_t_3_bbOld1=1;
}}
_t_3_cb=p->_t_3_cbOld1;
p->_t_3_cbOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN156,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=260;
_glvptr_3_c->DataPtr.LinePtr->Xend=415;
_glvptr_3_c->DataPtr.LinePtr->Ystart=280;
_glvptr_3_c->DataPtr.LinePtr->Xstart=405;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_cbOld1;
p->_t_3_cbOld1=1;
}}
_t_3_db=p->_t_3_dbOld1;
p->_t_3_dbOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN156,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=260;
_glvptr_3_c->DataPtr.LinePtr->Xend=475;
_glvptr_3_c->DataPtr.LinePtr->Ystart=260;
_glvptr_3_c->DataPtr.LinePtr->Xstart=415;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_dbOld1;
p->_t_3_dbOld1=1;
}}
_t_3_eb=p->_t_3_ebOld1;
p->_t_3_ebOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN156,VectData);
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
aXN206=p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN206);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN216 = 115;
      break;
    default:
      aXN216 = 960;
  }
AXN219 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN219,VisionFileData,p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN216;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=245;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=354;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=271;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_fb=p->_t_3_fbOld1;
p->_t_3_fbOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN219,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=0;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
_glvptr_3_c->DataPtr.TextPtr->Ylen=25;
_glvptr_3_c->DataPtr.TextPtr->Justification=0;
_glvptr_3_c->DataPtr.TextPtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->DataPtr.TextPtr->Font =BahnschriftSemiLight_14__UNI;
_glvptr_3_c->DataPtr.TextPtr->Rotation=360;
_glvptr_3_c->DataPtr.TextPtr->OrigoX=0;
_glvptr_3_c->DataPtr.TextPtr->OrigoY =0;
_glvptr_3_c->Active=&p->_t_3_fbOld1;
p->_t_3_fbOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_gb[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_gb[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
p->textinst_3_gb[__SdtSampleDataArrayWriteIndex] .Samples[1]._unsigned=p->Input_N_Batt_SN;
}
aXN238=p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN238);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN248 = 275;
      break;
    default:
      aXN248 = 960;
  }
AXN251 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN251,VisionFileData,p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN248;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=245;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=271;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_kb=p->_t_3_kbOld1;
p->_t_3_kbOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN251,TxtFknData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.TextPtr->Xpos=0;
_glvptr_3_c->DataPtr.TextPtr->Ypos=0;
_glvptr_3_c->DataPtr.TextPtr->Xlen=235;
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
p->textinst_3_lb[__SdtSampleDataArrayWriteIndex] .Samples[1]._unsigned=p->Input_N_Batt_Addr;
}
AXN275 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN275,VisionFileData,p->C27B4991C_F926_43DC_8BF2_62959109410F_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=271;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_pb=p->_t_3_pbOld1;
p->_t_3_pbOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN275,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=30;
_glvptr_3_c->DataPtr.LinePtr->Xend=470;
_glvptr_3_c->DataPtr.LinePtr->Ystart=30;
_glvptr_3_c->DataPtr.LinePtr->Xstart=10;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_pbOld1;
p->_t_3_pbOld1=1;
}}
_t_3_qb=p->_t_3_qbOld1;
p->_t_3_qbOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN275,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=225;
_glvptr_3_c->DataPtr.LinePtr->Xend=470;
_glvptr_3_c->DataPtr.LinePtr->Ystart=225;
_glvptr_3_c->DataPtr.LinePtr->Xstart=10;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_qbOld1;
p->_t_3_qbOld1=1;
}}
_t_3_rb=p->_t_3_rbOld1;
p->_t_3_rbOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN275,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=225;
_glvptr_3_c->DataPtr.LinePtr->Xend=10;
_glvptr_3_c->DataPtr.LinePtr->Ystart=30;
_glvptr_3_c->DataPtr.LinePtr->Xstart=10;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_rbOld1;
p->_t_3_rbOld1=1;
}}
_t_3_sb=p->_t_3_sbOld1;
p->_t_3_sbOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN275,VectData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.LinePtr->Yend=225;
_glvptr_3_c->DataPtr.LinePtr->Xend=470;
_glvptr_3_c->DataPtr.LinePtr->Ystart=30;
_glvptr_3_c->DataPtr.LinePtr->Xstart=470;
_glvptr_3_c->DataPtr.LinePtr->Width=2;
_glvptr_3_c->DataPtr.LinePtr->ColorCode=0xFFFFFF00;
_glvptr_3_c->Active =&p->_t_3_sbOld1;
p->_t_3_sbOld1=1;
}}
}
void _INITC27B4991C_F926_43DC_8BF2_62959109410F(_C27B4991C_F926_43DC_8BF2_62959109410F_type *instanceStruct)
{
p=instanceStruct;
p->textinst_3_d[0] .TextDef=0;
p->textinst_3_d[1] .TextDef=0;
p->textinst_3_d[0] .Language=0;
p->textinst_3_d[1] .Language=0;
p->textinst_3_d[0] .Samples=p->sample1_3_e;
p->textinst_3_d[1] .Samples=p->sample2_3_f;
p->StrSmplStruct_3_g .length=0;
p->StrSmplStruct_3_g .bytes=&p->StrBuf_3_h;
p->sample1_3_e[0]._string=&p->StrSmplStruct_3_g;
p->StrSmplStruct_3_i .length=0;
p->StrSmplStruct_3_i .bytes=&p->StrBuf_3_j;
p->sample2_3_f[0]._string=&p->StrSmplStruct_3_i;
p->textinst_3_l[0] .TextDef=0;
p->textinst_3_l[1] .TextDef=0;
p->textinst_3_l[0] .Language=0;
p->textinst_3_l[1] .Language=0;
p->textinst_3_l[0] .Samples=p->sample1_3_m;
p->textinst_3_l[1] .Samples=p->sample2_3_n;
p->StrSmplStruct_3_o .length=8;
p->StrSmplStruct_3_o .bytes=&aXN69;
p->sample1_3_m[0]._string=&p->StrSmplStruct_3_o;
p->sample2_3_n[0]._string=&p->StrSmplStruct_3_o;
p->textinst_3_q[0] .TextDef=0;
p->textinst_3_q[1] .TextDef=0;
p->textinst_3_q[0] .Language=0;
p->textinst_3_q[1] .Language=0;
p->textinst_3_q[0] .Samples=p->sample1_3_r;
p->textinst_3_q[1] .Samples=p->sample2_3_s;
p->StrSmplStruct_3_t .length=4;
p->StrSmplStruct_3_t .bytes=&aXN116;
p->sample1_3_r[0]._string=&p->StrSmplStruct_3_t;
p->sample2_3_s[0]._string=&p->StrSmplStruct_3_t;
p->textinst_3_v[0] .TextDef=0;
p->textinst_3_v[1] .TextDef=0;
p->textinst_3_v[0] .Language=0;
p->textinst_3_v[1] .Language=0;
p->textinst_3_v[0] .Samples=p->sample1_3_w;
p->textinst_3_v[1] .Samples=p->sample2_3_x;
p->StrSmplStruct_3_y .length=7;
p->StrSmplStruct_3_y .bytes=&aXN148;
p->sample1_3_w[0]._string=&p->StrSmplStruct_3_y;
p->sample2_3_x[0]._string=&p->StrSmplStruct_3_y;
p->textinst_3_gb[0] .TextDef=1;
p->textinst_3_gb[1] .TextDef=1;
p->textinst_3_gb[0] .Language=0;
p->textinst_3_gb[1] .Language=0;
p->textinst_3_gb[0] .Samples=p->sample1_3_hb;
p->textinst_3_gb[1] .Samples=p->sample2_3_ib;
p->StrSmplStruct_3_jb .length=2;
p->StrSmplStruct_3_jb .bytes=&aXN235;
p->sample1_3_hb[0]._string=&p->StrSmplStruct_3_jb;
p->sample2_3_ib[0]._string=&p->StrSmplStruct_3_jb;
p->textinst_3_lb[0] .TextDef=1;
p->textinst_3_lb[1] .TextDef=1;
p->textinst_3_lb[0] .Language=0;
p->textinst_3_lb[1] .Language=0;
p->textinst_3_lb[0] .Samples=p->sample1_3_mb;
p->textinst_3_lb[1] .Samples=p->sample2_3_nb;
p->StrSmplStruct_3_ob .length=7;
p->StrSmplStruct_3_ob .bytes=&aXN267;
p->sample1_3_mb[0]._string=&p->StrSmplStruct_3_ob;
p->sample2_3_nb[0]._string=&p->StrSmplStruct_3_ob;
}

void _C27B4991C_F926_43DC_8BF2_62959109410F(_C27B4991C_F926_43DC_8BF2_62959109410F_type *instanceStruct)
{

p=instanceStruct;

_FNC_123_b();
}
