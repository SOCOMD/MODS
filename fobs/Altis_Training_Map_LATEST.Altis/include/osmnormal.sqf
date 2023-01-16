[osm] call BIS_fnc_moduleStrategicMapOpen;




/*
startAWRFeros =
{
	player setpos getmarkerpos "awrferos";
};

startAWRSouth =
{
	player setpos getmarkerpos "awrsouth";
};

_missionsData 	= [
	[getmarkerpos "awrferos",
	startAWRFeros,
	"SOLS Air Weapons Range Feros",
	"Deploy to SOLS Air Weapons Range Feros.",
	"",
	"image\icon_spawnRotary",
	1,
	[]],
	
	[getmarkerpos "awrsouth",
	startAWRSouth,
	"SOLS Air Weapons Range South",
	"Deploy to SOLS Air Weapons Range South.",
	"",
	"image\icon_spawnRotary",
	1,
	[]],
	
];

disableserialization;

_parentDisplay 	= [] call bis_fnc_displayMission;
_mapCenter 	= getmarkerpos "smopen";
_ORBAT 		= [];
_markers 	= [];
_images 	= [];
_overcast 	= overcast;
_isNight 	= !((dayTime > 6) && (dayTime < 20));
_scale		= 0.3;
_simul		= true;

[
findDisplay 46,
_mapCenter,
_missionsData,
_ORBAT,
_markers,
_images,
_overcast,
_isNight,
_scale,
_simul
] call Bis_fnc_strategicMapOpen;

*/