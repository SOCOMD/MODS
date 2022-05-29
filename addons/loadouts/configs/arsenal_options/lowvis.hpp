// all options goes into a macro to be added into a class
// class must have the same name as the loudout cfg
// isLogi is used for pilots and crewmen who don't need grenade options. eg: isLogi = 1;
// extraUniforms used for classes that need specialist uniforms like recon. Uniforms all defined in own class. eg: extraUniforms = "LOWVIS_UNIFORMS";
// arsenalExtras used for those who need extra arsenal equipment like rifleman. options defined in role class eg arsenalExtras[] = {"myExtra","myExtra2"};

#define LOWVIS_UNIFORMS \
    "Project_BJC_PCU_Cargo25",\
    "Project_BJC_PCU_Cargo21",\
    "Project_BJC_PCU_Cargo24",\
    "Project_BJC_PCU_Cargo28",\
    "Project_BJC_PCU_Cargo10",\
    "Project_BJC_PCU_Cargo18",\
    "Project_BJC_PCU_Cargo26",\
    "Project_BJC_PCU_Cargo12",\
    "Project_BJC_PCU_Cargo4",\
    "Project_BJC_PCU_Cargo3",\
    "Project_BJC_PCU_Cargo15",\
    "Project_BJC_PCU_Cargo27",\
    "Project_BJC_PCU_Cargo13",\
    "Project_BJC_PCU_Cargo5",\
    "Project_BJC_Shirt_Cargo18",\
    "Project_BJC_Shirt_Cargo2",\
    "Project_BJC_Shirt_Cargo10",\
    "Project_BJC_Shirt_Cargo4",\
    "Project_BJC_Shirt_Cargo12",\
    "Project_BJC_Shirt_Cargo11",\
    "Project_BJC_Shirt_Cargo1",\
    "Project_BJC_Shirt_Cargo9",\
    "Project_BJC_Shirt_Cut_Cargo16",\
    "Project_BJC_Shirt_Cut_Cargo18",\
    "Project_BJC_Shirt_Cut_Cargo2",\
    "Project_BJC_Shirt_Cut_Cargo14",\
    "Project_BJC_Shirt_Cut_Cargo4",\
    "Project_BJC_Shirt_Cut_Cargo12",\
    "Project_BJC_Shirt_Cut_Cargo7",\
    "Project_BJC_Shirt_Cut_Cargo1",\
    "Project_BJC_Shirt_Cut_Cargo13",\
    "Project_BJC_Cargo16",\
    "Project_BJC_Cargo19",\
    "Project_BJC_Cargo6",\
    "Project_BJC_Cargo10",\
    "Project_BJC_Cargo4",\
    "Project_BJC_Cargo8",\
    "Project_BJC_Cargo7",\
    "Project_BJC_Cargo11",\
    "Project_BJC_Cargo5",\
    "Project_BJC_Cargo9",\
    "Project_BJC_PCU_Jean",\
    "Project_BJC_PCU_Jean3",\
    "Project_BJC_PCU_Jean1",\
    "Project_BJC_Shirt_Jean1",\
    "Project_BJC_Shirt_Jean3",\
    "Project_BJC_Shirt_Cut_Jean1",\
    "Project_BJC_Shirt_Cut_Jean3",\
    "Project_BJC_2",\
    "Project_BJC_1",\
    "Project_BJC_PCU_Jean_blk",\
    "Project_BJC_PCU_Jean_blk3",\
    "Project_BJC_PCU_Jean_blk1",\
    "Project_BJC_Shirt_Jean_blk1",\
    "Project_BJC_Shirt_Jean_blk3",\
    "Project_BJC_Shirt_Cut_Jean_blk1",\
    "Project_BJC_Shirt_Cut_Jean_blk3",\
    "Project_BJC_blk_2",\
    "Project_BJC_blk_1"

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
            VESTS_COMMON,
            TWO_COMMS_RIGS,
            VESTS_COMMS,
            VESTS_WEAPONS
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
   // class SOCOMD_LOWVIS_2IC : SOCOMD_LOWVIS_Commander{};
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
            VESTS_COMMON,
            ONE_COMM_RIGS,
            VESTS_TL
        };
        bags[]={
            BAGS,
            BAGS_BLK,
            BACKPACK_SAPPER,
            BACKPACK_SAPPER_BLK
        };
        grenades[]={
            GRENADES_SAPPER
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
            VESTS_COMMON,
            ONE_COMM_RIGS,
            VESTS_COMMS
        };
        bags[]={
            BAGS,
            BAGS_BLK
        };
        grenades[]={
            GRENADES_NORMAL
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
            VESTS_COMMON,
            TWO_COMMS_RIGS,
            VESTS_COMMS
        };
        bags[]={
            BAGS,
            BAGS_BLK,
            BACKPACK_COMMS,
            BACKPACK_COMMS_BLK,
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
            VESTS_COMMON,
            TWO_COMMS_RIGS,
            VESTS_COMMS
        };
        bags[]={
            BAGS,
            BAGS_BLK,
            BACKPACK_COMMS,
            BACKPACK_COMMS_BLK
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
            VESTS_COMMON,
            TWO_COMMS_RIGS,
            VESTS_COMMS
        };
        bags[]={
            BAGS,
            BAGS_BLK,
            BACKPACK_COMMS,
            BACKPACK_COMMS_BLK
        };
        grenades[]={
            GRENADES_NORMAL
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
            VESTS_COMMON,
            TWO_COMMS_RIGS,
            VESTS_COMMS
        };
        bags[]={
            BAGS,
            BAGS_BLK,
            BACKPACK_COMMS,
            BACKPACK_COMMS_BLK
        };
        grenades[]={
            GRENADES_NORMAL
        };
    };

