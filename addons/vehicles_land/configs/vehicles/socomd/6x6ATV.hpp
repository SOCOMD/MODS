    
class NDS_6x6_ATV_base: Car_F
{
    
    idleRpm=600;
    redRpm=2000;
    class complexGearbox
    {
        GearboxRatios[]=
        {
            "R1",
            -2.3510001,
            "N",
            0,
            "D1",
            2.0810001,
            "D2",
            1.5,
            "D3",
            1.1,
            "D4",
            0.75
            "D5",
            0.5
        };
        TransmissionRatios[]=
        {
            "High",
            4
        };
        gearBoxMode="auto";
        moveOffGear=1;
        driveString="D";
        neutralString="N";
        reverseString="R";
    };
};

class NDS_6x6_ATV_MIL2_LR: NDS_6x6_ATV_base {};

class SOCOMD_LR_ATV : NDS_6x6_ATV_MIL2_LR {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "6x6 ATV (1/0)";
    vehicleclass = "Car";
    forceInGarage = 1;

    fuelCapacity = 5; // 4 == 24m at max (4 == default)
    ace_refuel_fuelCapacity = 20;
    ace_refuel_fuelCargo = 40;
    crew = "SOCOMD_Crewman";
    typicalCargo[] = {"SOCOMD_Crewman"};
    class TransportWeapons {
        INVENTORY_VEHICLE_MEDIUM_WEAPONS
    };

    class TransportMagazines {
        INVENTORY_VEHICLE_SMALL_MAGAZINES
    };

    class TransportItems {
        INVENTORY_VEHICLE_6X6_ITEMS
    };

    class TransportBackpacks {
        INVENTORY_VEHICLE_SMALL_BACKPACKS
    };
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver",{"cargo", "all"}, {"ffv", "all"},{"turnedout", "all"}};
            componentName = "ACRE_VRC103";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC117F";
            shortName = "Dash";
        };
    };
};

