#include "script_component.hpp"
#include "\z\ace\addons\arsenal\defines.hpp"
params ["_player","_loadoutId"];

// clears player's existing arsenal
[_player, true, false] call socomd_arsenal_fnc_removeVirtualItems;
// reset nvg and extras variable for correct arsenal selection
_player setVariable ["socomd_arsenal_nvg","SOCOMD_NVG"];
_player setVariable  ["socomd_arsenal_grenade", "default"];
_player setVariable ["socomd_arsenal_extras","extras_none"];


private _blackList = [];
_blackList append getArray (configFile >> "CfgQstoreBlackList" >> "blacklist");
_blackList append getArray (configFile >> "CfgQstoreBlackList" >> "socomd");
// Common loudout options between classes
private _worldType = worldName call FUNC(GetWorldType);
private _uniforms = [];
if( _worldType == 'Snow' ) then {
    _uniforms append getArray (configFile >> "CfgArsenalOptions" >> _loadoutId >> "uniforms" >> "snow_uniforms");
} else {  
if( _worldType == 'Arid' ) then {
    _uniforms append getArray (configFile >> "CfgArsenalOptions" >> _loadoutId >> "uniforms" >> "arid_uniforms"); 
} else {
    _uniforms append getArray (configFile >> "CfgArsenalOptions" >> _loadoutId >> "uniforms" >> "temperate_uniforms"); 
};
};
private _helmets = getArray (configFile >> "CfgArsenalOptions" >> "helmets" >> "helmets");
// accesories and facewear blacklist check
private _configClasses = "(getNumber (_x >> 'scope') >= 2)" configClasses (configFile >> "CfgGlasses");
private _facewear = [];
{
    if !(configName _x in _blackList) then
    {
        _facewear pushBack (configName _x);
    };
} forEach _configClasses;

// 101, muzzle devices
// 201, optics
// 301, laser/flashlights
// 302, items & bipods, bipods must be seperated by config attribute "hasBipod"
private _accessories = [];
private _configAcc = "getNumber (_x >> 'ItemInfo' >> 'type') in [101,301] and getNumber (_x >> 'scope') == 2" configClasses (configFile >> "CfgWeapons");
private _configBipods = "getNumber (_x >> 'ItemInfo' >> 'type') in [302] and getNumber (_x >> 'ItemInfo' >> 'hasBipod') == 1 and getNumber (_x >> 'scope') == 2" configClasses (configFile >> "CfgWeapons");
private _configOptics = "getNumber (_x >> 'ItemInfo' >> 'type') in [201] and getNumber (_x >> 'scope') == 2" configClasses (configFile >> "CfgWeapons");
// filters optics, skips if recon class
{
    _scopeFOVBlacklisted =  [configName _x, []] call FUNC(CheckScopeFOV);
    if( _scopeFOVBlacklisted == 0  && !(configName _x in _blackList )) then {
        _accessories pushBack (configName _x);
    };
} forEach _configOptics;
// filters lasers and muzzle devices
{
    if !(configName _x in _blackList) then
    {
        _accessories pushBack (configName _x);
    };
} forEach _configAcc;
// filters bipods
{
    if !(configName _x in _blackList) then
    {
        _accessories pushBack (configName _x);
    };
} forEach _configBipods;


// ensuring that all inventory items are added to the white list so kits can be saved
private _loadOut = [];
_loadOut append _helmets;
_loadOut append _facewear;
_loadOut append _uniforms;
_loadOut append _bags;
_loadOut append _secondaries;
_loadOut append uniformItems _player;
_loadOut append vestItems _player;
_loadOut append backpackItems _player;
_loadOut append assignedItems _player;
[_player, _loadOut, false] call socomd_arsenal_fnc_addVirtualItems;

// defining arsenal tabs to always be disabled, will never need them

// Adds new arsenal items to player
[_player, _accessories, false] call socomd_arsenal_fnc_addVirtualItems;

// Go through CfgArsenalOptions.hpp for the kit, add in all unique gear
private _sr_array = [];
_sr_array append getArray (configFile >> "CfgArsenalOptions" >> _loadoutId >> "weapons");
_sr_array append getArray (configFile >> "CfgArsenalOptions" >> _loadoutId >> "vests");
_sr_array append getArray (configFile >> "CfgArsenalOptions" >> _loadoutId >> "bags");
_sr_array append getArray (configFile >> "CfgArsenalOptions" >> _loadoutId >> "grenades");
if (isArray(configFile >> "CfgArsenalOptions" >> _loadoutId >> "extraUniforms")) then {
    _sr_array append getArray (configFile >> "CfgArsenalOptions" >> _loadoutId >> "extraUniforms");
};
if (isArray(configFile >> "CfgArsenalOptions" >> _loadoutId >> "arsenalExtras")) then {
    _sr_array append getArray (configFile >> "CfgArsenalOptions" >> _loadoutId >> "arsenalExtras");
};

if (isArray(configFile >> "CfgArsenalOptions" >> _loadoutId >> "helmets")) then {
    [_player, _helmets, false] call socomd_arsenal_fnc_removeVirtualItems;
    _sr_array append getArray (configFile >> "CfgArsenalOptions" >> _loadoutId >> "helmets");
};

