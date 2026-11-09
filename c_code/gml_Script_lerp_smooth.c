// gml_Script_lerp_smooth @ 0x140258de0

undefined8 * gml_Script_lerp_smooth(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  byte local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined8 *local_30;
  
  local_e0 = "gml_Script_BM_NEW_MENU";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x3c;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_68,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_3c = 0;
  local_48 = 0;
  local_b4 = 0;
  local_c0 = 0;
  local_c4 = 0;
  local_d0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddcb8) {
    _Init_thread_header(&DAT_141dddcb8);
    if (DAT_141dddcb8 == -1) {
      DAT_141dddc90 = FUN_140e63aa0(DAT_141a555c0);
      _Init_thread_footer(&DAT_141dddcb8);
    }
  }
  FUN_140e643a0(param_1,DAT_141dddc90);
  local_d8 = 0x3f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a54fa0);
  uStack_fc = 6;
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  local_108 = param_2;
  FUN_140e87440(&local_108,DAT_141a0a828,0x80000000,&local_a8,uVar5,in_stack_fffffffffffffef0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e609c0(param_1);
  if (&local_a8 != puVar1) {
    local_108 = local_a8;
    uStack_100 = uStack_a0;
    uStack_fc = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x42;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a54f00);
  FUN_140e609c0(param_1);
  puVar2 = (undefined8 *)FUN_140e8da20(&local_48,param_1,0);
  if (puVar2 != puVar1) {
    local_108 = *puVar2;
    uStack_100 = *(undefined4 *)(puVar2 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x46;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 5;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a550a0,0x80000000,&local_78,uVar5,in_stack_fffffffffffffef0);
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_78,DAT_141a44d18,0x80000000,&local_88,uVar5,in_stack_fffffffffffffef0);
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_88,DAT_141a45718,0x80000000,&local_98,uVar5,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar5 >> 0x20);
  local_108 = local_98;
  uStack_100 = uStack_90;
  uStack_fc = uStack_8c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_108);
  local_38 = local_68;
  uVar3 = CONCAT44(uVar6,DAT_1419fcb18);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d0,1,uVar3,&local_38);
  uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar1 != &local_58) {
    local_108 = *puVar1;
    uStack_100 = *(undefined4 *)(puVar1 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140041b80(&local_58,&local_108);
  }
  local_30 = &local_58;
  FUN_140e634e0(param_1,param_2,&local_c0,1,CONCAT44(uVar6,DAT_141a03478),&local_30);
  local_d8 = 0x47;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a555a0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,FUN_14024e310,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0xe6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a55560);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_8084_BM_NEW_MENU_BYTEMAP_menu_manager,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0xf0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a54fe0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_9662_BM_NEW_MENU_BYTEMAP_menu_manager,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0xfb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a55200);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_10045_BM_NEW_MENU_BYTEMAP_menu_manager,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x106;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a54e50);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_10440_BM_NEW_MENU_BYTEMAP_menu_manager,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x10f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a55460);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_10689_BM_NEW_MENU_BYTEMAP_menu_manager,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x119;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a55260);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_10857_BM_NEW_MENU_BYTEMAP_menu_manager,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x120;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a55070);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_11199_BM_NEW_MENU_BYTEMAP_menu_manager,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x127;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a55230);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_11749_BM_NEW_MENU_BYTEMAP_menu_manager,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x12f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a55340);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_12797_BM_NEW_MENU_BYTEMAP_menu_manager,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x144;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a55540);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_13354_BM_NEW_MENU_BYTEMAP_menu_manager,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x15c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a557e0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_13943_BM_NEW_MENU_BYTEMAP_menu_manager,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x16e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a55800);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_14565_BM_NEW_MENU_BYTEMAP_menu_manager,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x180;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a55280);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_15165_BM_NEW_MENU_BYTEMAP_menu_manager,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x194;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a550c0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_15722_BM_NEW_MENU_BYTEMAP_menu_manager,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x1a8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a551b0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_BM_NEW_MENU,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x1b8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a55160);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_GlobalScript_BYTEMAP_utility,param_1);
  if (&local_108 != puVar1) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_d8 = 0x1c6;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

