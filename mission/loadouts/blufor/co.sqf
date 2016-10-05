comment "Exported from Arsenal by Kingsley";

comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment "Add containers";
this forceAddUniform "U_I_GhillieSuit";
for "_i" from 1 to 7 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {this addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToUniform "30Rnd_65x39_caseless_mag";};
this addVest "V_PlateCarrierSpec_rgr";
for "_i" from 1 to 11 do {this addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToVest "ACE_morphine";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
this addItemToVest "SmokeShell";
this addItemToVest "SmokeShellGreen";
for "_i" from 1 to 2 do {this addItemToVest "Chemlight_green";};
this addBackpack "O_Mortar_01_weapon_F";
this addHeadgear "H_StrawHat";
this addGoggles "G_Shades_Blue";

comment "Add weapons";
this addWeapon "arifle_MXM_F";
this addPrimaryWeaponItem "acc_pointer_IR";
this addPrimaryWeaponItem "optic_Aco";
this addWeapon "launch_B_Titan_short_tna_F";
this addWeapon "ACE_VMH3";
this addWeapon "Laserdesignator_03";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "I_UavTerminal";
this linkItem "O_NVGoggles_urb_F";

comment "Set identity";
this setFace "WhiteHead_16";
this setSpeaker "Male01ENG";
[this,"CTRG15"] call bis_fnc_setUnitInsignia;
