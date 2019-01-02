

class Offroad_01_military_base_F;
class Offroad_01_armed_base_F : Offroad_01_military_base_F {
    class Turrets;
};
class I_G_Offroad_01_armed_F : Offroad_01_armed_base_F {
    class Turrets : Turrets {
        class M2_Turret;
    };
};
class O_G_Offroad_01_armed_F : I_G_Offroad_01_armed_F {};
class O_G_Offroad_01_armed_F_OCimport_01 : O_G_Offroad_01_armed_F {};
class O_G_Offroad_01_armed_F_OCimport_02 : O_G_Offroad_01_armed_F_OCimport_01 {};