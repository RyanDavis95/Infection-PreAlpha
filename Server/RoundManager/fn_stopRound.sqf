private ["_handle"];

_endRound = false;

waitUntil {
    sleep .01;
    [] call INFS_fnc_updateTeams;
       
    if (INFS_Lists_Zombies isEqualTo [] && !INFS_Round_PickingZombie) then {
        _deadZom = false;
        {
            if (_x getVariable "INF_Team" == "ZOMBIE") exitWith {_deadZom = true;}; 
        } forEach INFS_Lists_DeadPlayers;
        
        if (!_deadZom) then {
            //remoteExec ["INFD_fnc_zombieMessage",INFS_Lists_Players,false];
            _handle = [] spawn INFS_fnc_pickZombie;
            waitUntil { scriptDone _handle; };
        };            
    };
    
    if (count INFS_Lists_Players < INFS_Settings_MinPlayers) then {
        hint str INFS_Lists_Players;
        _handle = [] spawn INFS_fnc_aquirePlayers;
        waitUntil { scriptDone _handle; };
    };
        
    if (count INFS_Lists_Survivors == 0) then {
        //remoteExec ["INFD_fnc_survivorsEliminated",INFS_Lists_Players,false];
        hint "Survivors Eliminated";
        _endRound = true;
    } else {
        
        if ((serverTime - INFS_Round_StartTime) >= INFS_Settings_TimeLimit) then {
            hint "Survivors Win!";
            _endRound = true;
        };           
    };      
    _endRound
};