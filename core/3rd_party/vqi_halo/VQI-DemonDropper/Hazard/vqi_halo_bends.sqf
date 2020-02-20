//
//
if (VQI_HINTS_HALO == 1) then { hint "bends.sqf"; };
sleep 1;


private ["_unit","_POATank","_rTimeS","_rTimeD","_rTimeE"];

_unit = _this select 0;



sleep 10; 
if (("VQI_BOTTLE_DF1_GAS" in vestItems _unit) && (gasmixON == 1)) then {
	_POATank = (round(random 3));
	hint (format ["DF-1 POA Bottle: OK \n Nitrogen Saturation: %1",_POATank]+"%");
	//hint "DF-1 POA Bottle: OK \n Nitrogen Saturation: 0%";
	
} else {
	hint "DF-1 POA Bottle: FAIL \n You don't feel so well...";
	
	playSound "heartbeat";
	sleep 30 + random 3600;			// Onset of "the bends"

	playSound "heartbeat";
	_rTimeS = 111 + random 3600;		// Start (getting sick)
	_rTimeD = 666 + random 3600;		// Duration
	_rTimeE = 111 + random 1200;		// End (feeling better)

	// Start (getting sick)
	playSound "heartbeat";
	"ChromAberration" ppEffectEnable true;   				// on/off
	"ChromAberration" ppEffectAdjust [0.05, 0.05, true];   	// force efx
	"ChromAberration" ppEffectCommit _rTimeS;				// time to max effect

	sleep _rTimeD;	// lasting effect...

	// End (feeling better)
	playSound "heartbeat";
	"ChromAberration" ppEffectEnable true;   				// on/off
	"ChromAberration" ppEffectAdjust [0, 0, true];   		// force efx
	"ChromAberration" ppEffectCommit _rTimeE;		 		// time to max effect	
};
	
	
	
	
/*   WIP
///////////////////////////////////////////////////////////////
0 = ["ChromAberration", 200, [0.05, 0.05, true]] spawn {
	params ["_name", "_priority", "_effect", "_handle"];
	while {
		_handle = ppEffectCreate [_name, _priority];
		_handle < 0
	} do {
		_priority = _priority + 1;
	};
	_dsTime1 = 20 + random 333;
	_handle ppEffectEnable true;
	_handle ppEffectAdjust _effect;
	_handle ppEffectCommit _dsTime1;
	waitUntil {ppEffectCommitted _handle};
	uiSleep 3; 
	comment "admire effect for a sec";
	_handle ppEffectEnable false;
	ppEffectDestroy _handle;
};




	sleep 10 + random 333;
	
	playSound "heartbeat";
	
	
0 = ["ColorInversion", 2500, [0.5, 0.5, 0.5]] spawn {
	params ["_name", "_priority", "_effect", "_handle"];
	while {
		_handle = ppEffectCreate [_name, _priority];
		_handle < 0
	} do {
		_priority = _priority + 1;
	};
	_dsTime2 = 20 + random 333;
	_handle ppEffectEnable true;
	_handle ppEffectAdjust _effect;
	_handle ppEffectCommit _dsTime2;
	waitUntil {ppEffectCommitted _handle};
	uiSleep 3; 
	comment "admire effect for a sec";
	_handle ppEffectEnable false;
	ppEffectDestroy _handle;
};



	sleep 10 + random 333;
	
	playSound "heartbeat";
	
	
0 = ["DynamicBlur", 400, [10]] spawn {
	params ["_name", "_priority", "_effect", "_handle"];
	while {
		_handle = ppEffectCreate [_name, _priority];
		_handle < 0
	} do {
		_priority = _priority + 1;
	};
	_dsTime3 = 20 + random 333;
	_handle ppEffectEnable true;
	_handle ppEffectAdjust _effect;
	_handle ppEffectCommit _dsTime3;
	waitUntil {ppEffectCommitted _handle};
	uiSleep 3; 
	comment "admire effect for a sec";
	_handle ppEffectEnable false;
	ppEffectDestroy _handle;
};
////////////////////////////////////////////////////////
*/













/*
_dsTime1 = 20 + random 333;
_dsTime2 = 20 + random 333;
_dsTime3 = 20 + random 333;

	hint "MA-1 POA Bottle: FAIL";
	sleep 33 + random 333;
	
		playSound "heartbeat";
		
		setAperture 0.05; 
		setAperture -1;
		"DynamicBlur" ppEffectEnable true;  
		"DynamicBlur" ppEffectAdjust [8.0];  
		"DynamicBlur" ppEffectCommit _dsTime1;
		sleep 1;
		
		playSound "heartbeat";
		"DynamicBlur" ppEffectAdjust [0.0]; 
		"DynamicBlur" ppEffectCommit _dsTime2;
		sleep 3;
		
		playSound "heartbeat";
		"DynamicBlur" ppEffectEnable false;
		"RadialBlur" ppEffectAdjust [0.0, 0.0, 0.0, 0.0]; 
		"RadialBlur" ppEffectCommit _dsTime3; 
		"RadialBlur" ppEffectEnable false;
*/