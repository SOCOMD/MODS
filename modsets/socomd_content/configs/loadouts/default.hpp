//////////////////////////////////////////////////////////////////////
// COMMON SOCOMD LOADOUT ITEMS

#define LOADOUT_STANDARD_MEDICAL \
	LOADOUT_ITEM(ACE_fieldDressing, 6) \
	LOADOUT_ITEM(ACE_elasticBandage, 6) \
	LOADOUT_ITEM(ACE_packingBandage, 6) \
	LOADOUT_ITEM(ACE_quikclot, 6) \
	LOADOUT_ITEM(ACE_epinephrine, 2) \
	LOADOUT_ITEM(ACE_morphine, 2) \
	LOADOUT_ITEM(ACE_tourniquet, 2)

#define LOADOUT_UNIFORM_ESSENTIALS \
	LOADOUT_ITEM(ItemcTabHCam, 1) \
	LOADOUT_ITEM(ACE_EarPlugs, 1) \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
	LOADOUT_ITEM(ACE_Chemlight_HiRed, 2) \
	LOADOUT_ITEM(murshun_cigs_cigpack, 1) \
	LOADOUT_ITEM(murshun_cigs_lighter, 1) \
	LOADOUT_ITEM(ACE_DAGR, 1) \
	LOADOUT_ITEM(hlc_acc_DBALPL, 1) \
	LOADOUT_ITEM(11Rnd_45ACP_Mag, 3)

#define LOADOUT_BACKPACK_ESSENTIALS \
	LOADOUT_ITEM(SOCOMD_NVG, 1) \
	LOADOUT_ITEM(ACE_MapTools, 1) \
	LOADOUT_ITEM(ACE_CableTie, 4)

#define LOADOUT_VEST_ESSENTIALS \
	LOADOUT_ITEM(CUP_HandGrenade_M67, 2) \
	LOADOUT_ITEM(ACE_M84, 2) \
	LOADOUT_ITEM(SmokeShell, 5) \
	LOADOUT_ITEM(ACRE_PRC343, 1) \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)

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
	LOADOUT_ITEM(ACE_fieldDressing, 6) \
	LOADOUT_ITEM(ACE_elasticBandage, 5) \
	LOADOUT_ITEM(ACE_quikclot, 5) \
	LOADOUT_ITEM(ACE_packingBandage, 5) \
	LOADOUT_ITEM(ACE_morphine, 2) \
	LOADOUT_ITEM(ACE_epinephrine, 2)

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

////////////////////////////////////////////////////////////////////////////////
// Sniper


class SOCOMD_Sniper {
	class Vest {
		type = ITEM_VEST_SNIPER;
		class Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_300_5Rnd, 2)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_408_7Rnd, 0)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 5)
		};
	};
	
	class Backpack {
		type = ITEM_BACKPACK_SNIPER;
		class Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Primary_Rifleman,1)
		};
	};
};

class SOCOMD_Recon {
	class Vest {
		type = ITEM_VEST_RECON;
		class Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_408_7Rnd, 0)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_300_5Rnd, 9)
		};
	};
};


///Counter Terrorism
class TAGE_TroopLeader
{
	primary = "SMG_05_F";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_OpsCore_08_BLK";
	facewear = "Mask_M40";
	binocular = "Laserdesignator";
	gps = "ItemAndroid";

	class Uniform
	{
		type = "SOCOMD_Commando_BLK_SleevesDown";
		class Inventory
		{
			LOADOUT_UNIFORM_ESSENTIALS

			LOADOUT_ITEM(Laserbatteries, 2)
		};
	};

	class Vest
	{
		type = "SOCOMD_lbt_comms_mc_BLK";

		class Inventory
		{
			TAGE_VEST_ESSENTIALS

			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(30Rnd_9x21_Mag_SMG_02, 12)

		};
	};

	class Backpack
	{
		type = "SOG_BAG_recon_blk";
		class Inventory
		{
			TAGE_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL

			LOADOUT_ITEM(ACRE_PRC117F, 1)
		};
	};
};

class TAGE_Medic
{
	primary = "SMG_05_F";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_OpsCore_08_BLK";
	facewear = "Mask_M40";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform
	{
		type = "SOCOMD_Commando_BLK_SleevesDown";
		class Inventory
		{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest
	{
		type = "SOCOMD_Medic_Vest_BLK";
		class Inventory
		{
			TAGE_VEST_ESSENTIALS

			LOADOUT_ITEM(30Rnd_9x21_Mag_SMG_02, 12)
		};
	};

	class Backpack
	{
		type = "SOG_BAG_med_blk";
		class Inventory
		{
			TAGE_BACKPACK_ESSENTIALS

			LOADOUT_ITEM(ACE_surgicalKit, 8)
			LOADOUT_ITEM(ACE_fieldDressing, 25)
			LOADOUT_ITEM(ACE_elasticBandage, 20)
			LOADOUT_ITEM(ACE_packingBandage, 25)
			LOADOUT_ITEM(ACE_quikclot, 25)
			LOADOUT_ITEM(ACE_epinephrine, 10)
			LOADOUT_ITEM(ACE_morphine, 10)
			LOADOUT_ITEM(ACE_tourniquet, 6)
			LOADOUT_ITEM(ACE_salineIV_500, 6)
			LOADOUT_ITEM(ACE_personalAidKit, 2)
		};
	};
};

class TAGE_Sapper
{
	primary = "SMG_05_F";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_OpsCore_08_BLK";
	facewear = "Mask_M40";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform
	{
		type = "SOCOMD_Commando_BLK_SleevesDown";
		class Inventory
		{
			LOADOUT_UNIFORM_ESSENTIALS

		};
	};

	class Vest
	{
		type = "SOCOMD_lbt_tl_mc_BLK";
		class Inventory
		{
			TAGE_VEST_ESSENTIALS

			LOADOUT_ITEM(30Rnd_9x21_Mag_SMG_02, 12)
		};
	};

	class Backpack
	{
		type = "SOG_BAG_BREACHER_BLK";
		class Inventory
		{
			TAGE_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL

			LOADOUT_ITEM(ACE_DefusalKit, 1)
			LOADOUT_ITEM(ACE_Clacker, 1)
			LOADOUT_ITEM(ACE_wirecutter, 1)
			LOADOUT_ITEM(MineDetector, 1)
			LOADOUT_ITEM(AMP_Breaching_Charge_Mag, 3)
		};
	};
};

class TAGE_Sniper
{
	primary = "hlc_rifle_awcovert_BL";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "CUP_H_PMC_Cap_Grey";
	facewear = "milgp_f_face_shield_tactical_shemagh_BLK";
	binocular = "Rangefinder";
	gps = "ItemMicroDAGR";

	class Uniform
	{
		type = "SOCOMD_Commando_BLK_SleevesDown";

		class Inventory
		{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_ITEM(ACE_Kestrel4500, 1)
			LOADOUT_ITEM(ACE_RangeCard, 1)
		};
	};

	class Vest
	{
		type = "SOCOMD_lbt_comms_mc_BLK";
		class Inventory
		{
			TAGE_VEST_ESSENTIALS

			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(hlc_5rnd_300WM_FMJ_AWM, 9)

		};
	};

	class Backpack
	{
		type = "SOG_BAG_blk";
		class Inventory
		{
			LOADOUT_STANDARD_MEDICAL
			TAGE_BACKPACK_ESSENTIALS

			LOADOUT_ITEM(ACE_DefusalKit, 1)
			LOADOUT_ITEM(ACE_Clacker, 1)
			LOADOUT_ITEM(ACE_FlareTripMine_Mag, 4)
		};
	};
};




