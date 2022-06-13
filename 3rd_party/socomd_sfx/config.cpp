
class CfgPatches{
    class SFX_socomd{
        requiredVersion=1.60;
        requiredAddons[]={"A3_Functions_F"};
        units[]={"sfx_air_raid","sfx_alarm","sfx_alarm_facility","sfx_dist_airraid","sfx_amb_city","sfx_arab_market","sfx_distantwarzone","sfx_firefight","sfx_policesirens_distant","sfx_riot","sfx_warzone_close","sfx_warzone_distant","sfx_warzone_distant_withsiren","sfx_warzone_distant2","sfx_children_laughing1","sfx_children_ratr","sfx_demon_roar","sfx_girl_whispers_1","sfx_laugh_demonic","sfx_man_scream","zombiedoor","zombies","sfx_zombie_group_roaming","sfx_80s_mix_1","sfx_80s_mix_2","sfx_bandit_radio","sfx_iraq_music","sfx_lastpost","sfx_reveille","sfx_ME_prayermegaphone","sfx_radio_northkorea","sfx_soviet_mix_1","sfx_vietnam_mix_1","sfx_vietnam_mix_2","sfx_ambush","sfx_emergency","sfx_extract1","sfx_extract2","sfx_extract3","sfx_ME_radio_insurgent","sfx_support1","sfx_support2","sfx_support3","sfx_support4","sfx_support5","sfx_thunderclap","sfx_thunderclap","sfx_US_military_radiochatter"};
        weapons[]={};
    };
};


