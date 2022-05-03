#include "BIS_AddonInfo.hpp"
class CfgPatches{
    class sfx_socomd{
        requiredVersion=1.60;
        requiredAddons[]={"A3_Functions_F"};
        units[]={"socomd_sfx_air_raid","socomd_sfx_alarm","socomd_sfx_alarm_facility","socomd_sfx_dist_airraid","socomd_sfx_amb_city","socomd_sfx_arab_market","socomd_sfx_distantwarzone","socomd_sfx_firefight","socomd_sfx_policesirens_distant","socomd_sfx_riot","socomd_sfx_warzone_close","socomd_sfx_warzone_distant","socomd_sfx_warzone_distant_withsiren","socomd_sfx_warzone_distant2","socomd_sfx_children_laughing1","socomd_sfx_children_ratr","socomd_sfx_demon_roar","socomd_sfx_girl_whispers_1","socomd_sfx_laugh_demonic","socomd_sfx_man_scream","zombiedoor","zombies","socomd_sfx_zombie_group_roaming","socomd_sfx_80s_mix_1","socomd_sfx_80s_mix_2","socomd_sfx_bandit_radio","socomd_sfx_iraq_music","socomd_sfx_lastpost","socomd_sfx_reveille","socomd_sfx_ME_prayermegaphone","socomd_sfx_radio_northkorea","socomd_sfx_soviet_mix_1","socomd_sfx_vietnam_mix_1","socomd_sfx_vietnam_mix_2","socomd_sfx_ambush","socomd_sfx_emergency","socomd_sfx_extract1","socomd_sfx_extract2","socomd_sfx_extract3","socomd_sfx_ME_radio_insurgent","socomd_sfx_support1","socomd_sfx_support2","socomd_sfx_support3","socomd_sfx_support4","socomd_sfx_support5","socomd_sfx_thunderclap","socomd_sfx_thunderclap","socomd_sfx_US_military_radiochatter"};
        weapons[]={};
    };
};


