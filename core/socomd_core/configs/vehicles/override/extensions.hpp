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
		class ACE_MapDagr {
			displayName = "Dagr Config";
			icon = "\z\ace\addons\dagr\UI\DAGR_Icon.paa";
			condition = "visibleMap and ('ACE_DAGR' in (items player))";
			statement = "call ace_dagr_fnc_menuInit";
			exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			showDisabled = 0;

			class ACE_MapDagr_ALL {
				displayName = "Prefix ALL";
				condition = "(count DAGR_Marker_Prefix) <=1";
				statement = "DAGR_Marker_Prefix = DAGR_Marker_Prefix_ALL";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_ExcalmationMark {
				displayName = "Prefix !";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""!""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_Hash {
				displayName = "Prefix #";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""#""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_Dollar {
				displayName = "Prefix $";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""$""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_Percentage {
				displayName = "Prefix %";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""%""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_Carrot {
				displayName = "Prefix ^";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""^""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_And {
				displayName = "Prefix &";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""&""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_Asterisk {
				displayName = "Prefix *";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""*""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_Underscore {
				displayName = "Prefix _";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""_""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_minus {
				displayName = "Prefix -";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""-""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
			class ACE_MapDagr_plus {
				displayName = "Prefix +";
				condition = "(count DAGR_Marker_Prefix) != 1";
				statement = "DAGR_Marker_Prefix = [""+""]";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
			};
		};

		class ACE_Equipment {

		//Recon
			class SOCOMD_Ghillie_interract {
				displayName = "Ghillie";
				condition = "(alive _player)";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};

				QSTORE_ACTION_REPLACE_UNIFORM(RECON_Down_Ghillie_lsh,"Lush",SOCOMD_Uniform_SleevesDown_Recon,SOCOMD_Ghillie_lsh)
				QSTORE_ACTION_REPLACE_UNIFORM(RECON_Down_Ghillie_sard,"Semi-Arid",SOCOMD_Uniform_SleevesDown_Recon,SOCOMD_Ghillie_sard)
				QSTORE_ACTION_REPLACE_UNIFORM(RECON_Down_Ghillie_ard,"Arid",SOCOMD_Uniform_SleevesDown_Recon,SOCOMD_Ghillie_ard)
				QSTORE_ACTION_REPLACE_UNIFORM(RECON_Down_Ghillie_jngl,"Jungle",SOCOMD_Uniform_SleevesDown_Recon,SOCOMD_Ghillie_jngl)

				QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Down_Ghillie_lsh,"Lush",SOCOMD_Uniform_AMCU_SleevesDown_Recon,SOCOMD_AMCU_Ghillie_lsh)
				QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Down_Ghillie_sard,"Semi-Arid",SOCOMD_Uniform_AMCU_SleevesDown_Recon,SOCOMD_AMCU_Ghillie_sard)
				QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Down_Ghillie_ard,"Arid",SOCOMD_Uniform_AMCU_SleevesDown_Recon,SOCOMD_AMCU_Ghillie_ard)
				QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Down_Ghillie_jngl,"Jungle",SOCOMD_Uniform_AMCU_SleevesDown_Recon,SOCOMD_AMCU_Ghillie_jngl)

				QSTORE_ACTION_REPLACE_UNIFORM(RECON_Up_Ghillie_lsh,"Lush",SOCOMD_Uniform_SleevesUp_Recon,SOCOMD_Ghillie_lsh)
				QSTORE_ACTION_REPLACE_UNIFORM(RECON_Up_Ghillie_sard,"Semi-Arid",SOCOMD_Uniform_SleevesUp_Recon,SOCOMD_Ghillie_sard)
				QSTORE_ACTION_REPLACE_UNIFORM(RECON_Up_Ghillie_ard,"Arid",SOCOMD_Uniform_SleevesUp_Recon,SOCOMD_Ghillie_ard)
				QSTORE_ACTION_REPLACE_UNIFORM(RECON_Up_Ghillie_jngl,"Jungle",SOCOMD_Uniform_SleevesUp_Recon,SOCOMD_Ghillie_jngl)

				QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Up_Ghillie_lsh,"Lush",SOCOMD_Uniform_AMCU_SleevesUp_Recon,SOCOMD_AMCU_Ghillie_lsh)
				QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Up_Ghillie_sard,"Semi-Arid",SOCOMD_Uniform_AMCU_SleevesUp_Recon,SOCOMD_AMCU_Ghillie_sard)
				QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Up_Ghillie_ard,"Arid",SOCOMD_Uniform_AMCU_SleevesUp_Recon,SOCOMD_AMCU_Ghillie_ard)
				QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Up_Ghillie_jngl,"Jungle",SOCOMD_Uniform_AMCU_SleevesUp_Recon,SOCOMD_AMCU_Ghillie_jngl)

			};
			//Recon
			QSTORE_ACTION_REPLACE_UNIFORM(RECON_Up,"Roll Down Sleeves",SOCOMD_Uniform_SleevesUp_Recon,SOCOMD_Uniform_SleevesDown_Recon)
			QSTORE_ACTION_REPLACE_UNIFORM(RECON_Down,"Roll Up Sleeves",SOCOMD_Uniform_SleevesDown_Recon,SOCOMD_Uniform_SleevesUp_Recon)
			QSTORE_ACTION_REPLACE_UNIFORM(RECON_Ghillie_lsh,"Uniform",SOCOMD_Ghillie_lsh,SOCOMD_Uniform_SleevesUp_Recon)
			QSTORE_ACTION_REPLACE_UNIFORM(RECON_Ghillie_sard,"Uniform",SOCOMD_Ghillie_sard,SOCOMD_Uniform_SleevesUp_Recon)
			QSTORE_ACTION_REPLACE_UNIFORM(RECON_Ghillie_ard,"Uniform",SOCOMD_Ghillie_ard,SOCOMD_Uniform_SleevesUp_Recon)
			QSTORE_ACTION_REPLACE_UNIFORM(RECON_Ghillie_jngl,"Uniform",SOCOMD_Ghillie_jngl,SOCOMD_Uniform_SleevesUp_Recon)

			QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Up,"Roll Down Sleeves",SOCOMD_Uniform_AMCU_SleevesUp_Recon,SOCOMD_Uniform_AMCU_SleevesDown_Recon)
			QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Down,"Roll Up Sleeves",SOCOMD_Uniform_AMCU_SleevesDown_Recon,SOCOMD_Uniform_AMCU_SleevesUp_Recon)
			QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Ghillie_lsh,"Uniform",SOCOMD_AMCU_Ghillie_lsh,SOCOMD_Uniform_AMCU_SleevesUp_Recon)
			QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Ghillie_sard,"Uniform",SOCOMD_AMCU_Ghillie_sard,SOCOMD_Uniform_AMCU_SleevesUp_Recon)
			QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Ghillie_ard,"Uniform",SOCOMD_AMCU_Ghillie_ard,SOCOMD_Uniform_AMCU_SleevesUp_Recon)
			QSTORE_ACTION_REPLACE_UNIFORM(RECON_AMCU_Ghillie_jngl,"Uniform",SOCOMD_AMCU_Ghillie_jngl,SOCOMD_Uniform_AMCU_SleevesUp_Recon)
		
			//Wetsuit
			QSTORE_ACTION_REPLACE_UNIFORM(SOCOMD_Uniform_Wetsuit,"Survival Fatigues",SOCOMD_Uniform_Wetsuit,SOCOMD_Uniform_Survival)
			QSTORE_ACTION_REPLACE_UNIFORM(SOCOMD_Uniform_Survival,"Wetsuit",SOCOMD_Uniform_Survival,SOCOMD_Uniform_Wetsuit)

			QSTORE_ACTION_REPLACE_UNIFORM(SOCOMD_Uniform_Wetsuit_AMCU,"Survival Fatigues",SOCOMD_Uniform_Wetsuit_AMCU,SOCOMD_Uniform_AMCU_Survival)
			QSTORE_ACTION_REPLACE_UNIFORM(SOCOMD_Uniform_AMCU_Survival,"Wetsuit",SOCOMD_Uniform_AMCU_Survival,SOCOMD_Uniform_Wetsuit_AMCU)

			//Roll Sleeves
			QSTORE_ACTION_REPLACE_UNIFORM(UNIFORM_ROLL_UP,"Roll Up Sleeves",SOCOMD_Uniform_SleevesDown,SOCOMD_Uniform_SleevesUp)
			QSTORE_ACTION_REPLACE_UNIFORM(UNIFORM_ROLL_DOWN,"Roll Down Sleeves",SOCOMD_Uniform_SleevesUp,SOCOMD_Uniform_SleevesDown)
			QSTORE_ACTION_REPLACE_UNIFORM(UNIFORM_TEE_ON,"Swap to Tee",SOCOMD_Uniform_SleevesDown,SOCOMD_Tee_uniform)
			QSTORE_ACTION_REPLACE_UNIFORM(UNIFORM_TEE_OFF,"Swap to Shirt",SOCOMD_Tee_uniform,SOCOMD_Uniform_SleevesDown)
			QSTORE_ACTION_REPLACE_UNIFORM(UNIFORM_AMCU_ROLL_UP,"Roll Up Sleeves",SOCOMD_Uniform_AMCU_SleevesDown,SOCOMD_Uniform_AMCU_SleevesUp)
			QSTORE_ACTION_REPLACE_UNIFORM(UNIFORM_AMCU_ROLL_DOWN,"Roll Down Sleeves",SOCOMD_Uniform_AMCU_SleevesUp,SOCOMD_Uniform_AMCU_SleevesDown)
			QSTORE_ACTION_REPLACE_UNIFORM(UNIFORM_AMCU_TEE_ON,"Swap to Tee",SOCOMD_Uniform_AMCU_SleevesDown,SOCOMD_Tee_AMCU_uniform)
			QSTORE_ACTION_REPLACE_UNIFORM(UNIFORM_AMCU_TEE_OFF,"Swap to Shirt",SOCOMD_Tee_AMCU_uniform,SOCOMD_Uniform_AMCU_SleevesDown)
			QSTORE_ACTION_REPLACE_UNIFORM(UNIFORM_HOOD_UP,"Hood up",SOCOMD_Uniform_Snow_HoodDown,SOCOMD_Uniform_Snow_HoodUp)
			QSTORE_ACTION_REPLACE_UNIFORM(UNIFORM_HOOD_DOWN,"Hood Down",SOCOMD_Uniform_Snow_HoodUp,SOCOMD_Uniform_Snow_HoodDown)
	
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

			//Airframe AMCU
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCU_0,"Headset On",ADFU_H_Airframe_02_AMCU,ADFU_H_Airframe_03_AMCU) //No headset no Acc to yes headset no Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCU_1,"Headset Off",ADFU_H_Airframe_03_AMCU,ADFU_H_Airframe_02_AMCU) //Yes headset no Acc to no headset no Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCU_2,"Headset On",ADFU_H_Airframe_11_AMCU,ADFU_H_Airframe_10_AMCU) //No headset yes Acc to yes headset yes Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCU_3,"Headset Off",ADFU_H_Airframe_10_AMCU,ADFU_H_Airframe_11_AMCU) //yes headset yes Acc to no headset yes Acc

			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCU_4,"Helmet Accessories On",ADFU_H_Airframe_02_AMCU,ADFU_H_Airframe_11_AMCU) //No headset no Acc to no headset yes Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCU_5,"Helmet Accessories Off",ADFU_H_Airframe_11_AMCU,ADFU_H_Airframe_02_AMCU) //No headset Yes Acc to no headset no Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCU_6,"Helmet Accessories On",ADFU_H_Airframe_03_AMCU,ADFU_H_Airframe_10_AMCU) //Yes headset no Acc to Yes headset yes Acc
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCU_7,"Helmet Accessories Off",ADFU_H_Airframe_10_AMCU,ADFU_H_Airframe_03_AMCU) //yes headset yes Acc to yes headset no Acc

			//Opscore Tan
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_OPSCORE_Tan_0,"Headset On",ADFU_H_OpsCore_02_TAN,ADFU_H_OpsCore_08_TAN)
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_OPSCORE_Tan_1,"Headset Off",ADFU_H_OpsCore_08_TAN,ADFU_H_OpsCore_02_TAN)

			//Opscore MC
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_OPSCORE_MC_0,"Headset On",ADFU_H_OpsCore_02_MC,ADFU_H_OpsCore_08_MC)
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_OPSCORE_MC_1,"Headset Off",ADFU_H_OpsCore_08_MC,ADFU_H_OpsCore_02_MC)

			//Opscore Blk
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_OPSCORE_BLK_0,"Headset On",ADFU_H_OpsCore_02_BLK,ADFU_H_OpsCore_08_BLK)
			QSTORE_ACTION_REPLACE_HEADGEAR(HEADGEAR_OPSCORE_BLK_1,"Headset Off",ADFU_H_OpsCore_08_BLK,ADFU_H_OpsCore_02_BLK)
		};

		// HALO Specific Actions
		class SOCOMD_HALO_Functions {
			displayName = "HALO Actions";
			condition = "([_player, 0] call SOCOMD_fnc_ActionCondition_HaloActions)";
			class HALO_Attatch_Base{
				
				condition = "([_player, 1] call SOCOMD_fnc_ActionCondition_HaloActions)";
				displayName = "Attatch signal";
				class HALO_Attatch_Smoke {
					displayName = "Smoke";
					class HALO_Attatch_Smoke_Red{
						displayName = "Red";
						statement = "[_player, 'smoke', 'SmokeShellRed'] call SOCOMD_fnc_Action_ConnectSignal";
					};
					class HALO_Attatch_Smoke_Blue{
						displayName = "Blue";
						statement = "[_player, 'smoke', 'SmokeShellBlue'] call SOCOMD_fnc_Action_ConnectSignal";
					};
					class HALO_Attatch_Smoke_Green{
						displayName = "Green";
						statement = "[_player, 'smoke', 'SmokeShellGreen'] call SOCOMD_fnc_Action_ConnectSignal";
					};
				};
				class HALO_Attatch_Chem {
					displayName = "Chemlight";
					class HALO_Attatch_Smoke_Red{
						displayName = "Red";
						statement = "[_player, 'chem', 'chemlight_red'] call SOCOMD_fnc_Action_ConnectSignal";
					};
					class HALO_Attatch_Smoke_Blue{
						displayName = "Blue";
						statement = "[_player, 'chem', 'chemlight_blue'] call SOCOMD_fnc_Action_ConnectSignal";
					};
					class HALO_Attatch_Smoke_Green{
						displayName = "Green";
						statement = "[_player, 'chem', 'chemlight_green'] call SOCOMD_fnc_Action_ConnectSignal";
					};
				};
			}

			// Height is based on barometric pressure, conversion is 
			// 1000 hpa = 363'/110m
			class HALO_Set_AR3 {
				condition = "([_player, 1] call SOCOMD_fnc_ActionCondition_HaloActions)";
				displayName = "Set ARD Alt.";
				
				class HALO_Set_AR3_150 {
					displayName = "~ 150m ASL ";
					statement = "[995,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"
				};
				class HALO_Set_AR3_200 {
					displayName = "~ 200m ASL";
					statement = "[990,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"
				};
				class HALO_Set_AR3_250 {
					displayName = "~ 250m ASL";
					statement = "[983,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"
				};
				class HALO_Set_AR3_300 {
					displayName = "~ 300m ASL";
					statement = "[978,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"
				};
				class HALO_Set_AR3_400 {
					displayName = "~ 400m ASL";
					statement = "[966,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"
				};
				class HALO_Set_AR3_500 {
					displayName = "~ 500m ASL";
					statement = "[954,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"
				};
				class HALO_Set_AR3_600 {
					displayName = "~ 600m ASL";
					statement = "[943,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"
				};
				class HALO_Set_AR3_700 {
					displayName = "~ 700m ASL";
					statement = "[932,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"
				};
				class HALO_Set_AR3_800 {
					displayName = "~ 800m ASL";
					statement = "[921,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"
				};
				class HALO_Set_AR3_900 {
					displayName = "~ 900m ASL";
					statement = "[910,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"
				};
				class HALO_Set_AR3_1000 {
					displayName = "~ 1000m ASL";
					statement = "[899,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"
				};
				
				class HALO_Set_AR3_1200 {
					displayName = "~ 1200m ASL";
					statement = "[877,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"
				};
				
				class HALO_Set_AR3_1500 {
					displayName = "~ 1500m ASL";
					statement = "[845,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"
				};
				class HALO_Set_AR3_1750 {
					displayName = "~ 1750m ASL";
					statement = "[820,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"
				};
				class HALO_Set_AR3_2000 {
					displayName = "~ 2000m ASL";
					statement = "[795,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"
				};
			};
			class HALO_Post_landing{
				condition = "([_player, 2] call SOCOMD_fnc_ActionCondition_HaloActions)";
				displayName = "Remove Parachite";
				statement = "player execVM 'vqi_halo\VQI-DemonDropper\Landing\vqi_halo_chuteonground.sqf';"
			}
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

		class Medical {

			class ACE_Head {
				class fieldDressing;
				class Apap: fieldDressing {
					displayName="Paracetemol 1g";
					condition="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\apap.paa";
				};
			};

			class ACE_ArmLeft {
				class Morphine;
				class Morphine_Medic: Morphine {
					displayName="Morphine 10mg/1mL";
					condition="[_player, _target, 'hand_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\VPN.paa";
				};
				class Epinephrine;
				class Epinephrine_Medic : Epinephrine {
					epinephrinedisplayName="Epinephrine 1mg/1mL";
					condition="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\VPN.paa";
				};
				class Fentanyl: Morphine {
					displayName="Fentanyl 100mcg/2mL";
					condition="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_treatment";
				};
				class Ket: Fentanyl {
						displayName="Ket 6mcg/2mL";
						condition="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_treatment";
					};
				class Naloxone: Morphine {
					displayName="Naloxone 1.6mg/4mL";
					condition="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_treatment";
				};
			};
			
			class ACE_ArmRight {
				class Morphine;
				class Morphine_Medic: Morphine {
					displayName="Morphine 10mg/1mL";
					condition="[_player, _target, 'lhand_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\VPN.paa";
				};
				class Epinephrine;
				class Epinephrine_Medic : Epinephrine {
					epinephrinedisplayName="Epinephrine 1mg/1mL";
					condition="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\VPN.paa";
				};
				class Fentanyl: Morphine {
					displayName="Fentanyl 100mcg/2mL";
					condition="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_treatment";
				};
				class Ket: Fentanyl {
						displayName="Ket 6mcg/2mL";
						condition="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_treatment";
					};
				class Naloxone: Morphine {
					displayName="Naloxone 1.6mg/4mL";
					condition="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_treatment";
				};
			};
			
			class ACE_LegLeft {
				class Morphine;
				class Morphine_Medic: Morphine {
					displayName="Morphine 10mg/1mL";
					condition="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\VPN.paa";
				};
				class Epinephrine;
				class Epinephrine_Medic : Epinephrine {
					epinephrinedisplayName="Epinephrine 1mg/1mL";
					condition="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\VPN.paa";
				};
				class Fentanyl: Morphine {
					displayName="Fentanyl 100mcg/2mL";
					condition="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_treatment";
				};
				class Ket: Fentanyl {
						displayName="Ket 6mcg/2mL";
						condition="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_treatment";
					};
				class Naloxone: Morphine {
					displayName="Naloxone 1.6mg/4mL";
					condition="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_treatment";
				};
			};

			class ACE_LegRight {
				class Morphine;
				class Morphine_Medic: Morphine {
					displayName="Morphine 10mg/1mL";
					condition="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\VPN.paa";
				};
				class Epinephrine;
				class Epinephrine_Medic : Epinephrine {
					epinephrinedisplayName="Epinephrine 1mg/1mL";
					condition="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\VPN.paa";
				};
				class Fentanyl: Morphine {
					displayName="Fentanyl 100mcg/2mL";
					condition="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_treatment";
				};
				class Ket: Fentanyl {
						displayName="Ket 6mcg/2mL";
						condition="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_treatment";
					};
				class Naloxone: Morphine {
					displayName="Naloxone 1.6mg/4mL";
					condition="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_treatment";
				};
			};
		};
	};
	class ACE_Actions{
		class ACE_Head{
			class Blindfold{
				displayName="Blindfold";
				condition="[_player,_target] call SOCOMD_fnc_ActionCondition_canInteract";
				statement="[_player,_target] call SOCOMD_fnc_Action_putBlindfoldOn";
				showDisabled=0;
				priority=1;
				distance=2;
			};
		};
		class fieldDressing;
		class Apap: fieldDressing {
			displayName="Paracetemol 1g";
			condition="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_treatment";
			icon="socomd_data_core\icon\apap.paa";
		};

		class intubating {
			displayName="$STR_kat_aceAirway_intubating";
			icon="";
			class Larynxtubus {
				displayName="Insert SGA";
				distance=2;
				condition="[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_treatment";
				exceptions[]= {
					""
				};
				showDisabled=0;
				icon="\kat_aceAirway\images\larynx.paa";
			};
			class Guedeltubus: Larynxtubus {
				displayName="Insert NPA";
				condition="[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_treatment";
				exceptions[]= {
					""
				};
				icon="\kat_aceAirway\images\guedel.paa";
			};
		};

		class ACE_ArmLeft {
			class Morphine;
			class Morphine_Medic: Morphine {
				displayName="Morphine 10mg/1mL";
				condition="[_player, _target, 'hand_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'hand_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
				icon="socomd_data_core\icon\VPN.paa";
			};
			class Epinephrine;
			class Epinephrine_Medic : Epinephrine {
				epinephrinedisplayName="Epinephrine 1mg/1mL";
				condition="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
				icon="socomd_data_core\icon\VPN.paa";
			};
			class Fentanyl: Morphine {
				displayName="Fentanyl 100mcg/2mL";
				condition="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_treatment";
			};
			class Ket: Fentanyl {
				displayName="Ket 6mcg/2mL";
				condition="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_treatment";
			};
			class Naloxone: Morphine {
				displayName="Naloxone 1.6mg/4mL";
				condition="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_treatment";
			};
		};
	
		class ACE_ArmRight {
			class Morphine;
			class Morphine_Medic {
				displayName="Morphine 10mg/1mL";
				condition="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
				icon="socomd_data_core\icon\VPN.paa";
			};
			class Epinephrine;
			class Epinephrine_Medic : Epinephrine {
				epinephrinedisplayName="Epinephrine 1mg/1mL";
				condition="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
				icon="socomd_data_core\icon\VPN.paa";
			};
			class Fentanyl: Morphine {
				displayName="Fentanyl 100mcg/2mL";
				condition="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_treatment";
			};
			class Ket: Fentanyl {
				displayName="Ket 6mcg/2mL";
				condition="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_treatment";
			};
			class Naloxone: Morphine {
				displayName="Naloxone 1.6mg/4mL";
				condition="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_treatment";
			};
		};

		class ACE_LegLeft {
			class Morphine;
			class Morphine_Medic {
				displayName="Morphine 10mg/1mL";
				condition="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
				icon="socomd_data_core\icon\VPN.paa";
			};
			class Epinephrine;
			class Epinephrine_Medic : Epinephrine {
				epinephrinedisplayName="Epinephrine 1mg/1mL";
				condition="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
				icon="socomd_data_core\icon\VPN.paa";
			};
			class Fentanyl: Morphine {
				displayName="Fentanyl 100mcg/2mL";
				condition="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_treatment";
			};
			class Ket: Fentanyl {
				displayName="Ket 6mcg/2mL";
				condition="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_treatment";
			};
			class Naloxone: Morphine {
				displayName="Naloxone 1.6mg/4mL";
				condition="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_treatment";
			};
		};

		class ACE_LegRight {
			class Morphine;
			class Morphine_Medic {
				displayName="Morphine 10mg/1mL";
				condition="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
				icon="socomd_data_core\icon\VPN.paa";
			};
			class Epinephrine;
			class Epinephrine_Medic : Epinephrine {
				epinephrinedisplayName="Epinephrine 1mg/1mL";
				condition="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
				icon="socomd_data_core\icon\VPN.paa";
			};
			class Fentanyl: Morphine {
				displayName="Fentanyl 100mcg/2mL";
				condition="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_treatment";
			};
			class Ket: Fentanyl {
				displayName="Ket 6mcg/2mL";
				condition="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_treatment";
			};
			class Naloxone: Morphine {
				displayName="Naloxone 1.6mg/4mL";
				condition="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_treatment";
			};
		};

		class ACE_MainActions {
			class Medical {
				class ACE_Head {
					class fieldDressing;
					class Apap: fieldDressing {
						displayName="Paracetemol 1g";
						condition="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\apap.paa";
					};
					class intubating {
						displayName="$STR_kat_aceAirway_intubating";
						icon="";
						class Larynxtubus {
							displayName="Insert SGA";
							distance=2;
							condition="[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_treatment";
							exceptions[]= {
								""
							};
							showDisabled=0;
							icon="\kat_aceAirway\images\larynx.paa";
						};
						class Guedeltubus: Larynxtubus {
							displayName="Insert NPA";
							condition="[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_treatment";
							exceptions[]= {
								""
							};
							icon="\kat_aceAirway\images\guedel.paa";
						};
					};
				};

				class ACE_ArmLeft {
					class Morphine;
					class Morphine_Medic: Morphine {
						displayName="Morphine 10mg/1mL";
						condition="[_player, _target, 'hand_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Epinephrine;
					class Epinephrine_Medic : Epinephrine {
						epinephrinedisplayName="Epinephrine 1mg/1mL";
						condition="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Fentanyl: Morphine {
						displayName="Fentanyl 100mcg/2mL";
						condition="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_treatment";
					};
					class Ket: Fentanyl {
						displayName="Ket 6mcg/2mL";
						condition="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_treatment";
					};
					class Naloxone: Morphine {
						displayName="Naloxone 1.6mg/4mL";
						condition="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_treatment";
					};
				};

				class ACE_ArmRight {
					class Morphine;
					class Morphine_Medic {
						displayName="Morphine 10mg/1mL";
						condition="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Epinephrine;
					class Epinephrine_Medic : Epinephrine {
						epinephrinedisplayName="Epinephrine 1mg/1mL";
						condition="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Fentanyl: Morphine {
						displayName="Fentanyl 100mcg/2mL";
						condition="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_treatment";
					};
					class Ket: Fentanyl {
						displayName="Ket 6mcg/2mL";
						condition="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_treatment";
					};
					class Naloxone: Morphine {
						displayName="Naloxone 1.6mg/4mL";
						condition="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_treatment";
					};
				};

				class ACE_LegLeft {
					class Morphine;
					class Morphine_Medic {
						displayName="Morphine 10mg/1mL";
						condition="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Epinephrine;
					class Epinephrine_Medic : Epinephrine {
						epinephrinedisplayName="Epinephrine 1mg/1mL";
						condition="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Fentanyl: Morphine {
						displayName="Fentanyl 100mcg/2mL";
						condition="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_treatment";
					};
					class Ket: Fentanyl {
						displayName="Ket 100mcg/2mL";
						condition="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_treatment";
					};
					class Naloxone: Morphine {
						displayName="Naloxone 1.6mg/4mL";
						condition="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_treatment";
					};
				};

				class ACE_LegRight {
					class Morphine;
					class Morphine_Medic {
						displayName="Morphine 10mg/1mL";
						condition="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Epinephrine;
					class Epinephrine_Medic : Epinephrine {
						epinephrinedisplayName="Epinephrine 1mg/1mL";
						condition="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Fentanyl: Morphine {
						displayName="Fentanyl 100mcg/2mL";
						condition="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_treatment";
					};
					class Ket: Fentanyl {
						displayName="Ket 6mcg/2mL";
						condition="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_treatment";
					};
					class Naloxone: Morphine {
						displayName="Naloxone 1.6mg/4mL";
						condition="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_treatment";
					};
				};
			};
		};
	};
};

class Radar_System_01_base_F : StaticMGWeapon {
	class ACE_Actions {
		class ACE_MainActions {
			displayName = "Radar System";
			selection = "";
			distance = 5;
			condition = 1;

			class Action_ToggleRadarOn {
				displayName = "Activate Radar";
				condition = "([_target] call SOCOMD_fnc_ActionCondition_IsRadarOff)";
				statement = "_target setVehicleRadar 1;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class Action_ToggleRadarOff {
				displayName = "Deactivate Radar";
				condition = "([_target] call SOCOMD_fnc_ActionCondition_IsRadarOn) and (alive _player)";
				statement = "_target setVehicleRadar 2;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};
		};
	};
};