class Land;


class LandVehicle : Land {
    class Components;
};

class Car : LandVehicle {
    class NewTurret;
    class Components;
};

class Car_F : Car {
    class Turrets;
    class HitPoints;
    class textureSources;
 
    class Components;
};
    // shared taki HMG
class StaticWeapon;
class StaticMGWeapon;

class Wheeled_APC_F : Car_F {};

class Tank : LandVehicle {
    class Turrets;
};

class Tank_F : Tank {
    class Turrets;
    class Components;
};

// Predefines to allow overwrites
class Truck_F;



///////////////////////////////////////////////////////////////////////////////////
// ZU23 Turrets
class StaticCannon : StaticWeapon {
    class Turrets;
    class Components;
};
