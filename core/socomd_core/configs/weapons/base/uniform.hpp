class ADFU_G3_MC;
class SOCOMD_Uniform_SleevesDown : ADFU_G3_MC {
	scope = public;
	author = AUTHOR_STR;
	displayName = "SOCOMD Uniform";
};

class ADFU_G3_MC_Rolled;
class SOCOMD_Uniform_SleevesUp : ADFU_G3_MC_Rolled {
	scope = public;
	author = AUTHOR_STR;
	displayName = "SOCOMD Uniform (Rolled)";
};

class U_B_Wetsuit;
class SOCOMD_Uniform_Wetsuit : U_B_Wetsuit {
	scope = public;
	author = AUTHOR_STR;
	displayName = "SOCOMD Wetsuit";
};

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
};