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
			class SwitchUnitLoadout {};			
		};

		class Actions
		{
			file="\socomd_main\functions\action";
			class Action_ReplaceUniform {};
			class Action_ReplaceVest {};
			class Action_ReplaceHeadgear {};
			class Action_ReplacePrimary {};
		};

		class ActionConditions
		{
			file="\socomd_main\functions\actionConditions";
			class ActionCondition_CanSwitchGroundCrewVest {};
			class ActionCondition_HasPrimary556 {};	
		};
	};
};