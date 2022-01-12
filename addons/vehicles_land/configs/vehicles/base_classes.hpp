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

class Wheeled_APC_F : Car_F {};
