    
class CargoNet_01_box_F; //Cardboard box with net
class B_supplyCrate_F; //Tall Green box with net
class Box_NATO_Wps_F; //Flat long box
class plp_cts_FuelCrateOlive; // Fuel Metal Box designed for transport

////////////////////////////////////////////////////////////////////////////////

class SOCOMD_Crate_Empty : CargoNet_01_box_F {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[CRATE] Empty";
    editorCategory = EdCat_Supplies;
    editorSubcategory = SOCOMD_EdSubcat_Supply_SOCOMD;

    ace_cargo_hasCargo = 1;
    ace_cargo_size = 7;
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
    scope = SCOPE_PUBLIC;
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
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[CRATE] Hasty";
    editorCategory = EdCat_Supplies;
    editorSubcategory = SOCOMD_EdSubcat_Supply_SOCOMD;
    
    accuracy = 1000;
    maximumLoad = 99999;
    weight = 10;

    transportMaxWeapons = 15000;
    transportMaxMagazines = 20000;
    transportMaxBackpacks = 100;

    ace_cargo_size = 7;
    ace_dragging_canDrag = 1;
    ace_dragging_canCarry = 0;
    ace_dragging_dragPosition[] = {0,1.5,0};

    class TransportMagazines {
        TRANSPORT_MAGAZINE(ITEM_MAGAZINE_556, 20)
        TRANSPORT_MAGAZINE(ITEM_MAGAZINE_556_TRACER, 15)
        TRANSPORT_MAGAZINE(ITEM_MAGAZINE_556_BELT, 10)
        TRANSPORT_MAGAZINE(20Rnd_762x51_Mag, 15)
        TRANSPORT_MAGAZINE(ITEM_MAGAZINE_762_BELT, 15)
        TRANSPORT_MAGAZINE(SmokeShell, 24)
        TRANSPORT_MAGAZINE(HandGrenade, 12)
        TRANSPORT_MAGAZINE(ACE_M84, 24)
        TRANSPORT_MAGAZINE(1Rnd_HE_Grenade_shell, 15)
        TRANSPORT_MAGAZINE(1Rnd_SmokeRed_Grenade_shell, 8)
        TRANSPORT_MAGAZINE(ACE_HuntIR_M203, 6)

        TRANSPORT_MAGAZINE(ACWP_18Rnd_9x21_Mag_USP, 15)
        TRANSPORT_MAGAZINE(ACWP_13Rnd_9x21_Mag_HP, 15)
        TRANSPORT_MAGAZINE(ACWP_19Rnd_9x21_Mag_glock, 15)
        TRANSPORT_MAGAZINE(11Rnd_45ACP_Mag, 15)
        TRANSPORT_MAGAZINE(10Rnd_300WM_Magazine, 10)
        //TRANSPORT_MAGAZINE(hlc_5rnd_300WM_FMJ_AWM, 10) // needs replacement?
        TRANSPORT_MAGAZINE(ACWP_5rnd_338LM_base, 20)
        TRANSPORT_MAGAZINE(ACWP_5rnd_338LM_APDS, 10)


    };

