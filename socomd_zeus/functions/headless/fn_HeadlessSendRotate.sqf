_allowRotate = missionNamespace getVariable ["SOCOMD_ZEUS_AllowRotate", false];

if (_allowRotate) then 
{
	_obj = _this select 1;
	_pos = screenToWorld getMousePosition;

	if (_obj isKindOf "Man") then 
	{
		if (formationLeader _obj == _obj) then 
		{
			[_obj, _pos] remoteExec ["SOCOMD_fnc_HeadlessHandleRotate", 2];
		};
	}
	else 
	{
		[_obj, _pos] remoteExec ["SOCOMD_fnc_HeadlessHandleRotate", 2];
	};
};