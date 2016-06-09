params ["_client","_newVal","_currVal"];
hint "Saving shit";

{
    _newVal = _client getVariable _x;
    savedItems pushBack [_x,_newVal];
    //_currVal = profileNamespace getVariable [_x,0];
    //profileNamespace setVariable [_x, _newVal + _currVal];     
    _client setVariable [_x,0,true];  
} forEach INFS_Settings_ScoreVars;