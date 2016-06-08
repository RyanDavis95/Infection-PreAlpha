params ["_client","_newVal","_currVal"];

{
    _newVal = _client getVariable _x;
    _currVal = profileNamespace getVariable [_x,0];
    //profileNamespace setVariable [_x, _newVal + _currVal];     
    //_client setVariable [_x,0,true];  
} forEach INF_Settings_ScoreVars;

//saveProfileNamespace;

hint "I saved my stats";