# MAKEFILE 2
# ----------------------------------------------------------------------------
# HOST INFO
MAKEDIR = 
BINDIR  = C:\ProgramData\Danfoss\PLUS1\2023.1\Data\ExtCompiler\ARM\v5.4-2016q3\bin
COMPDIR = C:\ProgramData\Danfoss\PLUS1\2023.1\Data\ExtCompiler\ARM\v5.4-2016q3
P1DIR   = C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler
LIBDIR1 = $(COMPDIR)\lib\gcc\arm-none-eabi\5.4.1\armv7e-m\fpu
LIBDIR2 = $(COMPDIR)\arm-none-eabi\lib\armv7e-m\fpu
#----------------------------------------------------------------------------
#APP INFO BEFORE SYS INFO
ROP = DISABLE
DUALBOOT = NOFILE
# -------------------------------------------------------------------------
# SOCKETS
# external plugin
!if ("$(DUALBOOT)"!=NOFILE)
DUALBOOTH = $(DUALBOOT).h
DUALBOOTLIB = $(DUALBOOT).lib
DUALBOOTIDL = $(DUALBOOT).idl
DUALBOOTHEX = $(DUALBOOT).hex
APPLINK = STM32F777BIT7wpwb.ld
APPWOPLINK = STM32F777BIT7wb.ld
!else
DUALBOOTH =
DUALBOOTLIB = stubbootfunc.o
DUALBOOTIDL =
DUALBOOTHEX = 
APPLINK = STM32F777BIT7wp.ld
APPWOPLINK = STM32F777BIT7.ld
!endif
# ----------------------------------------------------------------------------
# SYS INFO
OS_COMPVER = 541
OS_LIB     = 70298408v170.XML
OS_EXR     = 70298408v170.EXR
# ----------------------------------------------------------------------------
# APP INFO
FONTFILE  = __FontData.obj
PROJ = TENK_DM430
PROJ_OUT = "TENK_DM430"
OBJ_FILES = $(FONTFILE:.EXR=.obj) $(TEXTDBF_FILES)
C_FILES =  "TENK_DM430.C" "DM430E_1_1_1_X_T.C" "CD6937D80_DAB3_46BF_BD14_2475965968A1.C" "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.C" "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.C" "C27B4991C_F926_43DC_8BF2_62959109410F.C"
CUSTOM_INTERFACE =  "_COMMONCCPPLCC"
CUSTOM_LIB =  $(CUSTOM_INTERFACE:=.LIB)
EXR_FILES =  "TENK_DM430.EXR" "DM430E_1_1_1_X_T.EXR"
BMP_FILES =  "___IMAGE3.OBJ" "___IMAGE4.OBJ" "___IMAGE6.OBJ" "___IMAGE9.OBJ" "___IMAGE11.OBJ" "___IMAGE2.OBJ" "___IMAGE5.OBJ" "___IMAGE7.OBJ" "___IMAGE10.OBJ" "___IMAGE1.OBJ" "___IMAGE8.OBJ"
APP_OBJ =  "TENK_DM430.OBJ" "DM430E_1_1_1_X_T.OBJ" "CD6937D80_DAB3_46BF_BD14_2475965968A1.OBJ" "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.OBJ" "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.OBJ" "C27B4991C_F926_43DC_8BF2_62959109410F.OBJ"
TEXTDBF_FILES = "_TEXTDEFINITIONS.OBJ" 
REGFIL = IMAGES
REGFILEXT = NOFILE
# ----------------------------------------------------------------------------
# Compiler/Linker Options
SYS_DEFS = -DNUMBER_CANMESSAGES=0 -DEEpromSize=0
OPT_CC  = $(SYS_DEFS) -c -fno-inline-small-functions -std=gnu89 -mthumb -mcpu=cortex-m7 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -fsingle-precision-constant -O2 -I"$(LIBDIR2)" -fwrapv -fsigned-char -mlittle-endian -w
# ----------------------------------------------------------------------------
# Link List
# ----------------------------------------------------------------------------
COMMONLIB = $(OBJ_FILES) $(CUSTOM_LIB) stubextfunc.o $(DUALBOOTLIB)
LINK_LIST = _TIMEKEY.o _NVDATA.o diagdata.o _DynamicDiagnostic.o $(COMMONLIB)
LINK_PATHS2 = -L "$(LIBDIR1)" -L "$(LIBDIR2)" cstart.o HexRangeCrcTables.o -u_sbrk AppLayer.a "$(LIBDIR2)\libg.a" "$(LIBDIR2)\libm.a" "$(LIBDIR1)\libgcc.a" "$(LIBDIR2)\libc.a"
LINK_PATHS = $(LINK_PATHS2:\=/)
COMPILE1  = "$(BINDIR)\sdcc.exe"
LINKLOC  = "$(BINDIR)\arm-none-eabi-ld.exe"
HEXOUT  = "$(BINDIR)\arm-none-eabi-objcopy"
ARCHIVE_REG = "$(BINDIR)\arm-none-eabi-ar.exe" -rs $(REGFIL).a
# ----------------------------------------------------------------------------
# MAKE JOB
# Create LHX file
"TENK_DM430.plg" : "TENK_DM430.hex"
	@"$(P1DIR)\MEMCalc.exe" "PROJECT=TENK_DM430,APPLICATION=TENK_DM430,MAPFILE=TENK_DM430.MAP,ELFFILE=TENK_DM430"
	@"$(P1DIR)\conmsg" Creating diagnostic info for $*
	@"$(P1DIR)\conmsg" Creating lhx $*.lhx
