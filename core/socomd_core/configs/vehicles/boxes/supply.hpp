class CargoNet_01_box_F; //Cardboard box with net
class B_supplyCrate_F; //Tall Green box with net
class Box_NATO_Wps_F; //Flat long box

////////////////////////////////////////////////////////////////////////////////

class SOCOMD_Crate_Empty : CargoNet_01_box_F {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[CRATE] Empty";
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Obj;

	ace_cargo_hasCargo = 1;
	ace_cargo_size = 8;
	ace_cargo_space = 6;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 0;
	ace_dragging_dragDirection = 0;
	ace_dragging_dragPosition[] = {0,1.5,0};

	class ACE_Actions {
		class ACE_MainActions {
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

class SOCOMD_Crate_Hasty : B_supplyCrate_F {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[CRATE] Hasty";
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Obj;

	accuracy = 1000;
	maximumLoad = 99999;
	weight = 20;

	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;

	ace_cargo_size = 8;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 0;
	ace_dragging_dragPosition[] = {0,1.5,0};

	class TransportMagazines {
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_30Rnd, 48)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 24)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer, 8)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_20Rnd, 12)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_45ACP_11Rnd, 32)
		TRANSPORT_MAGAZINE(SmokeShell, 24)
		TRANSPORT_MAGAZINE(HandGrenade, 12)
		TRANSPORT_MAGAZINE(ACE_M84, 24)
		TRANSPORT_MAGAZINE(1Rnd_HE_Grenade_shell, 12)
		TRANSPORT_MAGAZINE(1Rnd_SmokeRed_Grenade_shell, 8)
		TRANSPORT_MAGAZINE(ACE_HuntIR_M203, 6)
	};

	class TransportItems {
		TRANSPORT_ITEM(ACE_CableTie, 12)
		TRANSPORT_ITEM(ACE_fieldDressing, 48)
		TRANSPORT_ITEM(ACE_quikclot, 48)
		TRANSPORT_ITEM(ACE_elasticBandage, 48)
		TRANSPORT_ITEM(ACE_packingBandage, 48)
		TRANSPORT_ITEM(ACE_morphine, 24)
		TRANSPORT_ITEM(ACE_epinephrine, 24)
		TRANSPORT_ITEM(ACE_salineIV_500, 12)
		TRANSPORT_ITEM(ACE_surgicalKit, 12)
		TRANSPORT_ITEM(DemoCharge_Remote_Mag, 6)
		TRANSPORT_ITEM(SatchelCharge_Remote_Mag, 2)
	};

	class TransportWeapons {};
	class TransportBackpacks {};
};

////////////////////////////////////////////////////////////////////////////////

class SOCOMD_Supply_Empty : Box_NATO_Wps_F {
	scope = private;
	author = AUTHOR_STR;
	displayName = "[SUPPLY] Empty";
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Obj;

	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	hiddenSelectionsTextures[] = {
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa",
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};

	accuracy = 1000;
	maximumLoad = 99999;
	weight = 20;

	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;

	ace_cargo_size = 1;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 1;

	class TransportMagazines {};
	class TransportItems {};
	class TransportWeapons {};
	class TransportBackpacks {};
};

class SOCOMD_Supply_Ammo : SOCOMD_Supply_Empty {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[SUPPLY] Ammo";
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Obj;

	class TransportMagazines {
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_30Rnd, 24)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 12)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer, 4)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_20Rnd, 2)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_45ACP_11Rnd, 16)
		TRANSPORT_MAGAZINE(SmokeShell, 12)
		TRANSPORT_MAGAZINE(HandGrenade, 6)
		TRANSPORT_MAGAZINE(ACE_M84, 12)
		TRANSPORT_MAGAZINE(1Rnd_HE_Grenade_shell, 4)
		TRANSPORT_MAGAZINE(1Rnd_SmokeRed_Grenade_shell, 2)
		TRANSPORT_MAGAZINE(ACE_HuntIR_M203, 2)
	};

	class TransportItems {
		TRANSPORT_ITEM(ACE_CableTie, 12)
		TRANSPORT_ITEM(DemoCharge_Remote_Mag, 4)
		TRANSPORT_ITEM(SatchelCharge_Remote_Mag, 1)
	};
};

class SOCOMD_Supply_Medical : SOCOMD_Supply_Empty {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[SUPPLY] Medical";
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Obj;

