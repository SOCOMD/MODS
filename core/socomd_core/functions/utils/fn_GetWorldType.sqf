params ["_worldName"];

_worldType = "Arid"; 
_worldTypeConfigs = (configFile >> "CfgWorldType"); 
if(isNull _worldTypeConfigs) exitWith { _worldType; }; 

_found = 0;
 
for "_i" from 0 to (count _worldTypeConfigs) - 1 do { 
	_worldTypeConfig = _worldTypeConfigs select _i; 
	_worldTypeName = configName _worldTypeConfig;

	if(_found == 1) exitWith { _worldType; };

	for "_j" from 0 to (count _worldTypeConfig) - 1 do { 
		_worldConfig = _worldTypeConfig select _j; 
		_worldConfigName = configName _worldConfig; 
		
		if(_found == 1) exitWith { _worldType; };

		if(_worldConfigName == _worldName) then {
			_worldType = _worldTypeName;
			_found = 1;
		};
	}; 
}; 
 
_worldType;