
class SOCOMD_QStore_RUS : SOCOMD_QStore_Base {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "QStore RUS";

    class ACE_Actions {
        class ACE_MainActions {
            displayName = "Qstore";
            selection = "";
            distance = 5;
            condition = 1;

            class SOCOMD_arsenal {
                displayName = "Arsenal";
                condition = 1;
                statement = "[player, player, false] call socomd_arsenal_fnc_openBox";
                showDisabled = 0;
                exceptions[] = {"isNotInside", "isNotSitting"};
            };

            QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS,"Loadouts")
                QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUB0,"Change Role (SSO)")
                    QSTORE_ACTION_LOADOUT("Commander",SOCOMD_SSO_Commander)
                    QSTORE_ACTION_LOADOUT("Leader",SOCOMD_SSO_Leader)
                    // QSTORE_ACTION_LOADOUT("2IC",SOCOMD_SSO_2IC)
                    QSTORE_ACTION_LOADOUT("Rifleman",SOCOMD_SSO_Rifleman)
                    QSTORE_ACTION_LOADOUT("Marksman",SOCOMD_SSO_Marksman)
                    QSTORE_ACTION_LOADOUT("Sapper",SOCOMD_SSO_Sapper)
                    QSTORE_ACTION_LOADOUT("Breacher",SOCOMD_SSO_Breacher)
                    QSTORE_ACTION_LOADOUT("Gunner",SOCOMD_SSO_MachineGunner)
                    QSTORE_ACTION_LOADOUT("Medic",SOCOMD_SSO_Medic)
                    QSTORE_ACTION_LOADOUT("Anti-tank",SOCOMD_SSO_AT)
                QSTORE_ACTION_GRP_END

                QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUPPORT,"Change Role (SUPPORT)")
                    QSTORE_ACTION_LOADOUT("Logisitican",SOCOMD_SSO_Logistician)
                    // QSTORE_ACTION_LOADOUT("Aeromedical Operator",SOCOMD_SSO_AO)
                    QSTORE_ACTION_LOADOUT("Pilot",SOCOMD_SSO_Pilot)
                    QSTORE_ACTION_LOADOUT("Crewman",SOCOMD_SSO_Crewman)
                    QSTORE_ACTION_LOADOUT("Recon",SOCOMD_SSO_Recon)
                    // QSTORE_ACTION_LOADOUT("Recon Asst.",SOCOMD_SSO_Recon_Assistant)
                QSTORE_ACTION_GRP_END

            QSTORE_ACTION_GRP_END
        };
    };
};
