:: The build tool crashes my pc for some reason...
set projectDir=P:\SOCOMD\MODS
set modOutput=..\release\
set modOutput_core=..\release\
set modOutput_content=..\release\
set buldParam=  -P -U -N
cd P:\SOCOMD\MODS 
REM ::SOCOMD Core
REM MakePbo %buldParam% core\socomd_core %modOutput_core%
REM MakePbo %buldParam% core\socomd_zeus %modOutput_core%

REM ::SOCOMD Core 3rd Party
REM MakePbo %buldParam% core\3rd_party\socomd_gcam %modOutput_core%
MakePbo %buldParam% core\3rd_party\grad_boc %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\socomd_asorvs %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\socomd_asorgs %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\ar_advancedrappelling %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\sa_advancedslingloading %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\vqi_c130 %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\vqi_halo %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\socomd_asorgs %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\ar_advancedrappelling %modOutput_core%
REM MakePbo %buldParam% core\3rd_party\sa_advancedslingloading %modOutput_core%

REM ::SOCOMD Data
REM MakePbo %buldParam% data\socomd_data_core %modOutput_core%
REM MakePbo %buldParam% data\socomd_data_cup %modOutput_content%
REM MakePbo %buldParam% data\cos_content %modOutput_core%

REM ::SOCOMD Compats
REM MakePbo %buldParam% compats\socomd_compat_cup %modOutput_content%
REM MakePbo %buldParam% compats\socomd_compat_rhs %modOutput%

REM ::SOCOMD Modsets
REM MakePbo %buldParam% modsets\socomd_content %modOutput_content%


cd P:\SOCOMD\MODS\tools