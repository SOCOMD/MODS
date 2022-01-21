
class CfgPatches {
    class PH_TacReady {
        name= "Patch's Tactical Position Ready";
        author= "Patch & LAxemann";
        authors[] = {"Patch", "LAxemann"};
        url = "http://steamcommunity.com/profiles/76561198014274200/";
        version = "1.3.5";
        requiredAddons[]= {
            "A3_Functions_F",
            "A3_Anims_F"
        };
        units[] = {};
        weapons[] = {};
        worlds[] = {};
    };
};
class CfgFunctions{
    class PH_INIT {
        tag = "PH_INIT";
        class script {
            file = "\z\socomd\addons\ph_tacready\script";
            class PH_Init {
                postInit = 1;
            };
            class PH_switchGesture{};
            class PH_wallAvoidance{};
        };
    };
};

class CfgMovesBasic {
    class default;
    class DefaultDie;
    class ManActions{
        ph_high_ready[]= {
            "ph_high_ready",
            "gesture"
        };
        ph_high_ready_2[]= {
            "ph_high_ready_2",
            "gesture"
        };
        ph_low_ready[]= {
            "ph_low_ready",
            "gesture"
        };
        ph_pistol_high_ready[]= {
            "ph_pistol_high_ready",
            "gesture"
        };
        ph_pistol_low_ready[]= {
            "ph_pistol_low_ready",
            "gesture"
        };
        ph_empty_ready[]= {
            "ph_empty_ready",
            "gesture"
        };
    };
};

class CfgGesturesMale {
    class default;
    class States {
        class ph_high_ready: default {
            file="\z\socomd\addons\ph_tacready\anim\PH_HighReady.rtm";
            looped=1;
            speed=9.9999997e-006;
            mask="handsWeapon";
            canPullTrigger=0;
            headBobMode=2;
            canReload=0;
            terminal=0;
            preload=1;
            disableWeapons=1;
            disableWeaponsLong=1;
            enableBinocular = 0;
            enableMissile = 0;
            onLadder = 0;
            showHandGun = 0;
            showWeaponAim = 0;
            showItemInHand = 1;
            showItemInRightHand = 0;
            headBobStrength=0.2;
            rightHandIKCurve[]={1};
            leftHandIKCurve[]={1};
        };
        class ph_high_ready_2: default {
            file="\z\socomd\addons\ph_tacready\anim\PH_HighReady_2.rtm";
            looped=1;
            speed=9.9999997e-006;
            mask="handsWeapon";
            canPullTrigger=0;
            headBobMode=2;
            canReload=0;
            terminal=0;
            preload=1;
            disableWeapons=1;
            disableWeaponsLong=1;
            enableBinocular = 0;
            enableMissile = 0;
            onLadder = 0;
            showHandGun = 0;
            showWeaponAim = 0;
            showItemInHand = 1;
            showItemInRightHand = 0;
            headBobStrength=0.2;
            rightHandIKCurve[]={1};
            leftHandIKCurve[]={1};
        };
        class ph_low_ready: default {
            file="\z\socomd\addons\ph_tacready\anim\PH_LowReady.rtm";
            looped=1;
            speed=9.9999997e-006;
            mask="handsWeapon";
            disableWeapons=1;
            disableWeaponsLong=1;
            weaponLowered=0;
            showWeaponAim=0;
            showHandGun=0;
            canPullTrigger=0;
            canReload=1;
            terminal=0;
            limitGunMovement=1;
            preload=1;
            headBobMode=1;
            headBobStrength=0.001;
            interpolateTo[]={};
        };
        class ph_pistol_high_ready: default {
            file="\z\socomd\addons\ph_tacready\anim\Pistol_High_Ready_Position.rtm";
			canPullTrigger = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			canReload = 0;
			enableBinocular = 0;
			enableMissile = 0;
			headBobMode = 2;
			headBobStrength = 0;
			onLadder = 0;
			showHandGun = 0;
			looped = 1;
			preload = 1;
			showItemInHand = 1;
			showItemInRightHand = 0;
			showWeaponAim = 0;
			terminal = 0;
			rightHandIKCurve[] = {0};
			leftHandIKCurve[] = {0};
			speed = 1;
			mask = "handsWeapon_pst";
        };
        class ph_pistol_low_ready: ph_pistol_high_ready {
            file="\z\socomd\addons\ph_tacready\anim\Pistol_Low_Ready_Position.rtm";
        };
        class ph_empty_ready: default {
            file="";
            looped=0;
            speed=3;
            mask="handsWeapon";
            canPullTrigger=1;
            headBobMode=2;
            canReload=1;
            terminal=0;
            preload=1;
            disableWeapons=0;
            disableWeaponsLong=0;
            enableBinocular = 0;
            enableMissile = 0;
            onLadder = 0;
            showHandGun = 0;
            showWeaponAim = 0;
            showItemInHand = 1;
            showItemInRightHand = 0;
            headBobStrength=0.2;
            rightHandIKCurve[]={1};
            leftHandIKCurve[]={1};
        };
    };
};
class cfgMods
{
    author="Patch";
    timepacked="1551830521";
};