#define RadarRecieve \
    class Components : Components { \
        class SensorsManagerComponent { \
            class Components { \
                class DataLinkSensorComponent { \
                    aimDown = 0; \
                    allowsMarking = 1; \
                    angleRangeHorizontal = 360; \
                    angleRangeVertical = 360; \
                    animDirection = ""; \
                    color[] = {1,1,1,0}; \
                    componentType = "DataLinkSensorComponent"; \
                    groundNoiseDistanceCoef = -1; \
                    maxGroundNoiseDistance = -1; \
                    maxSpeedThreshold = 0; \
                    maxTrackableATL = 10000000000; \
                    maxTrackableSpeed = 10000000000; \
                    minSpeedThreshold = 0; \
                    minTrackableATL = -10000000000; \
                    minTrackableSpeed = -10000000000; \
                    typeRecognitionDistance = 0; \
                    class AirTarget { \
                        maxRange = 16000; \
                        minRange = 16000; \
                        objectDistanceLimitCoef = -1; \
                        viewDistanceLimitCoef = -1; \
                    }; \
                    class GroundTarget { \
                        maxRange = 16000; \
                        minRange = 16000; \
                        objectDistanceLimitCoef = -1; \
                        viewDistanceLimitCoef = -1; \
                    }; \
                }; \
            }; \
        }; \
    };

// taki radar
class CUP_O_ZSU23_TK : CUP_ZSU23_Base_OCimport_02 {
    RadarRecieve
};

// taki no radar
class CUP_O_ZSU23_Afghan_TK : CUP_ZSU23_Base_OCimport_02 {
    displayName = "ZSU-23-4 (No Radar)";
    RadarRecieve
};

// SLA
class CUP_O_ZSU23_SLA : CUP_ZSU23_Base_OCimport_02 {
    RadarRecieve
};

//SLA no Radar
class CUP_O_ZSU23_Afghan_SLA : CUP_ZSU23_Afghan_Base_OCimport_02 {
    displayName = "ZSU-23-4 (No Radar)";
    RadarRecieve
};

// ChDKZ
class CUP_O_ZSU23_ChDKZ : CUP_ZSU23_Base_OCimport_02 {
    RadarRecieve
};

// chDKZ no radar
class CUP_O_ZSU23_Afghan_ChDKZ : CUP_ZSU23_Base_OCimport_02 {
    displayName = "ZSU-23-4 (No Radar)";
    RadarRecieve
};

// Csat
class CUP_O_ZSU23_CSAT : CUP_ZSU23_Base {
    RadarRecieve
};

// csat no radar
class CUP_O_ZSU23_Afghan_CSAT : CUP_ZSU23_Afghan_Base {
    displayName = "ZSU-23-4 (No Radar)";
    RadarRecieve
};