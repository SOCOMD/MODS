    

////////////////////////////////////////////////////////////////////////////////
// CUSTOM ACE ACTIONS

#define QSTORE_ACTION_REPLACE_UNIFORM(ID, DISPLAY_STR, UNIFORM_SOURCE, UNIFORM_TARGET) \
class SOCOMD_ACTION_REPLACE_UNIFORM_##ID { \
    displayName = DISPLAY_STR; \
    condition = "(alive _player) and ((uniform _player) isKindOf ["#UNIFORM_SOURCE", configFile >> 'CfgWeapons'])"; \
    statement = "[_player, "#UNIFORM_TARGET"] call socomd_core_fnc_Action_ReplaceUniform;"; \
    exceptions[] = {"isNotInside", "isNotSitting"}; \
    showDisabled = 0; \
};
#define QSTORE_ACTION_REPLACE_VEST(ID, DISPLAY_STR, VEST_SOURCE, VEST_TARGET) \
class SOCOMD_ACTION_REPLACE_UNIFORM_##ID { \
    displayName = DISPLAY_STR; \
    condition = "(alive _player) and ((vest _player) isEqualTo "#VEST_SOURCE")"; \
    statement = "[_player, "#VEST_TARGET"] call socomd_core_fnc_Action_ReplaceVest;"; \
    exceptions[] = {"isNotInside", "isNotSitting"}; \
    showDisabled = 0; \
};

#define QSTORE_ACTION_REPLACE_RECON(ID, DISPLAY_STR, UNIFORM_TARGET) \
class SOCOMD_ACTION_REPLACE_UNIFORM_##ID { \
    displayName = DISPLAY_STR; \
    condition = "(alive _player) and (isNumber (  configFile >> 'CfgWeapons' >> (uniform _player) >> 'Recon')) and ((getNumber(  configFile >> 'CfgWeapons' >> (uniform _player) >> 'Recon')) == 1)"; \
    statement = "[_player, true, "#UNIFORM_TARGET"] call socomd_core_fnc_Action_toggleGhillie;"; \
    exceptions[] = {"isNotInside", "isNotSitting"}; \
    showDisabled = 0; \
};

#define QSTORE_ACTION_REPLACE_HEADGEAR(ID, DISPLAY_STR, HEADGEAR_SOURCE, HEADGEAR_TARGET) \
class SOCOMD_ACTION_REPLACE_HEADGEAR_##ID { \
    displayName = DISPLAY_STR; \
    condition = "(alive _player) and ((headgear _player) isKindOf ["#HEADGEAR_SOURCE", configFile >> 'CfgWeapons'])"; \
    statement = "[_player, "#HEADGEAR_TARGET"] call socomd_core_fnc_Action_ReplaceHeadgear;"; \
    exceptions[] = {"isNotInside", "isNotSitting"}; \
    showDisabled = 0; \
};

class CAManBase : Man {
    class ACE_SelfActions {


        class ACE_Equipment {

        //Recon
            class SOCOMD_Ghillie_interract {
                displayName = "Ghillie";
                condition = "(alive _player)";
                showDisabled = 0;
                exceptions[] = {"isNotInside", "isNotSitting"};

                QSTORE_ACTION_REPLACE_RECON(RECON_Down_Ghillie_lsh,"Lush",SOCOMD_Ghillie_lsh)
                QSTORE_ACTION_REPLACE_RECON(RECON_Down_Ghillie_sard,"Semi-Arid",SOCOMD_Ghillie_sard)
                QSTORE_ACTION_REPLACE_RECON(RECON_Down_Ghillie_ard,"Arid",SOCOMD_Ghillie_ard)
                QSTORE_ACTION_REPLACE_RECON(RECON_Down_Ghillie_jngl,"Jungle",SOCOMD_Ghillie_jngl)

                // QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Down_Ghillie_lsh,"Lush",SOCOMD_Uniform_AMCU_SleevesDown_Recon,SOCOMD_AMCU_Ghillie_lsh)
                // QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Down_Ghillie_sard,"Semi-Arid",SOCOMD_Uniform_AMCU_SleevesDown_Recon,SOCOMD_AMCU_Ghillie_sard)
                // QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Down_Ghillie_ard,"Arid",SOCOMD_Uniform_AMCU_SleevesDown_Recon,SOCOMD_AMCU_Ghillie_ard)
                // QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Down_Ghillie_jngl,"Jungle",SOCOMD_Uniform_AMCU_SleevesDown_Recon,SOCOMD_AMCU_Ghillie_jngl)

                class SOCOMD_ACTION_REPLACE_UNIFORM_TO_RECON { 
                    displayName = "Put on uniform"; 
                    condition = "(alive _player) and (isNumber (  configFile >> 'CfgWeapons' >> (uniform _player) >> 'SOCOMD_Ghillie')) and ((getNumber(  configFile >> 'CfgWeapons' >> (uniform _player) >> 'SOCOMD_Ghillie')) == 1)"; 
                    statement = "[_player, false, ''] call socomd_core_fnc_Action_toggleGhillie;"; 
                    exceptions[] = {"isNotInside", "isNotSitting"}; 
                    showDisabled = 0;
                };

                // QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Up_Ghillie_lsh,"Lush",SOCOMD_Uniform_AMCU_SleevesUp_Recon,SOCOMD_AMCU_Ghillie_lsh)
                // QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Up_Ghillie_sard,"Semi-Arid",SOCOMD_Uniform_AMCU_SleevesUp_Recon,SOCOMD_AMCU_Ghillie_sard)
                // QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Up_Ghillie_ard,"Arid",SOCOMD_Uniform_AMCU_SleevesUp_Recon,SOCOMD_AMCU_Ghillie_ard)
                // QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Up_Ghillie_jngl,"Jungle",SOCOMD_Uniform_AMCU_SleevesUp_Recon,SOCOMD_AMCU_Ghillie_jngl)

            };

        };
    };
    class ACE_Actions{
        class ACE_Head{
            class Blindfold{
                displayName="Blindfold";
                condition="[_player,_target] call socomd_core_fnc_ActionCondition_canInteract";
                statement="[_player,_target] call socomd_core_fnc_Action_putBlindfoldOn";
                showDisabled=0;
                priority=1;
                distance=2;
            };
        };
    };
};
