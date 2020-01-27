class ApplyTourniquet: BasicBandage {
	treatmentTime = 0.5;
};
class RemoveTourniquet: ApplyTourniquet {
	treatmentTime = 1.5;
};
class Splint: BasicBandage {};

class BodyBag: BasicBandage {
	treatmentTime = 10;
};

class CPR: BasicBandage {
	treatmentTime = 10;
};
class SurgicalKit: FieldDressing {};
class PersonalAidKit: BasicBandage {};