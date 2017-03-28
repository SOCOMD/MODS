/*//////////////////////////////////////////////////////////////////////////////

Uses "getUnitLoadout player" to get the loadout of the current unit.

Loadout Format:
[
    [], //0 PRIMARY     | WEAPON FORMAT
    [], //1 SECONDARY   | WEAPON FORMAT
    [], //2 HANDGUN     | WEAPON FORMAT
    [], //3 UNIFORM     | CONTAINER FORMAT
    [], //4 VEST        | CONTAINER FORMAT
    [], //5 BACKPACK    | CONTAINER FORMAT
    ""  //6 HELMET
    ""  //7 FACEWEAR
    []  //8 BINOCULAR   | WEAPON
    []  //9 ITEMS
]

WEAPON FORMAT
[
    "",     //0 WEAPON TYPE
    "",     //1 MUZZLE
    "",     //2 POINTER
    "",     //3 OPTIC
    ["", 0] //4 PRIMARY MAGAZINE (TYPE/COUNT)
    ["", 0] //5 SECONDARY MAGAZINE (TYPE/COUNT)
]

CONTAINER FORMAT
[
    ""      //0 ITEM TYPE
    [...]   //1 INVENTORY
]

INVENTORY ITEM
[
    ""      //0 ITEM TYPE
    0       //0 ITEM COUNT
]

////////////////////////////////////////////////////////////////////////////////

** EXAMPLE LOADOUT **
class SASR_StandardTrooper
{
    primary = "";
    secondary = "";
    handgun = "";
    headgear = "";
    facewear = "";
    binocular = "";
    
    class Uniform
    {
        type = "";
        class Inventory
        {
        };
    };

    class Vest
    {
        type = "";
        class Inventory
        {

        };
    };

    class Backpack
    {
        type = "";
        class Inventory
        {

        };
    };
};

//////////////////////////////////////////////////////////////////////////////*/

#define LOADOUT_ITEM(id,qty) class _xx_##id { type = #id; count = qty; };

class CfgLoadouts
{
    class SOCOMD
    {
        class SASR_StandardTrooper
        {
            headgear = "AU_02_780000_v1";
            binocular = "Rangefinder";

            class Uniform 
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory 
                {
                    LOADOUT_ITEM(ACE_epinephrine, 3)
                    LOADOUT_ITEM(ACE_morphine, 3)
                    LOADOUT_ITEM(ACE_personalAidKit, 1)
                    LOADOUT_ITEM(ACE_Flashlight_MX991, 1)
                    LOADOUT_ITEM(Chemlight_blue, 3)
                    LOADOUT_ITEM(ACE_Chemlight_HiRed, 4)
                    LOADOUT_ITEM(B_IR_Grenade, 1)
                };
            };
        };

        class SASR_PatrolLeader
        {
            primary = "SMA_MK16_EGLM_Green";
            handgun = "RH_g19t";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Laserdesignator";

            class Uniform 
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory 
                {
                    LOADOUT_ITEM(Chemlight_blue, 4)
                    LOADOUT_ITEM(SmokeShellBlue, 2)
                    LOADOUT_ITEM(SmokeShellRed, 2)
                    LOADOUT_ITEM(SmokeShellGreen, 2)
                    LOADOUT_ITEM(SmokeShellYellow, 2)
                    LOADOUT_ITEM(ACE_Chemlight_HiRed, 4)
                    LOADOUT_ITEM(Laserbatteries, 1)
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";

                class Inventory 
                {
                    LOADOUT_ITEM(ACE_elasticBandage, 5)
                    LOADOUT_ITEM(ACE_quikclot, 5)
                    LOADOUT_ITEM(ACE_CableTie, 2)
                    LOADOUT_ITEM(ACE_EarPlugs, 1)
                    LOADOUT_ITEM(ACE_epinephrine, 2)
                    LOADOUT_ITEM(ACE_morphine, 2)
                    LOADOUT_ITEM(ACE_packingBandage, 5)
                    LOADOUT_ITEM(ACE_tourniquet, 1)
                    LOADOUT_ITEM(ACE_bodyBag, 1)
                    LOADOUT_ITEM(RH_17Rnd_9x19_g17, 2)
                    LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 6)
                    LOADOUT_ITEM(UGL_FlareWhite_F, 2)
                    LOADOUT_ITEM(UGL_FlareRed_F, 2)
                    LOADOUT_ITEM(UGL_FlareGreen_F, 2)
                    LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
                    LOADOUT_ITEM(1Rnd_Smoke_Grenade_shell, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 3)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1_IR, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1_Tracer, 2)
                };
            };

            class Backpack
            {
                type = "SOCOMD_LongRange_Radio";                
            };
        };

        class SASR_Marksman
        {
            primary = "SMA_Mk17_16";
            handgun = "RH_g19t";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Laserdesignator";
            
            class Uniform
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory
                {
                    LOADOUT_ITEM(ACE_Flashlight_MX991, 1)
                    LOADOUT_ITEM(B_IR_Grenade, 1)
                    LOADOUT_ITEM(Chemlight_blue, 4)
                    LOADOUT_ITEM(ACE_Chemlight_HiRed, 4)
                    LOADOUT_ITEM(SmokeShellBlue, 1)
                    LOADOUT_ITEM(SmokeShellGreen, 1)
                    LOADOUT_ITEM(SmokeShellRed, 1)
                    LOADOUT_ITEM(SmokeShellYellow, 1)
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory
                {
                    LOADOUT_ITEM(ACE_elasticBandage, 5)
                    LOADOUT_ITEM(ACE_quikclot, 5)
                    LOADOUT_ITEM(ACE_CableTie, 5)
                    LOADOUT_ITEM(ACE_EarPlugs, 1)
                    LOADOUT_ITEM(ACE_epinephrine, 2)
                    LOADOUT_ITEM(ACE_morphine, 2)
                    LOADOUT_ITEM(ACE_packingBandage, 5)
                    LOADOUT_ITEM(ACE_tourniquet, 1)
                    LOADOUT_ITEM(ACE_bodyBag, 1)
                    LOADOUT_ITEM(RH_17Rnd_9x19_g17, 2)
                    LOADOUT_ITEM(SMA_20Rnd_762x51mm_M80A1_EPR, 4)
                    LOADOUT_ITEM(SMA_20Rnd_762x51mm_M80A1_EPR_Tracer, 2)
                    LOADOUT_ITEM(SMA_20Rnd_762x51mm_M80A1_EPR_IR, 1)
                    LOADOUT_ITEM(ACE_FlareTripMine_Mag, 1)
                    LOADOUT_ITEM(CUP_HandGrenade_M67, 2)
                };
            };
        };
    };
};