class Extended_Init_EventHandlers {
    class bma3_bushmaster_unarmed_F {
		class bushie_Damage_eh {
			init = "[_this select 0] execVM '\socomd_core\functions\utils\fn_BushMasterInit.sqf'";
		};	
    };

	class Man {
		class DefaultSkill_eh {
			init="_cfg = (configfile >> 'CfgVehicles' >> (typeOf (_this select 0)) >> 'skill');if(isNumber _cfg) then { (_this select 0) setSkill (getNumber(_cfg));};";
		};
	};
};

class Extended_PreInit_EventHandlers
{
	class AB_WindowBreaker
	{
		init="call compile preprocessFileLineNumbers 'socomd_core\functions\common\XEH_PreInit.sqf'";
	};

};