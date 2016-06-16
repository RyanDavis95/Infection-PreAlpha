params ["_weaponType","_ctrl","_allClasses"];

lbClear _ctrl;
_weapons = [];
_allClasses = (configFile >> "CfgWeapons") call BIS_fnc_getCfgSubClasses;

{
    _weaponProp = getText (configFile >> "CfgWeapons" >> _x >> "_generalMacro");
    _magTest = getArray (configFile >> "CfgWeapons" >> _x >> "magazines");
    _scope = getNumber (configFile >> "CfgWeapons" >> _x >> "scope");
    if (_weaponProp != "" && count _magTest > 0 && _scope != 0) then {
        _formatted = toLower _x;
        _tmp = _formatted splitString "_";
        if (_tmp select 0 == _weaponType) then {
            _weapons pushBackUnique _x;
        };
    };
} forEach _allClasses;

_i = 0;
{
    _name = getText (configFile >> "CfgWeapons" >> _x >> "displayname");    
    _ctrl lbAdd _name;
    _ctrl lbSetData [_i,_x];
    _i = _i + 1;
} forEach _weapons;