!if ("$(DUALBOOT)"!=NOFILE)
	@"$(P1DIR)\p1insdoit.exe" CODE="TENK_DM430.hex",OUT="TENK_DM430.lhx",INTYPE=0,KEYTYPE=2,PROJECT="TENK_DM430.p1x",ADRLEN=1,KEEPHEX=TRUE
	@"$(P1DIR)\conmsg" Swap bak data in hex-file
	srec_cat $(PROJ_OUT).hex -intel -exclude 0x08018040 0x08018042 -o RawDataHex.hex -intel -line-length=44
!if exists(DualBootOpt.bat)
	@"DualBootOpt.bat" $(PROJ)
!endif  
	copy RawDataHex.hex "$(PROJ).hex"
	-del RawDataHex.hex
!else
	@"$(P1DIR)\p1insdoit.exe" CODE="TENK_DM430.hex",OUT="TENK_DM430.lhx",INTYPE=0,KEYTYPE=2,PROJECT="TENK_DM430.p1x",ADRLEN=1
!endif
	@"$(P1DIR)\conmsg" MAKEJOB2 END
	@"$(P1DIR)\conmsg"
# Create and convert HEX file
"TENK_DM430.hex" : "TENK_DM430.out"
	@"$(P1DIR)\conmsg" Creating Intel Hex Records file $*.hex
	$(HEXOUT) -O ihex "TENK_DM430.out" "_hex.hex"
	$(HEXOUT) -O elf32-littlearm "TENK_DM430.out" "TENK_DM430.elf"
	@"$(P1DIR)\conmsg" Extern C-compiler End
	@"$(P1DIR)\conmsg" _____________________
!if ("$(DUALBOOT)"!=NOFILE)
	srec_cat "_hex.hex" -intel -exclude 0x08008000 0x08010000 -o _hex.hex -intel -line-length=44
	srec_cat $(DUALBOOTHEX) -intel _hex.hex -intel -exclude 0x08018040 0x08018042 -o dummy.hex -intel -line-length=44
    srec_cat dummy.hex -intel -fill 0x5a 0x08018040 0x08018042 -o $(PROJ_OUT).he1 -intel -line-length=44
    @-del dummy.hex
    @-del "$(DUALBOOT).H"
	@-del "$(DUALBOOT).EXR" 
!else
	@copy _hex.hex $(PROJ_OUT).he1
!endif
	@copy "$(PROJ_OUT).he1" $(PROJ_OUT).hex
	@-del _hex.hex
	@-del "$(PROJ_OUT).he1"
# Create OUT-file, LINKLOC
"TENK_DM430.out" :  "TENK_DM430.cmf" $(APP_OBJ) 
	@"$(P1DIR)\conmsg" Linking/Locate to $*.out
	@del "TENK_DM430.out"
!if ("$(ROP)"=="ENABLE")
	@$(LINKLOC) @"$(PROJ).cmf" $(LINK_PATHS) -nostartfiles --gc-sections -Map="$(PROJ).map" -o$(PROJ_OUT).out -T $(APPLINK)
!else
	@$(LINKLOC) @"$(PROJ).cmf" $(LINK_PATHS) -nostartfiles --gc-sections -Map="$(PROJ).map" -o$(PROJ_OUT).out -T $(APPWOPLINK)
