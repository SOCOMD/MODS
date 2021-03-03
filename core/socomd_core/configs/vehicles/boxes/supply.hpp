class CargoNet_01_box_F; //Cardboard box with net
class B_supplyCrate_F; //Tall Green box with net
class Box_NATO_Wps_F; //Flat long box
class plp_cts_FuelCrateOlive; // Fuel Metal Box designed for transport

////////////////////////////////////////////////////////////////////////////////

class SOCOMD_Crate_Empty : CargoNet_01_box_F {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[CRATE] Empty";
	editorCategory = EdCat_Supplies;
	editorSubcategory = SOCOMD_EdSubcat_Supply_SOCOMD;

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

class SOCOMD_Crate_Fuel : CargoNet_01_box_F {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[CRATE] Fuel";
	editorCategory = EdCat_Supplies;
	editorSubcategory = SOCOMD_EdSubcat_Supply_SOCOMD;
	model = "\plp_containers\plp_cts_FuelCrateOlive.p3d";
	icon = "iconObject_1x1";

	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 0;
	ace_dragging_dragDirection = 0;
	ace_dragging_dragPosition[] = {0,1.5,0};
	ace_refuel_flowRate = 1;
	ace_refuel_fuelCargo = 1500;

	weight = 20;
};

////////////////////////////////////////////////////////////////////////////////

class SOCOMD_Crate_Hasty : B_supplyCrate_F {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[CRATE] Hasty";
	editorCategory = EdCat_Supplies;
	editorSubcategory = SOCOMD_EdSubcat_Supply_SOCOMD;
	
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
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_65x39_30Rnd, 24)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_65x39_30Rnd_Tracer, 12)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_20Rnd, 12)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_100Rnd_Tracer, 4)
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
		TRANSPORT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 4)
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
	editorCategory = EdCat_Supplies;
	editorSubcategory = SOCOMD_EdSubcat_Supply_SOCOMD;

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

	class TransportMagazines {
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_30Rnd, 24)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 12)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer, 12)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_65x39_30Rnd, 24)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_65x39_30Rnd_Tracer, 12)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_20Rnd, 2)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_762x51_100Rnd_Tracer, 10)
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

	class TransportItems {
		TRANSPORT_ITEM(ACE_morphine, 16)
		TRANSPORT_ITEM(ACE_bodyBag, 6)
		TRANSPORT_ITEM(ACE_fieldDressing, 30)  		//Israeli Bandage
		TRANSPORT_ITEM(ACE_elasticBandage, 30)		//Elastic Bandage
		TRANSPORT_ITEM(ACE_quikclot, 30)				//Quikclot
		TRANSPORT_ITEM(KAT_ChestSeal, 6)				//Hyfin Chest Seal
		TRANSPORT_ITEM(ACE_tourniquet, 6)				//Tourniquet
		TRANSPORT_ITEM(ACE_Epinephrine_Medic, 10)		//Epinephrine Ampoule
		TRANSPORT_ITEM(ACE_naloxone, 2)				//Naloxone Ampoule
		TRANSPORT_ITEM(ACE_fentanyl, 8)				//Fentanyl Ampoule
		TRANSPORT_ITEM(SOCOMD_Ket, 4)					//Ketamine Ampoule
		TRANSPORT_ITEM(SOCOMD_Ket_S, 4)				//Ketamine (Sedation) Ampoule
		TRANSPORT_ITEM(ACE_apap, 10)					//Paracetamol
		TRANSPORT_ITEM(SOCOMD_Tetra, 5)				//Paracetamol  
		TRANSPORT_ITEM(ACE_bloodIV_500, 5)			//Blood
		TRANSPORT_ITEM(KAT_guedel, 9)					//Nasopharangeal Airway
		TRANSPORT_ITEM(KAT_larynx, 6)					//Laryngeal Mask Airway
		TRANSPORT_ITEM(KAT_accuvac, 1)				//Medical Suction
		TRANSPORT_ITEM(KAT_Pulseoximeter, 4)			//Pulseoximeter
		TRANSPORT_ITEM(SOCOMD_VPN, 30)				//3mL drug Syringe
		TRANSPORT_ITEM(SOCOMD_NDC, 6)					//14 Gauge needle
		TRANSPORT_ITEM(ACE_surgicalKit, 8)			//Surgical Kit
		TRANSPORT_ITEM(adv_aceCPR_AED, 1)				//Defibrillator
	};
};

