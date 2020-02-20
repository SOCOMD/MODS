//	Dragonfly - Re-Breather Diver System
//	HALO/UBA  - 10m:1h (32'-60min)
//if (true) then { hint "dragonfly_system.sqf"; };
sleep 1;



private ["_tank","_deep","_rate","_ppo2"];


_tank = 3600;		// Tank/System Size
tankVol = _tank;
_deep = 0;		// Depth/Pressure
_rate = 0;		// Breathing Rate
_ppo2 = 0;		// Multiplier (MOD)


systemON = 1;		// 1 = Dragonfly   2 = Stingray   3 = F.R.O.G.S
gasmixON = 0;		// Bottle-Valve: ON/OFF




playSound "Orange_PhoneCall_Reject";
while {systemON == 1} do {

	// add OFF_Rebreather
	if ("VQI_BOTTLE_DF1_GAS" in vestItems player) then {
		player addVest "VQI_Vest_Dragonfly_OFF";
		player addItemToVest "VQI_BOTTLE_DF1_GAS";
	} else {
		player addVest "VQI_Vest_Dragonfly_OFF";
	};


	
	waitUntil { sleep 5; gasmixON == 1; };
	// Wait until Gas ON, then add GAS_Rebreather
	if ("VQI_BOTTLE_DF1_GAS" in vestItems player) then {
		player addVest "VQI_Vest_Dragonfly_GAS";
		player addItemToVest "VQI_BOTTLE_DF1_GAS";
	} else {
		player addVest "VQI_Vest_Dragonfly_GAS";
	};

	
	
	while { gasmixON == 1 && _tank > 0 } do {

		_deep = getPosASL player select 2;
		_rate = getFatigue player;
		
		// 10m Operational Depth Rating:  -0.10 = 1.0
		if (getPosASL player select 2 > -10) then { _ppo2 = -0.10; };	//  100% - 10m - calm/low breath - ( 60/X = min )
		if (getPosASL player select 2 < -10) then { _ppo2 = -0.50; };	//  05x / 12 min 
		if (getPosASL player select 2 < -20) then { _ppo2 = -1.00; };	//  20x /  3 min
		if (getPosASL player select 2 < -30) then { _ppo2 = -2.00; };	//  60x /  1 min
		
		// Check ASL and VEST ON/OFF
		if (getPosASL player select 2 > -1 ) then {
			_tank = _tank - 0.5;							// Out of Water (+0 ASL) - Drain Gases (default 2h)
		} else {
			_tank = _tank - (_deep * _ppo2) - (_rate * 3);	// System Formula Rate (fictional): Depth/Gas/Fatigue
		};												// 3600 = 3600 - (-10 * -0.10) - (x)		    x = rate
		
		//hintSilent format ["MODT: %1", [((_tank)/60) + 0.01,"HH:MM"] call BIS_fnc_timetostring];	// MODT: Mission Operation Depth Time
		
		
		if (_tank > 0) then { sleep 1; tankVOL = _tank; } else { systemON = 0; }; // dry
	};
	
sleep 1;
};



gasmixON = 0;
tankVOL = 0;
sleep 1;











waitUntil { sleep 60; (("VQI_VEST_Dragonfly" == Vest player) || ("VQI_VEST_Dragonfly_GAS" == Vest player) || ("VQI_VEST_Dragonfly_OFF" == Vest player)) };

// Out of Gas!
// Replace ReBreather with OFF_Rebreather!
if ("VQI_BOTTLE_DF1_GAS" in vestItems player) then {
	player addVest "VQI_Vest_Dragonfly_OFF";
	player addItemToVest "VQI_BOTTLE_DF1_GAS";
} else {
	player addVest "VQI_Vest_Dragonfly_OFF";
};








//////////////////
/* NOTES:

recode to set player air?


*/