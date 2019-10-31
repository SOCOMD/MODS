_args = _this;
_player = _this select 0;
_nvg = _this select 1;
_oldNvg = if (_nvg == "SOCOMD_NVG_GR") then [{"SOCOMD_NVG"},{"SOCOMD_NVG_GR"}];
_uniformItems = uniformItems _player;
_vestItems = vestItems _player;
_bagItems = backpackItems _player;
_inSlot = assignedItems _player;
if (_oldNvg in _uniformItems) then {
	_player removeItemFromUniform _oldNvg;
	_player addItemToBackpack _nvg;
};
if (_oldNvg in _vestItems) then {
	_player removeItemFromVest _oldNvg;
	_player addItemToBackpack _nvg;
};
if (_oldNvg in _bagItems) then {
	_player removeItemFromBackpack _oldNvg;
	_player addItemToBackpack _nvg;
};
if (_oldNvg in _inSlot) then {
	_player linkItem _nvg;
};


// [_player, _unitLoadout] call SOCOMD_fnc_SetUnitLoadout;