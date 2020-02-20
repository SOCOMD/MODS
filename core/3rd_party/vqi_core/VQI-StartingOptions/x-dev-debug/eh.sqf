//add items without killedEH?
//killedEH to add flies


// Existing Units? AliVE, EOS, etc...
while {true} do {
        {
            if (!(_x getVariable ["added_EV",false])) then {
                _x addMPEventHandler ["killed", {}];
                _x setVariable ["added_EV",true];
            };
        } forEach allUnits;
    sleep 666;
};  



///////////////////////////////////////////////////
// BOMSF Utilities
// fnc_ehkilled.sqf
//
// in init.sqf: [] call compile preprocessFilelineNumbers "scripts\fncs\fnc_eh_killed.sqf";
//
// call the fnc with a periodic while loop or in any script that creates a unit
//
///////////////////////////////////////////////////

//Not Needed?
if (isServer or isDedicated) then {
	fnc_ehkilledeast = {
		east_units = [];

		{
			if ((side _x) == east) then {
				east_units = east_units + [_x];
				{_x removeAllEventHandlers "killed"} forEach east_units; 
			}; 
		} forEach allUnits;

		{_x addMPEventHandler ["killed", { /*insert code here*/ }]} forEach east_units; 
	};
};