[_player, _sr_array, false] call socomd_arsenal_fnc_addVirtualItems;

// Arsenal Event Handlers
// 0. hides unwanted tabs on open
// 1. hides right tabs for uniform/vest/backpack to ensure gear uniformity
// 2. gives unit their ammo back
// removes old event handlers if exist
private _isPrevInit = _player getVariable ["SOCOMD_eh_ids","failed"];

if ( typeName _isPrevInit == "ARRAY") then {
    ["socomd_arsenal_displayOpened", _isPrevInit select 0] call CBA_fnc_removeEventHandler;
    ["socomd_arsenal_rightPanelFilled", _isPrevInit select 1] call CBA_fnc_removeEventHandler;
    ["socomd_arsenal_displayClosed", _isPrevInit select 2] call CBA_fnc_removeEventHandler;
};

private _openedEh = ["socomd_arsenal_displayOpened", {
    ACE_Player setVariable ["SOCOMD_prev_primary", primaryWeapon ACE_Player]
    params ["_display"];
    _loadoutIdEH = ACE_Player getVariable ["SOCOMD_LOADOUTID","failed"];
    
    _disabledButtons = [
        2022,   // IDC_buttonMap 
        2024,   // IDC_buttonGPS 
        2026,   // IDC_buttonRadio 
        2029,   // IDC_buttonCompass 
        2031,   // IDC_buttonWatch 
        2033,   // IDC_buttonFace 
        2035,   // IDC_buttonVoice 
        3002,   // IDC_buttonCurrentMag
        3004,   // IDC_buttonCurrentMag2
        1004,   // IDC_buttonExport 
        1005,   // IDC_buttonImport 
        307,    // IDC_buttonDelete 
        30,     // IDC_buttonMag
        32,     // IDC_buttonMagALL
        34,     // IDC_buttonThrow
        36,     // IDC_buttonPut
        38,     // IDC_buttonMisc
        39,     // IDC_buttonRemoveAllSelected
        40      // IDC_buttonRemoveAll
        // refrence IDC for adding back in
        // 2018,   // IDC_buttonNVG
        // 2020,   // IDC_buttonBinoculars <- binocular tab repurposed as grenades tab
        // 1003,   // IDC_buttonLoadouts 
    ];

    if( isArray(configFile >> "CfgArsenalOptions" >> _loadoutIdEH >> "arsenalExtras") ) then  {
        _disabledButtons deleteAt 0; // add back in map tab, repurposed as extra ammo tab for rifleman
    };
    
    if( isNumber(configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutIdEH >> "noGrenadeOptions")) then {
        _disabledButtons pushBack 2020; // logistic roles don't need grenade options
    };
    {
        _ctrl = _display displayctrl _x;
        _ctrl ctrlEnable false;
        _ctrl ctrlSetFade 1;
        _ctrl ctrlCommit 0;
        
    } forEach _disabledButtons;
    
}] call CBA_fnc_addEventHandler;
private _removedRight = ["socomd_arsenal_rightPanelFilled", { 
    _currentTab = currentNamespace getVariable "socomd_arsenal_currentLeftPanel";
    switch(_currentTab) do {
        case 2010 :{ // uniform panel
           TOGGLE_RIGHT_PANEL_HIDE
        };
        case 2012 :{ // vest panel
           TOGGLE_RIGHT_PANEL_HIDE
        };
        case 2014 :{ // backpack panel
            TOGGLE_RIGHT_PANEL_HIDE
        };
    };
}] call CBA_fnc_addEventHandler;
private _closedEh = ["socomd_arsenal_displayClosed", {
    _extraItems = ACE_Player getVariable ["socomd_arsenal_extras","none"];
    _grenadesOption = ACE_Player getVariable  ["socomd_arsenal_grenade", "default"];
    // for some reason using _player inside here doesnt work. Done in this order so launcher ammo isn't deleted
    [ACE_Player] call FUNC(removeAmmo);
    [ACE_Player, primaryWeapon ACE_Player] call FUNC(addPrimaryAmmo);
    [ACE_Player, secondaryWeapon ACE_Player] call FUNC(addSecondaryAmmo);
    [ACE_Player, handgunWeapon ACE_Player] call FUNC(addHandgunAmmo);
    [ACE_Player] call FUNC(cleanUpMagazines);
    [ACE_Player] call FUNC(addInventoryWeaponAmmo);
    if(_grenadesOption != "default") then {
        [ACE_Player,_grenadesOption] call socomd_arsenal_fnc_addSelection;
    } else {
        [ACE_Player] call FUNC(addGrenades);
    };
    // [player] call SOCOMD_fnc_RefreshInsignia;
    if( _extraItems !=  "none" ) then  {
        [ACE_Player, _extraItems] call socomd_arsenal_fnc_addSelection;
    };
}] call CBA_fnc_addEventHandler;
_player setVariable ["SOCOMD_eh_ids", [_openedEh, _removedRight, _closedEh]];