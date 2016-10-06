class GVAR(CommPlans) {
    displayName = "Comm Plan";
    ARCMF_Briefing = 1;
    class AttributeCategories {
        #define RADIO(SIDE, NAME, QNAME)\
            class NAME {\
                displayName = QNAME;\
                tooltip = "List the elements that will be using this radio, eg. A1 (Ch 1).";\
                property = QGVAR(DOUBLES(SIDE,NAME));\
                control = "EditMulti3";\
                expression = QUOTE(missionNamespace setVariable [ARR_3(QQGVAR(DOUBLES(SIDE,NAME)), _value, true)]);\
                defaultValue = "nil";\
            }

        #define GENERAL_SIDE(SIDE, QSIDE, COLLAPSED)\
            class SIDE {\
                displayName = QSIDE;\
                collapsed = COLLAPSED;\
                class Attributes {\
                    RADIO(SIDE,ANPRC343,"AN/PRC-343");\
                    RADIO(SIDE,ANPRC148,"AN/PRC-148");\
                    RADIO(SIDE,ANPRC152,"AN/PRC-152");\
                    RADIO(SIDE,ANPRC117F,"AN/PRC-117F");\
                    RADIO(SIDE,ANPRC77,"AN/PRC-77");\
                };\
            }

        GENERAL_SIDE(BLUFOR, "BLUFOR", 0);
        GENERAL_SIDE(OPFOR, "OPFOR", 1);
        GENERAL_SIDE(INDFOR, "INDFOR", 1);
        GENERAL_SIDE(CIVILIAN, "CIVILIAN", 1);
        GENERAL_SIDE(GAME_MASTER, "GAME MASTER", 1);
    };
};
