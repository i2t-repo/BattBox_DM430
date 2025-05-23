#
# MAKEFILE 31
# ----------------------------------------------------------------------------
# HOST INFO
MAKEDIR = 
BINDIR =  C:\ProgramData\Danfoss\PLUS1\2023.1\Data\ExtCompiler\ARM\v5.4-2016q3\bin
INCDIR =  C:\ProgramData\Danfoss\PLUS1\2023.1\Data\ExtCompiler\ARM\v5.4-2016q3\arm-none-eabi\include
LIBDIR =  C:\ProgramData\Danfoss\PLUS1\2023.1\Data\ExtCompiler\ARM\v5.4-2016q3
P1DIR =   C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler
UGDIR   = C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler
#----------------------------------------------------------------------------
#APP INFO BEFORE SYS INFO
ROP = DISABLE
DUALBOOT = NOFILE
# -------------------------------------------------------------------------
# SOCKETS
# external plugin
!if ("$(DUALBOOT)"!=NOFILE)
DUALBOOTEXR = $(DUALBOOT).exr
DUALBOOTIDL = $(DUALBOOT).idl
!else
DUALBOOTEXR =
DUALBOOTIDL =
!endif
# ----------------------------------------------------------------------------
# SYS INFO
OS_COMPVER = 541
OS_UGCPAR  = ugp1par.txt
OS_LIB     = 70298408v170.XML
OS_EXR     = 70298408v170.EXR					  
# ----------------------------------------------------------------------------
# APP INFO
PROJ          = TENK_DM430
PROJQ         = "TENK_DM430"
OBJ_FILES     =  "TENK_DM430.OBJ" "DM430E_1_1_1_X_T.OBJ" "CD6937D80_DAB3_46BF_BD14_2475965968A1.OBJ" "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.OBJ" "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.OBJ" "C27B4991C_F926_43DC_8BF2_62959109410F.OBJ"
C_FILES       =  "TENK_DM430.C" "DM430E_1_1_1_X_T.C" "CD6937D80_DAB3_46BF_BD14_2475965968A1.C" "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.C" "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.C" "C27B4991C_F926_43DC_8BF2_62959109410F.C"
CUSTOM_LIB    =  "_COMMONCCPPLCC"
EXR_FILES     =  "TENK_DM430.EXR" "DM430E_1_1_1_X_T.EXR"
BMP_FILES     =  "___IMAGE3.OBJ" "___IMAGE4.OBJ" "___IMAGE6.OBJ" "___IMAGE9.OBJ" "___IMAGE11.OBJ" "___IMAGE2.OBJ" "___IMAGE5.OBJ" "___IMAGE7.OBJ" "___IMAGE10.OBJ" "___IMAGE1.OBJ" "___IMAGE8.OBJ"
TEXTDBF_FILES = "_TEXTDEFINITIONS.OBJ" 
REGFILEXT     = NOFILE
REGFIL        = IMAGES
FONTFILE      = "TenK_DM430_P1XT.EXR" 
MAINMODULE    = DM430E_1_1_1_X_T.SCS
MAINMODULEQ   = "DM430E_1_1_1_X_T.SCS"
SSD_NOB       =  "CD6937D80_DAB3_46BF_BD14_2475965968A1.NOB" "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.NOB" "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.NOB" "C27B4991C_F926_43DC_8BF2_62959109410F.NOB"
TMPPROJQ      = "TENK_DM430.TP1X"
MAINMODULEEXR = $(MAINMODULEQ:.SCS=.EXR)
ALL_MODULES_EXR =
# ----------------------------------------------------------------------------
# COMPILE LINK COMMAND
UGRAPHP1_1 = "$(P1DIR)\chpargu1.exe" 
UGRAPHP1_2 = 2 $(OS_UGCPAR) $(PROJQ) $(PROJQ) 
PRJTOC = "$(P1DIR)\ProjectToC.exe" "PROJECT=TENK_DM430.P1X,APPLICATION=TENK_DM430,OPTION=NOCODE"
# ----------------------------------------------------------------------------
# MAKE JOB
# check application
"TENK_DM430.log" : $(EXR_FILES) MergeErrorPass2 $(SSD_NOB:.NOB=.exr) $(OS_LIB) $(OS_EXR) $(TEXTDBF_FILES:.OBJ=.exr) $(FONTFILE) $(DUALBOOTEXR)
	@"$(P1DIR)\conmsg" Checking and linking application $(PROJ)
	@"$(P1DIR)\glink.exe" "PROJECT=TENK_DM430.P1X,APPLICATION=TENK_DM430"
	@"$(P1DIR)\conmsg" MAKEJOB31 END
