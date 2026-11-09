// gml_Script_imgui_drawlist_push_clip_rect @ 0x1404bf050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_imgui_drawlist_push_clip_rect
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  double *pdVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  double dVar12;
  code *pcVar13;
  undefined4 uVar14;
  ulonglong in_stack_fffffffffffffe30;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
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
  longlong local_d8;
  byte local_cc;
  longlong local_c8;
  byte local_bc;
  longlong local_b8;
  byte local_ac;
  uint local_a8 [2];
  undefined8 *local_a0;
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
  longlong *local_48;
  
  local_190 = "gml_Script_imgui_drawlist_add_image";
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  local_188 = 0x53a;
  if (DAT_141dc7a60 == 0) {
    DAT_141dc7a60 = FUN_140e63aa0(DAT_141a57070);
  }
  FUN_140041df0(local_a8,param_4,8,param_5);
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_158,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  local_164 = 0xffffff;
  local_170 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_188 = 0x53a;
  plVar11 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_a8[0];
  if ((int)local_a8[0] < 8) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_a0[7];
  }
  iVar2 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_188 = 0x53a;
    if ((int)local_a8[0] < 8) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_a0[7];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0x416fffffe0000000;
  }
  local_188 = 0x53b;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fb6b8);
  uStack_1bc = 6;
  local_1c8 = DAT_141dc7a60;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar5 = (ulonglong)pcVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_1c8,DAT_1419fb048,0x80000000,&local_170,uVar5,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419fac58,0x80000000,&local_180,uVar5,
                in_stack_fffffffffffffe30 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar5 >> 0x20);
  uVar5 = FUN_140e4a8b0(&local_170);
  uVar6 = FUN_140e4a8b0(&local_180);
  if ((longlong)(uVar5 & uVar6) < 1) {
    local_188 = 0x53b;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    local_1c8 = CONCAT44(uRam0000000141dc6694,_DAT_141dc6690);
    uStack_1c0 = uRam0000000141dc6698;
    uStack_1bc = uRam0000000141dc669c;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1c8);
    local_98 = &local_158;
    if ((int)local_a8[0] < 3) {
      pdVar8 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar8 = (double *)local_a0[2];
    }
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
      dVar12 = *pdVar8;
    }
    else {
      dVar12 = (double)FUN_140e4b060();
    }
    if ((int)local_a8[0] < 2) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_a0[1];
    }
    uVar3 = FUN_140e4a740(puVar9);
    plVar7 = (longlong *)FUN_140ec6010(&local_1b8,uVar3,(longlong)dVar12);
    if (plVar7 != &local_148) {
      local_1c8 = *plVar7;
      uStack_1c0 = (undefined4)plVar7[1];
      uStack_1bc = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_1c8);
    }
    local_90 = &local_148;
    uVar4 = CONCAT44(uVar14,DAT_1419f5468);
    FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar4,&local_98);
    uVar14 = (undefined4)((ulonglong)uVar4 >> 0x20);
  }
  local_188 = 0x53c;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((int)local_a8[0] < 2) {
    plVar7 = &DAT_1419df7b0;
LAB_1404bf449:
    local_1c8 = *plVar7;
    uStack_1c0 = (undefined4)plVar7[1];
    uStack_1bc = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1c8);
  }
  else {
    plVar7 = (longlong *)local_a0[1];
    if (plVar7 != &local_158) goto LAB_1404bf449;
  }
  local_98 = &local_158;
  if ((int)local_a8[0] < 3) {
    plVar7 = &DAT_1419df7b0;
LAB_1404bf498:
    local_1c8 = *plVar7;
    uStack_1c0 = (undefined4)plVar7[1];
    uStack_1bc = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1c8);
  }
  else {
    plVar7 = (longlong *)local_a0[2];
    if (plVar7 != &local_148) goto LAB_1404bf498;
  }
  local_90 = &local_148;
  if ((int)local_a8[0] < 1) {
    plVar7 = &DAT_1419df7b0;
LAB_1404bf4e5:
    local_1c8 = *plVar7;
    uStack_1c0 = (undefined4)plVar7[1];
    uStack_1bc = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1c8);
  }
  else {
    plVar7 = (longlong *)*local_a0;
    if (plVar7 != &local_138) goto LAB_1404bf4e5;
  }
  local_88 = &local_138;
  if ((int)local_a8[0] < 2) {
    plVar7 = &DAT_1419df7b0;
LAB_1404bf534:
    local_1c8 = *plVar7;
    uStack_1c0 = (undefined4)plVar7[1];
    uStack_1bc = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1c8);
  }
  else {
    plVar7 = (longlong *)local_a0[1];
    if (plVar7 != &local_128) goto LAB_1404bf534;
  }
  local_80 = &local_128;
  if ((int)local_a8[0] < 3) {
    plVar7 = &DAT_1419df7b0;
LAB_1404bf583:
    local_1c8 = *plVar7;
    uStack_1c0 = (undefined4)plVar7[1];
    uStack_1bc = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1c8);
  }
  else {
    plVar7 = (longlong *)local_a0[2];
    if (plVar7 != &local_118) goto LAB_1404bf583;
  }
  local_78 = &local_118;
  if ((int)local_a8[0] < 4) {
    plVar7 = &DAT_1419df7b0;
LAB_1404bf5d5:
    local_1c8 = *plVar7;
    uStack_1c0 = (undefined4)plVar7[1];
    uStack_1bc = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1c8);
  }
  else {
    plVar7 = (longlong *)local_a0[3];
    if (plVar7 != &local_108) goto LAB_1404bf5d5;
  }
  local_70 = &local_108;
  if ((int)local_a8[0] < 5) {
    plVar7 = &DAT_1419df7b0;
LAB_1404bf627:
    local_1c8 = *plVar7;
    uStack_1c0 = (undefined4)plVar7[1];
    uStack_1bc = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1c8);
  }
  else {
    plVar7 = (longlong *)local_a0[4];
    if (plVar7 != &local_f8) goto LAB_1404bf627;
  }
  local_68 = &local_f8;
  if ((int)local_a8[0] < 6) {
    plVar7 = &DAT_1419df7b0;
LAB_1404bf679:
    local_1c8 = *plVar7;
    uStack_1c0 = (undefined4)plVar7[1];
    uStack_1bc = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1c8);
  }
  else {
    plVar7 = (longlong *)local_a0[5];
    if (plVar7 != &local_e8) goto LAB_1404bf679;
  }
  local_60 = &local_e8;
  if ((int)local_a8[0] < 7) {
    plVar7 = &DAT_1419df7b0;
  }
  else {
    plVar7 = (longlong *)local_a0[6];
    if (plVar7 == &local_d8) goto LAB_1404bf6fb;
  }
  local_1c8 = *plVar7;
  uStack_1c0 = (undefined4)plVar7[1];
  uStack_1bc = *(undefined4 *)((longlong)plVar7 + 0xc);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_1c8);
