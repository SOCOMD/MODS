// Handles re-adding the NVG slot while the inventory is open
_args = _this;
_dispaly = _this select 0;
private _ctrlGogSlot = _display displayCtrl 6216;
private _ctrlNvgSlot = _display displayCtrl 6217;
private _ctrlBinoSlot = _display displayCtrl 6238;
_xVal = ((ctrlPosition _ctrlGogSlot select 0) + (ctrlPosition _ctrlBinoSlot select 0))/2;
_yVal = ctrlPosition _ctrlGogSlot select 1;
_wVal = ctrlPosition _ctrlGogSlot select 2;
_hVal = ctrlPosition _ctrlGogSlot select 3;
_ctrlNvgSlot ctrlSetPosition [_xVal, _yVal, _wVal, _hVal];
_ctrlNvgSlot ctrlCommit 0;