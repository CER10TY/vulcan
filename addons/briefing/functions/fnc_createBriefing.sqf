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
private _sections = "getNumber (_x >> 'ARCMF_Briefing') == 1" configClasses (configFile >> "Cfg3DEN" >> "Mission");
reverse _sections;

{
    private _header = getText (_x >> "displayName");
    private _config = (_x >> "AttributeCategories" >> _faction >> "Attributes");
    private _output = "";

    {
        private _key = configName _x;
        private _title = getText (_x >> "displayName");
        private _content = missionNamespace getVariable [format ["%1_%2_%3", QUOTE(ADDON), _faction, _key], ""];

        _content = [_content, toString [10], "<br/>"] call CBA_fnc_replace;
        _content = [_content, toString [92,110], "<br/>"] call CBA_fnc_replace;

        if (count _content > 0) then {
            private _sectionContent = format [
                "<font size='15' face='PuristaBold'>%1</font><br/><font size='14'>%2</font><br/><br/>",
                toUpper _title,
                _content
            ];

            _output = format ["%1%2", _output, _sectionContent];
        };
    } forEach ("true" configClasses _config);

    if (count _output > 0) then {
        player createDiaryRecord ["diary", [_header, _output]];
    };
} forEach _sections;
