
////////////////////////////////////////////////////////////////////////////////
// QUADBIKE

class SOCOMD_QUADBIKE : B_Quadbike_01_F {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "ATV (1/1)";
    vehicleclass = "Car";
    forceInGarage = 1;
    cost = 10000;
    threat[] = {0.5,0.5,0.2};
    fuelCapacity = 4; // 4 == 24m at max speed
    ace_refuel_fuelCapacity = 10;

    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

    class TransportWeapons {};
    class TransportMagazines {};
    class TransportItems {};
    class TransportBackpacks {};
};