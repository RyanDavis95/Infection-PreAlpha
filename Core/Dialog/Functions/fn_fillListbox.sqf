params ["_fillArray","_lbCtrl",["_currData",""],["_curr",0]];    //_fillArray: ["text","data"]

{
    _lbIndex = _lbCtrl lbAdd (_x select 0);
    _lbCtrl lbSetData [_i, _x select 1];
    if ((_x select 1) == _currData) then {
        _curr = _lbIndex;
    };
} forEach _fillArray;

_ctrl lbSetCurSel _curr;
lbSort _lbCtrl;