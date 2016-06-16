params ["_currWeapon"];

_magazines = getArray (configFile >> "CfgWeapons" >> _currWeapon >> "magazines");
_magClass = _magazines select 0;

player addMagazine _magClass;
player addMagazine _magClass;