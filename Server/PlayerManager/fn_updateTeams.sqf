private ["_readyPlayers","_unreadyPlayers","_tmpSurvivors","_tmpZombies","_tmpUnassigned"];

_readyPlayers = [];
_unreadyPlayers = [];
_tmpSurvivors = [];
_tmpZombies = [];
_tmpUnassigned = [];

_tmpPlayers = allUnits;
{
    if (_x getVariable ["INF_Client_Ready",false]) then {
        _readyPlayers pushBackUnique _x;
    } else {
        _unreadyPlayers pushBackUnique _x;
    };
} forEach _tmpPlayers;

{
    _team = _x getVariable "INF_Client_Team";
    switch (_team) do {
        case "SURVIVOR": {_tmpSurvivors pushBackUnique _x;};
        case "ZOMBIE": {_tmpZombies pushBackUnique _x;};
        default {_tmpUnassigned pushBackUnique _x};
    };       
} forEach _readyPlayers;

{
    _tmpUnassigned pushBackUnique _x;
} forEach _unreadyPlayers;

INFS_Lists_Players = _readyPlayers;
INFS_Lists_Survivors = _tmpSurvivors;
INFS_Lists_Zombies = _tmpZombies;
INFS_Lists_Unassigned = _tmpUnassigned;
INFS_Lists_DeadPlayers = allDeadMen;