// gml_Script___update_xywh_anon_3339_ImguiWindow_DebugPanelFuncs @ 0x140269cb0

undefined8 *
gml_Script___update_xywh_anon_3339_ImguiWindow_DebugPanelFuncs
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_set_size@anon@2274@ImguiWindow@DebugPanelFuncs";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x68;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 == &local_88) goto LAB_140269d93;
  }
  local_68 = *(undefined4 *)puVar2;
  uStack_64 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_60 = *(undefined4 *)(puVar2 + 1);
  uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_68);
LAB_140269d93:
  FUN_140e87930(uVar1,DAT_141a00fd8,0x80000000,&local_88);
  local_38 = 0x69;
  if ((param_4 < 2) || (puVar3 = (undefined8 *)param_5[1], puVar3 != &local_98)) {
    local_68 = *(undefined4 *)puVar3;
    uStack_64 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_60 = *(undefined4 *)(puVar3 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_68);
  }
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar1,DAT_141a01058,0x80000000,&local_98);
  local_38 = 0x6a;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_5c = 0xd;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = uStack_60;
  uStack_4c = 0xd;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_58);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar1,DAT_141a56f00,0x80000000,&local_78);
  local_38 = 0x6c;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar1 = FUN_140e5c910();
  FUN_140e42c10(uVar1,param_1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

