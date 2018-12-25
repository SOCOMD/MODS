@echo off
set projectDir="C:\Users\nchambers\projects\SOCOMD\mods"
set toolsDir=%projectDir%\tools
set modOutput="C:\Users\nchambers\projects\SOCOMD\MODS\builds"
set buldParam=-N -B -Q

::SOCOMD Core
start /D %projectDir% makepbo.exe %buldParam% socomd_core %modOutput%
start /D %projectDir% makepbo.exe %buldParam% socomd_zeus %modOutput%

::SOCOMD Data
start /D %projectDir% makepbo.exe %buldParam% socomd_data_core %modOutput%
start /D %projectDir% makepbo.exe %buldParam% socomd_data_cup %modOutput%

::SOCOMD 3rd Party
start /D %projectDir% makepbo.exe %buldParam% socomd_gcam %modOutput%
start /D %projectDir% makepbo.exe %buldParam% socomd_asorvs %modOutput%
start /D %projectDir% makepbo.exe %buldParam% socomd_asorgs %modOutput%
start /D %projectDir% makepbo.exe %buldParam% ar_advancedrappelling %modOutput%
start /D %projectDir% makepbo.exe %buldParam% sa_advancedslingloading %modOutput%

::SOCOMD Main
start /D %projectDir% makepbo.exe %buldParam% socomd_main %modOutput%

::SOCOMD RHS
start /D %projectDir% makepbo.exe %buldParam% socomd_rhs %modOutput%