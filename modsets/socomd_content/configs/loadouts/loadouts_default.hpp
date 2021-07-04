//////////////////////////////////////////////////////////////////////
// COMMON SOCOMD LOADOUT ITEMS


#define LOADOUT_STANDARD_MEDICAL \
	LOADOUT_ITEM(ACE_elasticBandage, 8) \
	LOADOUT_ITEM(ACE_quikclot, 8) \
	LOADOUT_ITEM(ACE_epinephrine, 0) \
	LOADOUT_ITEM(ACE_morphine, 2) \
	LOADOUT_ITEM(ACE_tourniquet, 2) \
	LOADOUT_ITEM(SOCOMD_Apap, 3) \
	LOADOUT_ITEM(ACE_packingBandage, 0) \
	LOADOUT_ITEM(ACE_fieldDressing, 4)  \
	LOADOUT_ITEM(KAT_guedel, 2)	

#define LOADOUT_UNIFORM_ESSENTIALS \
	LOADOUT_ITEM(ItemcTabHCam, 1) \
	LOADOUT_ITEM(ACE_EarPlugs, 1) \
	LOADOUT_ITEM(ACE_MapTools, 1) \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
	LOADOUT_ITEM(ACE_SpraypaintGreen, 1) \
	LOADOUT_ITEM(murshun_cigs_cigpack, 1) \
	LOADOUT_ITEM(murshun_cigs_lighter, 1) \
	LOADOUT_ITEM(ACWP_18Rnd_9x21_Mag_USP, 3)

#define LOADOUT_UNIFORM_AO_ESSENTIALS \
	LOADOUT_ITEM(ItemcTabHCam, 1) \
	LOADOUT_ITEM(ACE_EarPlugs, 1) \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
	LOADOUT_ITEM(ACWP_18Rnd_9x21_Mag_USP, 2)

#define LOADOUT_PILOT_ESSENTIALS \
	LOADOUT_ITEM(ItemcTabHCam, 1) \
	LOADOUT_ITEM(ACE_EarPlugs, 1) \
	LOADOUT_ITEM(ACE_MapTools, 1) \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
	LOADOUT_ITEM(ACE_microDAGR, 1) \
	LOADOUT_ITEM(ACE_SpraypaintGreen, 1) \
	LOADOUT_ITEM(murshun_cigs_cigpack, 1) \
	LOADOUT_ITEM(murshun_cigs_lighter, 1) \
	LOADOUT_ITEM(ACWP_18Rnd_9x21_Mag_USP, 3)

#define LOADOUT_VEST_ESSENTIALS \
	LOADOUT_ITEM(CUP_HandGrenade_M67, 2) \
	LOADOUT_ITEM(ACE_Chemlight_HiRed, 2) \
	LOADOUT_ITEM(ACE_M84, 2) \
	LOADOUT_ITEM(SmokeShell, 5) \
	LOADOUT_ITEM(ACRE_PRC343, 1) \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)

#define LOADOUT_VEST_AO_ESSENTIALS \
	LOADOUT_ITEM(ACE_Chemlight_HiWhite, 4) \
	LOADOUT_ITEM(SmokeShellPurple, 2) \
	LOADOUT_ITEM(B_IR_Grenade, 2) \
	LOADOUT_ITEM(ACE_HandFlare_White, 2) \
	LOADOUT_ITEM(ACRE_PRC343, 1) \
	LOADOUT_ITEM(ACRE_PRC152, 2) \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 2)

#define LOADOUT_BACKPACK_ESSENTIALS \
	LOADOUT_ITEM(SOCOMD_NVG, 1) \
	LOADOUT_ITEM(ACE_CableTie, 4)

// COMMON JAC LOADOUT ITEMS

#define LOADOUT_SUPPORT_ESSENTIALS \
	LOADOUT_ITEM(ItemcTabHCam, 1) \
	LOADOUT_ITEM(ACE_EarPlugs, 1) \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
	LOADOUT_ITEM(SOCOMD_GPNVG18b_BLK_F, 1) \
	LOADOUT_ITEM(SOCOMD_NVG, 1) \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 1) \
	LOADOUT_ITEM(ACRE_PRC343, 1) \
	LOADOUT_ITEM(ACE_DAGR, 1) \
	LOADOUT_ITEM(ACE_MapTools, 1)

#define LOADOUT_SUPPORT_STANDARD_MEDICAL \
	LOADOUT_ITEM(ACE_elasticBandage, 8) \
	LOADOUT_ITEM(ACE_quikclot, 8) \
	LOADOUT_ITEM(ACE_epinephrine, 0) \
	LOADOUT_ITEM(ACE_morphine, 1) \
	LOADOUT_ITEM(ACE_tourniquet, 2) \
	LOADOUT_ITEM(SOCOMD_Apap, 4) \
	LOADOUT_ITEM(ACE_packingBandage, 0) \
	LOADOUT_ITEM(ACE_fieldDressing, 0) \
	LOADOUT_ITEM(SOCOMD_VPN, 1)
	
