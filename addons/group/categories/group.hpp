class GVAR(Options) {
    displayName = "Group Marker";
    collapsed = 0;
    class Attributes {
        class Enabled {
            displayName = "Enabled";
            tooltip = "Toggle group markers for this group";
            property = QGVAR(enabled);
            control = "Checkbox";
            expression = QUOTE(_this setVariable [ARR_3(QQGVAR(enabled), _value, true)]);
            defaultValue = 1;
        };
        class Delay {
            displayName = "Delay";
            tooltip = "Delay in seconds for this group's marker update";
            property = QGVAR(delay);
            control = "EditShort";
            expression = QUOTE(_this setVariable [ARR_3(QQGVAR(delay), parseNumber _value, true)]);
            defaultValue = QUOTE(DEFAULT_DELAY);
        };
        class Accuracy {
            displayName = "Accuracy";
            tooltip = "Accuracy of this group's marker position in meters";
            property = QGVAR(accuracy);
            control = "EditShort";
            expression = QUOTE(_this setVariable [ARR_3(QQGVAR(accuracy), parseNumber _value, true)]);
            defaultValue = "0";
        };
        class Text {
            displayName = "Text";
            tooltip = "Text shown on this group's marker";
            property = QGVAR(text);
            control = "Edit";
            expression = QUOTE(_this setVariable [ARR_3(QQGVAR(text), _value, true)]);
            defaultValue = "groupId _this";
        };
        class Color {
            displayName = "Color";
            tooltip = "Color of this group's marker";
            property = QGVAR(color);
            control = "MarkerColor";
            expression = QUOTE(_this setVariable [ARR_3(QQGVAR(color), _value, true)]);
        };
    };
};
