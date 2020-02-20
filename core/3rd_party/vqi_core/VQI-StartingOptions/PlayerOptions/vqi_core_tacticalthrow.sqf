// Von Quest's Tactical Throw
// Thowables from Vest or Uniform ONLY
if (VQI_CORE_HINTS == 1) then { hint "tacticalThrow.sqf"; };
sleep 1;



if (VQI_CORE_tacTHROW == 1) then {
//hint "Tactical Throw & Grenades \n - Active -";

	// No Throw from Backpack - "G"
	VQI_eh_tacThrow = (findDisplay 46) displayAddEventHandler ["KeyDown",{
		_key1 = _this select 1;
		_keys = actionKeys "Throw";
		if (_key1 in _keys) then {
		
			_mag = currentThrowable player select 0;
			
			_vestItems = vestItems player;
			_uniformItems = uniformItems player;
			_v = {_x == _mag} count _vestItems;
			_u = {_x == _mag} count _uniformItems;
			_t = _v + _u;
			
			if (_t > 0) then {false} else {true};
		};
	}];
};





///////////////////////
/* NOTES:



*/