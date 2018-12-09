@echo off
set projectDir="C:\Users\nchambers\projects\SOCOMD\mods"
set toolsDir=%projectDir%\tools
set modOutput="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Dev\@socomd_dev\addons"
set modOutput_core="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Mods\SOCOMD_Dev\@socomd_core\addons"
set modOutput_cup_compat="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Dev\@socomd_cup_compat\addons"
set modOutput_rhs_compat="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Dev\@socomd_rhs_compat\addons"

start /D %projectDir% makepbo.exe socomd_core %modOutput_core%
start /D %projectDir% makepbo.exe -N -P socomd_asorvs %modOutput_core%
start /D %projectDir% makepbo.exe -N -P socomd_asorgs %modOutput_core%
start /D %projectDir% makepbo.exe -N -P socomd_zeus %modOutput_core%
start /D %projectDir% makepbo.exe -N -P ar_advancedrappelling %modOutput_core%
start /D %projectDir% makepbo.exe -N -P sa_advancedslingloading %modOutput_core%
start /D %projectDir% makepbo.exe -N -P socomd_data %modOutput%
start /D %projectDir% makepbo.exe -N -P socomd_gcam %modOutput%
start /D %projectDir% makepbo.exe socomd_cup_compat %modOutput_cup_compat%
start /D %projectDir% makepbo.exe socomd_rhs_compat %modOutput_rhs_compat%