    class TransportItems {
        TRANSPORT_ITEM(ACE_CableTie, 12)
        TRANSPORT_ITEM(ACE_Clacker, 2)
        TRANSPORT_ITEM(DemoCharge_Remote_Mag, 6)
        TRANSPORT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 4)
        TRANSPORT_ITEM(SatchelCharge_Remote_Mag, 2)
        TRANSPORT_ITEM(tsp_frameCharge_mag, 5)
        TRANSPORT_ITEM(tsp_popperCharge_mag, 5)
        TRANSPORT_ITEM(tsp_stickCharge_mag, 5)
        TRANSPORT_ITEM(ACE_fieldDressing, 20)          //Israeli Bandage
        TRANSPORT_ITEM(ACE_elasticBandage, 20)        //Elastic Bandage
        TRANSPORT_ITEM(ACE_quikclot, 20)                //Quikclot
        TRANSPORT_ITEM(ACE_chestSeal, 10)                //Hyfin Chest Seal
        TRANSPORT_ITEM(ACE_tourniquet, 10)                //Tourniquet
        TRANSPORT_ITEM(SOCOMD_Epinephrine, 5)        //Epinephrine Ampoule
        TRANSPORT_ITEM(SOCOMD_naloxone, 2)                //Naloxone Ampoule
        TRANSPORT_ITEM(SOCOMD_fentanyl, 5)                //Fentanyl Ampoule
        TRANSPORT_ITEM(SOCOMD_ketamine, 5)                    //Ketamine Ampoule
        TRANSPORT_ITEM(SOCOMD_Apap, 10)                //Paracetamol
        TRANSPORT_ITEM(SOCOMD_Tetra, 0)                //Paracetamol  
        TRANSPORT_ITEM(ACE_bloodIV_500, 10)            //Blood
        TRANSPORT_ITEM(ACE_basicAirway, 10)                    //Nasopharangeal Airway
        TRANSPORT_ITEM(ACE_advancedAirway, 5)                    //Laryngeal Mask Airway
        TRANSPORT_ITEM(ACE_Pulseoximeter, 10)            //Pulseoximeter
        TRANSPORT_ITEM(SOCOMD_NDC, 10)                    //14 Gauge needle
        TRANSPORT_ITEM(SOCOMD_VPN, 30)                //3mL drug Syringe
        TRANSPORT_ITEM(ACE_surgicalKit, 8)            //Surgical Kit
        TRANSPORT_ITEM(ACE_bodyBag, 2)
    };

    class TransportWeapons {};
    class TransportBackpacks {};
};

////////////////////////////////////////////////////////////////////////////////

class SOCOMD_Supply_Empty : Box_NATO_Wps_F {
    scope = SCOPE_PRIVATE;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] Empty";
    editorCategory = EdCat_Supplies;
    editorSubcategory = SOCOMD_EdSubcat_Supply_SOCOMD;

    model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
    hiddenSelectionsTextures[] = {
        "",
        "\z\socomd\addons\data\CTGear\AmmoBox_SOCOMD_CO.paa"
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
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] Ammo";

    class TransportMagazines {
        TRANSPORT_MAGAZINE(ITEM_MAGAZINE_556, 50)
        TRANSPORT_MAGAZINE(ITEM_MAGAZINE_556_TRACER, 30)
        TRANSPORT_MAGAZINE(ITEM_MAGAZINE_556_BELT, 30)
        TRANSPORT_MAGAZINE(20Rnd_762x51_Mag, 30)
        TRANSPORT_MAGAZINE(ITEM_MAGAZINE_762_BELT, 30)
        TRANSPORT_MAGAZINE(SmokeShell, 24)
        TRANSPORT_MAGAZINE(HandGrenade, 20)
        TRANSPORT_MAGAZINE(ACE_M84, 24)
        TRANSPORT_MAGAZINE(1Rnd_HE_Grenade_shell, 30)
        TRANSPORT_MAGAZINE(1Rnd_SmokeRed_Grenade_shell, 8)
        TRANSPORT_MAGAZINE(ACE_HuntIR_M203, 6)
        TRANSPORT_MAGAZINE(ACWP_18Rnd_9x21_Mag_USP, 30)
        TRANSPORT_MAGAZINE(ACWP_13Rnd_9x21_Mag_HP, 30)
        TRANSPORT_MAGAZINE(ACWP_19Rnd_9x21_Mag_glock, 30)
        TRANSPORT_MAGAZINE(11Rnd_45ACP_Mag, 30)
        TRANSPORT_MAGAZINE(10Rnd_300WM_Magazine, 20)
        //TRANSPORT_MAGAZINE(hlc_5rnd_300WM_FMJ_AWM, 20) // needs replacement?
        TRANSPORT_MAGAZINE(ACWP_5rnd_338LM_base, 30)
        TRANSPORT_MAGAZINE(ACWP_5rnd_338LM_APDS, 10)
    };

    class TransportItems {
        TRANSPORT_ITEM(ACE_CableTie, 12)
        TRANSPORT_ITEM(DemoCharge_Remote_Mag, 10)
        TRANSPORT_ITEM(ACE_Clacker, 2)
        TRANSPORT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 10)
        TRANSPORT_ITEM(SatchelCharge_Remote_Mag, 8)
        TRANSPORT_ITEM(tsp_frameCharge_mag, 5)
        TRANSPORT_ITEM(tsp_popperCharge_mag, 10)
    };
};

