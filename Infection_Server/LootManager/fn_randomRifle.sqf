_allClasses = (configFile >> "CfgWeapons") call BIS_fnc_getCfgSubClasses;
_rifles = [];
_snipers = [];
_SMGs = [];
_pistols = [];
_machineGuns = [];
_launchers = [];



_rifles = [];
_vars = [];
{
    _weaponTest = getText (configFile >> "CfgWeapons" >> _x >> "_generalMacro");
    _magTest = getArray (configFile >> "CfgWeapons" >> _x >> "magazines");
    _scope = getNumber (configFile >> "CfgWeapons" >> _x >> "scope");
    if (_weaponTest != "" && count _magTest > 0 && _scope != 0) then {
        _vars pushBack _x;
        _formatted = toLower _x;
        _tmp = _formatted splitString "_";

        switch (_tmp select 0) do {
            case "arifle": {_rifles pushBackUnique _x};
            case "srifle": {_snipers pushBackUnique _x};
            case "smg": {_SMGs pushBackUnique _x};
            case "lmg": {_machineGuns pushBackUnique _x};
            case "mmg": {_machineGuns pushBackUnique _x};
            case "launch": {_launchers pushBackUnique _x};
            case "hgun": {_pistols pushBackUnique _x};
            default { };
        };
    };
} forEach _allClasses;

_weapon = selectRandom _vars;

_magazines = getArray (configFile >> "CfgWeapons" >> _weapon >> "magazines");
_magClass = _magazines select (count _magazines - 1);

removeAllWeapons player;
player addMagazine _magClass;
player addWeapon _weapon;