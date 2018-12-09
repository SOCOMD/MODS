////////////////////////////////////////////////////////////////////////////////
//ACE PARACHUTE

class Bag_Base;
class B_Parachute : Bag_Base {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

class ParachuteBase : Helicopter {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

class ParachuteWest : ParachuteBase {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

class ParachuteEast : ParachuteBase {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

class ParachuteG : ParachuteBase {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

class Parachute : ParachuteWest {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

class NonSteerable_Parachute_F : Parachute {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

class Paraglide : ParachuteWest {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

class Steerable_Parachute_F : Paraglide {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

class Parachute_02_base_F : parachuteBase {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

class B_Parachute_02_F : Parachute_02_base_F {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

class O_Parachute_02_F : Parachute_02_base_F {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

class I_Parachute_02_F : Parachute_02_base_F {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

class B_B_Parachute_02_F : B_Parachute {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

class B_O_Parachute_02_F : B_Parachute {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

class B_I_Parachute_02_F : B_Parachute {
	ace_hasReserveParachute = 0;
	ace_reserveParachute = "ACE_ReserveParachute";
};

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
//ADD PARACHUTE TO UNITS

class O_Pilot_F : O_helipilot_F {
	backpack = "ACE_NonSteerableParachute";
};

class B_Pilot_F : B_Soldier_05_f {
	backpack = "ACE_NonSteerableParachute";
};

class I_pilot_F : I_Soldier_04_F {
	backpack = "ACE_NonSteerableParachute";
};

////////////////////////////////////////////////////////////////////////////////
// CUSTOM ACE ACTIONS

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
			//ROLL SLEEVES
			class SOCOMD_Uniform_RollSleeveUp {
				displayName = "Roll Up Sleeves";
				condition = "((uniform _player) == 'SOCOMD_Uniform_LongSleeve') and (alive _player)";
				statement = "[_player, 'SOCOMD_Uniform_ShortSleeve'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Uniform_RollSleeveDown {
				displayName = "Roll Down Sleeves";
				condition = "((uniform _player) == 'SOCOMD_Uniform_ShortSleeve') and (alive _player)";
				statement = "[_player, 'SOCOMD_Uniform_LongSleeve'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Commando_Uniform_RollSleeveUp {
				displayName = "Roll Up Sleeves";
				condition = "((uniform _player) == 'SOCOM_Uniform_SleevesDown') and (alive _player)";
				statement = "[_player, 'SOCOMD_Uniform_SleevesUp'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Commando_Uniform_RollSleeveDown {
				displayName = "Roll Down Sleeves";
				condition = "((uniform _player) == 'SOCOMD_Uniform_SleevesUp') and (alive _player)";
				statement = "[_player, 'SOCOM_Uniform_SleevesDown'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Uniform_Officer_RollSleeveUp {
				displayName = "Roll Up Sleeves";
				condition = "((uniform _player) == 'SOCOMD_Uniform_Officer_LongSleeve') and (alive _player)";
				statement = "[_player, 'SOCOMD_Uniform_Officer_ShortSleeve'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Uniform_Officer_RollSleeveDown {
				displayName = "Roll Down Sleeves";
				condition = "((uniform _player) == 'SOCOMD_Uniform_Officer_ShortSleeve') and (alive _player)";
				statement = "[_player, 'SOCOMD_Uniform_Officer_LongSleeve'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_SASR_Uniform_RollSleeveUp {
				displayName = "Roll Up Sleeves";
				condition = "((uniform _player) == 'VSM_Multicam_Crye_Camo') and (alive _player)";
				statement = "[_player, 'VSM_Multicam_Crye_SS_Camo'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_SASR_Uniform_RollSleeveDown {
				displayName = "Roll Down Sleeves";
				condition = "((uniform _player) == 'VSM_Multicam_Crye_SS_Camo') and (alive _player)";
				statement = "[_player, 'VSM_Multicam_Crye_Camo'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Commando_DPCU_Uniform_RollSleeveUp {
				displayName = "Roll Up Sleeves";
				condition = "((uniform _player) == 'SOCOMD_Commando_DPCU_SleevesDown') and (alive _player)";
				statement = "[_player, 'SOCOMD_Commando_DPCU_SleevesUp'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Commando_DPCU_Uniform_RollSleeveDown {
				displayName = "Roll Down Sleeves";
				condition = "((uniform _player) == 'SOCOMD_Commando_DPCU_SleevesUp') and (alive _player)";
				statement = "[_player, 'SOCOMD_Commando_DPCU_SleevesDown'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Commando_DPDU_Uniform_RollSleeveUp {
				displayName = "Roll Up Sleeves";
				condition = "((uniform _player) == 'SOCOMD_Commando_DPDU_SleevesDown') and (alive _player)";
				statement = "[_player, 'SOCOMD_Commando_DPDU_SleevesUp'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Commando_DPDU_Uniform_RollSleeveDown {
				displayName = "Roll Down Sleeves";
				condition = "((uniform _player) == 'SOCOMD_Commando_DPDU_SleevesUp') and (alive _player)";
				statement = "[_player, 'SOCOMD_Commando_DPDU_SleevesUp'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Commando_DPCU_OD_Uniform_RollSleeveUp {
				displayName = "Roll Up Sleeves";
				condition = "((uniform _player) == 'SOCOMD_Commando_DPCU_OD_SleevesDown') and (alive _player)";
				statement = "[_player, 'SOCOMD_Commando_DPCU_OD_SleevesUp'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Commando_DPCU_OD_Uniform_RollSleeveDown {
				displayName = "Roll Down Sleeves";
				condition = "((uniform _player) == 'SOCOMD_Commando_DPCU_OD_SleevesUp') and (alive _player)";
				statement = "[_player, 'SOCOMD_Commando_DPCU_OD_SleevesDown'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Commando_DPDU_OD_Uniform_RollSleeveUp {
				displayName = "Roll Up Sleeves";
				condition = "((uniform _player) == 'SOCOMD_Commando_DPDU_OD_SleevesDown') and (alive _player)";
				statement = "[_player, 'SOCOMD_Commando_DPDU_OD_SleevesUp'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Commando_DPDU_OD_Uniform_RollSleeveDown {
				displayName = "Roll Down Sleeves";
				condition = "((uniform _player) == 'SOCOMD_Commando_DPDU_OD_SleevesUp') and (alive _player)";
				statement = "[_player, 'SOCOMD_Commando_DPDU_OD_SleevesUp'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Uniform_Snow_RaiseHood {
				displayName = "Raise Hood";
				condition = "((uniform _player) == 'SOCOMD_Uniform_Snow_HoodDown') and (alive _player)";
				statement = "[_player, 'SOCOMD_Uniform_Snow_HoodUp'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Uniform_Snow_LowerHood {
				displayName = "Lower Hood";
				condition = "((uniform _player) == 'SOCOMD_Uniform_Snow_HoodUp') and (alive _player)";
				statement = "[_player, 'SOCOMD_Uniform_Snow_HoodDown'] call SOCOMD_fnc_Action_ReplaceUniform;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_MICH_Multi_PutGogglesOn {
				displayName = "Put Goggles On";
				condition = "((headgear _player) == 'SOCOMD_MICH_Multi') and (alive _player)";
				statement = "[_player , 'SOCOMD_MICH_Multi_Gog'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_MICH_Multi_TakeGogglesOff {
				displayName = "Take Goggles Off";
				condition = "((headgear _player) == 'SOCOMD_MICH_Multi_Gog') and (alive _player)";
				statement = "[_player , 'SOCOMD_MICH_Multi'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_MICH_Tan_PutGogglesOn {
				displayName = "Put Goggles On";
				condition = "((headgear _player) == 'SOCOMD_MICH_Tan') and (alive _player)";
				statement = "[_player , 'SOCOMD_MICH_Tan_Gog'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_MICH_Tan_TakeGogglesOff {
				displayName = "Take Goggles Off";
				condition = "((headgear _player) == 'SOCOMD_MICH_Tan_Gog') and (alive _player)";
				statement = "[_player , 'SOCOMD_MICH_Tan'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//No headset no Acc to yes headset no Acc
			class SOCOMD_AIRFRAME_HeadsetOn {
				displayName = "Headset On";
				condition = "((headgear _player) == 'ADFU_H_Airframe_Cover_02_MC') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_Cover_03_MC'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//Yes headset no Acc to no headset no Acc
			class SOCOMD_AIRFRAME_HeadsetOff {
				displayName = "Headset Off";
				condition = "((headgear _player) == 'ADFU_H_Airframe_Cover_03_MC') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_Cover_02_MC'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//No headset yes Acc to yes headset yes Acc
			class SOCOMD_AIRFRAME_HeadsetOn_acc {
				displayName = "Headset On";
				condition = "((headgear _player) == 'ADFU_H_Airframe_Cover_11_MC') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_Cover_10_MC'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//Yes headset Yes Acc to no headset Yes Acc
			class SOCOMD_AIRFRAME_HeadsetOff_acc {
				displayName = "Headset Off";
				condition = "((headgear _player) == 'ADFU_H_Airframe_Cover_10_MC') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_Cover_11_MC'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//Yes headset no Acc to yes headset Yes Acc
			class SOCOMD_AIRFRAME_Headset_AccOn {
				displayName = "Helmet Accessories On";
				condition = "((headgear _player) == 'ADFU_H_Airframe_Cover_03_MC') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_Cover_10_MC'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//Yes headset yes Acc to yes headset no Acc
			class SOCOMD_AIRFRAME_Headset_AccOff {
				displayName = "Helmet Accessories Off";
				condition = "((headgear _player) == 'ADFU_H_Airframe_Cover_10_MC') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_Cover_03_MC'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//No headset no Acc to no headset yes Acc
			class SOCOMD_AIRFRAME_AccOn {
				displayName = "Helmet Accessories On";
				condition = "((headgear _player) == 'ADFU_H_Airframe_Cover_02_MC') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_Cover_11_MC'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//No headset yes Acc to no headset no Acc
			class SOCOMD_AIRFRAME_AccOff {
				displayName = "Helmet Accessories Off";
				condition = "((headgear _player) == 'ADFU_H_Airframe_Cover_11_MC') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_Cover_02_MC'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			////////////////////////////////////////////////////////////////////////////////

