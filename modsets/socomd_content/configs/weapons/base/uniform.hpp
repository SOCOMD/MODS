class UniformItem;

class ADFU_G3_MC;
class SOCOMD_RUS_SleevesDown : ADFU_G3_MC {
	displayName = "Russian SSO";
	author = "SOCOMD & ADFU";
	class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SOCOMD_RUS_Soldier_SleevesDown";
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