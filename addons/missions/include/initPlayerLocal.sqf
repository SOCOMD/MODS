/*
//FOB Marker Fading
params[ "_player", "_didJIP" ];

//For Debug
//Array to store displays event has been added to
appliedRscDairy = [];

_fnc_applyMarkerFades = {

	uiNamespace getVariable "RscDiary" displayCtrl 51 ctrlAddEventHandler [ "MouseZChanged", {
		params[ "_ctrl" ];

		_zoom = ctrlMapScale _ctrl;

		{
			_markerShowMinMax = [ 0.0, 0.2 ];
			_markerFadeMinMax = [ 0.02, 0.5 ];
			_lower = linearConversion[ _markerShowMinMax select 0, _markerFadeMinMax select 0, _zoom, 1, 0, true ];
			_upper = linearConversion[ _markerShowMinMax select 1, _markerFadeMinMax select 1, _zoom, 1, 0, true ];
			_fade = _lower min _upper;

			_x setMarkerAlpha _fade;
		}forEach [
			"marker_2",
			"marker_3",
			"marker_4",
			"marker_5",
			"marker_6",
			"marker_7"
		];

	}];
};

if !( _didJIP ) then {

	waitUntil { !isNull ( uiNamespace getVariable [ "RscDiary", displayNull ] ) };

	[] call _fnc_applyMarkerFades;

};

waitUntil { time > 0 && { ctrlIDD ( uiNamespace getVariable "RscDiary" ) isEqualTo 12 } };

[] call _fnc_applyMarkerFades;
*/
