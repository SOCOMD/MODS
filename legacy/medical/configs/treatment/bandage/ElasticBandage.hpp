    
class ElasticBandage: FieldDressing {
    class Abrasion {
        effectiveness=0.2;
        reopeningChance=0.4;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class AbrasionMinor: Abrasion {
        effectiveness=4.4;
        reopeningChance=0.1;
        reopeningMinDelay=1000;
        reopeningMaxDelay=1600;
    };
    class AbrasionMedium: Abrasion {
        effectiveness=2.4;
        reopeningChance=0.6;
    };
    class AbrasionLarge: Abrasion {
        effectiveness=0.2;
        reopeningChance=0.7;
    };
    class Avulsion: Abrasion {
        effectiveness=0.2;
        reopeningChance=0.4;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class AvulsionMinor: Avulsion {
        effectiveness=4.4;
        reopeningChance=0.1;
        reopeningMinDelay=1000;
        reopeningMaxDelay=1600;
    };
    class AvulsionMedium: Avulsion {
        effectiveness=2.4;
    };
    class AvulsionLarge: Avulsion {
        effectiveness=0.2;
    };
    class Contusion: Abrasion {
        effectiveness=0.2;
        reopeningChance=0;
        reopeningMinDelay=0;
        reopeningMaxDelay=0;
    };
    class ContusionMinor: Contusion {
        effectiveness=4.4;
    };
    class ContusionMedium: Contusion {
        effectiveness=2.4;
    };
    class ContusionLarge: Contusion {
    };
    class Crush: Abrasion {
        effectiveness=4.4;
        reopeningChance=0.4;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class CrushMinor: Crush {
        effectiveness=4.4;
        reopeningChance=0.1;
        reopeningMinDelay=1000;
        reopeningMaxDelay=1600;
    };
    class CrushMedium: Crush {
        effectiveness=4.4;
        reopeningChance=0.15;
    };
    class CrushLarge: Crush {
        effectiveness=4.4;
        reopeningChance=0.2;
    };
    class Cut: Abrasion {
        effectiveness=0.2;
        reopeningChance=0.4;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class CutMinor: Cut {
        effectiveness=4.4;
        reopeningChance=0.1;
        reopeningMinDelay=1000;
        reopeningMaxDelay=1600;
    };
    class CutMedium: Cut {
        effectiveness=2.4;
        reopeningChance=0.6;
    };
    class CutLarge: Cut {
        effectiveness=0.2;
        reopeningChance=0.7;
    };
    class Laceration: Abrasion {
        effectiveness=0.2;
        reopeningChance=0.4;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class LacerationMinor: Laceration {
        effectiveness=4.4;
        reopeningChance=0.1;
        reopeningMinDelay=1000;
        reopeningMaxDelay=1600;
    };
    class LacerationMedium: Laceration {
        effectiveness=2.4;
        reopeningChance=0.7;
    };
    class LacerationLarge: Laceration {
        effectiveness=0.2;
        reopeningChance=0.8;
    };
    class velocityWound: Abrasion {
        effectiveness=0.2;
        reopeningChance=0.4;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class velocityWoundMinor: velocityWound {
        effectiveness=4.4;
        reopeningChance=0.4;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class velocityWoundMedium: velocityWound {
        effectiveness=2.4;
    };
    class velocityWoundLarge: velocityWound {
        effectiveness=0.2;
    };
    class punctureWound: Abrasion {
        effectiveness=0.2;
        reopeningChance=0.4;
        reopeningMinDelay=100;
        reopeningMaxDelay=300;
    };
    class punctureWoundMinor: punctureWound {
        effectiveness=4.4;
        reopeningChance=0.1;
        reopeningMinDelay=1000;
        reopeningMaxDelay=1600;
    };
    class punctureWoundMedium: punctureWound {
        effectiveness=2.4;
    };
    class punctureWoundLarge: punctureWound {
        effectiveness=0.2;
    };
};