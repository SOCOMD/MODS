_obj = _this select 0;
_pos = _this select 1;

if (_obj isKindOf "LandVehicle" || _obj isKindOf "Air" || _obj isKindOf "Ship") then
{
	if (count (crew _obj) > 0) then 
	{
		(crew _obj) doWatch _pos;
	};

	_obj setDir (_obj getDir _pos);
} 
else
{
	if (_obj isKindOf "Man") then 
	{
		_obj setFormDir (_obj getDir _pos);
		_obj doWatch _pos;
	};
};