			//No headset no Acc to yes headset no Acc
			class SOCOMD_AIRFRAME_TAN_HeadsetOn {
				displayName = "Headset On";
				condition = "((headgear _player) == 'ADFU_H_Airframe_02_tan') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_03_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//Yes headset no Acc to no headset no Acc
			class SOCOMD_AIRFRAME_TAN_HeadsetOff {
				displayName = "Headset Off";
				condition = "((headgear _player) == 'ADFU_H_Airframe_03_tan') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_02_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//No headset yes Acc to yes headset yes Acc
			class SOCOMD_AIRFRAME_TAN_HeadsetOn_acc {
				displayName = "Headset On";
				condition = "((headgear _player) == 'ADFU_H_Airframe_11_tan') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_10_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//yes headset yes Acc to no headset yes Acc
			class SOCOMD_AIRFRAME_TAN_HeadsetOff_acc {
				displayName = "Headset Off";
				condition = "((headgear _player) == 'ADFU_H_Airframe_10_tan') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_11_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//No headset no Acc to no headset yes Acc
			class SOCOMD_AIRFRAME_TAN_HeadsetOff_accOn {
				displayName = "Helmet Accessories On";
				condition = "((headgear _player) == 'ADFU_H_Airframe_02_tan') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_11_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//No headset Yes Acc to no headset no Acc
			class SOCOMD_AIRFRAME_TAN_HeadsetOff_accOff {
				displayName = "Helmet Accessories Off";
				condition = "((headgear _player) == 'ADFU_H_Airframe_11_tan') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_02_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//Yes headset no Acc to Yes headset yes Acc
			class SOCOMD_AIRFRAME_TAN_HeadsetOn_accOn {
				displayName = "Helmet Accessories On";
				condition = "((headgear _player) == 'ADFU_H_Airframe_03_tan') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_10_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//yes headset yes Acc to yes headset no Acc
			class SOCOMD_AIRFRAME_TAN_HeadsetOn_accOff {
				displayName = "Helmet Accessories Off";
				condition = "((headgear _player) == 'ADFU_H_Airframe_10_tan') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_03_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			////////////////////////////////////////////////////////////////////////////////

