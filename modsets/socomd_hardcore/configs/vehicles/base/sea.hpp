#define SEA_INVENTORY \
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

class B_Boat_Transport_01_F;
class SOCOMD_SHIP_A : B_Boat_Transport_01_F {
	SEA_INVENTORY
};


class CUP_B_RHIB_USMC;
class SOCOMD_SHIP_B : CUP_B_RHIB_USMC {
	SEA_INVENTORY
};