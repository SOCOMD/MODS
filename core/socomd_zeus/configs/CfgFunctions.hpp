class CfgFunctions {
	class SOCOMD {
		class Zeus {
			file = "\socomd_zeus\functions\zeus";
			class ZeusInit {};
			class ZeusInitLocal {};
			class ZeusAddObject {};
			class ZeusAddObjectLocal {};
			class ZeusRegisterCurator {};
			class ZeusRegisterAdminCurator {};
			class ZeusCreateCurator {};
			class ZeusAdminCurator {};
			class ZeusRefreshCurator {};
			class ZeusRegisterCallbacks {};
		};

		class Headless {
			file = "\socomd_zeus\functions\headless";
			class HeadlessAddDisplayHandles {};
			class HeadlessHandleKeyPress {};
			class HeadlessHandleKeyRelease {};
			class HeadlessHandleMousePress {};
			class HeadlessHandlePlaced {};
			class HeadlessHandleRotate {};
			class HeadlessRotate {};
			class HeadlessSendPlaced {};
			class HeadlessSendRotate {};
			class HeadlessSetOwner {};
		};

		class Modules {
			file = "\socomd_zeus\functions\modules";
			class ModuleToggleUndercover {};
			class ModuleToggleTranslator {};
			class ModuleCopyClipboardLoadout {};
			class ModulePasteClipboardLoadout {};
			class ModuleFlatten {};
			class ModuleConvoyGroup {};
			class ModuleShowHitPoints {};
			class ModuleJamWeapon {};
			class ModuleGenerateUnitConfig {};
			class ModulePowerGrid {};
			class ModulePowerGenerator {};
			class ModuleDisableAI {};
			class ModuleEnableAI {};
			class ModuleRevealPlayers {};
			class ModuleForgetPlayers {};
		};
		class Power {
			file = "\socomd_zeus\functions\power";
			class TogglePower {};
		};
	};
	// Override other ModuleShowHitPoints
	// class CBA {
	//	class Ai {
	//		class taskAttack {
	//			file = "\socomd_zeus\functions\override\cba\fnc_taskAttack.sqf";
	//			headerType = -1;
	//			recompile = 0;
	//		};
	//	};
	// };
};
class Extended_InitPost_EventHandlers {
    class SOCOMD_Homestead {
        class My_car_initpost_eh {
            init = "call SOCOMD_fnc_ZeusInitLocal;";
        };
    };
};