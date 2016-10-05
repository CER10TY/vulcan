class GVAR(Loadout) {
    displayName = "Loadout";
    collapsed = 0;
    class Attributes {
        class Role {
            displayName = "Role";
            tooltip = "Unit role defined in the loadout file";
            property = QGVAR(loadout);
            control = "EditShort";
            condition = "objectBrain";
            expression = QUOTE(_this setVariable [ARR_3(QQGVAR(loadout), _value, true)]);
            defaultValue = "";
        };
    };
};
