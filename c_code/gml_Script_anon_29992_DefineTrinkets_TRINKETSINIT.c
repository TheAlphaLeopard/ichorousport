// gml_Script_anon_29992_DefineTrinkets_TRINKETSINIT @ 0x1406089a0

undefined8 *
gml_Script_anon_29992_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@29653@DefineTrinkets@TRINKETSINIT";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_4c = 0xffffff;
  local_58 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x440;
  uStack_6c = 0xf;
  local_78 = 0x1000000000000ee;
  FUN_140e87440(&local_78,DAT_1419f59c8,0x80000000,&local_58,0,0);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  uStack_6c = 0;
  local_78 = 0x3ff547ae147ae148;
  FUN_140042560(&local_58,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  uStack_6c = 0xf;
  local_78 = 0x1000000000000ee;
  FUN_140e87930(&local_78,DAT_1419f59c8,0x80000000,&local_58);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_28 = 0x441;
  uStack_6c = 0xf;
  local_78 = 0x1000000000000ee;
  FUN_140e87440(&local_78,DAT_1419f59c8,0x80000000,&local_98,0,0);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  uStack_6c = local_8c;
  uStack_70 = local_90;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_78 = local_98;
  }
  else {
    FUN_1400419b0(&local_78,&local_98);
  }
  uVar1 = uStack_6c;
  local_48 = (undefined4)local_78;
  uStack_44 = local_78._4_4_;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_48);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  uStack_6c = 0xf;
  local_78 = 0x1000000000000ee;
  FUN_140e87930(&local_78,DAT_141a0a7d8,0x80000000,&local_88);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_28 = 0x442;
  uStack_6c = 0xf;
  local_78 = 0x1000000000000ee;
  FUN_140e87440(&local_78,DAT_1419f5ba8,0x80000000,&local_68,0,0);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  uStack_6c = 0;
  local_78 = 0x3fe8000000000000;
  FUN_140042560(&local_68,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  uStack_6c = 0xf;
  local_78 = 0x1000000000000ee;
  FUN_140e87930(&local_78,DAT_1419f5ba8,0x80000000,&local_68);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

