class CfgFunctions {
	class SOCOMD {
		class Common {
			file="\socomd_core\functions\common";
			class CommonInitServer { postInit = 1; };
			class CommonInitLocal {};
		};

		class Utils {
			file="\socomd_core\functions\utils";
			class SetUnitLoadout {};
			class SwitchUnitLoadout {};
			class SwitchUnitPrimaryWeapon {};
			class SwitchUnitSecondaryWeapon {};
			class ToggleTranslator {};
			class GetASORVSClassnames {};
			class GetLoadoutScopeFOV {};
		};

		class Actions {
			file="\socomd_core\functions\action";
			class Action_ToggleDiving {};
			class Action_ToggleSnow {};
			class Action_ReplaceCrewColours {};
			class Action_ReplaceUniform {};
			class Action_ReplaceVest {};
			class Action_ReplaceHeadgear {};
			class Action_ReplaceFacewear {};
			class Action_ReplacePrimary {};
			class Action_ReplaceBackpack {};
			class Action_EnterSpectator {};
		};

		class ActionConditions {
			file="\socomd_core\functions\actionConditions";
			class ActionCondition_CanToggleDiving {};
			class ActionCondition_CanSwitchGroundCrewVest {};
			class ActionCondition_CanUseLoadoutWeapon {};
			class ActionCondition_HasPrimary556	{};
			class ActionCondition_CanSwapVest {};
			class ActionCondition_CanSwapBackpacks {};
			class ActionCondition_IsAdmin {};
		};

		class ASORGS {
			file="\socomd_core\functions\asorgs";
			class IsASORGSBlacklisted {};
			class ASORGSCheckScope {};
		};
	};
	/* //NVG sound ---- To be turned back on when updated (Monk)
	class ADDON{
		class functions{
			file = "\socomd_core\functions\sounds";
			class init{postInit = 1;};
		};
	};*/
};
