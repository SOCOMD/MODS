class CfgAmmo {
	class BulletBase;
	class LWIRCM_Ammo_MELB : BulletBase {
		timeToLive = 10;
		tracerStartTime = 0.00000001;
		tracerEndTime = 7;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.3;
	}
	class MissileBase;
	class DAGR_Ammo_MELB : MissileBase {
		ace_rearm_caliber = 80;
		hit = 300; // default 300;
		indirectHitRange = 6; // default 6
		indirectHit = 150; // default 50
	};
}