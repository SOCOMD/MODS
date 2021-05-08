
    class I_CUPARMYASIA_Squad_Leader_01;
    class I_CUPARMYASIA_Squad_Leader_01_OCimport_01 : I_CUPARMYASIA_Squad_Leader_01 { scope = 0; class EventHandlers; };
    class I_CUPARMYASIA_Squad_Leader_01_OCimport_02 : I_CUPARMYASIA_Squad_Leader_01_OCimport_01 { class EventHandlers; };

    class I_CUPARMYASIA_Rifleman_01;
    class I_CUPARMYASIA_Rifleman_01_OCimport_01 : I_CUPARMYASIA_Rifleman_01 { scope = 0; class EventHandlers; };
    class I_CUPARMYASIA_Rifleman_01_OCimport_02 : I_CUPARMYASIA_Rifleman_01_OCimport_01 { class EventHandlers; };

    class I_CUPARMYASIA_Grenadier_01;
    class I_CUPARMYASIA_Grenadier_01_OCimport_01 : I_CUPARMYASIA_Grenadier_01 { scope = 0; class EventHandlers; };
    class I_CUPARMYASIA_Grenadier_01_OCimport_02 : I_CUPARMYASIA_Grenadier_01_OCimport_01 { class EventHandlers; };

    class I_CUPARMYASIA_Machine_Gunner_01;
    class I_CUPARMYASIA_Machine_Gunner_01_OCimport_01 : I_CUPARMYASIA_Machine_Gunner_01 { scope = 0; class EventHandlers; };
    class I_CUPARMYASIA_Machine_Gunner_01_OCimport_02 : I_CUPARMYASIA_Machine_Gunner_01_OCimport_01 { class EventHandlers; };

    class I_CUPARMYASIA_Marksman_01;
    class I_CUPARMYASIA_Marksman_01_OCimport_01 : I_CUPARMYASIA_Marksman_01 { scope = 0; class EventHandlers; };
    class I_CUPARMYASIA_Marksman_01_OCimport_02 : I_CUPARMYASIA_Marksman_01_OCimport_01 { class EventHandlers; };

    class I_CUPARMYASIA_Rifleman_AT_01;
    class I_CUPARMYASIA_Rifleman_AT_01_OCimport_01 : I_CUPARMYASIA_Rifleman_AT_01 { scope = 0; class EventHandlers; };
    class I_CUPARMYASIA_Rifleman_AT_01_OCimport_02 : I_CUPARMYASIA_Rifleman_AT_01_OCimport_01 { class EventHandlers; };

    class I_CUPARMYASIA_Medic_01;
    class I_CUPARMYASIA_Medic_01_OCimport_01 : I_CUPARMYASIA_Medic_01 { scope = 0; class EventHandlers; };
    class I_CUPARMYASIA_Medic_01_OCimport_02 : I_CUPARMYASIA_Medic_01_OCimport_01 { class EventHandlers; };

    class I_CUPARMYASIA_Rifleman_AA_01;
    class I_CUPARMYASIA_Rifleman_AA_01_OCimport_01 : I_CUPARMYASIA_Rifleman_AA_01 { scope = 0; class EventHandlers; };
    class I_CUPARMYASIA_Rifleman_AA_01_OCimport_02 : I_CUPARMYASIA_Rifleman_AA_01_OCimport_01 { class EventHandlers; };

    class I_CUPARMYASIA_Crew_01;
    class I_CUPARMYASIA_Crew_01_OCimport_01 : I_CUPARMYASIA_Crew_01 { scope = 0; class EventHandlers; };
    class I_CUPARMYASIA_Crew_01_OCimport_02 : I_CUPARMYASIA_Crew_01_OCimport_01 { class EventHandlers; };

    class I_CUPARMYASIA_Helicopter_Pilot_01;
    class I_CUPARMYASIA_Helicopter_Pilot_01_OCimport_01 : I_CUPARMYASIA_Helicopter_Pilot_01 { scope = 0; class EventHandlers; };
    class I_CUPARMYASIA_Helicopter_Pilot_01_OCimport_02 : I_CUPARMYASIA_Helicopter_Pilot_01_OCimport_01 { class EventHandlers; };

    class I_CUPARMYASIA_Sniper_01;
    class I_CUPARMYASIA_Sniper_01_OCimport_01 : I_CUPARMYASIA_Sniper_01 { scope = 0; class EventHandlers; };
    class I_CUPARMYASIA_Sniper_01_OCimport_02 : I_CUPARMYASIA_Sniper_01_OCimport_01 { class EventHandlers; };

    class CUP_O_UAZ_MG_CHDKZ;
	class CUP_O_UAZ_MG_CHDKZ_OCimport_01: CUP_O_UAZ_MG_CHDKZ
	{
		scope = 0;
		class EventHandlers;
		class Turrets;
	};
	class CUP_O_UAZ_MG_CHDKZ_OCimport_02: CUP_O_UAZ_MG_CHDKZ_OCimport_01
	{
		class EventHandlers;
		class Turrets: Turrets
		{
			class CargoTurret_01;
			class MainTurret;
		};
	};

    class CFP_O_CHDKZ_Ural_ZU_23_SNW_01;
    class CFP_O_CHDKZ_Ural_ZU_23_SNW_01_OCimport_01 : CFP_O_CHDKZ_Ural_ZU_23_SNW_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_CHDKZ_Ural_ZU_23_SNW_01_OCimport_02 : CFP_O_CHDKZ_Ural_ZU_23_SNW_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_O_CHDKZ_Mi_8MT_SNW_01;
    class CFP_O_CHDKZ_Mi_8MT_SNW_01_OCimport_01 : CFP_O_CHDKZ_Mi_8MT_SNW_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_CHDKZ_Mi_8MT_SNW_01_OCimport_02 : CFP_O_CHDKZ_Mi_8MT_SNW_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class BackTurret;
            class CopilotTurret;
        };
    };

    class CFP_O_CHDKZ_ZU_23_SNW_01;
    class CFP_O_CHDKZ_ZU_23_SNW_01_OCimport_01 : CFP_O_CHDKZ_ZU_23_SNW_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_CHDKZ_ZU_23_SNW_01_OCimport_02 : CFP_O_CHDKZ_ZU_23_SNW_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
    };

    class CFP_O_CHDKZ_DShKM_SNW_01;
    class CFP_O_CHDKZ_DShKM_SNW_01_OCimport_01 : CFP_O_CHDKZ_DShKM_SNW_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_CHDKZ_DShKM_SNW_01_OCimport_02 : CFP_O_CHDKZ_DShKM_SNW_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_O_CHDKZ_DSHkM_Minitripod_SNW_01;
    class CFP_O_CHDKZ_DSHkM_Minitripod_SNW_01_OCimport_01 : CFP_O_CHDKZ_DSHkM_Minitripod_SNW_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_CHDKZ_DSHkM_Minitripod_SNW_01_OCimport_02 : CFP_O_CHDKZ_DSHkM_Minitripod_SNW_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_O_CHDKZ_UAZ_SNW_01;
    class CFP_O_CHDKZ_UAZ_SNW_01_OCimport_01 : CFP_O_CHDKZ_UAZ_SNW_01 { scope = 0; class EventHandlers; };
    class CFP_O_CHDKZ_UAZ_SNW_01_OCimport_02 : CFP_O_CHDKZ_UAZ_SNW_01_OCimport_01 { scope = 0; class EventHandlers; };

    class CFP_O_CHDKZ_Ural_SNW_01;
    class CFP_O_CHDKZ_Ural_SNW_01_OCimport_01 : CFP_O_CHDKZ_Ural_SNW_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_CHDKZ_Ural_SNW_01_OCimport_02 : CFP_O_CHDKZ_Ural_SNW_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CFP_O_CHDKZ_Ural_Open_SNW_01;
    class CFP_O_CHDKZ_Ural_Open_SNW_01_OCimport_01 : CFP_O_CHDKZ_Ural_Open_SNW_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_CHDKZ_Ural_Open_SNW_01_OCimport_02 : CFP_O_CHDKZ_Ural_Open_SNW_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CFP_O_CHDKZ_Ural_Refuel_SNW_01;
    class CFP_O_CHDKZ_Ural_Refuel_SNW_01_OCimport_01 : CFP_O_CHDKZ_Ural_Refuel_SNW_01 { scope = 0; class EventHandlers; };
    class CFP_O_CHDKZ_Ural_Refuel_SNW_01_OCimport_02 : CFP_O_CHDKZ_Ural_Refuel_SNW_01_OCimport_01 { scope = 0; class EventHandlers; };

    class CFP_O_CHDKZ_Ural_Ammo_SNW_01;
    class CFP_O_CHDKZ_Ural_Ammo_SNW_01_OCimport_01 : CFP_O_CHDKZ_Ural_Ammo_SNW_01 { scope = 0; class EventHandlers; };
    class CFP_O_CHDKZ_Ural_Ammo_SNW_01_OCimport_02 : CFP_O_CHDKZ_Ural_Ammo_SNW_01_OCimport_01 { scope = 0; class EventHandlers; };

    class CFP_O_CHDKZ_Ural_Empty_SNW_01;
    class CFP_O_CHDKZ_Ural_Empty_SNW_01_OCimport_01 : CFP_O_CHDKZ_Ural_Empty_SNW_01 { scope = 0; class EventHandlers; };
    class CFP_O_CHDKZ_Ural_Empty_SNW_01_OCimport_02 : CFP_O_CHDKZ_Ural_Empty_SNW_01_OCimport_01 { scope = 0; class EventHandlers; };

    class CFP_O_CHDKZ_Mi_8MT_VIV_SNW_01;
    class CFP_O_CHDKZ_Mi_8MT_VIV_SNW_01_OCimport_01 : CFP_O_CHDKZ_Mi_8MT_VIV_SNW_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_CHDKZ_Mi_8MT_VIV_SNW_01_OCimport_02 : CFP_O_CHDKZ_Mi_8MT_VIV_SNW_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
        };
    };

    class B_Boat_Transport_01_F;
    class B_Boat_Transport_01_F_OCimport_01 : B_Boat_Transport_01_F { scope = 0; class EventHandlers; class Turrets; };
    class B_Boat_Transport_01_F_OCimport_02 : B_Boat_Transport_01_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_O_2b14_82mm_ChDKZ;
    class CUP_O_2b14_82mm_ChDKZ_OCimport_01 : CUP_O_2b14_82mm_ChDKZ { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_2b14_82mm_ChDKZ_OCimport_02 : CUP_O_2b14_82mm_ChDKZ_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
	
	class Item_U_G_GhillieSuit: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Ghillie Suit [GUER]";
		author="Slatery";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_G_GhillieSuit
			{
				name="U_G_GhillieSuit";
				count=1;
			};
		};
	};

    class O_SEARebels_Squad_Leader_01 : I_CUPARMYASIA_Squad_Leader_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "O_SEARebels";

        identityTypes[] = {"Head_Asian","LanguageCHI_F"};

        uniformClass = "U_I_C_Soldier_Camo_F";

        linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_H_RUS_K6_3_Goggles_khaki","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_H_RUS_K6_3_Goggles_khaki","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_15Rnd_9x19_M9","CUP_30Rnd_545x39_AK74M_M","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_15Rnd_9x19_M9","CUP_30Rnd_545x39_AK74M_M","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","CUP_muzzle_mfsup_Flashhider_545x39_Black","","CUP_optic_Kobra",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_C_Soldier_Camo_F",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",1,15},{"CUP_30Rnd_545x39_AK74M_M",3,30},{"SmokeShellRed",1,1}}},{"CUP_V_I_RACS_Carrier_Rig_wdl_2",{{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"CUP_15Rnd_9x19_M9",2,15},{"CUP_60Rnd_545x39_AK74M_M",2,60}}},{},"CUP_H_RUS_K6_3_Goggles_khaki","",{"Binocular","","","",{},{},""},{"","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SEARebels_Rifleman_01 : I_CUPARMYASIA_Rifleman_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "O_SEARebels";

        identityTypes[] = {"Head_Asian","LanguageCHI_F"};

        uniformClass = "U_I_C_Soldier_Camo_F";

        linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_3","SP_PASGTHelmet_Green1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_3","SP_PASGTHelmet_Green1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74_Early"};
        respawnWeapons[] = {"CUP_arifle_AK74_Early"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_Early","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"U_I_C_Soldier_Camo_F",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CUP_V_I_RACS_Carrier_Rig_wdl_3",{{"CUP_HandGrenade_L109A1_HE",1,1},{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_HandGrenade_RGD5",2,1},{"SmokeShellRed",2,1}}},{},"SP_PASGTHelmet_Green1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SEARebels_Grenadier_01 : I_CUPARMYASIA_Grenadier_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "O_SEARebels";

        identityTypes[] = {"Head_Asian","LanguageCHI_F"};

        uniformClass = "SP_0000_Standard_WorkUniform_ATacsFG";

        linkedItems[] = {"CUP_V_MBSS_PACA_Green","SP_PASGTHelmet_Green1","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_MBSS_PACA_Green","SP_PASGTHelmet_Green1","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_camo"};
        respawnWeapons[] = {"CUP_arifle_AK74M_camo"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_30Rnd_545x39_AK74M_camo_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_camo_M","CUP_30Rnd_545x39_AK74M_camo_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_camo","","","CUP_optic_Kobra",{"CUP_30Rnd_545x39_AK74M_camo_M",30},{},""},{},{},{"SP_0000_Standard_WorkUniform_ATacsFG",{{"CUP_30Rnd_545x39_AK74M_camo_M",4,30}}},{"CUP_V_MBSS_PACA_Green",{{"CUP_HandGrenade_L109A1_HE",5,1},{"SmokeShell",4,1}}},{},"SP_PASGTHelmet_Green1","VSM_Balaclava2_black_Goggles",{},{"","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SEARebels_Machine_Gunner_01 : I_CUPARMYASIA_Machine_Gunner_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner";
        side = 0;
        faction = "O_SEARebels";

        identityTypes[] = {"Head_Asian","LanguageCHI_F"};

        uniformClass = "CUP_I_B_PMC_Unit_39";

        linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","CFP_PASGTHelmet_M815","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","CFP_PASGTHelmet_M815","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "B_FieldPack_oli";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CUP_I_B_PMC_Unit_39",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"CUP_V_I_RACS_Carrier_Rig_wdl_2",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2,100},{"CUP_HandGrenade_RGD5",2,1}}},{"B_FieldPack_oli",{{"SmokeShell",4,1},{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"CFP_PASGTHelmet_M815","G_Balaclava_blk",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SEARebels_Marksman_01 : I_CUPARMYASIA_Marksman_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "O_SEARebels";

        identityTypes[] = {"Head_Asian","LanguageCHI_F"};

        uniformClass = "CFP_RAID_M812";

        linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","H_Shemag_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","H_Shemag_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD"};
        respawnWeapons[] = {"CUP_srifle_SVD"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_1_1_open",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_RAID_M812",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"CUP_10Rnd_762x54_SVD_M",2,10}}},{"CUP_V_I_RACS_Carrier_Rig_wdl_2",{{"SmokeShell",4,1},{"SmokeShellRed",1,1},{"CUP_HandGrenade_RGD5",2,1},{"Chemlight_red",2,1}}},{},"H_Shemag_olive","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SEARebels_Rifleman_AT_01 : I_CUPARMYASIA_Rifleman_AT_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman AT";
        side = 0;
        faction = "O_SEARebels";

        identityTypes[] = {"Head_Asian","LanguageCHI_F"};

        uniformClass = "U_I_C_Soldier_Camo_F";

        linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_H_PASGTv2_OD","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_H_PASGTv2_OD","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74_Early","CUP_launch_RPG7V","hgun_Rook40_F"};
        respawnWeapons[] = {"CUP_arifle_AK74_Early","CUP_launch_RPG7V","hgun_Rook40_F"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_PG7V_M","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_PG7V_M","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","16Rnd_9x21_Mag"};

        backpack = "CUP_B_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_Early","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"U_I_C_Soldier_Camo_F",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"Chemlight_red",1,1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CUP_V_I_RACS_Carrier_Rig_wdl_2",{{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",1,1},{"CUP_HandGrenade_RGD5",3,1}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"CUP_H_PASGTv2_OD","VSM_Goggles",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SEARebels_Medic_01 : I_CUPARMYASIA_Medic_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 0;
        faction = "O_SEARebels";

        identityTypes[] = {"Head_Asian","LanguageCHI_F"};

        uniformClass = "U_I_C_Soldier_Camo_F";

        linkedItems[] = {"CUP_V_O_TK_Vest_2","SP_PASGTHelmet_Green2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_O_TK_Vest_2","SP_PASGTHelmet_Green2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "B_FieldPack_oli";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","CUP_optic_Kobra",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"U_I_C_Soldier_Camo_F",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"CUP_30Rnd_545x39_AK74M_M",3,30}}},{"CUP_V_O_TK_Vest_2",{{"CUP_HandGrenade_RGD5",4,1},{"SmokeShell",2,1}}},{"B_FieldPack_oli",{{"ACE_epinephrine",4},{"ACE_bloodIV",2}}},"SP_PASGTHelmet_Green2","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SEARebels_Rifleman_AA_01 : I_CUPARMYASIA_Rifleman_AA_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman AA";
        side = 0;
        faction = "O_SEARebels";

        identityTypes[] = {"Head_Asian","LanguageCHI_F"};

        uniformClass = "CUP_U_C_racketeer_01";

        linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","SP_PASGTHelmet_Tan1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","SP_PASGTHelmet_Tan1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M","CUP_launch_FIM92Stinger_Loaded"};
        respawnWeapons[] = {"CUP_arifle_AK74M","CUP_launch_FIM92Stinger_Loaded"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_Stinger_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_Stinger_M","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "B_TacticalPack_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","CUP_optic_Kobra",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{"CUP_launch_FIM92Stinger_Loaded","","","",{"CUP_Stinger_M",1},{},""},{},{"CUP_U_C_racketeer_01",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"Chemlight_red",1,1},{"CUP_30Rnd_545x39_AK74M_M",2,30}}},{"CUP_V_I_RACS_Carrier_Rig_wdl_2",{{"HandGrenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",1,1}}},{"B_TacticalPack_rgr",{{"CUP_Stinger_M",1,1}}},"SP_PASGTHelmet_Tan1","VSM_Goggles",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SEARebels_Crew_01 : I_CUPARMYASIA_Crew_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crew";
        side = 0;
        faction = "O_SEARebels";

        identityTypes[] = {"Head_Asian","LanguageCHI_F"};

        uniformClass = "CUP_U_O_SLA_Green";

        linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"CUP_U_O_SLA_Green",{{"CUP_30Rnd_545x39_AK74_plum_M",3,30}}},{},{},"CUP_H_RUS_TSH_4_Brown","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SEARebels_Pilot_01 : I_CUPARMYASIA_Helicopter_Pilot_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 0;
        faction = "O_SEARebels";

        identityTypes[] = {"Head_Asian","LanguageCHI_F"};

        uniformClass = "U_I_C_Soldier_Camo_F";

        linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_H_BAF_Helmet_Pilot","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_H_BAF_Helmet_Pilot","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"arifle_AKS_F"};
        respawnWeapons[] = {"arifle_AKS_F"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};

        ALiVE_orbatCreator_loadout[] = {{"arifle_AKS_F","","","",{"30Rnd_545x39_Mag_F",30},{},""},{},{},{"U_I_C_Soldier_Camo_F",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"30Rnd_545x39_Mag_F",3,30}}},{"CUP_V_I_RACS_Carrier_Rig_wdl_2",{{"Chemlight_red",2,1}}},{},"CUP_H_BAF_Helmet_Pilot","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SEARebels_Driver_01 : O_SEARebels_Crew_01 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Driver";
        side = 0;
        faction = "O_SEARebels";

        identityTypes[] = {"Head_Asian","LanguageCHI_F"};

        uniformClass = "CUP_I_B_PMC_Unit_16";

        linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"CUP_I_B_PMC_Unit_16",{{"CUP_30Rnd_545x39_AK74_plum_M",2,30}}},{},{},"CUP_H_RUS_TSH_4_Brown","",{},{"","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SEARebels_Sniper_01 : I_CUPARMYASIA_Sniper_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 0;
        faction = "O_SEARebels";

        identityTypes[] = {"Head_Asian","LanguageCHI_F"};

        uniformClass = "U_G_GhillieSuit";

        linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_H_SLA_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_H_SLA_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_M24_wdl","Binocular"};
        respawnWeapons[] = {"CUP_srifle_M24_wdl","Binocular"};

        magazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24"};
        respawnMagazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M24_wdl","","CUP_Mxx_camo","CUP_optic_LeupoldMk4_10x40_LRT_Woodland",{"CUP_5Rnd_762x51_M24",5},{},"CUP_bipod_Harris_1A2_L"},{},{},{"U_G_GhillieSuit",{{"FirstAidKit",1},{"CUP_5Rnd_762x51_M24",2,5}}},{"CUP_V_I_RACS_Carrier_Rig_wdl_2",{{"SmokeShell",3,1},{"SmokeShellRed",1,1},{"CUP_5Rnd_762x51_M24",5,5},{"CUP_HandGrenade_RGD5",3,1}}},{},"CUP_H_SLA_Helmet","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SEARebels_UAZ_DShKM_01 : CUP_O_UAZ_MG_CHDKZ_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ [DShKM]";
        side = 0;
        faction = "O_SEARebels";
        crew = "O_SEARebels_Driver_01";

        class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType = "";
			};
			class MainTurret: MainTurret
			{
				gunnerType = "";
			};
		};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_cwr_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Green_Soviet";

    };

    class O_SEARebels_Ural_ZU_23_01 : CFP_O_CHDKZ_Ural_ZU_23_SNW_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [ZU-23]";
        side = 0;
        faction = "O_SEARebels";
        crew = "O_SEARebels_Driver_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\WHL_TyreSize3.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class O_SEARebels_Mi_8MT_01 : CFP_O_CHDKZ_Mi_8MT_SNW_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-8MT";
        side = 0;
        faction = "O_SEARebels";
        crew = "O_SEARebels_Pilot_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
            class BackTurret : BackTurret { gunnerType = ""; };
            class CopilotTurret : CopilotTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\civilian\mi8_body_green_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_cia1_2_co.paa'];_unit setObjectTextureGlobal [2,'a3\data_f\clear_empty.paa'];_unit setObjectTextureGlobal [3,'CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "CIV_GREEN";

    };

    class O_SEARebels_ZU_23_01 : CFP_O_CHDKZ_ZU_23_SNW_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZU-23";
        side = 0;
        faction = "O_SEARebels";
        crew = "CFP_O_CHDKZ_Rifleman_AK_74_SNW_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_SEARebels_Gunner_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_SEARebels_Crew_01"; };
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

    class O_SEARebels_DShKM_01 : CFP_O_CHDKZ_DShKM_SNW_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        faction = "O_SEARebels";
        crew = "CFP_O_CHDKZ_Rifleman_AK_74_SNW_01";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SEARebels_DShKM_Minitripod_01 : CFP_O_CHDKZ_DSHkM_Minitripod_SNW_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM Minitripod";
        // side = 0;
        faction = "O_SEARebels";
        crew = "CFP_O_CHDKZ_Rifleman_AK_74_SNW_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SEARebels_Gunner_01 : O_SEARebels_Rifleman_01 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner";
        side = 0;
        faction = "O_SEARebels";

        identityTypes[] = {"Head_Asian","LanguageCHI_F"};

        uniformClass = "U_I_C_Soldier_Camo_F";

        linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_3","SP_PASGTHelmet_Green1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_3","SP_PASGTHelmet_Green1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74_Early"};
        respawnWeapons[] = {"CUP_arifle_AK74_Early"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_Early","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"U_I_C_Soldier_Camo_F",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CUP_V_I_RACS_Carrier_Rig_wdl_3",{{"CUP_HandGrenade_L109A1_HE",1,1},{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_HandGrenade_RGD5",2,1},{"SmokeShellRed",2,1}}},{},"SP_PASGTHelmet_Green1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SEARebels_UAZ_01 : CFP_O_CHDKZ_UAZ_SNW_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ";
        side = 0;
        faction = "O_SEARebels";
        crew = "O_SEARebels_Driver_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_cwr_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_other_cwr_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Green_Soviet";

    };

    class O_SEARebels_Ural_Covered_01 : CFP_O_CHDKZ_Ural_SNW_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Covered]";
        side = 0;
        faction = "O_SEARebels";
        crew = "O_SEARebels_Driver_01";

        // class Turrets : Turrets {
        //     class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        //     class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        // };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\WHL_TyreSize3.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class O_SEARebels_Ural_Open_01 : CFP_O_CHDKZ_Ural_Open_SNW_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Open]";
        side = 0;
        faction = "O_SEARebels";
        crew = "O_SEARebels_Driver_01";

        // class Turrets : Turrets {
        //     class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        //     class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        // };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\WHL_TyreSize3.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class O_SEARebels_Ural_Refuel_01 : CFP_O_CHDKZ_Ural_Refuel_SNW_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Refuel]";
        side = 0;
        faction = "O_SEARebels";
        crew = "O_SEARebels_Driver_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_fuel_chdkz_co.paa'];_unit setObjectTextureGlobal [3,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\WHL_TyreSize3.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class O_SEARebels_Ural_Ammo_01 : CFP_O_CHDKZ_Ural_Ammo_SNW_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Ammo]";
        side = 0;
        faction = "O_SEARebels";
        crew = "O_SEARebels_Driver_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\WHL_TyreSize3.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class O_SEARebels_Ural_Empty_01 : CFP_O_CHDKZ_Ural_Empty_SNW_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Empty]";
        side = 0;
        faction = "O_SEARebels";
        crew = "O_SEARebels_Driver_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\WHL_TyreSize3.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class O_SEARebels_Mi_8MT_VIV_01 : CFP_O_CHDKZ_Mi_8MT_VIV_SNW_01_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-8MT [VIV]";
        side = 0;
        faction = "O_SEARebels";
        crew = "O_SEARebels_Pilot_01";

        // class Turrets : Turrets {
        //     class CopilotTurret : CopilotTurret { gunnerType = ""; };
        // };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\civilian\mi8_body_green_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_cia1_2_co.paa'];_unit setObjectTextureGlobal [2,'a3\data_f\clear_empty.paa'];_unit setObjectTextureGlobal [3,'CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "CIV_GREEN";

    };

    class O_SEARebels_Assault_Boat_01 : B_Boat_Transport_01_F_OCimport_02 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 0;
        faction = "O_SEARebels";
        crew = "O_SEARebels_Driver_01";

        // class Turrets : Turrets {
        //     class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        //     class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        //     class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        //     class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        // };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Black";

    };

    class O_SEARebels_Podnos_2B14_01 : CUP_O_2b14_82mm_ChDKZ_OCimport_02 {
        displayName = "Podnos 2B14";
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "O_SEARebels";
        crew = "O_SEARebels_rifleman_01";

        // class Turrets : Turrets {
        //     class MainTurret : MainTurret { gunnerType = ""; };
        // };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };
	// class CUP_DSHKM_base;
	// class CFP_O_CHDKZ_DShKM_SNW_01: CUP_DSHKM_base
	// {
	// 	displayName = "DShKM";
	// 	author = "Lincoln";
    //     scope = 2;
    //     scopeCurator = 2;
    //     side = 0;
    //     faction = "O_SEARebels";
    //     crew = "O_SEARebels_rifleman_01";

    //     class Turrets : Turrets {
    //         class MainTurret : MainTurret { gunnerType = ""; };
    //     };



    //     class EventHandlers : EventHandlers {
    //         class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

    //         class ALiVE_orbatCreator {
    //             init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
    //         };

    //     };

    //     // custom attributes (do not delete)
    //     ALiVE_orbatCreator_owned = 1;
	// };
	// class CUP_DSHkM_MiniTriPod_base;
	// class CFP_O_CHDKZ_DSHkM_Minitripod_SNW_01: CUP_DSHkM_MiniTriPod_base
	// {
	// 	displayName = "DSHkM Minitripod";
	// 	author = "Lincoln";
    //     scope = 2;
    //     scopeCurator = 2;
    //     side = 0;
    //     faction = "O_SEARebels";
    //     crew = "O_SEARebels_rifleman_01";

    //     class Turrets : Turrets {
    //         class MainTurret : MainTurret { gunnerType = ""; };
    //     };



    //     class EventHandlers : EventHandlers {
    //         class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

    //         class ALiVE_orbatCreator {
    //             init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
    //         };

    //     };

    //     // custom attributes (do not delete)
    //     ALiVE_orbatCreator_owned = 1;
	// };
    class O_OSEARebels_Spotter_01 : O_SEARebels_Sniper_01 {
        author = "Lincoln";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter";
        side = 0;
        faction = "O_SEARebels";

        identityTypes[] = {"Head_Asian","LanguageCHI_F"};

        uniformClass = "U_G_GhillieSuit";

        linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_H_SLA_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_H_SLA_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M4A1_standard_wdl","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_standard_wdl","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_standard_wdl","CUP_muzzle_mfsup_Flashhider_556x45_Black","CUP_acc_ANPEQ_15_Black","RH_ta31rmr",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"U_G_GhillieSuit",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",3,30}}},{"CUP_V_I_RACS_Carrier_Rig_wdl_2",{{"SmokeShell",3,1},{"SmokeShellRed",1,1},{"CUP_HandGrenade_RGD5",3,1}}},{},"CUP_H_SLA_Helmet","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };
