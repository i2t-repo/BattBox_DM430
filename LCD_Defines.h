/*
   @file   LCD_Defines.h

   <hr>
   <h2> File Creation </h2>
   @author jgieseke

   @date    Nov 06, 2017

   @caliberrm

   @brief   T



   <hr>
   <h2> History </h2>
   @verbatim
   Vers:  Date:         Name:             Comment:
   -----  ----------    -------           ------------------------------------------------
   00.00  06Nov17       jgieseke          Initial start
   -----  ----------    -------           ------------------------------------------------
   @endverbatim

   &copy; Danfoss Power Solutions , 2017
 */

#ifndef D_LCD_DEFINES_H
#define D_LCD_DEFINES_H


#define CONFIG_DISPLAY_API           Display

#define CONFIG_DISPLAY_HEIGHT        272
#define CONFIG_DISPLAY_WIDTH         480

#define D_NUM_BYTES_PER_PIXEL_RGB    3UL
#define D_NUM_BYTES_PER_PIXEL_RGBA   4UL

extern BOOL               _GraphicTreeDelivered;
extern const COLORSTYPE   Color;

//* * * PALETTE TYPES * * *
#define _PalVerStd   1

//Moved to LCD1.idl
//typedef struct
//{
//   COLOR   Transparent;
//}COLORSTYPE;

typedef union Ucolor_un
{
   U32   Code;
   struct   cOLORS
   {
      U8   c;
      U8   b;
      U8   g;
      U8   r;
   }Decode;
}COLOR_UN;

typedef struct
{
   U8   Red;
   U8   Green;
   U8   Blue;
   U8   Flags;
}SD_RGB;

/** PIXELTYPER **/

#define ColorPxType   0
typedef const struct CPixelData
{
   U16   Xpos;
   U16   Ypos;
   U16   Color;
}CPIXEL;

typedef const struct PxcType
{
   U16   Xpos;
   U16   Ypos;
   U16   Color;
}PXC;

#define PxType   1
typedef const struct Pixel
{
   U8   Xpos;
   U8   Ypos;
}__attribute__((__packed__)) PIXEL;

// * * * RLE TYPES * * *
// monocrome 8bit length
#define RLECode1_8Type   1

// monocrome 16bit length
#define RLECode1_16Type   2

// 8...64 bit color; 8...32 bit length
#define RLE_RGB_Code_Type   4

// 8...64 bit luminance; 8...32 bit length
#define RLE_MON_Code_Type   5

// 8...64 bit color with alpha channel; 8...32 bit length
#define RLE_RGBA_Code_Type   6

// RLE IMAGE
#define PXORLEType   3

typedef const U32 RLE_RGB_DATA_TYPE_t;

//This define is used from GUIDE to define image data, with the attribute we can define the location to store images
#define RLE_RGB_DATA_TYPE   RLE_RGB_DATA_TYPE_t __attribute__((section(".qspi_flash")))

typedef const struct sd_rle_sprite
{
   S16   w;
   S16   h;
   S16   OrigoX;
   S16   OrigoY;
   U32   TranspColor;
   S16   ColorDepth;
   S16   CodeType;
   U32   Size;
   union
   {
      const void           *Ptr;
      const U8             *PtrUB;
      RLE_RGB_DATA_TYPE_t  *PtrRLERGBData;
   }Dat;
}SD_RLE_SPRITE_TYPE;

/** PIXELSTRUKTUR **/

typedef const struct PXObject
{
   U8    VectorType;
   U32   Length;
   union
   {
      const void          *p;
      SD_RLE_SPRITE_TYPE  *RLESprite;
      PIXEL               *PixelVector;
      CPIXEL              *ColorPixelVector;
   }PixelData;
}PXOBJECT;

typedef struct PXHeapObject
{
   U8    VectorType;
   U32   Length;
   union
   {
      PIXEL   *PixelVector;
      CPIXEL  *ColorPixelVector;
   }PixelData;
}PXHEAPOBJECT;

#define PXO   PXOBJECT *

/** FONTTYPER **/

