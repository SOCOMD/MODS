// all options goes into a macro to be added into a class
// class must have the same name as the loudout cfg
// isLogi is used for pilots and crewmen who don't need grenade options. eg: isLogi = 1;
// extraUniforms used for classes that need specialist uniforms like recon. Uniforms all defined in own class. eg: extraUniforms = "recon_uniforms";
// arsenalExtras used for those who need extra arsenal equipment like rifleman. options defined in role class eg arsenalExtras[] = {"myExtra","myExtra2"};

class CfgArsenalOptions{
	#include "loadouts\arsenal_options\sso.hpp"
	#include "loadouts\arsenal_options\lowvis.hpp"
};