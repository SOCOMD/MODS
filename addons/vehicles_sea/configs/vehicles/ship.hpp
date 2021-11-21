    

////////////////////////////////////////////////////////////////////////////////
// WARRIOR

class B_Boat_Transport_01_F;
class SOCOMD_BOAT : B_Boat_Transport_01_F {
    scope = SCOPE_PROTECTED;
    scopeCurator = SCOPE_PRIVATE;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Sea;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Zodiak F470 CRRC (1/4)";
    vehicleclass = "Ship";
    forceInGarage = 1;
    cost = 40000;
    threat[] = {1.0,0.6,0.6};
    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN};
    armor = 10000;

    //Performance
    simulation = "shipX";
    idleRpm = 100;
    redRpm = 1000;
    thrustDelay = 0.5;
    enginePower = 60;
    engineShiftY = -0.15;
    waterSpeedFactor = 1;
    waterResistanceCoef = 0.015;
    waterAngularDampingCoef = 1.0;
    waterLinearDampingCoefX = 4.0;
    waterLinearDampingCoefY = 1.0;
    rudderForceCoef = 0.3;
    rudderForceCoefAtMaxSpeed = 0.01;
    waterLeakiness = 5;
    waterEffectSpeed = 5;
    waterFastEffectSpeed = 25;
    overSpeedBrakeCoef = 0.1;

    minSpeed = -0.5;
    maxSpeed = 40;

    class complexGearbox {
        GearboxRatios[] = {"R1",-0.5,"N",0,"D1",1.5,"D2",2.0,"D3",2.5};
        TransmissionRatios[] = {"High",1};
        gearBoxMode = "auto";
        moveOffGear = 1;
        driveString = "D";
        neutralString = "N";
        reverseString = "R";
    };
};

class B_Boat_Armed_01_minigun_F;
class SOCOMD_BOAT_ASSAULT : B_Boat_Armed_01_minigun_F {
    scope = SCOPE_PROTECTED;
    scopeCurator = SCOPE_PRIVATE;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Sea;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "ADRHIB HMG (3/8)";
    vehicleclass = "Ship";
    forceInGarage = 1;
    cost = 40000;
    threat[] = {1.0,0.7,0.7};
    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN};
    armor = 10000;

    //Performance
    simulation = "shipX";
    idleRpm = 100;
    redRpm = 1000;
    thrustDelay = 0.5;
    enginePower = 60;
    engineShiftY = -0.15;
    waterSpeedFactor = 1;
    waterResistanceCoef = 0.015;
    waterAngularDampingCoef = 1.0;
    waterLinearDampingCoefX = 4.0;
    waterLinearDampingCoefY = 1.0;
    rudderForceCoef = 0.3;
    rudderForceCoefAtMaxSpeed = 0.01;
    waterLeakiness = 5;
    waterEffectSpeed = 5;
    waterFastEffectSpeed = 25;
    overSpeedBrakeCoef = 0.1;

    minSpeed = -0.5;
    maxSpeed = 40;

    class complexGearbox {
        GearboxRatios[] = {"R1",-0.5,"N",0,"D1",1.5,"D2",2.0,"D3",2.5};
        TransmissionRatios[] = {"High",1};
        gearBoxMode = "auto";
        moveOffGear = 1;
        driveString = "D";
        neutralString = "N";
        reverseString = "R";
    };
};
class B_SDV_01_F;
class SOCOMD_BOAT_SUB : B_SDV_01_F {
    displayname = "SDV (2/2)";
    cost = 40000;

    waterResistanceCoef = 0.002;
    overSpeedBrakeCoef = 0.8;

    minSpeed = -0.5;
    maxSpeed = 35;
};

#define SHIP_BASE(ID, SCOPE, BASE) \
class SOCOMD_SHIP_##ID : ##BASE { \
    scope = SCOPE; \
    scopeCurator = SCOPE; \
    editorCategory = SOCOMD_EdCat_Core; \
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Sea; \
    side = WEST; \
    author = AUTHOR_STR; \
    faction = FACTION_STR; \
    vehicleclass = "Air"; \
    forceInGarage = 1; \
    driverCanSee = CanSeeAll; \
    crew = SOCOMD_RIFLEMAN; \
    typicalCargo[] = {SOCOMD_RIFLEMAN}; \
    class TransportWeapons { \
    }; \
    class TransportMagazines { \
    }; \
    class TransportItems { \
    }; \
    class TransportBackpacks { \
    }; \
};

SHIP_BASE(A,SCOPE_PUBLIC,SOCOMD_BOAT)

SHIP_BASE(C,SCOPE_PUBLIC,SOCOMD_BOAT_SUB)
class Ship_F;
class CUP_RHIB_Base : Ship_F {
    class Turrets;
};
class UK3CB_MDF_B_RHIB;
class SOCOMD_SHIP_B : UK3CB_MDF_B_RHIB {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Sea;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    crew = SOCOMD_RIFLEMAN;
    displayname = "ADRHIB HMG (2/12)";

    armor = 10000;

    //Performance
    simulation = "shipX";
    idleRpm = 100;
    redRpm = 1000;
    thrustDelay = 0.5;
    enginePower = 350;
    engineShiftY = 0;
    waterSpeedFactor = 1;
    waterResistanceCoef = 0.005;
    waterAngularDampingCoef = 1.75;
    waterLinearDampingCoefX = 15.0;
    waterLinearDampingCoefY = 1.2;
    rudderForceCoef = 0.5;
    rudderForceCoefAtMaxSpeed = 0.0045;
    waterLeakiness = 5;
    waterEffectSpeed = 15;
    waterFastEffectSpeed = 40;
    overSpeedBrakeCoef = 0.8;

    minSpeed = -0.5;
    maxSpeed = 70;

    
    class TransportWeapons { 
        INVENTORY_VEHICLE_SMALL_WEAPONS 
    }; 
    class TransportMagazines { 
        INVENTORY_VEHICLE_MEDIUM_MAGAZINES 
    }; 
    class TransportItems { 
        INVENTORY_VEHICLE_MEDIUM_ITEMS 
    }; 
    class TransportBackpacks { 
        INVENTORY_VEHICLE_MEDIUM_BACKPACKS 
    }; 
};