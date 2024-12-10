#
# MAKEFILE 32
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
# ----------------------------------------------------------------------------
# SYS INFO
OS_COMPVER = 541
OS_LIB     = 70298408v170.XML
OS_UGCPAR  = ugp1par.txt
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
NOC_FILES 	  =  "TENK_DM430.NOC" "DM430E_1_1_1_X_T.NOC"
# ----------------------------------------------------------------------------
# COMPILE LINK COMMAND
UGRAPHP1_1 = "$(P1DIR)\chpargu2.exe" 
UGRAPHP1_2 = 2 $(OS_UGCPAR) $(PROJQ) $(PROJQ)
PRJTOC = "$(P1DIR)\ProjectToC.exe" "PROJECT=TENK_DM430.P1X,APPLICATION=TENK_DM430,OPTION=NOCODE"
# ----------------------------------------------------------------------------
# MAKE JOB
# check application
"TENK_DM430.LOG" : $(NOC_FILES) $(OS_LIB) 
	@"$(P1DIR)\conmsg" Checking and linking application $(PROJ)
	@"$(P1DIR)\MergeErrorPass2.exe" "PROJECT=TENK_DM430.P1X,APPLICATION=TENK_DM430"
	@"$(P1DIR)\conmsg" MAKEJOB32 END
	@"$(P1DIR)\conmsg"
# PLUS+1 project file
"TENK_DM430.NOC" : "TENK_DM430.P1X"
	@"$(P1DIR)\conmsg" MAKEJOB 32 BEGIN
    @"$(P1DIR)\conmsg" Generating dummy file $**
	copy "TENK_DM430.P1X" "TENK_DM430.NOC"
# Application									    

"DM430E_1_1_1_X_T.noc" : "DM430E_1_1_1_X_T.nob"
   @$(UGRAPHP1_1) "DM430E_1_1_1_X_T" $(UGRAPHP1_2)

# Class definition files

# Screen definition files

"CD6937D80_DAB3_46BF_BD14_2475965968A1.noc" : "CD6937D80_DAB3_46BF_BD14_2475965968A1.nob"
	@$(UGRAPHP1_1) "CD6937D80_DAB3_46BF_BD14_2475965968A1" $(UGRAPHP1_2) SSD

"CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.noc" : "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617.nob"
	@$(UGRAPHP1_1) "CCB2E4559_AEC3_4437_8FE1_48A07FDAA617" $(UGRAPHP1_2) SSD

"C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.noc" : "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0.nob"
	@$(UGRAPHP1_1) "C49B02B97_88A0_4711_A8B6_DB8B71EA5BB0" $(UGRAPHP1_2) SSD

"C27B4991C_F926_43DC_8BF2_62959109410F.noc" : "C27B4991C_F926_43DC_8BF2_62959109410F.nob"
	@$(UGRAPHP1_1) "C27B4991C_F926_43DC_8BF2_62959109410F" $(UGRAPHP1_2) SSD


