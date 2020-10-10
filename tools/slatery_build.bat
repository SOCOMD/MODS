:: The build tool crashes my pc for some reason...
set projectDir=P:\SOCOMD\MODS
set modOutput=..\addons\
set modOutput_core=..\addons\
set modOutput_content=..\addons\
set buldParam=  -P -U -N
cd P:\SOCOMD\MODS 
::SOCOMD Core
MakePbo %buldParam% core\socomd_core %modOutput_core%
REM MakePbo %buldParam% core\socomd_arsenal %modOutput_core%
REM MakePbo %buldParam% core\socomd_zeus %modOutput_core%

REM ::SOCOMD Core 3rd Party
REM MakePbo %buldParam% core\3rd_party\acwp_backpack %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\socomd_gcam %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\grad_boc %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\socomd_asorvs %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\socomd_asorgs %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\ar_advancedrappelling %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\sa_advancedslingloading %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\vqi_c130 %modOutput_core%
MakePbo %buldParam% core\3rd_party\vqi_halo %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\socomd_asorgs %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\ar_advancedrappelling %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\sa_advancedslingloading %modOutput_core%

REM ::SOCOMD Data
REM MakePbo %buldParam% data\socomd_data_core %modOutput_core%
REM MakePbo %buldParam% data\socomd_data_cup %modOutput_content%
REM MakePbo %buldParam% data\cos_content %modOutput_core%

REM ::SOCOMD Compats
REM MakePbo %buldParam% compats\socomd_compat_cup %modOutput_content%

REM ::SOCOMD Modsets
MakePbo %buldParam% modsets\socomd_content %modOutput_content%

:: NGoC
MakePbo %buldParam% rgoc %modOutput_content%
MakePbo %buldParam% rgoc_cup_compat %modOutput_content%
MakePbo %buldParam% rgoc_rhsafrf_compat %modOutput_content%
MakePbo %buldParam% rgoc_rhssaf_compat %modOutput_content%
MakePbo %buldParam% rgoc_rhsgref_compat %modOutput_content%
MakePbo %buldParam% rgoc_rhsusaf_compat %modOutput_content%

cd P:\SOCOMD\MODS\tools