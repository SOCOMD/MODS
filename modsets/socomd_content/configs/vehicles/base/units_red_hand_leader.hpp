
class CPC_NAM_C_CIV_1;
class CPC_NAM_C_CIV_1_OCimport_01 : CPC_NAM_C_CIV_1 { scope = 0; class EventHandlers; };
class CPC_NAM_C_CIV_1_OCimport_02 : CPC_NAM_C_CIV_1_OCimport_01 { class EventHandlers; };


class O_SEAHVT_Darmanto_Mansur_01 : CPC_NAM_C_CIV_1_OCimport_02 {
	author = "Lincoln";
	scope = 2;
	scopeCurator = 2;
	displayName = "Darmanto Mansur";
	side = 0;
	faction = "O_SEAHVT";

	identityTypes[] = {"Head_Asian","LanguageCHI_F"};

	uniformClass = "CUP_U_C_Suit_02";

	linkedItems[] = {};
	respawnlinkedItems[] = {};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_U_C_Suit_02",{}},{},{},"","G_Aviator",{},{"","","","","",""}};


	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};

	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;

};

class O_SEAHVT_Gandi_Pradana_01 : O_SEAHVT_Darmanto_Mansur_01 {
	author = "Lincoln";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gandi Pradana";
	side = 0;
	faction = "O_SEAHVT";

	identityTypes[] = {"Head_Asian","LanguageCHI_F"};

	uniformClass = "CUP_I_B_PMC_Unit_41";

	linkedItems[] = {"lbt_comms_od","CUP_H_FR_BoonieMARPAT"};
	respawnlinkedItems[] = {"lbt_comms_od","CUP_H_FR_BoonieMARPAT"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_I_B_PMC_Unit_41",{}},{"lbt_comms_od",{}},{},"CUP_H_FR_BoonieMARPAT","",{},{"","","","","",""}};


	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};

	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;

};

class O_SEAHVT_Umaya_Sitorus_01 : O_SEAHVT_Gandi_Pradana_01 {
	author = "Lincoln";
	scope = 2;
	scopeCurator = 2;
	displayName = "Umaya Sitorus";
	side = 0;
	faction = "O_SEAHVT";

	identityTypes[] = {"Head_Asian","LanguageCHI_F"};

	uniformClass = "CUP_I_B_PMC_Unit_2";

	linkedItems[] = {"lbt_light_od"};
	respawnlinkedItems[] = {"lbt_light_od"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_I_B_PMC_Unit_2",{}},{"lbt_light_od",{}},{},"","VSM_Peltor_OD_glasses",{},{"","","","","",""}};


	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};

	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;

};

class O_SEAHVT_Lac_Thuy_Du_01 : O_SEAHVT_Gandi_Pradana_01 {
	author = "Lincoln";
	scope = 2;
	scopeCurator = 2;
	displayName = "Lac Thuy Du";
	side = 0;
	faction = "O_SEAHVT";

	identityTypes[] = {"Head_Asian","LanguageCHI_F"};

	uniformClass = "SP_0000_Standard_PulloverUniform_ATacsFG";

	linkedItems[] = {"lbt_pouchless_od","H_Cap_oli"};
	respawnlinkedItems[] = {"lbt_pouchless_od","H_Cap_oli"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	ALiVE_orbatCreator_loadout[] = {{},{},{},{"SP_0000_Standard_PulloverUniform_ATacsFG",{}},{"lbt_pouchless_od",{}},{},"H_Cap_oli","CUP_G_Grn_Scarf_Shades_GPS",{},{"","","","","",""}};


	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};

	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;

};

class O_SEAHVT_Cagak_Pramata_01 : O_SEAHVT_Gandi_Pradana_01 {
	author = "Lincoln";
	scope = 2;
	scopeCurator = 2;
	displayName = "Cagak Pramata";
	side = 0;
	faction = "O_SEAHVT";

	identityTypes[] = {"Head_Asian","LanguageCHI_F"};

	uniformClass = "U_I_C_Soldier_Para_5_F";

	linkedItems[] = {"lbt_pouchless_od","H_StrawHat_dark"};
	respawnlinkedItems[] = {"lbt_pouchless_od","H_StrawHat_dark"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Para_5_F",{}},{"lbt_pouchless_od",{}},{},"H_StrawHat_dark","",{},{"","","","","",""}};


	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};

	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;

};

