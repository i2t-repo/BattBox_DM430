//Danfoss PLUS+1 GUIDE Software: [TDSToC] Version: 2023.1.4
#ifndef _TEXTDATA_H
#define _TEXTDATA_H
#include "header.h"
#include "__stdlib_plc_type_string.h"
#include <string.h>
#define _MaxSprak 1
#define ENGLISH 0
#define _TLABELID12      0
#define _TLABELID13      1
#define _TLABELID14      2
#define _TLABELID15      3
#define _TLABELID16      4
#define _TLABELID17      5
#define _TLABELID18      6
#define _TLABELID19      7
struct __SdtSampleString{U16  length;U8  *bytes;};
union __SDTSampleData{U32 _unsigned;S32 _signed;struct __SdtSampleString* _string;};
struct __SdtTextInstance{GUIDEHANDLETYPE TextDef;
union __SDTSampleData *Samples;LANG Language;};
extern U8 __SdtSampleDataArrayWriteIndex;
extern void __SDTSetText(void *instance);
extern U32(*__SDTGetNextCodePoint)(void);
#endif
