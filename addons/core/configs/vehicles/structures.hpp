    
class static;
class Building : Static {
    // this appears to do nothing
    // damageResistance=4000; // default 0.004;
};

// FOB Ammo Structure
class Slingload_01_Base_F;
class B_Slingload_01_Ammo_F : Slingload_01_Base_F {
    ace_rearm_isSupplyVehicle = 1;
    ace_rearm_defaultSupply = 500000; // Values of 1mil or more get exported as "large numbers", better to be precise
    ace_cargo_hasCargo = 0;
    ace_cargo_space = 0;
};

// Medical Centre Add Ace Heal Option
class B_Slingload_01_Medevac_F : Slingload_01_Base_F {
    class ACE_Actions {
        class ACE_ZeusHeal {
            displayName = "Full Heal";
            selection = "";
            distance = 7;
            condition = 1;
            exceptions[] = {"isNotInside", "isNotSitting"};
            statement = "_player setdamage 0; [objNull, _player] call ace_medical_treatment_fnc_fullHeal; _player setVariable ['SOCOMD_REVIVAL', SOCOMD_medical_persistantReviveTimer, true]";
        };
    };
};