class CfgSFX{
    class sfx{
        empty[]={"",0,0,0,0,0,0,0};
        sounds[]={"sfxsound"};
    };
    class sfx_air_raid: sfx{
        name="sfx_air_raid";
        sfxsound[]={"socomd_sfx\bin\air_raid.ogg",7,1,1000,1,1,1,0};
    };
    class sfx_alarm: sfx{
        name="sfx_alarm";
        sfxsound[]={"socomd_sfx\bin\alarm.ogg",6,1,1000,1,1,1,0};
    };
	class sfx_alarm_facility: sfx{
        name="sfx_alarm_facility";
        sfxsound[]={"socomd_sfx\bin\alarm_facility.ogg",7,1,1000,1,1,1,0};
    };
	class sfx_dist_airraid: sfx{
        name="sfx_dist_airraid";
        sfxsound[]={"socomd_sfx\bin\dist_airraid.ogg",6,1,2000,1,1,1,0};
    };
	class sfx_amb_city: sfx{
        name="sfx_amb_city";
        sfxsound[]={"socomd_sfx\bin\amb_city.ogg",5,1,1000,1,1,1,0};
    };
	class sfx_arab_market: sfx{
        name="sfx_arab_market";
        sfxsound[]={"socomd_sfx\bin\arab_market.ogg",5,1,1000,1,1,1,0};
    };
	class sfx_distantwarzone: sfx{
        name="sfx_distantwarzone";
        sfxsound[]={"socomd_sfx\bin\distantwarzone.ogg",6,1,5000,1,1,1,0};
    };
	class sfx_firefight: sfx{
        name="sfx_firefight";
        sfxsound[]={"socomd_sfx\bin\firefight.ogg",6,1,3000,1,1,1,0};
    };
	class sfx_policesirens_distant: sfx{
        name="sfx_policesirens_distant";
        sfxsound[]={"socomd_sfx\bin\policesirens_distant.ogg",5,1,800,1,1,1,0};
    };
	class sfx_riot: sfx{
        name="sfx_riot";
        sfxsound[]={"socomd_sfx\bin\riot.ogg",6,1,1000,1,1,1,0};
    };
	class sfx_warzone_close: sfx{
        name="sfx_warzone_close";
        sfxsound[]={"socomd_sfx\bin\warzone_close.ogg",6,1,1000,1,1,1,0};
    };
	class sfx_warzone_distant: sfx{
        name="sfx_warzone_distant";
        sfxsound[]={"socomd_sfx\bin\warzone_distant.ogg",6,1,5000,1,1,1,0};
    };
	class sfx_warzone_distant_withsiren: sfx{
        name="sfx_warzone_distant_withsiren";
        sfxsound[]={"socomd_sfx\bin\warzone_distant_withsiren.ogg",6,1,5000,1,1,1,0};
    };
	class sfx_warzone_distant2: sfx{
        name="sfx_warzone_distant2";
        sfxsound[]={"socomd_sfx\bin\warzone_distant2.ogg",6,1,5000,1,1,1,0};
    };
	class sfx_warzone_distant3: sfx{
        name="sfx_warzone_distant3";
        sfxsound[]={"socomd_sfx\bin\warzone_distant3.ogg",6,1,5000,1,1,1,0};
    };
	class sfx_children_laughing1: sfx{
        name="sfx_children_laughing1";
        sfxsound[]={"socomd_sfx\bin\children_laughing1.ogg",7,1,50,1,1,1,0};
    };
	class sfx_children_ratr: sfx{
        name="sfx_children_ratr";
        sfxsound[]={"socomd_sfx\bin\children_ratr.ogg",7,1,50,1,1,1,0};
    };
	class sfx_demon_roar: sfx{
        name="sfx_demon_roar";
        sfxsound[]={"socomd_sfx\bin\demon_roar.ogg",10,1,100,1,1,1,0};
    };
	class sfx_girl_whispers_1: sfx{
        name="sfx_girl_whispers_1";
        sfxsound[]={"socomd_sfx\bin\girl_whispers_1.ogg",7,1,50,1,1,1,0};
    };
	class sfx_laugh_demonic: sfx{
        name="sfx_laugh_demonic";
        sfxsound[]={"socomd_sfx\bin\laugh_demonic.ogg",10,1,100,1,1,1,0};
    };
	class sfx_man_scream: sfx{
        name="sfx_man_scream";
        sfxsound[]={"socomd_sfx\bin\man_scream.ogg",7,1,50,1,1,1,0};
    };
	class sfx_zombiedoor: sfx{
        name="sfx_zombiedoor";
        sfxsound[]={"socomd_sfx\bin\zombiedoor.ogg",5,1,50,1,1,1,0};
    };
	class sfx_zombies: sfx{
        name="sfx_zombies";
        sfxsound[]={"socomd_sfx\bin\zombies.ogg",5,1,300,1,1,1,0};
    };
	class sfx_zombie_group_roaming: sfx{
        name="sfx_zombie_group_roaming";
        sfxsound[]={"socomd_sfx\bin\zombie_group_roaming.ogg",3,1,1000,1,1,1,0};
    };
	class sfx_80s_mix_1: sfx{
        name="sfx_80s_mix_1";
        sfxsound[]={"socomd_sfx\bin\80s_mix_1.ogg",10,1,50,1,1,1,0};
    };
	class sfx_80s_mix_2: sfx{
        name="sfx_80s_mix_2";
        sfxsound[]={"socomd_sfx\bin\80s_mix_2.ogg",10,1,50,1,1,1,0};
    };
	class sfx_bandit_radio: sfx{
        name="sfx_bandit_radio";
        sfxsound[]={"socomd_sfx\bin\bandit_radio.ogg",8,1,50,1,1,1,0};
    };
	class sfx_iraq_music: sfx{
        name="sfx_iraq_music";
        sfxsound[]={"socomd_sfx\bin\iraq_music.ogg",8,1,50,1,1,1,0};
    };
	class sfx_lastpost: sfx{
        name="sfx_lastpost";
        sfxsound[]={"socomd_sfx\bin\lastpost.ogg",10,1,100,1,1,1,0};
    };
	class sfx_reveille: sfx{
        name="sfx_reveille";
        sfxsound[]={"socomd_sfx\bin\reveille.ogg",10,1,100,1,1,1,0};
    };
	class sfx_soviet_mix_1: sfx{
        name="sfx_soviet_mix_1";
        sfxsound[]={"socomd_sfx\bin\soviet_mix_1.ogg",8,1,50,1,1,1,0};
    };
	class sfx_vietnam_mix_1: sfx{
        name="sfx_vietnam_mix_1";
        sfxsound[]={"socomd_sfx\bin\vietnam_mix_1.ogg",10,1,50,1,1,1,0};
    };
	class sfx_vietnam_mix_2: sfx{
        name="sfx_vietnam_mix_2";
        sfxsound[]={"socomd_sfx\bin\vietnam_mix_2.ogg",10,1,50,1,1,1,0};
    };
	class sfx_ME_prayermegaphone: sfx{
        name="sfx_ME_prayermegaphone";
        sfxsound[]={"socomd_sfx\bin\ME_prayermegaphone.ogg",7,1,100,1,1,1,0};
    };
	class sfx_radio_northkorea: sfx{
        name="sfx_radio_northkorea";
        sfxsound[]={"socomd_sfx\bin\radio_northkorea.ogg",8,1,50,1,1,1,0};
    };
	class sfx_ambush: sfx{
        name="sfx_ambush";
        sfxsound[]={"socomd_sfx\bin\ambush.ogg",8,1,50,1,1,1,0};
    };
	class sfx_emergency: sfx{
        name="sfx_emergency";
        sfxsound[]={"socomd_sfx\bin\emergency.ogg",8,1,50,1,1,1,0};
    };
	class sfx_extract1: sfx{
        name="sfx_extract1";
        sfxsound[]={"socomd_sfx\bin\extract1.ogg",8,1,50,1,1,1,0};
    };
	class sfx_extract2: sfx{
        name="sfx_extract2";
        sfxsound[]={"socomd_sfx\bin\extract2.ogg",8,1,50,1,1,1,0};
    };
	class sfx_extract3: sfx{
        name="sfx_extract3";
        sfxsound[]={"socomd_sfx\bin\extract3.ogg",8,1,50,1,1,1,0};
    };
	class sfx_ME_radio_insurgent: sfx{
        name="sfx_ME_radio_insurgent";
        sfxsound[]={"socomd_sfx\bin\ME_radio_insurgent.ogg",8,1,50,1,1,1,0};
    };
	class sfx_support1: sfx{
        name="sfx_support1";
        sfxsound[]={"socomd_sfx\bin\support1.ogg",8,1,50,1,1,1,0};
    };
	class sfx_support2: sfx{
        name="sfx_support2";
        sfxsound[]={"socomd_sfx\bin\support2.ogg",8,1,50,1,1,1,0};
    };
	class sfx_support3: sfx{
        name="sfx_support3";
        sfxsound[]={"socomd_sfx\bin\support3.ogg",8,1,50,1,1,1,0};
    };
	class sfx_thunderclap: sfx{
        name="sfx_thunderclap";
        sfxsound[]={"socomd_sfx\bin\thunderclap.ogg",8,1,50,1,1,1,0};
    };
	class sfx_support4: sfx{
        name="sfx_support4";
        sfxsound[]={"socomd_sfx\bin\support4.ogg",8,1,50,1,1,1,0};
    };
	class sfx_support5: sfx{
        name="sfx_support5";
        sfxsound[]={"socomd_sfx\bin\support5.ogg",8,1,50,1,1,1,0};
    };
	class sfx_US_military_radiochatter: sfx{
        name="sfx_US_military_radiochatter";
        sfxsound[]={"socomd_sfx\bin\US_military_radiochatter.ogg",8,1,50,1,1,1,0};
    };
};

