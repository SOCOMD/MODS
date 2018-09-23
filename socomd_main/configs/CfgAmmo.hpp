class CfgAmmo
{
	class BulletBase;
	class B_9x21_Ball: BulletBase
	{
		hit = 8.5;// MP5 Buff
	};
	class HLC_300WM_FMJ: BulletBase
	{
		hit = 25;// MP5 Buff
	};
};
/*{
	class Bulletbase;
	class LWIRCM_Ammo_MELB : Bulletbase
	{
		effectsSmoke = "EmptyEffect";
	};
	
	class B_127x99_Ball;
	class SOCOMD_127x99_dem_Ball : B_127x99_Ball 
	{
		hit = 100;
		indirectHit = 7;
		indirectHitRange = 1;
		explosive = 0.1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		muzzleEffect = "BIS_Effects_HeavySniper";
		timeToLive=10;
		airFriction=-0.00057503;
		typicalSpeed=900;
	};
};*/