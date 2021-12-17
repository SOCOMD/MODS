    
//////////////////////////////////////////////////////////////////////////////////
// Jet Misc
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
class NoDust{};

class CfgVehicles  {
    //MAN
    class Land;
    class Man;
    class Civilian;
    class O_helipilot_F;
    class B_Soldier_02_f;
    class B_Soldier_05_f;
    class I_Soldier_04_F;
    class B_Diver_F;

    ////////////////////////////////////////////////////////////////////////////////
    // Land

    
    ////////////////////////////////////////////////////////////////////////////////
    // Helicopters
    
    class Helicopter;
    ////////////////////////////////////////////////////////////////////////////////
    // Other

    //BACKPACKS
    class B_Kitbag_Base;

    //AMMOBOX
    class NATO_Box_Base;
    class Box_NATO_AmmoVeh_F;

    //FLAGS
    class FLAG_NATO_F;
    class FLAG_CSAT_F;

    ////////////////////////////////////////////////////////////////////////////////
    // Includes

    #include "vehicles\soldier.hpp"
    #include "vehicles\structures.hpp"
    #include "vehicles\supply.hpp"
    #include "vehicles\voidBox.hpp"
    #include "vehicles\extensions.hpp"
    #include "vehicles\flags.hpp"
};