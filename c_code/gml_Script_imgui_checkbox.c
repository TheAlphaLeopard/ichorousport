// gml_Script_imgui_checkbox @ 0x1404e15b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_imgui_checkbox
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  double *pdVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  double dVar13;
  code *pcVar14;
  undefined4 uVar15;
  longlong **in_stack_fffffffffffffe20;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong local_1a8;
  byte local_19c;
  longlong local_198;
  byte local_18c;
  longlong local_188;
  byte local_17c;
  longlong local_178;
  byte local_16c;
  longlong local_168;
  byte local_15c;
  longlong local_158;
  byte local_14c;
  longlong local_148;
  byte local_13c;
  longlong local_138;
  byte local_12c;
  longlong local_128;
  byte local_11c;
  longlong local_118;
  byte local_10c;
  longlong local_108;
  byte local_fc;
  longlong local_f8;
  byte local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_e0 = "gml_Script_imgui_image_button";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0xc0d;
  if (DAT_141dc7a60 == 0) {
    DAT_141dc7a60 = FUN_140e63aa0(DAT_141a57070);
  }
  FUN_140041df0(local_48,param_4,9,param_5);
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_1a8,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0xc0d;
  plVar12 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 8) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_40[7];
  }
  iVar2 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_d8 = 0xc0d;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uVar15 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if ((int)local_48[0] < 2) {
      plVar8 = &DAT_1419df7b0;
LAB_1404e1736:
      local_1d8 = *plVar8;
      uStack_1d0 = (undefined4)plVar8[1];
      uStack_1cc = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_1d8);
    }
    else {
      plVar8 = (longlong *)local_40[1];
      if (plVar8 != &local_118) goto LAB_1404e1736;
    }
    local_60 = &local_118;
    if ((int)local_48[0] < 8) {
      plVar8 = &DAT_1419df7b0;
    }
    else {
      plVar8 = (longlong *)local_40[7];
    }
    in_stack_fffffffffffffe20 = &local_60;
    pcVar14 = (code *)CONCAT44(uVar15,DAT_141a047c8);
    plVar4 = (longlong *)
             FUN_140e634e0(param_1,param_2,&local_1c8,1,pcVar14,in_stack_fffffffffffffe20);
    if (plVar4 != plVar8) {
      local_1d8 = *plVar4;
      uStack_1d0 = (undefined4)plVar4[1];
      uStack_1cc = *(undefined4 *)((longlong)plVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar8);
      }
      FUN_140041b80(plVar8,&local_1d8);
    }
  }
  if ((int)local_48[0] < 9) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_40[8];
  }
  iVar2 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uVar15 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if ((int)local_48[0] < 2) {
      plVar8 = &DAT_1419df7b0;
LAB_1404e184e:
      local_1d8 = *plVar8;
      uStack_1d0 = (undefined4)plVar8[1];
      uStack_1cc = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_1d8);
    }
    else {
      plVar8 = (longlong *)local_40[1];
      if (plVar8 != &local_1a8) goto LAB_1404e184e;
    }
    local_a8 = &local_1a8;
    if ((int)local_48[0] < 9) {
      plVar8 = &DAT_1419df7b0;
    }
    else {
      plVar8 = (longlong *)local_40[8];
    }
    in_stack_fffffffffffffe20 = &local_a8;
    pcVar14 = (code *)CONCAT44(uVar15,DAT_141a04808);
    plVar4 = (longlong *)
             FUN_140e634e0(param_1,param_2,&local_1c8,1,pcVar14,in_stack_fffffffffffffe20);
    if (plVar4 != plVar8) {
      local_1d8 = *plVar4;
      uStack_1d0 = (undefined4)plVar4[1];
      uStack_1cc = *(undefined4 *)((longlong)plVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar8);
      }
      FUN_140041b80(plVar8,&local_1d8);
    }
  }
  local_d8 = 0xc0e;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fb6b8);
  uStack_1cc = 6;
  local_1d8 = DAT_141dc7a60;
  uVar7 = (ulonglong)in_stack_fffffffffffffe20 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  FUN_140e87440(&local_1d8,DAT_1419fb048,0x80000000,&local_c0,uVar6,uVar7);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419fac58,0x80000000,&local_d0,uVar6,uVar7 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar6 >> 0x20);
  uVar6 = FUN_140e4a8b0(&local_c0);
  uVar7 = FUN_140e4a8b0(&local_d0);
  if ((longlong)(uVar6 & uVar7) < 1) {
    local_d8 = 0xc0e;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    local_1d8 = CONCAT44(uRam0000000141dc6694,_DAT_141dc6690);
    uStack_1d0 = uRam0000000141dc6698;
    uStack_1cc = uRam0000000141dc669c;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1d8);
    local_a8 = &local_1a8;
    if ((int)local_48[0] < 3) {
      pdVar9 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar9 = (double *)local_40[2];
    }
    if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
      dVar13 = *pdVar9;
    }
    else {
      dVar13 = (double)FUN_140e4b060();
    }
    if ((int)local_48[0] < 2) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_40[1];
    }
    uVar3 = FUN_140e4a740(puVar10);
    plVar8 = (longlong *)FUN_140ec6010(&local_1b8,uVar3,(longlong)dVar13);
    if (plVar8 != &local_198) {
      local_1d8 = *plVar8;
      uStack_1d0 = (undefined4)plVar8[1];
      uStack_1cc = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1d8);
    }
    local_a0 = &local_198;
    uVar5 = CONCAT44(uVar15,DAT_1419f5468);
    FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar5,&local_a8);
    uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_d8 = 0xc0f;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((int)local_48[0] < 2) {
    plVar8 = &DAT_1419df7b0;
LAB_1404e1b7c:
    local_1d8 = *plVar8;
    uStack_1d0 = (undefined4)plVar8[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1d8);
  }
  else {
    plVar8 = (longlong *)local_40[1];
    if (plVar8 != &local_1a8) goto LAB_1404e1b7c;
  }
  local_a8 = &local_1a8;
  if ((int)local_48[0] < 3) {
    plVar8 = &DAT_1419df7b0;
LAB_1404e1bd0:
    local_1d8 = *plVar8;
    uStack_1d0 = (undefined4)plVar8[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1d8);
  }
  else {
    plVar8 = (longlong *)local_40[2];
    if (plVar8 != &local_198) goto LAB_1404e1bd0;
  }
  local_a0 = &local_198;
  if ((int)local_48[0] < 1) {
    plVar8 = &DAT_1419df7b0;
LAB_1404e1c21:
    local_1d8 = *plVar8;
    uStack_1d0 = (undefined4)plVar8[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1d8);
  }
  else {
    plVar8 = (longlong *)*local_40;
    if (plVar8 != &local_188) goto LAB_1404e1c21;
  }
  local_98 = &local_188;
  if ((int)local_48[0] < 2) {
    plVar8 = &DAT_1419df7b0;
LAB_1404e1c70:
    local_1d8 = *plVar8;
    uStack_1d0 = (undefined4)plVar8[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1d8);
  }
  else {
    plVar8 = (longlong *)local_40[1];
    if (plVar8 != &local_178) goto LAB_1404e1c70;
  }
  local_90 = &local_178;
  if ((int)local_48[0] < 3) {
    plVar8 = &DAT_1419df7b0;
LAB_1404e1cbf:
    local_1d8 = *plVar8;
    uStack_1d0 = (undefined4)plVar8[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1d8);
  }
  else {
    plVar8 = (longlong *)local_40[2];
    if (plVar8 != &local_168) goto LAB_1404e1cbf;
  }
  local_88 = &local_168;
  if ((int)local_48[0] < 4) {
    plVar8 = &DAT_1419df7b0;
LAB_1404e1d11:
    local_1d8 = *plVar8;
    uStack_1d0 = (undefined4)plVar8[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1d8);
  }
  else {
    plVar8 = (longlong *)local_40[3];
    if (plVar8 != &local_158) goto LAB_1404e1d11;
  }
  local_80 = &local_158;
  if ((int)local_48[0] < 5) {
    plVar8 = &DAT_1419df7b0;
LAB_1404e1d63:
    local_1d8 = *plVar8;
    uStack_1d0 = (undefined4)plVar8[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1d8);
  }
  else {
    plVar8 = (longlong *)local_40[4];
    if (plVar8 != &local_148) goto LAB_1404e1d63;
  }
  local_78 = &local_148;
  if ((int)local_48[0] < 6) {
    plVar8 = &DAT_1419df7b0;
LAB_1404e1db5:
    local_1d8 = *plVar8;
    uStack_1d0 = (undefined4)plVar8[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1d8);
  }
  else {
    plVar8 = (longlong *)local_40[5];
    if (plVar8 != &local_138) goto LAB_1404e1db5;
  }
  local_70 = &local_138;
  if ((int)local_48[0] < 7) {
    plVar8 = &DAT_1419df7b0;
LAB_1404e1e07:
    local_1d8 = *plVar8;
    uStack_1d0 = (undefined4)plVar8[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1d8);
  }
  else {
    plVar8 = (longlong *)local_40[6];
    if (plVar8 != &local_128) goto LAB_1404e1e07;
  }
  local_68 = &local_128;
  if ((int)local_48[0] < 8) {
    plVar8 = &DAT_1419df7b0;
  }
  else {
    plVar8 = (longlong *)local_40[7];
    if (plVar8 == &local_118) goto LAB_1404e1e89;
  }
  local_1d8 = *plVar8;
  uStack_1d0 = (undefined4)plVar8[1];
  uStack_1cc = *(undefined4 *)((longlong)plVar8 + 0xc);
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_1d8);
LAB_1404e1e89:
  local_60 = &local_118;
  if (((int)local_48[0] < 9) || (plVar12 = (longlong *)local_40[8], plVar12 != &local_108)) {
    local_1d8 = *plVar12;
    uStack_1d0 = (undefined4)plVar12[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar12 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1d8);
  }
  uVar5 = CONCAT44(uVar15,DAT_141a04898);
  local_58 = &local_108;
  plVar12 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1b8,2,uVar5,&local_a8);
  uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (plVar12 != &local_f8) {
    local_1d8 = *plVar12;
    uStack_1d0 = (undefined4)plVar12[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar12 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1d8);
  }
  local_50 = &local_f8;
  plVar12 = (longlong *)
            FUN_140e634e0(param_1,param_2,&local_1c8,10,CONCAT44(uVar15,DAT_141a59730),&local_98);
  if (plVar12 != param_3) {
    local_1d8 = *plVar12;
    uStack_1d0 = (undefined4)plVar12[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar12 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1d8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  _eh_vector_destructor_iterator_(&local_1a8,0x10,0xc,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar10 = local_40;
    do {
      puVar1 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