!endif
# Build Link cmf file
"TENK_DM430.cmf" : $(LINK_LIST) $(BMP_FILES)
	@"$(P1DIR)\conmsg" Build $(PROJ).cmf 
	@"$(P1DIR)\MAKECMF" "$(PROJ).cmf" FORMAT:2 $(LINK_LIST)
_NVDATA.o : _NVDATA.c _NVAllocation.h
	@"$(P1DIR)\conmsg" Compiling  $**
    @del _NVDATA.o
	@$(COMPILE1) _NVDATA.c $(OPT_CC)
# New Diagnostic
_DynamicDiagnostic.o : _DynamicDiagnostic.c
	@"$(P1DIR)\conmsg" Compiling  $**
	@del _DynamicDiagnostic.o
	@$(COMPILE1) _DynamicDiagnostic.c $(OPT_CC)
# Generate H file for DUAL BOOT
!if ( "$(DUALBOOT)"!=NOFILE ) 
$(DUALBOOTH) : $(DUALBOOTIDL)
    @"$(P1DIR)\conmsg" Generate $(DUALBOOTH)
    @"$(P1DIR)\RatatoskT3.exe" "input=$(DUALBOOTIDL), silent=yes, h=yes"   
!endif
# Timekey
_TIMEKEY.o : _TIMEKEY.c
	@"$(P1DIR)\conmsg" Compiling  $**
	@del _TIMEKEY.o
	@$(COMPILE1) _TIMEKEY.c $(OPT_CC)
_TIMEKEY.c :
	@"$(P1DIR)\conmsg" MAKEJOB2 BEGIN
   	@"$(P1DIR)\conmsg" Create timekey
	@"$(P1DIR)\mtimekey.exe" "_TIMEKEY_T" "P:__TIMEKEY_" "N:_TIMEKEY"
	@"$(P1DIR)\conmsg" _____________________
	@"$(P1DIR)\conmsg" Extern C-compiler Begin
# PLUS+1 project files
__FontData.obj : __FontData.c
	@"$(P1DIR)\conmsg" Compiling  $**
	@del $@ 2>nul
	@$(COMPILE1) -c "__FontData.c" $(OPT_CC) -o "__FontData.obj"
__FontData.c :
	@"$(P1DIR)\conmsg" MAKEJOB2 BEGIN
	@del $@ 2>nul
	@"$(P1DIR)\conmsg" Creating fonts
	@"$(P1DIR)\FmdToC.exe" "$(PROJ)" __FontData

"TENK_DM430.obj" : "TENK_DM430.c"
    @del "TENK_DM430.obj"
	@$(COMPILE1) "TENK_DM430.c" $(OPT_CC) -o "TENK_DM430.obj"

# Application		 
	 

"DM430E_1_1_1_X_T.obj" : "DM430E_1_1_1_X_T.c" $(DUALBOOTH)
    @del "DM430E_1_1_1_X_T.obj"
	@$(COMPILE1) "DM430E_1_1_1_X_T.c" $(OPT_CC) -o "DM430E_1_1_1_X_T.obj"

# Text definition files

"_TEXTDEFINITIONS.obj" : "_TEXTDEFINITIONS.c"
	@del "_TEXTDEFINITIONS.obj" 2>nul
	@$(COMPILE1) -c "_TEXTDEFINITIONS.c" $(OPT_CC) -o "_TEXTDEFINITIONS.obj"

# Screen definition files

"CD6937D80_DAB3_46BF_BD14_2475965968A1.obj" : "CD6937D80_DAB3_46BF_BD14_2475965968A1.c"
	@del "CD6937D80_DAB3_46BF_BD14_2475965968A1.obj" 2>nul
	@$(COMPILE1) -c "CD6937D80_DAB3_46BF_BD14_2475965968A1.c" $(OPT_CC) -o "CD6937D80_DAB3_46BF_BD14_2475965968A1.obj"

"CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.obj" : "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.c"
	@del "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.obj" 2>nul
	@$(COMPILE1) -c "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.c" $(OPT_CC) -o "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.obj"

"C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.obj" : "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.c"
	@del "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.obj" 2>nul
	@$(COMPILE1) -c "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.c" $(OPT_CC) -o "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.obj"

"C27B4991C_F926_43DC_8BF2_62959109410F.obj" : "C27B4991C_F926_43DC_8BF2_62959109410F.c"
	@del "C27B4991C_F926_43DC_8BF2_62959109410F.obj" 2>nul
	@$(COMPILE1) -c "C27B4991C_F926_43DC_8BF2_62959109410F.c" $(OPT_CC) -o "C27B4991C_F926_43DC_8BF2_62959109410F.obj"

