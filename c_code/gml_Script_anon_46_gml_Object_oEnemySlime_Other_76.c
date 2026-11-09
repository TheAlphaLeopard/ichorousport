// gml_Script_anon_46_gml_Object_oEnemySlime_Other_76 @ 0x140a7e790

void gml_Script_anon_46_gml_Object_oEnemySlime_Other_76(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  longlong *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oEnemySlime_Step_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_4c = 0xffffff;
  local_58 = (longlong *)0x0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_28 = 3;
  FUN_140e98b30();
  local_28 = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
  uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_70 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
    local_78 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_78,puVar3);
  }
  uStack_3c = 0;
  local_48 = (longlong *)0x3fd3333333333333;
  FUN_140042560(&local_78,&local_48);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  iVar1 = FUN_140e851f0(uVar2,&local_78,DAT_141955260,1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar1 == -2 || 0 < iVar1) {
    local_28 = 7;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
    uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
    uStack_70 = *(undefined4 *)(puVar3 + 1);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
      local_78 = *puVar3;
    }
    else {
      FUN_1400419b0(&local_78,puVar3);
    }
    uStack_3c = 0;
    local_48 = (longlong *)0x3fe3333333333333;
    FUN_140042560(&local_78,&local_48);
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    iVar1 = FUN_140e851f0(uVar2,&local_78,DAT_141955260,1);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    uStack_3c = 0xf;
    if (iVar1 < 1) {
      local_28 = 10;
      local_48 = (longlong *)0x1000001000002cd;
      local_78 = 0x1000001000002cd;
      uStack_70 = uStack_40;
      uStack_6c = 0xf;
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_78);
    }
    else {
      local_28 = 8;
      local_48 = (longlong *)0x1000001000002ce;
      local_78 = 0x1000001000002ce;
      uStack_70 = uStack_40;
      uStack_6c = 0xf;
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_78);
    }
  }
  else {
    local_28 = 6;
    uStack_3c = 0xf;
    local_48 = (longlong *)0x1000001000002cf;
    local_78 = 0x1000001000002cf;
    uStack_70 = uStack_40;
    uStack_6c = 0xf;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_78);
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_88);
  local_28 = 0xc;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  uStack_3c = 6;
  local_48 = param_1;
  FUN_140e87440(&local_48,DAT_141a0a728,0x80000000,&local_58,0,0);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_48 = local_58;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_48);
  FUN_140e87930(uVar2,DAT_141a0a9f8,0x80000000,&local_68);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

