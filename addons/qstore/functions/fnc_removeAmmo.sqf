#include "script_component.hpp"
params ["_player"];

_player  setVehicleAmmo 0;

/*_currentPrimary = primaryWeapon _player;
_secondary = secondaryWeapon _player;
_handgun = handgunWeapon _player;
_primaryMagazines = ["ACWP_30rnd_556x45_EPR_PMAG","ACWP_30rnd_556x45_M_PMAG","20Rnd_762x51_Mag","SOCOMD_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_150Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch","SOCOMD_Item_Magazine_556x45_30Rnd_Tracer","SOCOMD_Item_Magazine_556x45_30Rnd", "1Rnd_HE_Grenade_shell", "UGL_FlareRed_F", "1Rnd_SmokeRed_Grenade_shell", "ACE_HuntIR_M203","SOCOMD_Item_Magazine_762x51_20Rnd","SOCOMD_Item_Magazine_556x45_200Rnd_Tracer","SOCOMD_Item_Magazine_762x51_100Rnd_Tracer","SOCOMD_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","tf47_m3maaws_HEAT","tf47_m3maaws_HE"];
_primaryMagazines = [];
_primaryMagazines = _primaryMagazines + getArray(configFile >> "CfgWeapons" >> _currentPrimary >> "magazines");
_primaryMagazines = _primaryMagazines + getArray(configFile >> "CfgWeapons" >> _currentPrimary >> "EGLM" >> "magazines");
_primaryMagazineWells = getArray(configFile >> "CfgWeapons" >> _currentPrimary >> "magazineWell");

_secondaryMagazines = getArray(configFile >> "CfgWeapons" >> _secondary >> "magazines");


//Get magazines from magazine wells
{
    _magazineWellConfig = (configFile >> "CfgMagazineWells" >> _x);
    for "_i" from 0 to (count _magazineWellConfig) - 1 do {
        _primaryMagazines = _primaryMagazines + getArray(_magazineWellConfig select _i);
    };
}foreach(_primaryMagazineWells);

//Remove primary magazines from player
{
    _primaryMagazine = _x;
    {
        if(_x isKindOf [_primaryMagazine, configFile >> 'CfgMagazines']) then {
             _player removeMagazines _x;
        };
    }foreach(magazines _player);
}foreach(_primaryMagazines);


//Get magazines from magazine wells
{
    _magazineWellConfig = (configFile >> "CfgMagazineWells" >> _x);
    for "_i" from 0 to (count _magazineWellConfig) - 1 do {
        _secondaryMagazines = _secondaryMagazines + getArray(_magazineWellConfig select _i);
    };
}foreach(_secondaryMagazines);

//Remove secondary magazines from player
{
    _secondaryMagazine = _x;
    {
        if(_x isKindOf [_secondaryMagazine, configFile >> 'CfgMagazines']) then {
             _player removeMagazines _x;
        };
    }foreach(magazines _player);
}foreach(_secondaryMagazines);



_handgunMagazines = ["11Rnd_45ACP_Mag","ACWP_19Rnd_9x21_Mag_glock_sim","ACWP_19Rnd_9x21_Mag_glock","ACWP_13Rnd_9x21_Mag_HP","ACWP_18Rnd_9x21_Mag_USP"];
_handgunMagazines = _handgunMagazines + getArray(configFile >> "CfgWeapons" >> _handgun >> "magazines");
_handgunMagazines = _handgunMagazines + getArray(configFile >> "CfgWeapons" >> _handgun >> "EGLM" >> "magazines");
_primaryMagazineWells = getArray(configFile >> "CfgWeapons" >> _handgun >> "magazineWell");

//Get magazines from magazine wells
{
    _magazineWellConfig = (configFile >> "CfgMagazineWells" >> _x);
    for "_i" from 0 to (count _magazineWellConfig) - 1 do {
        _handgunMagazines = _handgunMagazines + getArray(_magazineWellConfig select _i);
    };
}foreach(_primaryMagazineWells);

//Remove primary magazines from player
{
    _primaryMagazine = _x;
    {
        if(_x isKindOf [_primaryMagazine, configFile >> 'CfgMagazines']) then {
             _player removeMagazines _x;
        };
    }foreach(magazines _player);
}foreach(_handgunMagazines);


//Set Primary Weapon
_unitLoadout = getUnitLoadout _player;

_primaryLoadout = _unitLoadout select 0;
if(count _primaryLoadout <= 0) then {
    _primaryLoadout = [_currentPrimary, "", "", "", [], [], ""];
}
else {
    _primaryLoadout set [0, _currentPrimary];
    _primaryLoadout set [4, []];
    _primaryLoadout set [5, []];
};

_secondaryLoadout = _unitLoadout select 1;
if(count _secondaryLoadout <= 0) then {
    _secondaryLoadout = [_secondary, "", "", "", [], [], ""];
}
else {
    _secondaryLoadout set [0, _secondary];
    
    if(isNumber( _loadoutWeaponConfig >> "startLoaded") && (getNumber( _loadoutWeaponConfig >> "startLoaded") == 1)) then {
        _secondaryLoadout set [4, [((_loadoutMagazines) select 0 ) select 0,1000000]];
    } else {
        _secondaryLoadout set [4, []];
    };
    _secondaryLoadout set [5, []];
};

    _loadoutWeaponConfig = (configFile >> "CfgLoadoutWeapons" >> _handgun);
_loadoutMagazines = getArray (_loadoutWeaponConfig >> "magazines");
_handgunLoadout = _unitLoadout select 2;
if(count _handgunLoadout <= 0) then {
    _handgunLoadout = [_handgun, "", "", "", [((_loadoutMagazines) select 0 ) select 0,1000000], [], ""];
} else {
    _handgunLoadout set [0, _handgun];
    _handgunLoadout set [4, [((_loadoutMagazines) select 0 ) select 0,1000000]];
    _handgunLoadout set [5, [ ] ];
};

_unitLoadout set [0, _primaryLoadout];
_unitLoadout set [1, _secondaryLoadout];
_unitLoadout set [2, _handgunLoadout];


[_player, _unitLoadout] call FUNC(SetUnitLoadout);*/