class CfgVehicles {
    class ACE_Module;

    class GVAR(module): ACE_Module {
        author = "Kingsley";
        category = QUOTE(ARCMF_TAG);
        displayName = "Group Markers";
        function = QFUNC(moduleInit);
        scope = 2;
        isGlobal = 1;
        isTriggerActivated = 0;
        isDisposable = 0;
        // icon = QPATHTOF(UI\icon_ca.paa);
        class Arguments {
            class Enabled {
                displayName = "Enabled";
                description = "";
                typeName = "BOOL";
                defaultValue = 1;
            };
            class Delay {
                displayName = "Delay";
                description = "Marker update delay in seconds";
                typeName = "NUMBER";
                defaultValue = 2;
            };
        };
        class ModuleDescription {
            description = "Change group marker options";
        };
    };
};
