class CUP_UAZ_Base : Car_F {};
class CUP_UAZ_Armed_Base : CUP_UAZ_Base {
    class Turrets;
};
class CUP_UAZ_MG_Base : CUP_UAZ_Armed_Base {
    class Turrets : Turrets {
        class MainTurret;
    };
};
class CUP_UAZ_MG_Base_OCimport_01 : CUP_UAZ_MG_Base {};
class CUP_UAZ_MG_Base_OCimport_02 : CUP_UAZ_MG_Base_OCimport_01 {}; 


class CUP_LR_Base: Car_F {
    class Turrets;
};
class CUP_LR_MG_Base : CUP_LR_Base {
    class Turrets : Turrets {
        class MainTurret;
    };
};
class CUP_LR_MG_Base_OCimport_01 : CUP_LR_MG_Base {};
class CUP_LR_MG_Base_OCimport_02 : CUP_LR_MG_Base_OCimport_01 {};
