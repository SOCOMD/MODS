//////////////////////////////////////////////////////////////////////
// NVGS

class NVGoggles;
// class zeus_earpiece : NVGoggles {
//     author = "Pomigit";
//     displayName = "Zeus Radio Earpiece";
//     picture = "\z\socomd\addons\data\icon\icon_H_earpiece.paa";
//     model = "\z\socomd\addons\data\models\earpiece.p3d";
//     modelOptics = "-";
//     visionMode[] = {"Normal", "NVG", "TI"};
//     thermalMode[] = {0,1};

//     class ItemInfo {
//         type = 616;
//         hmdType = 0;
//         uniformModel = "\z\socomd\addons\data\models\earpiece.p3d";
//         modelOff = "\z\socomd\addons\data\models\earpiece.p3d";
//         mass = 4;
//     };
// };
class USP_L3_pvs31_A2;
class SOCOMD_NVG : USP_L3_pvs31_A2    {
    ace_nightvision_border = "\z\socomd\addons\data\nvgoverlay\nvg_mask_binos_4096_125.paa";
    displayName = "L-3 AN/PVS-31a BNVD (White Phosphor) (A)";
    descriptionShort = "L-3/Harris AN/PVS-31a Binocular Night Vision Device 2376+ FOM<br />High Performance Unfilmed White Phosphor tube<br />Autogating/Adjustable Gain<br />1x Internal AA battery + 4x AA External battery pack (50hrs continuous use)<br />Issued to members of Special Operations Command - Australia";
    picture = "\z\socomd\addons\data\nvgoverlay\UI\gear_nvg_CA.paa";
    colorPreset[] = {
        0.0, 
        {0.0, 0.0, 0.0, 0.0}, 
        {0.5, 0.1, 1.5, 0.9}, 
        {1, 1, 6, 0.0}
    };
    ace_nightvision_generation = 3;
};
class SOCOMD_NVG_GR : SOCOMD_NVG    {
    displayName = "L-3 AN/PVS-31a BNVD (Green Phosphor) (A)";
    descriptionShort = "L-3/Harris AN/PVS-31a Binocular Night Vision Device 2376+ FOM<br />High Performance Unfilmed Green Phosphor tube<br />Autogating/Adjustable Gain<br />1x Internal AA battery + 4x AA External battery pack (50hrs continuous use)<br />Issued to members of Special Operations Command - Australia";
    picture = "\z\socomd\addons\data\nvgoverlay\UI\gear_nvg_CA.paa";
    //colorPreset[] = {0,{0,0,0,0},{1.3,1.2,0,0.9}, {6,1,1,0}}; //Green
    colorPreset[] = {
        0.01,
        {0,0,0,0.2},
        {0.9,0.5,0.23,1},
        {-6,-1,-1,0}
    };
    ace_nightvision_generation = 3;
};
class SOCOMD_NVG_AM : SOCOMD_NVG    {
    displayName = "L-3 AN/PVS-31a BNVD (Amber Filter) (A)";
    descriptionShort = "L-3/Harris AN/PVS-31a Binocular Night Vision Device 2376+ FOM<br />High Performance Unfilmed Green Phosphor tube and attached Wilcox Amber Filter<br />Autogating/Adjustable Gain<br />1x Internal AA battery + 4x AA External battery pack (50hrs continuous use)<br />Issued to members of Special Operations Command - Australia";
    picture = "\z\socomd\addons\data\nvgoverlay\UI\gear_nvg_CA.paa";
    colorPreset[] = {
        0.01, 
        {0.0, 0.0, 0.0, 0.0}, 
        {2, 0.9, 0.2, 0.9}, 
        {2, 2, 9, 0.0}
    };
    ace_nightvision_generation = 3;
};