// COMMON TAGE LOADOUT ITEMS

#define TAGE_BACKPACK_ESSENTIALS		 \
	LOADOUT_ITEM(SOCOMD_GPNVG18b_BLK_F, 1)   \
	LOADOUT_ITEM(ACE_MapTools, 1)		 \
	LOADOUT_ITEM(ACE_CableTie, 8)

#define TAGE_VEST_ESSENTIALS             \
	LOADOUT_ITEM(ACE_M84, 4)             \
	LOADOUT_ITEM(SmokeShell, 5)          \
	LOADOUT_ITEM(ACRE_PRC343, 1)         \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 2)

class Inventory_E {};

class SOCOMD_Uniforms {
	Snow = "SOCOMD_Uniform_Snow_HoodDown";
};

class SOCOMD_Commander{
	primary			= "ACWP_M4A5_145_7rail_GL";
	headgear		= "ADFU_H_Airframe_Cover_03_MC";
	isCommander		= 1;
};
class SOCOMD_Leader{
	primary			= "ACWP_M4A5_145_7rail_GL";
	headgear		= "ADFU_H_Airframe_Cover_03_MC";
	isCommander		= 1;
};
class SOCOMD_2IC{
	primary			= "ACWP_M4A5_145_7rail_GL";
	headgear		= "ADFU_H_Airframe_Cover_03_MC";
	isCommander		= 1;
};
class SOCOMD_Rifleman{
	primary			= "ACWP_M4A5_145_troy_base";
	headgear		= "ADFU_H_Airframe_Cover_03_MC";
};
class SOCOMD_MachineGunner{
	primary			= "CUP_lmg_minimi_railed";
	headgear		= "ADFU_H_Airframe_Cover_03_MC";
};
class SOCOMD_Medic{
	primary			= "ACWP_M4A5_145_troy_base";
	headgear		= "ADFU_H_Airframe_Cover_03_MC";
};

class SOCOMD_Marksman{
	primary			= "ACWP_sr25";
	headgear		= "ADFU_H_Airframe_Cover_03_MC";
	binocular		= "ACE_Yardage450";
};
class SOCOMD_Recon {
	primary		    = "bnae_trg42_camo2_virtual";
	handgun			= "ACWP_USP";
	handgunMagazine = "ACWP_18Rnd_9x21_Mag_USP";
	headgear		= "ADFU_H_Airframe_Cover_03_MC";
	binocular		= "ACE_Vector";
	gps			    = "ItemMicroDAGR";
	class Vest {
		type = ITEM_VEST_RECON;
		class Inventory	{
			LOADOUT_ITEM(5Rnd_338LM_Magazine, 7)
			LOADOUT_ITEM(5Rnd_APDS_338LM_Magazine, 2)
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_RECON;
		class Inventory	{
		};
	};
};

class SOCOMD_Recon_Assistant {
	primary			= "ACWP_sr25";
	headgear		= "ADFU_H_Airframe_Cover_03_MC";
	class Backpack {
		type = ITEM_BACKPACK_RECON;
		class Inventory	{
		};
	};
};

class SOCOMD_AT {
	primary			= "ACWP_M4A5_145_troy_base";
	headgear		= "ADFU_H_Airframe_Cover_03_MC";
	secondary		= "SOCOMD_Carl_Gustav";
	class Backpack {
		type = ITEM_BACKPACK_AT;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(tf47_m3maaws_HEAT, 1)
			LOADOUT_ITEM(tf47_m3maaws_HE, 1)
		};
	};
};

class SOCOMD_Sapper {
	primary			= "ACWP_M4A5_145_troy_base";
	headgear		= "ADFU_H_Airframe_Cover_03_MC";
	class Backpack {
		class Inventory	{
			LOADOUT_ITEM(ACE_VMH3, 1)
		};
	};
};
class SOCOMD_Breacher {
	primary			= "ACWP_M4A5_145_troy_base";
	headgear		= "ADFU_H_Airframe_Cover_03_MC";
	class Vest {
		class Inventory	{
			LOADOUT_ITEM(CUP_6Rnd_B_Beneli_74Pellets, 5)
		};
	};

	class Backpack {
		class Inventory	{
			LOADOUT_ITEM(SOCOMD_Shotgun, 1)
		};
	};
};
class SOCOMD_Logistician {
	primary			= "ACWP_M4A5_145_troy_base";
	headgear		= "ADFU_H_Airframe_Cover_03_MC";	
};