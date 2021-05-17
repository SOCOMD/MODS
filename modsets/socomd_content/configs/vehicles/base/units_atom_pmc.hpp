
    class CFP_O_WAGNER_Assault_Boat_WDL_01;
    class CFP_O_WAGNER_Assault_Boat_WDL_01_OCimport_01 : CFP_O_WAGNER_Assault_Boat_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_WAGNER_Assault_Boat_WDL_01_OCimport_02 : CFP_O_WAGNER_Assault_Boat_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class B_Heli_Light_01_dynamicLoadout_F;
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_01 : B_Heli_Light_01_dynamicLoadout_F { scope = 0; class EventHandlers; class Turrets; };
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_02 : B_Heli_Light_01_dynamicLoadout_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
        };
    };

    class B_Heli_Light_01_F;
    class B_Heli_Light_01_F_OCimport_01 : B_Heli_Light_01_F { scope = 0; class EventHandlers; class Turrets; };
    class B_Heli_Light_01_F_OCimport_02 : B_Heli_Light_01_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_I_SUV_ION;
    class CUP_I_SUV_ION_OCimport_01 : CUP_I_SUV_ION { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_SUV_ION_OCimport_02 : CUP_I_SUV_ION_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
            class CargoTurret_09;
        };
    };

    class CFP_O_WAGNER_Hilux_WDL_01;
    class CFP_O_WAGNER_Hilux_WDL_01_OCimport_01 : CFP_O_WAGNER_Hilux_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_WAGNER_Hilux_WDL_01_OCimport_02 : CFP_O_WAGNER_Hilux_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CFP_O_WAGNER_Hilux_DShKM_WDL_01;
    class CFP_O_WAGNER_Hilux_DShKM_WDL_01_OCimport_01 : CFP_O_WAGNER_Hilux_DShKM_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_WAGNER_Hilux_DShKM_WDL_01_OCimport_02 : CFP_O_WAGNER_Hilux_DShKM_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_O_WAGNER_Van_Transport_WDL_01;
    class CFP_O_WAGNER_Van_Transport_WDL_01_OCimport_01 : CFP_O_WAGNER_Van_Transport_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_WAGNER_Van_Transport_WDL_01_OCimport_02 : CFP_O_WAGNER_Van_Transport_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class CUP_I_PMC_Soldier_TL;
    class CUP_I_PMC_Soldier_TL_OCimport_01 : CUP_I_PMC_Soldier_TL { scope = 0; class EventHandlers; };
    class CUP_I_PMC_Soldier_TL_OCimport_02 : CUP_I_PMC_Soldier_TL_OCimport_01 { class EventHandlers; };


    class O_OPulauPMCWoodland_Assault_Boat_01 : CFP_O_WAGNER_Assault_Boat_WDL_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 0;
        faction = "O_PulauPMC_Woodland";
        crew = "O_OPulauPMCWoodland_Tactical_Driver_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_AH_6Little_Bird_01 : B_Heli_Light_01_dynamicLoadout_F_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-6 Little Bird";
        side = 0;
        faction = "O_PulauPMC_Woodland";
        crew = "O_OPulauPMCWoodland_Tactical_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "O_OPulauPMCWoodland_Tactical_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_MH_6Littlebird_01 : B_Heli_Light_01_F_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-6 Littlebird";
        side = 0;
        faction = "O_PulauPMC_Woodland";
        crew = "O_OPulauPMCWoodland_Tactical_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "O_OPulauPMCWoodland_Tactical_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_SUV_01 : CUP_I_SUV_ION_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "SUV";
        side = 0;
        faction = "O_PulauPMC_Woodland";
        crew = "O_OPulauPMCWoodland_Tactical_Driver_01";

        class Turrets : Turrets {
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_Hilux_01 : CFP_O_WAGNER_Hilux_WDL_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux";
        side = 0;
        faction = "O_PulauPMC_Woodland";
        crew = "O_OPulauPMCWoodland_Tactical_Driver_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_Hilux_DShKM_01 : CFP_O_WAGNER_Hilux_DShKM_WDL_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [DShKM]";
        side = 0;
        faction = "O_PulauPMC_Woodland";
        crew = "O_OPulauPMCWoodland_Tactical_Driver_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OPulauPMCWoodland_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_Van_Transport_01 : CFP_O_WAGNER_Van_Transport_WDL_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van Transport";
        side = 0;
        faction = "O_PulauPMC_Woodland";
        crew = "O_OPulauPMCWoodland_Tactical_Driver_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\Soft_F_Orange\Van_02\Data\van_body_Green_CO.paa'];_unit setObjectTextureGlobal [1,'\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa'];_unit setObjectTextureGlobal [2,'\a3\soft_f_orange\van_02\data\van_glass_transport_CA.paa'];_unit setObjectTextureGlobal [3,'\a3\Soft_F_Orange\Van_02\Data\van_body_Green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Green";

    };

    class O_OPulauPMCWoodland_Tactical_Coordinator_01 : CUP_I_PMC_Soldier_TL_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tactical Coordinator";
        side = 0;
        faction = "O_PulauPMC_Woodland";

        identityTypes[] = {"Head_Euro","LanguageENG_F","CUP_G_ARMY"};

        uniformClass = "CUP_I_B_PMC_Unit_36";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_rngr","H_HelmetB_light","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_rngr","H_HelmetB_light","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"ACWP_M4A5_105_troy_AFG","acwp_glock17_black","CUP_Vector21Nite"};
        respawnWeapons[] = {"ACWP_M4A5_105_troy_AFG","acwp_glock17_black","CUP_Vector21Nite"};

        magazines[] = {"ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock","ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock"};
        respawnMagazines[] = {"ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock","ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock"};

        ALiVE_orbatCreator_loadout[] = {{"ACWP_M4A5_105_troy_AFG","","M300_R_black","SMA_eotech552",{"ACWP_30rnd_556x45_EPR_PMAG",30},{},""},{},{"acwp_glock17_black","","","",{"ACWP_17Rnd_9x21_Mag_glock",18},{},""},{"CUP_I_B_PMC_Unit_36",{{"CUP_NVG_PVS7",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"ACWP_30rnd_556x45_EPR_PMAG",3,30},{"ACWP_17Rnd_9x21_Mag_glock",1,18}}},{"CUP_V_CPC_communicationsbelt_rngr",{}},{},"H_HelmetB_light","",{"CUP_Vector21Nite","","","",{},{},""},{"","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_Team_Leader_01 : O_OPulauPMCWoodland_Tactical_Coordinator_01 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "O_PulauPMC_Woodland";

        identityTypes[] = {"Head_Euro","LanguageENG_F","CUP_G_ARMY"};

        uniformClass = "CUP_I_B_PMC_Unit_43";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_rngr","H_HelmetB_light","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_rngr","H_HelmetB_light","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"ACWP_M4A5_105_troy_AFG","acwp_glock17_black","CUP_Vector21Nite"};
        respawnWeapons[] = {"ACWP_M4A5_105_troy_AFG","acwp_glock17_black","CUP_Vector21Nite"};

        magazines[] = {"ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock","ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock"};
        respawnMagazines[] = {"ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock","ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock"};

        ALiVE_orbatCreator_loadout[] = {{"ACWP_M4A5_105_troy_AFG","","M300_R_black","SMA_eotech552",{"ACWP_30rnd_556x45_EPR_PMAG",30},{},""},{},{"acwp_glock17_black","","","",{"ACWP_17Rnd_9x21_Mag_glock",18},{},""},{"CUP_I_B_PMC_Unit_43",{{"CUP_NVG_PVS7",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"ACWP_30rnd_556x45_EPR_PMAG",3,30},{"ACWP_17Rnd_9x21_Mag_glock",1,18}}},{"CUP_V_CPC_communicationsbelt_rngr",{}},{},"H_HelmetB_light","G_Balaclava_blk",{"CUP_Vector21Nite","","","",{},{},""},{"","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_Rifleman_01 : O_OPulauPMCWoodland_Tactical_Coordinator_01 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "O_PulauPMC_Woodland";

        identityTypes[] = {"Head_Euro","LanguageENG_F","CUP_G_ARMY"};

        uniformClass = "CUP_I_B_PMC_Unit_42";

        linkedItems[] = {"CUP_V_CPC_tl_rngr","SP_BeanieHat_Black","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_CPC_tl_rngr","SP_BeanieHat_Black","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"ACWP_M4A5_105_troy_AFG","acwp_glock17_black"};
        respawnWeapons[] = {"ACWP_M4A5_105_troy_AFG","acwp_glock17_black"};

        magazines[] = {"ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock","ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock"};
        respawnMagazines[] = {"ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock","ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock"};

        ALiVE_orbatCreator_loadout[] = {{"ACWP_M4A5_105_troy_AFG","","M300_R_black","SMA_eotech552",{"ACWP_30rnd_556x45_EPR_PMAG",30},{},""},{},{"acwp_glock17_black","","","",{"ACWP_17Rnd_9x21_Mag_glock",18},{},""},{"CUP_I_B_PMC_Unit_42",{{"CUP_NVG_PVS7",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"ACWP_30rnd_556x45_EPR_PMAG",3,30},{"ACWP_17Rnd_9x21_Mag_glock",1,18}}},{"CUP_V_CPC_tl_rngr",{{"ACWP_30rnd_556x45_EPR_PMAG",4,30},{"CUP_HandGrenade_M67",4,1},{"SmokeShell",2,1}}},{},"SP_BeanieHat_Black","VSM_Peltor_OD_glasses",{},{"","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_Rifleman_AT_01 : O_OPulauPMCWoodland_Tactical_Coordinator_01 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman [AT]";
        side = 0;
        faction = "O_PulauPMC_Woodland";

        identityTypes[] = {"Head_Asian","LanguageENG_F","CUP_G_ARMY"};

        uniformClass = "CUP_I_B_PMC_Unit_19";

        linkedItems[] = {"CUP_V_CPC_weapons_rngr","CUP_H_RUS_K6_3_Goggles_khaki","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_CPC_weapons_rngr","CUP_H_RUS_K6_3_Goggles_khaki","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"ACWP_M4A5_105_troy_AFG","CUP_launch_RPG7V","acwp_glock17_black"};
        respawnWeapons[] = {"ACWP_M4A5_105_troy_AFG","CUP_launch_RPG7V","acwp_glock17_black"};

        magazines[] = {"ACWP_30rnd_556x45_EPR_PMAG","CUP_PG7V_M","ACWP_17Rnd_9x21_Mag_glock","ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock"};
        respawnMagazines[] = {"ACWP_30rnd_556x45_EPR_PMAG","CUP_PG7V_M","ACWP_17Rnd_9x21_Mag_glock","ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock"};

        backpack = "CUP_B_Bergen_BAF";

        ALiVE_orbatCreator_loadout[] = {{"ACWP_M4A5_105_troy_AFG","","M300_R_black","SMA_eotech552",{"ACWP_30rnd_556x45_EPR_PMAG",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{"acwp_glock17_black","","","",{"ACWP_17Rnd_9x21_Mag_glock",18},{},""},{"CUP_I_B_PMC_Unit_19",{{"CUP_NVG_PVS7",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"ACWP_30rnd_556x45_EPR_PMAG",2,30}}},{"CUP_V_CPC_weapons_rngr",{{"ACWP_30rnd_556x45_EPR_PMAG",4,30},{"CUP_HandGrenade_M67",4,1},{"SmokeShell",2,1}}},{"CUP_B_Bergen_BAF",{{"zetaborn_krak_mag",3,1},{"CUP_PG7V_M",3,1}}},"CUP_H_RUS_K6_3_Goggles_khaki","",{},{"","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_Machinegunner_01 : O_OPulauPMCWoodland_Tactical_Coordinator_01 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";
        side = 0;
        faction = "O_PulauPMC_Woodland";

        identityTypes[] = {"Head_Euro","LanguageENG_F","CUP_G_ARMY"};

        uniformClass = "CUP_I_B_PMC_Unit_36";

        linkedItems[] = {"CUP_V_CPC_weapons_rngr","ADFU_H_Airframe_03_tan","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_CPC_weapons_rngr","ADFU_H_Airframe_03_tan","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"sma_minimi_mk3_762tlb","acwp_glock17_black","CUP_Vector21Nite"};
        respawnWeapons[] = {"sma_minimi_mk3_762tlb","acwp_glock17_black","CUP_Vector21Nite"};

        magazines[] = {"SMA_150Rnd_762_M80A1","ACWP_17Rnd_9x21_Mag_glock","SMA_150Rnd_762_M80A1","ACWP_17Rnd_9x21_Mag_glock"};
        respawnMagazines[] = {"SMA_150Rnd_762_M80A1","ACWP_17Rnd_9x21_Mag_glock","SMA_150Rnd_762_M80A1","ACWP_17Rnd_9x21_Mag_glock"};

        backpack = "KIT_BAG_pince_OD";

        ALiVE_orbatCreator_loadout[] = {{"sma_minimi_mk3_762tlb","","","optic_Arco_AK_blk_F",{"SMA_150Rnd_762_M80A1",150},{},""},{},{"acwp_glock17_black","","","",{"ACWP_17Rnd_9x21_Mag_glock",18},{},""},{"CUP_I_B_PMC_Unit_36",{{"CUP_NVG_PVS7",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"ACWP_17Rnd_9x21_Mag_glock",1,18}}},{"CUP_V_CPC_weapons_rngr",{{"SMA_150Rnd_762_M80A1",2,150}}},{"KIT_BAG_pince_OD",{{"SmokeShell",6,1},{"CUP_HandGrenade_M67",3,1},{"SMA_150Rnd_762_M80A1",1,150}}},"ADFU_H_Airframe_03_tan","CUP_G_Shades_Blue",{"CUP_Vector21Nite","","","",{},{},""},{"","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_Medic_01 : O_OPulauPMCWoodland_Tactical_Coordinator_01 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 0;
        faction = "O_PulauPMC_Woodland";

        identityTypes[] = {"Head_Asian","LanguageENG_F","CUP_G_ARMY"};

        uniformClass = "CUP_I_B_PMC_Unit_16";

        linkedItems[] = {"CUP_V_CPC_medicalbelt_rngr","CUP_H_RUS_6B47","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_CPC_medicalbelt_rngr","CUP_H_RUS_6B47","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Mk16_CQC_FG_black","acwp_glock17_black"};
        respawnWeapons[] = {"CUP_arifle_Mk16_CQC_FG_black","acwp_glock17_black"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_black","ACWP_17Rnd_9x21_Mag_glock","CUP_30Rnd_556x45_Stanag_Mk16_black","ACWP_17Rnd_9x21_Mag_glock"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_black","ACWP_17Rnd_9x21_Mag_glock","CUP_30Rnd_556x45_Stanag_Mk16_black","ACWP_17Rnd_9x21_Mag_glock"};

        backpack = "CFP_Kitbag_Woodland";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk16_CQC_FG_black","ACE_muzzle_mzls_L","M300_R_black","CUP_optic_Elcan_SpecterDR_black",{"CUP_30Rnd_556x45_Stanag_Mk16_black",30},{},""},{},{"acwp_glock17_black","","","",{"ACWP_17Rnd_9x21_Mag_glock",18},{},""},{"CUP_I_B_PMC_Unit_16",{{"CUP_NVG_PVS7",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"CUP_30Rnd_556x45_Stanag_Mk16_black",3,30},{"ACWP_17Rnd_9x21_Mag_glock",2,18}}},{"CUP_V_CPC_medicalbelt_rngr",{{"CUP_HandGrenade_M67",2,1},{"SmokeShell",4,1},{"CUP_30Rnd_556x45_Stanag_Mk16_black",5,30}}},{"CFP_Kitbag_Woodland",{{"ACE_elasticBandage",10},{"ACE_bloodIV_500",5},{"KAT_ChestSeal",4},{"ACE_epinephrine",4},{"ACE_morphine",4},{"ACE_packingBandage",10},{"ACE_apap",6},{"ACE_quikclot",10},{"ACE_salineIV_500",2},{"ACE_tourniquet",4}}},"CUP_H_RUS_6B47","CUP_G_Oakleys_Clr",{},{"","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_Marksman_01 : O_OPulauPMCWoodland_Tactical_Coordinator_01 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "O_PulauPMC_Woodland";

        identityTypes[] = {"Head_African","LanguageENG_F","CUP_G_ARMY"};

        uniformClass = "SP_0000_Standard_PulloverUniform_ATacsFG";

        linkedItems[] = {"lbt_light_od","CUP_H_PMC_Cap_Back_EP_Tan","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"lbt_light_od","CUP_H_PMC_Cap_Back_EP_Tan","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_HK417_20","acwp_glock19_black","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_arifle_HK417_20","acwp_glock19_black","CUP_Vector21Nite"};

        magazines[] = {"CUP_20Rnd_762x51_HK417","ACWP_19Rnd_9x21_Mag_glock","CUP_20Rnd_762x51_HK417","ACWP_19Rnd_9x21_Mag_glock"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_HK417","ACWP_19Rnd_9x21_Mag_glock","CUP_20Rnd_762x51_HK417","ACWP_19Rnd_9x21_Mag_glock"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_HK417_20","CUP_muzzle_mfsup_Flashhider_762x51_Black","","CUP_optic_SB_11_4x20_PM",{"CUP_20Rnd_762x51_HK417",20},{},""},{},{"acwp_glock19_black","","","",{"ACWP_19Rnd_9x21_Mag_glock",19},{},""},{"SP_0000_Standard_PulloverUniform_ATacsFG",{{"CUP_NVG_PVS7",1},{"ACE_EarPlugs",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"CUP_20Rnd_762x51_HK417",1,20},{"SmokeShell",1,1},{"ACWP_19Rnd_9x21_Mag_glock",1,19}}},{"lbt_light_od",{{"CUP_20Rnd_762x51_HK417",5,20},{"CUP_HandGrenade_M67",2,1},{"SmokeShellGreen",3,1},{"ACWP_19Rnd_9x21_Mag_glock",1,19},{"SmokeShell",1,1}}},{},"CUP_H_PMC_Cap_Back_EP_Tan","CUP_G_Oakleys_Clr",{"CUP_Vector21Nite","","","",{},{},""},{"","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_Tactical_Driver_01 : O_OPulauPMCWoodland_Tactical_Coordinator_01 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tactical Driver";
        side = 0;
        faction = "O_PulauPMC_Woodland";

        identityTypes[] = {"Head_Euro","LanguageENG_F","CUP_G_ARMY"};

        uniformClass = "CUP_I_B_PMC_Unit_40";

        linkedItems[] = {"CUP_V_PMC_CIRAS_OD_Veh","H_Booniehat_mgrn","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_PMC_CIRAS_OD_Veh","H_Booniehat_mgrn","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_smg_MP5SD6","acwp_glock17_black"};
        respawnWeapons[] = {"CUP_smg_MP5SD6","acwp_glock17_black"};

        magazines[] = {"CUP_30Rnd_9x19_MP5","ACWP_17Rnd_9x21_Mag_glock","CUP_30Rnd_9x19_MP5","ACWP_17Rnd_9x21_Mag_glock"};
        respawnMagazines[] = {"CUP_30Rnd_9x19_MP5","ACWP_17Rnd_9x21_Mag_glock","CUP_30Rnd_9x19_MP5","ACWP_17Rnd_9x21_Mag_glock"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_MP5SD6","","","SMA_eotech552",{"CUP_30Rnd_9x19_MP5",30},{},""},{},{"acwp_glock17_black","","","",{"ACWP_17Rnd_9x21_Mag_glock",18},{},""},{"CUP_I_B_PMC_Unit_40",{{"CUP_NVG_PVS7",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"ACWP_17Rnd_9x21_Mag_glock",1,18},{"CUP_30Rnd_9x19_MP5",3,30}}},{"CUP_V_PMC_CIRAS_OD_Veh",{{"CUP_HandGrenade_M67",2,1},{"SmokeShell",3,1},{"CUP_30Rnd_9x19_MP5",3,30}}},{},"H_Booniehat_mgrn","milgp_f_face_shield_goggles_shemagh_RGR",{},{"","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_Tactical_Pilot_01 : O_OPulauPMCWoodland_Tactical_Coordinator_01 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tactical Pilot";
        side = 0;
        faction = "O_PulauPMC_Woodland";

        identityTypes[] = {"Head_Euro","LanguageENG_F","CUP_G_ARMY"};

        uniformClass = "SP_0000_Standard_TacticalUniform_Tan_TS";

        linkedItems[] = {"CUP_V_PMC_CIRAS_OD_Veh","H_PilotHelmetHeli_O","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_PMC_CIRAS_OD_Veh","H_PilotHelmetHeli_O","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"SMG_05_F","acwp_glock17_black"};
        respawnWeapons[] = {"SMG_05_F","acwp_glock17_black"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02","ACWP_17Rnd_9x21_Mag_glock","30Rnd_9x21_Mag_SMG_02","ACWP_17Rnd_9x21_Mag_glock"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","ACWP_17Rnd_9x21_Mag_glock","30Rnd_9x21_Mag_SMG_02","ACWP_17Rnd_9x21_Mag_glock"};

        ALiVE_orbatCreator_loadout[] = {{"SMG_05_F","RH_tundra","M300_R_black","SMA_eotech",{"30Rnd_9x21_Mag_SMG_02",30},{},""},{},{"acwp_glock17_black","","","",{"ACWP_17Rnd_9x21_Mag_glock",18},{},""},{"SP_0000_Standard_TacticalUniform_Tan_TS",{{"CUP_NVG_PVS7",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"CUP_30Rnd_9x19_MP5",2,30},{"SmokeShellBlue",3,1}}},{"CUP_V_PMC_CIRAS_OD_Veh",{{"CUP_HandGrenade_M67",3,1},{"CUP_30Rnd_9x19_MP5",3,30}}},{},"H_PilotHelmetHeli_O","",{},{"","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_VIP_Bodyguard_M4A5_01 : O_OPulauPMCWoodland_Tactical_Coordinator_01 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "VIP Bodyguard [M4A5]";
        side = 0;
        faction = "O_PulauPMC_Woodland";

        identityTypes[] = {"Head_Euro","LanguageENG_F","CUP_G_ARMY"};

        uniformClass = "CUP_I_B_PMC_Unit_24";

        linkedItems[] = {"CUP_V_PMC_CIRAS_Black_Patrol","ADFU_H_OpsCore_08_BLK","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_PMC_CIRAS_Black_Patrol","ADFU_H_OpsCore_08_BLK","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"ACWP_M4A5_105_troy_AFG","acwp_glock17_black","CUP_Vector21Nite"};
        respawnWeapons[] = {"ACWP_M4A5_105_troy_AFG","acwp_glock17_black","CUP_Vector21Nite"};

        magazines[] = {"ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock","ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock"};
        respawnMagazines[] = {"ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock","ACWP_30rnd_556x45_EPR_PMAG","ACWP_17Rnd_9x21_Mag_glock"};

        ALiVE_orbatCreator_loadout[] = {{"ACWP_M4A5_105_troy_AFG","","M300_R_black","SMA_eotech552",{"ACWP_30rnd_556x45_EPR_PMAG",30},{},""},{},{"acwp_glock17_black","","","",{"ACWP_17Rnd_9x21_Mag_glock",18},{},""},{"CUP_I_B_PMC_Unit_24",{{"CUP_NVG_PVS7",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"ACWP_30rnd_556x45_EPR_PMAG",3,30},{"ACWP_17Rnd_9x21_Mag_glock",1,18}}},{"CUP_V_PMC_CIRAS_Black_Patrol",{{"ACWP_30rnd_556x45_EPR_PMAG",3,30},{"CUP_HandGrenade_M67",4,1},{"SmokeShell",5,1}}},{},"ADFU_H_OpsCore_08_BLK","Mask_M50",{"CUP_Vector21Nite","","","",{},{},""},{"","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_VIP_Bodyguard_HK417_01 : O_OPulauPMCWoodland_Tactical_Coordinator_01 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "VIP Bodyguard [HK417]";
        side = 0;
        faction = "O_PulauPMC_Woodland";

        identityTypes[] = {"Head_Euro","LanguageENG_F","CUP_G_ARMY"};

        uniformClass = "CUP_I_B_PMC_Unit_24";

        linkedItems[] = {"CUP_V_PMC_CIRAS_Black_Patrol","ADFU_H_OpsCore_08_BLK","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_PMC_CIRAS_Black_Patrol","ADFU_H_OpsCore_08_BLK","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_HK417_20","acwp_glock17_black","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_arifle_HK417_20","acwp_glock17_black","CUP_Vector21Nite"};

        magazines[] = {"CUP_20Rnd_762x51_HK417","ACWP_17Rnd_9x21_Mag_glock","CUP_20Rnd_762x51_HK417","ACWP_17Rnd_9x21_Mag_glock"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_HK417","ACWP_17Rnd_9x21_Mag_glock","CUP_20Rnd_762x51_HK417","ACWP_17Rnd_9x21_Mag_glock"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_HK417_20","CUP_muzzle_mfsup_Flashhider_762x51_Black","","optic_DMS",{"CUP_20Rnd_762x51_HK417",20},{},""},{},{"acwp_glock17_black","","","",{"ACWP_17Rnd_9x21_Mag_glock",18},{},""},{"CUP_I_B_PMC_Unit_24",{{"CUP_NVG_PVS7",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"ACWP_17Rnd_9x21_Mag_glock",1,18},{"CUP_20Rnd_762x51_HK417",3,20}}},{"CUP_V_PMC_CIRAS_Black_Patrol",{{"CUP_HandGrenade_M67",4,1},{"SmokeShell",5,1},{"CUP_20Rnd_762x51_HK417",3,20}}},{},"ADFU_H_OpsCore_08_BLK","Mask_M50",{"CUP_Vector21Nite","","","",{},{},""},{"","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OPulauPMCWoodland_VIP_Bodyguard_M1014_01 : O_OPulauPMCWoodland_Tactical_Coordinator_01 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "VIP Bodyguard [M1014]";
        side = 0;
        faction = "O_PulauPMC_Woodland";

        identityTypes[] = {"Head_African","LanguageENG_F","CUP_G_ARMY"};

        uniformClass = "CUP_I_B_PMC_Unit_24";

        linkedItems[] = {"CUP_V_PMC_CIRAS_Black_Patrol","ADFU_H_OpsCore_08_BLK","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_PMC_CIRAS_Black_Patrol","ADFU_H_OpsCore_08_BLK","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_sgun_M1014_solidstock","acwp_glock17_black","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_sgun_M1014_solidstock","acwp_glock17_black","CUP_Vector21Nite"};

        magazines[] = {"ACWP_17Rnd_9x21_Mag_glock","ACWP_17Rnd_9x21_Mag_glock"};
        respawnMagazines[] = {"ACWP_17Rnd_9x21_Mag_glock","ACWP_17Rnd_9x21_Mag_glock"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_sgun_M1014_solidstock","","","",{},{},""},{},{"acwp_glock17_black","","","",{"ACWP_17Rnd_9x21_Mag_glock",18},{},""},{"CUP_I_B_PMC_Unit_24",{{"CUP_NVG_PVS7",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"ACWP_17Rnd_9x21_Mag_glock",1,18}}},{"CUP_V_PMC_CIRAS_Black_Patrol",{{"CUP_HandGrenade_M67",4,1},{"SmokeShell",5,1},{"CUP_8Rnd_12Gauge_Slug",5,8},{"CUP_8Rnd_12Gauge_Pellets_No4_Buck",5,8}}},{},"ADFU_H_OpsCore_08_BLK","Mask_M50",{"CUP_Vector21Nite","","","",{},{},""},{"","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };
