#define LOADOUT_VEST_ESSENTIALS \
	LOADOUT_ITEM(CUP_HandGrenade_M67, 2) \
	LOADOUT_ITEM(ACE_M84, 2) \
	LOADOUT_ITEM(SmokeShell, 5) \
	LOADOUT_ITEM(ACRE_PRC343, 1) \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)

class ACE_IR_Strobe_Item;
class ACRE_PRC343;
class SmokeShell;
class ACE_M84;
class CUP_HandGrenade_M67;
class ACE_Kestrel4500;
class ACE_RangeCard;
class SOCOMD_Item_Magazine_556x45_30Rnd;
////////////////////////////////////////////////////////////////////////////////
// Sniper
class Inventory;
class Vest {
	class Inventory;
};
class SOCOMD_SNIPER {
	class Vest;
};
class SOCOMD_SNIPER: SOCOMD_SNIPER {
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