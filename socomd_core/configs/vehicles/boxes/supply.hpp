
////////////////////////////////////////////////////////////////////////////////
// CARGO BOX

class Land_Cargo10_military_green_F;
class SOCOMD_CargoNet: Land_Cargo10_military_green_F
{
	displayName = "SOCOMD Cargo Net Box";
	author = AUTHOR_STR;

	ace_cargo_hasCargo = 1;
	ace_cargo_size = 8;
	ace_cargo_space = 6;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 0;
	ace_dragging_dragDirection = 0;
	ace_dragging_dragPosition[] = {0,1.5,0};

	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_CargoNet_01_ammo_F.jpg";
	model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";

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
	ace_cargo_size = 8;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 0;
	ace_dragging_dragPosition[] = {0,1.5,0};
	weight = 20;

	class TransportMagazines
	{
		TRANSPORT_MAGAZINE(SMA_30Rnd_556x45_M855A1, 24)
		TRANSPORT_MAGAZINE(SMA_30Rnd_556x45_M855A1_Tracer, 12)
		TRANSPORT_MAGAZINE(SMA_20Rnd_762x51mm_M80A1_EPR, 4)
		TRANSPORT_MAGAZINE(SMA_150Rnd_762_M80A1, 2)
		TRANSPORT_MAGAZINE(RH_12Rnd_45cal_usp, 16)
		TRANSPORT_MAGAZINE(SmokeShell, 16)
		TRANSPORT_MAGAZINE(SmokeShellGreen, 16)
		TRANSPORT_MAGAZINE(HandGrenade, 16)
		TRANSPORT_MAGAZINE(ACE_M84, 16)
		TRANSPORT_MAGAZINE(B_IR_Grenade, 16)
		TRANSPORT_MAGAZINE(1Rnd_HE_Grenade_shell, 4)
		TRANSPORT_MAGAZINE(1Rnd_SmokeRed_Grenade_shell, 2)
		TRANSPORT_MAGAZINE(ACE_HuntIR_M203, 2)
	};

	class TransportItems
	{
		TRANSPORT_ITEM(ACE_Earplugs, 8)
		TRANSPORT_ITEM(ACE_NVG_Gen4, 8)
		TRANSPORT_ITEM(ACE_CableTie, 16)
		TRANSPORT_ITEM(ACE_fieldDressing, 32)
		TRANSPORT_ITEM(ACE_quikclot, 32)
		TRANSPORT_ITEM(ACE_elasticBandage, 32)
		TRANSPORT_ITEM(ACE_packingBandage, 32)
		TRANSPORT_ITEM(ACE_morphine, 16)
		TRANSPORT_ITEM(ACE_epinephrine, 16)
		TRANSPORT_ITEM(ACE_tourniquet, 8)
		TRANSPORT_ITEM(ACE_salineIV_500, 6)
		TRANSPORT_ITEM(ACE_bodyBag, 8)
		TRANSPORT_ITEM(ACE_DefusalKit, 1)
		TRANSPORT_ITEM(ACE_M26_Clacker, 1)
		TRANSPORT_ITEM(ACE_wirecutter, 1)
		TRANSPORT_ITEM(DemoCharge_Remote_Mag, 5)
		TRANSPORT_ITEM(SatchelCharge_Remote_Mag, 1)
	};

	class TransportWeapons {};
	class TransportBackpacks {};
};

class SOCOMD_Ammo_Box : NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
	hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
	accuracy = 1000;
	displayName = "SOCOMD Ammo Box";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	ace_cargo_size = 2;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 1;
	weight = 20;

	class TransportMagazines
	{
		TRANSPORT_MAGAZINE(SMA_30Rnd_556x45_M855A1, 24)
		TRANSPORT_MAGAZINE(SMA_30Rnd_556x45_M855A1_Tracer, 12)
		TRANSPORT_MAGAZINE(SMA_20Rnd_762x51mm_M80A1_EPR, 4)
		TRANSPORT_MAGAZINE(SMA_150Rnd_762_M80A1, 2)
		TRANSPORT_MAGAZINE(RH_12Rnd_45cal_usp, 16)
		TRANSPORT_MAGAZINE(SmokeShell, 16)
		TRANSPORT_MAGAZINE(SmokeShellGreen, 16)
		TRANSPORT_MAGAZINE(HandGrenade, 16)
		TRANSPORT_MAGAZINE(ACE_M84, 16)
		TRANSPORT_MAGAZINE(B_IR_Grenade, 16)
		TRANSPORT_MAGAZINE(1Rnd_HE_Grenade_shell, 4)
		TRANSPORT_MAGAZINE(1Rnd_SmokeRed_Grenade_shell, 2)
		TRANSPORT_MAGAZINE(ACE_HuntIR_M203, 2)
	};

};