class USP_L3_pvs31_B;
class SOCOMD_NVG_B : USP_L3_pvs31_B    {
    ace_nightvision_border = "\z\socomd\addons\data\nvgoverlay\nvg_mask_binos_4096_125.paa";
    displayName = "L-3 AN/PVS-31a BNVD (White Phosphor) (B)";
    descriptionShort = "L-3/Harris AN/PVS-31a Binocular Night Vision Device 2376+ FOM<br />High Performance Unfilmed White Phosphor tube<br />Autogating/Adjustable Gain<br />1x Internal AA battery + 4x AA External battery pack (50hrs continuous use)<br />Issued to members of Special Operations Command - Australia";
    picture = "\z\socomd\addons\data\nvgoverlay\UI\gear_nvg_CA.paa";
    colorPreset[] = {
        0.0, 
        {0.0, 0.0, 0.0, 0.0}, 
        {0.5, 0.1, 1.5, 0.9}, 
        {1, 1, 6, 0.0}
    };
    ace_nightvision_generation = 3;
};
class SOCOMD_NVG_GR_B : SOCOMD_NVG_B    {
    displayName = "L-3 AN/PVS-31a BNVD (Green Phosphor) (B)";
    descriptionShort = "L-3/Harris AN/PVS-31a Binocular Night Vision Device 2376+ FOM<br />High Performance Unfilmed Green Phosphor tube<br />Autogating/Adjustable Gain<br />1x Internal AA battery + 4x AA External battery pack (50hrs continuous use)<br />Issued to members of Special Operations Command - Australia";
    picture = "\z\socomd\addons\data\nvgoverlay\UI\gear_nvg_CA.paa";
    //colorPreset[] = {0,{0,0,0,0},{1.3,1.2,0,0.9}, {6,1,1,0}}; //Green
    colorPreset[] = {
        0.01,
        {0,0,0,0.2},
        {0.9,0.5,0.23,1},
        {-6,-1,-1,0}
    };
    ace_nightvision_generation = 3;
};
class SOCOMD_NVG_AM_B : SOCOMD_NVG_B    {
    displayName = "L-3 AN/PVS-31a BNVD (Amber Filter) (B)";
    descriptionShort = "L-3/Harris AN/PVS-31a Binocular Night Vision Device 2376+ FOM<br />High Performance Unfilmed Green Phosphor tube and attached Wilcox Amber Filter<br />Autogating/Adjustable Gain<br />1x Internal AA battery + 4x AA External battery pack (50hrs continuous use)<br />Issued to members of Special Operations Command - Australia";
    picture = "\z\socomd\addons\data\nvgoverlay\UI\gear_nvg_CA.paa";
    colorPreset[] = {
        0.01, 
        {0.0, 0.0, 0.0, 0.0}, 
        {2, 0.9, 0.2, 0.9}, 
        {2, 2, 9, 0.0}
    };
    ace_nightvision_generation = 3;
};
class USP_L3_pvs31_C;
class SOCOMD_NVG_C : USP_L3_pvs31_C    {
    ace_nightvision_border = "\z\socomd\addons\data\nvgoverlay\nvg_mask_binos_4096_125.paa";
    displayName = "L-3 AN/PVS-31a BNVD (White Phosphor) (C)";
    descriptionShort = "L-3/Harris AN/PVS-31a Binocular Night Vision Device 2376+ FOM<br />High Performance Unfilmed White Phosphor tube<br />Autogating/Adjustable Gain<br />1x Internal AA battery + 4x AA External battery pack (50hrs continuous use)<br />Issued to members of Special Operations Command - Australia";
    picture = "\z\socomd\addons\data\nvgoverlay\UI\gear_nvg_CA.paa";
    colorPreset[] = {
        0.0, 
        {0.0, 0.0, 0.0, 0.0}, 
        {0.5, 0.1, 1.5, 0.9}, 
        {1, 1, 6, 0.0}
    };
    ace_nightvision_generation = 3;
};
class SOCOMD_NVG_GR_C : SOCOMD_NVG_C    {
    displayName = "L-3 AN/PVS-31a BNVD (Green Phosphor) (C)";
    descriptionShort = "L-3/Harris AN/PVS-31a Binocular Night Vision Device 2376+ FOM<br />High Performance Unfilmed Green Phosphor tube<br />Autogating/Adjustable Gain<br />1x Internal AA battery + 4x AA External battery pack (50hrs continuous use)<br />Issued to members of Special Operations Command - Australia";
    //colorPreset[] = {0,{0,0,0,0},{1.3,1.2,0,0.9}, {6,1,1,0}}; //Green
    picture = "\z\socomd\addons\data\nvgoverlay\UI\gear_nvg_CA.paa";
    colorPreset[] = {
        0.01,
        {0,0,0,0.2},
        {0.9,0.5,0.23,1},
        {-6,-1,-1,0}
    };
    ace_nightvision_generation = 3;
};
class SOCOMD_NVG_AM_C : SOCOMD_NVG_C    {
    displayName = "L-3 AN/PVS-31a BNVD (Amber Filter) (C)";
    descriptionShort = "L-3/Harris AN/PVS-31a Binocular Night Vision Device 2376+ FOM<br />High Performance Unfilmed Green Phosphor tube and attached Wilcox Amber Filter<br />Autogating/Adjustable Gain<br />1x Internal AA battery + 4x AA External battery pack (50hrs continuous use)<br />Issued to members of Special Operations Command - Australia";
    picture = "\z\socomd\addons\data\nvgoverlay\UI\gear_nvg_CA.paa";
    colorPreset[] = {
        0.01, 
        {0.0, 0.0, 0.0, 0.0}, 
        {2, 0.9, 0.2, 0.9}, 
        {2, 2, 9, 0.0}
    };
    ace_nightvision_generation = 3;
};



class CUP_NVG_GPNVG_black;
class SOCOMD_NVG_GPNVG_WP_black: CUP_NVG_GPNVG_black {
    displayName = "L-3/Harris GPNVG (White Phosphor)";
    descriptionShort = "L-3/Harris Ground Panoramic Night Vision Goggle<br />White Phosphor tube<br />Issued to members of Special Operations Command - Australia";
    colorPreset[] = {
        0.0, 
        {0.0, 0.0, 0.0, 0.0}, 
        {0.5, 0.1, 1.5, 0.9}, 
        {1, 1, 6, 0.0}
    };
    ace_nightvision_generation = 2;
    ace_nightvision_border = "\z\socomd\addons\data\nvgoverlay\nvg_mask_quad_4096_125.paa";
};

class SOCOMD_NVG_GPNVG_GR_black: CUP_NVG_GPNVG_black {
    displayName = "L-3/Harris GPNVG (Green Phosphor)";
    descriptionShort = "L-3/Harris Ground Panoramic Night Vision Goggle<br />Green Phosphor tube<br />Issued to members of Special Operations Command - Australia";
    colorPreset[] = {
        0.01,
        {0,0,0,0.2},
        {0.9,0.5,0.23,1},
        {-6,-1,-1,0}
    };
    ace_nightvision_generation = 2;
    ace_nightvision_border = "\z\socomd\addons\data\nvgoverlay\nvg_mask_quad_4096_125.paa";
};

