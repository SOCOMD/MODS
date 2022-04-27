    
class socomd_defib_AED;
class ACE_chestSeal;
class ACE_advancedAirway;
class ACE_basicAirway;

class kat_AED: socomd_defib_AED {
	scope = 1;
}
class kat_chestSeal: ACE_chestSeal {
	scope = 1;
};
class kat_larynx: ACE_advancedAirway {
	scope = 1;
};
class kat_guedel: ACE_basicAirway {
	scope = 1;
};