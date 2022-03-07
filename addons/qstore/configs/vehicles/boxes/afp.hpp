
class SOCOMD_QStore_AFP : SOCOMD_QStore_Base {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "AFP QStore";

    class ACE_Actions {
        class ACE_MainActions {
            displayName = "AFP QStore";
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
                QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUB0,"Change Role (AFP)")
                    QSTORE_ACTION_LOADOUT("Leader",SOCOMD_AFP_Leader)
                    QSTORE_ACTION_LOADOUT("Rifleman",SOCOMD_AFP_Rifleman)
                    QSTORE_ACTION_LOADOUT("Marksman",SOCOMD_AFP_Marksman)
                    QSTORE_ACTION_LOADOUT("Breacher",SOCOMD_AFP_Breacher)
                    QSTORE_ACTION_LOADOUT("Medic",SOCOMD_AFP_Medic)
                QSTORE_ACTION_GRP_END

                QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUPPORT,"Change Role (SUPPORT)")
                    QSTORE_ACTION_LOADOUT("Pilot",SOCOMD_Pilot)
                QSTORE_ACTION_GRP_END

                
            QSTORE_ACTION_GRP_END

        };
    };
};