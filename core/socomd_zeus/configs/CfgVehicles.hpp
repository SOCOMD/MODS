class CfgVehicles
{
	class All;
	class Thing : All
	{
	};
	class ModuleEmpty_F : Thing
	{
	};

	class Logic;
	class Module_F : Logic
	{
		class ModuleDescription
		{
			class AnyPlayer;
			class AnyBrain;
			class EmptyDetector;
		};
	};

	class SOCOMD_Module_Base : Module_F
	{
		mapSize = 1;
		side = 7;

		scope = 1;
		scopeCurator = 1;

		author = AUTHOR_STR;
		displayName = "SOCOMD Module Base";
		vehicleClass = "Modules";
		category = "SOCOMD_Zeus_Modules";

		function = "";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;

		class Arguments
		{
		};

		class ModuleDescription : ModuleDescription
		{
			description = "SOCOMD Module Base";
		};
	};

	class SOCOMD_Module_ToggleUndercover : SOCOMD_Module_Base
	{
		scopeCurator = 2;
		isGlobal = 1;

		_generalMacro = "SOCOMD_Module_ToggleUndercover";
		displayName = "Toggle Undercover";
		function = "SOCOMD_fnc_ModuleToggleUndercover";
	};

	class SOCOMD_Module_ToggleTranslator : SOCOMD_Module_Base
	{
		scopeCurator = 2;
		isGlobal = 1;

		_generalMacro = "SOCOMD_Module_ToggleTranslator";
		displayName = "Toggle Translator";
		function = "SOCOMD_fnc_ModuleToggleTranslator";
	};

	class SOCOMD_Module_CopyClipboardLoadout : SOCOMD_Module_Base
	{
		scopeCurator = 2;
		isGlobal = 1;

		_generalMacro = "SOCOMD_Module_CopyClipboardLoadout";
		displayName = "Copy Loadout";
		function = "SOCOMD_fnc_ModuleCopyClipboardLoadout";
	};

	class SOCOMD_Module_PasteClipboardLoadout : SOCOMD_Module_Base
	{
		scopeCurator = 2;
		isGlobal = 1;

		_generalMacro = "SOCOMD_Module_PasteClipboardLoadout";
		displayName = "Paste Loadout";
		function = "SOCOMD_fnc_ModulePasteClipboardLoadout";
	};

	class SOCOMD_Module_Flatten : SOCOMD_Module_Base
	{
		scopeCurator = 2;
		isGlobal = 1;

		_generalMacro = "SOCOMD_Module_Flatten";
		displayName = "Flatten";
		function = "SOCOMD_fnc_ModuleFlatten";
	};

	class SOCOMD_Module_ConvoyGroup : SOCOMD_Module_Base
	{
		scopeCurator = 2;
		isGlobal = 1;

		_generalMacro = "SOCOMD_Module_ConvoyGroup";
		displayName = "Convoy Group";
		function = "SOCOMD_fnc_ModuleConvoyGroup";
	};

	class SOCOMD_Module_ShowHitPoints : SOCOMD_Module_Base
	{
		scopeCurator = 2;
		isGlobal = 1;

		_generalMacro = "SOCOMD_Module_ShowHitPoints";
		displayName = "Show Hit Points";
		function = "SOCOMD_fnc_ModuleShowHitPoints";
	};

	class SOCOMD_Module_JamWeapon : SOCOMD_Module_Base
	{
		scopeCurator = 2;
		isGlobal = 1;

		_generalMacro = "SOCOMD_Module_JamWeapon";
		displayName = "Jam Weapon";
		function = "SOCOMD_fnc_ModuleJamWeapon";
	};

	class SOCOMD_Module_ModuleGenerateUnitConfig : SOCOMD_Module_Base
	{
		scopeCurator = 2;
		isGlobal = 1;

		_generalMacro = "SOCOMD_Module_ModuleGenerateUnitConfig";
		displayName = "Loadout To Config";
		function = "SOCOMD_fnc_ModuleGenerateUnitConfig";
	};

	class SOCOMD_Module_PowerGrid : SOCOMD_Module_Base
	{
		scope = 2;
		isGlobal = 1;

		_generalMacro = "SOCOMD_Module_PowerGrid";
		displayName = "Power Grid";
		function = "SOCOMD_fnc_ModulePowerGrid";
	};
	class SOCOMD_Module_PowerGenerator : SOCOMD_Module_Base {
		scope = 2;
		isGlobal = 1;

		_generalMacro = "SOCOMD_Module_PowerGenerator";
		displayName = "Power Generator";
		function = "SOCOMD_fnc_ModulePowerGenerator";
	};
	class SOCOMD_Module_DisableAI : SOCOMD_Module_Base {
		scope = 2;
		scopeCurator = 2;
		isGlobal = 1;
		isTriggerActivated = 1;

		_generalMacro = "SOCOMD_Module_DisableAI";
		displayName = "Disable AI Pathing";
		function = "SOCOMD_fnc_ModuleDisableAI";
	};
	class SOCOMD_Module_EnableAI : SOCOMD_Module_Base {
		scope = 2;
		scopeCurator = 2;
		isGlobal = 1;
		isTriggerActivated = 1;

		_generalMacro = "SOCOMD_Module_EnableAI";
		displayName = "Enable AI Pathing";
		function = "SOCOMD_fnc_ModuleEnableAI";
	};
	class SOCOMD_Module_RevealPlayers : SOCOMD_Module_Base {
		scope = 2;
		scopeCurator = 2;
		isGlobal = 1;
		isTriggerActivated = 1;

		_generalMacro = "SOCOMD_Module_RevealPlayers";
		displayName = "Reveal Players";
		function = "SOCOMD_fnc_ModuleRevealPlayers";
	};
	class SOCOMD_Module_ForgetPlayers : SOCOMD_Module_Base {
		scope = 2;
		scopeCurator = 2;
		isGlobal = 1;
		isTriggerActivated = 1;

		_generalMacro = "SOCOMD_Module_ForgetPlayers";
		displayName = "Forget Players";
		function = "SOCOMD_fnc_ModuleForgetPlayers";
	};
};