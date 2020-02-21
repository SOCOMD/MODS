@echo off
set projectDir="../"
set toolsDir=%projectDir%\tools
set output="C:\Program Files\Steam\steamapps\common\Arma 3\!Workshop\@socomd_dev\addons"

start /D %projectDir% makepbo.exe -N -P socomd_content %output%
start /D %projectDir% makepbo.exe -N -P socomd_gcam %output%
start /D %projectDir% makepbo.exe -N -P socomd_asorvs %output%
start /D %projectDir% makepbo.exe -N -P socomd_asorgs %output%
start /D %projectDir% makepbo.exe -N -P socomd_zeus %output%
start /D %projectDir% makepbo.exe -N -P socomd_data %modOutput%
start /D %projectDir% makepbo.exe -N -P ar_advancedrappelling %output%
start /D %projectDir% makepbo.exe -N -P sa_advancedslingloading %output%