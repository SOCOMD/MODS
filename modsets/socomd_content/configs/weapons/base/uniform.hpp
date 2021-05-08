class UniformItem;

class ADFU_G3_MC;
class SOCOMD_SSO_SleevesDown : ADFU_G3_MC {
	displayName = "Russian SSO";
	author = "SOCOMD & ADFU";
	class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SOCOMD_SSO_Soldier_SleevesDown";
			containerClass="Supply80";
			mass=40;
		};
	model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
};

class CUP_I_B_PMC_Unit_26;
class SOCOMD_Uniform_Snow_HoodUp : CUP_I_B_PMC_Unit_26 {
	displayName = "SOCOMD Snow Uniform (Hood Up)";
};

class CUP_I_B_PMC_Unit_27;
class SOCOMD_Uniform_Snow_HoodDown : CUP_I_B_PMC_Unit_27 {
	displayName = "SOCOMD Snow Uniform (Hood Down)";
};

class CUP_U_CRYE_ATACSFG_Full;
class SOCOMD_Vympel_Uniform_Full : CUP_U_CRYE_ATACSFG_Full {
	scope = public;
	displayName = "Vympel Sleeves Down";
	
	class ItemInfo: UniformItem {
		uniformModel="-";
		uniformClass="SOCOMD_Vympel_Soldier_Full";
		containerClass="Supply80";
		mass=40;
	};
};

class CUP_U_CRYE_ATACSFG_Roll;
class SOCOMD_Vympel_Uniform_Roll : CUP_U_CRYE_ATACSFG_Roll {
	scope = public;
	displayName = "Vympel Sleeves Up";

	class ItemInfo: UniformItem {
		uniformModel="-";
		uniformClass="SOCOMD_Vympel_Soldier_Roll";
		containerClass="Supply80";
		mass=40;
	};
};

class U_O_R_Gorka_01_black_F;
class SOCOMD_FSB_Uniform : U_O_R_Gorka_01_black_F {
    scope = public;
    displayName = "Gorka CBRN Suit";

    class ItemInfo: UniformItem {
        uniformModel="-";
        uniformClass="SOCOMD_FSB_Uniform";
        containerClass="Supply80";
        mass=40;
    };
};
class U_I_GhillieSuit;
class U_G_GhillieSuit:U_I_GhillieSuit{
    displayName = "Ghillie Suit [GUER]";
	hiddenSelections[]=
	{
		"camo",
		"camo3"
	};
	hiddenSelectionsTextures[] = {
		"\x\cfp\addons\uniforms\FieldUniform\camo\CombatUniform_tigerstripe.paa",
		"\A3\Characters_F_Exp\OPFOR\Data\ghillie_tna_CO.paa"		
	};
	author="$STR_A3_Bohemia_Interactive";
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_G_Ghillie_Unit";
		containerClass="Supply60";
		mass=60;
	};
};