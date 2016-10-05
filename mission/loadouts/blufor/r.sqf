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
this forceAddUniform "U_B_CTRG_1";
for "_i" from 1 to 7 do {this addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 3 do {this addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {this addItemToUniform "30Rnd_556x45_Stanag";};
this addItemToUniform "16Rnd_9x21_Mag";
this addVest "V_HarnessOGL_brn";
for "_i" from 1 to 11 do {this addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 5 do {this addItemToVest "ACE_morphine";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
this addItemToVest "SmokeShell";
this addItemToVest "SmokeShellGreen";
for "_i" from 1 to 2 do {this addItemToVest "Chemlight_green";};
this addBackpack "I_HMG_01_A_weapon_F";
this addHeadgear "H_RacingHelmet_1_red_F";
this addGoggles "G_Sport_Blackyellow";

comment "Add weapons";
this addWeapon "arifle_Mk20C_F";
this addPrimaryWeaponItem "muzzle_snds_m_snd_F";
this addPrimaryWeaponItem "ACE_acc_pointer_green";
this addPrimaryWeaponItem "optic_MRCO";
this addWeapon "rhs_weap_fgm148";
this addWeapon "rhs_weap_makarov_pm";
this addHandgunItem "ACE_muzzle_mzls_smg_02";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemRadio";
this linkItem "B_UavTerminal";
this linkItem "NVGoggles_tna_F";

comment "Set identity";
this setFace "WhiteHead_06";
this setSpeaker "Male01ENG";
[this,"Curator"] call bis_fnc_setUnitInsignia;
