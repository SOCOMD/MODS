    
class ItemMap: Default{
    socomd_arsenal_hide = 1;
};

class ExtrasBase: ItemMap {
    scope = 0;
    launcherAmmo = 0;
    socomd_arsenal_hide = 0;
    uniform[] = {
    };
    vest[] = {
    };
    bag[] = {
    };
};
class extras_none : ExtrasBase{
    displayName = "No Spare Ammo";
    scope=2;
    scopeArsenal = 1;
    picture = "";
};
class extras_spare_squad_ammo: extras_none{
    displayName = "Squad Ammo";
    bag[] = {
        {ITEM_MAGAZINE_556, 4},
        {ITEM_MAGAZINE_762, 2},
        {ITEM_MAGAZINE_556_BELT,1}
    };
};
class extras_mg_support: extras_none{
    displayName = "Minimi Ammo";
    bag[] = {
        {ITEM_MAGAZINE_556_BELT,3}
    };
};
class extras_medium_mg_support: extras_none{
    displayName = "Maximi Ammo";
    bag[] = {
        {ITEM_MAGAZINE_762_BELT,3}
    };
};
class extras_heavy_mg_support: extras_none{
    displayName = "MAG58 Assitant";
    bag[] = {
        {ITEM_MAGAZINE_GPMG_BELT,2}
    };
};
class extras_at_assistant_mixed: extras_none{
    displayName = "AT Assistant (mixed)";
    bag[] = {
        {rhs_mag_maaws_HEAT,1},
        {rhs_mag_maaws_HE,1}
    };
};
class extras_at_assistant_heat: extras_none{
    displayName = "AT Assistant (2x HEAT)";
    bag[] = {
        {rhs_mag_maaws_HEAT,2}
    };
};
class extras_at_mixed: extras_none{
    displayName = "Mixed Ammo (1x HE, 1x HEAT)";
    launcherAmmo = 1;
    bag[] = {
        {rhs_mag_maaws_HEAT,1},
        {rhs_mag_maaws_HE,1}
    };
};
class extras_at_heat: extras_at_mixed{
    displayName = "AT (2x HEAT)";
    bag[] = {
        {rhs_mag_maaws_HEAT,2}
    };
};
class extras_at_he: extras_at_mixed{
    displayName = "AP (2x HE)";
    bag[] = {
        {rhs_mag_maaws_HE,2}
    };
};
class extras_rangefinder: extras_none{
    displayName = "Rangefinder";
    binocular = ACE_Vector;
};
class extras_laser_designator: extras_none{
    displayName = "Laser Designator Batteries";
    bag[] = {
        {Laserbatteries,2}
    };
};
/*
class extras_sso_spare_squad_ammo: extras_none{
    displayName = "Squad Ammo";
    bag[] = {
        {CUP_30Rnd_545x39_AK74M_camo_M, 4},
        {CUP_10Rnd_762x54_SVD_M, 4},
        {CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,1}
    };
};
class extras_sso_mg_support: extras_none{
    displayName = "RPK Ammo";
    bag[] = {
        {CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M,3}
    };
};
class extras_sso_heavy_mg_support: extras_none{
    displayName = "PKP Assitant";
    bag[] = {
        {CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,2}
    };
};
class extras_sso_at_assistant_heat: extras_none{
    displayName = "3x HEAT 1x HE Frag";
    bag[] = {
        {CUP_PG7VM_M,3},
        {CUP_OG7_M,1}
    };
};
class extras_sso_at_assistant_mixed: extras_none{
    displayName = "2x HEAT 2x HE Frag";
    bag[] = {
        {CUP_PG7VM_M,2},
        {CUP_OG7_M,2}
    };
};
*/