class CfgSFX{
    class socomd_sfx{
        empty[]={"",0,0,0,0,0,0,0};
        sounds[]={"socomd_sfxsound"};
    };
    class socomd_sfx_air_raid: socomd_sfx{
        name="socomd_sfx_air_raid";
        socomd_sfxsound[]={"Socomd_SFX\bin\air_raid.ogg",8,1,2000,1,1,1,0};
    };
    class socomd_sfx_alarm: socomd_sfx{
        name="socomd_sfx_alarm";
        socomd_sfxsound[]={"Socomd_SFX\bin\alarm.ogg",8,1,2000,1,1,1,0};
    };
	class socomd_sfx_alarm_facility: socomd_sfx{
        name="socomd_sfx_alarm_facility";
        socomd_sfxsound[]={"Socomd_SFX\bin\alarm_facility.ogg",7,1,2000,1,1,1,0};
    };
	class socomd_sfx_dist_airraid: socomd_sfx{
        name="socomd_sfx_dist_airraid";
        socomd_sfxsound[]={"Socomd_SFX\bin\dist_airraid.ogg",7,1,5000,1,1,1,0};
    };
	class socomd_sfx_amb_city: socomd_sfx{
        name="socomd_sfx_amb_city";
        socomd_sfxsound[]={"Socomd_SFX\bin\amb_city.ogg",5,1,1500,1,1,1,0};
    };
	class socomd_sfx_arab_market: socomd_sfx{
        name="socomd_sfx_arab_market";
        socomd_sfxsound[]={"Socomd_SFX\bin\arab_market.ogg",5,1,1500,1,1,1,0};
    };
	class socomd_sfx_distantwarzone: socomd_sfx{
        name="socomd_sfx_distantwarzone";
        socomd_sfxsound[]={"Socomd_SFX\bin\distantwarzone.ogg",6,1,5000,1,1,1,0};
    };
	class socomd_sfx_firefight: socomd_sfx{
        name="socomd_sfx_firefight";
        socomd_sfxsound[]={"Socomd_SFX\bin\firefight.ogg",6,1,5000,1,1,1,0};
    };
	class socomd_sfx_policesirens_distant: socomd_sfx{
        name="socomd_sfx_policesirens_distant";
        socomd_sfxsound[]={"Socomd_SFX\bin\policesirens_distant.ogg",5,1,1000,1,1,1,0};
    };
	class socomd_sfx_riot: socomd_sfx{
        name="socomd_sfx_riot";
        socomd_sfxsound[]={"Socomd_SFX\bin\riot.ogg",7,1,1000,1,1,1,0};
    };
	class socomd_sfx_warzone_close: socomd_sfx{
        name="socomd_sfx_warzone_close";
        socomd_sfxsound[]={"Socomd_SFX\bin\warzone_close.ogg",6,1,2000,1,1,1,0};
    };
	class socomd_sfx_warzone_distant: socomd_sfx{
        name="socomd_sfx_warzone_distant";
        socomd_sfxsound[]={"Socomd_SFX\bin\warzone_distant.ogg",7,1,5000,1,1,1,0};
    };
	class socomd_sfx_warzone_distant_withsiren: socomd_sfx{
        name="socomd_sfx_warzone_distant_withsiren";
        socomd_sfxsound[]={"Socomd_SFX\bin\warzone_distant_withsiren.ogg",7,1,5000,1,1,1,0};
    };
	class socomd_sfx_warzone_distant2: socomd_sfx{
        name="socomd_sfx_warzone_distant2";
        socomd_sfxsound[]={"Socomd_SFX\bin\warzone_distant2.ogg",6,1,5000,1,1,1,0};
    };
	class socomd_sfx_warzone_distant3: socomd_sfx{
        name="socomd_sfx_warzone_distant3";
        socomd_sfxsound[]={"Socomd_SFX\bin\warzone_distant3.ogg",7,1,5000,1,1,1,0};
    };
	class socomd_sfx_children_laughing1: socomd_sfx{
        name="socomd_sfx_children_laughing1";
        socomd_sfxsound[]={"Socomd_SFX\bin\children_laughing1.ogg",7,1,50,1,1,1,0};
    };
	class socomd_sfx_children_ratr: socomd_sfx{
        name="socomd_sfx_children_ratr";
        socomd_sfxsound[]={"Socomd_SFX\bin\children_ratr.ogg",7,1,100,1,1,1,0};
    };
	class socomd_sfx_demon_roar: socomd_sfx{
        name="socomd_sfx_demon_roar";
        socomd_sfxsound[]={"Socomd_SFX\bin\demon_roar.ogg",10,1,100,1,1,1,0};
    };
	class socomd_sfx_girl_whispers_1: socomd_sfx{
        name="socomd_sfx_girl_whispers_1";
        socomd_sfxsound[]={"Socomd_SFX\bin\girl_whispers_1.ogg",7,1,50,1,1,1,0};
    };
	class socomd_sfx_laugh_demonic: socomd_sfx{
        name="socomd_sfx_laugh_demonic";
        socomd_sfxsound[]={"Socomd_SFX\bin\laugh_demonic.ogg",10,1,100,1,1,1,0};
    };
	class socomd_sfx_man_scream: socomd_sfx{
        name="socomd_sfx_man_scream";
        socomd_sfxsound[]={"Socomd_SFX\bin\man_scream.ogg",7,1,200,1,1,1,0};
    };
	class socomd_sfx_zombiedoor: socomd_sfx{
        name="socomd_sfx_zombiedoor";
        socomd_sfxsound[]={"Socomd_SFX\bin\zombiedoor.ogg",5,1,100,1,1,1,0};
    };
	class socomd_sfx_zombies: socomd_sfx{
        name="socomd_sfx_zombies";
        socomd_sfxsound[]={"Socomd_SFX\bin\zombies.ogg",5,1,1000,1,1,1,0};
    };
	class socomd_sfx_zombie_group_roaming: socomd_sfx{
        name="socomd_sfx_zombie_group_roaming";
        socomd_sfxsound[]={"Socomd_SFX\bin\zombie_group_roaming.ogg",5,1,1000,1,1,1,0};
    };
	class socomd_sfx_80s_mix_1: socomd_sfx{
        name="socomd_sfx_80s_mix_1";
        socomd_sfxsound[]={"Socomd_SFX\bin\80s_mix_1.ogg",10,1,500,1,1,1,0};
    };
	class socomd_sfx_80s_mix_2: socomd_sfx{
        name="socomd_sfx_80s_mix_2";
        socomd_sfxsound[]={"Socomd_SFX\bin\80s_mix_2.ogg",10,1,500,1,1,1,0};
    };
	class socomd_sfx_bandit_radio: socomd_sfx{
        name="socomd_sfx_bandit_radio";
        socomd_sfxsound[]={"Socomd_SFX\bin\bandit_radio.ogg",8,1,500,1,1,1,0};
    };
	class socomd_sfx_iraq_music: socomd_sfx{
        name="socomd_sfx_iraq_music";
        socomd_sfxsound[]={"Socomd_SFX\bin\iraq_music.ogg",8,1,500,1,1,1,0};
    };
	class socomd_sfx_lastpost: socomd_sfx{
        name="socomd_sfx_lastpost";
        socomd_sfxsound[]={"Socomd_SFX\bin\lastpost.ogg",10,1,500,1,1,1,0};
    };
	class socomd_sfx_reveille: socomd_sfx{
        name="socomd_sfx_reveille";
        socomd_sfxsound[]={"Socomd_SFX\bin\reveille.ogg",10,1,500,1,1,1,0};
    };
	class socomd_sfx_soviet_mix_1: socomd_sfx{
        name="socomd_sfx_soviet_mix_1";
        socomd_sfxsound[]={"Socomd_SFX\bin\soviet_mix_1.ogg",8,1,500,1,1,1,0};
    };
	class socomd_sfx_vietnam_mix_1: socomd_sfx{
        name="socomd_sfx_vietnam_mix_1";
        socomd_sfxsound[]={"Socomd_SFX\bin\vietnam_mix_1.ogg",10,1,500,1,1,1,0};
    };
	class socomd_sfx_vietnam_mix_2: socomd_sfx{
        name="socomd_sfx_vietnam_mix_2";
        socomd_sfxsound[]={"Socomd_SFX\bin\vietnam_mix_2.ogg",10,1,500,1,1,1,0};
    };
	class socomd_sfx_ME_prayermegaphone: socomd_sfx{
        name="socomd_sfx_ME_prayermegaphone";
        socomd_sfxsound[]={"Socomd_SFX\bin\ME_prayermegaphone.ogg",7,1,700,1,1,1,0};
    };
	class socomd_sfx_radio_northkorea: socomd_sfx{
        name="socomd_sfx_radio_northkorea";
        socomd_sfxsound[]={"Socomd_SFX\bin\radio_northkorea.ogg",8,1,100,1,1,1,0};
    };
	class socomd_sfx_ambush: socomd_sfx{
        name="socomd_sfx_ambush";
        socomd_sfxsound[]={"Socomd_SFX\bin\ambush.ogg",8,1,100,1,1,1,0};
    };
	class socomd_sfx_emergency: socomd_sfx{
        name="socomd_sfx_emergency";
        socomd_sfxsound[]={"Socomd_SFX\bin\emergency.ogg",8,1,100,1,1,1,0};
    };
	class socomd_sfx_extract1: socomd_sfx{
        name="socomd_sfx_extract1";
        socomd_sfxsound[]={"Socomd_SFX\bin\extract1.ogg",8,1,100,1,1,1,0};
    };
	class socomd_sfx_extract2: socomd_sfx{
        name="socomd_sfx_extract2";
        socomd_sfxsound[]={"Socomd_SFX\bin\extract2.ogg",8,1,100,1,1,1,0};
    };
	class socomd_sfx_extract3: socomd_sfx{
        name="socomd_sfx_extract3";
        socomd_sfxsound[]={"Socomd_SFX\bin\extract3.ogg",8,1,100,1,1,1,0};
    };
	class socomd_sfx_ME_radio_insurgent: socomd_sfx{
        name="socomd_sfx_ME_radio_insurgent";
        socomd_sfxsound[]={"Socomd_SFX\bin\ME_radio_insurgent.ogg",8,1,100,1,1,1,0};
    };
	class socomd_sfx_support1: socomd_sfx{
        name="socomd_sfx_support1";
        socomd_sfxsound[]={"Socomd_SFX\bin\support1.ogg",8,1,100,1,1,1,0};
    };
	class socomd_sfx_support2: socomd_sfx{
        name="socomd_sfx_support2";
        socomd_sfxsound[]={"Socomd_SFX\bin\support2.ogg",8,1,100,1,1,1,0};
    };
	class socomd_sfx_support3: socomd_sfx{
        name="socomd_sfx_support3";
        socomd_sfxsound[]={"Socomd_SFX\bin\support3.ogg",8,1,100,1,1,1,0};
    };
	class socomd_sfx_thunderclap: socomd_sfx{
        name="socomd_sfx_thunderclap";
        socomd_sfxsound[]={"Socomd_SFX\bin\thunderclap.ogg",8,1,100,1,1,1,0};
    };
	class socomd_sfx_support4: socomd_sfx{
        name="socomd_sfx_support4";
        socomd_sfxsound[]={"Socomd_SFX\bin\support4.ogg",8,1,100,1,1,1,0};
    };
	class socomd_sfx_support5: socomd_sfx{
        name="socomd_sfx_support5";
        socomd_sfxsound[]={"Socomd_SFX\bin\support5.ogg",8,1,100,1,1,1,0};
    };
	class socomd_sfx_US_military_radiochatter: socomd_sfx{
        name="socomd_sfx_US_military_radiochatter";
        socomd_sfxsound[]={"Socomd_SFX\bin\US_military_radiochatter.ogg",8,1,100,1,1,1,0};
    };
};

