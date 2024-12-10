//Danfoss PLUS+1 GUIDE Software: [TDSToC] Version: 2023.1.4
#include "_TEXTDEFINITIONS.h"
#define __FMT_BUFLEN 16
struct __SdtFormatData{U8 type;U8 base;U8 padding;U8 prefix;U8 padCount;};
struct __SdtFormatSpecifier{U32 textPos;U8 inputIndex;U16 formatHandle;};
struct __SdtTranslation{U8 *text;U8 formatCount;struct __SdtFormatSpecifier formats[];};
struct __SdtTextDef{BOOL hasFormats;const struct __SdtTranslation * const translation[_MaxSprak];};
struct __SDTProcessTextData{U8 __fmtBufIx, __currentFormat, __formatInProgress, __fmtPrePad, __fmtPostPad, __fmtBuffer[__FMT_BUFLEN];
U16 __strBufIx;
U32 __logicalIndex, __textCodeIndex;const union __SDTSampleData * __CurrentData;const struct __SdtTextDef * __CurrentText;LANG __language;U8 contbytesleft;};

static const U8 _TLABELID12Inst_0[1]={0x00};
static const struct __SdtTranslation _TLABELID12Inst_0_trans={
.text=_TLABELID12Inst_0,
.formatCount=1,
.formats={
{.textPos=0,.inputIndex=0,.formatHandle=0},
}};
static const struct __SdtTextDef _TLABELID12Inst={
  .hasFormats=1,
  .translation={
&_TLABELID12Inst_0_trans
},
};


static const U8 _TLABELID13Inst_0[3]={0x3A, 0x20, 0x00};
static const struct __SdtTranslation _TLABELID13Inst_0_trans={
.text=_TLABELID13Inst_0,
.formatCount=2,
.formats={
{.textPos=0,.inputIndex=0,.formatHandle=0},
{.textPos=3,.inputIndex=1,.formatHandle=1},
}};
static const struct __SdtTextDef _TLABELID13Inst={
  .hasFormats=1,
  .translation={
&_TLABELID13Inst_0_trans
},
};


static const U8 _TLABELID14Inst_0[4]={0x3A, 0x20, 0x2E, 0x00};
static const struct __SdtTranslation _TLABELID14Inst_0_trans={
.text=_TLABELID14Inst_0,
.formatCount=3,
.formats={
{.textPos=0,.inputIndex=0,.formatHandle=0},
{.textPos=3,.inputIndex=1,.formatHandle=2},
{.textPos=5,.inputIndex=2,.formatHandle=3},
}};
static const struct __SdtTextDef _TLABELID14Inst={
  .hasFormats=1,
  .translation={
&_TLABELID14Inst_0_trans
},
};


static const U8 _TLABELID15Inst_0[2]={0x2E, 0x00};
static const struct __SdtTranslation _TLABELID15Inst_0_trans={
.text=_TLABELID15Inst_0,
.formatCount=2,
.formats={
{.textPos=0,.inputIndex=0,.formatHandle=2},
{.textPos=2,.inputIndex=1,.formatHandle=3},
}};
static const struct __SdtTextDef _TLABELID15Inst={
  .hasFormats=1,
  .translation={
&_TLABELID15Inst_0_trans
},
};


static const U8 _TLABELID16Inst_0[3]={0x3A, 0x20, 0x00};
static const struct __SdtTranslation _TLABELID16Inst_0_trans={
.text=_TLABELID16Inst_0,
.formatCount=2,
.formats={
{.textPos=0,.inputIndex=0,.formatHandle=0},
{.textPos=3,.inputIndex=1,.formatHandle=0},
}};
static const struct __SdtTextDef _TLABELID16Inst={
  .hasFormats=1,
  .translation={
&_TLABELID16Inst_0_trans
},
};


static const U8 _TLABELID17Inst_0[1]={0x00};
static const struct __SdtTranslation _TLABELID17Inst_0_trans={
.text=_TLABELID17Inst_0,
.formatCount=1,
.formats={
{.textPos=0,.inputIndex=0,.formatHandle=4},
}};
static const struct __SdtTextDef _TLABELID17Inst={
  .hasFormats=1,
  .translation={
&_TLABELID17Inst_0_trans
},
};


