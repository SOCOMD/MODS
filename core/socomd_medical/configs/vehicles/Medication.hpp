class SOCOMD_FentanylItem : Item_Base_F {
	scope=public;
	scopeCurator=public;
	displayName="Fentanyl 100mcg/2mL";
    icon="socomd_data_core\icon\VPN.paa";
	vehicleClass="Items";

	class TransportItems {
		TRANSPORT_ITEM(SOCOMD_Fentanyl,1)
	};
};

class SOCOMD_NaloxonelItem : Item_Base_F {
	scope=2;
	scopeCurator=2;
	displayName="Naloxone 1.6mg/4mL";
	author="Monk";
    icon="socomd_data_core\icon\VPN.paa";
	vehicleClass="Items";
	class TransportItems {
		TRANSPORT_ITEM(SOCOMD_Naloxone,1)
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