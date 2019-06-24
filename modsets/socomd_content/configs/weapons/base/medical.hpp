class ACE_ItemCore;
class ACE_morphine; //displayName= "Morphine Autoinjector 10mg/1mL IM"
class ACE_atropine; //displayName= "Atropine 1.2mg/1mL IO"
class ACE_epiniephrine; //displayName="Adrenaline 1mg/1mL IO"
class CBA_MiscItem_ItemInfo;
class ACE_fentanyl: ACE_morphine
{
	author="ArmaForces";
	displayName="Fentanyl 100mcg/2mL (IM)";
	picture="\socomd_data_core\icon\VPN.paa";
	descriptionShort="Analgesic, used for severe pain";
	descriptionUse="Analgesic, used for severe pain";
};
class ACE_naloxone: ACE_atropine
{
	author="ArmaForces";
	displayName="Naloxone 1.6mg/4mL (IM)";
	picture="\socomd_data_core\icon\VPN.paa";
	descriptionShort="Massive HR and BP boost";
	descriptionUse="Massive HR and BP boost";
};
class ACE_apap: ACE_morphine
{
	author="ArmaForces";
	displayName="Paracetemol 1g";
	picture="\socomd_data_core\icon\apap.paa";
	model="\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
	descriptionShort="Analgesic/Antipyretic, used for light pain and fever";
	descriptionUse="Analgesic/Antipyretic, used for light pain and fever";
	class ItemInfo: CBA_MiscItem_ItemInfo
	{
		mass=0.5;
	};
};
class KAT_larynx: ACE_ItemCore {
	displayName="Laryngeal Mask Airway";
	descriptionShort="Maintains airway patency and prevents vomit from entering the lungs";
	descriptionUse="Maintains airway patency and prevents vomit from entering the lungs";
	picture="\socomd_data_core\icon\LMA.paa";
};
class KAT_guedel: ACE_ItemCore {
	displayName="Nasopharyngeal Airway";
	descriptionShort="Maintains airway patency";
	descriptionUse="Maintains airway patency";
	picture="\socomd_data_core\icon\NPA.paa";
};
