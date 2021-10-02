params ["_item"];
diag_log format ["%1",_item];
pass = false;
if !(usp_uniforms_require_items) exitWith { true };

if (_item in (uniformItems  player)) then {
	pass = true;
};

if (_item in (vestItems player)) then {
	pass = true;
};

if (_item in (backpackItems  player)) then {
	pass = true;
};


pass