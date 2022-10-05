    
class SOCOMD_booboo: ACE_ItemCore {
    displayName="Blue Force Gear Boo Boo Kit";
    scope = 2;
    descriptionShort="Contains: Wiggles bandaids, iodine, dental hygiene, elctrolytes, jelly beans and more";
    descriptionUse="Contains: Wiggles bandaids, iodine, dental hygiene, elctrolytes, jelly beans and more";
    picture="\z\socomd\addons\data\icon\booboo_ca.paa";
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass=0.01;
    };
};
class SOCOMD_cascard: SOCOMD_booboo {
    scope = 2;
    displayName="TACMED Casualty Cards";
    picture="\z\socomd\addons\data\icon\cascard_ca.paa";
    descriptionShort="";
    descriptionUse="";
};
class SOCOMD_nargloves: SOCOMD_booboo {
    scope = 2;
    displayName="NAR Nitrile Gloves (Sand)";
    picture="\z\socomd\addons\data\icon\nargloves_ca.paa";
    descriptionShort="";
    descriptionUse="";
};
class SOCOMD_shears: SOCOMD_booboo {
    scope = 2;
    displayName="Trauma Shears";
    picture="\z\socomd\addons\data\icon\shears_ca.paa";
    descriptionShort="";
    descriptionUse="";
};
class SOCOMD_notes: SOCOMD_booboo {
    scope = 2;
    displayName="Notebook";
    picture="\z\socomd\addons\data\icon\notes_ca.paa";
    descriptionShort="For recording patient details for handover";
    descriptionUse="For recording patient details for handover";
};
class SOCOMD_triangleban: SOCOMD_booboo {
    scope = 2;
    displayName="NAR Triangle Bandage";
    picture="\z\socomd\addons\data\icon\triangleban_ca.paa";
    descriptionShort="";
    descriptionUse="";
};
class SOCOMD_NDC: SOCOMD_booboo {
    scope = 2;
    displayName="ARS Needle for decompression";
    descriptionShort="Made by North American Rescue. 14 gauge needle for performing emergency chest decompression and drainage";
    descriptionUse="Made by North American Rescue. 14 gauge needle for performing emergency chest decompression and drainage";
    picture="\z\socomd\addons\data\icon\NDC.paa";
};
class ACE_bodyBag: ACE_ItemCore {
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
    };