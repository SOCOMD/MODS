    
#define SOCOMD_DIFFICULTY_PRESET \
    reducedDamage       = 0; /*Decreases damage dealt to the player and members of his group.*/ \
    groupIndicators     = 0; /*Shows indication icons on units in player's group.*/ \
    friendlyTags        = 0; /*Friendly unit identification. Works only when the player aims at a unit.*/ \
    enemyTags           = 0; /*Enemy unit identification. Works only when the player aims at a unit.*/ \
    detectedMines       = 0; /*Shows icons indicating exact positions of mines. show = display the indicators on mines at 200m and closer.*/ \
    commands            = 0; /*Displays command icons like target markers, get in command and others.*/ \
    waypoints           = 0; /*Manages visibility of waypoint markers.*/ \
    weaponInfo          = 1; /*Shows Weapon Info box (contains round and magazine count, firing mode, etc.).*/ \
    stanceIndicator     = 1; /*Displays stance indication (contains actual stance, weapon resting and deployment).*/ \
    staminaBar          = 1; /*Manages visibility of stamina indicator. true = fades in when stamina changes.*/ \
    weaponCrosshair     = 0; /*Shows weapon crosshair both in 1st and 3rd person view.*/ \
    visionAid           = 0; /*Helps to detect units in visual range and identify friend from foe.*/ \
    thirdPersonView     = 1; /*Enables camera switching to 3rd person view.*/ \
    cameraShake         = 1; /*Shakes camera if player is near explosion, passing vehicle or if player's vehicle is under G-load.*/ \
    scoreTable          = 0; /*Displays table with kills, deaths and overall score in multiplayer.*/ \
    deathMessages       = 0; /*Shows in chat window who killed the player.*/ \
    vonID               = 0; /*Indicates who is speaking through VON communication.*/ \
    mapContent          = 0; /*Shows friendly units, enemy units and detected mines on the map.*/ \
    autoReport            = 0; /*Enables/disables automatic reporting of spotted enemies by players only.*/ \
    multipleSaves        = 0; /*Allows player to create multiple saves in a mission.*/

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
        precisionAI=1.0;
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