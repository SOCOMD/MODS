class SOCOMD_fentanylItem : Item_Base_F {
	scope=public;
	scopeCurator=public;
	displayName="Fentanyl 100mcg/2mL";
    icon="socomd_data_core\icon\VPN.paa";
	vehicleClass="Items";

	class TransportItems {
		TRANSPORT_ITEM(SOCOMD_fentanyl,1)
	};
};

class SOCOMD_naloxonelItem : Item_Base_F {
	scope=2;
	scopeCurator=2;
	displayName="Naloxone 1.6mg/4mL";
	author="Monk";
    icon="socomd_data_core\icon\VPN.paa";
	vehicleClass="Items";
	class TransportItems {
		TRANSPORT_ITEM(SOCOMD_naloxone,1)
	};
};

class Leaflet_05_F;
class SOCOMD_ApapLitter : Leaflet_05_F {
	hiddenSelectionsTextures[]= {
		"socomd_data_core\icon\apap_litter.paa"
	};
};

class SOCOMD_ApapItem : Item_Base_F {
	scope=2;
	scopeCurator=2;
	displayName="Paracetemol 1g";
	icon="socomd_data_core\icon\apap.paa";
	model="\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
	vehicleClass="Items";
	class TransportItems {
		TRANSPORT_ITEM(SOCOMD_Apap,1)
	};
};