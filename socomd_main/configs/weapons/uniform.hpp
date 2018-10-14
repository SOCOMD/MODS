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

class CUP_I_B_PMC_Unit_26;
class SOCOMD_Uniform_Snow_HoodUp : CUP_I_B_PMC_Unit_26 {
	displayName = "SOCOMD Snow Uniform (Hood Up)";
};

class CUP_I_B_PMC_Unit_27;
class SOCOMD_Uniform_Snow_HoodDown : CUP_I_B_PMC_Unit_27 {
	displayName = "SOCOMD Snow Uniform (Hood Down)";
};

class ADFU_G3_MC;
class SOCOMD_Commando_SleevesDown : ADFU_G3_MC {
	displayName = "SOCOMD Commando";
	author = "SOCOMD & ADFU";
};

class ADFU_G3_MC_Rolled;
class SOCOMD_Commando_SleevesUp : ADFU_G3_MC_Rolled {
	displayName = "SOCOMD Commando (Rolled)";
	author = "SOCOMD & ADFU";
};


////////////////
////////CT
////////////



class UniformItem;
class SOCOMD_Commando_BLK_SleevesDown : ADFU_G3_MC {
	displayName = "SOCOMD Black Role";
	author = "SOCOMD & ADFU";
	class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SOCOMD_Soldier_BLK_SleevesDown";
			containerClass="Supply80";
			mass=40;
		};
	model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
};/*
class SOCOMD_Commando_BLK_SleevesUp : ADFU_G3_MC_Rolled {
	displayName = "SOCOMD Black Role (Rolled)";
	author = "SOCOMD & ADFU";
	class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SOCOMD_Soldier_BLK_SleevesDown";
			containerClass="Supply80";
			mass=40;
		};
	model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
};*/
class SOCOMD_Commando_DPDU_SleevesDown : ADFU_G3_MC {
	displayName = "SOCOMD DPDU Tan";
	author = "SOCOMD & ADFU";
	class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SOCOMD_Soldier_DPDU_SleevesDown";
			containerClass="Supply80";
			mass=40;
		};
};
class SOCOMD_Commando_DPDU_SleevesUp : ADFU_G3_MC_Rolled {
	displayName = "SOCOMD DPDU Tan (Rolled)";
	author = "SOCOMD & ADFU";
	class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SOCOMD_Soldier_DPDU_SleevesUp";
			containerClass="Supply80";
			mass=40;
		};
};

class SOCOMD_Commando_DPCU_SleevesDown : ADFU_G3_MC {
	displayName = "SOCOMD DPCU Tan";
	author = "SOCOMD & ADFU";
	class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SOCOMD_Soldier_DPCU_SleevesDown";
			containerClass="Supply80";
			mass=40;
		};
};
class SOCOMD_Commando_DPCU_SleevesUp : ADFU_G3_MC_Rolled {
	displayName = "SOCOMD DPCU Tan (Rolled)";
	author = "SOCOMD & ADFU";
	class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SOCOMD_Soldier_DPCU_SleevesUp";
			containerClass="Supply80";
			mass=40;
		};
};
class SOCOMD_Commando_DPDU_OD_SleevesDown : ADFU_G3_MC {
	displayName = "SOCOMD DPDU OD";
	author = "SOCOMD & ADFU";
	class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SOCOMD_Soldier_DPDU_OD_SleevesDown";
			containerClass="Supply80";
			mass=40;
		};
};
class SOCOMD_Commando_DPDU_OD_SleevesUp : ADFU_G3_MC_Rolled {
	displayName = "SOCOMD DPDU OD (Rolled)";
	author = "SOCOMD & ADFU";
	class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SOCOMD_Soldier_DPDU_OD_SleevesUp";
			containerClass="Supply80";
			mass=40;
		};
};

class SOCOMD_Commando_DPCU_OD_SleevesDown : ADFU_G3_MC {
	displayName = "SOCOMD DPCU OD";
	author = "SOCOMD & ADFU";
	class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SOCOMD_Soldier_DPCU_OD_SleevesDown";
			containerClass="Supply80";
			mass=40;
		};
};
class SOCOMD_Commando_DPCU_OD_SleevesUp : ADFU_G3_MC_Rolled {
	displayName = "SOCOMD DPCU OD (Rolled)";
	author = "SOCOMD & ADFU";
	class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SOCOMD_Soldier_DPCU_OD_SleevesUp";
			containerClass="Supply80";
			mass=40;
		};
};
class survival_uniform_black: Uniform_Base
{
	author="SOCOMD";
	scope=2;
	displayName="SOCOMD Survival Fatigues";
	picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOCOMD_Survival";
		containerClass="Supply40";
		uniformType="Neopren";
		mass=60;
	};
};