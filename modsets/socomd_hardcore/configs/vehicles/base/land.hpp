#define LAND_INVENTORY \
class TransportWeapons { \
	INVENTORY_VEHICLE_DEFAULT_WEAPONS \
}; \
class TransportMagazines { \
	INVENTORY_VEHICLE_DEFAULT_MAGAZINES \
}; \
class TransportItems { \
	INVENTORY_VEHICLE_DEFAULT_ITEMS \
}; \
class TransportBackpacks { \
	INVENTORY_VEHICLE_DEFAULT_BACKPACKS \
};

class bma3_bushmaster_unarmed_F;
class SOCOMD_BUSHMASTER_TRANS : bma3_bushmaster_unarmed_F {
	LAND_INVENTORY
};

class bma3_bushmaster_pws127mm_F;
class SOCOMD_BUSHMASTER_HMG : bma3_bushmaster_pws127mm_F {
	LAND_INVENTORY
};

class B_Truck_01_covered_F;
class SOCOMD_TRUCK_TRANSPORT_A : B_Truck_01_covered_F {
	LAND_INVENTORY
};

class CUP_B_MTVR_Ammo_USA;
class SOCOMD_TRUCK_AMMO_A : CUP_B_MTVR_Ammo_USA {
	LAND_INVENTORY
};

class CUP_B_MTVR_Refuel_USA;
class SOCOMD_TRUCK_FUEL_A : CUP_B_MTVR_Refuel_USA {
	LAND_INVENTORY
};

class CUP_B_MTVR_Repair_USA;
class SOCOMD_TRUCK_REPAIR_A : CUP_B_MTVR_Repair_USA {
	LAND_INVENTORY
};

class I_APC_Wheeled_03_cannon_F;
class SOCOMD_APC_A : I_APC_Wheeled_03_cannon_F {
	LAND_INVENTORY
};

class SOCOMD_APC_B : SOCOMD_APC_A {
	LAND_INVENTORY
};

// class VTN_LAV25A1_WDL;
// class SOCOMD_APC_C : VTN_LAV25A1_WDL {
// 	LAND_INVENTORY
// };

class NDS_6x6_ATV_MIL2_LR; 
class SOCOMD_LR_ATV : NDS_6x6_ATV_MIL2_LR {
	LAND_INVENTORY
};