class SOCOMD_Supply_Explosives : SOCOMD_Supply_Empty {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] Explosives";
    model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";

    class TransportMagazines {
    };

    class TransportItems {
        TRANSPORT_ITEM(DemoCharge_Remote_Mag, 20)
        TRANSPORT_ITEM(ACE_Clacker, 10)
        TRANSPORT_ITEM(ACE_M26_Clacker, 10)
        TRANSPORT_ITEM(ACE_DefusalKit, 10)
        TRANSPORT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 20)
        TRANSPORT_ITEM(SatchelCharge_Remote_Mag, 20)
        TRANSPORT_ITEM(ACE_M14, 30)
        TRANSPORT_ITEM(tsp_frameCharge_mag, 20)
        TRANSPORT_ITEM(tsp_popperCharge_mag, 20)
        TRANSPORT_ITEM(tsp_stickCharge_mag, 20)
    };
};

class SOCOMD_Supply_Medical : SOCOMD_Supply_Empty {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] Medical";

    class TransportItems {
        TRANSPORT_ITEM(ACE_CableTie, 12)
        TRANSPORT_ITEM(ACE_fieldDressing, 50)          //Israeli Bandage
        TRANSPORT_ITEM(ACE_elasticBandage, 50)        //Elastic Bandage
        TRANSPORT_ITEM(ACE_quikclot, 50)                //Quikclot
        TRANSPORT_ITEM(ACE_chestSeal, 15)                //Hyfin Chest Seal
        TRANSPORT_ITEM(ACE_tourniquet, 10)                //Tourniquet
        TRANSPORT_ITEM(SOCOMD_Epinephrine, 15)        //Epinephrine Ampoule
        TRANSPORT_ITEM(SOCOMD_naloxone, 10)                //Naloxone Ampoule
        TRANSPORT_ITEM(SOCOMD_fentanyl, 15)                //Fentanyl Ampoule
        TRANSPORT_ITEM(SOCOMD_ketamine, 10)                    //Ketamine Ampoule
        TRANSPORT_ITEM(SOCOMD_Apap, 20)                //Paracetamol
        TRANSPORT_ITEM(SOCOMD_Tetra, 0)                //Paracetamol  
        TRANSPORT_ITEM(ACE_bloodIV_500, 10)            //Blood
        TRANSPORT_ITEM(ACE_basicAirway, 10)                    //Nasopharangeal Airway
        TRANSPORT_ITEM(ACE_advancedAirway, 10)                    //Laryngeal Mask Airway
        TRANSPORT_ITEM(ACE_Pulseoximeter, 10)            //Pulseoximeter
        TRANSPORT_ITEM(SOCOMD_NDC, 15)                    //14 Gauge needle
        TRANSPORT_ITEM(SOCOMD_VPN, 50)                //3mL drug Syringe
        TRANSPORT_ITEM(ACE_surgicalKit, 8)            //Surgical Kit
        TRANSPORT_ITEM(ACE_bodyBag, 4)
    };
};

class SOCOMD_Supply_Gustav : SOCOMD_Supply_Empty {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] Gustav";
    model = "\A3\weapons_F\AmmoBoxes\WpnsBox_long_F";
    class TransportMagazines {
        TRANSPORT_MAGAZINE(rhs_mag_maaws_HEAT, 5)
        TRANSPORT_MAGAZINE(rhs_mag_maaws_HE, 5)
    };

    class TransportWeapons {
        TRANSPORT_WEAPON(SOCOMD_Carl_Gustav, 1)
    };
};

class SOCOMD_Supply_Tools : SOCOMD_Supply_Empty {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] Tools";

    class TransportItems {
        TRANSPORT_ITEM(ToolKit, 2)
        TRANSPORT_ITEM(ACE_wirecutter, 5)
        TRANSPORT_ITEM(MineDetector, 2)
        TRANSPORT_ITEM(ACE_EntrenchingTool, 5)
        TRANSPORT_ITEM(ACE_DefusalKit, 2)
        TRANSPORT_ITEM(ACE_M26_Clacker, 2)
        TRANSPORT_ITEM(ACE_bodyBag, 10)
        TRANSPORT_ITEM(tsp_lockpick, 10)
    };
};

