enableSentences false;
enableRadio false;

//Using TFR
//[] execVM "include\tfr_compat.sqf";

//Using ACRE2
[] execVM "include\acre2_compat.sqf";

//VCOM Difficulty Settings
VCM_AIDIFA = [
	['aimingAccuracy', 0.0],
	['aimingShake', 0.5],
	['aimingSpeed', 0.5],
	['commanding', 1.0],
	['courage', 1.0],
	['general', 1.0],
	['reloadSpeed', 1.0],
	['spotDistance', 1.0],
	['spotTime', 1.0]
];

// Infinate Loop, Fix Zeus group bug (will remove deleted groups so more can be added)
[] spawn {
	while {true} do {{
		deleteGroup _x
	}forEach allGroups;
	sleep 61;
	};
};

missionNamespace setVariable ["SOCOMD_InitComplete", 1];