# Image files

"___Image3.obj" : "___Image3.c"
	@del "___Image3.obj" 2>nul
	@$(COMPILE1) -c "___Image3.c" $(OPT_CC) -o "___Image3.obj"
"___Image3.c" : "___Image3.imd" "RightArrowWht.png"
	@"$(P1DIR)\ImageToC.exe" "___Image3.imd" "RightArrowWht.png"

"___Image4.obj" : "___Image4.c"
	@del "___Image4.obj" 2>nul
	@$(COMPILE1) -c "___Image4.c" $(OPT_CC) -o "___Image4.obj"
"___Image4.c" : "___Image4.imd" "LEDgry_Gry.png"
	@"$(P1DIR)\ImageToC.exe" "___Image4.imd" "LEDgry_Gry.png"

"___Image6.obj" : "___Image6.c"
	@del "___Image6.obj" 2>nul
	@$(COMPILE1) -c "___Image6.c" $(OPT_CC) -o "___Image6.obj"
"___Image6.c" : "___Image6.imd" "LEDgry_Amb.png"
	@"$(P1DIR)\ImageToC.exe" "___Image6.imd" "LEDgry_Amb.png"

"___Image9.obj" : "___Image9.c"
	@del "___Image9.obj" 2>nul
	@$(COMPILE1) -c "___Image9.c" $(OPT_CC) -o "___Image9.obj"
"___Image9.c" : "___Image9.imd" "LEDgry_Grn.png"
	@"$(P1DIR)\ImageToC.exe" "___Image9.imd" "LEDgry_Grn.png"

"___Image11.obj" : "___Image11.c"
	@del "___Image11.obj" 2>nul
	@$(COMPILE1) -c "___Image11.c" $(OPT_CC) -o "___Image11.obj"
"___Image11.c" : "___Image11.imd" "LEDgry_Red.png"
	@"$(P1DIR)\ImageToC.exe" "___Image11.imd" "LEDgry_Red.png"

"___Image2.obj" : "___Image2.c"
	@del "___Image2.obj" 2>nul
	@$(COMPILE1) -c "___Image2.c" $(OPT_CC) -o "___Image2.obj"
"___Image2.c" : "___Image2.imd" "CarBattLtGry.png"
	@"$(P1DIR)\ImageToC.exe" "___Image2.imd" "CarBattLtGry.png"

"___Image5.obj" : "___Image5.c"
	@del "___Image5.obj" 2>nul
	@$(COMPILE1) -c "___Image5.c" $(OPT_CC) -o "___Image5.obj"
"___Image5.c" : "___Image5.imd" "LEDgry_Grn.png"
	@"$(P1DIR)\ImageToC.exe" "___Image5.imd" "LEDgry_Grn.png"

"___Image7.obj" : "___Image7.c"
	@del "___Image7.obj" 2>nul
	@$(COMPILE1) -c "___Image7.c" $(OPT_CC) -o "___Image7.obj"
"___Image7.c" : "___Image7.imd" "LEDgry_Red.png"
	@"$(P1DIR)\ImageToC.exe" "___Image7.imd" "LEDgry_Red.png"

"___Image10.obj" : "___Image10.c"
	@del "___Image10.obj" 2>nul
	@$(COMPILE1) -c "___Image10.c" $(OPT_CC) -o "___Image10.obj"
"___Image10.c" : "___Image10.imd" "LEDgry_Amb.png"
	@"$(P1DIR)\ImageToC.exe" "___Image10.imd" "LEDgry_Amb.png"

"___Image1.obj" : "___Image1.c"
	@del "___Image1.obj" 2>nul
	@$(COMPILE1) -c "___Image1.c" $(OPT_CC) -o "___Image1.obj"
"___Image1.c" : "___Image1.imd" "logo_trans_footer.png"
	@"$(P1DIR)\ImageToC.exe" "___Image1.imd" "logo_trans_footer.png"

"___Image8.obj" : "___Image8.c"
	@del "___Image8.obj" 2>nul
	@$(COMPILE1) -c "___Image8.c" $(OPT_CC) -o "___Image8.obj"
"___Image8.c" : "___Image8.imd" "LEDgry_Gry.png"
	@"$(P1DIR)\ImageToC.exe" "___Image8.imd" "LEDgry_Gry.png"


