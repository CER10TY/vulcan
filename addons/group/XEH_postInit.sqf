#include "script_component.hpp"

EXIT_IF_ADDON_INACTIVE(COMPONENT);

[FUNC(updateGroupMarkers), 1, []] call CBA_fnc_addPerFrameHandler;
[FUNC(updateFireteamMarkers), 1, []] call CBA_fnc_addPerFrameHandler;
