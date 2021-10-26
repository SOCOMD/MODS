class CfgVehicles
{
    class Air;
    class Helicopter : Air
    {
        class ACE_SelfActions
        {
            class SOCOMD_DeployRopes
            {
                displayName = "Deploy Ropes";
                condition = " [_player, vehicle _player] call ASL_Deploy_Ropes_Action_Check";
                statement = "[] call ASL_Deploy_Ropes_Action";
                showDisabled = 0;
                exceptions[] = {"isNotInside", "isNotSitting"};
            };

            class SOCOMD_RetractRopes
            {
                displayName = "Retract Ropes";
                condition = "[_player, vehicle _player] call ASL_Retract_Ropes_Action_Check";
                statement = "[] call ASL_Retract_Ropes_Action";
                showDisabled = 0;
                exceptions[] = {"isNotInside", "isNotSitting"};
            };

            class SOCOMD_ReleaseCargo
            {
                displayName = "Detatch Cargo";
                condition = "[_player, vehicle _player] call ASL_Release_Cargo_Action_Check";
                statement = "[] call ASL_Release_Cargo_Action";
                showDisabled = 0;
                exceptions[] = {"isNotInside", "isNotSitting"};
            };

            class SOCOMD_ChangeRopeLength
            {
                displayName = "Change Rope Length";
                selection = "";
                condition = 1;

                class SOCOMD_ChangeRopeLength5
                {
                    displayName = "5m";
                    condition = "[_player, vehicle _player] call ASL_Extend_Ropes_Action_Check";
                    statement = "[vehicle _player, 5] call ASL_Extend_Ropes_Action";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };

                class SOCOMD_ChangeRopeLength10
                {
                    displayName = "10m";
                    condition = "[_player, vehicle _player] call ASL_Extend_Ropes_Action_Check";
                    statement = "[vehicle _player, 10] call ASL_Extend_Ropes_Action";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };

                class SOCOMD_ChangeRopeLength15
                {
                    displayName = "15m";
                    condition = "[_player, vehicle _player] call ASL_Extend_Ropes_Action_Check";
                    statement = "[vehicle _player, 15] call ASL_Extend_Ropes_Action";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };

                class SOCOMD_ChangeRopeLength20
                {
                    displayName = "20m";
                    condition = "[_player, vehicle _player] call ASL_Extend_Ropes_Action_Check";
                    statement = "[vehicle _player, 20] call ASL_Extend_Ropes_Action";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };

                class SOCOMD_ChangeRopeLength25
                {
                    displayName = "25m";
                    condition = "[_player, vehicle _player] call ASL_Extend_Ropes_Action_Check";
                    statement = "[vehicle _player, 25] call ASL_Extend_Ropes_Action";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };

                class SOCOMD_ChangeRopeLength30
                {
                    displayName = "30m";
                    condition = "[_player, vehicle _player] call ASL_Extend_Ropes_Action_Check";
                    statement = "[vehicle _player, 30] call ASL_Extend_Ropes_Action";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };

                class SOCOMD_ChangeRopeLength40
                {
                    displayName = "40m";
                    condition = "[_player, vehicle _player] call ASL_Extend_Ropes_Action_Check";
                    statement = "[vehicle _player, 40] call ASL_Extend_Ropes_Action";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };

                class SOCOMD_ChangeRopeLength50
                {
                    displayName = "50m";
                    condition = "[_player, vehicle _player] call ASL_Extend_Ropes_Action_Check";
                    statement = "[vehicle _player, 50] call ASL_Extend_Ropes_Action";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };
            };
        };
    };
};