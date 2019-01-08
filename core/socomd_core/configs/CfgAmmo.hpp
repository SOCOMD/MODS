class CfgAmmo {
	class BulletBase;

	class B_9x21_Ball: BulletBase {	
		hit = 8.5;
	};

	class HLC_300WM_FMJ: BulletBase {
		hit = 25;
	};
	class SmokeShell;
	class G_40mm_Smoke: SmokeShell {
		simulation = "shotSmoke";
		deflectionSlowDown = 0;
	};
};