class SOCOMD_Supply_Gustav : SOCOMD_Supply_Empty {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[SUPPLY] Gustav";

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

	class TransportItems {
		TRANSPORT_ITEM(ToolKit, 2)
		TRANSPORT_ITEM(ACE_wirecutter, 2)
		TRANSPORT_ITEM(MineDetector, 3)
		TRANSPORT_ITEM(ACE_EntrenchingTool, 3)
		TRANSPORT_ITEM(ACE_DefusalKit, 3)
		TRANSPORT_ITEM(ACE_M26_Clacker, 3)
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

	// legacy ace
	// class TransportBackpacks {
	// 	TRANSPORT_BACKPACK(B_Mortar_01_weapon_F, 1)
	// 	TRANSPORT_BACKPACK(B_Mortar_01_support_F, 1)
	// };
	class TransportWeapons {
		TRANSPORT_WEAPON(ace_csw_staticMortarCarry, 1)
		TRANSPORT_WEAPON(ace_csw_carryMortarBaseplate, 1)
	};
};
};

class SOCOMD_Supply_HMG : SOCOMD_Supply_Empty {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[SUPPLY] HMG";

	class TransportMagazines {
		TRANSPORT_MAGAZINE(ace_csw_100Rnd_127x99_mag, 8)
	}
	class TransportWeapons {
		TRANSPORT_WEAPON(ace_csw_staticHMGCarry, 2)
		TRANSPORT_WEAPON(ace_csw_m3CarryTripodLow, 1)
		TRANSPORT_WEAPON(ace_csw_m3CarryTripod, 1)
	};

	// legacy ace
	// class TransportBackpacks {
	// 	TRANSPORT_BACKPACK(B_HMG_01_high_weapon_F, 1)
	// 	TRANSPORT_BACKPACK(B_HMG_01_support_high_F, 1)
	// 	TRANSPORT_BACKPACK(B_HMG_01_weapon_F, 1)
	// 	TRANSPORT_BACKPACK(B_HMG_01_support_F, 1)
	// };
};

class SOCOMD_Supply_AGL : SOCOMD_Supply_Empty {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[SUPPLY] AGL";
	class TransportMagazines {
		TRANSPORT_MAGAZINE(ace_csw_40Rnd_20mm_G_belt, 8)
	}
	class TransportWeapons {
		TRANSPORT_WEAPON(ace_csw_staticGMGCarry, 2)
		TRANSPORT_WEAPON(ace_csw_m3CarryTripodLow, 1)
		TRANSPORT_WEAPON(ace_csw_m3CarryTripod, 1)
	};
	// legacy ace
	// class TransportBackpacks {
	// 	TRANSPORT_BACKPACK(B_GMG_01_high_weapon_F, 1)
	// 	TRANSPORT_BACKPACK(B_HMG_01_support_high_F, 1)
	// 	TRANSPORT_BACKPACK(B_GMG_01_weapon_F, 1)
	// 	TRANSPORT_BACKPACK(B_HMG_01_support_F, 1)
	// };
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

class SOCOMD_Recon_Supply : SOCOMD_Supply_Empty {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[SUPPLY] Recon";

	class TransportItems {
		TRANSPORT_ITEM(ACE_wirecutter, 4)
		TRANSPORT_ITEM(ACE_EntrenchingTool, 4)
		TRANSPORT_ITEM(ACE_DefusalKit, 4)
		TRANSPORT_ITEM(ACE_Clacker, 4)
		TRANSPORT_ITEM(ACE_M26_Clacker, 4)
		TRANSPORT_ITEM(ACE_bodyBag, 4)
		TRANSPORT_ITEM(ACE_CableTie, 12)
		TRANSPORT_ITEM(DemoCharge_Remote_Mag, 8)
		TRANSPORT_ITEM(ACE_FlareTripMine_Mag, 8)
		TRANSPORT_ITEM(SatchelCharge_Remote_Mag, 4)
		TRANSPORT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 8)
		TRANSPORT_ITEM(SOCOMD_tent_item,4)
		TRANSPORT_ITEM(SOCOMD_tent_item_des,4)
		TRANSPORT_ITEM(ACRE_PRC117F,4)		
	};
};