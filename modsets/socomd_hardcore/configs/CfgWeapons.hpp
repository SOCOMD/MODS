class CfgWeapons
{
	#include "weapons\weapon_optics.hpp"
	#include "weapons\optics.hpp"
};

/*helper script is below to make it much easier to get optics modes and current values */
/*
_optic = "rh_m3lr";

_scopes = "true" configClasses (configFile >> "cfgWeapons" >> _optic >> "ItemInfo" >> "OpticsModes");
_br = toString [13,10];
_response = _optic + _br;

{
   _name = configName _x;
   _initv = getNumber (_x >> "opticsZoomInit");
   _minv = getNumber (_x >> "opticsZoomMin");
   _maxv = getNumber (_x >> "opticsZoomMax");
   _response = _response +"  "+ (configName _x) +":"+ _br + "    " + "init: " + (str _initv) + _br + "    " + "min: " + (str _minv) + _br + "    " + "max: " + (str _maxv) + _br;
} foreach _scopes;

copyToClipboard _response;
*/