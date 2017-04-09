@echo off
set projectDir="C:\Users\nchambers\projects\SOCOMD"
set missionOutput="C:\Users\nchambers\Documents\Arma 3 - Other Profiles\ChambersAUS\missions"

echo ================================================================================
echo Copy Editor Missions To Repo
echo ================================================================================
xcopy /S /Y  %missionOutput%\fobs %projectDir%\socomd_missions\fobs
xcopy /S /Y  %missionOutput%\missions %projectDir%\socomd_missions\missions

pause