class SOCOMD_Supply_NVG : SOCOMD_Supply_Empty {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] NVG";
    model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_small_F.p3d";
    hiddenSelections[] = {"Camo","Camo2"};
    hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_black_CO.paa", 
    "\z\socomd\addons\data\CTGear\SNIPER_LOGO.paa"};

    class TransportItems {
        TRANSPORT_ITEM(SOCOMD_NVG, 8)
        TRANSPORT_ITEM(acwp_airframe_mc_light_strap, 8)
    };
};

class SOCOMD_Supply_152 : SOCOMD_Supply_Empty {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] AN/PRC 152 Radio (Spare)";
    model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_small_F.p3d";
    hiddenSelections[] = {"Camo","Camo2"};
    hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_black_CO.paa", 
    "\z\socomd\addons\data\CTGear\radio_LOGO.paa"};

    class TransportItems {
        TRANSPORT_ITEM(ACRE_PRC152, 8)
    };
};

class SOCOMD_Supply_Vehicle_Ammo : SOCOMD_Supply_Empty {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] Vehicle Ammo";

    ace_cargo_size = 2;
    ace_rearm_defaultSupply = 30;
};

class SOCOMD_Supply_Vehicle_Ammo_large : B_supplyCrate_F {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] Vehicle Ammo Large";
    editorCategory = EdCat_Supplies;
    editorSubcategory = SOCOMD_EdSubcat_Supply_SOCOMD;
    
    accuracy = 1000;
    maximumLoad = 99999;
    weight = 10;

    transportMaxWeapons = 15000;
    transportMaxMagazines = 20000;
    transportMaxBackpacks = 100;

    ace_cargo_size = 8;
    ace_dragging_canDrag = 1;
    ace_dragging_canCarry = 0;
    ace_dragging_dragPosition[] = {0,1.5,0};
    
    class TransportMagazines {};
    class TransportItems {};
    class TransportWeapons {};
    class TransportBackpacks {};

    ace_rearm_defaultSupply = 90;
};

class SOCOMD_Supply_Mortar : SOCOMD_Supply_Empty {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] Mortar";
    model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";

    class TransportMagazines {
        TRANSPORT_MAGAZINE(ACE_1Rnd_82mm_Mo_HE, 25)
        TRANSPORT_MAGAZINE(ACE_1Rnd_82mm_Mo_Smoke, 5)
        TRANSPORT_MAGAZINE(ACE_1Rnd_82mm_Mo_Illum, 5)
    };

    class TransportItems {
        TRANSPORT_ITEM(ACE_RangeTable_82mm, 4)
        TRANSPORT_ITEM(ACE_Vector, 4)
    };

    // legacy ace
    // class TransportBackpacks {
    //     TRANSPORT_BACKPACK(B_Mortar_01_weapon_F, 1)
    //     TRANSPORT_BACKPACK(B_Mortar_01_support_F, 1)
    // };
    class TransportWeapons {
        TRANSPORT_WEAPON(ace_csw_staticMortarCarry, 1)
        TRANSPORT_WEAPON(ace_csw_carryMortarBaseplate, 1)
    };
};
class SOCOMD_Supply_Mortar_60mm : SOCOMD_Supply_Empty {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] Light Mortar";

    class TransportMagazines {
        TRANSPORT_MAGAZINE(UK3CB_BAF_1Rnd_60mm_Mo_Shells, 30)
        TRANSPORT_MAGAZINE(UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White, 5)
        TRANSPORT_MAGAZINE(UK3CB_BAF_1Rnd_60mm_Mo_Flare_White, 5)
    };

    class TransportItems {
        TRANSPORT_ITEM(ACE_Vector, 4)
    };

    // legacy ace
    // class TransportBackpacks {
    //     TRANSPORT_BACKPACK(B_Mortar_01_weapon_F, 1)
    //     TRANSPORT_BACKPACK(B_Mortar_01_support_F, 1)
    // };
    class TransportWeapons {
        TRANSPORT_WEAPON(UK3CB_BAF_M6, 2)
    };
};