class CfgVehicles{
    class ALL;
    class Sound: ALL{
        scope=0;
        author="";
        side=-1;
        animated=0;
        faction="none";
        _generalMacro="Sound";
        vehicleClass="Sounds";
        icon="iconSound";
    };
    class socomd_sfx_air_raid: Sound{
        sound = "socomd_sfx_air_raid";
        scope=2;
        displayName="(ALR) Air Raid Siren (2000m)";
    };
	class socomd_sfx_alarm: Sound{
        sound = "socomd_sfx_alarm";
        scope=2;
        displayName="(ALR) Alarm (2000m)";
    };
	class socomd_sfx_alarm_facility: Sound{
        sound = "socomd_sfx_alarm_facility";
        scope=2;
        displayName="(ALR) Alarm Facility (2000m)";
    };
	class socomd_sfx_dist_airraid: Sound{
        sound = "socomd_sfx_dist_airraid";
        scope=2;
        displayName="(ALR) Distant Air Raid Siren (5000m)";
    };
	class socomd_sfx_amb_city: Sound{
        sound = "socomd_sfx_amb_city";
        scope=2;
        displayName="(AMB) Ambiant City (1500m)";
    };
	class socomd_sfx_arab_market: Sound{
        sound = "socomd_sfx_arab_market";
        scope=2;
        displayName="(AMB) Arab Market (1500m)";
    };
	class socomd_sfx_distantwarzone: Sound{
        sound = "socomd_sfx_distantwarzone";
        scope=2;
        displayName="(AMB) Distant War Zone (5000m)";
    };
	class socomd_sfx_firefight: Sound{
        sound = "socomd_sfx_firefight";
        scope=2;
        displayName="(AMB) firefight (5000m)";
    };
	class socomd_sfx_policesirens_distant: Sound{
        sound = "socomd_sfx_policesirens_distant";
        scope=2;
        displayName="(AMB) Police Sirens Distant (1000m)";
    };
	class socomd_sfx_riot: Sound{
        sound = "socomd_sfx_riot";
        scope=2;
        displayName="(AMB) Riot (1000m)";
    };
	class socomd_sfx_warzone_close: Sound{
        sound = "socomd_sfx_warzone_close";
        scope=2;
        displayName="(AMB) Warzone Close (2000m)";
    };
	class socomd_sfx_warzone_distant_withsiren: Sound{
        sound = "socomd_sfx_warzone_distant_withsiren";
        scope=2;
        displayName="(AMB) Warzone Distant With Siren (5000m)";
    };
	class socomd_sfx_warzone_distant: Sound{
        sound = "socomd_sfx_warzone_distant";
        scope=2;
        displayName="(AMB) Warzone Distant (5000m)";
    };
	class socomd_sfx_warzone_distant2: Sound{
        sound = "socomd_sfx_warzone_distant2";
        scope=2;
        displayName="(AMB) Warzone Distant 2 (5000m)";
    };
	class socomd_sfx_warzone_distant3: Sound{
        sound = "socomd_sfx_warzone_distant3";
        scope=2;
        displayName="(AMB) Warzone Distant 3 (5000m)";
    };
	class socomd_sfx_children_laughing1: Sound{
        sound = "socomd_sfx_children_laughing1";
        scope=2;
        displayName="(HOR) Children Laughing 1 (50m)";
    };
	class socomd_sfx_children_ratr: Sound{
        sound = "socomd_sfx_children_ratr";
        scope=2;
        displayName="(HOR) Children Singing (100m)";
    };
	class socomd_sfx_demon_roar: Sound{
        sound = "socomd_sfx_demon_roar";
        scope=2;
        displayName="(HOR) Demon Roar (100m)";
    };
	class socomd_sfx_girl_whispers_1: Sound{
        sound = "socomd_sfx_girl_whispers_1";
        scope=2;
        displayName="(HOR) Child Whispers (50m)";
    };
	class socomd_sfx_laugh_demonic: Sound{
        sound = "socomd_sfx_laugh_demonic";
        scope=2;
        displayName="(HOR) Laugh Demonic (100m)";
    };
	class socomd_sfx_man_scream: Sound{
        sound = "socomd_sfx_man_scream";
        scope=2;
        displayName="(HOR) Man Scream (200m)";
    };
	class socomd_sfx_zombiedoor: Sound{
        sound = "socomd_sfx_zombiedoor";
        scope=2;
        displayName="(HOR) Zombie Scratching At Wall (1000m)";
    };
	class socomd_sfx_zombies: Sound{
        sound = "socomd_sfx_zombies";
        scope=2;
        displayName="(HOR) zombies (5000m)";
    };
	class socomd_sfx_zombie_group_roaming: Sound{
        sound = "socomd_sfx_zombie_group_roaming";
        scope=2;
        displayName="(HOR) Zombie Group Roaming (1000m)";
    };
	class socomd_sfx_80s_mix_1: Sound{
        sound = "socomd_sfx_80s_mix_1";
        scope=2;
        displayName="(MUS) 80s mix 1 (500m)";
    };
	class socomd_sfx_80s_mix_2: Sound{
        sound = "socomd_sfx_80s_mix_2";
        scope=2;
        displayName="(MUS) 80s mix 2 (500m)";
    };
	class socomd_sfx_bandit_radio: Sound{
        sound = "socomd_sfx_bandit_radio";
        scope=2;
        displayName="(MUS) Bandit Radio (500m)";
    };
	class socomd_sfx_iraq_music: Sound{
        sound = "socomd_sfx_iraq_music";
        scope=2;
        displayName="(MUS) Iraq Music (500m)";
    };
	class socomd_sfx_lastpost: Sound{
        sound = "socomd_sfx_lastpost";
        scope=2;
        displayName="(MUS) Lastpost (500m)";
    };
	class socomd_sfx_reveille: Sound{
        sound = "socomd_sfx_reveille";
        scope=2;
        displayName="(MUS) reveille (500m)";
    };
	class socomd_sfx_ME_prayermegaphone: Sound{
        sound = "socomd_sfx_ME_prayermegaphone";
        scope=2;
        displayName="(MUS) Call To Prayer (500m)";
    };
	class socomd_sfx_soviet_mix_1: Sound{
        sound = "socomd_sfx_soviet_mix_1";
        scope=2;
        displayName="(MUS) Soviet Mix 1 (500m)";
    };
	class socomd_sfx_vietnam_mix_1: Sound{
        sound = "socomd_sfx_vietnam_mix_1";
        scope=2;
        displayName="(MUS) Vietnam Mix 1 (500m)";
    };
	class socomd_sfx_vietnam_mix_2: Sound{
        sound = "socomd_sfx_vietnam_mix_2";
        scope=2;
        displayName="(MUS) Vietnam Mix 2 (500m)";
    };
	class socomd_sfx_ambush: Sound{
        sound = "socomd_sfx_ambush";
        scope=2;
        displayName="(RAD) Ambush (100m)";
    };
	class socomd_sfx_emergency: Sound{
        sound = "socomd_sfx_emergency";
        scope=2;
        displayName="(RAD) Emergency (100m)";
    };
	class socomd_sfx_extract1: Sound{
        sound = "socomd_sfx_extract1";
        scope=2;
        displayName="(RAD) Extract 1 (100m)";
    };
	class socomd_sfx_extract2: Sound{
        sound = "socomd_sfx_extract2";
        scope=2;
        displayName="(RAD) Extract 2 (100m)";
    };
	class socomd_sfx_extract3: Sound{
        sound = "socomd_sfx_extract3";
        scope=2;
        displayName="(RAD) Extract 3 (100m)";
    };
	class socomd_sfx_ME_radio_insurgent: Sound{
        sound = "socomd_sfx_ME_radio_insurgent";
        scope=2;
        displayName="(RAD) insurgent radio (100m)";
    };
	class socomd_sfx_support1: Sound{
        sound = "socomd_sfx_support1";
        scope=2;
        displayName="(RAD) support 1 (100m)";
    };
	class socomd_sfx_support2: Sound{
        sound = "socomd_sfx_support2";
        scope=2;
        displayName="(RAD) support 2 (100m)";
    };
	class socomd_sfx_support3: Sound{
        sound = "socomd_sfx_support3";
        scope=2;
        displayName="(RAD) support 3 (100m)";
    };
	class socomd_sfx_support4: Sound{
        sound = "socomd_sfx_support4";
        scope=2;
        displayName="(RAD) support 4 (100m)";
    };
	class socomd_sfx_support5: Sound{
        sound = "socomd_sfx_support5";
        scope=2;
        displayName="(RAD) support 5 (100m)";
    };
	class socomd_sfx_thunderclap: Sound{
        sound = "socomd_sfx_thunderclap";
        scope=2;
        displayName="(RAD) thunderclap (100m)";
    };
	class socomd_sfx_US_military_radiochatter: Sound{
        sound = "socomd_sfx_US_military_radiochatter";
        scope=2;
        displayName="(RAD) US Military Radio Chatter (100m)";
    };
	class socomd_sfx_radio_northkorea: Sound{
        sound = "socomd_sfx_radio_northkorea";
        scope=2;
        displayName="(RAD) Radio_North Korea (500m)";
    };
}; 