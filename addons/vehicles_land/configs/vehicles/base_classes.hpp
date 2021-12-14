class Land;


class LandVehicle : Land {
    class Components;
};

class Car : LandVehicle {
    class NewTurret;
    class Components : Components {
        class AICarSteeringComponent;
    };
};

class Car_F : Car {
    class HitPoints;
    class textureSources;
    
    class Turrets {
        class CargoTurret;
        class MainTurret : NewTurret {};
    };
    class Components : Components {
       
    };
};
    // shared taki HMG
class StaticWeapon;
class StaticMGWeapon : StaticWeapon {
    class Turrets;
};

class Wheeled_APC_F : Car_F {};

class Tank : LandVehicle {
    class Turrets;
};

class Tank_F : Tank {
    class Turrets : Turrets {
        class MainTurret;
    };
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
