class CfgPatches
{
	class socomd_zeus
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = { };
		author[] = { };
		authorUrl = "";
		version = 0.0.1;
		versionStr = "0.0.1";
		versionAr[] = { 0,0,1 };
	};
};

class CfgFunctions
{
	class SOCOMD
	{
		class Zeus
		{
			file = "\socomd_zeus\functions\zeus";

			class ZeusInit { postInit = 1; }
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
	};
};
