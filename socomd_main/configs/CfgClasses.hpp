class CfgFactionClasses
{
	class SOCOMD
	{
		priority = 1;
		side = 1;
		displayName = "SOCOMD COMMANDOS";
		flag = "socomd_data\icon\adfu_flag_co.paa";
		icon = "socomd_data\icon\icon.paa";
		author = AUTHOR_STR;
	};

	class SOCOMD_SASR
	{
		priority = 1;
		side = 1;
		displayName = "SOCOMD SASR";
		flag = "socomd_data\icon\adfu_flag_co.paa";
		icon = "socomd_data\icon\icon.paa";
		author = AUTHOR_STR;
	};
};

class CfgVehicleClasses
{
	//SOCOMD COMMANDOS
	class SOCOMD_Core
	{
		displayName = "SOCOMD Core Units";
		priority = 1;
	};
	
	class SOCOMD_Sniper
	{
		displayName = "SOCOMD Sniper Team";
		priority = 2;
	};

	class SOCOMD_Weapons
	{
		displayName = "SOCOMD Weapons Team";
		priority = 3;
	};

	//SOCOMD SASR

	class SOCOMD_SASR_Units
	{
		displayName = "SOCOMD SASR Units";
		priority = 1;
	};

	class SOCOMD_SASR_Logistics
	{
		displayName = "SOCOMD SASR Logistics";
		priority = 2;
	};
};