			//No headset no Acc to yes headset no Acc
			class SOCOMD_AIRFRAME_OD_HeadsetOn {
				displayName = "Headset On";
				condition = "((headgear _player) == 'ADFU_H_Airframe_02_OD') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_03_OD'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//Yes headset no Acc to no headset no Acc
			class SOCOMD_AIRFRAME_OD_HeadsetOff {
				displayName = "Headset Off";
				condition = "((headgear _player) == 'ADFU_H_Airframe_03_OD') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_02_OD'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//No headset yes Acc to yes headset yes Acc
			class SOCOMD_AIRFRAME_OD_HeadsetOn_acc {
				displayName = "Headset On";
				condition = "((headgear _player) == 'ADFU_H_Airframe_11_OD') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_10_OD'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//yes headset yes Acc to no headset yes Acc
			class SOCOMD_AIRFRAME_OD_HeadsetOff_acc {
				displayName = "Headset Off";
				condition = "((headgear _player) == 'ADFU_H_Airframe_10_OD') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_11_OD'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//No headset no Acc to no headset yes Acc
			class SOCOMD_AIRFRAME_OD_HeadsetOff_accOn {
				displayName = "Helmet Accessories On";
				condition = "((headgear _player) == 'ADFU_H_Airframe_02_OD') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_11_OD'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//No headset Yes Acc to no headset no Acc
			class SOCOMD_AIRFRAME_OD_HeadsetOff_accOff {
				displayName = "Helmet Accessories Off";
				condition = "((headgear _player) == 'ADFU_H_Airframe_11_OD') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_02_OD'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//Yes headset no Acc to Yes headset yes Acc
			class SOCOMD_AIRFRAME_OD_HeadsetOn_accOn {
				displayName = "Helmet Accessories On";
				condition = "((headgear _player) == 'ADFU_H_Airframe_03_OD') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_10_OD'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//yes headset yes Acc to yes headset no Acc
			class SOCOMD_AIRFRAME_OD_HeadsetOn_accOff {
				displayName = "Helmet Accessories Off";
				condition = "((headgear _player) == 'ADFU_H_Airframe_10_OD') and (alive _player)";
				statement = "[_player , 'ADFU_H_Airframe_03_OD'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			////////////////////////////////////////////////////////////////////////////////

