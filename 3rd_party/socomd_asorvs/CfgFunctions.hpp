class CfgFunctions
{
    class SOCOMD
    {
        class ASORVS
        {
            file = "ASORVS\functions";
            class ASORVSSetup {};
        };
    };
    
    class ASORVS
    {
        class ASORVS_functions
        {
            file = "ASORVS\functions";
            class open;
            class config {preInit = 1; };
            //class virtualInventory { scope = 1; preInit = 1; };
            class buildDatabase { scope = 1; preInit = 1; };
            class cameraEnd {scope = 1;};
            class cameraStart {scope = 1;};
            class closed {scope = 1;};
            class GetDescription {scope=1;};
            class getDetails {scope = 1;};
            class GetFilteredItems {scope=1;};
            class IsAllowed {scope = 1;};
            class Log {scope=1;};
            class presetSelected {scope = 1;};
            class ReloadMainDialog {scope = 1;};
            class resetClone {scope = 1;};
            class rotateClone {scope = 1;};
            class rotateCloneStart {scope = 1;};
            class rotateCloneStop {scope = 1;};            
            class selectionChanged {scope = 1;};
            class SpawnVehicle {scope=1;};
            class UpdateCombo {scope=1;};
            class updateLoop {scope = 1;};
            class updateUI {scope = 1;};
            class updateUIhide {scope = 1;};
            class updateUIshow {scope = 1;};
            class updateUIshowDisabled {scope = 1;};
            class vectorLerp {scope = 1;};
            class VehicleSlots {scope=1;};
            class VehicleWeapons {scope=1;};
            class zoom {scope = 1;};    
        };
    };
};