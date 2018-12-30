@echo off
set projectDir="C:\Users\nchambers\projects\SOCOMD\mods"
set toolsDir=%projectDir%\tools
set modOutput="C:\Users\nchambers\projects\SOCOMD\MODS\builds"
set modOutput_core="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Mods\SOCOMD_Core\@socomd_core\addons"
set modOutput_main="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Mods\SOCOMD_Core\@socomd_content\addons"
set modOutput_jointOp_160th="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Mods\SOCOMD_Extra\@socomd_160th\addons"
set buldParam=-N -P -W

::SOCOMD Core
start /D %projectDir% makepbo.exe %buldParam% socomd_core %modOutput_core%
start /D %projectDir% makepbo.exe %buldParam% socomd_zeus %modOutput_core%

::SOCOMD Data
start /D %projectDir% makepbo.exe %buldParam% socomd_data_core %modOutput_core%
start /D %projectDir% makepbo.exe %buldParam% socomd_data_cup %modOutput_main%

::SOCOMD 3rd Party
start /D %projectDir% makepbo.exe %buldParam% socomd_gcam %modOutput_core%
start /D %projectDir% makepbo.exe %buldParam% socomd_asorvs %modOutput_core%
start /D %projectDir% makepbo.exe %buldParam% socomd_asorgs %modOutput_core%
start /D %projectDir% makepbo.exe %buldParam% ar_advancedrappelling %modOutput_core%
start /D %projectDir% makepbo.exe %buldParam% sa_advancedslingloading %modOutput_core%

::SOCOMD Main
start /D %projectDir% makepbo.exe %buldParam% socomd_content %modOutput_main%

::SOCOMD RHS
start /D %projectDir% makepbo.exe %buldParam% socomd_rhs %modOutput%

::JointOps
start /D %projectDir% makepbo.exe %buldParam% socomd_160th %modOutput_jointOp_160th%