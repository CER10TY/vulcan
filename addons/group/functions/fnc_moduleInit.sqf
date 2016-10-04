/*
 * Author: Kingsley
 * Initializes the group marker module.
 *
 * Arguments:
 * 0: The module logic <LOGIC>
 * 1: Units <ARRAY> (Unused)
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

#include "script_component.hpp"

if (!isServer) exitWith {};

params ["_logic", "", "_activated"];

if (!_activated) exitWith {};

[_logic, QGVAR(enabled), "Enabled"] call ACEFUNC(common,readSettingFromModule);
[_logic, QGVAR(delay), "Delay"] call ACEFUNC(common,readSettingFromModule);
