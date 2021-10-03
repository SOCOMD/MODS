    
////////////////////////////////////////////////////////////////////////////////
// ACE Medication

class Epinephrine {
    painReduce=0;
    hrIncreaseLow[]={20,25};
    hrIncreaseNormal[]={20,25};
    hrIncreaseHigh[]={30,30};
    timeInSystem=300;
    maxDose=6;
    inCompatableMedication[]={};
    viscosityChange=15;
};

class Morphine {
    painReduce=2;
    hrIncreaseLow[]={-15,-25};
    hrIncreaseNormal[]={-15,-25};
    hrIncreaseHigh[]={-15,-30};
    timeInSystem=9800;
    maxDose=4;
    inCompatableMedication[]={};
    viscosityChange=-3;
};

class Atropine {
    painReduce=0;
    hrIncreaseLow[]={7,10};
    hrIncreaseNormal[]={15,25};
    hrIncreaseHigh[]={15,30};
    timeInSystem=120;
    maxDose=6;
    inCompatableMedication[]={};
    viscosityChange=-10;
};

class Adenosine {
    painReduce = 0;
    hrIncreaseLow[] = {-7, -10};
    hrIncreaseNormal[] = {-15, -30};
    hrIncreaseHigh[] = {-15, -35};
    timeInSystem = 120;
    timeTillMaxEffect = 15;
    maxDose = 6;
    incompatibleMedication[] = {};
};

class PainKillers {
    painReduce=0.69999999;
    timeInSystem=120;
    maxDose=10;
    inCompatableMedication[]={};
    viscosityChange=5;
};

////////////////////////////////////////////////////////////////////////////////

class Naloxone {
    painReduce=0;
    hrIncreaseLow[]={5,7};
    hrIncreaseNormal[]={7,10};
    hrIncreaseHigh[]={15,25};
    timeInSystem=120;
    maxDose=4;
    onOverDose = "[_target, true, 60] call ace_medical_fnc_setUnconscious";
    inCompatableMedication[]={};
    viscosityChange=20;
};

class Fentanyl {
    painReduce=5;
    hrIncreaseLow[]={-10,-15};
    hrIncreaseNormal[]={-10,-15};
    hrIncreaseHigh[]={-10,-20};
    timeInSystem=6800;
    maxDose=4;
    inCompatableMedication[]={};
    viscosityChange=-3;
};

class Ketamine_6mg {
    painReduce=50;
    hrIncreaseLow[]={15,25};
    hrIncreaseNormal[]={15,35};
    hrIncreaseHigh[]={15,45};
    timeInSystem=1800;
    maxDose=12;
    inCompatableMedication[]={};
    viscosityChange=5;
    unconsciousTime=30;
    effectTime = 30;
};

class Ketamine_200mg : Ketamine_6mg {
    painReduce=50;
    hrIncreaseLow[]={15,25};
    hrIncreaseNormal[]={15,35};
    hrIncreaseHigh[]={15,45};
    timeInSystem=1800;
    maxDose=12;
    inCompatableMedication[]={};
    viscosityChange=5;
    unconsciousTime=300;
    effectTime = 30;
};

class Tetra : PainKillers {
    painReduce=0;
    hrIncreaseLow[]={0,0};
    hrIncreaseNormal[]={0,0};
    hrIncreaseHigh[]={0,0};
    timeInSystem=5000;
    viscosityChange=0;
};

class paracetamol : PainKillers {
    painReduce=2;
    timeInSystem=1200;
    maxDose=15;
    inCompatableMedication[]={};
};
class paracetamol_half : paracetamol {
    painReduce=1;
};
class paracetamol_quarter : paracetamol {
    painReduce=0.5;
};
class paracetamol_nil : paracetamol {
    painReduce=0;
};