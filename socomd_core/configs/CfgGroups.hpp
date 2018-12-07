#define DEFINE_UNIT(unitId,idxX,idxY,type,rating) \
class Unit##unitId { \
	side = 1; \
	vehicle = type; \
	rank = rating; \
	position[] = {(idxX * 1), -(idxY * 1) ,0}; \
};

class CfgGroups {
	class West {
		class SOCOMD {
			name = "SOCOMD";

			class SOCOMD_CMD_Groups {
				name = "Commando Groups";
				aliveCategory = "Infantry";

				class SOCOMD_CMD_Plt {
					name = "Commando Plt Squad";
					faction = FACTION_STR;
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_PlatoonLeader", "LIEUTENANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_PlatoonSergeant", "LIEUTENANT")
					DEFINE_UNIT(2,0,2,"SOCOMD_PlatoonSignaller", "CORPORAL")
					DEFINE_UNIT(3,0,3,"SOCOMD_PlatoonMedic", "CORPORAL")
				};

				class SOCOMD_CMD_Section {
					name = "Commando Section";
					faction = FACTION_STR;
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SectionLeader", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_2IC", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_Sapper", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_Gunner", "PRIVATE")
					DEFINE_UNIT(4,1,0,"SOCOMD_Rifleman", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_Marksman", "PRIVATE")
					DEFINE_UNIT(6,1,2,"SOCOMD_AT", "PRIVATE")
					DEFINE_UNIT(7,1,3,"SOCOMD_Medic", "PRIVATE")
				};

				class SOCOMD_CMD_Sniper_Team {
					name = "Commando Sniper Team";
					faction = FACTION_STR;
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_Recon_TeamLeader", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_Sniper_Spotter", "CORPORAL")
				};

				class SOCOMD_CMD_Weapons_Team {
					name = "Commando Weapons Team";
					faction = FACTION_STR;
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_Weapons_TeamLeader", "CORPORAL")
					DEFINE_UNIT(1,0,1,"SOCOMD_Weapons_Specialist", "PRIVATE")
					DEFINE_UNIT(2,0,2,"SOCOMD_Weapons_Assistant", "PRIVATE")
				};

				class SOCOMD_171_Pilots {
					name = "171 Aviation Pilots";
					faction = FACTION_STR;
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_Pilot", "CORPORAL")
					DEFINE_UNIT(1,0,1,"SOCOMD_Pilot", "CORPORAL")
				};

				class SOCOMD_CMD_Homesteads {
					name = "Homesteads";
					faction = FACTION_STR;
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_Homestead", "PRIVATE")
					DEFINE_UNIT(1,0,1,"SOCOMD_Homestead", "PRIVATE")
					DEFINE_UNIT(2,0,2,"SOCOMD_Homestead", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_Homestead", "PRIVATE")
				};
			};

			class SOCOMD_SASR_Groups {
				name = "SASR Groups";
				aliveCategory = "Infantry";

				class SOCOMD_SASR_TROOP_HQ {
					name = "SASR Troop HQ";
					faction = FACTION_STR;
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SASR_Trooper", "CORPORAL")
					DEFINE_UNIT(1,0,1,"SOCOMD_SASR_Trooper", "PRIVATE")
					DEFINE_UNIT(2,0,2,"SOCOMD_SASR_Trooper", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_SASR_Trooper", "PRIVATE")
				};

				class SOCOMD_SASR_TROOP_PATROL {
					name = "SASR Troop Patrol";
					faction = FACTION_STR;
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_SASR_Trooper", "CORPORAL")
					DEFINE_UNIT(1,0,1,"SOCOMD_SASR_Trooper", "PRIVATE")
					DEFINE_UNIT(2,0,2,"SOCOMD_SASR_Trooper", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_SASR_Trooper", "PRIVATE")
					DEFINE_UNIT(4,0,4,"SOCOMD_SASR_Trooper", "PRIVATE")
					DEFINE_UNIT(5,0,5,"SOCOMD_SASR_Trooper", "PRIVATE")
				};
			};
		};
	};
};