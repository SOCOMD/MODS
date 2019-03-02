class CfgAmmo {
	class BulletBase;
	class MissileBase;
	class SmokeShell;

	class B_9x21_Ball: BulletBase {	
		hit = 8.5;
	};

	class HLC_300WM_FMJ: BulletBase {
		hit = 25;
	};
	
	class G_40mm_Smoke: SmokeShell {
		simulation = "shotSmoke";
		deflectionSlowDown = 0;
	};
	
	class M_Scalpel_AT : MissileBase {
		//Empty
	};

	//Parents: "M_Scalpel_AT","MissileBase","MissileCore","Default"
	class ACE_Hellfire_AGM114K : M_Scalpel_AT {
		hit = 9001;
	};

	//Parents: "MissileBase","MissileCore","Default"
	class CUP_M_Javelin_AT : MissileBase {
		hit = 9001;
	};
};