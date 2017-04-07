////////////////////////////////////////////////////////////////////////////////
// INTERACTIVE BOX

class Land_EngineCrane_01_F;
class SOCOMD_Vehicle_Spawner : Land_EngineCrane_01_F
{
	displayName = "SOCOMD Vehicle Spawner";
	author = AUTHOR_STR;
};

class SOCOMD_Heli_Spawner : Land_EngineCrane_01_F
{
	displayName = "SOCOMD Helicopter Spawner";
	author = AUTHOR_STR;
};

class SOCOMD_Supply_Spawner : Land_EngineCrane_01_F
{
	displayName = "SOCOMD Supply Spawner";
	author = AUTHOR_STR;
};


class Land_PaperBox_closed_F;
class SOCOMD_Interactive_QStore : Land_PaperBox_closed_F
{
	displayName = "SOCOMD Personal Box";
	author = AUTHOR_STR;

	ace_cargo_hasCargo = 0;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 0;
	ace_dragging_canCarry = 0;

	class TransportMagazines {};
	class TransportWeapons {};
	class TransportItems {};
	class TransportBackpacks {};

	class ACE_Actions 
	{
		class ACE_MainActions 
		{
			displayName = "Loadout";
			selection = "";
			distance = 5;
			condition = 1;

			class ACE_SwitchRoleActions
			{
				displayName = "Change Role";
				selection = "";
				distance = 5;
				condition = 1;

