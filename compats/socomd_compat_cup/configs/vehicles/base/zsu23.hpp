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
