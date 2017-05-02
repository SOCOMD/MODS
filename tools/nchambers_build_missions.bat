@echo off
set projectDir="C:\Users\nchambers\projects\SOCOMD"
set toolsDir=%projectDir%\tools
set modOutput="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\MODS_SOCOMD_DEV\@socomd_dev\addons"
set mpMissionOutput="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\MPMissions"
set missionOutput="C:\Users\nchambers\Documents\Arma 3 - Other Profiles\ChambersAUS\missions"

echo ================================================================================
echo Copy SOCOMD Missions to MPMissions
echo ================================================================================
xcopy /S /Y %projectDir%\socomd_missions %mpMissionOutput%

echo ================================================================================
echo Copy SOCOMD Missions to Missions
echo ================================================================================
xcopy /S /Y %projectDir%\socomd_missions %missionOutput%
xcopy /Y %toolsDir%\nchambers_missionSync.bat %missionOutput%

pause