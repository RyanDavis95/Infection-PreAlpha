params ["_victim","_killer"];
private ["_team"];

_team = _victim getVariable "INF_Client_Team";

if (_team == "SURVIVOR" && (missionNamespace getVariable ["INF_Round_InProgress",false])) then {
    _victim call INFS_fnc_createGrave;
};

if (_team == "ZOMBIE") then {
    _victim call INFS_fnc_dropItem;
};

/* Manage Kills */
if (_killer != _victim && _killer != objNull) then {
    [_killer, "INFS_Stats_Kills"] call INFS_fnc_incStat;
};


/* Manage Assists */
_attackers = _victim getVariable "INFS_Stats_Attackers";
if (_killer in _attackers) then {
    _attackers = _attackers - [_killer];
};
{
    [_x,"INFS_Stats_Assists"] call INFS_fnc_incStat; 
    _victim call INFS_fnc_updateStats;
} forEach _attackers;


/* Manage Deaths */
[_victim, "INFS_Stats_Deaths"] call INFS_fnc_incStat;
_victim call INFS_fnc_saveStats;

/* Show On-Screen Stats */ 
_killer call INFS_fnc_updateStats;

/* Strip Dead Body  */
_victim removeAllEventHandlers "HandleDamage";