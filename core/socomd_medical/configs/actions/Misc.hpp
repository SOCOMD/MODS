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
class larynxtubus {
	displayName = "$STR_socomd_medical_Larynx_Display";
	displayNameProgress = "$STR_socomd_medical_Larynx_action";
};
class Guedeltubus:larynxtubus {
	displayName = "$STR_socomd_medical_Guedel_Display";
	displayNameProgress = "$STR_socomd_medical_Guedel_action";
};
class Overstretch: larynxtubus {
	displayName = "$STR_socomd_medical_overstretch";
	displayNameProgress = "$STR_socomd_medicaloverstretching";
};
class TurnAround: larynxtubus {
	displayName = "$STR_socomd_medical_turnaround";
	displayNameProgress = "$STR_socomd_medical_turnaround_action";
};

class TensionpneumothoraxTreatment {
	items[] = {"SOCOMD_NDC"};
};
class HemopneumothoraxTreatment {
	items[] = {"SOCOMD_NDC"};
};