class SOCOMD_Gustav_Box : NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
	accuracy = 1000;
	displayName = "SOCOMD Gustav Box";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	ace_cargo_size = 2;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 1;
	weight = 20;

	class TransportMagazines
	{
		TRANSPORT_MAGAZINE(tf47_m3maaws_HEAT, 10)
		TRANSPORT_MAGAZINE(tf47_m3maaws_HE, 10)

	};

	class TransportWeapons {

		TRANSPORT_WEAPON(SOCOMD_Carl_Gustav, 5)

	};
};

class SOCOMD_Mortar_Box : NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
	accuracy = 1000;
	displayName = "SOCOMD Mortar Box";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	ace_cargo_size = 2;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 1;
	weight = 20;

	class TransportMagazines
	{
		TRANSPORT_MAGAZINE(ACE_1Rnd_82mm_Mo_HE, 10)
		TRANSPORT_MAGAZINE(ACE_1Rnd_82mm_Mo_HE_LaserGuided, 10)

	};

	class TransportItems
	{
		TRANSPORT_ITEM(ACE_RangeTable_82mm, 1)

	};
	class TransportBackpacks
	{
		TRANSPORT_BACKPACK(B_Mortar_01_weapons_F, 1)
		TRANSPORT_BACKPACK(B_Mortar_01_support_F, 1)
	};
};
/*
class SOCOMD_Sniper_Box : NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
	accuracy = 1000;
	displayName = "SOCOMD Sniper Box";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	ace_cargo_size = 2;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 1;
	weight = 20;

	class TransportMagazines
	{
		TRANSPORT_MAGAZINE(ACE_1Rnd_82mm_Mo_HE, 10)
		TRANSPORT_MAGAZINE(ACE_1Rnd_82mm_Mo_HE_LaserGuided, 10)

	};

	class TransportItems
	{
		TRANSPORT_ITEM(ACE_RangeTable_82mm, 1)

	};
	class TransportBackpacks
	{
		TRANSPORT_BACKPACK(B_Mortar_01_weapons_F, 1)
		TRANSPORT_BACKPACK(B_Mortar_01_support_F, 1)
	};

	class ACE_Actions
	{
		class ACE_MainActions
		{
			displayName = "Sniper Loadout";
			selection = "";
			distance = 5;
			condition = 1;

			class SOCOMD_OpenGearSelector
			{
				displayName = "Personalise";
				condition = 1;
				statement = "call ASORGS_fnc_Open";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Uniforms
			{
				displayName = "Uniforms";
				selection = "";
				distance = 5;
				condition = 1;

				class SOCOMD_Uniforms_ToggleDiving
                {
                    displayName = "Toggle Diving Uniform";
                    condition = "[_player] call SOCOMD_fnc_ActionCondition_CanToggleDiving";
                    statement = "[_player] call SOCOMD_fnc_Action_ToggleDiving";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };
				class SOCOMD_Uniforms_GhillieArid
                {
                    displayName = "Arid Ghillie"
                    condition = 1;
                    statement = "[_player, 'U_B_FullGhillie_ard'] call SOCOMD_fnc_Action_ReplaceUniform;"
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };
			};

		};
	};
};
*/

class SOCOMD_Medical_Box : NATO_Box_Base
{
	scope = public;
	model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
	hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
	accuracy = 1000;
	displayName = "SOCOMD Medical Box";
	author = AUTHOR_STR;
	maximumLoad = 99999;
	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;
	weight = 20;
	ace_cargo_size = 2;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 1;

	class TransportItems
	{
		TRANSPORT_ITEM(ACE_fieldDressing, 32)
		TRANSPORT_ITEM(ACE_quikclot, 32)
		TRANSPORT_ITEM(ACE_elasticBandage, 32)
		TRANSPORT_ITEM(ACE_packingBandage, 32)
		TRANSPORT_ITEM(ACE_morphine, 16)
		TRANSPORT_ITEM(ACE_epinephrine, 16)
		TRANSPORT_ITEM(ACE_tourniquet, 8)
		TRANSPORT_ITEM(ACE_surgicalKit, 8)
		TRANSPORT_ITEM(ACE_personalAidKit, 4)
		TRANSPORT_ITEM(ACE_salineIV_500, 6)
		TRANSPORT_ITEM(ACE_bodyBag, 8)
		TRANSPORT_ITEM(ACE_DefusalKit, 1)
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
	ace_cargo_size = 2;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 1;

	class TransportItems
	{
		TRANSPORT_ITEM(B_UavTerminal, 4)
		TRANSPORT_ITEM(ACE_UAVBattery, 4)
	};

	class TransportBackpacks
	{
		TRANSPORT_BACKPACK(B_UAV_01_backpack_F, 1)
	};
};