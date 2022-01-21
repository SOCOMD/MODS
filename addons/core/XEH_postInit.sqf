#include "script_component.hpp"

if (!hasinterface) exitwith {
    call FUNC(CommonInitServer)
};
// overrides to get our functions 
 
 [{
    private _entry = ["cTab", "ifSecondary"] call CBA_fnc_getKeybind;
    !isNil "_entry"
    },{
    ["cTab","ifSecondary",["Toggle Secondary Interface","Open cTab device in interactable mode"],{call cTab_fnc_onIfSecondaryPressed; call FUNC(Action_ToggleAndroid)},"",[cTab_key_if_secondary_scancode,cTab_key_if_secondary_modifiers],false] call cba_fnc_addKeybind;
 },[]] call CBA_fnc_waitUntilAndExecute;