				class SOCOMD_Loadout_Trooper
				{
					displayName = "Remove Gear";
					condition = 1;
					statement = "[_player, 'SASR_Trooper'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_PatrolLeader
				{
					displayName = "Patrol Leader";
					condition = 1;
					statement = "[_player, 'SASR_PatrolLeader'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_Marksman
				{
					displayName = "Marksman";
					condition = 1;
					statement = "[_player, 'SASR_Marksman'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_Sniper
				{
					displayName = "Sniper";
					condition = 1;
					statement = "[_player, 'SASR_Sniper'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_MachineGunner
				{
					displayName = "Machine Gunner";
					condition = 1;
					statement = "[_player, 'SASR_MachineGunner'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_Demolitions
				{
					displayName = "Demolitions";
					condition = 1;
					statement = "[_player, 'SASR_Demolitions'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_Saboteur
				{
					displayName = "Saboteur";
					condition = 1;
					statement = "[_player, 'SASR_Saboteur'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_LAT
				{
					displayName = "Light Anti-tank";
					condition = 1;
					statement = "[_player, 'SASR_LAT'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_HAT
				{
					displayName = "Heavy Anti-tank";
					condition = 1;
					statement = "[_player, 'SASR_HAT'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
			};

			class SOCOMD_OpenGearSelector
			{
				displayName = "Personalise";
				condition = 1;
				statement = "call ASORGS_fnc_Open";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class ACE_HeadgearActions 
			{
				displayName = "Headgear";
				selection = "";
				distance = 5;
				condition = 1;

				class SOCOMD_Headgear_TakeCap
				{
					displayName = "Take Cap";
					condition = 1;
					statement = "_player addItem 'SOCOMD_Cap_HS';";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Headgear_TakeBoonie
				{
					displayName = "Take Boonie";
					condition = 1;
					statement = "_player addItem 'SOCOMD_Boonie';";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Headgear_TakeBandanna
				{
					displayName = "Take Bandanna";
					condition = 1;
					statement = "_player addItem 'SOCOMD_Bandanna';";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Headgear_ReplaceHelmet_FASTMulticam
				{
					displayName = "Switch to a FAST Multicam Helmet";
					condition = "!(((headgear _player) == 'SOCOMD_FAST_Multi') OR ((headgear _player) == 'SOCOMD_FAST_Multi_Gog'))";
					statement = "[_player , 'SOCOMD_FAST_Multi'] call SOCOMD_fnc_Action_ReplaceHeadgear";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Headgear_ReplaceHelmet_FASTTan
				{
					displayName = "Switch to a FAST Tan Helmet";
					condition = "!(((headgear _player) == 'SOCOMD_FAST_Tan') OR ((headgear _player) == 'SOCOMD_FAST_Tan_Gog'))";
					statement = "[_player , 'SOCOMD_FAST_Tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Headgear_ReplaceHelmet_MICHMulticam
				{
					displayName = "Switch to a MICH Multicam Helmet";
					condition = "!(((headgear _player) == 'SOCOMD_MICH_Multi') OR ((headgear _player) == 'SOCOMD_MICH_Multi_Gog'))";
					statement = "[_player , 'SOCOMD_MICH_Multi'] call SOCOMD_fnc_Action_ReplaceHeadgear";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Headgear_ReplaceHelmet_MICHTan
				{
					displayName = "Switch to a MICH Tan Helmet";
					condition = "!(((headgear _player) == 'SOCOMD_MICH_Tan') OR ((headgear _player) == 'SOCOMD_MICH_Tan_Gog'))";
					statement = "[_player , 'SOCOMD_MICH_Tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
			};
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// CARGO BOX

class B_CargoNet_01_ammo_F;
class SOCOMD_CargoNet: B_CargoNet_01_ammo_F
{
	displayName = "SOCOMD Cargo Net Box";
	author = AUTHOR_STR;
	
	ace_cargo_space = 8;
	ace_cargo_hasCargo = 1;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 1;
	
	class ACE_Actions 
	{
		class ACE_MainActions 
		{
			displayName = "Interactions";
			selection = "";
			distance = 5;
			condition = 1;
			class ACE_OpenBox {};
		};
	};
	
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportItems {};
	class TransportBackpacks {};
};

////////////////////////////////////////////////////////////////////////////////
// CUSTOM SUPPLY BOXES

class SOCOMD_hkammo_box : Box_NATO_AmmoVeh_F
{
	scope = public;
	displayName = "SOCOMD Painted Weapons Box";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;

	class TransportMagazines
	{
		TRANSPORT_MAGAZINE(1Rnd_HE_Grenade_shell, 20)
		TRANSPORT_MAGAZINE(20Rnd_762x51_Mag, 40)
		TRANSPORT_MAGAZINE(30Rnd_556x45_Stanag, 40)
	};

	class TransportWeapons
	{
		//TRANSPORT_WEAPON(RH_m4a1_ris_des, 20)
		//TRANSPORT_WEAPON(RH_m4a1_ris_m203s_des, 10)
		//TRANSPORT_WEAPON(RH_Hk416, 20)
		//TRANSPORT_WEAPON(RH_hk416_des, 20
	};
};

class SOCOMD_training_box: Box_NATO_AmmoVeh_F
{
	scope = public;
	displayName = "SOCOMD Items Box";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;

	class TransportWeapons
	{
		//TRANSPORT_WEAPON(RH_M4A1_ris_M203s, 12)
		TRANSPORT_WEAPON(CUP_lmg_minimi_railed, 12)
		//TRANSPORT_WEAPON(RH_SR25EC, 12)
		TRANSPORT_WEAPON(HAFM_LAW, 12)
	};

	class TransportMagazines
	{
		TRANSPORT_MAGAZINE(30Rnd_556x45_Stanag, 40)
		TRANSPORT_MAGAZINE(1Rnd_HE_Grenade_shell, 40)
		TRANSPORT_MAGAZINE(ACE_HuntIR_M203, 20)
		TRANSPORT_MAGAZINE(ACE_M84, 20)
		TRANSPORT_MAGAZINE(CUP_200Rnd_TE4_Red_Tracer_556x45_M249, 20)
		TRANSPORT_MAGAZINE(20Rnd_762x51_Mag, 40)
	};

	class TransportItems
	{
		TRANSPORT_ITEM(ACE_HuntIR_monitor, 6)
		TRANSPORT_ITEM(ItemAndroid, 6)
		TRANSPORT_ITEM(ItemcTab, 6)
		TRANSPORT_ITEM(ACE_SpareBarrel, 6)
	};

	class TransportBackpacks
	{
		TRANSPORT_BACKPACK(SOCOMD_Sapper_Backpack, 12)
		TRANSPORT_BACKPACK(SOCOMD_LongRange_Radio, 4)
	};
};

class B_supplyCrate_F;
class SOCOMD_Supply_Crate: B_supplyCrate_F
{
	scope = public;
	accuracy = 1000;
	displayName = "SOCOMD Supply Crate";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;

	class TransportMagazines 
	{
		LandTransportMagazines
	};

	class TransportItems 
	{
		LandTransportItems
	};

	class TransportBackpacks 
	{
		LandTransportBackpacks
	};

	class TransportWeapons 
	{
		LandTransportWeapons
	};
};

class SOCOMD_uniform_crate: NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	accuracy = 1000;
	displayName = "SOCOMD Uniform Crate";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;

	class TransportItems
	{
		TRANSPORT_ITEM(U_B_Wetsuit, 25)
		TRANSPORT_ITEM(G_B_Diving, 25)
		TRANSPORT_ITEM(V_RebreatherB, 25)
		TRANSPORT_ITEM(SOCOMD_Uniform_LongSleeve, 3)
		TRANSPORT_ITEM(SOCOMD_Vest_Operator, 3)
	};

	class TransportBackpacks
	{
		TRANSPORT_BACKPACK(SOCOMD_Backpack, 3)
		TRANSPORT_BACKPACK(SOCOMD_LongRange_Radio, 3)
	};
};

class SOCOMD_Archer_Crate: NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	accuracy = 1000;
	displayName = "SOCOMD Weapons Team Crate";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;
	
	class TransportMagazines 
	{
		TRANSPORT_MAGAZINE(UGL_FlareWhite_F, 10)
		TRANSPORT_MAGAZINE(UGL_FlareGreen_F, 10)
		TRANSPORT_MAGAZINE(UGL_FlareRed_F, 10)
		TRANSPORT_MAGAZINE(1Rnd_SmokeRed_Grenade_shell, 10)
		TRANSPORT_MAGAZINE(30Rnd_556x45_Stanag_Tracer_Red, 20)
		TRANSPORT_MAGAZINE(SmokeShell, 10)
		TRANSPORT_MAGAZINE(SmokeShellGreen, 10)
		//TRANSPORT_MAGAZINE(UK3CB_BAF_1Rnd_81mm_Mo_guided, 2)
		//TRANSPORT_MAGAZINE(UK3CB_BAF_1Rnd_81mm_Mo_LG, 2)
		TRANSPORT_MAGAZINE(CUP_Javelin_M, 2)
		//TRANSPORT_MAGAZINE(UK3CB_BAF_762_100Rnd, 2)
		//TRANSPORT_MAGAZINE(UK3CB_BAF_762_100Rnd_T, 2)
	};

	class TransportItems 
	{
		TRANSPORT_ITEM(ACE_wirecutter, 1)
		TRANSPORT_ITEM(ACE_quikclot, 20)
		TRANSPORT_ITEM(ACE_morphine, 10)
		TRANSPORT_ITEM(ACE_epinephrine, 6)
		TRANSPORT_ITEM(ACE_bloodIV_500, 10)
		TRANSPORT_ITEM(ACE_bodyBag, 4)
		TRANSPORT_ITEM(ACE_CableTie, 20)
		TRANSPORT_ITEM(ACE_DefusalKit, 1)
		TRANSPORT_ITEM(ACE_EarPlugs, 8)
		TRANSPORT_ITEM(optic_tws_mg, 3)
		TRANSPORT_ITEM(optic_NVS, 3)
		TRANSPORT_ITEM(Mask_M40, 14)
	};

	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(tf_rt1523g_rhs, 2)
		TRANSPORT_BACKPACK(SOCOMD_Backpack_Empty, 8)
	};

	class TransportWeapons 
	{
		//TRANSPORT_WEAPON(UK3CB_BAF_L7A2, 2)
		TRANSPORT_WEAPON(CUP_launch_Javelin, 2) // UK3CB_BAF_Javelin_Slung_Tube
		//TRANSPORT_WEAPON(UK3CB_BAF_Javelin_CLU, 2)
		TRANSPORT_WEAPON(CUP_launch_FIM92Stinger, 2)
		//TRANSPORT_WEAPON(UK3CB_BAF_L16_Tripod, 2)
		//TRANSPORT_WEAPON(UK3CB_BAF_L16, 2)
		//TRANSPORT_WEAPON(UK3CB_BAF_Tripod, 4)
		//TRANSPORT_WEAPON(UK3CB_BAF_L134A1, 2)
		//TRANSPORT_WEAPON(UK3CB_BAF_L111A1, 2)
	};
};	

class SOCOMD_Sniper_Crate: NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	accuracy = 1000;
	displayName = "SOCOMD Sniper Team Crate";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;

	class TransportItems
	{
		TRANSPORT_ITEM(U_B_FullGhillie_ard, 2)
		TRANSPORT_ITEM(U_B_FullGhillie_lsh, 2)
		TRANSPORT_ITEM(U_B_FullGhillie_sard, 2)
		TRANSPORT_ITEM(commando_uniform1, 2)
		TRANSPORT_ITEM(commando_uniform2, 2)
		TRANSPORT_ITEM(commando_uniform3, 2)
		TRANSPORT_ITEM(ACE_fieldDressing, 10)
		TRANSPORT_ITEM(ACE_quikclot, 10)
		TRANSPORT_ITEM(ACE_morphine, 4)
		TRANSPORT_ITEM(ACE_epinephrine, 2)
		TRANSPORT_ITEM(ACE_bloodIV_500, 2)
		TRANSPORT_ITEM(ACE_personalAidKit, 1)
	};

	class TransportWeapons
	{
		//TRANSPORT_WEAPON(UK3CB_BAF_L115A3, 1)
		//TRANSPORT_WEAPON(UK3CB_BAF_L115A3_Ghillie, 1)
		//TRANSPORT_WEAPON(UK3CB_BAF_L82A1, 1)
	};

	class TransportMagazines
	{
		//TRANSPORT_MAGAZINE(UK3CB_BAF_127_10Rnd, 12)
		//TRANSPORT_MAGAZINE(UK3CB_BAF_127_10Rnd_AP, 12)
		//TRANSPORT_MAGAZINE(SOCOMD_DEM_10Rnd_127x99mm, 12)
		//TRANSPORT_MAGAZINE(UK3CB_BAF_338_5Rnd, 20)
		//TRANSPORT_MAGAZINE(UK3CB_BAF_338_5Rnd_Tracer, 20)
	};
};

class SOCOMD_UAV_Crate: NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	accuracy = 1000;
	displayName = "SOCOMD UAV Crate";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;

	class TransportItems
	{
		TRANSPORT_ITEM(B_UavTerminal, 4)
		TRANSPORT_ITEM(ACE_UAVBattery, 4)
	};

	class TransportBackpacks
	{
		TRANSPORT_BACKPACK(O_UAV_01_backpack_F, 1)
	};
};
	
class SOCOMD_Mag58_Crate: NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	accuracy = 1000;
	displayName = "SOCOMD Mag58 Ammo";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;
	
	class TransportMagazines 
	{
		//TRANSPORT_MAGAZINE(UK3CB_BAF_762_100Rnd, 10);
		//TRANSPORT_MAGAZINE(UK3CB_BAF_762_100Rnd_T, 10);
		//TRANSPORT_MAGAZINE(UK3CB_BAF_762_200Rnd, 10);
		//TRANSPORT_MAGAZINE(UK3CB_BAF_762_200Rnd_T, 10);
	};
};

class SOCOMD_M2_Crate: NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	accuracy = 1000;
	displayName = "SOCOMD M2 Ammo";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;

	class TransportMagazines 
	{
		//TRANSPORT_MAGAZINE(UK3CB_BAF_127_100Rnd, 8);
	};
};

class SOCOMD_Mk19_Crate: NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	accuracy = 1000;
	displayName = "SOCOMD MK19 Ammo";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;
	
	class TransportMagazines 
	{
		//TRANSPORT_MAGAZINE(UK3CB_BAF_32Rnd_40mm_G_Box, 8)
	};
};
	
class SOCOMD_Javelin_Crate: NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	accuracy = 1000;
	displayName = "SOCOMD Javelin Ammo";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;
	
	class TransportMagazines 
	{
		TRANSPORT_MAGAZINE(CUP_Javelin_M, 6)
	};
	
	/*class TransportWeapons 
	{
		TRANSPORT_WEAPON(CUP_Javelin_M, 4)
	};*/
};
	
class SOCOMD_Stinger_Crate: NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	accuracy = 1000;
	displayName = "SOCOMD Stinger Ammo";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;
	
	class TransportMagazines
	{
		TRANSPORT_MAGAZINE(CUP_Stinger_M, 5)
	};
};
	
class SOCOMD_Fortification_Crate: NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	accuracy = 1000;
	displayName = "SOCOMD Fortification Crate";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;
	
	class TransportItems
	{
		TRANSPORT_ITEM(ACE_M26_Clacker, 2)
	};
	
	class TransportMagazines
	{
		TRANSPORT_MAGAZINE(DemoCharge_Remote_Mag, 10)
	};
};
	
class SOCOMD_HE_Mortar_Crate: NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	accuracy = 1000;
	displayName = "SOCOMD HE Mortar Ammo";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 0;
	
	class TransportMagazines 
	{
		//TRANSPORT_MAGAZINE(UK3CB_BAF_1Rnd_81mm_Mo_shells, 12)
	};
};
	
class SOCOMD_WFlare_Mortar_Crate: NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	accuracy = 1000;
	displayName = "SOCOMD White FLARE Mortar Ammo";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;
	
	class TransportMagazines 
	{
		//TRANSPORT_MAGAZINE(UK3CB_BAF_1Rnd_81mm_Mo_Flare_white, 12)
	};
};
	
class SOCOMD_WSmoke_Mortar_Crate: NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	accuracy = 1000;
	displayName = "SOCOMD White SMOKE Mortar Ammo";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;
	
	class TransportMagazines
	{
		//TRANSPORT_MAGAZINE(UK3CB_BAF_1Rnd_81mm_Mo_Smoke_white, 12)
	};
};