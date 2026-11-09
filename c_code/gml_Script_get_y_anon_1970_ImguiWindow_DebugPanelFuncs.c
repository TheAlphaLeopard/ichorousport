// gml_Script_get_y_anon_1970_ImguiWindow_DebugPanelFuncs @ 0x1402691f0

undefined8 **
gml_Script_get_y_anon_1970_ImguiWindow_DebugPanelFuncs
          (longlong *param_1,undefined8 param_2,undefined8 **param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong in_stack_ffffffffffffff30;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_50 = "gml_Script_is_open@anon@1739@ImguiWindow@DebugPanelFuncs";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x4c;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_7c = 0xffffff;
  local_88 = (undefined8 *)0x0;
  local_9c = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (undefined8 *)0x0;
  local_48 = 0x4d;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  in_stack_ffffffffffffff30 = in_stack_ffffffffffffff30 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_141a56f20,0x80000000,&local_98,uVar6,in_stack_ffffffffffffff30);
  uStack_c0 = (undefined1 *)CONCAT44(10,(undefined4)uStack_c0);
  local_c8 = (undefined8 *)0x2;
  iVar1 = FUN_140e851f0(&local_98,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)uStack_c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar1 == 0) {
LAB_140269416:
    local_48 = 0x4e;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0aa28);
    puVar3 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_b8,0,uVar2,0);
    if (puVar3 != &local_78) {
      local_c8 = (undefined8 *)*puVar3;
      uStack_c0 = (undefined1 *)puVar3[1];
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_c8);
    }
    local_c8 = &local_78;
    local_40._0_4_ = (undefined4)DAT_1419df7b0;
    local_40._4_4_ = DAT_1419df7b0._4_4_;
    uStack_38 = DAT_1419df7b8;
    uStack_34 = DAT_1419df7bc;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_40);
    uStack_c0 = local_68;
    ppuVar4 = (undefined8 **)
              gml_Script_imgui_is_item_toggled_selection(param_1,param_2,&local_a8,2,&local_c8);
    if (ppuVar4 == param_3) goto LAB_140269554;
    local_40._0_4_ = *(undefined4 *)ppuVar4;
    local_40._4_4_ = *(undefined4 *)((longlong)ppuVar4 + 4);
    uStack_38 = *(undefined4 *)(ppuVar4 + 1);
    uStack_34 = *(undefined4 *)((longlong)ppuVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    ppuVar4 = (undefined8 **)&local_40;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    in_stack_ffffffffffffff30 = in_stack_ffffffffffffff30 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_141a56f20,0x80000000,&local_98,uVar6,in_stack_ffffffffffffff30);
    uStack_c0 = (undefined1 *)CONCAT44(10,(undefined4)uStack_c0);
    local_c8 = (undefined8 *)0x3;
    iVar1 = FUN_140e851f0(&local_98,&local_c8,DAT_141955260,0);
    if ((1 << ((byte)((ulonglong)uStack_c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if (iVar1 == 0) goto LAB_140269416;
    local_48 = 0x4f;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87440(uVar2,DAT_141a57260,0x80000000,&local_88,uVar6 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff30 & 0xffffffffffffff00);
    if (&local_88 == param_3) goto LAB_140269554;
    local_c8 = local_88;
    uStack_c0 = (undefined1 *)CONCAT44(uStack_7c,uStack_80);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    ppuVar4 = &local_c8;
  }
  FUN_140041b80(param_3,ppuVar4);
LAB_140269554:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

