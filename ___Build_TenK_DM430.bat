@ECHO OFF
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\conmsg" Batch job BEGIN
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\make.exe" "TENK_DM430" LONGNAME:ON
if errorlevel 1 goto out1
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\sdm.exe" -r %1 -f MKFILE11.mak
if errorlevel 1 goto out2
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\errclr" "TENK_DM430" err
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\sdm.exe" -r %1 -f MKFILE12.mak
if errorlevel 1 goto out2
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\errclr" "TENK_DM430" err
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\sdm.exe" -r %1 -f MKFILE2.mak
if errorlevel 1 goto out3
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\errset" "TENK_DM430" err
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\conmsg" 
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\writescreentime.exe"
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\conmsg" Batch job END
ECHO TENK_DM430 successfully compiled
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\RESULT" T "TENK_DM430 successfully compiled"
goto end
:out1
ECHO Not able to build Initialization data for TENK_DM430
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\RESULT" F "Not able to build Initialization data for TENK_DM430"
goto end
:out2
ECHO Graphical Compilation and Linking of TENK_DM430 aborted with errors
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\RESULT" F "Graphical Compilation and Linking of TENK_DM430 aborted with errors"
goto end
:out3
ECHO C Compilation, Linking or LHX create of TENK_DM430 aborted with errors
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\RESULT" F "C Compilation, Linking or LHX create of TENK_DM430 aborted with errors"
"C:\Program Files (x86)\Danfoss\PLUS1\2023.1\GUIDE\P1Compiler\errset" "TENK_DM430" err
:end

