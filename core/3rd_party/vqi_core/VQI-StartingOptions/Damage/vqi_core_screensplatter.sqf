// Adds DAMAGE efx
//




// damage
player addEventHandler ["handleDamage", { 


	if ((_this select 4) != "") then {		// bullet/object only
	
		_blood = [1,11] call BIS_fnc_randomInt;
		switch (_blood) do
		{
			case 1 :  { 1111 cutRsc ["BLOODSS_1", "PLAIN"]; };
			case 2 :  { 1112 cutRsc ["BLOODSS_2", "PLAIN"]; };
			case 3 :  { 1113 cutRsc ["BLOODSS_3", "PLAIN"]; };
			case 4 :  { 1114 cutRsc ["BLOODSS_4", "PLAIN"]; };
			case 5 :  { 1115 cutRsc ["BLOODSS_5", "PLAIN"]; };
			case 6 :  { 1116 cutRsc ["BLOODSS_6", "PLAIN"]; };
			case 7 :  { 1117 cutRsc ["BLOODSS_7", "PLAIN"]; };
			case 8 :  { 1118 cutRsc ["BLOODSS_8", "PLAIN"]; };
			case 9 :  { 1119 cutRsc ["BLOODSS_9", "PLAIN"]; };
			case 10 : { 1120 cutRsc ["BLOODSS_10", "PLAIN"]; };
			case 11 : { 1121 cutRsc ["BLOODSS_11", "PLAIN"]; };
		};
		
		playSound "Damage_Grunt";
		addCamShake [50, 1, 10];
		
		0 = ["DynamicBlur", 450, [5]] spawn {
			params ["_name", "_priority", "_effect", "_blur"];
			_blur = ppEffectCreate [_name, _priority];
			_blur ppEffectEnable true; 
			_blur ppEffectAdjust _effect;  
			_blur ppEffectCommit 0;  
		
			_blur ppEffectAdjust [0]; 
			_blur ppEffectCommit 2; 
		};
		
		0 = ["ChromAberration", 250, [0.02, 0.02, false]] spawn {
			params ["_name", "_priority", "_effect", "_pain"];
			_pain = ppEffectCreate [_name, _priority];  
			_pain ppEffectEnable true;  
			_pain ppEffectAdjust _effect;  
			_pain ppEffectCommit 10;  
			sleep 11;
			_pain ppEffectAdjust [0, 0, false]; 
			_pain ppEffectCommit 60;
		};
	};
} ];





















////////////////////////
/* NOTES:



*/