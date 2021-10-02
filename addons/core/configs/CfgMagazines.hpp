    
class CfgMagazines {
    class CA_Magazine;

    class ClaymoreDirectionalMine_Remote_Mag: CA_Magazine {
        class ACE_Triggers {
            SupportedTriggers[] = {"Command", "MK16_Transmitter"};
            class Command {
                FuseTime = 0.5;
                digDistance = -0.026;
            };
            class MK16_Transmitter: Command {};
        };
    };
    class murshun_cigs_cigpack : CA_Magazine {
        mass=0;
    };
    class murshun_cigs_lighter : CA_Magazine {
        mass=0;
    };
    class murshun_cigs_matches : CA_Magazine {
        mass=0;
    };
};