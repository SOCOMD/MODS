params["_logic", "_units", "_activated"];
//if(!_activated) exitWith {};

//_objects = synchronizedObjects _logic;
{_x  enableAI "PATH";} forEach _units;