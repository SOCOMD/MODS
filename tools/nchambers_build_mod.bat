@echo off
set projectDir="C:\Users\nchambers\projects\SOCOMD\mods"
set toolsDir=%projectDir%\tools
set modOutput_core="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Mods\SOCOMD_Dev\@socomd_core\addons"
set modOutput_main="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Mods\SOCOMD_Dev\@socomd_main\addons"
set modOutput_rhs="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Mods\SOCOMD_Dev\@socomd_rhs\addons"

::SOCOMD Core
start /D %projectDir% makepbo.exe -P socomd_core %modOutput_core%
start /D %projectDir% makepbo.exe -N -P socomd_data_core %modOutput_core%
start /D %projectDir% makepbo.exe -P socomd_zeus %modOutput_core%

::SOCOMD 3rd Party
start /D %projectDir% makepbo.exe -N -P socomd_gcam %modOutput_core%
start /D %projectDir% makepbo.exe -N -P socomd_asorvs %modOutput_core%
start /D %projectDir% makepbo.exe -N -P socomd_asorgs %modOutput_core%
start /D %projectDir% makepbo.exe -N -P ar_advancedrappelling %modOutput_core%
start /D %projectDir% makepbo.exe -N -P sa_advancedslingloading %modOutput_core%

::SOCOMD Main
start /D %projectDir% makepbo.exe socomd_main %modOutput_main%
start /D %projectDir% makepbo.exe socomd_cup_compat %modOutput_main%
start /D %projectDir% makepbo.exe socomd_sma_compat %modOutput_main%

::SOCOMD RHS
start /D %projectDir% makepbo.exe -N -P socomd_rhs_compat %modOutput_rhs%.