// Automatic Opening Device Settings
// AR3 ARR - Barometric Pressure hPA
if (VQI_HINTS_HALO == 1) then { hint "ar3_set_hpa.sqf"; };
sleep 1;




private ["_ar3","_unt"];

_ar3 = _this select 0;
_unt = _this select 1;

if ("VQI_AR3" in assignedItems player) then {

	if (_ar3 == 998) then {
	hint "AR3 Set to: 998 hPA \n 418'ft / 127m \n ASL: Above Sea Level";
		waitUntil { getPosASL _unt select 2 < 427 }; playSound "aad_beeping";	// Alert +300m
		waitUntil { getPosASL _unt select 2 < 127 }; _unt action ["openParachute"];
	};

	if (_ar3 == 995) then {
	hint "AR3 Set to: 995 hPA \n 501'ft / 153m \n ASL: Above Sea Level";
		waitUntil { getPosASL _unt select 2 < 453 }; playSound "aad_beeping";	// Alert +300m
		waitUntil { getPosASL _unt select 2 < 153 }; _unt action ["openParachute"];
	};

	if (_ar3 == 990) then {
	hint "AR3 Set to: 990 hPA \n 640'ft / 195m \n ASL: Above Sea Level";
		waitUntil { getPosASL _unt select 2 < 495 }; playSound "aad_beeping";	// Alert +300m
		waitUntil { getPosASL _unt select 2 < 195 }; _unt action ["openParachute"];
	};

	if (_ar3 == 980) then {
	hint "AR3 Set to: 980 hPA \n 920'ft / 280m \n ASL: Above Sea Level";
		waitUntil { getPosASL _unt select 2 < 580 }; playSound "aad_beeping";	// Alert +300m
		waitUntil { getPosASL _unt select 2 < 280 }; _unt action ["openParachute"];
	};

	if (_ar3 == 970) then {
	hint "AR3 Set to: 970 hPA \n 1201'ft / 366m \n ASL: Above Sea Level";
		waitUntil { getPosASL _unt select 2 < 666 }; playSound "aad_beeping";	// Alert +300m
		waitUntil { getPosASL _unt select 2 < 366 }; _unt action ["openParachute"];
	};

	if (_ar3 == 950) then {
	hint "AR3 Set to: 950 hPA \n 1772'ft / 540m \n ASL: Above Sea Level";
		waitUntil { getPosASL _unt select 2 < 840 }; playSound "aad_beeping";	// Alert +300m
		waitUntil { getPosASL _unt select 2 < 540 }; _unt action ["openParachute"];
	};

	if (_ar3 == 930) then {
	hint "AR3 Set to: 930 hPA \n 2352'ft / 717m \n ASL: Above Sea Level";
		waitUntil { getPosASL _unt select 2 < 1017 }; playSound "aad_beeping";	// Alert +300m
		waitUntil { getPosASL _unt select 2 < 717 }; _unt action ["openParachute"];
	};
} else {
	hint "Equipment Missing";
};



/////////////////////////////
/* NOTES:



*/