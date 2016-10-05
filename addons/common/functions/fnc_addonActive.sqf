/*
 * Author: Kingsley
 * Checks whether the given addon is activated in the mission config
 * Does not check whether the given addon is actually loaded
 *
 * Arguments:
 * 0: Addon name <STRING>
 *
 * Return Value:
 * Addon enabled <BOOL>
 *
 * Example:
 * ["group"] call arcmf_common_fnc_addonActive;
 *
 * Public: Yes
 */

#include "script_component.hpp"

params [["_addon", "", [""]]];

private _config = (missionConfigFile >> "Header" >> "ARCMF" >> _addon);

(!isNull _config && {getNumber _config == 1})
