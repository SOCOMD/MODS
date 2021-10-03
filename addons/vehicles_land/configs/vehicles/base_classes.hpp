class Land;


class LandVehicle : Land {
    class Components;
};

class Car : LandVehicle {
    class NewTurret;
    class Components : Components {
        class AICarSteeringComponent;
    };
};

class Car_F : Car {
    class HitPoints;
    class textureSources;
    
    class Turrets {
        class MainTurret : NewTurret {};
    };
    class Components : Components {
        class AICarSteeringComponent : AICarSteeringComponent {

            convoyPIDWeights[] = {0.5, 0.0, 1.0};

            // controls working parameters of steering PID controller (Kp, Ki, Kd)
            steeringPIDWeights[] = { 2.0, 0.2, 0.0 };

            // controls working parameters of speed PID controller (Kp, Ki, Kd)
            speedPIDWeights[] = { 4.0, 0.5, 2.0 };

            // remapping of maxSpeed of vehicle, for fast vehicles we want to lower the used speed
            doRemapSpeed = true;
            remapSpeedRange[] = { 5.0, 60.0 };
            remapSpeedScalar[] = { 1.0, 0.66 };

            // prediction ahead is used for both steering and analysing of shape to modify the speed
            doPredictForward = true;
            predictForwardRange[] = { 0.5, 18 };

            // steer ahead is a point to steer to, saturated down to given range, in meters
            steerAheadSaturation[] = { 1, 5 };

            // set method of predicting safe speed
            // 0 - three angles method
            // 1 - wheel direction method
            // 2 - combined method
            speedPredictionMethod = 2;

            // three coef's to determine how much given angle should influence slowing down
            wheelAngleCoef = 0.7;
            forwardAngleCoef = 0.7;
            steeringAngleCoef = 1.2;
            differenceAngleCoef = 1.0;

            // for how long we allow the vehicle to be not moving, before it replans
            stuckMaxTime = 3.0;

            // overtaking is part of collision avoidance
            allowOvertaking = true;
            allowCollisionAvoidance = true;

            // allow using movement vector as direction (experimental)
            allowDrifting = false;

            // parameters of predictionMethod = 1
            maxWheelAngleDiff = 0.2616;
            minSpeedToKeep = 0.05;

            // how strong AI will turn when commanded left/right
            commandTurnFactor = 1.0;

            // AITankSteeringComponent only
            //allowTurnAroundInPoint = true;
        };
    };
};
class CargoTurret;
class Quadbike_01_base_F: Car_F{
    class Turrets
    {
        class CargoTurret_01: CargoTurret
        {
            gunnerGetInAction = "GetInLOW";
            gunnerGetOutAction = "GetOutLOW";
            gunnerAction = "passenger_inside_1";
            gunnerCompartments = "Compartment2";
            memoryPointsGetInGunner = "pos cargo";
            memoryPointsGetInGunnerDir = "pos cargo dir";
            gunnerName = "Gunner (Passenger)";
            proxyIndex = 1;
            initElev = 0;
            maxElev = 15;
            minElev = -5;
            initTurn = 0;
            maxTurn = 180;
            minTurn = 0;
            isPersonTurret = 1;
            ejectDeadGunner = 1;
        };
    };
};
class B_Quadbike_01_F: Quadbike_01_base_F{};
    // shared taki HMG
class StaticWeapon;
class StaticMGWeapon : StaticWeapon {
    class Turrets;
};
// =================================
// CUP things
class CUP_DSHKM_base : StaticMGWeapon {
    class Turrets : Turrets {
        class MainTurret;
    };
};

class CUP_DSHKM_MiniTripod_base : CUP_DSHKM_base { };
class CUP_DSHKM_base_OCimport_01 : CUP_DSHKM_base { };
class CUP_DSHKM_base_OCimport_02 : CUP_DSHKM_base_OCimport_01 {};
class CUP_DSHKM_MiniTripod_base_OCimport_01 : CUP_DSHKM_MiniTripod_base {};
class CUP_DSHKM_MiniTripod_base_OCimport_02 : CUP_DSHKM_MiniTripod_base_OCimport_01 {};

class StaticMortar;
class CUP_2b14_82mm_Base : StaticMortar {};

class CUP_UAZ_Base : Car_F {};
class CUP_UAZ_Armed_Base : CUP_UAZ_Base {
    class Turrets;
};
class CUP_UAZ_MG_Base : CUP_UAZ_Armed_Base {
    class Turrets : Turrets {
        class MainTurret;
    };
};
class CUP_UAZ_MG_Base_OCimport_01 : CUP_UAZ_MG_Base {};
class CUP_UAZ_MG_Base_OCimport_02 : CUP_UAZ_MG_Base_OCimport_01 {}; 


class CUP_LR_Base: Car_F {
    class Turrets;
};
class CUP_LR_MG_Base : CUP_LR_Base {
    class Turrets : Turrets {
        class MainTurret;
    };
};
class CUP_LR_MG_Base_OCimport_01 : CUP_LR_MG_Base {};
class CUP_LR_MG_Base_OCimport_02 : CUP_LR_MG_Base_OCimport_01 {};


class Wheeled_APC_F : Car_F {};

class Tank : LandVehicle {
    class Turrets;
};

class Tank_F : Tank {
    class Turrets : Turrets {
        class MainTurret;
    };
    class Components;
};

// militia btr
class CUP_BTR40_MG_Base : Wheeled_APC_F{};

// malita btr 
// CUP_O_MTLB_pk_TK_MILITIA
class CUP_MTLB_Base : Tank_F {};
class APC_Tracked_02_base_F : Tank_F {};
class CUP_BMP1_base : APC_Tracked_02_base_F {};
class CUP_BMP1_base_OCimport_01 : CUP_BMP1_base {};
class CUP_BMP1_base_OCimport_02 : CUP_BMP1_base_OCimport_01 {};

class CUP_2S6_Base : Tank_F {
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
class CUP_2S6M_Base : CUP_2S6_Base {};
class CUP_ZSU23_Base : Tank_F {
    receiveRemoteTargets = 1; // let the zu23 become aware of radar targets that the side has seen.
    gunnerCanSee = 31; // can see radar eyes, optics.
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {
                "CUP_2000Rnd_23mm_AZP23_M",
                "CUP_2000Rnd_23mm_AZP23_M",
                "CUP_2000Rnd_23mm_AZP23_M",
                "CUP_2000Rnd_23mm_AZP23_M",
                "CUP_2000Rnd_23mm_AZP23_M",
                "CUP_2000Rnd_23mm_AZP23_M",
                "CUP_2000Rnd_23mm_AZP23_M",
                "CUP_2000Rnd_23mm_AZP23_M"
            };
            weapons[] = {"CUP_Vacannon_AZP23_veh"};
        };
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
class CUP_ZSU23_Base_OCimport_01 : CUP_ZSU23_Base {};
class CUP_ZSU23_Base_OCimport_02 : CUP_ZSU23_Base_OCimport_01 {};
class CUP_ZSU23_Afghan_Base : CUP_ZSU23_Base {};
class CUP_ZSU23_Afghan_Base_OCimport_01 : CUP_ZSU23_Afghan_Base {};
class CUP_ZSU23_Afghan_Base_OCimport_02 : CUP_ZSU23_Afghan_Base_OCimport_01 {};

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
