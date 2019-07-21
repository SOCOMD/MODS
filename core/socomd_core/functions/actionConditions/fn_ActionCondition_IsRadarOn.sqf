_args = _this;
_vehicle = _this select 0;

_ret = false;
if((isVehicleRadarOn _vehicle) isEqualTo true) then {
	_ret = true;
};
_ret;