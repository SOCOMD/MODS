#define QQPATHTOF(var1) QUOTE(QPATHTOF(var1))

class CfgVehicles {
	class Item_Base_F;

	class socomd_defib_AEDItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Defibrillator";
        author = "Katalam";
        vehicleClass = "Items";
		model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
        class TransportItems {
            MACRO_ADDITEM(socomd_defib_AED,1);
        };
	};
};
