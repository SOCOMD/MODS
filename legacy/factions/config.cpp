#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME; 
        units[]={"socomd_spetznaz_Operator","socomd_spetznaz_Point_Man","socomd_spetznaz_Team_Leader","socomd_spetznaz_Sniper","socomd_spetznaz_Machine_Gunner","socomd_spetznaz_Light_AT","socomd_spetznaz_Armoured_Crew","socomd_spetznaz_Vehicle_Crew","socomd_spetznaz_BTR_80A","socomd_spetznaz_Tigr_Armed","socomd_spetznaz_Tigr","socomd_spetznaz_Tigr_Open"};
        weapons[]={"socomd_spetznaz_rhs_weap_ak74m_zenitco01_b33_grip1_rhs_acc_ak5rhs_acc_2dpZenit_risacwp_eotechrhs_acc_grip_rk6","socomd_spetznaz_rhs_weap_ak105_zenitco01_b33_grip1_rhs_acc_dtk3rhs_acc_2dpZenit_risacwp_eotechrhs_acc_grip_ffg2","socomd_spetznaz_rhs_weap_ak74mr_gp25_rhs_acc_ak5rhs_acc_2dpZenit_risacwp_eotech","socomd_spetznaz_rhs_weap_pya","socomd_spetznaz_rhs_weap_t5000_rhs_acc_dh520x56rhs_acc_harris_swivel","socomd_spetznaz_AGE_Glock17_SDBasic_acc_flashlight_pistol","socomd_spetznaz_rhs_weap_pkp_rhs_acc_1p78","socomd_spetznaz_rhs_weap_rpg26","socomd_spetznaz_rhs_weap_aks74u_rhs_acc_pgs64_74u","socomd_spetznaz_rhs_weap_ak105_zenitco01_b33_grip1_rhs_acc_ak5rhs_acc_2dpZenit_risacwp_eotechrhs_acc_grip_rk6"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"socomd_main"};
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "configs\CfgFactionClasses.hpp"
#include "configs\CfgEditorCategories.hpp"
#include "configs\CfgEditorSubCategories.hpp"
#include "configs\CfgVehicles.hpp"
#include "configs\CfgWeapons.hpp"
#include "configs\CfgGroups.hpp"
#include "CfgEventHandlers.hpp"
