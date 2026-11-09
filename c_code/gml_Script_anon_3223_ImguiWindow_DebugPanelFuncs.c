// gml_Script_anon_3223_ImguiWindow_DebugPanelFuncs @ 0x140269f40

undefined8 *
gml_Script_anon_3223_ImguiWindow_DebugPanelFuncs
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_50 = "gml_Script_set_constraints@anon@2409@ImguiWindow@DebugPanelFuncs";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x70;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_14026a00e:
    local_b8 = *(undefined4 *)puVar2;
    uStack_b4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_b0 = *(undefined4 *)(puVar2 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_b8);
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 != &local_78) goto LAB_14026a00e;
  }
  FUN_140e87930(uVar1,DAT_141a56df0,0x80000000,&local_78);
  local_48 = 0x71;
  if (param_4 < 3) {
    puVar2 = &DAT_1419df7b0;
LAB_14026a070:
    local_b8 = *(undefined4 *)puVar2;
    uStack_b4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_b0 = *(undefined4 *)(puVar2 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_b8);
  }
  else {
    puVar2 = (undefined8 *)param_5[2];
    if (puVar2 != &local_88) goto LAB_14026a070;
  }
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar1,DAT_141a57210,0x80000000,&local_88);
  local_48 = 0x72;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
    if (puVar2 == &local_98) goto LAB_14026a10b;
  }
  local_b8 = *(undefined4 *)puVar2;
  uStack_b4 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_b0 = *(undefined4 *)(puVar2 + 1);
  uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_b8);
LAB_14026a10b:
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar1,DAT_141a57000,0x80000000,&local_98);
  local_48 = 0x73;
  if ((param_4 < 4) || (puVar3 = (undefined8 *)param_5[3], puVar3 != &local_a8)) {
    local_b8 = *(undefined4 *)puVar3;
    uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_b0 = *(undefined4 *)(puVar3 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_b8);
  }
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar1,DAT_141a56fe0,0x80000000,&local_a8);
  local_48 = 0x74;
  local_b8 = 0;
  uStack_b4 = 0x3ff00000;
  uStack_ac = 0xd;
  local_38 = 0;
  uStack_34 = 0x3ff00000;
  uStack_30 = uStack_b0;
  uStack_2c = 0xd;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_38);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar1,DAT_141a57090,0x80000000,&local_68);
  local_48 = 0x75;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar1 = FUN_140e5c910();
  FUN_140e42c10(uVar1,param_1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

