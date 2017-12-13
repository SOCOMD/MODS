#define DEFINE_UNIT(idx,type,rating) \
class Unit##idx \
{ \
	side = 1; \
	vehicle = type; \
	rank = rating; \
	position[] = {0, -(idx * 2) ,0}; \
};

class CfgGroups
{
	class West
	{
		class SOCOMD
		{
			name = "SOCOMD";

			class SOCOMD_CMD_Groups
			{
				name = "Commando Groups";
				aliveCategory = "Infantry";

				class SOCOMD_CMD_Plt
				{
					name = "Commando Plt Squad";
					faction = "SOCOMD_CMD";
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0, "SOCOMD_PlatoonLeader", "LIEUTENANT")
					DEFINE_UNIT(1, "SOCOMD_PlatoonSergeant", "LIEUTENANT")
					DEFINE_UNIT(2, "SOCOMD_PlatoonSignaller", "CORPORAL")
					DEFINE_UNIT(3, "SOCOMD_PlatoonMedic", "CORPORAL")
				};

				class SOCOMD_CMD_Section
				{
					name = "Commando Section";
					faction = "SOCOMD_CMD";
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0, "SOCOMD_SectionLeader", "SERGEANT")
					DEFINE_UNIT(1, "SOCOMD_2IC", "CORPORAL")
					DEFINE_UNIT(2, "SOCOMD_Sapper", "PRIVATE")
					DEFINE_UNIT(3, "SOCOMD_Gunner", "PRIVATE")
					DEFINE_UNIT(4, "SOCOMD_Rifleman", "PRIVATE")
					DEFINE_UNIT(5, "SOCOMD_Marksman", "PRIVATE")
					DEFINE_UNIT(6, "SOCOMD_AT", "PRIVATE")
					DEFINE_UNIT(7, "SOCOMD_Medic", "PRIVATE")
				};

				class SOCOMD_CMD_Sniper_Team
				{
					name = "Commando Sniper Team";
					faction = "SOCOMD_CMD";
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0, "SOCOMD_Recon_TeamLeader", "SERGEANT")
					DEFINE_UNIT(1, "SOCOMD_Sniper_Spotter", "CORPORAL")
				};

				class SOCOMD_CMD_Weapons_Team
				{
					name = "Commando Weapons Team";
					faction = "SOCOMD_CMD";
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0, "SOCOMD_Weapons_TeamLeader", "CORPORAL")
					DEFINE_UNIT(1, "SOCOMD_Weapons_Specialist", "PRIVATE")
					DEFINE_UNIT(2, "SOCOMD_Weapons_Assistant", "PRIVATE")
				};
			};

			class SOCOMD_SASR_Groups
			{
				name = "SASR Groups";
				aliveCategory = "Infantry";

				class SOCOMD_SASR_TROOP_HQ
				{
					name = "SASR Troop HQ";
					faction = "SOCOMD_SASR";
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0, "SOCOMD_SASR_Trooper", "CORPORAL")
					DEFINE_UNIT(1, "SOCOMD_SASR_Trooper", "PRIVATE")
					DEFINE_UNIT(2, "SOCOMD_SASR_Trooper", "PRIVATE")
					DEFINE_UNIT(3, "SOCOMD_SASR_Trooper", "PRIVATE")
				};

				class SOCOMD_SASR_TROOP_PATROL
				{
					name = "SASR Troop Patrol";
					faction = "SOCOMD_SASR";
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0, "SOCOMD_SASR_Trooper", "CORPORAL")
					DEFINE_UNIT(1, "SOCOMD_SASR_Trooper", "PRIVATE")
					DEFINE_UNIT(2, "SOCOMD_SASR_Trooper", "PRIVATE")
					DEFINE_UNIT(3, "SOCOMD_SASR_Trooper", "PRIVATE")
					DEFINE_UNIT(4, "SOCOMD_SASR_Trooper", "PRIVATE")
					DEFINE_UNIT(5, "SOCOMD_SASR_Trooper", "PRIVATE")
				};
			};
		};
	};
};