class SOCOMD_Supply_HMG : SOCOMD_Supply_Empty {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] HMG";
    model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";

    class TransportMagazines {
        TRANSPORT_MAGAZINE(UK3CB_BAF_127_100Rnd, 8)
    };
    class TransportWeapons {
        TRANSPORT_WEAPON(UK3CB_BAF_L111A1, 2)
        TRANSPORT_WEAPON(UK3CB_BAF_Tripod, 2)
    };

    // legacy ace
    // class TransportBackpacks {
    //     TRANSPORT_BACKPACK(B_HMG_01_high_weapon_F, 1)
    //     TRANSPORT_BACKPACK(B_HMG_01_support_high_F, 1)
    //     TRANSPORT_BACKPACK(B_HMG_01_weapon_F, 1)
    //     TRANSPORT_BACKPACK(B_HMG_01_support_F, 1)
    // };
};

class SOCOMD_Supply_AGL : SOCOMD_Supply_Empty {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] AGL";
    model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
    class TransportMagazines {
        TRANSPORT_MAGAZINE(UK3CB_BAF_32Rnd_40mm_G_Box, 8)
    };
    class TransportWeapons {
        TRANSPORT_WEAPON(UK3CB_BAF_L134A1, 2)
        TRANSPORT_WEAPON(UK3CB_BAF_Tripod, 2)
    };
    // legacy ace
    // class TransportBackpacks {
    //     TRANSPORT_BACKPACK(B_GMG_01_high_weapon_F, 1)
    //     TRANSPORT_BACKPACK(B_HMG_01_support_high_F, 1)
    //     TRANSPORT_BACKPACK(B_GMG_01_weapon_F, 1)
    //     TRANSPORT_BACKPACK(B_HMG_01_support_F, 1)
    // };
};

class SOCOMD_Supply_Javelin : SOCOMD_Supply_Empty {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] Javelin";
    model = "\A3\weapons_F\AmmoBoxes\WpnsBox_long_F";

    class TransportMagazines {
        // TRANSPORT_MAGAZINE(CUP_Javelin_M, 4)
    };

    class TransportItems {
        TRANSPORT_ITEM(UK3CB_BAF_Javelin_CLU, 2)
    };
    class TransportWeapons {
        TRANSPORT_WEAPON(UK3CB_BAF_Javelin_Slung_Tube, 4)
    };
};

class SOCOMD_Recon_Supply : SOCOMD_Supply_Empty {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] Recon";
    class TransportMagazines {
        TRANSPORT_MAGAZINE(ACWP_5rnd_338LM_base, 20)
        TRANSPORT_MAGAZINE(ACWP_5rnd_338LM_APDS, 10)
    };

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
        TRANSPORT_ITEM(ACRE_PRC117F,2)        
    };
};

class SOCOMD_UAV_Supply : SOCOMD_Supply_Empty {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "[SUPPLY] UAV";
    
    class TransportBackpacks {
        TRANSPORT_BACKPACK(B_UAV_01_backpack_F, 1)
    };
    
    class TransportItems {
        TRANSPORT_ITEM(ACE_UAVBattery, 6)
        TRANSPORT_ITEM(B_UavTerminal, 1)
    };
};

class ACWP_case;
class ACWP_case_sniper: ACWP_case
{
    hiddenSelections[] = {
        "Case",
        "flag"
    };
    hiddenSelectionsTextures[] = {
            "acwp_case\tex\case_co.paa",
            "acwp_case\tex\sniper_logo.paa"
        };
    scope = 2;
    displayName = "[SUPPLY] Sniper Case";
    class TransportWeapons
    {
        class _xx_ACWP_blaser_r93_wst_kit
        {
            weapon = "ACWP_blaser_r93_wst_kit";
            count = 1;
        };
    };
    class TransportMagazines
    {
        class _xx_5Rnd_APDS_338LM_Magazine
        {
            magazine = "ACWP_5rnd_338LM_APDS";
            count = 15;
        };
        class _xx_5Rnd_338LM_Magazine
        {
            magazine = "ACWP_5rnd_338LM_base";
            count = 15;
        };
    };
};