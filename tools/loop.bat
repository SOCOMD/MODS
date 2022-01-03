@echo off 

set WORKINGDIR = P:\z\socomd\include

for /f  %%a in (list.txt) do (
call :Sub %%~pa %%~nxa
@REM ECHO filename=%%~na
@REM md "P:\%%~a"
)
:Sub
set path=%~1
set file=%~2
set path=%path:\z\socomd\tools\=P:\z\socomd\include\%
set file=%file:p3d=p3d%
@REM set PATH=%PATH%;%path%


md %path%
ECHO. >> %path%%file%
echo %PATH%
echo %file%