//Increase drag limit for ACE box draging (800 -> 10000)
missionNamespace setVariable ["ACE_maxWeightDrag", 10000];

// make the bushmaster not have thermal visible
["bma3_bushmaster_base_F", "InitPost", {(_this select 0) disableTIEquipment true;}, true, [], true] call CBA_fnc_addClassEventHandler;

// make the static weapons not have thermal visible
["StaticWeapon", "InitPost", {(_this select 0) disableTIEquipment true;}, true, [], true] call CBA_fnc_addClassEventHandler;

["Helicopter", "InitPost", {
	(_this select 0) addEventHandler["Local", {
			params ["_entity", "_isLocal"];
            if(_isLocal isEqualTo false) exitWith {};

			_vehicle = vehicle _entity;
			if(isNull _vehicle) exitWith {};

			_allCargo = _vehicle getVariable ["ASL_Cargo", []];
			if(count _allCargo <= 0) exitWith {};

			{
				[_x, clientOwner] remoteExecCall ['setOwner',2];
			} foreach _allCargo;
		}];
	},true, [], true
] call CBA_fnc_addClassEventHandler;


// DAGR Modifications to enable automatic waypoints from Map
// Default Prefix List
DAGR_Marker_Prefix = ["!","#","$","%","^","&","*","-","_","=","+"];
DAGR_Marker_Prefix_ALL = ["!","#","$","%","^","&","*","-","_","=","+"];
addMissionEventHandler ["Map", {
	params ["_mapIsOpened", "_mapIsForced"];
	//hint "Hello";
	// Get all markers 
	private _markers = allMapMarkers;
	DAGR_Marker_Waypoints = [];
	{
		// may need to determine if user marker in future and filter grouping.
		// format: "_USER_DEFINED #0/1/2" 
		// where user is prefix to identify till #
		// 0 = playerid
		// 1 = markerid 
		// 2 = channelID 
		// from each element in _markers can use splitString to strip prefix and split on /
		//_xPos = markerPos _x; // markerPos is a 12 digit grid ref (including decimal number)
		_xText = markerText _x;
		//_xType = markerType _x;
		// send valid marker names to DAGR System.
		// just check text on marker names to have the spacial characters !#$%^&* if so, new valid list.
		
		if ((count _xText) > 0) then {
			_xPrefix = _xText select [0,1];
			if (_xPrefix in DAGR_Marker_Prefix) then {
				DAGR_Marker_Waypoints  pushBack _x;
			}
		}
	} forEach _markers;


	// Dagr only has 5 waypoint's available, we will in the future respect manual ones, 
	// but for now delete all 5 and replace with our list if we have anything set
	if ((count DAGR_Marker_Waypoints) > 0) then {
		ace_dagr_wpString0 = "";
		ace_dagr_wpString1 = "";
		ace_dagr_wpString2 = "";
		ace_dagr_wpString3 = "";
		ace_dagr_wpString4 = "";
		ace_dagr_wp0 = 0;
		ace_dagr_wp1 = 0;
		ace_dagr_wp2 = 0;
		ace_dagr_wp3 = 0;
		ace_dagr_wp4 = 0;
		ace_dagr_numWaypoints = 0;

		{
			// get 12 digit cord for waypoint
			_pos = getMarkerPos _x;
			// strip decimals to reduce to 10 digit
			_posx = parseNumber ((_pos select 0) toFixed 0);
			_posy = parseNumber ((_pos select 1) toFixed 0);

			// convert to string and strip 1 digit if x or y above 4 digits
			if (count (str _posx) > 4) then {
				_posx = parseNumber ((str _posx) select [0,4])
			};
			if (count (str _posy) > 4) then {
				_posy = parseNumber ((str _posy) select [0,4])
			};
			_posxPrefix = "";
			private _xCoord = switch true do {
				case (_posx >= 1000): {"" + (str _posx)};
				case (_posx >= 100): {"0" + (str _posx)};
				case (_posx >= 10): {"00" + (str _posx)};
				default {"000" + str _posx};
			};
			private _yCoord = switch true do {
				case (_posy >= 1000): {"" + (str _posy)};
				case (_posy >= 100): {"0" + (str _posy)};
				case (_posy >= 10): {"00" + (str _posy)};
				default {"000" + str _posy};
			};
			_markerText = markerText _x;
			switch (_forEachIndex) do {
				case 0 : {ace_dagr_wp0 = parseNumber (_xCoord + _yCoord); ace_dagr_wpString0 = _markerText; ace_dagr_numWaypoints = 1};
				case 1 : {ace_dagr_wp1 = parseNumber (_xCoord + _yCoord); ace_dagr_wpString1 = _markerText; ace_dagr_numWaypoints = 2};
				case 2 : {ace_dagr_wp2 = parseNumber (_xCoord + _yCoord); ace_dagr_wpString2 = _markerText; ace_dagr_numWaypoints = 3};
				case 3 : {ace_dagr_wp3 = parseNumber (_xCoord + _yCoord); ace_dagr_wpString3 = _markerText; ace_dagr_numWaypoints = 4};
				case 4 : {ace_dagr_wp4 = parseNumber (_xCoord + _yCoord); ace_dagr_wpString4 = _markerText; ace_dagr_numWaypoints = 5};
				default {};
			};
		} foreach DAGR_Marker_Waypoints;
	};
}];