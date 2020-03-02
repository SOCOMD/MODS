//
//
if (VQI_HINTS_HALO == 1) then { hint "dragonfly_breath.sqf"; };


private ["_unit","_O2Tank"];

_unit = _this select 0;


// Check Tank
if (("VQI_Vest_Dragonfly_OFF" == Vest _unit) || ("VQI_Vest_Dragonfly_GAS" == Vest _unit) || ("V_RebreatherB" == Vest _unit) || ("SOCOMD_COS_PARACHUTE" == Vest _unit) then {

	_O2Tank = (round((random 50) + 45));
	//hint (format ["O2 Tank: %1",_O2Tank]+"%");


	// Breathing Sound
	while {("VQI_Vest_Dragonfly_OFF" == Vest _unit) || ("VQI_Vest_Dragonfly_GAS" == Vest _unit) || ("V_RebreatherB" == Vest _unit) || ("SOCOMD_COS_PARACHUTE" == Vest _unit)} do {

		//_pHeight = ((getPosATL _unit) select 2);
		playSound "rebreather_breath";
		sleep 4;
			
		sleep 1;
	};
};

////////////////
/* NOTES: 



*/