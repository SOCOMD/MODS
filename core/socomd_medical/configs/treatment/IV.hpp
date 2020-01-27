class BloodIV {
	volume = 1000;
	ratio[] = {"Plasma", 1};
};
class BloodIV_500: BloodIV {
	volume = 500;
};
class BloodIV_250: BloodIV {
	volume = 250;
};

////////////////////////////////////////////////////////////////////////////////

class PlasmaIV: BloodIV {
	volume = 1000;
	ratio[] = {"Blood", 1};
	type = "Plasma";
};
class PlasmaIV_500: PlasmaIV {
	volume = 500;
};
class PlasmaIV_250: PlasmaIV {
	volume = 250;
};

////////////////////////////////////////////////////////////////////////////////

class SalineIV: BloodIV {
	volume = 1000;
	type = "Saline";
	ratio[] = {};
};
class SalineIV_500: SalineIV {
	volume = 500;
};
class SalineIV_250: SalineIV {
	volume = 250;
};