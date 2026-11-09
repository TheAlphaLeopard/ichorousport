// gml_Script_imgui_reset_style @ 0x14026c1e0

undefined8 *
gml_Script_imgui_reset_style
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  byte local_34;
  
  local_60 = "gml_Script_anon@5093@ImguiWindow@DebugPanelFuncs";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0xe2;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0xe3;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar1,DAT_141a570e0,0x80000000,&local_a8,(ulonglong)pcVar2 & 0xffffffffffffff00,
                in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_40) goto LAB_14026c308;
  }
  local_88 = *(undefined4 *)param_5;
  uStack_84 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_80 = *(undefined4 *)(param_5 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  FUN_140041b80(&local_40,&local_88);
LAB_14026c308:
  local_70 = &local_40;
  uVar1 = FUN_140069500(uVar1);
  FUN_140e63610(uVar1,param_2,&local_98,1,&local_a8,&local_70);
  local_58 = 0xe4;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar1 = FUN_140e5c910();
  FUN_140e42c10(uVar1,param_1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

