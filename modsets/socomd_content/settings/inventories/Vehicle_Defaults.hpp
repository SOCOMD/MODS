#define INVENTORY_VEHICLE_DEFAULT_WEAPONS \
	TRANSPORT_WEAPON(SOCOMD_Item_Primary_Rifleman, 1)

#define INVENTORY_VEHICLE_DEFAULT_MAGAZINES \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_30Rnd, 12) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_20Rnd, 3) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer, 2) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_100Rnd_Tracer, 1) \
	TRANSPORT_MAGAZINE(SmokeShellBlue, 2) \
	TRANSPORT_MAGAZINE(B_IR_Grenade, 2)

#define INVENTORY_VEHICLE_DEFAULT_ITEMS \
	TRANSPORT_ITEM(ACRE_PRC152, 1) \
	TRANSPORT_ITEM(ToolKit, 1) \
	TRANSPORT_ITEM(ACE_wirecutter, 1) \
	TRANSPORT_ITEM(ACE_DefusalKit, 1) \
	TRANSPORT_ITEM(ACE_bodyBag, 6) \
	TRANSPORT_ITEM(ACE_CableTie, 6) \
	TRANSPORT_ITEM(ACE_tourniquet, 0)	\
	TRANSPORT_ITEM(ACE_fieldDressing, 0) \
	TRANSPORT_ITEM(ACE_quikclot, 0) \
	TRANSPORT_ITEM(ACE_elasticBandage, 0) \
	TRANSPORT_ITEM(ACE_packingBandage, 0) \
	TRANSPORT_ITEM(ACE_morphine, 0) \
	TRANSPORT_ITEM(ACE_epinephrine, 0) \
	TRANSPORT_ITEM(ACE_surgicalKit, 0)\
	TRANSPORT_ITEM(ACE_bloodIV_500, 0)

#define INVENTORY_VEHICLE_DEFAULT_BACKPACKS \
	TRANSPORT_BACKPACK(SOCOMD_Item_Backpack_Rifleman, 0)\
	TRANSPORT_BACKPACK(SOCOMD_Medical_Grabbag, 2)\
	TRANSPORT_BACKPACK(ACE_TacticalLadder_Pack, 1)

// ======================================================
// size dependant inventories, doesn't make sense a quad bike carries the same as a Bushmaster

// small
#define INVENTORY_VEHICLE_SMALL_WEAPONS \
	TRANSPORT_WEAPON(SOCOMD_Item_Primary_Rifleman, 1) 

#define INVENTORY_VEHICLE_SMALL_MAGAZINES \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_30Rnd, 4) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_20Rnd, 2) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer, 2) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_100Rnd_Tracer, 1) \
	TRANSPORT_MAGAZINE(SmokeShellBlue, 1) \
	TRANSPORT_MAGAZINE(B_IR_Grenade, 2)

#define INVENTORY_VEHICLE_SMALL_ITEMS \
	TRANSPORT_ITEM(ToolKit, 1) \
	TRANSPORT_ITEM(ACRE_PRC152, 1) \
	TRANSPORT_ITEM(ACE_bodyBag, 2) \
	TRANSPORT_ITEM(ACE_CableTie, 6) 

#define INVENTORY_VEHICLE_SMALL_BACKPACKS \
	TRANSPORT_BACKPACK(SOCOMD_Medical_Grabbag, 1)

// Medium
#define INVENTORY_VEHICLE_MEDIUM_WEAPONS \
	TRANSPORT_WEAPON(SOCOMD_Item_Primary_Rifleman, 1) \
	TRANSPORT_WEAPON(HAFM_LAW, 1) \

#define INVENTORY_VEHICLE_MEDIUM_MAGAZINES \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_30Rnd, 8) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_20Rnd, 4) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer, 3) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_100Rnd_Tracer, 2) \
	TRANSPORT_MAGAZINE(SmokeShellBlue, 2) \
	TRANSPORT_MAGAZINE(B_IR_Grenade, 2)

#define INVENTORY_VEHICLE_MEDIUM_ITEMS \
	TRANSPORT_ITEM(ToolKit, 1) \
	TRANSPORT_ITEM(ACRE_PRC152, 1) \
	TRANSPORT_ITEM(ACE_bodyBag, 2) \
	TRANSPORT_ITEM(ACE_CableTie, 6) 

#define INVENTORY_VEHICLE_MEDIUM_BACKPACKS \
	TRANSPORT_BACKPACK(SOCOMD_Medical_Grabbag, 2)

// large
#define INVENTORY_VEHICLE_LARGE_WEAPONS \
	TRANSPORT_WEAPON(SOCOMD_Item_Primary_Rifleman, 2) \
	TRANSPORT_WEAPON(HAFM_LAW, 2) \

#define INVENTORY_VEHICLE_LARGE_MAGAZINES \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_30Rnd, 12) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_20Rnd, 8) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer, 6) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_100Rnd_Tracer, 4) \
	TRANSPORT_MAGAZINE(SmokeShellBlue, 4) \
	TRANSPORT_MAGAZINE(B_IR_Grenade, 4)

#define INVENTORY_VEHICLE_LARGE_ITEMS \
	TRANSPORT_ITEM(ToolKit, 1) \
	TRANSPORT_ITEM(ACRE_PRC152, 1) \
	TRANSPORT_ITEM(ACE_bodyBag, 2) \
	TRANSPORT_ITEM(ACE_CableTie, 6) 

#define INVENTORY_VEHICLE_LARGE_BACKPACKS \
	TRANSPORT_BACKPACK(SOCOMD_Medical_Grabbag, 2)\
	TRANSPORT_BACKPACK(ACE_TacticalLadder_Pack, 1)

// ======================================================
//  vehicle specific loadouts

// 6x6 ATV

#define INVENTORY_VEHICLE_6X6_ITEMS \
	TRANSPORT_ITEM(ToolKit, 1) \
	TRANSPORT_ITEM(ACRE_PRC117F, 1) \
	TRANSPORT_ITEM(ACE_bodyBag, 2) \
	TRANSPORT_ITEM(ACE_CableTie, 6) 
