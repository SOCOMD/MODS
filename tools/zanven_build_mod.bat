@echo off 
set projectDir="C:\git\socomd\mods"
set toolsDir=%projectDir%\tools
set modOutput="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\MODS_SOCOMD_DEV\@socomd_dev\addons"
set coreOutput="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Core\@socomd\addons"
set mainOutput="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Core\@socomd_main\addons"

start /D %projectDir% makepbo.exe -N socomd_core %coreOutput%
start /D %projectDir% makepbo.exe -N socomd_main %mainOutput%
# start /D %projectDir% makepbo.exe socomd_gcam %modOutput%
# start /D %projectDir% makepbo.exe socomd_asorvs %modOutput%
# start /D %projectDir% makepbo.exe socomd_asorgs %modOutput%
# start /D %projectDir% makepbo.exe socomd_zeus %modOutput%
# start /D %projectDir% makepbo.exe socomd_data_cup %modOutput%
# start /D %projectDir% makepbo.exe socomd_data_core %modOutput%
# start /D %projectDir% makepbo.exe ar_advancedrappelling %modOutput%
# start /D %projectDir% makepbo.exe sa_advancedslingloading %modOutput%