LAB_1404bf6fb:
  local_58 = &local_d8;
  if (((int)local_a8[0] < 8) || (plVar11 = (longlong *)local_a0[7], plVar11 != &local_c8)) {
    local_1c8 = *plVar11;
    uStack_1c0 = (undefined4)plVar11[1];
    uStack_1bc = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1c8);
  }
  local_50 = &local_c8;
  uVar4 = CONCAT44(uVar14,DAT_141a04898);
  plVar11 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1b8,2,uVar4,&local_98);
  uVar14 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (plVar11 != &local_b8) {
    local_1c8 = *plVar11;
    uStack_1c0 = (undefined4)plVar11[1];
    uStack_1bc = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_1c8);
  }
  local_48 = &local_b8;
  plVar11 = (longlong *)
            FUN_140e634e0(param_1,param_2,&local_1a8,9,CONCAT44(uVar14,DAT_141a59730),&local_88);
  if (plVar11 != param_3) {
    local_1c8 = *plVar11;
    uStack_1c0 = (undefined4)plVar11[1];
    uStack_1bc = *(undefined4 *)((longlong)plVar11 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,0xb,FUN_140041b30);
  if (0 < (int)local_a8[0]) {
    puVar9 = local_a0;
    do {
      puVar1 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_a0);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return param_3;
}

