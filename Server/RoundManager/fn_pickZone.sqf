/*
    Starting Locations must be named
    as 'startingLocation_x' x is anything
*/
private["_markers","_PREFIX","_zoneArr","_zone"];

_markers = allMapMarkers;
_PREFIX = "Zone_";
_zoneArr = [];

/* Find Starting Zones */
{   
    _a = toArray _x;
    _a resize (count _PREFIX);
    if (toString _a == _PREFIX) then {
        _zoneArr pushBack _x;
    };
} forEach _markers;

_zone = selectRandom _zoneArr;
missionNamespace setVariable ["INF_Settings_Zone",_zone,true];