@echo off
set projectDir="C:\git\socomd"
set toolsDir=%projectDir%\tools
set modOutput_core="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Mods\SOCOMD_Core\@socomd_core\addons"
set modOutput_main="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Mods\SOCOMD_Core\@socomd_main\addons"

start /D %projectDir% makepbo.exe -N -P socomd_core %modOutput_core%
start /D %projectDir% makepbo.exe -N -P socomd_main %modOutput_main%
# start /D %projectDir% makepbo.exe -N -P socomd_gcam %modOutput%
# start /D %projectDir% makepbo.exe -N -P socomd_asorvs %modOutput%
# start /D %projectDir% makepbo.exe -N -P socomd_asorgs %modOutput%
# start /D %projectDir% makepbo.exe -N -P socomd_zeus %modOutput%
# start /D %projectDir% makepbo.exe -N -P socomd_data %modOutput%
# start /D %projectDir% makepbo.exe -N -P ar_advancedrappelling %modOutput%
# start /D %projectDir% makepbo.exe -N -P sa_advancedslingloading %modOutput%