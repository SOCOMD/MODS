    
class CfgMovesBasic {
    class DefaultDie;
    
};

class CfgMovesMaleSdr : CfgMovesBasic {
    class States {

        

        class LadderCivilStatic;
        class LadderCivilUpLoop: LadderCivilStatic {
            speed="1.05/(2/3)";
        };
    };
};
