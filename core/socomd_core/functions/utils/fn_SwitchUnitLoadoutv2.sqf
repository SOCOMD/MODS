_args = _this;
//_player = _args select 0;
//_loadoutId = _args select 1;
_player = player;
_loadoutId = "SOCOMD_Rifleman";

_unitConfigs = configProperties[missionConfigFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId];
if(count (_unitConfigs) == 0) then {
	_unitConfigs = configProperties [configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId];
};

if(count (_unitConfigs) == 0) exitWith {};

_player setVariable ["SOCOMD_LOADOUTID", _loadoutId];

removeUniform _player;
removeVest _player;
removeBackpack _player;

_primary = nil;
_secondary = nil;
_secondaryMagazine = nil;
_handgun = nil;
_handgunMagazine = nil;
_uniformType = nil;
_uniformInventoryLoadout = [];

{
	_name = configName (_x);
	switch(_name) do {
		case "primary" : { _primary = getText(_x) };
		case "secondary" : {_secondary = getText(_x) };
		case "secondaryMagazine" : { _secondaryMagazine = getText(_x) };
		case "handgunMagazine" : { _handgunMagazine = getText(_x) };
		case "Uniform" : {
			// Using configProperties is required to get inheritance information as well. Super annoying because we get an array. idk if it overwrites inheritance
			// or returns both. :/
			_uniformConfigs = configProperties[_x];
			{
				_nameUniform = configName (_x);
				switch(_nameUniform) do {
					case "type": {_uniformType = getText (_x) };
					case "Inventory" : {
						// do another loop for inventory crap and build the loadout i guess
					};
				};
				
			} forEach _uniformConfigs;
			

		};
	};
} forEach _unitConfigs;