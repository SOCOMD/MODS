class Extended_Init_EventHandlers {
    class bma3_bushmaster_unarmed_F {
		class bushie_Damage_eh {
			init = "[_this select 0] execVM '\socomd_core\functions\utils\fn_BushMasterInit.sqf'";
		};	
    };	
};

class Extended_InitPost_EventHandlers {
	class ACRE_VRC103 {
		class ACRE_Rack_Init {
			init = "[_this select 0] call SOCOMD_fnc_ACRERackInit";
		};
	};
};