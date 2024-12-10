#
# MAKEFILE 12
# ----------------------------------------------------------------------------
# HOST INFO
MAKEDIR = 
BINDIR =  C:\ProgramData\Danfoss\PLUS1\2023.1\Data\ExtCompiler\ARM\v5.4-2016q3\bin
INCDIR =  C:\ProgramData\Danfoss\PLUS1\2023.1\Data\ExtCompiler\ARM\v5.4-2016q3\arm-none-eabi\include
LIBDIR =  C:\ProgramData\Danfoss\PLUS1\2023.1\Data\ExtCompiler\ARM\v5.4-2016q3
P1DIR =   C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler
#----------------------------------------------------------------------------
#APP INFO BEFORE SYS INFO
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
# ----------------------------------------------------------------------------
# COMPILE LINK COMMAND
UGRAPHP1_1 = "$(P1DIR)\chpargu2.exe" 
UGRAPHP1_2 = 2 $(OS_UGCPAR) $(PROJQ) $(PROJQ) CCODE
PRJTOC = "$(P1DIR)\ProjectToC.exe" "PROJECT=TENK_DM430.P1X,APPLICATION=TENK_DM430"
# ----------------------------------------------------------------------------
# MAKE JOB
# check application
# New Diagnostic
_DynamicDiagnostic.c : "TENK_DM430.LOG"
	@"$(P1DIR)\NOBFNUTT.EXE" "APPLICATION=$(PROJ),PROJECT=$(PROJ)"
	@"$(P1DIR)\conmsg" MAKEJOB12 END
	@"$(P1DIR)\conmsg"
"TENK_DM430.LOG" : $(C_FILES) $(OS_LIB) 
	@"$(P1DIR)\conmsg" Allocating NV memory for application $(PROJ)
	@"$(P1DIR)\nvallocate.exe" "PROJECT=TENK_DM430,APPLICATION=TENK_DM430"
	@"$(P1DIR)\conmsg" Checking and Linking application $(PROJ)
	@"$(P1DIR)\MergeErrorPass2.exe" "PROJECT=TENK_DM430.P1X,APPLICATION=TENK_DM430"
# PLUS+1 project file
"TENK_DM430.C" : "TENK_DM430.P1X"
	@"$(P1DIR)\conmsg" MAKEJOB12 BEGIN
    @"$(P1DIR)\conmsg" Generating code from p1x $**
	@$(PRJTOC)
# Application files

"DM430E_1_1_1_X_T.c" : "DM430E_1_1_1_X_T.nob"
   @$(UGRAPHP1_1) "DM430E_1_1_1_X_T" $(UGRAPHP1_2)

# Class definition files

# Screen definition files

"CD6937D80_DAB3_46BF_BD14_2475965968A1.c" : "CD6937D80_DAB3_46BF_BD14_2475965968A1.nob"
	@$(UGRAPHP1_1) "CD6937D80_DAB3_46BF_BD14_2475965968A1" $(UGRAPHP1_2) SSD

"CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.c" : "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.nob"
	@$(UGRAPHP1_1) "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617" $(UGRAPHP1_2) SSD

"C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.c" : "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.nob"
	@$(UGRAPHP1_1) "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0" $(UGRAPHP1_2) SSD

"C27B4991C_F926_43DC_8BF2_62959109410F.c" : "C27B4991C_F926_43DC_8BF2_62959109410F.nob"
	@$(UGRAPHP1_1) "C27B4991C_F926_43DC_8BF2_62959109410F" $(UGRAPHP1_2) SSD


