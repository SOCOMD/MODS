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
				name = "Infantry";
				aliveCategory = "Infantry";

				class SOCOMD_CMD_Group2 {
					faction = FACTION_STR;
					side = WEST;
					name = "2 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_Rifleman", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_Rifleman", "CORPORAL")
				};

				class SOCOMD_CMD_Group4 {
					faction = FACTION_STR;
					side = WEST;
					name = "4 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_Rifleman", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_Rifleman", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_Rifleman", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_Rifleman", "PRIVATE")
				};

				class SOCOMD_CMD_Group6 {
					faction = FACTION_STR;
					side = WEST;
					name = "6 Man Group";
					rarityGroup = 0.75;

					DEFINE_UNIT(0,0,0,"SOCOMD_Rifleman", "SERGEANT")
					DEFINE_UNIT(1,0,1,"SOCOMD_Rifleman", "CORPORAL")
					DEFINE_UNIT(2,0,2,"SOCOMD_Rifleman", "PRIVATE")
					DEFINE_UNIT(3,0,3,"SOCOMD_Rifleman", "PRIVATE")
					DEFINE_UNIT(4,1,0,"SOCOMD_Rifleman", "PRIVATE")
					DEFINE_UNIT(5,1,1,"SOCOMD_Rifleman", "PRIVATE")
				};
			};
		};
	};
};