// gml_Script_anon_19878_DefineTrinkets_TRINKETSINIT @ 0x1405f8e60

undefined8 *
gml_Script_anon_19878_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@19448@DefineTrinkets@TRINKETSINIT";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_5c = 0xffffff;
  local_68 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x30c;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_5c = 0;
  local_68 = 0x4056800000000000;
  FUN_140e87930(uVar1,DAT_141a0a7d8,0x80000000,&local_68);
  local_28 = 0x30d;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  local_4c = 0xf;
  local_58 = 0x1000000000000ee;
  FUN_140e87440(&local_58,DAT_1419ffd78,0x80000000,&local_48,0,0);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140e87440(uVar1,DAT_141a0a7d8,0x80000000,&local_78,0,0);
  local_4c = local_6c;
  local_50 = local_70;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
    local_58 = local_78;
  }
  else {
    FUN_1400419b0(&local_58,&local_78);
  }
  FUN_1400460e0(&local_48,&local_58);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_4c = 0xf;
  local_58 = 0x1000000000000ee;
  FUN_140e87930(&local_58,DAT_1419ffd78,0x80000000,&local_48);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

