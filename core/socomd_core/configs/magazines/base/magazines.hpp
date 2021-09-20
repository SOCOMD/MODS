//Vanilla
class 30Rnd_556x45_Stanag_Red;
class 30Rnd_556x45_Stanag_Tracer_Red;
class 200Rnd_556x45_Box_F;
class 30Rnd_65x39_caseless_black_mag;
class 30Rnd_65x39_caseless_black_mag_Tracer;
class 20Rnd_762x51_Mag;
class 150Rnd_762x54_Box_Tracer;
class 7Rnd_408_Mag;
class 11Rnd_45ACP_Mag;
class 30Rnd_9x21_Mag_SMG_02;
class 8Rnd_82mm_Mo_shells;
	class 8Rnd_82mm_Mo_Smoke_white;
	class 8Rnd_82mm_Mo_Flare_white;
	class twc_2inch_he_1rnd: 8Rnd_82mm_Mo_shells
	{
		displayname = "60mm 1Rnd HE";
		DLC = "twc_config";
		count = 1;
		ammo = "twc_2inch_he";
		scope = 2;
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		author = "[TWC] Rik & [TWC] lockoncap";
		displayNameShort = "HE";
		descriptionShort = "HE round for the 60mm Mortar";
		picture = "\twc_2inch\data\ui\m_he_ca.paa";
		mass = 21.1;
		type = 256;
		initSpeed = 80;
	};
	class twc_2inch_smoke_1rnd: 8Rnd_82mm_Mo_Smoke_white
	{
		displayname = "60mm 1Rnd Smoke";
		DLC = "twc_config";
		count = 1;
		ammo = "twc_2inch_smoke";
		scope = 2;
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		author = "[TWC] Rik & [TWC] lockoncap";
		displayNameShort = "Smoke";
		descriptionShort = "Smoke round for the 60mm Mortar";
		picture = "\twc_2inch\data\ui\m_smoke_ca.paa";
		mass = 20.1;
		type = 256;
		initSpeed = 80;
	};
	class twc_2inch_illum_1rnd: 8Rnd_82mm_Mo_Flare_white
	{
		displayname = "60mm 1Rnd Illum";
		DLC = "twc_config";
		count = 1;
		ammo = "twc_2inch_illum";
		scope = 2;
		scopeCurator = 2;
		weaponPoolAvailable = 1;
		author = "[TWC] Rik & [TWC] lockoncap";
		displayNameShort = "Illum";
		descriptionShort = "Illum round for the 60mm Mortar";
		picture = "\twc_2inch\data\ui\m_smoke_ca.paa";
		mass = 13.2;
		type = 256;
		initSpeed = 80;
	};