class CfgVehicles{
    class ALL {};
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
    class sfx_air_raid: Sound{
        sound = "sfx_air_raid";
        scope=2;
        displayName="(ALR) Air Raid Siren (1000m)";
    };
	class sfx_alarm: Sound{
        sound = "sfx_alarm";
        scope=2;
        displayName="(ALR) Alarm (1000m)";
    };
	class sfx_alarm_facility: Sound{
        sound = "sfx_alarm_facility";
        scope=2;
        displayName="(ALR) Alarm Facility (1000m)";
    };
	class sfx_dist_airraid: Sound{
        sound = "sfx_dist_airraid";
        scope=2;
        displayName="(ALR) Distant Air Raid Siren (2000m)";
    };
	class sfx_amb_city: Sound{
        sound = "sfx_amb_city";
        scope=2;
        displayName="(AMB) Ambiant City (1000m)";
    };
	class sfx_arab_market: Sound{
        sound = "sfx_arab_market";
        scope=2;
        displayName="(AMB) Arab Market (1000m)";
    };
	class sfx_distantwarzone: Sound{
        sound = "sfx_distantwarzone";
        scope=2;
        displayName="(AMB) Distant War Zone (5000m)";
    };
	class sfx_firefight: Sound{
        sound = "sfx_firefight";
        scope=2;
        displayName="(AMB) firefight (3000m)";
    };
	class sfx_policesirens_distant: Sound{
        sound = "sfx_policesirens_distant";
        scope=2;
        displayName="(AMB) Police Sirens Distant (1000m)";
    };
	class sfx_riot: Sound{
        sound = "sfx_riot";
        scope=2;
        displayName="(AMB) Riot (1000m)";
    };
	class sfx_warzone_close: Sound{
        sound = "sfx_warzone_close";
        scope=2;
        displayName="(AMB) Warzone Close (2000m)";
    };
	class sfx_warzone_distant_withsiren: Sound{
        sound = "sfx_warzone_distant_withsiren";
        scope=2;
        displayName="(AMB) Warzone Distant With Siren (5000m)";
    };
	class sfx_warzone_distant: Sound{
        sound = "sfx_warzone_distant";
        scope=2;
        displayName="(AMB) Warzone Distant (5000m)";
    };
	class sfx_warzone_distant2: Sound{
        sound = "sfx_warzone_distant2";
        scope=2;
        displayName="(AMB) Warzone Distant 2 (5000m)";
    };
	class sfx_warzone_distant3: Sound{
        sound = "sfx_warzone_distant3";
        scope=2;
        displayName="(AMB) Warzone Distant 3 (5000m)";
    };
	class sfx_children_laughing1: Sound{
        sound = "sfx_children_laughing1";
        scope=2;
        displayName="(HOR) Children Laughing 1 (50m)";
    };
	class sfx_children_ratr: Sound{
        sound = "sfx_children_ratr";
        scope=2;
        displayName="(HOR) Children Singing (50m)";
    };
	class sfx_demon_roar: Sound{
        sound = "sfx_demon_roar";
        scope=2;
        displayName="(HOR) Demon Roar (50m)";
    };
	class sfx_girl_whispers_1: Sound{
        sound = "sfx_girl_whispers_1";
        scope=2;
        displayName="(HOR) Child Whispers (50m)";
    };
	class sfx_laugh_demonic: Sound{
        sound = "sfx_laugh_demonic";
        scope=2;
        displayName="(HOR) Laugh Demonic (50m)";
    };
	class sfx_man_scream: Sound{
        sound = "sfx_man_scream";
        scope=2;
        displayName="(HOR) Man Scream (50m)";
    };
	class sfx_zombiedoor: Sound{
        sound = "sfx_zombiedoor";
        scope=2;
        displayName="(HOR) Zombie Scratching At Wall (100m)";
    };
	class sfx_zombies: Sound{
        sound = "sfx_zombies";
        scope=2;
        displayName="(HOR) zombies (500m)";
    };
	class sfx_zombie_group_roaming: Sound{
        sound = "sfx_zombie_group_roaming";
        scope=2;
        displayName="(HOR) Zombie Group Roaming (1000m)";
    };
	class sfx_80s_mix_1: Sound{
        sound = "sfx_80s_mix_1";
        scope=2;
        displayName="(MUS) 80s mix 1 (50m)";
    };
	class sfx_80s_mix_2: Sound{
        sound = "sfx_80s_mix_2";
        scope=2;
        displayName="(MUS) 80s mix 2 (50m)";
    };
	class sfx_bandit_radio: Sound{
        sound = "sfx_bandit_radio";
        scope=2;
        displayName="(MUS) Bandit Radio (50m)";
    };
	class sfx_iraq_music: Sound{
        sound = "sfx_iraq_music";
        scope=2;
        displayName="(MUS) Iraq Music (50m)";
    };
	class sfx_lastpost: Sound{
        sound = "sfx_lastpost";
        scope=2;
        displayName="(MUS) Lastpost (50m)";
    };
	class sfx_reveille: Sound{
        sound = "sfx_reveille";
        scope=2;
        displayName="(MUS) reveille (50m)";
    };
	class sfx_ME_prayermegaphone: Sound{
        sound = "sfx_ME_prayermegaphone";
        scope=2;
        displayName="(MUS) Call To Prayer Megaphone (100m)";
    };
	class sfx_soviet_mix_1: Sound{
        sound = "sfx_soviet_mix_1";
        scope=2;
        displayName="(MUS) Soviet Mix 1 (50m)";
    };
	class sfx_vietnam_mix_1: Sound{
        sound = "sfx_vietnam_mix_1";
        scope=2;
        displayName="(MUS) Vietnam Mix 1 (50m)";
    };
	class sfx_vietnam_mix_2: Sound{
        sound = "sfx_vietnam_mix_2";
        scope=2;
        displayName="(MUS) Vietnam Mix 2 (50m)";
    };
	class sfx_ambush: Sound{
        sound = "sfx_ambush";
        scope=2;
        displayName="(RAD) Ambush (50m)";
    };
	class sfx_emergency: Sound{
        sound = "sfx_emergency";
        scope=2;
        displayName="(RAD) Emergency (50m)";
    };
	class sfx_extract1: Sound{
        sound = "sfx_extract1";
        scope=2;
        displayName="(RAD) Extract 1 (50m)";
    };
	class sfx_extract2: Sound{
        sound = "sfx_extract2";
        scope=2;
        displayName="(RAD) Extract 2 (50m)";
    };
	class sfx_extract3: Sound{
        sound = "sfx_extract3";
        scope=2;
        displayName="(RAD) Extract 3 (50m)";
    };
	class sfx_ME_radio_insurgent: Sound{
        sound = "sfx_ME_radio_insurgent";
        scope=2;
        displayName="(RAD) insurgent radio (50m)";
    };
	class sfx_support1: Sound{
        sound = "sfx_support1";
        scope=2;
        displayName="(RAD) support 1 (50m)";
    };
	class sfx_support2: Sound{
        sound = "sfx_support2";
        scope=2;
        displayName="(RAD) support 2 (50m)";
    };
	class sfx_support3: Sound{
        sound = "sfx_support3";
        scope=2;
        displayName="(RAD) support 3 (50m)";
    };
	class sfx_support4: Sound{
        sound = "sfx_support4";
        scope=2;
        displayName="(RAD) support 4 (50m)";
    };
	class sfx_support5: Sound{
        sound = "sfx_support5";
        scope=2;
        displayName="(RAD) support 5 (50m)";
    };
	class sfx_thunderclap: Sound{
        sound = "sfx_thunderclap";
        scope=2;
        displayName="(RAD) thunderclap (50m)";
    };
	class sfx_US_military_radiochatter: Sound{
        sound = "sfx_US_military_radiochatter";
        scope=2;
        displayName="(RAD) US Military Radio Chatter (50m)";
    };
	class sfx_radio_northkorea: Sound{
        sound = "sfx_radio_northkorea";
        scope=2;
        displayName="(RAD) Radio_North Korea (50m)";
    };
}; 