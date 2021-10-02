    
class QuikClot: FieldDressing {
    class Abrasion {
        effectiveness=7;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class AbrasionMinor: Abrasion {
        effectiveness=7;
    };
    class AbrasionMedium: Abrasion {
        effectiveness=7;
    };
    class AbrasionLarge: Abrasion {
        effectiveness=7;
    };
    class Avulsion: Abrasion {
        effectiveness=7;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class AvulsionMinor: Avulsion {
        effectiveness=7;
    };
    class AvulsionMedium: Avulsion {
        effectiveness=7;
    };
    class AvulsionLarge: Avulsion {
        effectiveness=7;
    };
    class Contusion: Abrasion {
        effectiveness=7;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class ContusionMinor: Contusion {
        effectiveness=7;
    };
    class ContusionMedium: Contusion {
        effectiveness=7;
    };
    class ContusionLarge: Contusion {
        effectiveness=7;
    };
    class Crush: Abrasion {
        effectiveness=7;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class CrushMinor: Crush {
        effectiveness=7;
        reopeningChance=0.3;
    };
    class CrushMedium: Crush {
        effectiveness=7;
    };
    class CrushLarge: Crush {
        effectiveness=7;
    };
    class Cut: Abrasion {
        effectiveness=7;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class CutMinor: Cut {
        effectiveness=7;
    };
    class CutMedium: Cut {
        effectiveness=7;
    };
    class CutLarge: Cut {
        effectiveness=7;
    };
    class Laceration: Abrasion {
        effectiveness=7;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class LacerationMinor: Laceration {
        effectiveness=7;
    };
    class LacerationMedium: Laceration {
        effectiveness=7;
    };
    class LacerationLarge: Laceration {
        effectiveness=7;
    };
    class velocityWound: Abrasion {
        effectiveness=7;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class velocityWoundMinor: velocityWound {
        effectiveness=7;
    };
    class velocityWoundMedium: velocityWound {
        effectiveness=7;
    };
    class velocityWoundLarge: velocityWound {
        effectiveness=7;
    };
    class punctureWound: Abrasion {
        effectiveness=7;
        reopeningChance=0.3;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class punctureWoundMinor: punctureWound {
        effectiveness=7;
    };
    class punctureWoundMedium: punctureWound {
        effectiveness=7;
    };
    class punctureWoundLarge: punctureWound {
        effectiveness=7;
    };
};