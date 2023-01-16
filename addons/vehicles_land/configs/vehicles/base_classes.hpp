// Turret classes
class Turrets;
class CargoTurret;
//class NewTurret;
class M2_Turret;

// class StaticWeapon;
// class StaticCannon : StaticWeapon {
//    class Turrets;
//    class Components;
// };

//class StaticMGWeapon;

// Misc classes
class Components;
//class AISteeringComponent;

// VIC classes
class Truck_F;
//class Tank;
class Land;

class LandVehicle : Land {
    class Components;
};

class Car : LandVehicle {
    //class NewTurret;
    class Components;
};

class Car_F : Car {
    class Turrets;
    class HitPoints;
    class textureSources;
 
    class Components;
};

