@echo off
set projectDir="../"
set toolsDir=%projectDir%\tools
set modOutput="../../ARMA Addons Dev/SOCOMD_Dev/@socomd_dev/addons"

start /D %projectDir% makepbo.exe -N -P socomd_main %modOutput%
start /D %projectDir% makepbo.exe -N -P socomd_gcam %modOutput%
start /D %projectDir% makepbo.exe -N -P socomd_asorvs %modOutput%
start /D %projectDir% makepbo.exe -N -P socomd_asorgs %modOutput%
start /D %projectDir% makepbo.exe -N -P socomd_zeus %modOutput%
start /D %projectDir% makepbo.exe -N -P ar_advancedrappelling %modOutput%
start /D %projectDir% makepbo.exe -N -P sa_advancedslingloading %modOutput%