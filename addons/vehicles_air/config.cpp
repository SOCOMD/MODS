#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {

            //AIR
            "SOCOMD_FIREFLY_A",
            "SOCOMD_DRAGONFLY_A",
            "SOCOMD_WARRIOR_A",
            "SOCOMD_WARRIOR_B",
            "SOCOMD_NOMAD_A",
            "SOCOMD_NOMAD_B",
            "SOCOMD_HURRICANE_A",
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"socomd_core"};
        author = "";
        authors[] = {"SOCOMD J4"};
        authorUrl = "https://socomd.com";
        VERSION_CONFIG;
    };
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
    class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
    class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
    class components;
};
class Eventhandlers;
////////////////////
#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
#include "configs\CfgAmmo.hpp"
// #include "configs\CfgMagazines.hpp"
#include "configs\CfgVehicles.hpp"
