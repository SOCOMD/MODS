class CfgAmmo {
	class BulletBase;
	// used in zu23
	class CUP_B_23mm_AA : BulletBase {
		// allowAgainstInfantry = 1; // set this if you want AA to not be able to murder people.
		timeToLive = 30; // default = 4
		tracerEndTime = 24; // default 1.85
		audibleFire = 150; // default 32
		typicalSpeed = 1700; // default 900
		// this combined with magazine speed changes, makes this ammo hearable cracks at 2km
		//simulation = "shotBullet";
		//weaponType = "cannon"; // default: default
		//soundSetBulletFly[] = {"bulletFlyBy_SoundSet"}; // this is default
		// that soundset uses soundShaders[] = {"BulletFlyBy_SoundShader"}; // has range = 30;
		// samples[] = {["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11",1],["A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12",1]};
		//supersonicCrackFar[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle",3.16228,1,200};
		//soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet","bulletSonicCrackTail_SoundSet"};
		//soundSetSonicCrack[] = {};
		//supersonicCrackFar[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_far",6.32228,2,400};
	};
	class MissileBase;
	class DAGR_Ammo_MELB : MissileBase {
		// https://ace3mod.com/wiki/framework/missile-guidance-framework.html
		manualControl = 0;  // Turn off vanilla crosshair guidance
		laserLock = 0;
		thrustTime = 2.0;
		timeToLive = 20;
		class ace_missileguidance {
            enabled = 1; // Enable missile guidance (0-disabled, 1-enabled)

            minDeflection = 0.00025;  // Minimum flap deflection for guidance
            maxDeflection = 0.001;  // Maximum flap deflection for guidance
            incDeflection = 0.0005;  // The increment in which deflection adjusts

            canVanillaLock = 0;  // Enable vanilla lock, only applicable to non-cadet modes, 'recruit' always uses vanilla locking (0-disabled, 1-enabled)

            defaultSeekerType = "SALH";  // Default seeker type
            seekerTypes[] = {"SALH", "LIDAR", "SARH", "Optic", "GPS", "SACLOS", "MCLOS"};  // Seeker types available

            defaultSeekerLockMode = "LOAL";  // Default seeker lock mode
            seekerLockModes[] = {"LOAL", "LOBL"};  // Seeker lock modes available

            seekerAngle = 90;  // Angle in front of the missile which can be searched
            seekerAccuracy = 1;  // Seeker accuracy multiplier

            seekerMinRange = 1;  // Minimum range from the missile which the seeker can visually search
            seekerMaxRange = 1600;  // Maximum from the missile which the seeker can visually search

            defaultAttackProfile = "DIR";  // Default attack profile
            attackProfiles[] = {"DIR"};  // Attack profiles available
        };
		class Components {
			class SensorManagementComponent {
				class Components {
					class IRSensorComponent : SensorTemplateIR {
						angleRangeHorizontal = 45; // set
						angleRangeVertical = 35; // set
						maxTrackableSpeed = 55; // set
					};
					class LaserSensorComponent : SensorTemplateLaser {
						angleRangeHorizontal = 90;
						angleRangeVertical = 70;
						maxTrackableSpeed = 55;
					};
				};
			};
		};
	};

	class CUP_B_762x51_Tracer_Red;
	class CUP_B_762x51_Tracer_Red_Splash : CUP_B_762x51_Tracer_Red {
		hit = 12.0;
		indirectHit = 4.0;
		indirectHitRange = 2.0;
	};
};