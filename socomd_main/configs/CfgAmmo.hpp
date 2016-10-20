class CfgAmmo
{
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
};