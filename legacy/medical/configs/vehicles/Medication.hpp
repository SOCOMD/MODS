    
class SOCOMD_MorphineItem : Item_Base_F {
    scope=SCOPE_PUBLIC;
    scopeCurator=SCOPE_PUBLIC;
    displayName="Morphine 10mg/1mL Ampoule";
    icon="\z\socomd\addons\data\icon\VPN.paa";
    vehicleClass="Items";

    class TransportItems {
        TRANSPORT_ITEM(SOCOMD_morphine,1)
    };
};
class SOCOMD_epinephrineItem : Item_Base_F {
    scope=SCOPE_PUBLIC;
    scopeCurator=SCOPE_PUBLIC;
    displayName="Adrenaline 1mg/1mL Ampoule";
    icon="\z\socomd\addons\data\icon\VPN.paa";
    vehicleClass="Items";

    class TransportItems {
        TRANSPORT_ITEM(SOCOMD_epinephrine,1)
    };
};
class SOCOMD_fentanylItem : Item_Base_F {
    scope=SCOPE_PUBLIC;
    scopeCurator=SCOPE_PUBLIC;
    displayName="Fentanyl 100mcg/2mL";
    icon="\z\socomd\addons\data\icon\VPN.paa";
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
    icon="\z\socomd\addons\data\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        TRANSPORT_ITEM(SOCOMD_naloxone,1)
    };
};
class SOCOMD_ketamineItem : Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Naloxone 1.6mg/4mL";
    author="Monk";
    icon="\z\socomd\addons\data\icon\VPN.paa";
    vehicleClass="Items";
    class TransportItems {
        TRANSPORT_ITEM(SOCOMD_ketamine,1)
    };
};

class Leaflet_05_F;
class SOCOMD_ApapLitter : Leaflet_05_F {
    hiddenSelectionsTextures[]= {
        "\z\socomd\addons\data\icon\apap_litter.paa"
    };
};

class SOCOMD_ApapItem : Item_Base_F {
    scope=2;
    scopeCurator=2;
    displayName="Paracetemol 1g";
    icon="\z\socomd\addons\data\icon\apap.paa";
    model="\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
    vehicleClass="Items";
    class TransportItems {
        TRANSPORT_ITEM(SOCOMD_Apap,1)
    };
};