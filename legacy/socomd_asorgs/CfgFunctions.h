class CfgFunctions
{
    class ASORGS
    {
        class ASORGS_functions
        {
            file = "\ASORGS\functions";
            class open;
            class config { preInit = 1; };
        //    class buildDatabase { scope = 1; preInit = 1; };

            class buildDatabase2 { scope = 1; preInit = 1; };
            //class virtualInventory { scope = 1; preInit = 1; };
            class ReloadMainDialog {scope = 1;};
            class selectionChanged {scope = 1;};
            class switchWeapons {scope = 1;};
            class switchAmmo {scope = 1;};
            class switchAttachments {scope = 1;};
            class updateAttachments {scope = 1;};
            class updateAmmo {scope = 1;};
            class setAmmo {scope = 1;};
            class setGrenades {scope = 1;};
            class setExplosives {scope = 1;};
            class setItems {scope = 1;};
            class updateUI {scope = 1;};
            class updateUIhide {scope = 1;};
            class updateUIshow {scope = 1;};
            class updateUIshowDisabled {scope = 1;};
            class updateCapacity {scope = 1;};
            class getDetails {scope = 1;};
            class updateLoop {scope = 1;};
            class pressPlus {scope = 1;};
            class pressMinus {scope = 1;};
            class updateMultiCombo {scope = 1;};
            class updateCombo {scope = 1;};
            class fitCount {scope = 1;};
            class openSave {scope = 1;};
            class saveSlotChanged {scope = 1;};
            class savePressed {scope = 1;};
            class presetSelected {scope = 1;};
            class cameraStart {scope = 1;};
            class cameraEnd {scope = 1;};
            class closed {scope = 1;};
            class resetClone {scope = 1;};
            class setBinoculars {scope = 1;};
            class setNightvision {scope = 1;};
            class setGoggles {scope = 1;};
            class rotateClone {scope = 1;};
            class rotateCloneStart {scope = 1;};
            class rotateCloneStop {scope = 1;};            
            class updateExtraAttach {scope = 1;};    
            class numberSelected {scope = 1;};
            class numberDeselected {scope = 1;};
            class numberCharEntered {scope = 1;};
            class zoom {scope = 1;};
            class vectorLerp {scope = 1;};
            class getGearArray {scope = 1;};
            class applyGearArray {scope = 1;};
            class onRespawn {scope = 1;};
            class setUnitInsignia {scope = 1;};
            class updatePresets {scope = 1;};
            class deleteConfirm {scope = 1;};
            class deletePressed {scope = 1;};
            class startsWith {scope =1;};
            class GetRadioClass {scope = 1;};
            class IsRadio {scope = 1;};
            class IsAllowed {scope = 1;};
            class ApplyBlacklist {scope=1;};
            class Log {scope=1;};
            class EndsWith {scope=1;};
            class GetDetailsFromArray { scope=1; };
            class GetModIcon {scope=1; };
            class TrimLeft {scope=1; };
            class Split {scope=1; };
            class GetWeaponBase {scope=1; };
        };

        class VirtualInventory
        {
            file = "\ASORGS\virtualinventory";
            class AddBackpack {};
            class AddBinoculars {};
            class AddCompass {};
            class AddGoggles {};
            class AddGPS {};
            class AddHandgunItem {};
            class AddHeadgear {};
            class AddInventoryItem {};
            class AddInventoryItems {};
            class AddLauncherItem {};
            class AddMap {};
            class AddNightvision {};
            class AddPrimaryWeaponItem {};
            class AddRadio {};
            class AddUniform {};
            class AddVest {};
            class AddWatch {};
            class AddWeapon {};
            class AddInsignia {};
            class CanFit {};
            class CanFitBackpack {};
            class CanFitUniform {};
            class CanFitVest {};
            class CanFitWeapon {};
            class GetAllMagazines {};
            class GetBackpack {};
            class GetBinoculars {};
            class GetCompass {};
            class GetClass {};
            class GetGoggles {};
            class GetGPS {};
            class GetHandgun {};
            class GetHandgunItems {};
            class GetHeadgear {};
            class GetInsignia {};
            class GetInventoryItems {};
            class GetItemMass {};
            class GetLauncher {};
            class GetLauncherItems {};
            class GetMagazines {};
            class GetMap {};
            class GetNightvision {};
            class GetPrimaryWeapon {};
            class GetPrimaryWeaponItems {};
            class GetRadio {};
            class GetUniform {};
            class GetVest {};
            class GetWatch {};
            class GetWeaponMuzzleMagazines {};
            class RemoveAllHandgunItems {};
            class RemoveAllPrimaryWeaponItems {};
            class RemoveAllInventoryItems {};
            class RemoveAllLauncherItems {};
            class RemoveBackpack {};
            class RemoveBinoculars {};
            class RemoveCompass {};
            class RemoveGoggles {};
            class RemoveGPS {};
            class RemoveHandgunItem {};
            class RemoveHeadgear {};
            class RemoveInsignia {};
            class RemoveInventoryItem {};
            class RemoveLauncherItem {};
            class RemoveMap {};
            class RemoveNightvision {};
            class RemovePrimaryWeaponItem {};
            class RemoveRadio {};
            class RemoveUniform {};
            class RemoveVest {};
            class RemoveWatch {};
            class RemoveWeapon {};
            class UpdateWeight {};
            class ValidateInventory {};
            class ValidateMagazines {};
        };
    };
};