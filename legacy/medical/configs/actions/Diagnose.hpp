    
class Diagnose: BasicBandage {};
class CheckPulse: Diagnose {};
class CheckBloodPressure: CheckPulse {};
class CheckResponse : CheckPulse {
    displayName = "Check Condition";
    displayNameProgress = "Checking Patient's Condition...";
    callbackSuccess = "SOCOMD_Medical_fnc_checkResponse";
};