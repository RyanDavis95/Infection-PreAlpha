//Extract all Weapons:
_rifles = "((configName _x) isKindOf 'Rifle')" configClasses (configFile >> "CfgWeapons");