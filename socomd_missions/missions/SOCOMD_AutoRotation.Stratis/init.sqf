/************************************************************************************************/
/* dr_strangepete (any questions - pete@shitnami.net)											*/
/* This work is licensed under a Creative Commons Attribution-ShareAlike 3.0 Unported License. 	*/
/* http://creativecommons.org/licenses/by-sa/3.0/												*/
/************************************************************************************************/
call compile preprocessFileLineNumbers "dsp_main.sqf";

enableSentences false;
enableRadio false;

tf_no_auto_long_range_radio = true; // disables TFR default radio assignment

[]spawn {
	while {true} do {{
		deleteGroup _x
	}forEach allGroups;
	//diag_log "Groupcleanup script run..";
	sleep 601;
	};
}; // Fix Zeus group bug (will remove deleted groups so more can be added)