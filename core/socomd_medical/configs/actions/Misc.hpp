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
class ChestSeal {
        displayName = CSTRING(pneumothorax_display);
        displayNameProgress = CSTRING(treating);
        category = "advanced";
        treatmentLocations = 0;
        allowedSelections[] = {"Body"};
        allowSelfTreatment = 0;
        medicRequired = QGVAR(medLvl_Chestseal);
        treatmentTime = 7;
        items[] = {"kat_chestSeal"};
        condition = "SOCOMD_Medical_fnc_cheastSealCondition";
        patientStateCondition = 0;
        callbackSuccess = QUOTE([ARR_2(_medic, _patient)] call FUNC(treatmentAdvanced_chestSeal));
        callbackFailure = "";
        callbackProgress = "";
        consumeItem = 1;
        animationPatient = "";
        animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
        animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
        animationMedic = "AinvPknlMstpSlayWrflDnon_medicOther";
        animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
        animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
        litter[] = {};
    };