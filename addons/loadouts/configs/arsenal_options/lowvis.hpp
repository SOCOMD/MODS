// all options goes into a macro to be added into a class
// class must have the same name as the loudout cfg
// isLogi is used for pilots and crewmen who don't need grenade options. eg: isLogi = 1;
// extraUniforms used for classes that need specialist uniforms like recon. Uniforms all defined in own class. eg: extraUniforms = "LOWVIS_UNIFORMS";
// arsenalExtras used for those who need extra arsenal equipment like rifleman. options defined in role class eg arsenalExtras[] = {"myExtra","myExtra2"};

#define LOWVIS_UNIFORMS \
    "CUP_I_B_PMC_Unit_20",\
    "CUP_I_B_PMC_Unit_21",\
    "CUP_I_B_PMC_Unit_19",\
    "CUP_I_B_PMC_Unit_17",\
    "CUP_I_B_PMC_Unit_17",\
    "CUP_I_B_PMC_Unit_14",\
    "CUP_I_B_PMC_Unit_15",\
    "CUP_I_B_PMC_Unit_3",\
    "CUP_I_B_PMC_Unit_2",\
    "CUP_I_B_PMC_Unit_1",\
    "CUP_I_B_PMC_Unit_4",\
    "CUP_I_B_PMC_Unit_7",\
    "CUP_I_B_PMC_Unit_6",\
    "CUP_I_B_PMC_Unit_5",\
    "CUP_I_B_PMC_Unit_8",\
    "CUP_I_B_PMC_Unit_11",\
    "CUP_I_B_PMC_Unit_10",\
    "CUP_I_B_PMC_Unit_9",\
    "CUP_I_B_PMC_Unit_12",\
    "CUP_I_B_PMC_Unit_42",\
    "CUP_I_B_PMC_Unit_41",\
    "CUP_I_B_PMC_Unit_43",\
    "CUP_I_B_PMC_Unit_40",\
    "CUP_I_B_PMC_Unit_39",\
    "CUP_I_B_PMC_Unit_36",\
    "CUP_I_B_PMC_Unit_38",\
    "CUP_I_B_PMC_Unit_37",\
    "CUP_I_B_PMC_Unit_24",\
    "CUP_I_B_PMC_Unit_23",\
    "CUP_I_B_PMC_Unit_31",\
    "CUP_I_B_PMC_Unit_32",\
    "CFP_GUER_TanTee",\
    "CFP_GUER_GreenTan",\
    "CFP_FieldUniform_tanblack_SS",\
    "U_C_Man_casual_5_F",\
    "U_C_Man_casual_4_F",\
    "U_C_Man_casual_6_F",\
    "U_C_Poor_1",\
    "U_BG_Guerilla2_3",\
    "U_BG_Guerilla2_1",\
    "U_BG_Guerilla2_2",\
    "U_C_Poloshirt_tricolour",\
    "CUP_O_TKI_Khet_Jeans_04",\
    "CUP_O_TKI_Khet_Jeans_01",\
    "CUP_O_TKI_Khet_Jeans_02",\
    "CUP_O_TKI_Khet_Jeans_03",\
    "CPC_Afrique_Clothes_Pirate_1",\
    "CPC_Afrique_Clothes_Pirate_2",\
    "CPC_Afrique_Clothes_Pirate_3"


    class SOCOMD_LOWVIS_Commander{
        class uniforms{
            arid_uniforms[]={
                LOWVIS_UNIFORMS
            };
            temperate_uniforms[]={
                LOWVIS_UNIFORMS
            };
        };
        weapons[]={
            GENERAL_RIFLE,
            GL_RIFLE,
            HANDGUNS
        };
        vests[]={
            TWO_COMMS_RIGS,
            VESTS_COMMS,
            VESTS_WEAPONS        
        };
        bags[]={
            BAGS,
            BACKPACK_COMMS
        };
        grenades[]={
            GREMADES_LEADER
        };
    };
    class SOCOMD_LOWVIS_2IC : SOCOMD_LOWVIS_Commander{};
    class SOCOMD_LOWVIS_Leader : SOCOMD_LOWVIS_Commander{};

    class SOCOMD_LOWVIS_Rifleman{
        class uniforms{
            arid_uniforms[]={
                LOWVIS_UNIFORMS
            };
            temperate_uniforms[]={
                LOWVIS_UNIFORMS
            };
        };
        weapons[]={
            GENERAL_RIFLE,
            GL_RIFLE,
            HANDGUNS
        };
        vests[]={
            ONE_COMM_RIGS,
            VESTS_TL,
            VESTS_WEAPONS        
        };
        bags[]={
            BAGS
        };
        grenades[]={
            GREMADES_NORMAL
        };    
        arsenalExtras[] ={
            RIFLEMAN_EXTRAS
        };
    };

    class SOCOMD_LOWVIS_Breacher{
        class uniforms{
            arid_uniforms[]={
                LOWVIS_UNIFORMS
            };
            temperate_uniforms[]={
                LOWVIS_UNIFORMS
            };
        };
        weapons[]={
            GENERAL_RIFLE,
            GL_RIFLE,
            HANDGUNS
        };
        vests[]={
            ONE_COMM_RIGS,
            VESTS_TL,
            VESTS_WEAPONS        
        };
        bags[]={
            BAGS,
            BACKPACK_SAPPER
        };
        grenades[]={
            GREMADES_BREACHER
        };    
    };

    class SOCOMD_LOWVIS_AT_Assistant{
        class uniforms{
            arid_uniforms[]={
                LOWVIS_UNIFORMS
            };
            temperate_uniforms[]={
                LOWVIS_UNIFORMS
            };
        };
        weapons[]={
            GENERAL_RIFLE,
            HANDGUNS
        };
        vests[]={
            ONE_COMM_RIGS,
            VESTS_TL        
        };
        bags[]={
            BAGS
        };
        grenades[]={
            GREMADES_NORMAL
        };                
    };
    class SOCOMD_LOWVIS_Marksman{
        class uniforms{
            arid_uniforms[]={
                LOWVIS_UNIFORMS
            };
            temperate_uniforms[]={
                LOWVIS_UNIFORMS
            };
        };
        weapons[]={
            MARKSMAN,
            HANDGUNS
        };
        vests[]={
            ONE_COMM_RIGS,
            VESTS_TL        
        };
        bags[]={
            BAGS
        };
        grenades[]={
            GREMADES_NORMAL
        };            
    };
    class SOCOMD_LOWVIS_Sapper{
        class uniforms{
            arid_uniforms[]={
                LOWVIS_UNIFORMS
            };
            temperate_uniforms[]={
                LOWVIS_UNIFORMS
            };
        };
        weapons[]={
            GENERAL_RIFLE,
            HANDGUNS
        };
        vests[]={
            ONE_COMM_RIGS,
            VESTS_TL        
        };
        bags[]={
            BAGS,
            BACKPACK_SAPPER
        };
        grenades[]={
            GREMADES_SAPPER
        };    
    };
    class SOCOMD_LOWVIS_MachineGunner{
        class uniforms{
            arid_uniforms[]={
                LOWVIS_UNIFORMS
            };
            temperate_uniforms[]={
                LOWVIS_UNIFORMS
            };
        };
        weapons[]={
            MACHINE_GUN,
            HANDGUNS
        };
        vests[]={
            ONE_COMM_RIGS,
            VESTS_COMMS        
        };
        bags[]={
            BAGS
        };
        grenades[]={
            GREMADES_NORMAL
        };    
    };
    class SOCOMD_LOWVIS_Medic{
        class uniforms{
            arid_uniforms[]={
                LOWVIS_UNIFORMS
            };
            temperate_uniforms[]={
                LOWVIS_UNIFORMS
            };
        };
        weapons[]={
            GENERAL_RIFLE,
            HANDGUNS
        };
        vests[]={
            ONE_COMM_RIGS,
            VESTS_MED        
        };
        bags[]={
            BAGS,
            BACKPACK_MEDIC
        };
        grenades[]={
            GREMADES_NORMAL
        };    
    };
    class SOCOMD_LOWVIS_AT{
        class uniforms{
            arid_uniforms[]={
                LOWVIS_UNIFORMS
            };
            temperate_uniforms[]={
                LOWVIS_UNIFORMS
            };
        };
        weapons[]={
            GENERAL_RIFLE,
            HANDGUNS,
            LAUNCHERS
        };
        vests[]={
            ONE_COMM_RIGS,
            VESTS_TL        
        };
        bags[]={
            BAGS
        };
        grenades[]={
            GREMADES_NORMAL
        };    
    };
    class SOCOMD_LOWVIS_Pilot{
        class uniforms{
            arid_uniforms[]={
                LOWVIS_UNIFORMS
            };
            temperate_uniforms[]={
                LOWVIS_UNIFORMS
            };
        };
        weapons[]={
            HANDGUNS,
            SOLS_RIFLES
        };
        vests[]={
            TWO_COMMS_RIGS,
            VESTS_COMMS
        };
        bags[]={
            BAGS,
            BACKPACK_COMMS,
            SOLS_HELMS
        };
        helmets[] = {
            SOLS_HELMS,
            NVG_OPTIONS
        };
        isLogi = 1;
        grenades[]={
        };    
    };
    class SOCOMD_LOWVIS_Crewman{
        class uniforms{
            arid_uniforms[]={
                LOWVIS_UNIFORMS
            };
            temperate_uniforms[]={
                LOWVIS_UNIFORMS
            };
        };
        weapons[]={
            HANDGUNS,
            SOLS_RIFLES
        };
        vests[]={
            TWO_COMMS_RIGS,
            VESTS_COMMS        
        };
        bags[]={
            BAGS,
            BACKPACK_COMMS
        };
        helmets[] = {
            SOLS_HELMS,
            NVG_OPTIONS
        };
        grenades[]={
        };    
        isLogi = 1;
    };
    class SOCOMD_LOWVIS_AO{
        class uniforms{
            arid_uniforms[]={
                LOWVIS_UNIFORMS
            };
            temperate_uniforms[]={
                LOWVIS_UNIFORMS
            };
        };
        weapons[]={
            GENERAL_RIFLE,
            HANDGUNS
        };
        vests[]={
            ONE_COMM_RIGS,
            VESTS_MED        
        };
        bags[]={
            BAGS,
            BACKPACK_MEDIC
        };
        isLogi = 1;
        grenades[]={
        };    
    };
    class SOCOMD_LOWVIS_Logistician{
        class uniforms{
            arid_uniforms[]={
                LOWVIS_UNIFORMS
            };
            temperate_uniforms[]={
                LOWVIS_UNIFORMS
            };
        };
        weapons[]={
            GENERAL_RIFLE,
            HANDGUNS
        };
        vests[]={
            ONE_COMM_RIGS,
            VESTS_TL        
        };
        bags[]={
            BAGS
        };
        grenades[]={
            GREMADES_NORMAL
        };    
    };
    class SOCOMD_LOWVIS_Recon{
        class uniforms{
            arid_uniforms[]={
                LOWVIS_UNIFORMS
            };
            temperate_uniforms[]={
                LOWVIS_UNIFORMS
            };
        };
        weapons[]={
            SNIPER,
            HANDGUNS
        };
        vests[]={
            TWO_COMMS_RIGS,
            VESTS_COMMS        
        };
        bags[]={
            BAGS,
            BACKPACK_COMMS
        };
        grenades[]={
            GREMADES_NORMAL
        };    
    };
    class SOCOMD_LOWVIS_Recon_Assistant{
        class uniforms{
            arid_uniforms[]={
                LOWVIS_UNIFORMS
            };
            temperate_uniforms[]={
                LOWVIS_UNIFORMS
            };
        };
        weapons[]={
            GENERAL_RIFLE,
            MARKSMAN,
            HANDGUNS
        };
        vests[]={
            TWO_COMMS_RIGS,
            VESTS_COMMS        
        };
        bags[]={
            BAGS,
            BACKPACK_COMMS
        };
        grenades[]={
            GREMADES_NORMAL
        };    
    };