missionNamespace setVariable ["SOCOMD_ZEUS_ShiftDown", false];
missionNamespace setVariable ["SOCOMD_ZEUS_AllowRotate", false];

_handle = [] spawn 
{
	disableSerialization;

	waitUntil { !isNull(findDisplay 312) };
	_curatorDisplay = findDisplay 312;

	_curatorDisplay displayAddEventHandler ["KeyDown", "_this call SOCOMD_fnc_HeadlessHandleKeyPress" ];
	_curatorDisplay displayAddEventHandler ["KeyUp", "_this call SOCOMD_fnc_HeadlessHandleKeyRelease" ];
	_curatorDisplay displayAddEventHandler ["MouseButtonDown", "_this call SOCOMD_fnc_HeadlessHandleMousePress" ];
};