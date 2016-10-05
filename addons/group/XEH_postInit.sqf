#include "script_component.hpp"

if (!hasInterface) exitWith {};

EXIT_IF_ADDON_INACTIVE(COMPONENT);

[FUNC(updateGroupMarkers), 1, []] call CBA_fnc_addPerFrameHandler;
[FUNC(updateFireteamMarkers), 0.2, []] call CBA_fnc_addPerFrameHandler;
