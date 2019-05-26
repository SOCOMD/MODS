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
// Leader
class SOCOMD_Loadout_Base;
class SOCOMD_Unarmed : SOCOMD_Loadout_Base {
	class Uniform;
	class Vest;
	class Backpack;
};
class SOCOMD_Soldier_Base : SOCOMD_Unarmed {
	class Vest : Vest {
		class Inventory;
	};
	class Backpack : Backpack {
		class Inventory;
	};
};

class SOCOMD_Leader : SOCOMD_Soldier_Base {
	class Vest : Vest {
		class Inventory : Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_65x39_30Rnd, 0)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_65x39_30Rnd_Tracer, 0)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Rifleman

class SOCOMD_Rifleman : SOCOMD_Soldier_Base {
	class Vest : Vest {
		class Inventory : Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_65x39_30Rnd, 0)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_65x39_30Rnd_Tracer, 0)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Marksman

class SOCOMD_marksman : SOCOMD_Soldier_Base {
	class Vest : Vest {
		class Inventory : Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_762x51_20Rnd, 7)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Sapper

class SOCOMD_Sapper : SOCOMD_Soldier_Base {
	class Vest : Vest {
		class Inventory : Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_65x39_30Rnd, 0)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_65x39_30Rnd_Tracer, 0)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Medic

class SOCOMD_Medic : SOCOMD_Soldier_Base {
	class Vest : Vest {
		class Inventory : Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_65x39_30Rnd, 0)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_65x39_30Rnd_Tracer, 0)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// LAT

class SOCOMD_AT : SOCOMD_Soldier_Base {
	class Vest : Vest {
		class Inventory	: Inventory {
			LOADOUT_ITEM(SOCOMD_Item_Magazine_65x39_30Rnd, 0)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_65x39_30Rnd_Tracer, 0)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};

	class Backpack : Backpack {
		class Inventory : Inventory {
			LOADOUT_ITEM(MRAWS_HEAT_F, 1)
			LOADOUT_ITEM(MRAWS_HE_F, 1)
		};
	};
};