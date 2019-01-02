_curator = _this;
_curator addEventHandler ["CuratorObjectPlaced",		{ _this call SOCOMD_fnc_ZeusAddObject; } ];
_curator addEventHandler ["CuratorObjectDeleted",		{ _this call SOCOMD_fnc_ZeusRemoveObject; } ];
_curator addEventHandler ["CuratorObjectPlaced", 		{ _this call SOCOMD_fnc_HeadlessSendPlaced; } ];
_curator addEventHandler ["CuratorObjectEdited", 		{ _this call SOCOMD_fnc_HeadlessSendRotate; } ];
_curator addEventHandler ["CuratorObjectRegistered",	{ _this call SOCOMD_fnc_HeadlessAddDisplayHandles; } ];