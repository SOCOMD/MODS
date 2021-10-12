class BulletBase;
class B_300WM_Ball: BulletBase
{
    hit=42;
    indirectHit=0;
    indirectHitRange=0;
    cartridge="FxCartridge_338_Ball";
    audibleFire=80;
    visibleFireTime=3;
    dangerRadiusBulletClose=10;
    dangerRadiusHit=14;
    suppressionRadiusBulletClose=8;
    suppressionRadiusHit=10;
    cost=6;
    airLock=1;
    caliber=1.8;
    typicalSpeed=990;
    timeToLive=10;
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    tracerScale=1.2;
    tracerStartTime=0.075000003;
    tracerEndTime=1;
    airFriction=-0.00060000003;
    class CamShakeExplode
    {
        power="(10^0.5)";
        duration="((round (10^0.5))*0.2 max 0.2)";
        frequency=20;
        distance="((10^0.5)*3)";
    };
    class CamShakeHit
    {
        power=10;
        duration="((round (10^0.25))*0.2 max 0.2)";
        frequency=20;
        distance=1;
    };
};
class B_338LM_Ball: BulletBase
{
    hit=57;
    indirectHit=0;
    indirectHitRange=0;
    cartridge="FxCartridge_338_Ball";
    visibleFire=5;
    audibleFire=120;
    visibleFireTime=3;
    cost=7;
    airLock=1;
    caliber=2.0999999;
    typicalSpeed=1005;
    timeToLive=10;
    model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    tracerScale=1.2;
    tracerStartTime=0.075000003;
    tracerEndTime=1;
    airFriction=-0.00044999999;
    class CamShakeExplode
    {
        power="(10^0.5)";
        duration="((round (10^0.5))*0.2 max 0.2)";
        frequency=20;
        distance="((10^0.5)*3)";
    };
    class CamShakeHit
    {
        power=10;
        duration="((round (10^0.25))*0.2 max 0.2)";
        frequency=20;
        distance=1;
    };
};
class B_338LM_APDS: B_338LM_Ball
{
    hit=80;
    indirectHit=0;
    indirectHitRange=0;
    caliber=2.7;
    deflecting=10;
    typicalSpeed=1120;
    airFriction=-0.00022;
    cost=15;
    class CamShakeExplode
    {
        power="(20^0.5)";
        duration="((round (20^0.5))*0.2 max 0.2)";
        frequency=20;
        distance="((20^0.5)*3)";
    };
    class CamShakeHit
    {
        power=20;
        duration="((round (20^0.25))*0.2 max 0.2)";
        frequency=20;
        distance=1;
    };
};
class B_12Gauge_Pellets_Submunition;
class CUP_B_12Gauge_Pellets: B_12Gauge_Pellets_Submunition
{
    cartridge = "FxCartridge_slug";
};