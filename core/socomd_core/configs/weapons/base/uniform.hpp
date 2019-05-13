class Uniform_Base;
class U_B_CombatUniform_mcam : Uniform_Base
{
	class ItemInfo;
};

class ADFU_G3_MC;
class SOCOMD_Uniform_SleevesDown : ADFU_G3_MC {
	scope = public;
	author = AUTHOR_STR;
	displayName = "SOCOMD Uniform";
};

class SOCOMD_Uniform_SleevesDown_Recon : SOCOMD_Uniform_SleevesDown {
	displayName = "SOCOMD Recon Uniform";
};

class ADFU_G3_MC_Rolled;
class SOCOMD_Uniform_SleevesUp : ADFU_G3_MC_Rolled {
	scope = public;
	author = AUTHOR_STR;
	displayName = "SOCOMD Uniform (Rolled)";
};

class SOCOMD_Uniform_SleevesUp_Recon : SOCOMD_Uniform_SleevesUp {
	displayName = "SOCOMD Recon Uniform (Rolled)";
}

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

class U_B_FullGhillie_lsh;
class SOCOMD_Ghillie_lsh : U_B_FullGhillie_lsh {};

class U_B_FullGhillie_sard;
class SOCOMD_Ghillie_sard : U_B_FullGhillie_sard {};

class U_B_FullGhillie_ard;
class SOCOMD_Ghillie_ard : U_B_FullGhillie_ard {};

class U_B_T_Sniper_F;
class SOCOMD_Ghillie_jngl : U_B_T_Sniper_F {};