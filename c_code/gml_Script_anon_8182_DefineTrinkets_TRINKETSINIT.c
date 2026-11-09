// gml_Script_anon_8182_DefineTrinkets_TRINKETSINIT @ 0x1405e89f0

undefined8 *
gml_Script_anon_8182_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@7916@DefineTrinkets@TRINKETSINIT";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_5c = 0xffffff;
  local_68 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x126;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar2,DAT_1419ffde8,0x80000000,&local_68,0,0);
  cVar1 = FUN_140e491e0(&local_68);
  if (cVar1 == '\0') {
    local_28 = 0x126;
  }
  else {
    local_28 = 0x127;
    uStack_50 = CONCAT44(0xd,(undefined4)uStack_50);
    local_58 = 0;
    local_48 = 0;
    uStack_40 = uStack_50;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_48);
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    FUN_140e87930(uVar2,DAT_1419ffde8,0x80000000,&local_98);
    local_28 = 0x128;
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    FUN_140e87440(param_5,DAT_141a1f440,0x80000000,&local_78,0,0);
    FUN_140e87440(&local_78,DAT_1419f62b8,0x80000000,&local_88,0,0);
    uStack_50 = uStack_50 & 0xffffffff;
    local_58 = 0x3fe8000000000000;
    FUN_140042560(&local_88,&local_58);
    if ((1 << ((byte)(uStack_50 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140e87930(&local_78,DAT_1419f62b8,0x80000000,&local_88);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

