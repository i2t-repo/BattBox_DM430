@ECHO OFF
@ECHO OFF
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\make.exe" "TENK_DM430" LONGNAME:ON
if errorlevel 1 goto out1
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\sdm.exe" -r %1 -f MKFILE31.mak
if errorlevel 1 goto out2
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\errclr" "TENK_DM430" err
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\sdm.exe" -r %1 -f MKFILE32.mak
if errorlevel 1 goto out2
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\errclr" "TENK_DM430" err
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\writescreentime.exe"
ECHO TENK_DM430 successfully compiled
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\RESULT" T "TENK_DM430 successfully Error Checked"
goto end
:out1
ECHO Not able to build Initialization data for TENK_DM430
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\RESULT" F "Not able to build Initialization data for TENK_DM430"
goto end
:out2
ECHO Error Checking of TENK_DM430 aborted with errors
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\RESULT" F "Error Checking of TENK_DM430 aborted with errors"
:end

