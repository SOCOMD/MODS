@REM :: The build tool crashes my pc for some reason...
set projectDir=P:\
set modOutput=P:\SOCOMD\addons\
set modOutput_core=P:\SOCOMD\addons\
set modOutput_content=P:\SOCOMD\addons\
set buldParam=-P 
cd P:\SOCOMD\MODS 
@REM @REM ::SOCOMD Core
@REM MakePbo %buldParam% %projectDir%socomd_core %modOutput_core%
MakePbo %buldParam% %projectDir%socomd_medical %modOutput_core%
@REM MakePbo %buldParam% %projectDir%socomd_zeus %modOutput_core%

@REM ::SOCOMD Core 3rd Party
@REM MakePbo %buldParam% %projectDir%acwp_backpack %modOutput_core%
@REM MakePbo %buldParam% %projectDir%socomd_gcam %modOutput_core%
@REM MakePbo %buldParam% %projectDir%grad_boc %modOutput_core%
@REM MakePbo %buldParam% %projectDir%socomd_asorvs %modOutput_core%
@REM MakePbo %buldParam% %projectDir%socomd_asorgs %modOutput_core%
@REM MakePbo %buldParam% %projectDir%ar_advancedrappelling %modOutput_core%
@REM MakePbo %buldParam% %projectDir%sa_advancedslingloading %modOutput_core%
@REM MakePbo %buldParam% %projectDir%vqi_c130 %modOutput_core%
@REM MakePbo %buldParam% %projectDir%vqi_halo %modOutput_core%
@REM MakePbo %buldParam% %projectDir%socomd_asorgs %modOutput_core%
@REM MakePbo %buldParam% %projectDir%ar_advancedrappelling %modOutput_core%
@REM MakePbo %buldParam% %projectDir%sa_advancedslingloading %modOutput_core%
@REM MakePbo %buldParam% %projectDir%ATM_airdrop %modOutput_core%


@REM REM ::SOCOMD Data
@REM MakePbo %buldParam% %projectDir%socomd_data_core %modOutput_core%
@REM MakePbo %buldParam% %projectDir%socomd_data_cup %modOutput_content%
@REM MakePbo %buldParam% %projectDir%cos_content %modOutput_core%
@REM MakePbo %buldParam% %projectDir%socomd_compat_usp %modOutput_content%
@REM MakePbo %buldParam% %projectDir%socomd_compat_cup %modOutput_content%
@REM MakePbo %buldParam% %projectDir%socomd_compat_h60 %modOutput_content%
@REM MakePbo %buldParam% %projectDir%socomd_content %modOutput_content%

@REM custom thingos

@REM MakePbo %buldParam% %projectDir%usp_interactions_uniforms %modOutput_content%



cd P:\SOCOMD\MODS\tools