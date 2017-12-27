	//////////////////////////////////////////////////////////////////////
	// HEADGEAR


	//////////////////////////////////////////////////////////////////////

	class AU_03_780000_v1;
	class SOCOMD_BERET : AU_03_780000_v1 
	{
		author = AUTHOR_STR;
		displayName = "SOCOMD Beret";
		ace_hearing_protection = 0.9;
		ace_hearing_lowerVolume = 0.0;
	};

	/*class H_HelmetSpecB_paint1;
	class SOCOMD_Default_Helmet : H_HelmetSpecB_paint1
	{
		scope = public;
		displayName = "SOCOMD Camo Helmet";
		ace_hearing_protection = 0.5;
		ace_hearing_lowerVolume = 0;
	};

	class H_HelmetB_camo;
	class SOCOMD_Sniper_Helmet : H_HelmetB_camo
	{
		scope = public;
		displayName = "SOCOMD Sniper Helmet";
		ace_hearing_protection = 0.5;
		ace_hearing_lowerVolume = 0;
	};*/

	class H_PilotHelmetHeli_O;
	class SOCOMD_Pilot_helmet : H_PilotHelmetHeli_O
	{
		scope = public;
		displayName = "SOCOMD Heli-Pilot Helmet";
		ace_hearing_protection = 0.9;
		ace_hearing_lowerVolume = 0;
	};

	class H_PilotHelmetFighter_B;
	class SOCOMD_FixedWing_Pilot_helmet : H_PilotHelmetFighter_B
	{
		scope = public;
		displayName = "SOCOMD Fixed Wing-Pilot Helmet";
		ace_hearing_protection = 0.9;
		ace_hearing_lowerVolume = 0;
	};

	class H_CrewHelmetHeli_O;
	class SOCOMD_Crew_helmet : H_CrewHelmetHeli_O
	{
		scope = public;
		displayName = "SOCOMD Heli-Crew Helmet";
		ace_hearing_protection = 0.9;
		ace_hearing_lowerVolume = 0;
	};

	// CAPS

	class HelmetBase;
	class H_Booniehat_khk : HelmetBase
	{
		class ItemInfo;
	};

	class SOCOMD_Cap_HS_Rev: H_Booniehat_khk //LARGE HEADSET (CAP REVERSED)
	{
		author = "SOCOMD & massi";
		scope = 1;
		_generalMacro = "SOCOMD_Cap_HS_Rev";
		displayName = "SOCOMD Cap HS Multicam (Reverse)";
		picture = "\socomd_data\uniform\icons\icon_capb_headphones_Ca.paa";
		model = "\socomd_data\uniform\mas_cap_rev.p3d";
		ace_hearing_protection = 0.5;
		ace_hearing_lowerVolume = 0;
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\socomd_data\uniform\ha\capb_co.paa","\socomd_data\uniform\a\vdo_peltor_co.paa","\socomd_data\uniform\a\vdo_opscore_grey_co.paa"};

		class ItemInfo : ItemInfo
		{
			mass = 5;
			uniformModel = "\socomd_data\uniform\mas_cap_rev.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo2","camo3"};
		};
	};

	class H_Cap_headphones : HelmetBase
	{
		class ItemInfo;
	};

	class SOCOMD_Cap_HS: H_Cap_headphones //LARGE HEADSET
	{
		author = "SOCOMD & massi";
		scope = 2;
		_generalMacro = "SOCOMD_Cap_HS";
		displayName = "SOCOMD Cap HS Multicam";
		picture = "\socomd_data\uniform\icons\icon_capb_headphones_ca.paa";
		model = "\socomd_data\uniform\mas_cap.p3d";
		ace_hearing_protection = 0.5;
		ace_hearing_lowerVolume = 0;

		class ItemInfo : ItemInfo
		{
			mass = 5;
			uniformModel = "\socomd_data\uniform\mas_cap.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2","camo3"};
			allowedSlots[] = {801,901,701,605};
		};
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\socomd_data\uniform\ha\capb_co.paa","\socomd_data\uniform\a\vdo_peltor_co.paa","\socomd_data\uniform\a\vdo_opscore_grey_co.paa"};
	};

	//BOONIES

	class H_Booniehat_khk_hs : HelmetBase
	{
		class ItemInfo;
	};

	class SOCOMD_Boonie: H_Booniehat_khk_hs //SMALL HEADSET BUT NOT
	{
		author = "SOCOMD & massi";
		scope = 2;
		_generalMacro = "SOCOMD_Boonie";
		displayName = "SOCOMD Booniehat Multicam";
		picture = "\socomd_data\uniform\icons\icon_H_Booniehat_CA.paa";
		model = "\A3\Characters_F\Common\booniehat";
		ace_hearing_protection = 0.5;
		ace_hearing_lowerVolume = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\socomd_data\uniform\ha\booniehat_mul_co.paa"};

		class ItemInfo : ItemInfo
		{
			mass = 5;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
		};
	};

	//BANDANNAS

	class H_Bandanna_khk_hs : HelmetBase
	{
		class ItemInfo;
	};

	class SOCOMD_Bandanna: H_Bandanna_khk_hs //SMALL HEADSET
	{
		author = "SOCOMD & massi";
		scope = 2;
		_generalMacro = "SOCOMD_Bandanna";
		displayName = "SOCOMD Bandana HS Multicam";
		picture = "\socomd_data\uniform\icons\icon_h_bandanna_mcamo_ca.paa";
		ace_hearing_protection = 0.5;
		ace_hearing_lowerVolume = 0;
		hiddenSelectionsTextures[] = {"\socomd_data\uniform\ha\h_bandana_mcamo_co.paa"};
	};


	//HELMETS

	//FAST GOGGLES

	class H_HelmetB : HelmetBase
	{
		class ItemInfo;
	};

	class SOCOMD_FAST_Tan_Gog: H_HelmetB //TAN
	{
		author = "SOCOMD & massi";
		scope = 1;
		_generalMacro = "SOCOMD_FAST_Tan_Gog";
		displayName = "SOCOMD FAST Tan (Goggles)";
		picture = "\socomd_data\uniform\icons\tan_sf_gog.paa";
		model = "\socomd_data\uniform\mas_new_fast.p3d";
		ace_hearing_protection = 0.7;
		ace_hearing_lowerVolume = 0;

		class ItemInfo : ItemInfo
		{
			mass = 30;
			uniformModel = "\socomd_data\uniform\mas_new_fast.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			allowedSlots[] = {801,901,701,605};

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\socomd_data\uniform\he\helmet_co.paa","\socomd_data\uniform\he\velcro_co.paa","\socomd_data\uniform\he\goggles_co.paa","\socomd_data\uniform\he\ir_co.paa"};
	};

	class SOCOMD_FAST_Multi_Gog: H_HelmetB //MULTI
	{
		author = "SOCOMD & massi";
		scope = 1;
		_generalMacro = "SOCOMD_FAST_Multi_Gog";
		displayName = "SOCOMD FAST Multicam (Goggles)";
		picture = "\socomd_data\uniform\icons\multi_sf_gog.paa";
		model = "\socomd_data\uniform\mas_new_fast_cov.p3d";
		ace_hearing_protection = 0.7;
		ace_hearing_lowerVolume = 0;
		
		class ItemInfo : ItemInfo
		{
			mass = 30;
			uniformModel = "\socomd_data\uniform\mas_new_fast_cov.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			allowedSlots[] = {801,901,701,605};

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\socomd_data\uniform\he\helmet_net_co.paa","\socomd_data\uniform\he\velcro_co.paa","\socomd_data\uniform\he\goggles_co.paa","\socomd_data\uniform\he\ir_co.paa"};
	};

	//FAST NO GOGGLES

	class SOCOMD_FAST_Tan: H_HelmetB //TAN
	{
		author = "SOCOMD & massi";
		scope = 2;
		_generalMacro = "SOCOMD_FAST_Multi";
		displayName = "SOCOMD FAST Tan";
		picture = "\socomd_data\uniform\icons\tan_sf.paa";
		model = "\socomd_data\uniform\mas_new_fast2.p3d";
		ace_hearing_protection = 0.7;
		ace_hearing_lowerVolume = 0;

		class ItemInfo : ItemInfo
		{
			mass = 30;
			uniformModel = "\socomd_data\uniform\mas_new_fast2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo3"};
			allowedSlots[] = {801,901,701,605};

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
		hiddenSelections[] = {"camo","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\socomd_data\uniform\he\helmet_co.paa","\socomd_data\uniform\he\velcro_co.paa","\socomd_data\uniform\he\ir_co.paa"};
	};

	class SOCOMD_FAST_Multi: H_HelmetB //MULTI
	{
		author = "SOCOMD & massi";
		scope = 2;
		_generalMacro = "SOCOMD_FAST_Multi";
		displayName = "SOCOMD FAST Multicam";
		picture = "\socomd_data\uniform\icons\multi_sf.paa";
		model = "\socomd_data\uniform\mas_new_fast2_cov.p3d";
		ace_hearing_protection = 0.7;
		ace_hearing_lowerVolume = 0;

		class ItemInfo : ItemInfo
		{
			mass = 30;
			uniformModel = "\socomd_data\uniform\mas_new_fast2_cov.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo3"};
			allowedSlots[] = {801,901,701,605};

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
		hiddenSelections[] = {"camo","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\socomd_data\uniform\he\helmet_net_co.paa","\socomd_data\uniform\he\velcro_co.paa","\socomd_data\uniform\he\ir_co.paa"};
	};

	//MITCH GOGGLES

	class SOCOMD_MICH_Tan_Gog: H_HelmetB //TAN
	{
		author = "SOCOMD & massi";
		scope = 1;
		_generalMacro = "SOCOMD_MICH_Tan_Gog";
		displayName = "SOCOMD MICH Tan CM (Goggles)";
		picture = "\socomd_data\uniform\icons\tan_sf_gog.paa";
		model = "\socomd_data\uniform\mas_nk_mich_sf_gog.p3d";
		ace_hearing_protection = 0.7;
		ace_hearing_lowerVolume = 0;

		class ItemInfo : ItemInfo
		{
			mass = 40;
			uniformModel = "\socomd_data\uniform\mas_nk_mich_sf_gog.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			allowedSlots[] = {801,901,701,605};

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\socomd_data\uniform\he\cm_new_mich_nk_co.paa","\socomd_data\uniform\he\velcro_co.paa","\socomd_data\uniform\he\goggles_co.paa","\socomd_data\uniform\he\ir_co.paa"};
	};

	class SOCOMD_MICH_Multi_Gog: H_HelmetB //MULTI
	{
		author = "SOCOMD & massi";
		scope = 1;
		_generalMacro = "SOCOMD_MICH_Multi_Gog";
		displayName = "SOCOMD MICH Multicam (Goggles)";
		picture = "\socomd_data\uniform\icons\multi_sf_gog.paa";
		model = "\socomd_data\uniform\mas_nw_mich_sf_gog.p3d";
		ace_hearing_protection = 0.7;
		ace_hearing_lowerVolume = 0;

		class ItemInfo : ItemInfo
		{
			mass = 30;
			uniformModel = "\socomd_data\uniform\mas_nw_mich_sf_gog.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			allowedSlots[] = {801,901,701,605};

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\socomd_data\uniform\he\new_mich_co.paa","\socomd_data\uniform\he\velcro_co.paa","\socomd_data\uniform\he\goggles_co.paa","\socomd_data\uniform\he\ir_co.paa"};
	};

	//MITCH NO GOGGLES

	class SOCOMD_MICH_Tan: H_HelmetB //TAN
	{
		author = "SOCOMD & massi";
		scope = 2;
		_generalMacro = "SOCOMD_MICH_Tan";
		displayName = "SOCOMD MICH Tan CM";
		picture = "\socomd_data\uniform\icons\tan_sf.paa";
		model = "\socomd_data\uniform\mas_nk_mich_sf.p3d";
		ace_hearing_protection = 0.7;
		ace_hearing_lowerVolume = 0;

		class ItemInfo : ItemInfo
		{
			mass = 40;
			uniformModel = "\socomd_data\uniform\mas_nk_mich_sf.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo3"};
			allowedSlots[] = {801,901,701,605};

			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
		hiddenSelections[] = {"camo","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\socomd_data\uniform\he\cm_new_mich_nk_co.paa","\socomd_data\uniform\he\velcro_co.paa","\socomd_data\uniform\he\ir_co.paa"};
	};

	class SOCOMD_MICH_Multi: H_HelmetB //MULTI
	{
		author = "SOCOMD & massi";
		scope = 2;
		_generalMacro = "SOCOMD_MICH_Multi";
		displayName = "SOCOMD MICH Multicam";
		picture = "\socomd_data\uniform\icons\multi_sf.paa";
		model = "\socomd_data\uniform\mas_nw_mich_sf.p3d";
		ace_hearing_protection = 0.7;
		ace_hearing_lowerVolume = 0;

		class ItemInfo : ItemInfo
		{
			mass = 30;
			uniformModel = "\socomd_data\uniform\mas_nw_mich_sf.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo","camo1","camo3"};
			allowedSlots[] = {801,901,701,605};
			
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
		hiddenSelections[] = {"camo","camo1","camo3"};
		hiddenSelectionsTextures[] = {"\socomd_data\uniform\he\new_mich_co.paa","\socomd_data\uniform\he\velcro_co.paa","\socomd_data\uniform\he\ir_co.paa"};
	};