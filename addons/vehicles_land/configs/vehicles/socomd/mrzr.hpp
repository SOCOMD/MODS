class rhsusf_mrzr4_d;
class SOCOMD_RTV_D : rhsusf_mrzr4_d{
    vtx_ace_viv_lockSeats[] = {{},{{3},{4}}};
	scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    forceInGarage = 1;
    author = AUTHOR_STR;
    displayname = "MRZR (1/5)";
    faction = FACTION_STR;
    fuelCapacity = 20;
    ace_refuel_fuelCapacity = 20;
	
    crew = UNIT_SOCOMD_RIFLEMAN;

    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };
    class TransportWeapons { 
        INVENTORY_VEHICLE_SMALL_WEAPONS 
    }; 
    class TransportMagazines { 
        INVENTORY_VEHICLE_SMALL_MAGAZINES 
    }; 
    class TransportItems { 
        INVENTORY_VEHICLE_SMALL_ITEMS 
    }; 
    class TransportBackpacks { 
        INVENTORY_VEHICLE_SMALL_BACKPACKS 
    }; 
};