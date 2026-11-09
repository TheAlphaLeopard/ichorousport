// gml_Script_imgui_surface @ 0x1404e0ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_imgui_surface
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
  longlong **in_stack_fffffffffffffe60;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
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
  longlong local_e8;
  byte local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_d0 = "gml_Script_imgui_image";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0xbfd;
  if (DAT_141dc7a60 == 0) {
    DAT_141dc7a60 = FUN_140e63aa0(DAT_141a57070);
  }
  FUN_140041df0(local_48,param_4,6,param_5);
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_168,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_17c = 0;
  local_188 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0xbfd;
  plVar12 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 3) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_40[2];
  }
  iVar2 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_c8 = 0xbfd;
    if ((int)local_48[0] < 3) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_40[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *puVar10 = 0x416fffffe0000000;
  }
  if ((int)local_48[0] < 4) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_40[3];
  }
  iVar2 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_48[0] < 4) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_40[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *puVar10 = 0x3ff0000000000000;
  }
  if ((int)local_48[0] < 5) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_40[4];
  }
  iVar2 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uVar15 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if ((int)local_48[0] < 1) {
      plVar8 = &DAT_1419df7b0;
LAB_1404e0d27:
      local_198 = *plVar8;
      uStack_190 = (undefined4)plVar8[1];
      uStack_18c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_198);
    }
    else {
      plVar8 = (longlong *)*local_40;
      if (plVar8 != &local_168) goto LAB_1404e0d27;
    }
    local_98 = &local_168;
    if ((int)local_48[0] < 5) {
      plVar8 = &DAT_1419df7b0;
    }
    else {
      plVar8 = (longlong *)local_40[4];
    }
    in_stack_fffffffffffffe60 = &local_98;
    pcVar14 = (code *)CONCAT44(uVar15,DAT_141a047c8);
    plVar4 = (longlong *)
             FUN_140e634e0(param_1,param_2,&local_188,1,pcVar14,in_stack_fffffffffffffe60);
    if (plVar4 != plVar8) {
      local_198 = *plVar4;
      uStack_190 = (undefined4)plVar4[1];
      uStack_18c = *(undefined4 *)((longlong)plVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar8);
      }
      FUN_140041b80(plVar8,&local_198);
    }
  }
  if ((int)local_48[0] < 6) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_40[5];
  }
  iVar2 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uVar15 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if ((int)local_48[0] < 1) {
      plVar8 = &DAT_1419df7b0;
LAB_1404e0e3b:
      local_198 = *plVar8;
      uStack_190 = (undefined4)plVar8[1];
      uStack_18c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_198);
    }
    else {
      plVar8 = (longlong *)*local_40;
      if (plVar8 != &local_168) goto LAB_1404e0e3b;
    }
    local_98 = &local_168;
    if ((int)local_48[0] < 6) {
      plVar8 = &DAT_1419df7b0;
    }
    else {
      plVar8 = (longlong *)local_40[5];
    }
    in_stack_fffffffffffffe60 = &local_98;
    pcVar14 = (code *)CONCAT44(uVar15,DAT_141a04808);
    plVar4 = (longlong *)
             FUN_140e634e0(param_1,param_2,&local_188,1,pcVar14,in_stack_fffffffffffffe60);
    if (plVar4 != plVar8) {
      local_198 = *plVar4;
      uStack_190 = (undefined4)plVar4[1];
      uStack_18c = *(undefined4 *)((longlong)plVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar8);
      }
      FUN_140041b80(plVar8,&local_198);
    }
  }
  local_c8 = 0xbfe;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fb6b8);
  uStack_18c = 6;
  local_198 = DAT_141dc7a60;
  uVar7 = (ulonglong)in_stack_fffffffffffffe60 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_1419fb048,0x80000000,&local_b0,uVar6,uVar7);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419fac58,0x80000000,&local_c0,uVar6,uVar7 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar6 >> 0x20);
  uVar6 = FUN_140e4a8b0(&local_b0);
  uVar7 = FUN_140e4a8b0(&local_c0);
  if ((longlong)(uVar6 & uVar7) < 1) {
    local_c8 = 0xbfe;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_198 = CONCAT44(uRam0000000141dc6694,_DAT_141dc6690);
    uStack_190 = uRam0000000141dc6698;
    uStack_18c = uRam0000000141dc669c;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_198);
    local_98 = &local_168;
    if ((int)local_48[0] < 2) {
      pdVar9 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar9 = (double *)local_40[1];
    }
    if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
      dVar13 = *pdVar9;
    }
    else {
      dVar13 = (double)FUN_140e4b060();
    }
    if ((int)local_48[0] < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_40;
    }
    uVar3 = FUN_140e4a740(puVar10);
    plVar8 = (longlong *)FUN_140ec6010(&local_178,uVar3,(longlong)dVar13);
    if (plVar8 != &local_158) {
      local_198 = *plVar8;
      uStack_190 = (undefined4)plVar8[1];
      uStack_18c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_198);
    }
    local_90 = &local_158;
    uVar5 = CONCAT44(uVar15,DAT_1419f5468);
    FUN_140e634e0(param_1,param_2,&local_188,2,uVar5,&local_98);
    uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_c8 = 0xbff;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((int)local_48[0] < 1) {
    plVar8 = &DAT_1419df7b0;
LAB_1404e1165:
    local_198 = *plVar8;
    uStack_190 = (undefined4)plVar8[1];
    uStack_18c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_198);
  }
  else {
    plVar8 = (longlong *)*local_40;
    if (plVar8 != &local_168) goto LAB_1404e1165;
  }
  local_98 = &local_168;
  if ((int)local_48[0] < 2) {
    plVar8 = &DAT_1419df7b0;
LAB_1404e11b9:
    local_198 = *plVar8;
    uStack_190 = (undefined4)plVar8[1];
    uStack_18c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_198);
  }
  else {
    plVar8 = (longlong *)local_40[1];
    if (plVar8 != &local_158) goto LAB_1404e11b9;
  }
  local_90 = &local_158;
  if ((int)local_48[0] < 1) {
    plVar8 = &DAT_1419df7b0;
LAB_1404e120a:
    local_198 = *plVar8;
    uStack_190 = (undefined4)plVar8[1];
    uStack_18c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_198);
  }
  else {
    plVar8 = (longlong *)*local_40;
    if (plVar8 != &local_148) goto LAB_1404e120a;
  }
  local_88 = &local_148;
  if ((int)local_48[0] < 2) {
    plVar8 = &DAT_1419df7b0;
LAB_1404e1259:
    local_198 = *plVar8;
    uStack_190 = (undefined4)plVar8[1];
    uStack_18c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_198);
  }
  else {
    plVar8 = (longlong *)local_40[1];
    if (plVar8 != &local_138) goto LAB_1404e1259;
  }
  local_80 = &local_138;
  if ((int)local_48[0] < 3) {
    plVar8 = &DAT_1419df7b0;
LAB_1404e12a8:
    local_198 = *plVar8;
    uStack_190 = (undefined4)plVar8[1];
    uStack_18c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_198);
  }
  else {
    plVar8 = (longlong *)local_40[2];
    if (plVar8 != &local_128) goto LAB_1404e12a8;
  }
  local_78 = &local_128;
  if ((int)local_48[0] < 4) {
    plVar8 = &DAT_1419df7b0;
LAB_1404e12f7:
    local_198 = *plVar8;
    uStack_190 = (undefined4)plVar8[1];
    uStack_18c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_198);
  }
  else {
    plVar8 = (longlong *)local_40[3];
    if (plVar8 != &local_118) goto LAB_1404e12f7;
  }
  local_70 = &local_118;
  if ((int)local_48[0] < 5) {
    plVar8 = &DAT_1419df7b0;
  }
  else {
    plVar8 = (longlong *)local_40[4];
    if (plVar8 == &local_108) goto LAB_1404e1376;
  }
  local_198 = *plVar8;
  uStack_190 = (undefined4)plVar8[1];
  uStack_18c = *(undefined4 *)((longlong)plVar8 + 0xc);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_198);
LAB_1404e1376:
  local_68 = &local_108;
  if (((int)local_48[0] < 6) || (plVar12 = (longlong *)local_40[5], plVar12 != &local_f8)) {
    local_198 = *plVar12;
    uStack_190 = (undefined4)plVar12[1];
    uStack_18c = *(undefined4 *)((longlong)plVar12 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_198);
  }
  local_60 = &local_f8;
  uVar5 = CONCAT44(uVar15,DAT_141a04898);
  plVar12 = (longlong *)FUN_140e634e0(param_1,param_2,&local_178,2,uVar5,&local_98);
  uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (plVar12 != &local_e8) {
    local_198 = *plVar12;
    uStack_190 = (undefined4)plVar12[1];
    uStack_18c = *(undefined4 *)((longlong)plVar12 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_198);
  }
  local_58 = &local_e8;
  plVar12 = (longlong *)
            FUN_140e634e0(param_1,param_2,&local_188,7,CONCAT44(uVar15,DAT_141a59730),&local_88);
  if (plVar12 != param_3) {
    local_198 = *plVar12;
    uStack_190 = (undefined4)plVar12[1];
    uStack_18c = *(undefined4 *)((longlong)plVar12 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_198);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,9,FUN_140041b30);
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
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

