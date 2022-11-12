#define MCB_UNIFORMS \
    "USP_G3C_KP_MCB_AFP"

#define AFP_HELMS \
    "ADFU_H_OpsCore_08_BLK",\
    "ADFU_H_OpsCore_02_BLK"

    // "AGE_Fast_Black",\
    // "AGE_Fast_Black_A_L",\
    // "AGE_Fast_Black_H",\
    // "AGE_Fast_Black_H_A_L",\

class SOCOMD_AFP_Leader {
    class uniforms{
        arid_uniforms[]={
            MCB_UNIFORMS
        };
        temperate_uniforms[]={
            MCB_UNIFORMS
        };
        snow_uniforms[]={
            MCB_UNIFORMS
        };
    };
    helmets[] = {
        HELMETS,
        AFP_HELMS,
        NVG_OPTIONS
    };
    weapons[]={
        GENERAL_RIFLE,
        GL_RIFLE,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        TWO_COMMS_RIGS,
        VESTS_COMMS,
        VESTS_WEAPONS,
        VESTS_COMMANDER
    };
    bags[]={
        BAGS,
        BAGS_BLK,
        BACKPACK_COMMS,
        BACKPACK_COMMS_BLK
    };
    grenades[]={
        GRENADES_LEADER
    };
};

class SOCOMD_AFP_Rifleman{
    class uniforms{
        arid_uniforms[]={
            MCB_UNIFORMS
        };
        temperate_uniforms[]={
            MCB_UNIFORMS
        };
        snow_uniforms[]={
            MCB_UNIFORMS
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        GL_RIFLE,
        HANDGUNS
    };
    helmets[] = {
        HELMETS,
        AFP_HELMS,
        NVG_OPTIONS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_TL,
        VESTS_WEAPONS
        };
    bags[]={
        BAGS,
        BAGS_BLK
    };
    grenades[]={
        GRENADES_NORMAL
    };
    arsenalExtras[] ={
        RIFLEMAN_EXTRAS
    };
};

class SOCOMD_AFP_Breacher{
    class uniforms{
        arid_uniforms[]={
            UNIFORMS
        };
        temperate_uniforms[]={
            MCB_UNIFORMS
        };
        snow_uniforms[]={
            MCB_UNIFORMS
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        GL_RIFLE,
        HANDGUNS
    };
    helmets[] = {
        HELMETS,
        AFP_HELMS,
        NVG_OPTIONS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_TL,
        VESTS_WEAPONS
        };
    bags[]={
        BAGS,
        BAGS_BLK,
        BACKPACK_SAPPER,
        BACKPACK_SAPPER_BLK
    };
    grenades[]={
        GRENADES_BREACHER
    };
};
class SOCOMD_AFP_Marksman{
    class uniforms{
        arid_uniforms[]={
            UNIFORMS
        };
        temperate_uniforms[]={
            MCB_UNIFORMS
        };
        snow_uniforms[]={
            MCB_UNIFORMS
        };
    };
    weapons[]={
        MARKSMAN,
        HANDGUNS
    };
    helmets[] = {
        HELMETS,
        AFP_HELMS,
        NVG_OPTIONS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_TL
        };
    bags[]={
        BAGS,
        BAGS_BLK
    };
    grenades[]={
        GRENADES_NORMAL
    };
};
class SOCOMD_AFP_Medic{
    class uniforms{
        arid_uniforms[]={
            UNIFORMS
        };
        temperate_uniforms[]={
            MCB_UNIFORMS
        };
        snow_uniforms[]={
            MCB_UNIFORMS
        };
    };
    helmets[] = {
        HELMETS,
        AFP_HELMS,
        NVG_OPTIONS
    };
    weapons[]={
        GENERAL_RIFLE,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_MED
        };
    bags[]={
        BAGS,
        BAGS_BLK,
        BACKPACK_MEDIC,
        BACKPACK_MEDIC_BLK
    };
    grenades[]={
        GRENADES_NORMAL
    };
};
