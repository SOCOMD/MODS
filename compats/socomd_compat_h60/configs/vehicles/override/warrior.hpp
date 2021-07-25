#define INVENTORY_VEHICLE_DEFAULT_WEAPONS \
	TRANSPORT_WEAPON(SOCOMD_Item_Primary_Rifleman, 1)

#define INVENTORY_VEHICLE_DEFAULT_MAGAZINES \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_30Rnd, 12) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_20Rnd, 3) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer, 2) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_100Rnd_Tracer, 1) \
	TRANSPORT_MAGAZINE(SmokeShellBlue, 2) \
	TRANSPORT_MAGAZINE(B_IR_Grenade, 2)

#define INVENTORY_VEHICLE_DEFAULT_ITEMS \
	TRANSPORT_ITEM(ACRE_PRC152, 1) \
	TRANSPORT_ITEM(ToolKit, 1) \
	TRANSPORT_ITEM(ACE_wirecutter, 1) \
	TRANSPORT_ITEM(ACE_DefusalKit, 1) \
	TRANSPORT_ITEM(ACE_bodyBag, 6) \
	TRANSPORT_ITEM(ACE_CableTie, 6) \
	TRANSPORT_ITEM(ACE_tourniquet, 0)	\
	TRANSPORT_ITEM(ACE_fieldDressing, 0) \
	TRANSPORT_ITEM(ACE_quikclot, 0) \
	TRANSPORT_ITEM(ACE_elasticBandage, 0) \
	TRANSPORT_ITEM(ACE_packingBandage, 0) \
	TRANSPORT_ITEM(ACE_morphine, 0) \
	TRANSPORT_ITEM(ACE_epinephrine, 0) \
	TRANSPORT_ITEM(ACE_surgicalKit, 0)\
	TRANSPORT_ITEM(ACE_bloodIV_500, 0)

#define INVENTORY_VEHICLE_DEFAULT_BACKPACKS \
	TRANSPORT_BACKPACK(SOCOMD_Item_Backpack_Rifleman, 0)\
	TRANSPORT_BACKPACK(SOCOMD_Medical_Grabbag, 2)\
	TRANSPORT_BACKPACK(ACE_TacticalLadder_Pack, 1)

// ======================================================
// size dependant inventories, doesn't make sense a quad bike carries the same as a Bushmaster

// small
#define INVENTORY_VEHICLE_SMALL_WEAPONS \
	TRANSPORT_WEAPON(SOCOMD_Item_Primary_Rifleman, 1) 

#define INVENTORY_VEHICLE_SMALL_MAGAZINES \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_30Rnd, 4) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_20Rnd, 2) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer, 2) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_100Rnd_Tracer, 1) \
	TRANSPORT_MAGAZINE(SmokeShellBlue, 1) \
	TRANSPORT_MAGAZINE(B_IR_Grenade, 2)

#define INVENTORY_VEHICLE_SMALL_ITEMS \
	TRANSPORT_ITEM(ToolKit, 1) \
	TRANSPORT_ITEM(ACRE_PRC152, 1) \
	TRANSPORT_ITEM(ACE_bodyBag, 2) \
	TRANSPORT_ITEM(ACE_CableTie, 6) 

#define INVENTORY_VEHICLE_SMALL_BACKPACKS \
	TRANSPORT_BACKPACK(SOCOMD_Medical_Grabbag, 1)

// Medium
#define INVENTORY_VEHICLE_MEDIUM_WEAPONS \
	TRANSPORT_WEAPON(SOCOMD_Item_Primary_Rifleman, 1) \
	TRANSPORT_WEAPON(SOCOMD_LAW, 1) \

#define INVENTORY_VEHICLE_MEDIUM_MAGAZINES \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_30Rnd, 8) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_20Rnd, 4) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer, 3) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_100Rnd_Tracer, 2) \
	TRANSPORT_MAGAZINE(SmokeShellBlue, 2) \
	TRANSPORT_MAGAZINE(B_IR_Grenade, 2)

#define INVENTORY_VEHICLE_MEDIUM_ITEMS \
	TRANSPORT_ITEM(ToolKit, 1) \
	TRANSPORT_ITEM(ACRE_PRC152, 1) \
	TRANSPORT_ITEM(ACE_bodyBag, 2) \
	TRANSPORT_ITEM(ACE_CableTie, 6) 

#define INVENTORY_VEHICLE_MEDIUM_BACKPACKS \
	TRANSPORT_BACKPACK(SOCOMD_Medical_Grabbag, 2)\
	TRANSPORT_BACKPACK(SOCOMD_Medical_AO, 1)

// large
#define INVENTORY_VEHICLE_LARGE_WEAPONS \
	TRANSPORT_WEAPON(SOCOMD_Item_Primary_Rifleman, 2) \
	TRANSPORT_WEAPON(SOCOMD_LAW, 2) \

#define INVENTORY_VEHICLE_LARGE_MAGAZINES \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_30Rnd, 12) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_20Rnd, 8) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer, 6) \
	TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_100Rnd_Tracer, 4) \
	TRANSPORT_MAGAZINE(SmokeShellBlue, 4) \
	TRANSPORT_MAGAZINE(B_IR_Grenade, 4)

