_obj = _this select 1;
if (_obj isKindOf "LandVehicle" || _obj isKindOf "Air" || _obj isKindOf "Ship") then 
{
	[_obj] call SOCOMD_fnc_HeadlessHandlePlaced;
};

if (_obj isKindOf "Man") then 
{
	if (_obj == leader _obj) then 
	{
		[_obj] remoteExec ["SOCOMD_fnc_HeadlessHandlePlaced", 2];
	};
};