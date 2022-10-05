    
class BasicBandage;
class FieldDressing: BasicBandage {
    displayName = "Israeli Bandage";
    treatmentTime = 7.7;
};
class PackingBandage: BasicBandage {};
class ElasticBandage: BasicBandage {
    treatmentTime = 1;
};
class QuikClot: BasicBandage {
    treatmentTime = 3;
};