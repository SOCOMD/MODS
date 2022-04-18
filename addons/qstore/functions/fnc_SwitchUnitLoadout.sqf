#include "script_component.hpp"
params ["_player","_loadoutId"];

_unitConfig = (missionConfigFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId);
if(isNull _unitConfig) then {
    _unitConfig = (configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId);
};

if(isNull _unitConfig) exitWith { };

_player setVariable ["SOCOMD_LOADOUTID", _loadoutId];

removeUniform _player;
removeVest _player;
removeBackpack _player;

_unitLoadout = getUnitLoadout _player;

//Primary
_primary = getText (_unitConfig >> "primary");
_primaryLoadout = [_primary, "", "", "", [], [], ""];
_unitLoadout set [0, _primaryLoadout];

//Secondary
_secondary = getText (_unitConfig >> "secondary");
_secondaryLoadout = [_secondary, "", "", "", [], [], ""];

_secondaryMagazine = getText (_unitConfig >> "secondaryMagazine");
if(_secondaryMagazine isKindOf ["CA_Magazine", configFile >> "CfgMagazines"]) then
{
  _secondaryLoadout set [4, [_secondaryMagazine, 1]];
};
_unitLoadout set [1, _secondaryLoadout];

//Handgun
_handgun = getText (_unitConfig >> "handgun");
_handgunLoadout = [_handgun, "", "", "", [], [], ""];

_handgunMagazine = getText (_unitConfig >> "handgunMagazine");
if(_handgunMagazine isKindOf ["CA_Magazine", configFile >> "CfgMagazines"]) then
{
    _magazineCapacity = getNumber (configFile >> "CfgMagazines" >> _handgunMagazine >> "count");
    _handgunLoadout set [4, [_handgunMagazine, _magazineCapacity]];
};

_unitLoadout set [2, _handgunLoadout];

//Uniform
_uniformConfig = (_unitConfig >> "Uniform");
_uniformLoadout = _unitLoadout select 3;
if(not isNull _uniformConfig) then
{
    _uniformType = call FUNC(GetWorldUniform);
    _loadoutUniformType = getText (_uniformConfig >> "type");
    if(!(_loadoutUniformType == "") && (_uniformType == "")) then {
        _uniformType = _loadoutUniformType;
    };

    _uniformLoadout set [0, _uniformType];

    _uniformInventoryConfig = (_uniformConfig >> "Inventory");
    _uniformInventoryLoadout = [];

    if(not isNull _uniformInventoryConfig) then
    {
        for "_i" from 0 to (count _uniformInventoryConfig) - 1 do
        {
            _loadoutItem = _uniformInventoryConfig select _i;
            _type = getText (_loadoutItem >> "type");
            _count = getNumber (_loadoutItem >> "count");
            if(_type isKindOf ["CA_Magazine", configFile >> "CfgMagazines"]) then
            {
                _magazineCapacity = getNumber (configFile >> "CfgMagazines" >> _type >> "count");
                _uniformInventoryLoadout = _uniformInventoryLoadout + [[_type, _count, _magazineCapacity]];
            }
            else
            {
                _uniformInventoryLoadout = _uniformInventoryLoadout + [[_type, _count]];
            };
        };
    };
    _uniformLoadout set [1, _uniformInventoryLoadout];
};
_unitLoadout set [3, _uniformLoadout];

//Vest
_vestConfig = (_unitConfig >> "Vest");
_vestLoadout = _unitLoadout select 4;

if(not isNull _vestConfig) then
{
    _vestType = getText (_vestConfig >> "type");
    _vestLoadout set [0, _vestType];

    _vestInventoryConfig = (_vestConfig >> "Inventory");
    _vestInventoryLoadout = [];

    if(not isNull _vestInventoryConfig) then
    {
        for "_i" from 0 to (count _vestInventoryConfig) - 1 do
        {
            _loadoutItem = _vestInventoryConfig select _i;
            _type = getText (_loadoutItem >> "type");
            _count = getNumber (_loadoutItem >> "count");
            if(_type isKindOf ["CA_Magazine", configFile >> "CfgMagazines"]) then
            {
                _magazineCapacity = getNumber (configFile >> "CfgMagazines" >> _type >> "count");
                _vestInventoryLoadout = _vestInventoryLoadout + [[_type, _count, _magazineCapacity]];
            }
            else
            {
                _vestInventoryLoadout = _vestInventoryLoadout + [[_type, _count]];
            };
        };
    };
    _vestLoadout set [1, _vestInventoryLoadout];
};
_unitLoadout set [4, _vestLoadout];

//Backpack
_backpackConfig = (_unitConfig >> "Backpack");
_backpackLoadout = _unitLoadout select 5;
if(not isNull _backpackConfig) then
{
    _backpackType = getText (_backpackConfig >> "type");
    _backpackLoadout set [0, _backpackType];

    _backpackInventoryConfig = (_backpackConfig >> "Inventory");
    _backpackInventoryLoadout = [];

    if(not isNull _backpackInventoryConfig) then
    {
        for "_i" from 0 to (count _backpackInventoryConfig) - 1 do
        {
            _loadoutItem = _backpackInventoryConfig select _i;
            _type = getText (_loadoutItem >> "type");
            _count = getNumber (_loadoutItem >> "count");

            _added = 0;
            if(_type isKindOf ["CA_Magazine", configFile >> "CfgMagazines"] && _added == 0) then
            {
                _magazineCapacity = getNumber (configFile >> "CfgMagazines" >> _type >> "count");
                _backpackInventoryLoadout = _backpackInventoryLoadout + [[_type, _count, _magazineCapacity]];
                _added = 1;
            };

            if((_type isKindOf ["Rifle", configFile >> "CfgWeapons"] || _type isKindOf ["Pistol", configFile >> "CfgWeapons"] ) && _added == 0) then
            {
                _weapon = [_type, "", "", "", [], [], ""];
                _backpackInventoryLoadout = _backpackInventoryLoadout + [[_weapon, _count]];
                _added = 1;
            };

            if(_added == 0) then
            {
                _backpackInventoryLoadout = _backpackInventoryLoadout + [[_type, _count]];
                _added = 1;
            };
        };
    };
    _backpackLoadout set [1, _backpackInventoryLoadout];
};
_unitLoadout set [5, _backpackLoadout];

//Headgear
_headgear = getText (_unitConfig >> "headgear");
_unitLoadout set [6, _headgear];

//Binocular
_binocularType = getText (_unitConfig >> "binocular");
_binocular = [_binocularType, "", "", "", [], [], ""];
_unitLoadout set [8, _binocular];

//Equipment
_gps = getText (_unitConfig >> "gps");
_equipmentLoadout = _unitLoadout select 9;
_equipmentLoadout set [0, "ItemMap"];
_equipmentLoadout set [1, _gps];
_equipmentLoadout set [2, "ItemRadioAcreFlagged"];
_equipmentLoadout set [3, "ItemCompass"];
_equipmentLoadout set [4, "ItemWatch"];
_equipmentLoadout set [5, ""];
_unitLoadout set [9, _equipmentLoadout];

_player setVariable ["SOCOMD_stashedGear", false];
_player setVariable ["SOCOMD_hasDivingGear", false];
[_player, _unitLoadout] call FUNC(SetUnitLoadout);

ACE_Player setVariable  ["socomd_prev_weapons",[_primary,_secondary,_handgun]];
[_player, _loadoutId,_unitConfig] call FUNC(UpdateArsenalContent);

// Custom Arsenal code
[_player, _player, false] call EFUNC(arsenal,openBox);
