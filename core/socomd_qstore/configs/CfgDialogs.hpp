class SOCOMD_DisplayQStore {
	idd = -1;
	movingEnabled = false;
	
	class controlsBackground {

	};

	class objects {

	};

	class controls {
		class CtrlCloseButton : RscButton {
			RECT(REL_X(1),0,PX_X(48),PX_Y(48),1,1)
			type = CT_BUTTON;
			

			text = "X";
			colorBackground[] = {0.95,0.33,0.33,1.0};
			colorText[] = {1,1,1,1};

			action = "closeDialog 0";
		};

		class CtrlLoadoutBackground : RscText {
			RECT_FILL_H(0,PX_X(410), 0)

			text = "";
			colorBackground[] = {0,0,0,0.25};
			colorText[] = {0,0,0,0};
		};

		class CtrlLoadoutSelectionRole {
			RECT(PX_X(32),PX_Y(32),PX_X(346),PX_Y(330),0,1)

			idc = -1;
			type = CT_TOOLBOX;
			style = ST_PICTURE + ST_CENTER + ST_KEEP_ASPECT_RATIO;

			colorText[] = {1, 1, 1, 0.25};
			colorTextSelect[] = {0, 0.16, 0.35, 1};
			colorSelectedBg[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0.5};
			font = "RobotoCondensed";
			sizeEx = 0.04;
			columns = 4;
			rows = 4;

			strings[] = {};
			tooltips[] = {};
			values[] = {};

			onLoad = "_this call SOCOMD_QStore_fnc_RoleOnLoad";
			onToolBoxSelChanged = "_this call SOCOMD_QStore_fnc_RoleOnSelected";
		};

		class CtrlLoadoutSelectionHeadgearLabel : RscText {
			RECT(PX_X(32),PX_Y(400),PX_X(346),PX_Y(28),0,1)
			idc = -1;
			text = "Headgear";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
		};

		class CtrlLoadoutSelectionHeadgearCombo : RscCombo {
			RECT(PX_X(32),PX_Y(430),PX_X(346),PX_Y(32),0,1)
			idc = 101;
			sizeEx = PX_Y(32);
			rowHeight = PX_Y(32);
			wholeHeight = 6 * PX_Y(32);

			onLoad = "_this call SOCOMD_QStore_fnc_HeadgearOnLoad";
			onLBSelChanged = "_this call SOCOMD_QStore_fnc_HeadgearOnSelected";
		};
	};
};