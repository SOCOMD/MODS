["SOCOMD_Medical_Event_ketamineLocal", {_this call SOCOMD_Medical_fnc_ketamineLocal;}] call CBA_fnc_addEventHandler;

["ace_cardiacArrest",{
	if(SOCOMD_medical_persistantRevive) then {
		if (!local _unit) exitWith {};
		_this call SOCOMD_MEDICAL_fnc_revivalTimer;
	};
}] call CBA_fnc_addEventHandler;