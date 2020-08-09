:: The build tool crashes my pc for some reason...
set projectDir=P:\SOCOMD\MODS
set modOutput=..\addons\
set modOutput_core=..\addons\
set modOutput_content=..\addons\
set buldParam=  -P -U -N
cd P:\SOCOMD\MODS 
::SOCOMD Core
MakePbo %buldParam% core\socomd_core %modOutput_core%
MakePbo %buldParam% core\socomd_arsenal %modOutput_core%
MakePbo %buldParam% core\socomd_zeus %modOutput_core%

::SOCOMD Core 3rd Party
MakePbo %buldParam% core\3rd_party\socomd_gcam %modOutput_core%
MakePbo %buldParam% core\3rd_party\grad_boc %modOutput_core%
MakePbo %buldParam% core\3rd_party\socomd_asorvs %modOutput_core%
MakePbo %buldParam% core\3rd_party\socomd_asorgs %modOutput_core%
MakePbo %buldParam% core\3rd_party\ar_advancedrappelling %modOutput_core%
MakePbo %buldParam% core\3rd_party\sa_advancedslingloading %modOutput_core%
MakePbo %buldParam% core\3rd_party\vqi_c130 %modOutput_core%
MakePbo %buldParam% core\3rd_party\vqi_halo %modOutput_core%
MakePbo %buldParam% core\3rd_party\socomd_asorgs %modOutput_core%
MakePbo %buldParam% core\3rd_party\ar_advancedrappelling %modOutput_core%
MakePbo %buldParam% core\3rd_party\sa_advancedslingloading %modOutput_core%

::SOCOMD Data
MakePbo %buldParam% data\socomd_data_core %modOutput_core%
MakePbo %buldParam% data\socomd_data_cup %modOutput_content%
MakePbo %buldParam% data\cos_content %modOutput_core%

::SOCOMD Compats
MakePbo %buldParam% compats\socomd_compat_cup %modOutput_content%

::SOCOMD Modsets
MakePbo %buldParam% modsets\socomd_content %modOutput_content%


cd P:\SOCOMD\MODS\tools