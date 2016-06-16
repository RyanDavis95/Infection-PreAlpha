params ["_ctrl","_index"];
_loadoutDisplay = findDisplay 1337;
_weaponLBCtrl = _loadoutDisplay displayCtrl 1510;

_wepCat = _ctrl lbData _index;

[_wepCat,_weaponLBCtrl] call INF_fnc_showWeapons;