#define StdFontTypeCode                        0
#define RLEVFixFontTypeCode                    1
#define StdFontTypeCodeSA                      2
#define RLEVFixFontTypeCodeSA                  3
#define RLEFontTypeCode                        4
#define UnicodeRLEFontTypeCode                 5
#define FullUnicodeRLEFontTypeCode             6
#define FullUnicodeRLEFontTypeCodeWithOffset   7
#define _LastSupportedFont                     FullUnicodeRLEFontTypeCodeWithOffset

typedef const struct FontData
{
   U8      Hight;
   U8      Width;
   PIXEL  *AsciiPtr[256];
}STDFONTTYPE;

typedef const U8 RLEDATATYPE;

typedef const struct rlevfixfontdata
{
   U8            Height;
   U8            Width;
   U8            OrigoX;
   U8            OrigoY;
   RLEDATATYPE  *RleVectP[256];
}RLE_VFIX_FONTTYPE;

typedef const struct rlefontdata
{
   U16                  Height;
   SD_RLE_SPRITE_TYPE  *RleCharP[256];
}RLE_FONTTYPE;

typedef const U8 SD_FONT_RLE_SPRITE_TYPE;

typedef const struct unicoderlefontdata
{
   U16   Height;
   SD_FONT_RLE_SPRITE_TYPE * (*GetFirst)(TLW *Text);
   SD_FONT_RLE_SPRITE_TYPE * (*GetNext)(void);
}UNICODE_RLE_FONTTYPE;

typedef U32             GUIDEHANDLETYPE;
typedef struct TextData TEXTTYPE;

typedef const struct fullunicoderlefontdata
{
   U16               Height;
   GUIDEHANDLETYPE   FontHandle;
   void * (*SetTextStruct)(TEXTTYPE *TextStruct);
   SD_FONT_RLE_SPRITE_TYPE * (*GetNextGlyph)(void);
}FULL_UNICODE_RLE_FONTTYPE;

typedef const struct SDFontData
{
   U16   FontType;
   union
   {
      const void                 *ptr;
      STDFONTTYPE                *StdFontP;
      RLE_VFIX_FONTTYPE          *RleVFixFontP;
      RLE_FONTTYPE               *RleFontP;
      UNICODE_RLE_FONTTYPE       *URleFontP;
      FULL_UNICODE_RLE_FONTTYPE  *FURleFontP;
   }Font;
}SDFONTTYPE;

typedef enum
{
   VisionFileData,
   TxtFknData,
   BmpData,
   VectData
}SCREEN_AREA_DATA_TYPE_T;

/** IODATATYPER **/

struct TextData
{
   SDFONTTYPE   *Font;
   SDCOLORTYPE   ColorCode;
   S32           Xpos;
   S32           Ypos;
   U32           Xlen;
   U32           Ylen;
   U32           Rotation;
   U32           OrigoX;
   U32           OrigoY;
   U8            Justification;
   LANG          CurLang;
   union
   {
      TL    *Text;
      TLW   *UText;
      void   (*pproc)(void);
      void  *TextInstance;
   }
   Tp;
};

typedef struct GraphData
{
   PXO   ObjectPtr;
   U32   ColorCode;
   S32   Xpos;
   S32   Ypos;
   S32   Rotation;
}GRAPHTYPE;

typedef struct LineData
{
   U32   ColorCode;
   S32   Xstart;
   S32   Ystart;
   S32   Xend;
   S32   Yend;
   S32   Width;
}LINETYPE;

/** IODATASTRUKTUR **/

typedef struct IOIntData
{
   BOOL  *Active;
   union
   {
      TEXTTYPE   *TextPtr;
      LINETYPE   *LinePtr;
      GRAPHTYPE  *GraphPtr;
   }DataPtr;
}IODATA;

/** FILDATATYPER **/

typedef struct VisionFile
{
   S32   Xmin;
   S32   Xmax;
   S32   Ymin;
   S32   Ymax;
   U32   Background;
}VISIONFILE;

/** FILSTRUKTUR **/

typedef struct IOFilePtr
{
   union
   {
      VISIONFILE  *VisionFilePtr;
   }IOFileDataPtr;
}IOFILE;

#endif /* D_LCD_DEFINES_H */

