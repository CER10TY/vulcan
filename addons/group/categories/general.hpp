#define GENERAL_SIDE(SIDE, COLLAPSED)\
    class SIDE {\
        displayName = QUOTE(SIDE);\
        collapsed = 0;\
        class Attributes {\
            class Enabled {\
                displayName = "Enabled";\
                tooltip = "Toggle group markers for the given side";\
                property = QGVAR(DOUBLES(Enabled,SIDE));\
                control = "Checkbox";\
                expression = "_this setVariable [%s, _value];";\
                defaultValue = 1;\
            };\
            class Delay {\
                displayName = "Delay";\
                tooltip = "Delay in seconds for each marker update";\
                property = QGVAR(DOUBLES(Delay,SIDE));\
                control = "EditShort";\
                expression = "_this setVariable [%s, parseNumber _value];";\
                defaultValue = "2";\
            };\
            class Accuracy {\
                displayName = "Accuracy";\
                tooltip = "Accuracy of the marker position in meters";\
                property = QGVAR(DOUBLES(Accuracy,SIDE));\
                control = "EditShort";\
                expression = "_this setVariable [%s, parseNumber _value];";\
                defaultValue = "0";\
            };\
        };\
    }

GENERAL_SIDE(BLUFOR, 0);
GENERAL_SIDE(OPFOR, 1);
GENERAL_SIDE(INDFOR, 1);
GENERAL_SIDE(CIVILIAN, 1);
