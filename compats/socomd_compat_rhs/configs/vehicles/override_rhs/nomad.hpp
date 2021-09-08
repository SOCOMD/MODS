////////////////////////////////////////////////////////////////////////////////
// NOMAD

/*
RHS_CH_47F_10 <== TARGET
RHS_CH_47F
RHS_CH_47F_base
Heli_Transport_02_base_F
Helicopter_Base_H
*/

class RHS_CH_47F_10;
class SOCOMD_NOMAD_A : RHS_CH_47F_10 {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Boeing CH-47 Chinook (5/24)";
	fuelCapacity = 3914;
	fuelConsumptionRate = 0.34;

	class TransportWeapons { 
		INVENTORY_VEHICLE_DEFAULT_WEAPONS 
	}; 
	class TransportMagazines { 
		INVENTORY_VEHICLE_MEDIUM_MAGAZINES 
	}; 
	class TransportItems { 
		INVENTORY_VEHICLE_MEDIUM_ITEMS 
	}; 
	class TransportBackpacks { 
		INVENTORY_VEHICLE_MEDIUM_BACKPACKS 
		TRANSPORT_BACKPACK(SOCOMD_Medical_AO, 1)
	}; 

	
	hiddenSelectionsTextures[] = {
		"socomd_data_cup\data\chinook\ch47_ext_1_co.paa",
		"socomd_data_cup\data\chinook\ch47_ext_2_co.paa",
		"socomd_data_cup\data\chinook\ch47f_nalepky_ca.paa",
	};
};