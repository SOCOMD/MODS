set projectDir="C:\Users\nchambers\projects\SOCOMD"
set output="C:\Program Files (x86)\Steam\steamapps\common\Arma 3\MODS_SOCOMD_DEV\SOCOMD_Core\@socomd\addons"
start /D %projectDir% makepbo.exe socomd_main %output%
start /D %projectDir% makepbo.exe -P socomd_zeus %output%
start /D %projectDir% makepbo.exe -P ar_advancedrappelling %output%
start /D %projectDir% makepbo.exe -P sa_advancedslingloading %output%