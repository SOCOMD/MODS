socomd_qstore
========

Qstore, SOCOMD's custom kit system

//config.cpp

CfgPatches

//script_component.hpp

Class qstore

//-@socomd\addons\main\script_mod.hpp

Reference to version

//-@socomd\addons\main\script_macros.hpp

Contains all the classes

//script_macros.hpp

class QSTORE_ACTION_GRP_BEGIN
class QSTORE_ACTION_LOADOUT
call socomd_qstore_fnc_SwitchUnitLoadout

//CfgEventHandlers.hpp

XEH_preStart.sqf
    Calls an include to XEH_PREP.hpp - this includes an array of function adds
XEH_preInit.sqf
    //script_component.hpp
    Sets ADDON to false
    //XEH_PREP.hpp
    Sets ADDON to true
