@echo off 
set projectDir="C:\git\socomd\mods"
set toolsDir=%projectDir%\tools
set modOutput="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\MODS_SOCOMD_DEV\@socomd_dev\addons"

start /D %projectDir% makepbo.exe socomd_core %modOutput%
start /D %projectDir% makepbo.exe socomd_main %modOutput%
start /D %projectDir% makepbo.exe socomd_gcam %modOutput%
start /D %projectDir% makepbo.exe socomd_asorvs %modOutput%
start /D %projectDir% makepbo.exe socomd_asorgs %modOutput%
start /D %projectDir% makepbo.exe socomd_zeus %modOutput%
start /D %projectDir% makepbo.exe socomd_data %modOutput%
start /D %projectDir% makepbo.exe ar_advancedrappelling %modOutput%
start /D %projectDir% makepbo.exe sa_advancedslingloading %modOutput%