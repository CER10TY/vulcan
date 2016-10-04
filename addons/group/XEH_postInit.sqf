#include "script_component.hpp"

// TODO Make delay an argument settable via the mission
[FUNC(updateMarkers), GVAR(delay), []] call CBA_fnc_addPerFrameHandler;
