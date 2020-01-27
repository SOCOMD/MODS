class BasicBandage;
class FieldDressing: BasicBandage {
	displayName = "Israeli Bandage";
	treatmentTime = 8.7;
};
class PackingBandage: BasicBandage {};
class ElasticBandage: BasicBandage {
	treatmentTime = 1;
};
class QuikClot: BasicBandage {
	treatmentTime = 4.5;
};