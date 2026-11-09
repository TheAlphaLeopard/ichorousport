// gml_Script_anon_5346_pal_swap_enable_layer_scr_retro_pal_swapper @ 0x14044aaa0

undefined8 *
gml_Script_anon_5346_pal_swap_enable_layer_scr_retro_pal_swapper
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong in_stack_fffffffffffffeb0;
  undefined1 **ppuVar10;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined4 *local_30;
  
  local_70 = "gml_Script_pal_swap_set_layer";
  local_78 = DAT_141dc7a50;
  local_68 = 0x7b;
  pcVar7 = FUN_140041b30;
  DAT_141dc7a50 = &local_78;
  _eh_vector_constructor_iterator_(&local_e8,0x10,7,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f74e8);
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_f8 = uVar2;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f7468);
  local_12c = 0;
  local_138 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x7c;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419f5398,0x80000000,&local_108,uVar8,
                in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar8 >> 0x20);
  local_148 = (undefined4)local_108;
  uStack_144 = local_108._4_4_;
  uStack_140 = uStack_100;
  uStack_13c = uStack_fc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_40 = local_a8;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 3) {
    puVar4 = &DAT_1419df7b0;
LAB_14044ac21:
    local_148 = *(undefined4 *)puVar4;
    uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_148);
  }
  else {
    puVar4 = (undefined8 *)param_5[2];
    if (puVar4 != &local_98) goto LAB_14044ac21;
  }
  local_38 = &local_98;
  ppuVar10 = &local_40;
  uVar8 = CONCAT44(uVar9,DAT_1419ff4f8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,2,uVar8,ppuVar10);
  if (puVar4 != &local_118) {
    local_148 = *(undefined4 *)puVar4;
    uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
  }
  local_68 = 0x7d;
  iVar1 = FUN_140e851f0(&local_118,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_68 = 0x7d;
    goto LAB_14044b015;
  }
  local_68 = 0x7f;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(local_f8,DAT_1419f5398,0x80000000,&local_108,uVar8,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar8 >> 0x20);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_f8,gml_Script____struct___213_pal_swap_enable_layer_scr_retro_pal_swapper,0);
  if (&local_f8 != puVar3) {
    local_148 = (undefined4)local_f8;
    uStack_144 = local_f8._4_4_;
    uStack_140 = uStack_f0;
    uStack_13c = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_148);
  }
  FUN_140e60910(1);
  if (puVar3 != &local_e8) {
    local_148 = *(undefined4 *)puVar3;
    uStack_144 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_148);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_60 = &local_e8;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_14044ae35:
    local_148 = *(undefined4 *)puVar3;
    uStack_144 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_148);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_d8) goto LAB_14044ae35;
  }
  local_58 = &local_d8;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_14044ae82:
    local_148 = *(undefined4 *)puVar3;
    uStack_144 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_148);
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 != &local_c8) goto LAB_14044ae82;
  }
  local_50 = &local_c8;
  if (param_4 < 4) {
    puVar3 = &DAT_1419df7b0;
LAB_14044aecf:
    local_148 = *(undefined4 *)puVar3;
    uStack_144 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_148);
  }
  else {
    puVar3 = (undefined8 *)param_5[3];
    if (puVar3 != &local_b8) goto LAB_14044aecf;
  }
  local_48 = &local_b8;
  local_148 = (undefined4)local_108;
  uStack_144 = local_108._4_4_;
  uStack_140 = uStack_100;
  uStack_13c = uStack_fc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_40 = local_a8;
  if ((param_4 < 3) || (puVar6 = (undefined8 *)param_5[2], puVar6 != &local_98)) {
    local_148 = *(undefined4 *)puVar6;
    uStack_144 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_140 = *(undefined4 *)(puVar6 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_148);
  }
  local_38 = &local_98;
  uVar2 = CONCAT44(uVar9,DAT_1419fd6d8);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_128,4,uVar2,&local_60);
  uVar9 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar5 != local_88) {
    local_148 = *puVar5;
    uStack_144 = puVar5[1];
    uStack_140 = puVar5[2];
    uStack_13c = puVar5[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_148);
  }
  local_30 = local_88;
  FUN_140e634e0(param_1,param_2,&local_138,3,CONCAT44(uVar9,DAT_1419ff3d8),&local_40);
LAB_14044b015:
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

