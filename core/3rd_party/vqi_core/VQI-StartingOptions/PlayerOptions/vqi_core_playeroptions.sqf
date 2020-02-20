// Set various misc Options
//
if (VQI_CORE_HINTS == 1) then { hint "playeroptions.sqf"; };
sleep 1;



private ["_weaponSway","_setStamina","_setHolster"];


_weaponSway = VQI_CORE_WEAPONSWAY;
_setStamina = VQI_CORE_STAMINA;
_setHolster = VQI_CORE_HOLSTER;


// WeaponSway
if (_weaponSway > -1) then { player setCustomAimCoef _weaponSway; };

// Stamina
if (_setStamina == 1) then { player enableStamina false; };

// Holster Weapon
if (_setHolster == 1) then { player action ["SwitchWeapon", player, player, 100]; };











waitUntil {sleep 3; !isNull (findDisplay 46)};

// tactical reload
execVM "vqi_core\VQI-StartingOptions\PlayerOptions\vqi_core_tacticalreload.sqf";
sleep 5;

// tactical throw
execVM "vqi_core\VQI-StartingOptions\PlayerOptions\vqi_core_tacticalthrow.sqf";
sleep 5;

// tactical explosives
execVM "vqi_core\VQI-StartingOptions\PlayerOptions\vqi_core_tacticalexplosives.sqf";





sleep 1;
//if (VQI_CORE_HINTS == 1) then { hint "playeroptions.sqf -END-"; };