@echo off
buildtool -x C:\DePboTools\bin\MakePbo.exe -c ./buildtool.config.yaml -d ../ -o "C:\Program Files (x86)\Steam\steamapps\common\Arma 3"

:: ingame script to reload configs
:: reload cup compat
:: diag_mergeConfigFile ["C:\git\socomd\mods\compats\socomd_compat_cup\config.cpp"];diag_resetShapes;

:: reload core
:: diag_mergeConfigFile ["C:\git\socomd\mods\core\socomd_core\config.cpp"];diag_resetShapes;