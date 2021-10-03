#define BROKEN_WEAPON(weaponName) \
class weaponName; \
class broken_##weaponName : weaponName { \
    scope = SCOPE_PUBLIC; \
};

BROKEN_WEAPON(launch_RPG7_F)
BROKEN_WEAPON(CUP_launch_RPG7V)
BROKEN_WEAPON(CUP_launch_RPG7V_NSPU)
BROKEN_WEAPON(CUP_launch_RPG7V_PGO7V)
BROKEN_WEAPON(CUP_launch_RPG7V_PGO7V2)
BROKEN_WEAPON(CUP_launch_RPG7V_PGO7V3)
BROKEN_WEAPON(CUP_launch_RPG18)