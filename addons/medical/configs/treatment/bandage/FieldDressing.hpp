    
class FieldDressing {
    class Abrasion {
        effectiveness=12;
        reopeningChance=0.1;
        reopeningMinDelay=800;
        reopeningMaxDelay=1500;
    };
    class AbrasionMinor: Abrasion {
        effectiveness=5;
    };
    class AbrasionMedium: Abrasion {
        effectiveness=5;
    };
    class AbrasionLarge: Abrasion {
        effectiveness=5;
    };
    class Avulsion: Abrasion {
        effectiveness=5;
        reopeningChance=0.1;
        reopeningMinDelay=800;
        reopeningMaxDelay=1500;
    };
    class AvulsionMinor: Avulsion {
        effectiveness=5;
    };
    class AvulsionMedium: Avulsion {
        effectiveness=5;
    };
    class AvulsionLarge: Avulsion {
        effectiveness=5;
    };
    class Contusion: Abrasion {
        effectiveness=5;
        reopeningChance=0.1;
        reopeningMinDelay=800;
        reopeningMaxDelay=1500;
    };
    class ContusionMinor: Contusion {
        effectiveness=5;
    };
    class ContusionMedium: Contusion {
        effectiveness=5;
    };
    class ContusionLarge: Contusion {
        effectiveness=5;
    };
    class Crush: Abrasion {
        effectiveness=5;
        reopeningChance=0.1;
        reopeningMinDelay=800;
        reopeningMaxDelay=1500;
    };
    class CrushMinor: Crush {
        effectiveness=5;
        reopeningChance=0.1;
    };
    class CrushMedium: Crush {
        effectiveness=5;
    };
    class CrushLarge: Crush {
        effectiveness=5;
    };
    class Cut: Abrasion {
        effectiveness=5;
        reopeningChance=0.1;
        reopeningMinDelay=800;
        reopeningMaxDelay=1500;
    };
    class CutMinor: Cut {
        effectiveness=5;
    };
    class CutMedium: Cut {
        effectiveness=5;
    };
    class CutLarge: Cut {
        effectiveness=5;
    };
    class Laceration: Abrasion {
        effectiveness=5;
        reopeningChance=0.1;
        reopeningMinDelay=800;
        reopeningMaxDelay=1500;
    };
    class LacerationMinor: Laceration {
        effectiveness=5;
    };
    class LacerationMedium: Laceration {
        effectiveness=5;
    };
    class LacerationLarge: Laceration {
        effectiveness=5;
    };
    class velocityWound: Abrasion {
        effectiveness=5;
        reopeningChance=0.1;
        reopeningMinDelay=800;
        reopeningMaxDelay=1500;
    };
    class velocityWoundMinor: velocityWound {
        effectiveness=5;
    };
    class velocityWoundMedium: velocityWound {
        effectiveness=5;
    };
    class velocityWoundLarge: velocityWound {
        effectiveness=5;
    };
    class punctureWound: Abrasion {
        effectiveness=5;
        reopeningChance=0.1;
        reopeningMinDelay=800;
        reopeningMaxDelay=1500;
    };
    class punctureWoundMinor: punctureWound {
        effectiveness=5;
    };
    class punctureWoundMedium: punctureWound {
        effectiveness=5;
    };
    class punctureWoundLarge: punctureWound {
        effectiveness=5;
    };
};