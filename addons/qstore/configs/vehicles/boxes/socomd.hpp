    
////////////////////////////////////////////////////////////////////////////////
// INTERACTIVE BOX

class Land_PaperBox_closed_F;
class SOCOMD_QStore_Base : Land_PaperBox_closed_F {
    scope = SCOPE_PROTECTED;
    scopeCurator = SCOPE_PRIVATE;
    editorCategory = EdCat_Supplies;
    editorSubcategory = SOCOMD_EdSubcat_Supply_SOCOMD;
    author = AUTHOR_STR;
    displayName = "QStore";

    ace_cargo_hasCargo = 0;
    ace_cargo_canLoad = 0;
    ace_dragging_canDrag = 0;
    ace_dragging_canCarry = 0;

    class TransportMagazines {};
    class TransportWeapons {};
    class TransportItems {};
    class TransportBackpacks {};
};


class SOCOMD_QStore_A : SOCOMD_QStore_Base {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "QStore";

    class ACE_Actions {
        class ACE_MainActions {
            displayName = "QStore";
            selection = "";
            distance = 5;
            condition = 1;
            class SOCOMD_arsenal {
                displayName = "Personalise";
                condition = 1;
                statement = "[player, player, false] call socomd_arsenal_fnc_openBox";
                showDisabled = 0;
                exceptions[] = {"isNotInside", "isNotSitting"};                
            };
            // Select Loadouts
            QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS,"Loadouts")
                QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUB0,"Change Role (2CDO)")
                    QSTORE_ACTION_LOADOUT("Commander",SOCOMD_Commander)
                    QSTORE_ACTION_LOADOUT("Leader",SOCOMD_Leader)
                    //QSTORE_ACTION_LOADOUT("2IC",SOCOMD_2IC)
                    QSTORE_ACTION_LOADOUT("Rifleman",SOCOMD_Rifleman)
                    QSTORE_ACTION_LOADOUT("Marksman",SOCOMD_Marksman)
                    QSTORE_ACTION_LOADOUT("Sapper",SOCOMD_Sapper)
                    QSTORE_ACTION_LOADOUT("Breacher",SOCOMD_Breacher)
                    QSTORE_ACTION_LOADOUT("Gunner",SOCOMD_MachineGunner)
                    QSTORE_ACTION_LOADOUT("Medic",SOCOMD_Medic)
                    QSTORE_ACTION_LOADOUT("Anti-tank",SOCOMD_AT)
                QSTORE_ACTION_GRP_END

                QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUPPORT,"Change Role (SUPPORT)")
                    QSTORE_ACTION_LOADOUT("Logisitican",SOCOMD_Logistician)
                    //QSTORE_ACTION_LOADOUT("Aeromedical Operator",SOCOMD_AO)
                    QSTORE_ACTION_LOADOUT("Pilot",SOCOMD_Pilot)
                    QSTORE_ACTION_LOADOUT("Crewman",SOCOMD_Crewman)
                    QSTORE_ACTION_LOADOUT("Recon",SOCOMD_Recon)
                    QSTORE_ACTION_LOADOUT("HAVOC",SOCOMD_TACP)
                    //QSTORE_ACTION_LOADOUT("Recon Asst.",SOCOMD_Recon_Assistant)
                QSTORE_ACTION_GRP_END

                
                QSTORE_ACTION_GRP_BEGIN(SELECT_Customise,"Specialty Gear")
                    class SOCOMD_Uniforms_ToggleDiving {
                        displayName = "Toggle Diving Uniform";
                        condition = "[_player] call socomd_qstore_fnc_CanToggleDiving";
                        statement = "[_player] call socomd_qstore_fnc_ToggleDiving";
                        showDisabled = 0;
                        exceptions[] = {"isNotInside", "isNotSitting"};
                    };
                    class SOCOMD_Uniforms_ToggleHalo {
                        displayName = "Toggle HALO Gear";
                        condition = "[_player] call socomd_qstore_fnc_CanToggleHalo";
                        statement = "[_player] call socomd_qstore_fnc_ToggleHalo";
                        showDisabled = 0;
                        exceptions[] = {"isNotInside", "isNotSitting"};
                    };
                QSTORE_ACTION_GRP_END
            QSTORE_ACTION_GRP_END

        };
    };
};