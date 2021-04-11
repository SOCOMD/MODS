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

class SurgicalKit: FieldDressing {};
class PersonalAidKit: BasicBandage {};
class larynxtubus;
class TurnAround: larynxtubus {
	displayName = "Manually Remove Debris";
	displayNameProgress = "Manually clearing airway...";
};


class TensionpneumothoraxTreatment {
	items[] = {"SOCOMD_NDC"};
};
class HemopneumothoraxTreatment {
	items[] = {"SOCOMD_NDC"};
};