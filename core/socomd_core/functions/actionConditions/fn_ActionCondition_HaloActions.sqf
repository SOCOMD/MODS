_args = _this;
_player = _this select 0;
_check = _this select 1;

_allowed = false;

if (_check == 0) then {
	if (_player getVariable "haloReady") then {
		_allowed = true;
	};
};

if (_check == 1) then {
	if (_player getVariable "haloLanded" == false) then {
		_allowed = true;
	};
};
if (_check == 2) then {
	if (_player getVariable "haloLanded") then {
		_allowed = true;
	};
};
_allowed;