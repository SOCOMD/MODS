    
/*
REF: https://community.bistudio.com/wiki/AI_Sub-skills

aimingAccuracy
- Affects how well the AI can lead a target
- Affects how accurately the AI estimate range and calculates bullet drop
- Affects how well the AI compensates for weapon dispersion
- Affects how much the AI will know to compensate for recoil (Higher value = more controlled fire)
- Affects how certain the AI must be about its aim on target before opening fire
 
aimingShake
- Affects how steadily the AI can hold a weapon (Higher value = less weapon sway)
 
aimingSpeed
- Affects how quickly the AI can rotate and stabilize its aim (Higher value = faster, less error)
 
commanding
- Affects how quickly recognized targets are shared with the group (Higher value = faster reporting)
 
courage
- Affects unit's subordinates' morale (Higher value = more courage)
 
endurance
- Disabled in Arma3

general
- Raw "Skill", value is distributed to sub-skills unless defined otherwise. Affects the AI's decision making.
 
reloadSpeed
- Affects the delay between switching or reloading a weapon (Higher value = less delay)

spotDistance
- Affects the AI ability to spot targets within it's visual or audible range (Higher value = more likely to spot)
- Affects the accuracy of the information (Higher value = more accurate information)
 
spotTime
- Affects how quick the AI react to death, damage or observing an enemy (Higher value = quicker reaction)

All values are between 0-1, where 0 is worst and 1 is max.
Arrays are {w, x, y, z} value from (w,y) gets interpolated into (x,z)
    w = starting scalar
    x = starting value
    y = final scalar
    z = final value
Scalar's can be considered what is the theoretical maximum or minimum, i.e for Spot distance, 
a scalar of 0 would mean right infront of it, while a scalar of 1 is basically at multiple kilomitres.
if a starting scalar higher than 0 is used, it will be flat to 0 from that point, the same for final in the other direction,
values linarly scale between between positions, moving scalar positions can configure the ramping of the skill till it flattens.

Example:
    spotDistance[] = {0, 0.2, 1, 0.4};
    starting scalar 0, is 20% of maximum skill to spot,
    finishing scalar 1, is 40% of maxium skill to spot,
    
*/

// Keeping interpolation reasonably consistent with global skill coef to 1.0 means consistent results from mission maker adjustments,
// & more importantly content\configs\vehicles\override\aiunits.hpp (when it is ready). 
class CfgAISkill {
    aimingAccuracy[]    = {0.0, 0.4, 1.0, 0.8};  // note that low value means AI lacks confidence to fire, and will not fire long distances, thus less cinematic.
    aimingShake[]        = {0.0, 0.2, 1.0, 0.6}; // this sets AI firing dispersion, so lower value here with high value in aimingAccuracy means most cinematic fire-fights
    aimingSpeed[]        = {0.0, 0.2, 1.0, 0.8};
    commanding[]        = {0.0, 0.2, 1.0, 0.8};  // strangely this only affects target sharing, not "intelligence". This prevents skillFinal lower than 0.4, so LAMBS radio sharing works ok. 
    courage[]            = {0.0, 0.75, 1.0, 1.0}; // always want relatively high courage.
    general[]            = {0.0, 0.2, 1.0, 1.0};  // high general = tactical group leaders. This prevents skillFinal lower than 0.4, which would negate some LAMBS functions.  
    reloadSpeed[]        = {0.0, 0.2, 1.0 ,1.0};
    spotDistance[]        = {0.0, 0.2, 1.0, 1.0}; // keep at max 1.0 to avoid conflict with new LAMBS spot-distance functionality 
    spotTime[]            = {0.0, 0.2, 1.0, 1.0};
};
