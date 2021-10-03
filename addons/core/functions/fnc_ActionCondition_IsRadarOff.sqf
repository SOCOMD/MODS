#include "script_component.hpp"
_args = _this;
_vehicle = _this select 0;

_ret = false;
if((isVehicleRadarOn _vehicle) isEqualTo false) then {
    _ret = true;
};
_ret;