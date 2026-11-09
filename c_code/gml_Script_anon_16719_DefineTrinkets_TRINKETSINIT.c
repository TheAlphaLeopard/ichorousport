// gml_Script_anon_16719_DefineTrinkets_TRINKETSINIT @ 0x1405f38b0

undefined8 *
gml_Script_anon_16719_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [12];
  byte local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@16237@DefineTrinkets@TRINKETSINIT";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x292;
  uStack_7c = 0xf;
  local_88 = 0x1000000000000ee;
  FUN_140e87440(&local_88,DAT_141a0a738,0x80000000,&local_68,0,0);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  puVar1 = (undefined8 *)FUN_14018a720(local_48,&local_68,10);
  uStack_7c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_80 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_88,puVar1);
  }
  uStack_4c = 0;
  local_58 = 0x3f847ae147ae147b;
  FUN_140042560(&local_88,&local_58);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_58 = local_88;
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_58);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_48);
  }
  uStack_4c = 0xf;
  local_58 = 0x1000000000000ee;
  FUN_140e87930(&local_58,DAT_1419ff9f8,0x80000000,&local_78);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

