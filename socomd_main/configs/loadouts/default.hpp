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
	LOADOUT_ITEM(NVGoggles_WP, 1) \
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
	LOADOUT_ITEM(NVGoggles_WP, 1) \
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

////////////////////////////////////////////////////////////////////////////////
// Sniper

class SOCOMD_SNIPER {
	class Vest {
		type = ITEM_VEST_SNIPER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(ACE_Kestrel4500, 1)
			LOADOUT_ITEM(ACE_RangeCard, 1)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_300_5Rnd, 4)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 5)
		};
	};
};