	class TransportItems {
		TRANSPORT_ITEM(ACE_fieldDressing, 32)
		TRANSPORT_ITEM(ACE_quikclot, 32)
		TRANSPORT_ITEM(ACE_elasticBandage, 32)
		TRANSPORT_ITEM(ACE_packingBandage, 32)
		TRANSPORT_ITEM(ACE_morphine, 16)
		TRANSPORT_ITEM(ACE_epinephrine, 16)
		TRANSPORT_ITEM(ACE_surgicalKit, 8)
		TRANSPORT_ITEM(ACE_salineIV_500, 6)
		TRANSPORT_ITEM(ACE_bodyBag, 6)
	};
};

class SOCOMD_Supply_Gustav : SOCOMD_Supply_Empty {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[SUPPLY] Gustav";
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Obj;

	class TransportMagazines {
		TRANSPORT_MAGAZINE(tf47_m3maaws_HEAT, 4)
		TRANSPORT_MAGAZINE(tf47_m3maaws_HE, 4)
	};

	class TransportWeapons {
		TRANSPORT_WEAPON(SOCOMD_Carl_Gustav, 1)
	};
};

class SOCOMD_Supply_Tools : SOCOMD_Supply_Empty {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[SUPPLY] Tools";
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Obj;

	class TransportItems {
		TRANSPORT_ITEM(ToolKit, 2)
		TRANSPORT_ITEM(ACE_wirecutter, 2)
		TRANSPORT_ITEM(MineDetector, 3)
		TRANSPORT_ITEM(ACE_EntrenchingTool, 3)
		TRANSPORT_ITEM(ACE_DefusalKit, 3)
		TRANSPORT_ITEM(ACE_Clacker, 3)
		TRANSPORT_ITEM(ACE_bodyBag, 6)
		TRANSPORT_ITEM(ACRE_PRC152, 2)
		TRANSPORT_ITEM(ACRE_PRC117F,2)
		TRANSPORT_ITEM(SOCOMD_NVG, 22)
	};
};

class SOCOMD_Supply_Vehicle_Ammo : SOCOMD_Supply_Empty {
    scope = public;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] Vehicle Ammo";
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Obj;

	ace_cargo_size = 2;
    ace_rearm_defaultSupply = 30;
};

class SOCOMD_Supply_Mortar : SOCOMD_Supply_Empty {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[SUPPLY] Mortar";

	class TransportMagazines {
		TRANSPORT_MAGAZINE(ACE_1Rnd_82mm_Mo_HE, 15)
		TRANSPORT_MAGAZINE(ACE_1Rnd_82mm_Mo_Smoke, 5)
		TRANSPORT_MAGAZINE(ACE_1Rnd_82mm_Mo_Illum, 5)
	};

	class TransportItems {
		TRANSPORT_ITEM(ACE_RangeTable_82mm, 4)
		TRANSPORT_ITEM(ACE_Vector, 4)
	};

	class TransportBackpacks {
		TRANSPORT_BACKPACK(B_Mortar_01_weapon_F, 1)
		TRANSPORT_BACKPACK(B_Mortar_01_support_F, 1)
	};
};

class SOCOMD_Supply_HMG : SOCOMD_Supply_Empty {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[SUPPLY] HMG";

	class TransportBackpacks {
		TRANSPORT_BACKPACK(B_HMG_01_high_weapon_F, 1)
		TRANSPORT_BACKPACK(B_HMG_01_support_high_F, 1)
		TRANSPORT_BACKPACK(B_HMG_01_weapon_F, 1)
		TRANSPORT_BACKPACK(B_HMG_01_support_F, 1)
	};
};

class SOCOMD_Supply_AGL : SOCOMD_Supply_Empty {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[SUPPLY] AGL";

	class TransportBackpacks {
		TRANSPORT_BACKPACK(B_GMG_01_high_weapon_F, 1)
		TRANSPORT_BACKPACK(B_HMG_01_support_high_F, 1)
		TRANSPORT_BACKPACK(B_GMG_01_weapon_F, 1)
		TRANSPORT_BACKPACK(B_HMG_01_support_F, 1)
	};
};


class SOCOMD_Supply_Javelin : SOCOMD_Supply_Empty {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[SUPPLY] Javelin";

	class TransportMagazines {
		TRANSPORT_MAGAZINE(CUP_Javelin_M, 4)
	};

	class TransportWeapons {
		TRANSPORT_WEAPON(CUP_launch_Javelin, 1)
	};
};