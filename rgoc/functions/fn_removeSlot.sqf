// removes NVG slot

if (!hasInterface) exitWith {};
_args = _this;
_dispaly = _this select 0;
private _ctrlNvgSlot = _display displayCtrl 6217;
_ctrlNvgSlot ctrlSetPosition [0, 0, 0, 0];
_ctrlNvgSlot ctrlCommit 0;