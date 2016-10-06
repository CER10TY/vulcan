class GVAR(Briefings) {
    displayName = "Briefing";
    ARCMF_Briefing = 1;
    class AttributeCategories {
        #define GENERAL_SIDE(SIDE, QSIDE, COLLAPSED)\
            class SIDE {\
                displayName = QSIDE;\
                collapsed = COLLAPSED;\
                class Attributes {\
                    class Situation {\
                        displayName = "Situation";\
                        tooltip = "Describe the situation of the mission. Use Shift+Enter to make a line break.";\
                        property = QGVAR(DOUBLES(SIDE,Situation));\
                        control = "EditMulti5";\
                        expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,Situation)), _value, true)]);\
                        defaultValue = "nil";\
                    };\
                    class EnemyForces {\
                        displayName = "Enemy Forces";\
                        tooltip = "Describe the enemy forces and any of their assets you'd like to share. Use Shift+Enter to make a line break.";\
                        property = QGVAR(DOUBLES(SIDE,EnemyForces));\
                        control = "EditMulti5";\
                        expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,EnemyForces)), _value, true)]);\
                        defaultValue = "nil";\
                    };\
                    class FriendlyForces {\
                        displayName = "Friendly Forces";\
                        tooltip = "Describe the friendly forces and any of their assets you'd like to share. Use Shift+Enter to make a line break.";\
                        property = QGVAR(DOUBLES(SIDE,FriendlyForces));\
                        control = "EditMulti5";\
                        expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,FriendlyForces)), _value, true)]);\
                        defaultValue = "nil";\
                    };\
                    class Mission {\
                        displayName = "Mission";\
                        tooltip = "List the mission objectives. Use Shift+Enter to make a line break.";\
                        property = QGVAR(DOUBLES(SIDE,Mission));\
                        control = "EditMulti5";\
                        expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,Mission)), _value, true)]);\
                        defaultValue = "nil";\
                    };\
                    class CommandersIntent {\
                        displayName = "Commanders Intent";\
                        tooltip = "List the commander's intentions of the mission. How should objectives be completed, what is high priority etc. Use Shift+Enter to make a line break.";\
                        property = QGVAR(DOUBLES(SIDE,CommandersIntent));\
                        control = "EditMulti5";\
                        expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,CommandersIntent)), _value, true)]);\
                        defaultValue = "nil";\
                    };\
                    class MovementPlan {\
                        displayName = "Movement Plan";\
                        tooltip = "List the movement plan on how best to deploy the friendly forces. Use Shift+Enter to make a line break.";\
                        property = QGVAR(DOUBLES(SIDE,MovementPlan));\
                        control = "EditMulti5";\
                        expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,MovementPlan)), _value, true)]);\
                        defaultValue = "nil";\
                    };\
                    class FireSupportPlan {\
                        displayName = "Fire Support Plan";\
                        tooltip = "Outline any fire support assets and how they will be deployed. Use Shift+Enter to make a line break.";\
                        property = QGVAR(DOUBLES(SIDE,FireSupportPlan));\
                        control = "EditMulti5";\
                        expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,FireSupportPlan)), _value, true)]);\
                        defaultValue = "nil";\
                    };\
                    class SpecialTasks {\
                        displayName = "Special Tasks";\
                        tooltip = "List any special objectives. Use Shift+Enter to make a line break.";\
                        property = QGVAR(DOUBLES(SIDE,SpecialTasks));\
                        control = "EditMulti5";\
                        expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,SpecialTasks)), _value, true)]);\
                        defaultValue = "nil";\
                    };\
                    class Logistics {\
                        displayName = "Logistics";\
                        tooltip = "List any friendly assets, ammo counts etc. Use Shift+Enter to make a line break.";\
                        property = QGVAR(DOUBLES(SIDE,Logistics));\
                        control = "EditMulti5";\
                        expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,Logistics)), _value, true)]);\
                        defaultValue = "nil";\
                    };\
                    class Notes {\
                        displayName = "Notes";\
                        tooltip = "Additional notes for the mission. Use Shift+Enter to make a line break.";\
                        property = QGVAR(DOUBLES(SIDE,Notes));\
                        control = "EditMulti5";\
                        expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,Notes)), _value, true)]);\
                        defaultValue = "nil";\
                    };\
                };\
            }

        GENERAL_SIDE(BLUFOR, "BLUFOR", 0);
        GENERAL_SIDE(OPFOR, "OPFOR", 1);
        GENERAL_SIDE(INDFOR, "INDFOR", 1);
        GENERAL_SIDE(CIVILIAN, "CIVILIAN", 1);
        GENERAL_SIDE(GAME_MASTER, "GAME MASTER", 1);
    };
};
