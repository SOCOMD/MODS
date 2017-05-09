set projectDir="C:\Users\seth\Documents\GitHub\SOCOMD"
set output="C:\SOCOMD\@socomd_dev\addons"
start /D %projectDir% makepbo.exe socomd_main %output%
start /D %projectDir% makepbo.exe -P socomd_asorvs %output%
start /D %projectDir% makepbo.exe -P socomd_zeus %output%
start /D %projectDir% makepbo.exe -P ar_advancedrappelling %output%
start /D %projectDir% makepbo.exe -P sa_advancedslingloading %output%