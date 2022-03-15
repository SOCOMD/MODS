    
class BloodIV {
    volume = 1500;
    ratio[] = {"Plasma", 1};
};
class BloodIV_500: BloodIV {
    volume = 750;
};
class BloodIV_250: BloodIV {
    volume = 325;
};

////////////////////////////////////////////////////////////////////////////////

class PlasmaIV: BloodIV {
    volume = 1500;
    ratio[] = {"Blood", 1};
    type = "Plasma";
};
class PlasmaIV_500: PlasmaIV {
    volume = 750;
};
class PlasmaIV_250: PlasmaIV {
    volume = 325;
};

////////////////////////////////////////////////////////////////////////////////

class SalineIV: BloodIV {
    volume = 1500;
    type = "Saline";
    ratio[] = {};
};
class SalineIV_500: SalineIV {
    volume = 750;
};
class SalineIV_250: SalineIV {
    volume = 325;
};