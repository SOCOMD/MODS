params["_logic", "_units", "_activated"];
//if(!_activated) exitWith {};

//_objects = synchronizedObjects _logic; 
{_x  disableAI "PATH";} forEach _units;
