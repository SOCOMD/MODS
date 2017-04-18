//////////////////////////////////////////////////////////////////////
// UNIFORM

class Uniform_Base;
class U_B_CombatUniform_mcam : Uniform_Base
{
	class ItemInfo;
};

class SOCOMD_Uniform_LongSleeve : U_B_CombatUniform_mcam
{
	scope = public;
	author = "SOCOMD & massi";
	displayName = "SOCOMD Multcam Uniform (Sleeve Down)";
	picture = "\socomd_data\uniform\icons\icon_u_ir1_co.paa";

	class ItemInfo : ItemInfo
	{
		uniformModel = "-";
		uniformClass = "SOCOMD_Soldier_LongSleeve";
		containerClass = "Supply80";
		mass = 10;
	};
};

class SOCOMD_Uniform_ShortSleeve : SOCOMD_Uniform_LongSleeve
{
	scope = public;
	author = "SOCOMD & massi";
	picture = "\socomd_data\uniform\icons\icon_u_ir2_co.paa";
	displayName = "SOCOMD Multcam Uniform (Sleeve Up)";
	 
	class ItemInfo : ItemInfo
	{
		uniformModel = "-";
		uniformClass = "SOCOMD_Soldier_ShortSleeve";
		containerClass = "Supply80";
		mass = 10;
	};
};

class SOCOMD_Uniform_Officer_LongSleeve : SOCOMD_Uniform_LongSleeve
{
	scope = public;
	author = "SOCOMD & massi";
	picture = "\socomd_data\uniform\icons\icon_u_ir1_co.paa";
	displayName = "SOCOMD Multcam Officer Uniform (Sleeve Down)";

	class ItemInfo : ItemInfo
	{
		uniformModel = "-";
		uniformClass = "SOCOMD_Officer_LongSleeve";
		containerClass = "Supply80";
		mass = 10;
	};
};

class SOCOMD_Uniform_Officer_ShortSleeve: SOCOMD_Uniform_Officer_LongSleeve
{
	scope = public;
	author = "SOCOMD & massi";
	picture = "\socomd_data\uniform\icons\icon_u_ir2_co.paa";
	displayName = "SOCOMD Multcam Officer Uniform (Sleeve Up)";

	class ItemInfo : ItemInfo
	{
		uniformModel = "-";
		uniformClass = "SOCOMD_Officer_ShortSleeve";
		containerClass = "Supply80";
		mass = 10;
	};
};

class U_B_Wetsuit : Uniform_Base
{
	class ItemInfo;
};

class SOCOMD_Uniform_Diver : U_B_Wetsuit
{
	scope = public;
	author = "SOCOMD & massi";
	displayName = "SOCOMD Wetsuit";
	
	class ItemInfo : ItemInfo
	{
		uniformModel = "-";
		uniformClass = "SOCOMD_Diver";
		uniformType = "Neopren";
		containerClass = "Supply80";
		mass = 10;
	};
};

class U_I_pilotCoveralls;
class SOCOMD_Uniform_GSuit : U_I_pilotCoveralls
{
	scope = public;
	author = "SOCOMD";
	displayName = "SOCOMD Pilot G-Suit";
	ACE_GForceCoef = 0.7;
};