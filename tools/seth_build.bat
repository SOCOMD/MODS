set projectDir="C:\Users\seth\Documents\GitHub\SOCOMD"
set output="C:\SOCOMD\@socomd_dev\addons"
start /D %projectDir% makepbo.exe socomd_main %output%
start /D %projectDir% makepbo.exe -NP socomd_asorvs %output%
start /D %projectDir% makepbo.exe -NP socomd_zeus %output%
start /D %projectDir% makepbo.exe -NP ar_advancedrappelling %output%
start /D %projectDir% makepbo.exe -NP sa_advancedslingloading %output%