////////////////////////////////////////////////////////////////////////////////
//ACE PARACHUTE

#define PARACHUTE_FIX(CLASSNAME, BASE) \
class CLASSNAME : BASE { \
	ace_hasReserveParachute = 0; \
	ace_reserveParachute = "ACE_ReserveParachute"; \
};

class Bag_Base;
PARACHUTE_FIX(B_Parachute, Bag_Base)
PARACHUTE_FIX(ParachuteBase, Helicopter)
PARACHUTE_FIX(ParachuteWest, ParachuteBase)
PARACHUTE_FIX(ParachuteEast, ParachuteBase)
PARACHUTE_FIX(ParachuteG, Helicopter)
PARACHUTE_FIX(Parachute, ParachuteWest)
PARACHUTE_FIX(NonSteerable_Parachute_F, Parachute)
PARACHUTE_FIX(Paraglide, ParachuteWest)
PARACHUTE_FIX(Steerable_Parachute_F, Paraglide)
PARACHUTE_FIX(Parachute_02_base_F, ParachuteBase)
PARACHUTE_FIX(B_Parachute_02_F, Parachute_02_base_F)
PARACHUTE_FIX(O_Parachute_02_F, Parachute_02_base_F)
PARACHUTE_FIX(I_Parachute_02_F, Parachute_02_base_F)
PARACHUTE_FIX(B_B_Parachute_02_F, B_Parachute)
PARACHUTE_FIX(B_O_Parachute_02_F, B_Parachute)
PARACHUTE_FIX(B_I_Parachute_02_F, B_Parachute)

class ACE_NonSteerableParachute : B_Parachute {
	author = "$STR_ace_common_ACETeam";
	scope = public;
	displayName = "$STR_ace_parachute_NonSteerableParachute";
	ParachuteClass = "NonSteerable_Parachute_F";
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
	maximumLoad = 0;
	mass = 100;
};

class ACE_ReserveParachute : ACE_NonSteerableParachute {
	author = "$STR_ace_common_ACETeam";
	displayName = "$STR_ace_parachute_ReserveParachute";
	scope = public;
	mass = 70;
	ParachuteClass = "NonSteerable_Parachute_F";
	ace_reserveParachute = "";
	ace_hasReserveParachute = 0;
};

////////////////////////////////////////////////////////////////////////////////
// CUSTOM ACE ACTIONS

#define QSTORE_ACTION_REPLACE_UNIFORM(ID, DISPLAY_STR, UNIFORM_SOURCE, UNIFORM_TARGET) \
class SOCOMD_ACTION_REPLACE_UNIFORM_##ID { \
	displayName = DISPLAY_STR; \
	condition = "(alive _player) and ((uniform _player) isKindOf ["#UNIFORM_SOURCE", configFile >> 'CfgWeapons'])"; \
	statement = "[_player, "#UNIFORM_TARGET"] call SOCOMD_fnc_Action_ReplaceUniform;"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	showDisabled = 0; \
};

#define QSTORE_ACTION_REPLACE_HEADGEAR(ID, DISPLAY_STR, HEADGEAR_SOURCE, HEADGEAR_TARGET) \
class SOCOMD_ACTION_REPLACE_HEADGEAR_##ID { \
	displayName = DISPLAY_STR; \
	condition = "(alive _player) and ((headgear _player) isKindOf ["#HEADGEAR_SOURCE", configFile >> 'CfgWeapons'])"; \
	statement = "[_player, "#HEADGEAR_TARGET"] call SOCOMD_fnc_Action_ReplaceHeadgear;"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	showDisabled = 0; \
};

class CAManBase : Man {
	class ACE_SelfActions {

		class ACE_CutParachute {
			displayName = "$STR_ace_parachute_CutParachute";
			exceptions[] = {"isNotInside"};
			condition = "false";
			statement = "false";
			showDisabled = 0;
			priority = 2.9;
			icon = "\z\ace\addons\parachute\UI\cut_ca.paa";
			hotkey = "C";
		};

		class ACE_Equipment {

			//Roll Sleeves
			QSTORE_ACTION_REPLACE_UNIFORM(UNIFORM_ROLL_UP,"Roll Up Sleeves",SOCOMD_Uniform_SleevesDown,SOCOMD_Uniform_SleevesUp)
			QSTORE_ACTION_REPLACE_UNIFORM(UNIFORM_ROLL_DOWN,"Roll Down Sleeves",SOCOMD_Uniform_SleevesUp,SOCOMD_Uniform_SleevesDown)

