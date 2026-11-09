// gml_Script_anon_27741_DefineTrinkets_TRINKETSINIT @ 0x140605140

undefined8 *
gml_Script_anon_27741_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [3];
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@27494@DefineTrinkets@TRINKETSINIT";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_7c = 0xffffff;
  local_88 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x409;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar2,DAT_1419ffe48,0x80000000,&local_88,0,0);
  local_6c = 0;
  local_78 = 0;
  iVar1 = FUN_140e851f0(&local_88,&local_78,DAT_141955260,1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar1 == -2 || 0 < iVar1) {
    local_28 = 0x40a;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    FUN_140e87440(param_5,DAT_141a1f440,0x80000000,&local_58,0,0);
    FUN_140e87440(&local_58,DAT_1419f62b8,0x80000000,&local_68,0,0);
    FUN_140e87440(uVar2,DAT_1419ffe48,0x80000000,&local_88,0,0);
    local_6c = local_7c;
    local_70 = local_80;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
      local_78 = local_88;
    }
    else {
      FUN_1400419b0(&local_78,&local_88);
    }
    local_3c = 7;
    local_48[0] = 4;
    FUN_140042560(&local_78,local_48);
    if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_48);
    }
    FUN_1400460e0(&local_68,&local_78);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140e87930(&local_58,DAT_1419f62b8,0x80000000,&local_68);
  }
  else {
    local_28 = 0x409;
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

