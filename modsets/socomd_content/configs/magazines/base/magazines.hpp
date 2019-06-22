//SMA
class SMA_30Rnd_556x45_M855A1;
class SMA_30Rnd_556x45_M855A1_Tracer;
class SMA_150Rnd_762_M80A1;

//HLC
class hlc_5rnd_300WM_FMJ_AWM;

class Barret_mag;
class Recon_Barret_mag : Barret_mag {
    count = 5;
};
class HandGrenade: CA_Magazine
{
};
class SOCOMD_Grenade : HandGrenade {
    ammo = "SOCOMD_Grenade_Ammo"
    initspeed = 10
    mass = 20

	scope=2;
		displayName="SOCOMD Grenade";
		displayNameShort="SOCOMD Grenade";
		descriptionShort="SOCOMD Grenade";
};