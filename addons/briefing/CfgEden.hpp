class ctrlMenuStrip;
class display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class ARCMF {
                    items[] += {QGVAR(MenuItem)};
                };
                class GVAR(MenuItem) {
                    text = "Briefings";
                    action = QUOTE(edit3DENMissionAttributes QQGVAR(Settings));
                };
            };
        };
    };
};

class Cfg3DEN {
    class Mission {
        class GVAR(Settings) {
            displayName = "Briefings";
            class AttributeCategories {
                #define GENERAL_SIDE(SIDE, COLLAPSED)\
                    class SIDE {\
                        displayName = QUOTE(SIDE);\
                        collapsed = COLLAPSED;\
                        class Attributes {\
                            class Situation {\
                                displayName = "Situation";\
                                tooltip = "Describe the situation of the mission. Use Shift+Enter to make a line break.";\
                                property = QGVAR(DOUBLES(Situation,SIDE));\
                                control = "EditMulti3";\
                                expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,Situation)), _value, true)]);\
                                defaultValue = "nil";\
                            };\
                            class EnemyForces {\
                                displayName = "Enemy Forces";\
                                tooltip = "Describe the enemy forces and any of their assets you'd like to share. Use Shift+Enter to make a line break.";\
                                property = QGVAR(DOUBLES(EnemyForces,SIDE));\
                                control = "EditMulti3";\
                                expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,EnemyForces)), _value, true)]);\
                                defaultValue = "nil";\
                            };\
                            class FriendlyForces {\
                                displayName = "Friendly Forces";\
                                tooltip = "Describe the friendly forces and any of their assets you'd like to share. Use Shift+Enter to make a line break.";\
                                property = QGVAR(DOUBLES(FriendlyForces,SIDE));\
                                control = "EditMulti3";\
                                expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,FriendlyForces)), _value, true)]);\
                                defaultValue = "nil";\
                            };\
                            class Mission {\
                                displayName = "Mission";\
                                tooltip = "List the mission objectives. Use Shift+Enter to make a line break.";\
                                property = QGVAR(DOUBLES(Mission,SIDE));\
                                control = "EditMulti5";\
                                expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,Mission)), _value, true)]);\
                                defaultValue = "nil";\
                            };\
                            class CommandersIntent {\
                                displayName = "Commanders Intent";\
                                tooltip = "List the commander's intentions of the mission. How should objectives be completed, what is high priority etc. Use Shift+Enter to make a line break.";\
                                property = QGVAR(DOUBLES(CommandersIntent,SIDE));\
                                control = "EditMulti5";\
                                expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,CommandersIntent)), _value, true)]);\
                                defaultValue = "nil";\
                            };\
                            class MovementPlan {\
                                displayName = "Movement Plan";\
                                tooltip = "List the movement plan on how best to deploy the friendly forces. Use Shift+Enter to make a line break.";\
                                property = QGVAR(DOUBLES(MovementPlan,SIDE));\
                                control = "EditMulti5";\
                                expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,MovementPlan)), _value, true)]);\
                                defaultValue = "nil";\
                            };\
                        };\
                    }

                GENERAL_SIDE(BLUFOR, 0);
                GENERAL_SIDE(OPFOR, 1);
                GENERAL_SIDE(INDFOR, 1);
                GENERAL_SIDE(CIVILIAN, 1);
            };
        };
    };
};
