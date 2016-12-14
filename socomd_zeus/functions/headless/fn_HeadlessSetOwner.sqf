_item = _this select 0;
_unit = typeOf _item;
_pos = getPos _item;

if (_item isKindOf "Man") then 
{
	_group = createGroup (side _item);
	_items = units _item;
	_units = [];
	_poss = [];

	{
		_units pushBack (typeOf _x);
		_poss pushBack (getPos _x);
	} forEach _items;
	
	{
		deleteVehicle _x;
	} forEach _items;
	
	sleep 0.25;
	
	_i = 0;
	{
		_x createUnit [_poss select _i, _group,  "[objNull, this] call SOCOMD_fnc_ZeusAddObject;" ];
		_i = _i + 1;
	} forEach _units;
};

if (_item isKindOf "LandVehicle" || _item isKindOf "Air" || _item isKindOf "Ship") then 
{
	_crew = false;

	if (count (crew _item) > 0) then 
	{
		_crew = true;
		{
			_item deleteVehicleCrew _x;
		} forEach (crew _item);
	};
	
	sleep 0.25;

	deleteVehicle _item;
	
	sleep 0.5;
	
	_new = _unit createVehicle _pos;
	
	sleep 0.25;
	
	if (_crew) then 
	{
		createVehicleCrew _new;
	};
	
	sleep 0.25;
	
	[objNull, _new] call SOCOMD_fnc_ZeusAddObject;
	
	sleep 5;
	
	[objNull, _new] call SOCOMD_fnc_ZeusAddObject;
	
};