createDialog 'LoadoutScreen';
_loadoutDisplay = findDisplay 1337;
_weaponLBCtrl = _loadoutDisplay displayCtrl 1510;
_weaponCatCtrl = _loadoutDisplay displayCtrl 2100;

_weaponCatCtrl ctrlAddEventHandler ["LBSelChanged",{_this call INF_fnc_updateWeapons}];
_i = 0;
{
    _weaponCatCtrl lbAdd _x;
    _weaponCatCtrl lbSetData [_i,_x];
    _i = _i + 1;
} forEach ["srifle","arifle","smg"];

/* Initial List Fill */
_weaponCatCtrl lbSetCurSel 0;
_wepCatIndex = lbCurSel _weaponCatCtrl;
_wepCat = _weaponCatCtrl lbData _wepCatIndex;

[_wepCat,_weaponLBCtrl] call INF_fnc_showWeapons;