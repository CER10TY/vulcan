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

if (!GVAR(enabled)) exitWith {};

GVAR(markers) = [];

private _playerSide = playerSide;
private _markerIndex = 0;
private _groupsToDrawMarkers = allGroups select {side _x == _playerSide};

{
    private _markerType = [_x] call CFUNC(getMarkerType);
    private _colour = _x getVariable [QGVAR(color), format ["Color%1", side _x]];
    private _marker = createMarkerLocal [
        format ["%1_%2", QGVAR(marker), _markerIndex],
        getPos leader _x
    ];

    _marker setMarkerShapeLocal "ICON";
    _marker setMarkerTypeLocal _markerType;
    _marker setMarkerColorLocal _colour;
    _marker setMarkerTextLocal (groupId _x);
    _marker setMarkerSizeLocal [0.88, 0.88];

    GVAR(markers) pushBack _marker;
    INC(_markerIndex);

    false
} count _groupsToDrawMarkers;
