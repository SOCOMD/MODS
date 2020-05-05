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