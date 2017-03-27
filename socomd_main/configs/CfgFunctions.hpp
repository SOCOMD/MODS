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

		class Actions
		{
			file="\socomd_main\functions\action";
			class Action_ReplaceUniform {};
			class Action_ReplaceHeadgear {};
			class Action_ReplacePrimary {};
			class Action_ChangeClothes {};
		};

		class ActionConditions
		{
			file="\socomd_main\functions\actionConditions";
			class ActionCondition_HasPrimary556 {};			
		};
	};
};