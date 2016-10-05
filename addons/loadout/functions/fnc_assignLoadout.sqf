/*
 * Author: Kingsley
 * Assigns the given loadout to the given unit
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Role <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "co"] call arcmf_loadout_fnc_assignLoadout;
 *
 * Public: Yes
 */

#include "script_component.hpp"

params [
    ["_unit", objNull, [objNull]],
    ["_role", "", [""]]
];

if (_role == "") exitWith {};

if (!local _unit) exitWith {
    _this remoteExecCall [QFUNC(assignLoadout), _unit];
};

private _faction = [_unit] call CFUNC(getFaction);
private _script = format ["loadouts\%1\%2.sqf", _faction, _role];
private _content = preprocessFileLineNumbers _script;

call compile format ["this = %1; %2", _unit, _content];

_unit setVariable [QGVAR(loadout), _role, true];
