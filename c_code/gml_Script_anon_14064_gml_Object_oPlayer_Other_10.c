// gml_Script_anon_14064_gml_Object_oPlayer_Other_10 @ 0x140c74420

undefined8 *
gml_Script_anon_14064_gml_Object_oPlayer_Other_10
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar8;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong in_stack_fffffffffffffea0;
  undefined8 **ppuVar9;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
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
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_f0 = "gml_Script_anon@13545@gml_Object_oPlayer_Other_10";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x24c;
  FUN_140041df0(local_68,param_4,2,param_5);
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_11c = 0;
  local_128 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x24c;
  puVar4 = &DAT_1419df7b0;
  uVar3 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_60;
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_e8 = 0x24c;
    uStack_13c = 6;
    in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
    pcVar5 = (code *)((ulonglong)pcVar5 & 0xffffffffffffff00);
    local_148 = param_1;
    FUN_140e87440(&local_148,DAT_1419fe0e8,0x80000000,&local_c8,pcVar5,in_stack_fffffffffffffea0);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if ((int)local_68[0] < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*local_60;
      if (&local_c8 == puVar2) goto LAB_140c745e1;
    }
    local_158 = local_c8;
    uStack_150 = uStack_c0;
    uStack_14c = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_158);
  }
LAB_140c745e1:
  if ((int)local_68[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_60[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    uStack_13c = 6;
    pcVar5 = (code *)((ulonglong)pcVar5 & 0xffffffffffffff00);
    local_148 = param_1;
    FUN_140e87440(&local_148,DAT_141a101f8,0x80000000,&local_108,pcVar5,
                  in_stack_fffffffffffffea0 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uStack_13c = local_fc;
    uStack_140 = local_100;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
      local_148 = local_108;
    }
    else {
      FUN_1400419b0(&local_148,&local_108);
    }
    uStack_14c = 7;
    local_158 = CONCAT44(local_158._4_4_,2);
    FUN_1400460e0(&local_148,&local_158);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if ((int)local_68[0] < 2) {
      puVar2 = &DAT_1419df7b0;
LAB_140c746eb:
      local_158 = local_148;
      uStack_150 = uStack_140;
      uStack_14c = uStack_13c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_158);
    }
    else {
      puVar2 = (undefined8 *)local_60[1];
      if (&local_148 != puVar2) goto LAB_140c746eb;
    }
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
  }
  uVar8 = (undefined4)((ulonglong)pcVar5 >> 0x20);
  local_e8 = 0x24e;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_14c = 0xf;
  local_158 = 0x1000000000000ea;
  local_148 = 0x1000000000000ea;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_58 = local_b8;
  uStack_14c = 0xf;
  local_158 = 0x100000000000149;
  local_148 = 0x100000000000149;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_50 = local_a8;
  if ((int)local_68[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_140c74858:
    local_158 = *puVar2;
    uStack_150 = *(undefined4 *)(puVar2 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_158);
  }
  else {
    puVar2 = (undefined8 *)*local_60;
    if (puVar2 != &local_98) goto LAB_140c74858;
  }
  local_48 = &local_98;
  if (((int)local_68[0] < 2) || (puVar4 = (undefined8 *)local_60[1], puVar4 != &local_88)) {
    local_158 = *puVar4;
    uStack_150 = *(undefined4 *)(puVar4 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_158);
  }
  uVar6 = CONCAT44(uVar8,DAT_1419fdca8);
  local_40 = &local_88;
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,2,uVar6,&local_58);
  uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar4 != &local_78) {
    local_158 = *puVar4;
    uStack_150 = *(undefined4 *)(puVar4 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_158);
  }
  local_38 = &local_78;
  ppuVar9 = &local_48;
  uVar7 = CONCAT44(uVar8,DAT_141a10448);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,3,uVar7,ppuVar9);
  if (puVar4 != &local_118) {
    local_158 = *puVar4;
    uStack_150 = *(undefined4 *)(puVar4 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  local_e8 = 0x250;
  uStack_14c = 0;
  local_158 = 0xc010000000000000;
  iVar1 = FUN_140e851f0(&local_118,&local_158,DAT_141955260,0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar1 == 0) {
    local_e8 = 0x251;
    if (param_3 == &DAT_141dda9f8) goto LAB_140c74a8e;
    local_158 = CONCAT44(DAT_141dda9f8._4_4_,(undefined4)DAT_141dda9f8);
    uStack_150 = DAT_141ddaa00;
    uStack_14c = DAT_141ddaa04;
  }
  else {
    local_e8 = 0x253;
    FUN_140e87440(&local_118,DAT_141a585c0,0x80000000,&local_d8,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    if (&local_d8 == param_3) goto LAB_140c74a8e;
    local_158 = local_d8;
    uStack_150 = uStack_d0;
    uStack_14c = uStack_cc;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  FUN_140041b80(param_3,&local_158);
LAB_140c74a8e:
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar4 = local_60;
    do {
      puVar2 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

