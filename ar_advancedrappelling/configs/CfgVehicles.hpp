class CfgVehicles
{
	class Air;
	class Helicopter : Air
	{
		class ACE_SelfActions
		{
			class ACE_SOCOMDEnableRappel
			{
				displayName = "Enable Rappelling";
				condition = "[_player, vehicle _player] call AR_Rappel_Enable_Action_Check";
				statement = "[_player, vehicle _player] call AR_Rappel_Enable_Action";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class ACE_SOCOMDDisableRappel
			{
				displayName = "Disable Rappelling";
				condition = "[_player, vehicle _player] call AR_Rappel_Disable_Action_Check";
				statement = "[_player, vehicle _player] call AR_Rappel_Disable_Action";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};
		};
	};

	class Man;
	class CAManBase : Man
	{
		class ACE_SelfActions
		{
			class ACE_SOCOMDRappel
			{
				displayName = "Rappel";
				condition = "[_player, vehicle _player] call AR_Rappel_From_Heli_Action_Check";
				statement = "[_player, vehicle _player] call AR_Rappel_From_Heli_Action";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class ACE_SOCOMDDetach
			{
				displayName = "Detach";
				condition = "[_player] call AR_Rappel_Detach_Action_Check";
				statement = "[_player] call AR_Rappel_Detach_Action";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};
		};
	};
};