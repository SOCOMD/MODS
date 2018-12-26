//Vanilla
class arifle_SPAR_01_GL_blk_F; //Using CBA_556x45_STANAG
class arifle_SPAR_01_blk_F; //Using CBA_556x45_STANA
class LMG_03_F; //Using CBA_556x45_MINIMI
class arifle_SPAR_03_blk_F; //Using CBA_762x51_HK417

class LRR_base_F;
//Using SOCOMD_408_MAG
class srifle_LRR_F : LRR_base_F {
	magazineWell[] = {"SOCOMD_408_MAG"};
	mass=60;
	allowedSlots[]={901}; // 701 = vest, 801 = uniform, 901 = backpack
};

class SMG_05_base_F;
//Using CBA_9x19_MP5
class SMG_05_F : SMG_05_base_F {
	magazineWell[] = {"CBA_9x19_MP5"};
};
