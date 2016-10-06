class ctrlMenuStrip;
class display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class ARCMF {
                    items[] += {
                        QGVAR(MenuItem_Briefings),
                        QGVAR(MenuItem_CommPlans)
                    };
                };
                class GVAR(MenuItem_Briefings) {
                    text = "Briefings";
                    action = QUOTE(edit3DENMissionAttributes QQGVAR(Briefings));
                };
                class GVAR(MenuItem_CommPlans) {
                    text = "Comm Plans";
                    action = QUOTE(edit3DENMissionAttributes QQGVAR(CommPlans));
                };
            };
        };
    };
};

class Cfg3DEN {
    class Mission {
        #include "categories\briefings.hpp"
        #include "categories\commplans.hpp"
    };
};
