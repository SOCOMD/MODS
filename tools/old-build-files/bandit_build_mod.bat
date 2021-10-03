:: The build tool crashes my pc for some reason...
set projectDir=A:\J4\ModsClone 
set modOutput=..\local testing
set modOutput_core=..\local testing
set modOutput_content=..\local testing
set buldParam=  -P -U -N
cd A:\J4\ModsClone 
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
cd A:\J4\ModsClone\tools