class M_Titan_AA;
class CUP_M_9K38_Igla_AA:M_Titan_AA{
    cmImmunity = 0.85;
};
class MissileBase;
class CUP_M_Stinger_AA : MissileBase{
    cmImmunity = 0.8;
};    
class SOCOMD_M72_AD : MissileBase {
    hit = 700;
    indirectHit = 30;
    indirectHitRange = 10;
    model = "\CUP\Weapons\CUP_Weapons_Ammunition\PG7VM\CUP_PG7VM_fly.p3d";
    cost = 2000;
    maxSpeed = 160;    // max speed on level road, km/h
    thrustTime = 1;
    thrust = 550;
    visibleFire = 24;    // how much is visible when this weapon is fired
    audibleFire = 16;
    CraterEffects = "ATMissileCrater";
    explosionEffects = "ATMissileExplosion";
    effectsMissileInit = "RocketBackEffectsRPG";
    effectsMissile = "missile3";
    
    class CamShakeFire {
        power = 10;
        duration = 0.5;
        frequency = 20;
        distance = 30;
    };
    
    class CamShakePlayerFire {
        power = 5;
        duration = 0.1;
        frequency = 20;
    };
};