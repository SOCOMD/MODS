class CUP_Datsun_Base : Car_F {
    class Turrets;
};
class CUP_Datsun_PK_Base : CUP_Datsun_Base {
    class Turrets : Turrets {
        class MainTurret;
    };
};
class CUP_I_Datsun_PK_TK : CUP_Datsun_PK_Base {};
class CUP_I_Datsun_PK_TK_OCimport_01 : CUP_I_Datsun_PK_TK {};
class CUP_I_Datsun_PK_TK_OCimport_02 : CUP_I_Datsun_PK_TK_OCimport_01 {};

class CUP_Datsun_PK_Base_OCimport_01 : CUP_Datsun_PK_Base {};
class CUP_Datsun_PK_Base_OCimport_02 : CUP_Datsun_PK_Base_OCimport_01 {};