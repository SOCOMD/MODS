//
//
//hint "pow.sqf";
//sleep 1;
player sideChat "Surrender or Die!"; sleep 2;
player sideChat "Drop your Weapon Asshole!!";


_man = false;
_pow = 0;

_aim = cursorObject;
//hint format ["%1",_aim]; sleep 1;



_dis = player distance _aim;

if (_dis < 10) then {

	if (_aim isKindof "CAManBase") then { _man = true; _pow = _aim; };

	if (_man) then { 

		// drop weapon, hands on head
		_gwh = createVehicle ["GroundWeaponHolder_Scripted", position _pow, [], 0, "CAN_COLLIDE"]; sleep 1;
		_pow action ["DropWeapon", _gwh, currentWeapon _pow];

		_pow setCaptive true;
		_pow playMove "AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon";
		_pow playMove "AmovPercMstpSsurWnonDnon";
		
		
		
		// addAction		["menu text", {"script"}, args, priority, titleText, hide, shortcut, condition, radius, unconscious, selection];
		_pow addaction ["POW: Zip-Tie",{
						(_this select 0) switchMove"";
						(_this select 0) playMove "Acts_AidlPsitMstpSsurWnonDnon05";},nil,6,false,false,"","",3];
		/*
		_pow addaction ["POW: Take Prisoner",{
						//(_this select 0) switchMove"";
						[(_this select 0)] join player},nil,6,false,false,"","",3];		
		*/
	};
} else { 
	hint "too far"; 
};










sleep 1;
//hint "pow.sqf -END-";
/////////////////////
/* NOTES:



*/