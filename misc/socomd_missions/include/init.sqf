enableSentences false;
enableRadio false;

//Using TFR
//[] execVM "include\tfr_compat.sqf";

//Using ACRE2
[] execVM "include\acre2_compat.sqf";

//Enable VCOM CBA Settings
VCM_USECBASETTINGS = true;

//VCOM Difficulty Settings
VCM_AIDIFA = [
	['aimingAccuracy', 0.01],
	['aimingShake', 0.5],
	['aimingSpeed', 0.5],
	['commanding', 1.0],
	['courage', 1.0],
	['general', 1.0],
	['reloadSpeed', 1.0],
	['spotDistance', 1.0],
	['spotTime', 1.0]
];

VCM_CLASSNAMESPECIFIC = true;

// VCM_SKILL_CLASSNAMES = [["Classname1",[aimingaccuracy,aimingshake,spotdistance,spottime,courage,commanding,aimingspeed,general,endurance,reloadspeed]],["Classname2",[aimingaccuracy,aimingshake,spotdistance,spottime,courage,commanding,aimingspeed,general,endurance,reloadspeed]]];
VCM_SKILL_CLASSNAMES = [];

// Infinate Loop, Fix Zeus group bug (will remove deleted groups so more can be added)
[] spawn {
	while {true} do {{
		deleteGroup _x
	}forEach allGroups;
	sleep 61;
	};
};

missionNamespace setVariable ["SOCOMD_InitComplete", 1];

[west, -1, [["Land_BagFence_Short_F", 5],["Land_BagFence_Long_F", 5],["Land_BagFence_Round_F", 5],["Land_HBarrier_1_F", 5],["Land_HBarrier_3_F", 5],["Land_HBarrier_5_F", 5],["Land_Plank_01_4m_F", 5],["Land_Plank_01_8m_F", 5]]] call acex_fortify_fnc_registerObjects;