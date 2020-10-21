
class BettIR_Config{
	class CompatibleAttachments
	{
		class __base_rightSiderailPointer
		{
			offset[] = {0.05,0.28,0.06};
		};
		class __base_leftSiderailPointer
		{
			offset[] = {-0.05,0.28,0.06};
		};
		class __base_topRailPointer
		{
			offset[] = {0,0.28,0.12};
		};
		class __base_bottomRailPointer
		{
			offset[] = {0,0.28,-0.06};
		};
		// bottom
        class M600_B_black:__base_bottomRailPointer{};
        class M300_B_black:__base_bottomRailPointer{}; 
        class M600_B_tan:__base_bottomRailPointer{};
        class M300_B_tan:__base_bottomRailPointer{}; 

		//  left 
		class WMLX_L_tan:__base_leftSiderailPointer{};
        class M300_L_tan:__base_leftSiderailPointer{};
        class WMLX_L_black:__base_leftSiderailPointer{};
        class M300_L_black:__base_leftSiderailPointer{};
        class M300_R_tan:__base_leftSiderailPointer{};
        class M600_L_tan:__base_leftSiderailPointer{};
        class M600_R_tan:__base_leftSiderailPointer{};
        class M300_R_black:__base_leftSiderailPointer{};
        class M600_L_black:__base_leftSiderailPointer{};
        class M600_R_black:__base_leftSiderailPointer{};

		// top 
        class WMLX_T_black:__base_topRailPointer{};
        class WMLX_T_tan:__base_topRailPointer{};
        class PEQ_T_tan:__base_topRailPointer{};
        class WMLX_L_PEQ_T_tan:__base_topRailPointer{};
        class M300_B_PEQ_T_tan:__base_topRailPointer{};
        class M600_B_PEQ_T_tan:__base_topRailPointer{};
        class WMLX_L_PEQ_T_IR_tan:__base_topRailPointer{};
        class M300_B_PEQ_T_IR_tan:__base_topRailPointer{};
        class M600_B_PEQ_T_IR_tan:__base_topRailPointer{};
        class PEQ_T_black:__base_topRailPointer{};
        class WMLX_L_PEQ_T_black:__base_topRailPointer{};
        class M300_B_PEQ_T_black:__base_topRailPointer{};
        class M600_B_PEQ_T_black :__base_topRailPointer{}	
        class WMLX_L_PEQ_T_IR_black:__base_topRailPointer{};
        class M300_B_PEQ_T_IR_black:__base_topRailPointer{};
        class M600_B_PEQ_T_IR_black :__base_topRailPointer{}	

		// right
        class PEQ_R_tan:__base_rightSiderailPointer{};
        class WMLX_T_PEQ_R_tan:__base_rightSiderailPointer{};
        class WMLX_L_PEQ_R_tan:__base_rightSiderailPointer{};
        class M300_L_PEQ_R_tan:__base_rightSiderailPointer{};
        class M600_L_PEQ_R_tan:__base_rightSiderailPointer{};
        class WMLX_T_PEQ_R_IR_tan:__base_rightSiderailPointer{};
        class WMLX_L_PEQ_R_IR_tan:__base_rightSiderailPointer{};
        class M300_L_PEQ_R_IR_tan:__base_rightSiderailPointer{};
        class M600_L_PEQ_R_IR_tan:__base_rightSiderailPointer{};
        class PEQ_R_black:__base_rightSiderailPointer{};
        class WMLX_T_PEQ_R_black:__base_rightSiderailPointer{};
        class WMLX_L_PEQ_R_black:__base_rightSiderailPointer{};
        class M300_L_PEQ_R_black:__base_rightSiderailPointer{};
        class M600_L_PEQ_R_black:__base_rightSiderailPointer{};
        class WMLX_T_PEQ_R_IR_black:__base_rightSiderailPointer{};
        class WMLX_L_PEQ_R_IR_black:__base_rightSiderailPointer{};
        class M300_L_PEQ_R_IR_black:__base_rightSiderailPointer{};
        class M600_L_PEQ_R_IR_black:__base_rightSiderailPointer{};
	}
	class CompatibleNightvisionGoggles
	{
		class __base_NVG
		{
			offset[] = {0,0.15,0.14};
		};
		class SOCOMD_GPNVG18b_BLK_F: __base_NVG{};
		class SOCOMD_NVG_GPNVG_GR_black: __base_NVG{};
		class SOCOMD_NVG_GPNVG_WP_black: __base_NVG{};
		class SOCOMD_NVG_GR: __base_NVG{};
		class SOCOMD_NVG: __base_NVG{};
		class zeus_earpiece: __base_NVG{};
	}
}