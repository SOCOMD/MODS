// Von Quest's Tactical Reload
// Reload from Vest or Uniform ONLY
if (VQI_CORE_HINTS == 1) then { hint "tacticalReload.sqf"; };
sleep 1;



if (VQI_CORE_tacRELOAD == 1) then {
//hint "Tactical Reload \n - Active -";

	// No Reload from Backpack - "R"
	VQI_eh_tacReload = (findDisplay 46) displayAddEventHandler ["KeyDown",{
		_key1 = _this select 1;
		_keys = actionKeys "ReloadMagazine";
		if (_key1 in _keys) then {
		
			_mag = currentMagazine player;
			if (_mag == "") exitWith {false};
			_vestItems = vestItems player;
			_uniformItems = uniformItems player;
			_v = {_x == _mag} count _vestItems;
			_u = {_x == _mag} count _uniformItems;
			_t = _v + _u;
			
			if (_t > 0) then {false} else {true};
		};
	}];
};











//////////////////////////
/* NOTES:

Remove EH
(findDisplay 46) displayRemoveEventHandler ["KeyDown", VQI_eh_tacReload];

may have to spawn  --  [] spawn {};





*/