
#define QSTORE_ACTION_GRP_BEGIN(GRP_ID, DISPLAY_STR) \
class SOCOMD_ACTION_GRP_##GRP_ID { \
    displayName = DISPLAY_STR; \
    selection = ""; \
    distance = 5; \
    condition = 1;

#define QSTORE_ACTION_GRP_END };

#define QSTORE_ACTION_LOADOUT(DISPLAY_STR, LOADOUT) \
class SOCOMD_ACTION_LOADOUT_##LOADOUT { \
    displayName = DISPLAY_STR; \
    statement = "[_player,"#LOADOUT"] call socomd_qstore_fnc_SwitchUnitLoadout"; \
    exceptions[] = {"isNotInside", "isNotSitting"}; \
    condition = 1; \
    showDisabled = 0; \
};