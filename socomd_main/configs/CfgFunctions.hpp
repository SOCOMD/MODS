class CfgFunctions
{
	class SOCOMD
	{
		class Common
		{
			file="\socomd_main\functions\common";
			class CommonInitServer { postInit = 1; };
			class CommonInitLocal {};
		};

		class Utils
		{
			file="\socomd_main\functions\utils";
			class SetUnitLoadout {};
			class SwitchUnitLoadout {};	
			class SwitchUnitLoadoutWeapon {};
			class ToggleTranslator {};
		};

		class Actions
		{
			file="\socomd_main\functions\action";
			class Action_ToggleDiving {};
			class Action_ToggleSnow {};
			class Action_ReplaceCrewColours {};
			class Action_ReplaceUniform {};
			class Action_ReplaceVest {};
			class Action_ReplaceHeadgear {};
			class Action_ReplaceFacewear {};
			class Action_ReplacePrimary {};
			class Action_ReplaceBackpack {};
		};

		class ActionConditions
		{
			file="\socomd_main\functions\actionConditions";
			class ActionCondition_CanToggleDiving {};
			class ActionCondition_CanSwitchGroundCrewVest {};
			class ActionCondition_CanUseLoadoutWeapon {};
			class ActionCondition_HasPrimary556	{};
			class ActionCondition_CanSwapVest {};
			class ActionCondition_CanSwapBackpacks {};
		};
	};
};