@echo off
set projectDir="C:\Users\nchambers\projects\SOCOMD\mods"
set toolsDir=%projectDir%\tools
set modOutput="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Mods\SOCOMD_Dev\@socomd_core\addons"

start /D %projectDir% makepbo.exe -N -P socomd_main %modOutput%
start /D %projectDir% makepbo.exe -N -P socomd_gcam %modOutput%
start /D %projectDir% makepbo.exe -N -P socomd_asorvs %modOutput%
start /D %projectDir% makepbo.exe -N -P socomd_asorgs %modOutput%
start /D %projectDir% makepbo.exe -N -P socomd_zeus %modOutput%
start /D %projectDir% makepbo.exe -N -P socomd_data %modOutput%
start /D %projectDir% makepbo.exe -N -P ar_advancedrappelling %modOutput%
start /D %projectDir% makepbo.exe -N -P sa_advancedslingloading %modOutput%