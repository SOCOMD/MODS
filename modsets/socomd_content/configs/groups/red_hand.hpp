class O_SEARebels {
	name = "Red Hand";

	class Infantry {
		name = "Infantry";

		class o_osearebels_infantry_combat_section {
			name = "Combat Section";
			side = 0;
			faction = "O_SEARebels";
			icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 0;
				vehicle = "O_SEARebels_Squad_Leader_01";
			};
			class Unit1 {
				position[] = {5,-5,0};
				rank = "CORPORAL";
				side = 0;
				vehicle = "O_SEARebels_Rifleman_01";
			};
			class Unit2 {
				position[] = {-5,-5,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Grenadier_01";
			};
			class Unit3 {
				position[] = {10,-10,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Machine_Gunner_01";
			};
			class Unit4 {
				position[] = {-10,-10,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Rifleman_AT_01";
			};
			class Unit5 {
				position[] = {15,-15,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Medic_01";
			};
			class Unit6 {
				position[] = {-15,-15,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Marksman_01";
			};
			class Unit7 {
				position[] = {20,-20,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Rifleman_01";
			};
		};

		class o_osearebels_infantry_fireteam {
			name = "Fireteam";
			side = 0;
			faction = "O_SEARebels";
			icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 0;
				vehicle = "O_SEARebels_Squad_Leader_01";
			};
			class Unit1 {
				position[] = {5,-5,0};
				rank = "CORPORAL";
				side = 0;
				vehicle = "O_SEARebels_Grenadier_01";
			};
			class Unit2 {
				position[] = {-5,-5,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Machine_Gunner_01";
			};
			class Unit3 {
				position[] = {10,-10,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Medic_01";
			};
		};

		class o_osearebels_infantry_weapons_team {
			name = "Weapons Team";
			side = 0;
			faction = "O_SEARebels";
			icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 0;
				vehicle = "O_SEARebels_Squad_Leader_01";
			};
			class Unit1 {
				position[] = {5,-5,0};
				rank = "CORPORAL";
				side = 0;
				vehicle = "O_SEARebels_Grenadier_01";
			};
			class Unit2 {
				position[] = {-5,-5,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Grenadier_01";
			};
			class Unit3 {
				position[] = {10,-10,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Machine_Gunner_01";
			};
			class Unit4 {
				position[] = {-10,-10,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Machine_Gunner_01";
			};
			class Unit5 {
				position[] = {15,-15,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Rifleman_AT_01";
			};
			class Unit6 {
				position[] = {-15,-15,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Rifleman_AA_01";
			};
			class Unit7 {
				position[] = {20,-20,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Medic_01";
			};
		};

	};

	class SpecOps {
		name = "SpecOps";

	};

	class Motorized {
		name = "Motorized";

		class o_osearebels_motorized_convoy {
			name = "Convoy";
			side = 0;
			faction = "O_SEARebels";
			icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 0;
				vehicle = "O_SEARebels_UAZ_DShKM_01";
			};
			class Unit1 {
				position[] = {6,-13,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Ural_Covered_01";
			};
			class Unit2 {
				position[] = {-6,-13,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Ural_Ammo_01";
			};
			class Unit3 {
				position[] = {12,-19,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Ural_Covered_01";
			};
			class Unit4 {
				position[] = {-12,-19,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_UAZ_DShKM_01";
			};
		};

		class o_osearebels_motorized_patrol {
			name = "Patrol";
			side = 0;
			faction = "O_SEARebels";
			icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 0;
				vehicle = "O_SEARebels_UAZ_DShKM_01";
			};
			class Unit1 {
				position[] = {5,-7,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_UAZ_01";
			};
		};

		class o_osearebels_motorized_ural_aa_section {
			name = "Ural AA Section";
			side = 0;
			faction = "O_SEARebels";
			icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 0;
				vehicle = "O_SEARebels_Ural_ZU_23_01";
			};
			class Unit1 {
				position[] = {6,-13,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Ural_ZU_23_01";
			};
			class Unit2 {
				position[] = {-6,-13,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Ural_ZU_23_01";
			};
		};

	};

	class Motorized_MTP {
		name = "Motorized Infantry (MTP)";

	};

	class Support {
		name = "Support";

		class o_osearebels_support_sniper_team {
			name = "Sniper Team";
			side = 0;
			faction = "O_SEARebels";
			icon = "\A3\ui_f\data\map\markers\nato\o_support.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 0;
				vehicle = "O_SEARebels_Sniper_01";
			};
			class Unit1 {
				position[] = {5,-5,0};
				rank = "CORPORAL";
				side = 0;
				vehicle = "O_OSEARebels_Spotter_01";
			};
		};

		class o_osearebels_support_field_medical_team {
			name = "Field Medical Team";
			side = 0;
			faction = "O_SEARebels";
			icon = "\A3\ui_f\data\map\markers\nato\o_support.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 0;
				vehicle = "O_SEARebels_Medic_01";
			};
			class Unit1 {
				position[] = {5,-5,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Medic_01";
			};
		};

		class o_osearebels_support_aa_team {
			name = "AA Team";
			side = 0;
			faction = "O_SEARebels";
			icon = "\A3\ui_f\data\map\markers\nato\o_support.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 0;
				vehicle = "O_SEARebels_Squad_Leader_01";
			};
			class Unit1 {
				position[] = {5,-5,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Rifleman_01";
			};
			class Unit2 {
				position[] = {-5,-5,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Rifleman_AA_01";
			};
			class Unit3 {
				position[] = {10,-10,0};
				rank = "PRIVATE";
				side = 0;
				vehicle = "O_SEARebels_Rifleman_AA_01";
			};
		};

	};

	class Mechanized {
		name = "Mechanized";

	};

	class Armored {
		name = "Armored";

	};

	class Artillery {
		name = "Artillery";

	};

	class Naval {
		name = "Naval";

		class o_osearebels_naval_assault_boat_team {
			name = "Assault Boat Team";
			side = 0;
			faction = "O_SEARebels";
			icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 0;
				vehicle = "O_SEARebels_Assault_Boat_01";
			};
			class Unit1 {
				position[] = {6,-7,0};
				rank = "CORPORAL";
				side = 0;
				vehicle = "O_SEARebels_Assault_Boat_01";
			};
		};

	};

	class Air {
		name = "Air";

	};


};
