#define OPTIC_FOV(FOVMAX,FOVMIN,FOVINIT,ZOOM_MIN,ZOOM_MAX)\
opticsZoomMax = FOVMAX;\
opticsZoomMin = FOVMIN;\
opticsZoomInit = FOVINIT; \
distanceZoomMin = ZOOM_MIN; \
distanceZoomMax = ZOOM_MAX;

#define OPTIC_Holo OPTIC_FOV(1.25,0.4,0.75,100,100)
#define OPTIC_HoloM OPTIC_FOV(0.175,0.175,0.175,200,200)
#define OPTIC_T1 OPTIC_FOV(1.25,0.25,0.75,100,100)
#define OPTIC_147_ELCAN OPTIC_FOV(0.15,0.15,0.15,100,100)
#define OPTIC_4X_OPTIC OPTIC_FOV(0.125,0.125,0.125,100,100)

class InventoryOpticsItem_Base_F;
class ItemCore;
class rhsusf_acc_sniper_base;

class rhsusf_acc_su230_base: ItemCore{
    class ItemInfo : InventoryOpticsItem_Base_F {
        class OpticsModes{
			class Elcan_x1{
                OPTIC_Holo
            };
			class Elcan_x4{
                OPTIC_4X_OPTIC
            };
			class Elcan_iron{
                OPTIC_Holo
            };
        };
    };
};
class rhsusf_acc_ELCAN: rhsusf_acc_sniper_base{
    class ItemInfo : InventoryOpticsItem_Base_F {
        class OpticsModes{
			class elcan_scope{
                OPTIC_147_ELCAN
            };
        };
    };
};
class rhsusf_acc_g33_xps3 :ItemCore {
    MRT_SwitchItemNextClass = "rhsusf_acc_g33_xps3_flip";
    MRT_SwitchItemPrevClass = "rhsusf_acc_g33_xps3_flip";
    MRT_switchItemHintText = "Up";
    rhs_accessory_next = "";

    class ItemInfo : InventoryOpticsItem_Base_F {
        class OpticsModes{
			class MAG{
                OPTIC_HoloM
            };
        };
    };
};
class optic_Holosight;
class rhsusf_acc_g33_xps3_flip : optic_Holosight{
    MRT_SwitchItemNextClass = "rhsusf_acc_g33_xps3";
    MRT_SwitchItemPrevClass = "rhsusf_acc_g33_xps3";
    MRT_switchItemHintText = "Down";
    rhs_accessory_next = "";
};

class rhsusf_acc_g33_xps3_tan : rhsusf_acc_g33_xps3
{
    MRT_SwitchItemNextClass = "rhsusf_acc_g33_xps3_tan_flip";
    MRT_SwitchItemPrevClass = "rhsusf_acc_g33_xps3_tan_flip";
    MRT_switchItemHintText = "Up";
    rhs_accessory_next = "";
};
//Unmagnified
class rhsusf_acc_g33_xps3_tan_flip : rhsusf_acc_g33_xps3_flip
{
    MRT_SwitchItemNextClass = "rhsusf_acc_g33_xps3_tan";
    MRT_SwitchItemPrevClass = "rhsusf_acc_g33_xps3_tan";
    MRT_switchItemHintText = "Down";
    rhs_accessory_next = "";
};

class acwp_t2_g33_down;
class acwp_t2_g33: acwp_t2_g33_down {
    MRT_SwitchItemNextClass = "acwp_t2_g33_down";
    MRT_SwitchItemPrevClass = "acwp_t2_g33_down";
    MRT_switchItemHintText = "Up";
    scope = 1;
    displayname = "Micro T2 G33";
    model = "M4A5_Troy_Acc\mesh\t2\t2_g33.p3d";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 4;
            modelOptics = "\A3\Weapons_F\empty";
            optics = 0;
            class OpticsModes {
            class ACO {
                opticsID = 1;
                useModelOptics = 0;
                opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                memoryPointCamera = "RDeye";
                discretedistance[] = {200};
                discreteDistanceInitIndex = 1;
                visionMode[] = {};
                OPTIC_HoloM
            };
        };
     };
};
class acwp_eotech_g33: acwp_t2_g33 {
    MRT_SwitchItemNextClass = "acwp_eotech_g33_down";
    MRT_SwitchItemPrevClass = "acwp_eotech_g33_down";
    MRT_switchItemHintText = "Up";
    scope = 1;
    displayname = "EOTech EXPS3 G33";
    model = "M4A5_Troy_Acc\mesh\exps\exps_g33.p3d";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 4;
            modelOptics = "\A3\Weapons_F\empty";
            optics = 0;
            class OpticsModes {
            class ACO {
                opticsID = 1;
                useModelOptics = 0;
                opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                memoryPointCamera = "RDeye";
                discretedistance[] = {200};
                discreteDistanceInitIndex = 1;
                visionMode[] = {};
                OPTIC_HoloM
            };
        };
     };
};