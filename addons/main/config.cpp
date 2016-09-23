#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common"};
        author[] = {"ARCOMM"};
        authorUrl = "http://arcomm.co";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
