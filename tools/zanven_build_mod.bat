@echo off
set projectDir="C:\git\socomd\mods"
set toolsDir=%projectDir%\tools
set modOutput="C:\git\socomd\mods\builds"
set modOutput_core="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Core\@socomd_core\addons"
set modOutput_content="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_Core\@socomd_content\addons"
set modOutput_160th="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\SOCOMD_160th\@socomd_160th\addons"
set buldParam=-N -P -W

::SOCOMD Core
start /D %projectDir% makepbo.exe %buldParam% core\socomd_core %modOutput_core%
start /D %projectDir% makepbo.exe %buldParam% core\socomd_zeus %modOutput_core%

::SOCOMD Core 3rd Party
start /D %projectDir% makepbo.exe %buldParam% core\3rd_party\socomd_gcam %modOutput_core%
start /D %projectDir% makepbo.exe %buldParam% core\3rd_party\socomd_asorvs %modOutput_core%
start /D %projectDir% makepbo.exe %buldParam% core\3rd_party\socomd_asorgs %modOutput_core%
start /D %projectDir% makepbo.exe %buldParam% core\3rd_party\ar_advancedrappelling %modOutput_core%
start /D %projectDir% makepbo.exe %buldParam% core\3rd_party\sa_advancedslingloading %modOutput_core%

::SOCOMD Data
start /D %projectDir% makepbo.exe %buldParam% data\socomd_data_core %modOutput_core%
start /D %projectDir% makepbo.exe %buldParam% data\socomd_data_cup %modOutput_content%

::SOCOMD Compats
start /D %projectDir% makepbo.exe %buldParam% compats\socomd_compat_cup %modOutput_content%
start /D %projectDir% makepbo.exe %buldParam% compats\socomd_compat_rhs %modOutput%

::SOCOMD Modsets
start /D %projectDir% makepbo.exe %buldParam% modsets\socomd_content %modOutput_content%
start /D %projectDir% makepbo.exe %buldParam% modsets\socomd_160th %modOutput_160th%


:: ingame script to reload configs
:: reload cup compat
:: diag_mergeConfigFile ["C:\git\socomd\mods\compats\socomd_compat_cup\config.cpp"];diag_resetShapes;

:: reload core
:: diag_mergeConfigFile ["C:\git\socomd\mods\core\socomd_core\config.cpp"];diag_resetShapes;