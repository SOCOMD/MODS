// "Bad Jumps" may damage rifle equipment
// Pack your sensitive gear away to protect it!

_unit = _this select 0;


// [silencer, laser/flashlight, optics, bipod] 
_rifleSup = primaryWeaponItems _unit select 0;
_rifleLit = primaryWeaponItems _unit select 1;
_rifleOpt = primaryWeaponItems _unit select 2;
_rifleBip = primaryWeaponItems _unit select 3;



// check probability - sup, lit, bi
if (random 100 < VQI_LEAP_DAMAGE_SUP) then { _unit removePrimaryWeaponItem _rifleSup; };
if (random 100 < VQI_LEAP_DAMAGE_LIT) then { _unit removePrimaryWeaponItem _rifleLit; };
if (random 100 < VQI_LEAP_DAMAGE_BIP) then { _unit removePrimaryWeaponItem _rifleBip; };

// check scope
_optic = primaryWeaponItems _unit select 2;

if (_optic != "") then {

	_zoomM = getNumber (configFile >> "cfgWeapons" >> _optic >> "ItemInfo" >> "OpticsModes" >> "snip" >> "opticsZoomMin");
	_zoomL = (0.75 / _zoomM) / 3;


	if (random 100 < VQI_LEAP_DAMAGE_OPT) then {

		if (_zoomL > 2) then { // 3x and higher
			_unit removePrimaryWeaponItem _rifleOpt; 
		};
	};
};








///////////////////
/* NOTES:



*/