_args = _this;
_player = _this select 0;

_loadoutId = _player getVariable ["SOCOMD_LOADOUTID", ""];
if(_loadoutId == "") exitWith {};

_key = format["SOCOMD_LOADOUT_%1_PREFS", _loadoutId];
_loadoutPrefs = profileNamespace getVariable [_key, []];

if(count _loadoutPrefs != 7) exitWith {};

//Primary
_primaryItem = _loadoutPrefs select 0;
if(count _primaryItem == 7) then {
    [_player, _primaryItem select 0] call SOCOMD_fnc_SwitchUnitPrimaryWeapon;
};

//Secondary
_secondaryItem = _loadoutPrefs select 1;
if(count _secondaryItem == 7) then {
    [_player, _secondaryItem select 0] call SOCOMD_fnc_SwitchUnitSecondaryWeapon;
};

//Vest
_vest = _loadoutPrefs select 3;
[_player, _vest] call SOCOMD_fnc_Action_ReplaceVest;

//Backpack
_backpack = _loadoutPrefs select 4;
[_player, _backpack] call SOCOMD_fnc_Action_ReplaceBackpack;

//Helmet
_helmet = _loadoutPrefs select 5;
[_player, _helmet] call SOCOMD_fnc_Action_ReplaceHeadgear;

//Facewear
_facewear = _loadoutPrefs select 6;
[_player, _facewear] call SOCOMD_fnc_Action_ReplaceFacewear;

_unitLoadout = getUnitLoadout _player;

//Primary Acc
_primaryItem = _loadoutPrefs select 0;
if(count _primaryItem == 7) then {
    _primaryLoadout = _unitLoadout select 0;
    _primaryLoadout set [1, _primaryItem select 1];
    _primaryLoadout set [2, _primaryItem select 2];
    _primaryLoadout set [3, _primaryItem select 3];
    _primaryLoadout set [6, _primaryItem select 6];
    _unitLoadout set [0, _primaryLoadout];
};

//Secondary Acc
_secondaryItem = _loadoutPrefs select 1;
if(count _secondaryItem == 7) then {
    _secondaryLoadout = _unitLoadout select 0;
    _secondaryLoadout set [1, _secondaryItem select 1];
    _secondaryLoadout set [2, _secondaryItem select 2];
    _secondaryLoadout set [3, _secondaryItem select 3];
    _secondaryLoadout set [6, _secondaryItem select 6];
    _unitLoadout set [1, _secondaryLoadout];
};

//Handgun Acc
_handgunItem = _loadoutPrefs select 2;
if(count _handgunItem == 7) then {
    _handgunLoadout = _unitLoadout select 0;
    _handgunLoadout set [1, _handgunItem select 1];
    _handgunLoadout set [2, _handgunItem select 2];
    _handgunLoadout set [3, _handgunItem select 3];
    _handgunLoadout set [6, _handgunItem select 6];
    _unitLoadout set [2, _handgunLoadout];
};

[player, _unitLoadout] call SOCOMD_fnc_SetUnitLoadout;

systemChat "Loadout Loaded";