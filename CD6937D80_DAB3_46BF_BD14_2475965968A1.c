/*Danfoss PLUS+1 GUIDE Software: [ChParGU2] Version: 2023.1.4*/
/*Type: Express       */
/*Id: 28120       */
/*Sub ID: 0       */
/*Maintenance until:  1-Jul-2024       */
/*Time limit: 30-Jun-2025       */
/*       */
/*       */
#include "header.h"
#include "CD6937D80_DAB3_46BF_BD14_2475965968A1.h"
static _CD6937D80_DAB3_46BF_BD14_2475965968A1_type *p;
#include "_TextDefinitions.h"
static IOFILE *_gaptr;
extern PXO _IMAGEID1;
static IODATA *_glvptr_3_c;
extern char *___SdtGetNextFileName(void);
static char *AXN7;
static char *AXN22;
static char *AXN48;
extern SDFONTTYPE * const BahnschriftSemiLight_14__UNI;
extern U32 _OS_MicroSec(void);
extern int LoopDeadlineTimePassed(void);
static const U8 aXN64[7] = {0x56,0x65,0x72,0x73,0x69,0x6F,0x6E};

static void _FNC_123_b(void)
{
       BOOL aXN9;
       S32 aXN19;
  S32 _ShLocTmpVar_S32_1;
       BOOL _t_3_b;
       BOOL aXN35;
       S32 aXN45;
       BOOL _t_3_d;
AXN7 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN7,VisionFileData,p->CD6937D80_DAB3_46BF_BD14_2475965968A1_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=0;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=479;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=271;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=0x00010101;}
aXN9=p->CD6937D80_DAB3_46BF_BD14_2475965968A1_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN9);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN19 = 188;
      break;
    default:
      aXN19 = 960;
  }
AXN22 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN22,VisionFileData,p->CD6937D80_DAB3_46BF_BD14_2475965968A1_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN19;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=50;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=291;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=209;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_b=p->_t_3_bOld1;
p->_t_3_bOld1=0;
if (1) { 
_glvptr_3_c= _FIND_IODATA(0,AXN22,BmpData);
if (_glvptr_3_c != NULL ) {
_glvptr_3_c->DataPtr.GraphPtr->Rotation=0;
_glvptr_3_c->DataPtr.GraphPtr->Xpos=1;
_glvptr_3_c->DataPtr.GraphPtr->Ypos=1;
_glvptr_3_c->DataPtr.GraphPtr->ColorCode=0x00010101;
_glvptr_3_c->DataPtr.GraphPtr->ObjectPtr=_IMAGEID1;
_glvptr_3_c->Active =&p->_t_3_bOld1;
p->_t_3_bOld1=1;
}}
aXN35=p->CD6937D80_DAB3_46BF_BD14_2475965968A1_Enable && 1;
  _ShLocTmpVar_S32_1 = !(aXN35);
  switch (_ShLocTmpVar_S32_1)
  {
    case 0:
      aXN45 = 10;
      break;
    default:
      aXN45 = 960;
  }
AXN48 = ___SdtGetNextFileName();
_gaptr=_IF_ASSIGN(Display.Port,AXN48,VisionFileData,p->CD6937D80_DAB3_46BF_BD14_2475965968A1_Enable);
if(_gaptr!=NULL){
_gaptr->IOFileDataPtr.VisionFilePtr->Xmin=aXN45;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymin=240;
_gaptr->IOFileDataPtr.VisionFilePtr->Xmax=249;
_gaptr->IOFileDataPtr.VisionFilePtr->Ymax=269;
_gaptr->IOFileDataPtr.VisionFilePtr->Background=Color.Transparent;}
_t_3_d=p->_t_3_dOld1;
p->_t_3_dOld1=0;
_glvptr_3_c= _FIND_IODATA(0,AXN48,TxtFknData);
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
_glvptr_3_c->Active=&p->_t_3_dOld1;
p->_t_3_dOld1=1;
_glvptr_3_c->DataPtr.TextPtr->Tp.TextInstance =&(p->textinst_3_e[__SdtSampleDataArrayWriteIndex]);
p->textinst_3_e[__SdtSampleDataArrayWriteIndex] .Language=_AktSprak;
p->textinst_3_e[__SdtSampleDataArrayWriteIndex] .Samples[1]._unsigned=p->Input_N_Ver_Major;
p->textinst_3_e[__SdtSampleDataArrayWriteIndex] .Samples[2]._unsigned=p->Input_N_Ver_Minor;
}
}
void _INITCD6937D80_DAB3_46BF_BD14_2475965968A1(_CD6937D80_DAB3_46BF_BD14_2475965968A1_type *instanceStruct)
{
p=instanceStruct;
p->textinst_3_e[0] .TextDef=2;
p->textinst_3_e[1] .TextDef=2;
p->textinst_3_e[0] .Language=0;
p->textinst_3_e[1] .Language=0;
p->textinst_3_e[0] .Samples=p->sample1_3_f;
p->textinst_3_e[1] .Samples=p->sample2_3_g;
p->StrSmplStruct_3_h .length=7;
p->StrSmplStruct_3_h .bytes=&aXN64;
p->sample1_3_f[0]._string=&p->StrSmplStruct_3_h;
p->sample2_3_g[0]._string=&p->StrSmplStruct_3_h;
}

void _CD6937D80_DAB3_46BF_BD14_2475965968A1(_CD6937D80_DAB3_46BF_BD14_2475965968A1_type *instanceStruct)
{

p=instanceStruct;

_FNC_123_b();
}
