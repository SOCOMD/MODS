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

			class SOCOMD_Groups
			{
				name = "SOCOMD Groups";
				aliveCategory = "Infantry";

				class SOCOMD_Plt
				{
					name = "SOCOMD Plt Squad";
					faction = "SOCOMD";
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0, "SOCOMD_PlatoonLeader", "LIEUTENANT")
					DEFINE_UNIT(1, "SOCOMD_PlatoonSergeant", "LIEUTENANT")
					DEFINE_UNIT(2, "SOCOMD_PlatoonSignaller", "CORPORAL")
					DEFINE_UNIT(3, "SOCOMD_PlatoonMedic", "CORPORAL")
				};

				class SOCOMD_Section
				{
					name = "SOCOMD Section";
					faction = "SOCOMD";
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0, "SOCOMD_SectionLeader", "SERGEANT")
					DEFINE_UNIT(1, "SOCOMD_2IC", "CORPORAL")
					DEFINE_UNIT(2, "SOCOMD_Light_Anti_Tank_Marksman", "PRIVATE")
					DEFINE_UNIT(3, "SOCOMD_Medic", "PRIVATE")
					DEFINE_UNIT(4, "SOCOMD_Gunner", "PRIVATE")
					DEFINE_UNIT(5, "SOCOMD_Sapper", "PRIVATE")
				};

				class SOCOMD_Sniper_Team
				{
					name = "SOCOMD Sniper Team";
					faction = "SOCOMD";
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0, "SOCOMD_Recon_TeamLeader", "SERGEANT")
					DEFINE_UNIT(1, "SOCOMD_Sniper_Spotter", "CORPORAL")
				};

				class SOCOMD_Weapons_Team
				{
					name = "SOCOMD Weapons Team";
					faction = "SOCOMD";
					side = 1;
					rarityGroup = 0.75;

					DEFINE_UNIT(0, "SOCOMD_Weapons_TeamLeader", "CORPORAL")
					DEFINE_UNIT(1, "SOCOMD_Weapons_Specialist", "PRIVATE")
					DEFINE_UNIT(2, "SOCOMD_Weapons_Assistant", "PRIVATE")
				};
			};
		};
	};
};