#define INVENTORY_VEHICLE_LARGE_ITEMS \
	TRANSPORT_ITEM(ToolKit, 1) \
	TRANSPORT_ITEM(ACRE_PRC152, 1) \
	TRANSPORT_ITEM(ACE_bodyBag, 2) \
	TRANSPORT_ITEM(ACE_CableTie, 6) 

#define INVENTORY_VEHICLE_LARGE_BACKPACKS \
	TRANSPORT_BACKPACK(SOCOMD_Medical_Grabbag, 2)\
	TRANSPORT_BACKPACK(ACE_TacticalLadder_Pack, 1)


	class vtx_uh60M;
	// delete SOCOMD_WARRIOR_B;
	// delete SOCOMD_WARRIOR_A;
	class Heli_Transport_01_base_F; // Helicopter_Base_H
	class vtx_H60_base: Heli_Transport_01_base_F {
		class AnimationSources;
	}; // Heli_Transport_01_base_F
	class vtx_MH60M: vtx_H60_base{
		class AnimationSources:AnimationSources{
			class Fuelprobe_Show;
			
			class FLIR_HIDE;
			
			class RADAR_HIDE;
		};
	};
	class SOCOMD_WARRIOR_A:vtx_uh60M {
		scope = public; 
		scopeCurator = public; 
		editorCategory = SOCOMD_EdCat_Core; 
		editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air; 
		side = WEST; 
		author = AUTHOR_STR; 
		faction = FACTION_STR; 
		vehicleclass = "Air"; 
		forceInGarage = 1; 
		fuelCapacity = 1360; 
		fuelConsumptionRate = 0.28; 
		driverCanSee = CanSeeAll; 
		crew = SOCOMD_PILOT; 
		cost = 40000; 
		threat[] = {1.0,0.9,0.9}; 
		hiddenSelectionsTextures[]=
			{
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"socomd_data_core\S-70A-9 Australia\Hull Main_Aussie.paa",
				"socomd_data_core\S-70A-9 Australia\Misc_Aussie.paa",
				"socomd_data_core\S-70A-9 Australia\Hull Tail_Aussie.paa",
				""
		};
		typicalCargo[] = {SOCOMD_PILOT}; 
		class TransportWeapons { 
			INVENTORY_VEHICLE_DEFAULT_WEAPONS 
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
		class AcreIntercoms { 
			class Intercom_1 { 
				displayName = "Crew Intercom"; 
				shortName = "Crew"; 
				allowedPositions[] = {"driver", "commander", {"turret", "all"}}; 
				limitedPositions[] = {}; 
				numLimitedPositions = 0; 
				masterPositions[] = {"driver"}; 
				connectedByDefault = 1; 
			}; 
		}; 
		class AcreRacks { 
			class Rack_1 { 
				allowedPositions[] = {"driver", "commander", {"turret", "all"}}; 
				componentName = "ACRE_VRC110"; 
				displayName = "Dash"; 
				mountedRadio = "ACRE_PRC152"; 
				shortName = "Dash"; 
			}; 
		}; 
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {
			{1.405, 2.031, 0.05}
		};
		displayName="S-70A-9 Blackhawk (4/11)";
		icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
		picture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";
	};
	class SOCOMD_WARRIOR_B:vtx_MH60M{
		scope = public; 
		scopeCurator = public; 
		editorCategory = SOCOMD_EdCat_Core; 
		editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air; 
		side = WEST; 
		author = AUTHOR_STR; 
		faction = FACTION_STR; 
		vehicleclass = "Air"; 
		forceInGarage = 1; 
		fuelCapacity = 1360; 
		fuelConsumptionRate = 0.28; 
		driverCanSee = CanSeeAll; 
		crew = SOCOMD_PILOT; 
		cost = 40000; 
		threat[] = {1.0,0.9,0.9}; 
		hiddenSelectionsTextures[]=
			{
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"socomd_data_core\S-70A-9 Australia\Hull Main_Aussie.paa",
				"socomd_data_core\S-70A-9 Australia\Misc_Aussie.paa",
				"socomd_data_core\S-70A-9 Australia\Hull Tail_Aussie.paa",
				""
		};
		typicalCargo[] = {SOCOMD_PILOT}; 
		class TransportWeapons { 
			INVENTORY_VEHICLE_DEFAULT_WEAPONS 
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
		class AcreIntercoms { 
			class Intercom_1 { 
				displayName = "Crew Intercom"; 
				shortName = "Crew"; 
				allowedPositions[] = {"driver", "commander", {"turret", "all"}}; 
				limitedPositions[] = {}; 
				numLimitedPositions = 0; 
				masterPositions[] = {"driver"}; 
				connectedByDefault = 1; 
			}; 
		}; 
		class AcreRacks { 
			class Rack_1 { 
				allowedPositions[] = {"driver", "commander", {"turret", "all"}}; 
				componentName = "ACRE_VRC110"; 
				displayName = "Dash"; 
				mountedRadio = "ACRE_PRC152"; 
				shortName = "Dash"; 
			}; 
		}; 
		class AnimationSources:AnimationSources{
			class Fuelprobe_Show:Fuelprobe_Show{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			
			class FLIR_HIDE {
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			
			class RADAR_HIDE {
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {
			{1.405, 2.031, 0.05}
		};
		
		displayName="S-70A-9 Blackhawk FFV (4/10)";
		icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
		picture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";
	};
	