# Create EXR file from image register file
$(FONTFILE) : $(TMPPROJQ) $(SSD_NOB)
	@"$(P1DIR)\conmsg" Creating $(FONTFILE)
	@"$(P1DIR)\P1xtToExr.exe" $(TMPPROJQ) $(FONTFILE)
	@"$(P1DIR)\conmsg" Deleting $(REGFIL).A
	@-del $(REGFIL).a
# OS Exr
$(OS_EXR) :	 MkFile31.mak
	@"$(P1DIR)\conmsg" MAKEJOB31 BEGIN
    @"$(P1DIR)\conmsg" Generating OS exr $**
	@"$(P1DIR)\conmsg" CAN and NV symbols 
!if ("$(ROP)"=="ENABLE")
	call echo U__PARAM-OPEN >> $(OS_EXR)
!endif
	call echo $ >> $(OS_EXR)
# EXR for dual boot
!if ( "$(DUALBOOT)"!=NOFILE ) 
$(DUALBOOTEXR) : $(DUALBOOTIDL)
    @"$(P1DIR)\conmsg" Generate $(DUALBOOTEXR)
    @"$(P1DIR)\RatatoskT3.exe" "input=$(DUALBOOTIDL), silent=yes, exr=yes"   
!endif
# PLUS+1 project files
"TENK_DM430.EXR" : "TENK_DM430.P1X"
    @"$(P1DIR)\conmsg" Generating code from p1x $**
	@$(PRJTOC)
!if ("$(MAINMODULE)"!="NOFILE")
"TENK_DM430.P1X" : $(MAINMODULEEXR)
!endif
MergeErrorPass2: $(SSD_NOB:.NOB=.exr)
	@"$(P1DIR)\MergeErrorPass2.exe" "PROJECT=TENK_DM430.P1X,APPLICATION=TENK_DM430,PASS=0"
# Application files

"DM430E_1_1_1_X_T.exr" : "DM430E_1_1_1_X_T.nob" $(SSD_NOB)
   @$(UGRAPHP1_1) "DM430E_1_1_1_X_T" $(UGRAPHP1_2)
"DM430E_1_1_1_X_T.nob" : "DM430E_1_1_1_X_T.scs" $(SSD_NOB)
   @"$(P1DIR)\scstonob.exe" "DM430E_1_1_1_X_T"
ALL_MODULES_EXR = $(ALL_MODULES_EXR) "DM430E_1_1_1_X_T.exr"

# Class definition files

# Text files

"_TEXTDEFINITIONS.exr" : "_TEXTDEFINITIONS.tds"
	@"$(P1DIR)\conmsg" Creating Text TDS $**
	@"$(P1DIR)\tdstoc.exe" "_TEXTDEFINITIONS.tds" "_TEXTDEFINITIONS" NOC	

# Screen definitions

"CD6937D80_DAB3_46BF_BD14_2475965968A1.exr" : "CD6937D80_DAB3_46BF_BD14_2475965968A1.nob" $(ALL_MODULES_EXR)
	@$(UGRAPHP1_1) "CD6937D80_DAB3_46BF_BD14_2475965968A1" $(UGRAPHP1_2) SSD
"CD6937D80_DAB3_46BF_BD14_2475965968A1.nob" : "CD6937D80_DAB3_46BF_BD14_2475965968A1.ssd"
	@"$(P1DIR)\ssdtonob.exe" "CD6937D80_DAB3_46BF_BD14_2475965968A1" TEXTDATA $(PROJQ)

"CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.exr" : "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.nob" $(ALL_MODULES_EXR)
	@$(UGRAPHP1_1) "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617" $(UGRAPHP1_2) SSD
"CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.nob" : "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.ssd"
	@"$(P1DIR)\ssdtonob.exe" "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617" TEXTDATA $(PROJQ)

"C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.exr" : "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.nob" $(ALL_MODULES_EXR)
	@$(UGRAPHP1_1) "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0" $(UGRAPHP1_2) SSD
"C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.nob" : "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.ssd"
	@"$(P1DIR)\ssdtonob.exe" "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0" TEXTDATA $(PROJQ)

"C27B4991C_F926_43DC_8BF2_62959109410F.exr" : "C27B4991C_F926_43DC_8BF2_62959109410F.nob" $(ALL_MODULES_EXR)
	@$(UGRAPHP1_1) "C27B4991C_F926_43DC_8BF2_62959109410F" $(UGRAPHP1_2) SSD
"C27B4991C_F926_43DC_8BF2_62959109410F.nob" : "C27B4991C_F926_43DC_8BF2_62959109410F.ssd"
	@"$(P1DIR)\ssdtonob.exe" "C27B4991C_F926_43DC_8BF2_62959109410F" TEXTDATA $(PROJQ)


