class CfgFunctions
{
	class SOCOMD
	{
		class Zeus
		{
			file = "\socomd_zeus\functions\zeus";
			
			class ZeusInit { postInit = 1; };
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

		class Headless
		{
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

		class Modules
		{
			file = "\socomd_zeus\functions\modules";

			class ModuleToggleUndercover {};
			class ModuleToggleTranslator {};
			class ModuleCopyClipboardLoadout {};
			class ModulePasteClipboardLoadout {};
		};
	};
};