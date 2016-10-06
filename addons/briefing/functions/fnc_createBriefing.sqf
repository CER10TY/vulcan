/*
 * Author: Kingsley
 * Creates the briefing for the given side
 *
 * Arguments:
 * 0: Side <SIDE>
 *
 * Return Value:
 * None
 *
 * Example:
 * [west] call arcmf_briefing_fnc_createBriefing;
 *
 * Public: No
 */

#include "script_component.hpp"

params [["_side", sideUnknown, [sideUnknown]]];

private _faction = [_side] call CFUNC(getFaction);
private _output = "";

{
    _x params ["_title", "_key"];

    private _content = missionNamespace getVariable [format ["%1_%2_%3", QUOTE(ADDON), _faction, _key], ""];

    if (count _content > 0) then {
        private _sectionContent = format [
            "<font size='15' face='PuristaBold'>%1</font><br/><font size='14'>%2</font><br/><br/>",
            toUpper _title,
            _content
        ];

        _output = format ["%1%2", _output, _sectionContent];
    };
} forEach [
    ["Situation", "Situation"],
    ["Enemy Forces", "EnemyForces"],
    ["Friendly Forces", "FriendlyForces"],
    ["Mission", "Mission"],
    ["Commanders Intent", "CommandersIntent"],
    ["Movement Plan", "MovementPlan"]
];

player createDiaryRecord ["diary", ["Briefing", _output]];
