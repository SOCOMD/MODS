// Store X Intel Data
//
if (VQI_HINTS_HALO == 1) then { hint "radar_mkrs_data.sqf"; };
sleep 1;


// Function: Marker Data
VQI_fnc_markerData = {
	[
		_this,
		markerText _this,
		markerpos _this,
		mapGridPosition markerPos _this,
		markerDir _this,
		markerSize _this,
		markerType _this,
		markerShape _this,
		markerBrush _this,
		markerColor _this,
		markerAlpha _this		// select 10
	]
};
sleep 1;





// Store all Markers
aoRADmkrs = allMapMarkers;
aoRADdata = [];
{ aoRADdata pushBack ( _x call VQI_fnc_markerData ); } forEach aoRADmkrs;
sleep 1;


// Set Alpha to X
{ _x setMarkerAlpha 0 } forEach aoRADmkrs;	// ???



publicVariable "aoRADmkrs";
publicVariable "aoRADdata";
publicVariable "VQI_fnc_markerData";

sleep 1;
if (VQI_HINTS_HALO == 1) then { hint "radar_mkrs_data.sqf -END-"; };