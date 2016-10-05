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

private _playerSide = playerSide;
private _markerIndex = 0;
private _groupsToDrawMarkers = allGroups select {side _x == _playerSide};

{
    private _group = _x;
    private _enabled = _group getVariable [QGVAR(enabled), true];

    if (_enabled) then {
        private _pos = getPos leader _group;
        private _delay = _group getVariable [QGVAR(delay), DEFAULT_DELAY];
        private _lastUpdated = _group getVariable [QGVAR(lastUpdated), 0];
        private _accuracy = _group getVariable [QGVAR(accuracy), 0];
        private _text = _group getVariable [QGVAR(text), groupId _group];
        private _color = _group getVariable [QGVAR(color), format ["Color%1", side _x]];
        private _markerType = [_x] call CFUNC(getMarkerType);
        private _adjustedPos = _group getVariable [QGVAR(previousPos), _pos];

        if ((time - _lastUpdated) >= _delay) then {
            _adjustedPos = [_pos, _accuracy max 0] call CBA_fnc_randPos;
            _group setVariable [QGVAR(lastUpdated), time, true];
            _group setVariable [QGVAR(previousPos), _adjustedPos, true];
        };

        private _marker = createMarkerLocal [
            format ["%1_%2", QGVAR(marker), _markerIndex],
            _adjustedPos
        ];

        _marker setMarkerShapeLocal "ICON";
        _marker setMarkerTypeLocal _markerType;
        _marker setMarkerColorLocal _color;
        _marker setMarkerTextLocal _text;
        _marker setMarkerSizeLocal [0.88, 0.88];
        _marker call compile (_group getVariable [QGVAR(code), ""]);

        GVAR(markers) pushBack _marker;
        INC(_markerIndex);
    };

    false
} count _groupsToDrawMarkers;
