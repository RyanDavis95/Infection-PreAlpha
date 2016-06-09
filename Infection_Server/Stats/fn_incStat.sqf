hint str _this;
params ["_client","_stat",["_amt",1]];

_val = _client getVariable [_stat,0];
_val = _val + _amt;
_client setVariable [_stat,_val,true];
