params ["_client"];
_txt = [];

/* Temporary Variables */
_txt pushBack "-Current Vals-";
_txt pushBack lineBreak;
{
    _txt pushBack (text format ["%1: %2",_x, _client getVariable [_x,0]]);
    _txt pushBack lineBreak;
} forEach INF_Settings_ScoreVars;
_txt pushBack lineBreak;

/* Stored Variables */
_txt pushBack "-Stored Vals-";
_txt pushBack lineBreak;
{
    _txt pushBack (text format ["%1: %2",_x,profileNamespace getVariable [_x,0]]);
    _txt pushBack lineBreak;
} forEach INF_Settings_ScoreVars;

/* Show all Stats */
hint (composeText _txt);