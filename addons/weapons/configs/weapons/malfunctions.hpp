#define BROKEN_WEAPON(weaponName) \
class weaponName; \
class broken_##weaponName : weaponName { \
    scope = SCOPE_PUBLIC; \
};

BROKEN_WEAPON(launch_RPG7_F)
