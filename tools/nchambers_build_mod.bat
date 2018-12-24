@echo off
set projectDir="C:\Users\nchambers\projects\SOCOMD\mods"
set toolsDir=%projectDir%\tools
set modOutput_core="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Mods\SOCOMD_Dev\@socomd_core\addons"
set modOutput_data_cup="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Mods\SOCOMD_Dev\@socomd_data_cup\addons"
set modOutput_main="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Mods\SOCOMD_Dev\@socomd_main\addons"
set modOutput_rhs="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Mods\SOCOMD_Dev\@socomd_rhs\addons"

::SOCOMD Core
start /D %projectDir% makepbo.exe -N -P socomd_core %modOutput_core%
start /D %projectDir% makepbo.exe -N -P socomd_zeus %modOutput_core%

::SOCOMD Data
start /D %projectDir% makepbo.exe -N -P socomd_data_core %modOutput_core%
start /D %projectDir% makepbo.exe -N -P socomd_data_cup %modOutput_data_cup%

::SOCOMD 3rd Party
start /D %projectDir% makepbo.exe -N -P socomd_gcam %modOutput_core%
start /D %projectDir% makepbo.exe -N -P socomd_asorvs %modOutput_core%
start /D %projectDir% makepbo.exe -N -P socomd_asorgs %modOutput_core%
start /D %projectDir% makepbo.exe -N -P ar_advancedrappelling %modOutput_core%
start /D %projectDir% makepbo.exe -N -P sa_advancedslingloading %modOutput_core%

::SOCOMD Main
start /D %projectDir% makepbo.exe -N -P socomd_main %modOutput_main%

::SOCOMD RHS
start /D %projectDir% makepbo.exe -N -P socomd_rhs %modOutput_rhs%