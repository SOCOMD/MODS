// Predefines to allow overwrites
class Truck_F;
class CUP_Ural_BaseTurret : Truck_F {
    class Components;
    class Turrets;
};
class CUP_Ural_ZU23_Base : CUP_Ural_BaseTurret {
    receiveRemoteTargets = 1; // let the zu23 become aware of radar targets that the side has seen.
    gunnerCanSee = 31; // can see radar eyes, optics.
    class Turrets : Turrets {
        class MainTurret;
    };
    class Components : Components {
        class SensorsManagerComponent {
            class Components {
                class DataLinkSensorComponent {
                    aimDown = 0;
                    allowsMarking = 1;
                    angleRangeHorizontal = 360;
                    angleRangeVertical = 360;
                    animDirection = "";
                    color[] = {1,1,1,0};
                    componentType = "DataLinkSensorComponent";
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    maxSpeedThreshold = 0;
                    maxTrackableATL = 10000000000;
                    maxTrackableSpeed = 10000000000;
                    minSpeedThreshold = 0;
                    minTrackableATL = -10000000000;
                    minTrackableSpeed = -10000000000;
                    typeRecognitionDistance = 0;
                    class AirTarget {
                        maxRange = 16000;
                        minRange = 16000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget {
                        maxRange = 16000;
                        minRange = 16000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                };
            };
        };
    }; 
};
// default mags used CUP_40Rnd_23mm_AZP23_M * 16
// default ammo CUP_B_23mm_AA
// default soundset of ammo soundSetBulletFly[] = {"bulletFlyBy_SoundSet"};
// which has soundshader set soundShaders[] = {"BulletFlyBy_SoundShader"};
///////////////////////////////////////////////////////////////////////////////////
// ZU23 Urals

// Taki Insurgents
class CUP_I_Ural_ZU23_TK_Gue : CUP_Ural_ZU23_Base { };
class CUP_I_Ural_ZU23_TK_Gue_OCimport_01 : CUP_I_Ural_ZU23_TK_Gue { };
class CUP_I_Ural_ZU23_TK_Gue_OCimport_02 : CUP_I_Ural_ZU23_TK_Gue_OCimport_01 { };
class CUP_Ural_ZU23_Base_OCimport_01 : CUP_Ural_ZU23_Base {};
class CUP_Ural_ZU23_Base_OCimport_02 : CUP_Ural_ZU23_Base_OCimport_01 {};




///////////////////////////////////////////////////////////////////////////////////
// ZU23 Turrets
class StaticCannon : StaticWeapon {
    class Turrets;
    class Components;
};
class CUP_ZU23_base : StaticCannon {
    receiveRemoteTargets = 1; // let the zu23 become aware of radar targets that the side has seen.
    gunnerCanSee = 31; // can see radar eyes, optics.
    class Turrets : Turrets {
        class MainTurret;
    };
    class Components : Components {
        class SensorsManagerComponent {
            class Components {
                class DataLinkSensorComponent {
                    aimDown = 0;
                    allowsMarking = 1;
                    angleRangeHorizontal = 360;
                    angleRangeVertical = 360;
                    animDirection = "";
                    color[] = {1,1,1,0};
                    componentType = "DataLinkSensorComponent";
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    maxSpeedThreshold = 0;
                    maxTrackableATL = 10000000000;
                    maxTrackableSpeed = 10000000000;
                    minSpeedThreshold = 0;
                    minTrackableATL = -10000000000;
                    minTrackableSpeed = -10000000000;
                    typeRecognitionDistance = 0;
                    class AirTarget {
                        maxRange = 16000;
                        minRange = 16000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget {
                        maxRange = 16000;
                        minRange = 16000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                };
            };
        };
    }; 
};
class CUP_ZU23_base_OCimport_01 : CUP_ZU23_base { };
class CUP_ZU23_base_OCimport_02 : CUP_ZU23_base_OCimport_01 { };