			//Airframe MC
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_0,"Headset On",ADFU_H_Airframe_Cover_02_MC,ADFU_H_Airframe_Cover_03_MC) //No headset no Acc to yes headset no Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_1,"Headset Off",ADFU_H_Airframe_Cover_03_MC,ADFU_H_Airframe_Cover_02_MC) //Yes headset no Acc to no headset no Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_2,"Headset On",ADFU_H_Airframe_Cover_11_MC,ADFU_H_Airframe_Cover_10_MC) //No headset yes Acc to yes headset yes Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_3,"Headset Off",ADFU_H_Airframe_Cover_10_MC,ADFU_H_Airframe_Cover_11_MC) //Yes headset Yes Acc to no headset Yes Acc

			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_4,"Helmet Accessories On",ADFU_H_Airframe_Cover_03_MC,ADFU_H_Airframe_Cover_10_MC) //Yes headset no Acc to yes headset Yes Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_5,"Helmet Accessories Off",ADFU_H_Airframe_Cover_10_MC,ADFU_H_Airframe_Cover_03_MC) //Yes headset yes Acc to yes headset no Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_6,"Helmet Accessories On",ADFU_H_Airframe_Cover_02_MC,ADFU_H_Airframe_Cover_11_MC) //No headset no Acc to no headset yes Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_7,"Helmet Accessories Off",ADFU_H_Airframe_Cover_11_MC,ADFU_H_Airframe_Cover_02_MC) //No headset yes Acc to no headset no Acc

			//Airframe Tan
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_TAN_0,"Headset On",ADFU_H_Airframe_02_tan,ADFU_H_Airframe_03_tan) //No headset no Acc to yes headset no Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_TAN_1,"Headset Off",ADFU_H_Airframe_03_tan,ADFU_H_Airframe_02_tan) //Yes headset no Acc to no headset no Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_TAN_2,"Headset On",ADFU_H_Airframe_11_tan,ADFU_H_Airframe_10_tan) //No headset yes Acc to yes headset yes Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_TAN_3,"Headset Off",ADFU_H_Airframe_10_tan,ADFU_H_Airframe_11_tan) //yes headset yes Acc to no headset yes Acc

			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_TAN_4,"Helmet Accessories On",ADFU_H_Airframe_02_tan,ADFU_H_Airframe_11_tan) //No headset no Acc to no headset yes Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_TAN_5,"Helmet Accessories Off",ADFU_H_Airframe_11_tan,ADFU_H_Airframe_02_tan) //No headset Yes Acc to no headset no Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_TAN_6,"Helmet Accessories On",ADFU_H_Airframe_03_tan,ADFU_H_Airframe_10_tan) //Yes headset no Acc to Yes headset yes Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_TAN_7,"Helmet Accessories Off",ADFU_H_Airframe_10_tan,ADFU_H_Airframe_03_tan) //yes headset yes Acc to yes headset no Acc

			//Airframe OD
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_OD_0,"Headset On",ADFU_H_Airframe_02_OD,ADFU_H_Airframe_03_OD) //No headset no Acc to yes headset no Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_OD_1,"Headset Off",ADFU_H_Airframe_03_OD,ADFU_H_Airframe_02_OD) //Yes headset no Acc to no headset no Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_OD_2,"Headset On",ADFU_H_Airframe_11_OD,ADFU_H_Airframe_10_OD) //No headset yes Acc to yes headset yes Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_OD_3,"Headset Off",ADFU_H_Airframe_10_OD,ADFU_H_Airframe_11_OD) //yes headset yes Acc to no headset yes Acc

			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_OD_4,"Helmet Accessories On",ADFU_H_Airframe_02_OD,ADFU_H_Airframe_11_OD) //No headset no Acc to no headset yes Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_OD_5,"Helmet Accessories Off",ADFU_H_Airframe_11_OD,ADFU_H_Airframe_02_OD) //No headset Yes Acc to no headset no Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_OD_6,"Helmet Accessories On",ADFU_H_Airframe_03_OD,ADFU_H_Airframe_10_OD) //Yes headset no Acc to Yes headset yes Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_OD_7,"Helmet Accessories Off",ADFU_H_Airframe_10_OD,ADFU_H_Airframe_03_OD) //yes headset yes Acc to yes headset no Acc

			//Opscore Tan
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_OPSCORE_Tan_0,"Headset On",ADFU_H_OpsCore_02_TAN,ADFU_H_OpsCore_08_TAN)
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_OPSCORE_Tan_1,"Headset Off",ADFU_H_OpsCore_08_TAN,ADFU_H_OpsCore_02_TAN)

			//Opscore MC
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_OPSCORE_MC_0,"Headset On",ADFU_H_OpsCore_08_MC,ADFU_H_OpsCore_02_MC)
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_OPSCORE_MC_1,"Headset Off",ADFU_H_OpsCore_02_MC,ADFU_H_OpsCore_08_MC)

			//Opscore Blk
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_OPSCORE_BLK_0,"Headset On",ADFU_H_OpsCore_02_BLK,ADFU_H_OpsCore_08_BLK)
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_OPSCORE_BLK_1,"Headset Off",ADFU_H_OpsCore_08_BLK,ADFU_H_OpsCore_02_BLK)
		};

		class SOCOMD_Admin {
			displayName = "Admin";
			condition = "([_player] call SOCOMD_fnc_ActionCondition_IsAdmin) and (alive _player)";
			showDisabled = 0;
			exceptions[] = {"isNotInside", "isNotSitting"};

			class SOCOMD_EnterSpectator {
				displayName = "Spectate";
				condition = "([_player] call SOCOMD_fnc_ActionCondition_IsAdmin) and (alive _player)";
				statement = "[_player] call SOCOMD_fnc_Action_EnterSpectator;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};
		};
	};
};