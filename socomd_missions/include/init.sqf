enableSentences false;
enableRadio false;

//Using TFR
//[] execVM "tfr_compat.sqf";

//Using ACRE2
[] execVM "acre2_compat.sqf";

// Infinate Loop, Fix Zeus group bug (will remove deleted groups so more can be added)
[] spawn {
	while {true} do {{
		deleteGroup _x
	}forEach allGroups;
	sleep 61;
	};
};

missionNamespace setVariable ["SOCOMD_InitComplete", 1];