			//OPSCORE HEADSET
			class SOCOMD_OPSCORE_TAN_HeadsetOn {
				displayName = "Headset On";
				condition = "((headgear _player) == 'ADFU_H_OpsCore_02_TAN') and (alive _player)";
				statement = "[_player , 'ADFU_H_OpsCore_08_TAN'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_OPSCORE_TAN_HeadsetOff {
				displayName = "Headset Off";
				condition = "((headgear _player) == 'ADFU_H_OpsCore_08_TAN') and (alive _player)";
				statement = "[_player , 'ADFU_H_OpsCore_02_TAN'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_OPSCORE_MC_HeadsetOn {
				displayName = "Headset On";
				condition = "((headgear _player) == 'ADFU_H_OpsCore_02_MC') and (alive _player)";
				statement = "[_player , 'ADFU_H_OpsCore_08_MC'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_OPSCORE_MC_HeadsetOff {
				displayName = "Headset Off";
				condition = "((headgear _player) == 'ADFU_H_OpsCore_08_MC') and (alive _player)";
				statement = "[_player , 'ADFU_H_OpsCore_02_MC'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};
			class SOCOMD_OPSCORE_BLK_HeadsetOn {
				displayName = "Headset On";
				condition = "((headgear _player) == 'ADFU_H_OpsCore_02_BLK') and (alive _player)";
				statement = "[_player , 'ADFU_H_OpsCore_08_BLK'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_OPSCORE_BLK_HeadsetOff {
				displayName = "Headset Off";
				condition = "((headgear _player) == 'ADFU_H_OpsCore_08_BLK') and (alive _player)";
				statement = "[_player , 'ADFU_H_OpsCore_02_BLK'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//FAST SWITCH GOGGLES
			class SOCOMD_FAST_Multi_PutGogglesOn {
				displayName = "Put Goggles On";
				condition = "((headgear _player) == 'SOCOMD_FAST_Multi') and (alive _player)";
				statement = "[_player , 'SOCOMD_FAST_Multi_Gog'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_FAST_Multi_TakeGogglesOff {
				displayName = "Take Goggles Off";
				condition = "((headgear _player) == 'SOCOMD_FAST_Multi_Gog') and (alive _player)";
				statement = "[_player , 'SOCOMD_FAST_Multi'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_FAST_Tan_PutGogglesOn {
				displayName = "Put Goggles On";
				condition = "((headgear _player) == 'SOCOMD_FAST_Tan') and (alive _player)";
				statement = "[_player , 'SOCOMD_FAST_Tan_Gog'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_FAST_Tan_TakeGogglesOff {
				displayName = "Take Goggles Off";
				condition = "((headgear _player) == 'SOCOMD_FAST_Tan_Gog') and (alive _player)";
				statement = "[_player , 'SOCOMD_FAST_Tan'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//REVERSE CAP
			class SOCOMD_Cap_HS_Reverse {
				displayName = "Reverse Cap";
				condition = "((headgear _player) == 'SOCOMD_Cap_HS') and (alive _player)";
				statement = "[_player , 'SOCOMD_Cap_HS_Rev'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Cap_HS_Straighten {
				displayName = "Straighten Cap";
				condition = "((headgear _player) == 'SOCOMD_Cap_HS_Rev') and (alive _player)";
				statement = "[_player , 'SOCOMD_Cap_HS'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//SWAP BEANIES
			class SOCOMD_Helmet_BeanieTan {
				displayName = "Switch to Tan Beanie";
				condition = "((headgear _player) == 'VSM_Beanie_black') and (alive _player)";
				statement = "[_player , 'VSM_Beanie_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Helmet_BeanieBlack {
				displayName = "Switch to Black Beanie";
				condition = "((headgear _player) == 'VSM_Beanie_tan') and (alive _player)";
				statement = "[_player , 'VSM_Beanie_black'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Helmet_Rotary {
				displayName = "Switch to Rotary Helmet";
				condition = "((headgear _player) == 'SOCOMD_FixedWing_Pilot_helmet') and (alive _player)";
				statement = "[_player , 'SOCOMD_Pilot_helmet'] call SOCOMD_fnc_Action_ReplaceHeadgear;";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			//GROUND CREW VESTS
			class SOCOMD_GroundCrewVest_ChangeColour {
				displayName = "Switch Vest Colour";
				condition = "([_player] call SOCOMD_fnc_ActionCondition_CanSwitchGroundCrewVest) and (alive _player)";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};

