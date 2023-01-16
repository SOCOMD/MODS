#define SOCOMD_DIFFICULTY_PRESET \
    reducedDamage       = 0; \
    groupIndicators     = 0; \
    friendlyTags        = 0; \
    enemyTags           = 0; \
    detectedMines       = 0; \
    commands            = 0; \
    waypoints           = 0; \
    weaponInfo          = 1; \
    stanceIndicator     = 1; \
    staminaBar          = 1; \
    weaponCrosshair     = 0; \
    visionAid           = 0; \
    thirdPersonView     = 0; \
    cameraShake         = 1; \
    scoreTable          = 0; \
    deathMessages       = 0; \
    vonID               = 0; \
    mapContent          = 0; \
    autoReport          = 0; \
    multipleSaves       = 0;

class CfgDifficultyPresets {
    defaultPreset = "Custom";
    myArmorCoef = 1.5;
    groupArmorCoef = 1.5;
    fadeDistanceStart=40;
    fadeDistanceSpan=10;
    recoilCoef = 1;
    visionAidCoef = 0.80000001;
    divingLimitMultiplier = 1;
    animSpeedCoef = 0;
    cancelThreshold = 0;
    showCadetHints = 1;
    showCadetWP = 1;

// act as global coeficients - might need to leave on 1.0 so skillFinal results are more consistent on the other end. 
// see CfgAiSkill.hpp
    class CustomAILevel {
        skillAI=1.0;
        precisionAI=0.8;
    };

    class Recruit {
        displayName = "$STR_Difficulty0";
        optionDescription = "$STR_Difficulty0_desc";
        optionPicture = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";
        class Options {
            SOCOMD_DIFFICULTY_PRESET
        };
    };

    class Regular {
        displayName = "$STR_Difficulty1";
        optionDescription = "$STR_Difficulty1_desc";
        optionPicture = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";
        class Options {
            SOCOMD_DIFFICULTY_PRESET
        };
    };

    class Veteran {
        displayName = "$STR_Difficulty2";
        optionDescription = "$STR_Difficulty2_desc";
        optionPicture = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";
        class Options {
            SOCOMD_DIFFICULTY_PRESET
        };
    };
    
    class Custom {
        displayName = "$STR_Difficulty_Custom";
        optionDescription = "$STR_Difficulty_Custom_desc";
        optionPicture = "\A3\Ui_f\data\Logos\arma3_white_ca.paa";
        class Options {
            SOCOMD_DIFFICULTY_PRESET
        };
    };
};