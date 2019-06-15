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
	primary		    = "bnae_trg42_camo2_virtual";
	handgun		    = ITEM_HANDGUN_RIFLEMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_RIFLEMAN;
	headgear		= ITEM_HEADGEAR_RIFLEMAN;
	binocular		= "ACE_Vector";
	gps			    = "ItemMicroDAGR";
	class Vest {
		type = ITEM_VEST_RECON;
		class Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_408_7Rnd, 0)
			LOADOUT_ITEM(5Rnd_338LM_Magazine, 7)
			LOADOUT_ITEM(5Rnd_APDS_338LM_Magazine, 2)
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_SNIPER;
		class Inventory	{
			LOADOUT_ITEM(SOCOMD_tent_item, 1)
			LOADOUT_ITEM(SOCOMD_tent_item_des, 1)
		};
	};
};


////////////////////////////////////////////////////////////////////////////////
// MAG58

class SOCOMD_MMG {
	primary		    = SOCOMD_mag58;
	secondary		= ITEM_SECONDARY_RIFLEMAN;
	handgun		    = ITEM_HANDGUN_RIFLEMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_RIFLEMAN;
	headgear		= ITEM_HEADGEAR_RIFLEMAN;
	binocular		= "ACE_Vector";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_UNIFORM_RIFLEMAN;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_RIFLEMAN;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M, 3)
		};
	};
	class Backpack {
		type = "Kit_Bag_MC";
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};


class SOCOMD_MortarMini {
	primary		    = ITEM_PRIMARY_RIFLEMAN;
	secondary		= "twc_2inch_bag";
	handgun		    = ITEM_HANDGUN_RIFLEMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_RIFLEMAN;
	headgear		= ITEM_HEADGEAR_RIFLEMAN;
	binocular		= "ACE_Vector";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_UNIFORM_RIFLEMAN;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_RIFLEMAN;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};
	class Backpack {
		type = "Kit_Bag_MC";
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(twc_2inch_he_1rnd, 5)
			LOADOUT_ITEM(twc_2inch_smoke_1rnd, 2)
			LOADOUT_ITEM(twc_2inch_illum_1rnd, 2)
		};
	};
};

class SOCOMD_MMGAmmo {
	primary		    = ITEM_PRIMARY_RIFLEMAN;
	handgun		    = ITEM_HANDGUN_RIFLEMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_RIFLEMAN;
	headgear		= ITEM_HEADGEAR_RIFLEMAN;
	binocular		= "ACE_Vector";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_UNIFORM_RIFLEMAN;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_RIFLEMAN;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
			//LOADOUT_ITEM(SOCOMD_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M, 2)
		};
	};
	class Backpack {
		type = "Kit_Bag_MC";
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(SOCOMD_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M, 4)
			
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
		type = "lbt_tl_blk";

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
		type = "lbt_medical_blk";
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
		type = "lbt_tl_blk";
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
			LOADOUT_ITEM(ACE_M26_Clacker, 1)
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
		type = "lbt_operator_blk";
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
			LOADOUT_ITEM(ACE_M26_Clacker, 1)
			LOADOUT_ITEM(ACE_FlareTripMine_Mag, 4)
		};
	};
};

///Russian SSO (DMOCOS)

class SOCOMD_Commander;
class SOCOMD_RUS_Commander: SOCOMD_Commander{
	primary			= Item_RUSSIAN_PRIMARY_Troopleader;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_ITEM(Laserbatteries, 2)
			LOADOUT_ITEM(ACE_HuntIR_monitor, 1)
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST ;
		class Inventory {
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_camo_M, 8)
		};
	};

	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_heavy;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC117F, 1)
			LOADOUT_ITEM(SmokeShellGreen, 2)
			LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)
			LOADOUT_ITEM(UGL_FlareRed_F, 2)
			LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
			LOADOUT_ITEM(ACE_HuntIR_M203, 3)
		};
	};
};

class SOCOMD_Leader;
class SOCOMD_RUS_Leader: SOCOMD_Leader{
	primary			= Item_RUSSIAN_PRIMARY_PatrolLeader;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_ITEM(Laserbatteries, 2)
			LOADOUT_ITEM(ACE_HuntIR_monitor, 1)
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST ;
		class Inventory {
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_camo_M, 8)
		};
	};
	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_heavy;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(CUP_1Rnd_SmokeGreen_GP25_M, 2)
			LOADOUT_ITEM(CUP_1Rnd_HE_GP25_M, 8)
			LOADOUT_ITEM(CUP_FlareRed_GP25_M, 2)
			LOADOUT_ITEM(CUP_1Rnd_SmokeRed_GP25_M, 2)
			LOADOUT_ITEM(ACE_HuntIR_M203, 3)
		};
	};
};

class SOCOMD_Rifleman;
class SOCOMD_RUS_Rifleman: SOCOMD_Rifleman {
	primary			= Item_RUSSIAN_PRIMARY_Rifleman;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST ;
		class Inventory {
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_camo_M, 8)
		};
	};

	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_light;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

class SOCOMD_marksman;
class SOCOMD_RUS_marksman: SOCOMD_marksman {
	primary			= Item_RUSSIAN_PRIMARY_Marksman;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(ACE_20Rnd_65_Creedmor_mag, 7)
		};
	};
	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_light;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

class SOCOMD_Sapper;
class SOCOMD_RUS_Sapper: SOCOMD_Sapper {
	primary			= Item_RUSSIAN_PRIMARY_Sapper;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_camo_M, 8)
		};
	};

	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_heavy;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACE_DefusalKit, 1)
			LOADOUT_ITEM(ACE_M26_Clacker, 1)
			LOADOUT_ITEM(ACE_wirecutter, 1)
			LOADOUT_ITEM(ACE_EntrenchingTool, 1)
			LOADOUT_ITEM(MineDetector, 1)
			LOADOUT_ITEM(DemoCharge_Remote_Mag, 3)
			LOADOUT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 1)
			LOADOUT_ITEM(SatchelCharge_Remote_Mag, 1)
			LOADOUT_ITEM(AMP_Breaching_Charge_Mag, 3)
		};
	};
};

class SOCOMD_MachineGunner;
class SOCOMD_RUS_MachineGunner: SOCOMD_MachineGunner {
	primary			= Item_RUSSIAN_PRIMARY_MachineGunner;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M, 6)
		};
	};

	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_light;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

class SOCOMD_Medic;
class SOCOMD_RUS_Medic: SOCOMD_Medic {
	primary			= Item_RUSSIAN_PRIMARY_Medic;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_camo_M, 8)
		};
	};

	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_heavy;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
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

class SOCOMD_AT;
class SOCOMD_RUS_AT: SOCOMD_AT {
	primary			= Item_RUSSIAN_PRIMARY_AT;
	secondary		= ITEM_RUSSIAN_SECONDARY_AT;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_camo_M, 8)
		};
	};

	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_heavy;
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
		};
	};
};