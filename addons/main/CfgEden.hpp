class Cfg3DEN {
    class Mission {
        class ARCMF {
            displayName = "ARCMF Settings";
            display = "Display3DENEditAttributesPreview";
            class AttributeCategories {};
        };
    };
};

class ctrlMenuStrip;
class display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class Attributes {
                    items[] += {"ARCMF"};
                };
                class ARCMF {
                    text = "ARCMF Settings";
                    items[] = {};
                };
            };
        };
    };
};
