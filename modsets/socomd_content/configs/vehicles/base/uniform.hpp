class I_sniper_F;
class I_G_Ghillie_Unit : I_sniper_F 
{
	displayName = "Ghillie Suit [GUER]";
	author = "SOCOMD";
	uniformClass="U_G_GhillieSuit";
	hiddenSelections[]=
	{
		"camo",
		"camo3"
	};
	hiddenSelectionsTextures[] = {
		"\x\cfp\addons\uniforms\FieldUniform\camo\CombatUniform_m81.paa",
		"\A3\Characters_F_Exp\OPFOR\Data\ghillie_tna_CO.paa"		
	};
};
class tgc_tssi_m9_hpc;
class tgc_tssi_m9_hpc_: tgc_tssi_m9_hpc
	{
		displayName = "[TGC] TSSI M9 HPC [MC]";
		hiddenSelectionsTextures[] = {"\socomd_data_core\uniform\bags\tssi_bag_mc_CO.paa","\tgc_backpack\data\tssi_molle_CO.paa"};
	};
class CFP_Kitbag_MCam_Grn;
class SSO_Kitbag : CFP_Kitbag_MCam_Grn {
    maximumLoad = 450;
 };
    