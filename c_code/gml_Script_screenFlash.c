// gml_Script_screenFlash @ 0x14044c030

undefined8 *
gml_Script_screenFlash
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar9;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 **ppuVar10;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined4 local_d8 [3];
  byte local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_70 = "gml_Script_pal_swap_enable_layer";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x86;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f7538);
  local_7c = 0xffffff;
  local_88 = 0;
  local_38 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f74e8);
  uStack_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_11c = 0;
  local_128 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x87;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_14044c155:
    local_c8._0_4_ = *(undefined4 *)puVar3;
    local_c8._4_4_ = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_c8);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_f8) goto LAB_14044c155;
  }
  local_b0 = &local_f8;
  uVar7 = CONCAT44(uVar9,DAT_141a1c670);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar7,&local_b0);
  uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_68 = 0x87;
    goto LAB_14044c8e0;
  }
  local_68 = 0x89;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_c8,gml_Script_anon_5805_pal_swap_enable_layer_scr_retro_pal_swapper,0);
  if (&local_c8 != puVar2) {
    local_118 = (undefined4)local_c8;
    uStack_114 = local_c8._4_4_;
    uStack_110 = uStack_c0;
    uStack_10c = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_118);
  }
  FUN_140e60910(1);
  if (puVar2 != &local_108) {
    local_118 = *(undefined4 *)puVar2;
    uStack_114 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_118);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_b8 = &local_108;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_118);
  local_b0 = &local_f8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_118);
  local_a8 = &local_e8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_118);
  local_a0 = local_d8;
  uVar4 = CONCAT44(uVar9,DAT_1419fd6d8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,4,uVar4,&local_b8);
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != &local_88) {
    local_118 = *(undefined4 *)puVar2;
    uStack_114 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_118);
  }
  local_68 = 0x8b;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_14044c412:
    local_118 = *(undefined4 *)puVar2;
    uStack_114 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_118);
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 != &local_108) goto LAB_14044c412;
  }
  local_b8 = &local_108;
  FUN_140e645a0(&local_c8,gml_Script_pal_swap_enable_layer,param_1);
  local_118 = (undefined4)local_c8;
  uStack_114 = local_c8._4_4_;
  uStack_110 = uStack_c0;
  uStack_10c = uStack_bc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_118);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_b0 = &local_f8;
  uVar4 = CONCAT44(uVar9,DAT_1419f7518);
  FUN_140e634e0(param_1,param_2,&local_128,2,uVar4,&local_b8);
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_68 = 0x95;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_14044c524:
    local_118 = *(undefined4 *)puVar2;
    uStack_114 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_118);
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 != &local_108) goto LAB_14044c524;
  }
  local_b8 = &local_108;
  FUN_140e645a0(&local_c8,gml_GlobalScript_screenFlash,param_1);
  local_118 = (undefined4)local_c8;
  uStack_114 = local_c8._4_4_;
  uStack_110 = uStack_c0;
  uStack_10c = uStack_bc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_118);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_b0 = &local_f8;
  ppuVar10 = &local_b8;
  uVar8 = CONCAT44(uVar9,DAT_1419f74b8);
  FUN_140e634e0(param_1,param_2,&local_128,2,uVar8,ppuVar10);
  local_68 = 0xa0;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uVar4 = local_38;
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(local_38,DAT_1419f5398,0x80000000,&local_48,uVar8,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar8 >> 0x20);
  local_118 = (undefined4)local_48;
  uStack_114 = local_48._4_4_;
  uStack_110 = uStack_40;
  uStack_10c = uStack_3c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_118);
  local_b8 = &local_108;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_14044c697:
    local_118 = *(undefined4 *)puVar2;
    uStack_114 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_118);
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 != &local_f8) goto LAB_14044c697;
  }
  local_b0 = &local_f8;
  local_a8 = &local_88;
  ppuVar10 = &local_b8;
  uVar8 = CONCAT44(uVar9,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_128,3,uVar8,ppuVar10);
  local_68 = 0xa1;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5248,0x80000000,&local_58,uVar8,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar8 >> 0x20);
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_14044c794:
    local_118 = *(undefined4 *)puVar2;
    uStack_114 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_118);
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 != &local_108) goto LAB_14044c794;
  }
  local_b8 = &local_108;
  local_118 = (undefined4)local_58;
  uStack_114 = local_58._4_4_;
  uStack_110 = uStack_50;
  uStack_10c = uStack_4c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_118);
  local_b0 = &local_f8;
  if ((param_4 < 1) || (puVar6 = (undefined8 *)*param_5, puVar6 != &local_e8)) {
    local_118 = *(undefined4 *)puVar6;
    uStack_114 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_110 = *(undefined4 *)(puVar6 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
  }
  local_a8 = &local_e8;
  uVar4 = CONCAT44(uVar9,DAT_1419f74f8);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_98,1,uVar4,&local_b8);
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar5 != local_d8) {
    local_118 = *puVar5;
    uStack_114 = puVar5[1];
    uStack_110 = puVar5[2];
    uStack_10c = puVar5[3];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_118);
  }
  local_a0 = local_d8;
  FUN_140e634e0(param_1,param_2,&local_128,3,CONCAT44(uVar9,DAT_1419f74c8),&local_b0);
LAB_14044c8e0:
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

