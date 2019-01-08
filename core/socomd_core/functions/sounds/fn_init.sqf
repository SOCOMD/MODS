diag_log "### fox_nvg_sound init ";
if(!local player)exitWith{};

  [] spawn {
    waituntil {!isnull (finddisplay 46)};
    _eh = (findDisplay 46) displayAddEventHandler ["KeyDown", {

      _key = _this select 1;

      if(_key == 49)then{


        if(fox_nvg_volume isEqualTo FALSE )exitWith{};

        if( ((currentVisionMode player) == 0) && (hmd player != ""))then{

          if(fox_nvg_debug)then{
              systemChat format["Mode : %1 | Soundfile: %2",fox_nvg_mode,fox_nvg_soundFile];
          };

            if( player getVariable["fox_nvg_sound_isCD",false] isEqualTo false )then{

              if(fox_nvg_mode isEqualTo "say3D")then{
                player say3D fox_nvg_soundFile;
                if(!isServer)then{
                  [player,"fox_nvg_sound"]remoteExec ["say3D",(clientOwner * -1 )];
                }else{
                  //were in singleplyer,since the server cant use nvg vision
                };
              };

              if(fox_nvg_mode isEqualTo "playMusic")then{
                playMusic fox_nvg_soundFile;
                if(!isServer)then{
                  [player,"fox_nvg_sound"]remoteExec ["say3D",(clientOwner * -1 )];
                }else{
                  //were in singleplyer,since the server cant use nvg vision
                };

              };

              []spawn{
                player setVariable ["fox_nvg_sound_isCD",true];
                sleep 2;
                player setVariable ["fox_nvg_sound_isCD",false];
              };

            };

        };

      }
    }];
   };
