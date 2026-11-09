// gml_Script_toggle_open_anon_1655_ImguiWindow_DebugPanelFuncs @ 0x140268a60

undefined8 *
gml_Script_toggle_open_anon_1655_ImguiWindow_DebugPanelFuncs
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_set_open@anon@1371@ImguiWindow@DebugPanelFuncs";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_7c = 0xffffff;
  local_88 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_9c = 0;
  local_a8 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x3a;
  uVar2 = (**(code **)(*param_1 + 8))(0,DAT_141a57250);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_88) goto LAB_140268b58;
  }
  local_58 = *(undefined4 *)param_5;
  uStack_54 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_58);
LAB_140268b58:
  FUN_140e87930(uVar2,DAT_141a57260,0x80000000,&local_88);
  local_38 = 0x3c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56de0);
  uVar6 = 0;
  uVar2 = FUN_140e63610(param_1,param_2,&local_a8,0,uVar3,0);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_38 = 0x3d;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87440(uVar2,DAT_141a570e0,0x80000000,&local_78,uVar3 & 0xffffffffffffff00,
                  uVar6 & 0xffffffffffffff00);
    puVar5 = &local_a8;
    puVar4 = &local_78;
  }
  else {
    local_38 = 0x3c;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87440(uVar2,DAT_141a57290,0x80000000,&local_68,uVar3 & 0xffffffffffffff00,
                  uVar6 & 0xffffffffffffff00);
    puVar5 = &local_98;
    puVar4 = &local_68;
  }
  uVar2 = FUN_140069500(uVar2);
  FUN_140e63610(uVar2,param_2,puVar5,0,puVar4,0);
  local_38 = 0x3f;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

