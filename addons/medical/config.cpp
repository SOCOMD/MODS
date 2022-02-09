#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "SOCOMD_MorphineItem",
            "SOCOMD_epinephrineItem",
            "SOCOMD_fentanylItem",
            "SOCOMD_naloxonelItem",
            "SOCOMD_ketamineItem",
            "SOCOMD_ApapItem"
        };

        weapons[] = {
            "SOCOMD_naloxone",
            "SOCOMD_fentanyl",
            "SOCOMD_ketamine",
            "SOCOMD_ketamine_200mg",
            "SOCOMD_tetra",
            "SOCOMD_Apap",
            "SOCOMD_VPN",
            "SOCOMD_NDC"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "socomd_core",
            "ace_medical",
            "ace_medical_engine",
            "ace_medical_statemachine",
            "ace_medical_status",
            "ace_medical_treatment",
            "ace_medical_vitals",
            "kat_main",
            "kat_airway",
            "kat_breathing",
            "kat_circulation"
        };
        author = "";
        authors[] = {"SOCOMD J4"};
        authorUrl = "https://socomd.com";
        VERSION_CONFIG;
    };
};  
class ItemCore;
class ACE_ItemCore;
class CBA_MiscItem_ItemInfo;

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"

#include "configs\CfgVehicles.hpp"
#include "configs\CfgWeapons.hpp"

// #include "configs\ACE_Medical_Statemachine.hpp"
#include "configs\ACE_Medical_Treatment.hpp"
#include "configs\ACE_Medical_Treatment_Actions.hpp"

#include "configs\ZEN_Context_Actions.hpp"


class CfgFunctions
{
    class ace_medical_statemachine
    {
        tag = "ace_medical_statemachine";
        class Functions
        {
            class handleStateCardiacArrest{
                
            file="z\socomd\addons\medical\function_overwrites\fn_handleStateCardiacArrest.sqf";
            };
        };
    };
};
