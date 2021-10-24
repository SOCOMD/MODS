    
class ItemMap: Default{
    socomd_arsenal_hide = 1;
};

class ExtrasBase: ItemMap {
    scope = 0;
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
    scopeArsenal = 2;
    picture = "";
};
class extras_spare_squad_ammo: extras_none{
    displayName = "Squad Ammo";
    bag[] = {
        {ITEM_MAGAZINE_556, 4},
        {SOCOMD_Item_Magazine_762x51_20Rnd, 2},
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
        {SOCOMD_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,2}
    };
};
class extras_at_assistant_mixed: extras_none{
    displayName = "AT Assistant (mixed)";
    bag[] = {
        {tf47_m3maaws_HEAT,1},
        {tf47_m3maaws_HE,1}
    };
};
class extras_at_assistant_heat: extras_none{
    displayName = "AT Assistant (2x HEAT)";
    bag[] = {
        {tf47_m3maaws_HEAT,2}
    };
};
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