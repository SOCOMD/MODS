//Increase drag limit for ACE box draging (800 -> 10000)
missionNamespace setVariable ["ACE_maxWeightDrag", 10000];

// make the bushmaster not have thermal visible
["bma3_bushmaster_base_F", "InitPost", {(_this select 0) disableTIEquipment true;}, true, [], true] call CBA_fnc_addClassEventHandler;

["Helicopter", "InitPost", {
	(_this select 0) addEventHandler["Local", {
			params ["_entity", "_isLocal"];

            systemChat format["Locality Changed. %1 : %2", _entity, _isLocal];
            if(_isLocal == false) exitWith{systemChat "You're not the owner"};

			_vehicle = vehicle _entity;
			if(isNull _vehicle) exitWith {systemChat "You're not in a vehicle?"};

			_allCargo = _vehicle getVariable ["ASL_Cargo", []];
			if(count _allCargo <= 0) exitWith {systemChat "No cargo attached"};

			{
				[_x, clientOwner] remoteExecCall ['setOwner',2];
				systemChat format["Changing ownership of %1", _x];
			} foreach _allCargo;
		};
	},true, [], true
] call CBA_fnc_addClassEventHandler;