static const U8 _TLABELID18Inst_0[2]={0x2E, 0x00};
static const struct __SdtTranslation _TLABELID18Inst_0_trans={
.text=_TLABELID18Inst_0,
.formatCount=2,
.formats={
{.textPos=0,.inputIndex=0,.formatHandle=4},
{.textPos=2,.inputIndex=1,.formatHandle=3},
}};
static const struct __SdtTextDef _TLABELID18Inst={
  .hasFormats=1,
  .translation={
&_TLABELID18Inst_0_trans
},
};


static const U8 _TLABELID19Inst_0[3]={0xC2, 0xB0, 0x00};
static const struct __SdtTranslation _TLABELID19Inst_0_trans={
.text=_TLABELID19Inst_0,
.formatCount=1,
.formats={
{.textPos=0,.inputIndex=0,.formatHandle=4},
}};
static const struct __SdtTextDef _TLABELID19Inst={
  .hasFormats=1,
  .translation={
&_TLABELID19Inst_0_trans
},
};

#define __SDT_Format_None                0
#define __SDT_Format_Unsigned            0
#define __SDT_Format_Signed              1
#define __SDT_Format_String              3
#define __SDT_Format_Decimal             1
#define __SDT_Format_Zero                3
static const struct __SdtFormatData __allFormats[5]  = {
{.type=3,.base=1,.padding=0,.prefix=0,.padCount=2},
{.type=0,.base=1,.padding=0,.prefix=0,.padCount=3},
{.type=0,.base=1,.padding=0,.prefix=0,.padCount=2},
{.type=0,.base=1,.padding=3,.prefix=0,.padCount=2},
{.type=1,.base=1,.padding=0,.prefix=0,.padCount=2}
};
static const struct __SdtTextDef * const _allMyTextDefs[8]={
&_TLABELID12Inst, &_TLABELID13Inst, &_TLABELID14Inst, &_TLABELID15Inst, &_TLABELID16Inst, &_TLABELID17Inst, &_TLABELID18Inst, &_TLABELID19Inst
};
U8 __SdtSampleDataArrayWriteIndex;
static void __setupFormat(const struct __SdtFormatData *format,union __SDTSampleData data, struct __SDTProcessTextData *pt){
U32 value;U8 width=0;
BOOL isNegative=0;
S16 padAmount=format->padCount;
pt->__fmtBufIx=0;
if((__SDT_Format_Unsigned == format->type) || (__SDT_Format_Signed == format->type)){
if((__SDT_Format_Signed == format->type) && (data._signed < 0))
{isNegative = 1;value = -data._unsigned;}else{value = data._unsigned;}
do{pt->__fmtBuffer[pt->__fmtBufIx++] = '0' + value % 10;value /= 10;width++;}while(value);
if(isNegative){width++;}
if((__SDT_Format_Zero == format->padding) && padAmount){
padAmount -= width;while(padAmount-- > 0){pt->__fmtBuffer[pt->__fmtBufIx++] = '0';}}
if(isNegative){pt->__fmtBuffer[pt->__fmtBufIx++] = '-';}
}
else if(__SDT_Format_String == format->type){pt->__fmtBufIx = 1;pt->__strBufIx = 0;}
}
static U32 __SDTGetNextCodePointWithoutFormat(void);
static U8 __SDTGetNextTextByteWithoutFormat(void);
static struct __SDTProcessTextData __displaydata,__applogdata;
static U32 __SDTGetNextCodePointWithFormat(void);
static U8 __SDTGetNextTextByteWithFormat(void);
U32 (*__SDTGetNextCodePoint)(void);
void __SDTSetText(void *instance) {
GUIDEHANDLETYPE handle = ((struct __SdtTextInstance *)instance)->TextDef;
if(handle < 8){__displaydata.__CurrentText = _allMyTextDefs[handle];}else{__displaydata.__CurrentText = 0;return;}
__displaydata.__textCodeIndex = 0;
__displaydata.__language = ((struct __SdtTextInstance *)instance)->Language;
if(__displaydata.__CurrentText->hasFormats){__displaydata.__logicalIndex = 0;__displaydata.__currentFormat = 0;__displaydata.__formatInProgress = 0;
__displaydata.__CurrentData = ((struct __SdtTextInstance *)instance)->Samples;
__SDTGetNextCodePoint = __SDTGetNextCodePointWithFormat;}
else{__SDTGetNextCodePoint = __SDTGetNextCodePointWithoutFormat;}}
U8 (*__SDTGetApplogTextIterator(void *instance))(void) {
GUIDEHANDLETYPE handle = ((struct __SdtTextInstance *)instance)->TextDef;
if(handle < 8){__applogdata.__CurrentText = _allMyTextDefs[handle];}else{__applogdata.__CurrentText = 0;return 0;}
__applogdata.__textCodeIndex = 0;
__applogdata.__language = ((struct __SdtTextInstance *)instance)->Language;
if(__applogdata.__CurrentText->hasFormats){__applogdata.__logicalIndex = 0;__applogdata.__currentFormat = 0;__applogdata.__formatInProgress = 0;
__applogdata.contbytesleft = 0;
__applogdata.__CurrentData = ((struct __SdtTextInstance *)instance)->Samples;
return __SDTGetNextTextByteWithFormat;}
else{ return __SDTGetNextTextByteWithoutFormat;}}
static U32 __SDTGetNextCodePointWithFormat(void) {
U32 retval=0,byte;S32 byteCount,i;BOOL logicalIndexHasData;
if(0 == __displaydata.__CurrentText){return 0;}
logicalIndexHasData = (__displaydata.__CurrentText->translation[__displaydata.__language]->formatCount > __displaydata.__currentFormat) &&
(__displaydata.__logicalIndex == __displaydata.__CurrentText->translation[__displaydata.__language]->formats[__displaydata.__currentFormat].textPos);
if(logicalIndexHasData && (__SDT_Format_String ==__allFormats[__displaydata.__CurrentText->translation
[__displaydata.__language]->formats[__displaydata.__currentFormat].formatHandle].type)) {
if(0 == __displaydata.__CurrentData[__displaydata.__CurrentText->translation[__displaydata.__language]->formats
[__displaydata.__currentFormat].inputIndex]._string->length)
{logicalIndexHasData = 0;__displaydata.__currentFormat++;__displaydata.__logicalIndex++;}}
if(!__displaydata.__CurrentText->translation[__displaydata.__language]->text[__displaydata.__textCodeIndex] && !logicalIndexHasData){ return 0;}
else{
if(logicalIndexHasData){if(!__displaydata.__formatInProgress){
__setupFormat(&__allFormats[__displaydata.__CurrentText->translation[__displaydata.__language]->formats[__displaydata.__currentFormat].formatHandle], __displaydata.__CurrentData[__displaydata.__CurrentText->translation[__displaydata.__language]->formats[__displaydata.__currentFormat].inputIndex], &__displaydata);
__displaydata.__formatInProgress = 1;}
if(__displaydata.__fmtBufIx > 0){
if(__SDT_Format_String==__allFormats[__displaydata.__CurrentText->translation[__displaydata.__language]->formats[__displaydata.__currentFormat].formatHandle].type){
			retval = __displaydata.__CurrentData[__displaydata.__CurrentText->translation[__displaydata.__language]->formats
          [__displaydata.__currentFormat].inputIndex]._string->bytes[__displaydata.__strBufIx++];
			if(0x80 & retval)
			{
				byteCount = 1;
				while((retval << byteCount) & 0x80)
				{
				byteCount++;
				}
				retval = retval & (0x000000FF >> (1 + byteCount));
				retval <<= 6 * (byteCount - 1);
				for(i = byteCount - 1; i > 0; i--)
				{
				byte = __displaydata.__CurrentData[__displaydata.__CurrentText->translation[__displaydata.__language]->formats
					[__displaydata.__currentFormat].inputIndex]._string->bytes[__displaydata.__strBufIx++];
				byte &= 0x3F;
				retval |= byte << (6 * (i - 1));
				}
			}
			if(__displaydata.__CurrentData[__displaydata.__CurrentText->translation[__displaydata.__language]->formats
					[__displaydata.__currentFormat].inputIndex]._string->length == __displaydata.__strBufIx) {__displaydata.__fmtBufIx=0;}
}else{
retval = __displaydata.__fmtBuffer[--__displaydata.__fmtBufIx];}}
if(!__displaydata.__fmtBufIx)
{__displaydata.__formatInProgress = 0;__displaydata.__currentFormat++;__displaydata.__logicalIndex++;}}
else{__displaydata.__logicalIndex++;retval = __displaydata.__CurrentText->translation[__displaydata.__language]->text[__displaydata.__textCodeIndex++];
if(0x80 & retval){byteCount = 1;while((retval << byteCount) & 0x80){byteCount++;}
retval = retval & (0x000000FF >> (1 + byteCount));retval <<= 6 * (byteCount - 1);
for(i = byteCount - 1;i>0;i--){byte = __displaydata.__CurrentText->translation[__displaydata.__language]->text[__displaydata.__textCodeIndex++];
byte &= 0x3F;retval |= byte << (6 * (i - 1));}}}return retval;}}
static U8 __SDTGetNextTextByteWithFormat(void) {
U8 retval=0,byte;S32 byteCount,i;BOOL logicalIndexHasData;
if(0 == __applogdata.__CurrentText){return 0;}
logicalIndexHasData = (__applogdata.__CurrentText->translation[__applogdata.__language]->formatCount > __applogdata.__currentFormat) &&
(__applogdata.__logicalIndex == __applogdata.__CurrentText->translation[__applogdata.__language]->formats[__applogdata.__currentFormat].textPos);
if(!__applogdata.__CurrentText->translation[__applogdata.__language]->text[__applogdata.__textCodeIndex] && !logicalIndexHasData){ return 0;}
else{
if(logicalIndexHasData){if(!__applogdata.__formatInProgress){
__setupFormat(&__allFormats[__applogdata.__CurrentText->translation[__applogdata.__language]->formats[__applogdata.__currentFormat].formatHandle],__applogdata.__CurrentData[__applogdata.__CurrentText->translation[__applogdata.__language]->formats[__applogdata.__currentFormat].inputIndex], &__applogdata);
__applogdata.__formatInProgress = 1;}
if(__applogdata.__fmtBufIx > 0){
if(__SDT_Format_String==__allFormats[__applogdata.__CurrentText->translation[__applogdata.__language]->formats[__applogdata.__currentFormat].formatHandle].type){
			retval = __applogdata.__CurrentData[__applogdata.__CurrentText->translation[__applogdata.__language]->formats
          [__applogdata.__currentFormat].inputIndex]._string->bytes[__applogdata.__strBufIx++];
			if(__applogdata.__CurrentData[__applogdata.__CurrentText->translation[__applogdata.__language]->formats
					[__applogdata.__currentFormat].inputIndex]._string->length == __applogdata.__strBufIx) {__applogdata.__fmtBufIx=0;}
}else{
retval = __applogdata.__fmtBuffer[--__applogdata.__fmtBufIx];}}
if(!__applogdata.__fmtBufIx)
{__applogdata.__formatInProgress = 0;__applogdata.__currentFormat++;__applogdata.__logicalIndex++;}}
else{retval = __applogdata.__CurrentText->translation[__applogdata.__language]->text[__applogdata.__textCodeIndex++];
if(!__applogdata.contbytesleft){if(0xC0 == (retval & 0xC0)){__applogdata.contbytesleft=0;
while((retval<<__applogdata.contbytesleft+2)&0x80){__applogdata.contbytesleft++;}}
else{__applogdata.__logicalIndex++;}}else{__applogdata.contbytesleft--;}}return retval;}}
static U32 __SDTGetNextCodePointWithoutFormat(void){
U32 retval, byte;S32 byteCount, i;
if(0 == __displaydata.__CurrentText) return 0;
if(!__displaydata.__CurrentText->translation[__displaydata.__language]->text[__displaydata.__textCodeIndex]){return 0;}
else{retval = __displaydata.__CurrentText->translation[__displaydata.__language]->text[__displaydata.__textCodeIndex++];
if(0x80 & retval){byteCount = 1;while((retval << byteCount) & 0x80){byteCount++;}
retval = retval & (0x000000FF >> (1 + byteCount));retval <<= 6 * (byteCount - 1);
for(i = byteCount - 1;i>0;i--){byte = __displaydata.__CurrentText->translation[__displaydata.__language]->text[__displaydata.__textCodeIndex++];
byte &= 0x3F;retval |= byte << (6 * (i - 1));}}return retval;}}
static U8 __SDTGetNextTextByteWithoutFormat(void){
if(0 == __applogdata.__CurrentText) return 0;
if(!__applogdata.__CurrentText->translation[__applogdata.__language]->text[__applogdata.__textCodeIndex]){return 0;}
else{return __applogdata.__CurrentText->translation[__applogdata.__language]->text[__applogdata.__textCodeIndex++];}}
