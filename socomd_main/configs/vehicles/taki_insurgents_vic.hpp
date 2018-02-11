/*
// Use this section for a global default
class Car_F;
class CUP_LR_Base : Car_F {
    weapons[] = {"SportCarHorn"};
    accuracy = 0.25;
};
*/


class CUP_LR_Base: Car_F {
    class Turrets: Turrets {
        class MainTurret;
    };
};

class CUP_LR_MG_Base: CUP_LR_Base {
    class Turrets: Turrets {
        class MainTurret;
    };
};
// TK Malitia MG2 technical
class CUP_O_LR_MG_TKM: CUP_LR_MG_Base {
    class Turrets: Turrets {
        class MainTurret: MainTurret {
            weapons[] = {"Vhmg_M2_veh_TKM"};
        };
    };
    accuracy = 0.09;

};
