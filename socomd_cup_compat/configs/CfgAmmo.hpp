class CfgAmmo {
	class BulletBase;
	// used in zu23
	class CUP_B_23mm_AA : BulletBase {
		// allowAgainstInfantry = 1; // set this if you want AA to not be able to murder people.
		timeToLive = 30; // default = 4
		tracerEndTime = 24; // default 1.85
		audibleFire = 32; // default 32
		typicalSpeed = 900; // default 900
		soundSetBulletFly[] = {"bulletFlyBy_SoundSet"}; // this is default
		// that soundset uses soundShaders[] = {"BulletFlyBy_SoundShader"}; // has range = 30;
		// samples[] = {["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12",1]};
	};
};