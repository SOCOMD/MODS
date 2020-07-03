//////////////////////////////////////////////////////////////////////
// COMMON SOCOMD LOADOUT ITEMS

#define LOADOUT_STANDARD_MEDICAL \
	LOADOUT_ITEM(ACE_elasticBandage, 8) \
	LOADOUT_ITEM(ACE_quikclot, 8) \
	LOADOUT_ITEM(ACE_epinephrine, 0) \
	LOADOUT_ITEM(ACE_morphine, 2) \
	LOADOUT_ITEM(ACE_tourniquet, 2) \
	LOADOUT_ITEM(ACE_apap, 3) \
	LOADOUT_ITEM(ACE_packingBandage, 0) \
	LOADOUT_ITEM(ACE_fieldDressing, 4)  \
	LOADOUT_ITEM(KAT_guedel, 2)	

#define LOADOUT_UNIFORM_ESSENTIALS \
	LOADOUT_ITEM(ItemcTabHCam, 1) \
	LOADOUT_ITEM(ACE_EarPlugs, 1) \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
	LOADOUT_ITEM(ACE_Chemlight_HiRed, 2) \
	LOADOUT_ITEM(murshun_cigs_cigpack, 1) \
	LOADOUT_ITEM(murshun_cigs_lighter, 1) \
	LOADOUT_ITEM(ACE_MapTools, 1)
	LOADOUT_ITEM(ACE_DAGR, 1) \
	LOADOUT_ITEM(SOCOMD_Item_Magazine_45ACP_11Rnd, 2)
	// LOADOUT_ITEM(hlc_acc_DBALPL, 1) \

#define LOADOUT_BACKPACK_ESSENTIALS \
	LOADOUT_ITEM(SOCOMD_NVG, 1) \
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
	LOADOUT_ITEM(ACE_elasticBandage, 12) \
	LOADOUT_ITEM(ACE_quikclot, 12) \
	LOADOUT_ITEM(ACE_epinephrine, 2) \
	LOADOUT_ITEM(ACE_morphine, 2) \
	LOADOUT_ITEM(ACE_tourniquet, 2)

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

class SOCOMD_Commander;
class SOCOMD_Leader;
class SOCOMD_Rifleman;
class SOCOMD_Marksman;
class SOCOMD_MachineGunner;
class SOCOMD_Medic;

class SOCOMD_Recon {
	primary		    = "Recon_338";
	handgun			= "Troy_USP";
	handgunMagazine = "18Rnd_9x21_Mag_USP";
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
		type = ITEM_BACKPACK_RECON;
		class Inventory	{
			LOADOUT_ITEM(SOCOMD_tent_item, 1)
			LOADOUT_ITEM(SOCOMD_tent_item_des, 1)
		};
	};
};

class SOCOMD_Recon_Assistant {
	class Backpack {
		type = ITEM_BACKPACK_RECON;
		class Inventory	{
			LOADOUT_ITEM(SOCOMD_tent_item, 1)
			LOADOUT_ITEM(SOCOMD_tent_item_des, 1)
		};
	};
};

class SOCOMD_AT {
	class Backpack {
		type = ITEM_BACKPACK_AT;
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(tf47_m3maaws_HEAT, 1)
			LOADOUT_ITEM(tf47_m3maaws_HE, 1)
		};
	};
};

class SOCOMD_Sapper {
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