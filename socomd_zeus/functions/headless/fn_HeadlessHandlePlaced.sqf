//Get Existing Headless Clients
_headlessClients = missionNamespace getVariable ["SOCOMD_ZEUS_HeadlessClients", []];

//Find Connected Headless Clients
{
	if(_x isKindOf "HeadlessClient_F") then
	{	
		_found = 0;
		_id = owner _x;
		{
			_hcId = _x select 0;
			if(_id == _hcId) then
			{
				_found = 1;
			};
		} forEach (_headlessClients);

		if(_found == 0) then
		{
			_headlessClients = _headlessClients + [[_id, 0]];
		};
	};
} forEach allPlayers;

//No Headless Clients Connected, Return
if(count _headlessClients <= 0) exitWith {};

//Select Client With Least Units
_first = _headlessClients select 0;
_selectedId = _first select 0;
/*_min = _first select 1;

{
	_hcId = _x select 0;
	_count = _x select 1;

	if(_count < _min) then
	{
		_selectedId = _hcId;
		_min = _count;
	};
} forEach _headlessClients;

//Update Count
{
	_hcId = _x select 0;
	if(_selectedId == _hcId) then
	{
		_x set [1, _min + 1];
	};
} forEach _headlessClients;*/

//Update Cache
missionNamespace setVariable ["SOCOMD_ZEUS_HeadlessClients", _headlessClients];

//Swap Owners to Selected Client
_this remoteExec ["SOCOMD_fnc_HeadlessSetOwner", _selectedId];
