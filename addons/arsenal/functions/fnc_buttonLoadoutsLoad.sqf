#include "script_component.hpp"
#include "..\defines.hpp"
/*
 * Author: Alganthe
 * Load selected loadout.
 *
 * Arguments:
 * 0: Arsenal display <DISPLAY>
 * 1: Button control <CONTROL>
 *
 * Return Value:
 * None
 *
 * Public: No
*/

params ["_display", "_control"];

if !(ctrlEnabled _control) exitWith {};

private _contentPanelCtrl = _display displayCtrl IDC_contentPanel;
private _curSel = lnbCurSelRow _contentPanelCtrl;
private _loadoutName = _contentPanelCtrl lnbText [_curSel, 1];

private _loadout = switch GVAR(currentLoadoutsTab) do {

    case IDC_buttonMyLoadouts;
    case IDC_buttonDefaultLoadouts:{
        (_contentPanelCtrl getVariable _loadoutName + str GVAR(currentLoadoutsTab)) select 0
    };

    case IDC_buttonSharedLoadouts:{
        (GVAR(sharedLoadoutsNamespace) getVariable ((_contentPanelCtrl lnbText [_curSel, 0]) + (_contentPanelCtrl lnbText [_curSel, 1]))) select 2
    };
};
// replace saved uniform with current one if not 
_uniformLoadout = _loadout select 3;
_accessories = _loadout select 9;
_item = _uniformLoadout select 0;
_selectedUniform = _item splitString "_"; 
if(!(CHECK_CONTAINER) && ((_selectedUniform select 0) != "USP")) then { // make sure old saved loadouts use new uniforms
    _uniformLoadout set [0, uniform GVAR(center)]; 
};
if ((_selectedUniform select 0) == "USP") then {
    _worldType = worldName call EFUNC(qstore,getWorldType);
    _desiredCamo = "AMCU"; // default and fallback
    switch (_worldType) do {
        case "Woodland";
        case "Snow" : {_desiredCamo = "AMCU";};
        case "Arid" : {_desiredCamo = "AMCU";};
    };
    _camos = ["AOR1","AOR2","BLK","KHK","M81","MC","MB","MCD","MCT","RGR","GRY","AMCU","GRN"];
    _camoPos = (count _selectedUniform) - 2;
    _diffPants = false;
    if((_selectedUniform select (_camoPos - 1)) in _camos ) then { 
        _camoPos = _camoPos - 1; 
        _diffPants = true;
    };
    if(_desiredCamo == "AMCU" && !_diffPants && ((_selectedUniform select 1) != "G3C" && (_selectedUniform select 1) != "TSHIRT" && (_selectedUniform select 2) == "G3C")) then {
        [_selectedUniform, _camoPos, [_desiredCamo]] call CBA_fnc_insert;
    } else {
         if(_desiredCamo == "MC" && _diffPants && ((_selectedUniform select 1) != "G3C" && (_selectedUniform select 1) != "TSHIRT" && (_selectedUniform select 2) == "G3C")) then {
             _selectedUniform deleteAt _camoPos;
         };
        _selectedUniform set [_camoPos, _desiredCamo]; 
    };
    _finalUniform = _selectedUniform joinString "_";
    _uniformLoadout set [0,_finalUniform]; 
};
    _loadout set [3, _uniformLoadout];
// update ctab items with inventory if they're not already
_ctabItems = ["ItemAndroid","ItemcTab","ItemMicroDAGR"];
_gps = _accessories select 1;
if(_gps in _ctabItems) then {
    _accessories set [1,""];
    _items = _uniformLoadout select 1;
    _items pushBack [_gps,1];
    _uniformLoadout set [1,_items];
};
GVAR(center) setUnitLoadout [_loadout, true];
{
    _hasItem = [GVAR(center), _x] call CBA_fnc_removeItem;
    if(_hasItem) then {
        GVAR(center) addItemToUniform  _x;
    };
} forEach _ctabItems;

GVAR(currentItems) = ["", "", "", "", "", "", "", "", "", "", "", "", "", "", "", [], [], [], [], [], []];
for "_index" from 0 to 15 do {
    switch (_index) do {
        case 0;
        case 1;
        case 2:{
            GVAR(currentItems) set [_index, ((LIST_DEFAULTS select 0) select _index)];
        };
        case 3;
        case 4;
        case 5;
        case 6;
        case 7;
        case 8;
        case 9: {
            GVAR(currentItems) set [_index, (LIST_DEFAULTS select _index) select 0];

        };
        case 10: {
            {(GVAR(currentItems) select 15) pushBack _x} forEach (uniformItems GVAR(center));
        };
        case 11: {
            {(GVAR(currentItems) select 16) pushBack _x} forEach (vestItems GVAR(center));
        };
        case 12: {
            {(GVAR(currentItems) select 17) pushBack _x} forEach (backpackItems GVAR(center));
        };
        case 13: {
            GVAR(currentItems) set [18, (primaryWeaponItems GVAR(center)) + (primaryWeaponMagazine GVAR(center))];
        };
        case 14: {
            GVAR(currentItems) set [19, (secondaryWeaponItems GVAR(center)) + (secondaryWeaponMagazine GVAR(center))];
        };
        case 15: {
            GVAR(currentItems) set [20, (handgunItems GVAR(center)) + (handgunMagazine GVAR(center))];
        };
    };
};
{
    private _simulationType = getText (configFile >> "CfgWeapons" >> _x >> "simulation");

    if (_simulationType != "NVGoggles") then {
        if (_simulationType == "ItemGps" || _simulationType == "Weapon") then {
            GVAR(currentItems) set [14, _x];
        } else {

            private _index = 10 + (["itemmap", "itemcompass", "itemradio", "itemwatch"] find (tolower _simulationType));
            GVAR(currentItems) set [_index, _x];
        };
    };
} forEach (assignedItems GVAR(center));

call FUNC(updateUniqueItemsList);

// Reapply insignia
[GVAR(center), ""] call bis_fnc_setUnitInsignia;
[GVAR(center), GVAR(currentInsignia)] call bis_fnc_setUnitInsignia;

[(findDisplay IDD_socomd_arsenal), [localize LSTRING(loadoutLoaded), _loadoutName] joinString " "] call FUNC(message);

[QGVAR(onLoadoutLoad), [_loadout, _loadoutName]] call CBA_fnc_localEvent;
