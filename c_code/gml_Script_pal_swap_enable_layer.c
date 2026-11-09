// gml_Script_pal_swap_enable_layer @ 0x14044b300

undefined8 *
gml_Script_pal_swap_enable_layer(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar7;
  undefined8 **ppuVar6;
  ulonglong in_stack_fffffffffffffe90;
  ulonglong uVar8;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_110 = "gml_Script_anon@5346@pal_swap_enable_layer@scr_retro_pal_swapper";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x8b;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_2c = 0xffffff;
  local_38 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f74e8);
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_14c = 0;
  local_158 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x8c;
  FUN_140e85f80(param_1,DAT_1419f7448,0x80000000,&local_38);
  uStack_15c = 0;
  local_168 = 0x4020000000000000;
  iVar1 = FUN_140e851f0(&local_38,&local_168,DAT_141955260,0);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar1 == 0) {
    local_108 = 0x8d;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_1419f5248,0x80000000,&local_48,uVar5,
                  in_stack_fffffffffffffe90 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar5 >> 0x20);
    local_168 = local_48;
    uStack_160 = uStack_40;
    uStack_15c = uStack_3c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
    local_b8 = &local_f8;
    ppuVar6 = &local_b8;
    uVar5 = CONCAT44(uVar7,DAT_1419f73f8);
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar5,ppuVar6);
    if (puVar3 != &local_138) {
      local_168 = *puVar3;
      uStack_160 = *(undefined4 *)(puVar3 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_168);
    }
    local_108 = 0x8e;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_1419f5398,0x80000000,&local_58,uVar5,
                  (ulonglong)ppuVar6 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar5 >> 0x20);
    local_168 = local_58;
    uStack_160 = uStack_50;
    uStack_15c = uStack_4c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
    local_b8 = &local_f8;
    local_b0 = &local_138;
    ppuVar6 = &local_b8;
    uVar5 = CONCAT44(uVar7,DAT_1419ff4f8);
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,2,uVar5,ppuVar6);
    if (puVar3 != &local_148) {
      local_168 = *puVar3;
      uStack_160 = *(undefined4 *)(puVar3 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_168);
    }
    local_108 = 0x8f;
    uStack_15c = DAT_141dd2d44;
    uStack_160 = DAT_141dd2d40;
    if ((1 << ((byte)DAT_141dd2d44 & 0x1f) & 0x46U) == 0) {
      local_168 = DAT_141dd2d38;
    }
    else {
      FUN_1400419b0(&local_168,&DAT_141dd2d38);
    }
    iVar1 = FUN_140e851f0(&local_148,&local_168,DAT_141955260,0);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (iVar1 == 0) {
      local_108 = 0x8f;
    }
    else {
      local_108 = 0x91;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uVar8 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
      uVar5 = uVar5 & 0xffffffffffffff00;
      FUN_140e87440(&local_148,DAT_141a0a9f8,0x80000000,&local_68,uVar5,uVar8);
      uVar8 = uVar8 & 0xffffffffffffff00;
      uVar5 = uVar5 & 0xffffffffffffff00;
      FUN_140e87440(&local_148,DAT_141a57830,0x80000000,&local_78,uVar5,uVar8);
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_148,DAT_1419f7438,0x80000000,&local_88,uVar5 & 0xffffffffffffff00,uVar8);
      local_168 = local_68;
      uStack_160 = uStack_60;
      uStack_15c = uStack_5c;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_168);
      local_b8 = &local_f8;
      local_168 = local_78;
      uStack_160 = uStack_70;
      uStack_15c = uStack_6c;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_168);
      local_b0 = &local_e8;
      local_168 = local_88;
      uStack_160 = uStack_80;
      uStack_15c = uStack_7c;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_168);
      local_a8 = (undefined8 *)local_d8;
      ppuVar6 = &local_b8;
      gml_Script_pal_swap_layer_init(param_1,param_2,&local_158,3,ppuVar6);
      local_108 = 0x92;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uVar5 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
      FUN_140e87440(uVar2,DAT_1419f4f38,0x80000000,&local_98,uVar5,uVar8 & 0xffffffffffffff00);
      uVar7 = (undefined4)(uVar5 >> 0x20);
      local_b8 = &local_138;
      local_168 = local_98;
      uStack_160 = uStack_90;
      uStack_15c = uStack_8c;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_168);
      local_b0 = &local_e8;
      local_a8 = &local_138;
      uVar2 = CONCAT44(uVar7,DAT_1419f74f8);
      puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,1,uVar2,&local_b8);
      uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
      if (puVar3 != &local_c8) {
        local_168 = *puVar3;
        uStack_160 = *(undefined4 *)(puVar3 + 1);
        uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_168);
      }
      local_a0 = &local_c8;
      FUN_140e634e0(param_1,param_2,&local_158,3,CONCAT44(uVar7,DAT_1419f74c8),&local_b0);
    }
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

