class static;
class Building : Static {
    // this appears to do nothing
    // damageResistance=4000; // default 0.004;
};

// FOB Ammo Structure
class Slingload_01_Base_F;
class B_Slingload_01_Ammo_F : Slingload_01_Base_F {
    ace_rearm_isSupplyVehicle = 1;
    ace_rearm_defaultSupply = 1000000;
    ace_cargo_hasCargo = 0;
    ace_cargo_space = 0;
};

// ace_repair_canRepair