    
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
// class larynxtubus {
//     displayName = "Insert Advanced Airway";
//     displayNameProgress = "Inserting i-Gel...";
// };
// class Guedeltubus:larynxtubus {
//     displayName = "Insert Basic Airway";
//     displayNameProgress = "Inserting NPA...";
// };
// class Overstretch: larynxtubus {
//     displayName = "Hyperextending Head";
//     displayNameProgress = "Tilting...";
// };
// class TurnAround: larynxtubus {
//     displayName = "Manually Remove Debris";
//     displayNameProgress = "Manually removing debris...";
// };


// class Accuvac: larynxtubus {
//     displayNameProgress = "Clearing Airway...";
// };
