class ctrlMenuStrip;
class display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class ARCMF {
                    items[] += {QGVAR(MenuItem)};
                };
                class GVAR(MenuItem) {
                    text = "Group Markers";
                    action = QUOTE(edit3DENMissionAttributes QQGVAR(Settings));
                };
            };
        };
    };
};

class Cfg3DEN {
    class Mission {
        class GVAR(Settings) {
            displayName = "Group Markers";
            class AttributeCategories {
                #include "categories\general.hpp"
            };
        };
    };
};
