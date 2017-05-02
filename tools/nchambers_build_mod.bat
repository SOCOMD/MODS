@echo off
set projectDir="C:\Users\nchambers\projects\SOCOMD"
set toolsDir=%projectDir%\tools
set modOutput="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\MODS_SOCOMD_DEV\@socomd_dev\addons"

start /D %projectDir% makepbo.exe socomd_main %modOutput%
start /D %projectDir% makepbo.exe -P socomd_asorvs %modOutput%
start /D %projectDir% makepbo.exe -P socomd_zeus %modOutput%
start /D %projectDir% makepbo.exe -P ar_advancedrappelling %modOutput%
start /D %projectDir% makepbo.exe -P sa_advancedslingloading %modOutput%

pause