				class SOCOMD_GroundCrewVest_White {
					displayName = "White";
					condition = "([_player] call SOCOMD_fnc_ActionCondition_CanSwitchGroundCrewVest) and (alive _player)";
					statement = "[_player , 'CUP_V_B_LHDVest_White', 'CUP_H_Navy_CrewHelmet_White'] call SOCOMD_fnc_Action_ReplaceCrewColours;";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_GroundCrewVest_Blue {
					displayName = "Blue";
					condition = "([_player] call SOCOMD_fnc_ActionCondition_CanSwitchGroundCrewVest) and (alive _player)";
					statement = "[_player , 'CUP_V_B_LHDVest_Blue', 'CUP_H_Navy_CrewHelmet_Blue'] call SOCOMD_fnc_Action_ReplaceCrewColours;";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_GroundCrewVest_Brown {
					displayName = "Brown";
					condition = "([_player] call SOCOMD_fnc_ActionCondition_CanSwitchGroundCrewVest) and (alive _player)";
					statement = "[_player , 'CUP_V_B_LHDVest_Brown', 'CUP_H_Navy_CrewHelmet_Brown'] call SOCOMD_fnc_Action_ReplaceCrewColours;";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_GroundCrewVest_Green {
					displayName = "Green";
					condition = "([_player] call SOCOMD_fnc_ActionCondition_CanSwitchGroundCrewVest) and (alive _player)";
					statement = "[_player , 'CUP_V_B_LHDVest_Green', 'CUP_H_Navy_CrewHelmet_Green'] call SOCOMD_fnc_Action_ReplaceCrewColours;";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_GroundCrewVest_Red {
					displayName = "Red";
					condition = "([_player] call SOCOMD_fnc_ActionCondition_CanSwitchGroundCrewVest) and (alive _player)";
					statement = "[_player , 'CUP_V_B_LHDVest_Red', 'CUP_H_Navy_CrewHelmet_Red'] call SOCOMD_fnc_Action_ReplaceCrewColours;";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_GroundCrewVest_Violet {
					displayName = "Violet";
					condition = "([_player] call SOCOMD_fnc_ActionCondition_CanSwitchGroundCrewVest) and (alive _player)";
					statement = "[_player , 'CUP_V_B_LHDVest_Violet', 'CUP_H_Navy_CrewHelmet_Violet'] call SOCOMD_fnc_Action_ReplaceCrewColours;";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_GroundCrewVest_Yellow {
					displayName = "Yellow";
					condition = "([_player] call SOCOMD_fnc_ActionCondition_CanSwitchGroundCrewVest) and (alive _player)";
					statement = "[_player , 'CUP_V_B_LHDVest_Yellow', 'CUP_H_Navy_CrewHelmet_Yellow'] call SOCOMD_fnc_Action_ReplaceCrewColours;";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
			};
		};
	};
};