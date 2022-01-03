    
class PackingBandage: FieldDressing {
    class Abrasion {
        effectiveness=4;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class AbrasionMinor: Abrasion {
        effectiveness=4;
    };
    class AbrasionMedium: Abrasion {
        effectiveness=4;
    };
    class AbrasionLarge: Abrasion {
        effectiveness=4;
    };
    class Avulsion: Abrasion {
        effectiveness=4;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class AvulsionMinor: Avulsion {
        effectiveness=4;
    };
    class AvulsionMedium: Avulsion {
        effectiveness=4;
    };
    class AvulsionLarge: Avulsion {
        effectiveness=4;
    };
    class Contusion: Abrasion {
        effectiveness=4;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class ContusionMinor: Contusion {
        effectiveness=4;
    };
    class ContusionMedium: Contusion {
        effectiveness=4;
    };
    class ContusionLarge: Contusion {
        effectiveness=4;
    };
    class Crush: Abrasion {
        effectiveness=4;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class CrushMinor: Crush {
        effectiveness=4;
        reopeningChance=0.3;
    };
    class CrushMedium: Crush {
        effectiveness=4;
    };
    class CrushLarge: Crush {
        effectiveness=4;
    };
    class Cut: Abrasion {
        effectiveness=4;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class CutMinor: Cut {
        effectiveness=4;
    };
    class CutMedium: Cut {
        effectiveness=4;
    };
    class CutLarge: Cut {
        effectiveness=4;
    };
    class Laceration: Abrasion {
        effectiveness=4;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class LacerationMinor: Laceration {
        effectiveness=4;
    };
    class LacerationMedium: Laceration {
        effectiveness=4;
    };
    class LacerationLarge: Laceration {
        effectiveness=4;
    };
    class velocityWound: Abrasion {
        effectiveness=4;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class velocityWoundMinor: velocityWound {
        effectiveness=4;
    };
    class velocityWoundMedium: velocityWound {
        effectiveness=4;
    };
    class velocityWoundLarge: velocityWound {
        effectiveness=4;
    };
    class punctureWound: Abrasion {
        effectiveness=4;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class punctureWoundMinor: punctureWound {
        effectiveness=4;
    };
    class punctureWoundMedium: punctureWound {
        effectiveness=4;
    };
    class punctureWoundLarge: punctureWound {
        effectiveness=4;
    };
};