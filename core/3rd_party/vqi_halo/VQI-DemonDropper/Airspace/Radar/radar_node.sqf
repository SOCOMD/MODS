//
//


private ["_rad","_dir","_rng","_r99"];


_rad = _this select 0;
rBox = nearestObjects [_rad, ["Land_spp_Transformer_F"], 10000];



if (count rBox > 0) then {


	rBox = rBox select 0;
	_dir = round (_rad getDir rBox);
	_rng = round (_rad distance rBox);
	_r99 = round (random 99);
	
	
	hint format ["
	Sensor Angle: %1° \n 
	Voltage: %2.%3 v
	",_dir,_rng,_r99];
	
	
	{ rBox addAction ["Hack","vqi_halo\VQI-DemonDropper\Airspace\Radar\radar_node_array.sqf"]; } remoteExec ["bis_fnc_call",0];	//
	[[rBox, ["Hack", "execVM 'vqi_halo\VQI-DemonDropper\Airspace\Radar\radar_node_array.sqf'; [rBox, 1]"]], "addAction", true, true] call BIS_fnc_MP;
	//playSound "SparklesWreck2";
	
} else {

	hint "No Signal \n Voltage: 0";
};













//////////////
/* NOTES:



*/