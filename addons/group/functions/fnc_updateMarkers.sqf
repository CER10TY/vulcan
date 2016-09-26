/*
 * Author: Kingsley
 * Updates the group markers
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call arcmf_group_fnc_updateMarkers;
 *
 * Public: No
 */

#include "script_component.hpp"

{deleteMarkerLocal _x; false} count GVAR(markers);

GVAR(markers) = [];

private _groupsToDrawMarkers = allGroups select {
    side _x == _playerSide &&
    {{isPlayer _x} count units _x > 0} &&
    {_x getVariable [QGVAR(handled), false]}
};

private _playerSide = playerSide;
private _enableGroupMarkers = true;
private _markerIndex = 0;

if (!_enableGroupMarkers) exitWith {};

{
    private _markerType = [_x] call CFUNC(getMarkerType);
    private _colour = _x getVariable [QGVAR(color), format ["Color%1", side _x]];
    private _marker = createMarkerLocal [
        format ["%1_%2", QGVAR(marker), _markerIndex],
        [
            (getPos leader _x) select 0,
            (getPos leader _x) select 1
        ]
    ];

    _marker setMarkerTypeLocal _markerType;
    _marker setMarkerColorLocal _colour;
    _marker setMarkerTextLocal (groupId _x);
    _marker setMarkerSizeLocal [0.88, 0.88];

    GVAR(markers) pushBack _marker;
    _markerIndex = _markerIndex + 1;

    false
} count _groupsToDrawMarkers;
