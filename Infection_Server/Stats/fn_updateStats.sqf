params ["_killer"];
private ["_time","_kills","_assists","_headshots","_totalXP","_killXP",
"_assistXP","_headshotXP","_aTxt","_kTxt","_hsTxt","_handle"];

/* Queue Stat Update */
_time = serverTime;

/* Init Variables */
_kills = _killer getVariable "INFS_Stats_Kills";
_assists = _killer getVariable "INFS_Stats_Assists";
_headshots = _killer getVariable "INFS_Stats_Headshots";


_killXP = _kills * INFS_Stats_KillXP;
_assistXP = _assists * INFS_Stats_AssistXP;
_headshotXP = _headshots * INFS_Stats_HeadshotXP;

_aTxt = "";
_kTxt = "";
_hsTxt = "";
_xpTxt = "";


/* Kill XP Text */
if (_killXP > 0) then {
    _kTxt = parseText format [
        "<t size='.8' color='#ffffff' align='left'>%1</t>
        <t size='.8' color='#fa3200' align='right'>%2</t><br/>",
        "Killed Zombie: ","+"+str _killXP
    ];
};

/* Assist XP Text */
if (_assistXP > 0) then {
    _aTxt = parseText format [
        "<t size='.8' color='#ffffff' align='left'>%1</t>
        <t size='.8' color='#fa3200' align='right'>%2</t><br/>",
        "Kill Assist: ","+"+str _assistXP
    ];   
};

/* Headshot XP Text */
if (_headshotXP > 0) then {
    _hsTxt = parseText format [
        "<t size ='.8' color='#ffffff' align='left'>%1</t>
        <t size='.8' color='#fa3200' align='right'>%2</t><br/>",
        "Headshot: ","+"+str _headshotXP   
    ];
};

_totalXP = _assistXP + _killXP + _headshotXP;

/* Total XP Text */
if (_totalXP > 0) then {
    _xpTxt = parseText format [
        "<t size ='1' color='#ffffff' align='center'>%1</t>
        <t size='1' color='#FFD700' align='right'>%2</t><br/>",
        "Total: ","+"+str (_totalXP)   
    ];
};

[_killer,"INFS_Stats_XP",_totalXP] call INFS_fnc_incStat;

/* Create Text to be Drawn */
_statText = composeText [_kTxt, _hsTxt, _aTxt, _xpTxt];

/* Draw Stat Text on Player's Screen */
[[_killer,_statText],{
    params ["_killer","_statText"];

    /* Suspend Last Draw */
    terminate INF_Stats_Current;

    /* Draw New Stat Text to Screen */
    INF_Stats_Current = [
            _statText,
            [safeZoneX + .05,safeZoneY+safeZoneH - .2,.5,.15],
            [10,3],5,.5,0
        ] spawn BIS_fnc_textTiles;  

    /* Report to server when Complete */ 
    waitUntil { scriptDone INF_Stats_Current; };
    _killer remoteExecCall ["INFS_fnc_saveStats",2,false];

}] remoteExecCall ["spawn",_killer,false];