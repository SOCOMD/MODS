class CfgAmmo {
	class BulletBase;
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

	// littlebird ammo
	class CUP_B_762x51_Tracer_Red;
	class CUP_B_762x51_Tracer_Red_Splash : CUP_B_762x51_Tracer_Red {
		hit=2.5;
		indirectHit=1.75;
		indirectHitRange=2;
	};
	#include "ammo\CUP_Sh_PG15V.hpp"
	// BTR and BDRM primary
	class CUP_B_145x115_AP_Green_Tracer : BulletBase {
		cost = 1; // was 22
	};
};