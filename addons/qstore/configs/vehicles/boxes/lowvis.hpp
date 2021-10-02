    
class SOCOMD_QStore_LOWVIS : SOCOMD_QStore_Base {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "QStore LOW-VIS";

    class ACE_Actions {
        class ACE_MainActions {
            displayName = "Qstore";
            selection = "";
            distance = 5;
            condition = 1;
            
            class SOCOMD_arsenal {
                displayName = "Arsenal";
                condition = 1;
                statement = "[player, player, false] call ace_socomd_arsenal_fnc_openBox";
                showDisabled = 0;
                exceptions[] = {"isNotInside", "isNotSitting"};                
            };
            // Select Loadouts
            QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS,"Loadouts")
                QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUB0,"Change Role (LOWVIS)")
                    QSTORE_ACTION_LOADOUT("Commander",SOCOMD_LOWVIS_Commander)
                    QSTORE_ACTION_LOADOUT("Leader",SOCOMD_LOWVIS_Leader)
                    QSTORE_ACTION_LOADOUT("2IC",SOCOMD_LOWVIS_2IC)
                    QSTORE_ACTION_LOADOUT("Rifleman",SOCOMD_LOWVIS_Rifleman)
                    QSTORE_ACTION_LOADOUT("Marksman",SOCOMD_LOWVIS_Marksman)
                    QSTORE_ACTION_LOADOUT("Sapper",SOCOMD_LOWVIS_Sapper)
                    QSTORE_ACTION_LOADOUT("Breacher",SOCOMD_LOWVIS_Breacher)
                    QSTORE_ACTION_LOADOUT("Gunner",SOCOMD_LOWVIS_MachineGunner)
                    QSTORE_ACTION_LOADOUT("Medic",SOCOMD_LOWVIS_Medic)
                    QSTORE_ACTION_LOADOUT("Anti-tank",SOCOMD_LOWVIS_AT)
                QSTORE_ACTION_GRP_END

                QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUPPORT,"Change Role (SUPPORT)")
                    QSTORE_ACTION_LOADOUT("Logisitican",SOCOMD_LOWVIS_Logistician)
                    QSTORE_ACTION_LOADOUT("Aeromedical Operator",SOCOMD_LOWVIS_AO)
                    QSTORE_ACTION_LOADOUT("Pilot",SOCOMD_LOWVIS_Pilot)
                    QSTORE_ACTION_LOADOUT("Crewman",SOCOMD_LOWVIS_Crewman)
                    QSTORE_ACTION_LOADOUT("Recon",SOCOMD_LOWVIS_Recon)
                    QSTORE_ACTION_LOADOUT("Recon Asst.",SOCOMD_LOWVIS_Recon_Assistant)
                QSTORE_ACTION_GRP_END

                class SOCOMD_SavePrefs {
                    displayName = "Save";
                    condition = "[_player] call SOCOMD_fnc_ActionCondition_HasLoadout";
                    statement = "[_player] spawn SOCOMD_fnc_SaveLoadoutPrefs";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };

                class SOCOMD_LoadPrefs {
                    displayName = "Load";
                    condition = "[_player] call SOCOMD_fnc_ActionCondition_HasLoadout";
                    statement = "[_player] spawn SOCOMD_fnc_LoadLoadoutPrefs";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };
            QSTORE_ACTION_GRP_END

        };
    };
};