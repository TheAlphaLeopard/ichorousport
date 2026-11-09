// gml_Script_imgui_drawlist_push_clip_rect_fullscreen @ 0x1404bf930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_imgui_drawlist_push_clip_rect_fullscreen
          (longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  double *pdVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  double dVar9;
  code *pcVar10;
  undefined4 uVar11;
  ulonglong in_stack_fffffffffffffe10;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
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
  longlong local_e8;
  byte local_dc;
  longlong local_d8;
  byte local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
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
  longlong *local_48;
  
  local_c0 = "gml_Script_imgui_drawlist_add_image_rounded";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x54b;
  if (DAT_141dc7a60 == 0) {
    DAT_141dc7a60 = FUN_140e63aa0(DAT_141a57070);
  }
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_198,0x10,0xd,FUN_1400424d0,FUN_140041b30);
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x54c;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fb6b8);
  uStack_1dc = 6;
  local_1e8 = DAT_141dc7a60;
  in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
  uVar3 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_1e8,DAT_1419fb048,0x80000000,&local_1a8,uVar3,in_stack_fffffffffffffe10);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uVar3 = uVar3 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419fac58,0x80000000,&local_1b8,uVar3,
                in_stack_fffffffffffffe10 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar3 >> 0x20);
  uVar3 = FUN_140e4a8b0(&local_1a8);
  uVar4 = FUN_140e4a8b0(&local_1b8);
  plVar8 = &DAT_1419df7b0;
  if ((longlong)(uVar3 & uVar4) < 1) {
    local_b8 = 0x54c;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    local_1e8 = CONCAT44(uRam0000000141dc6694,_DAT_141dc6690);
    uStack_1e0 = uRam0000000141dc6698;
    uStack_1dc = uRam0000000141dc669c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1e8);
    local_58 = &local_f8;
    if (param_4 < 3) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)param_5[2];
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar9 = *pdVar6;
    }
    else {
      dVar9 = (double)FUN_140e4b060();
    }
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)param_5[1];
    }
    uVar1 = FUN_140e4a740(puVar7);
    plVar5 = (longlong *)FUN_140ec6010(&local_1d8,uVar1,(longlong)dVar9);
    if (plVar5 != &local_e8) {
      local_1e8 = *plVar5;
      uStack_1e0 = (undefined4)plVar5[1];
      uStack_1dc = *(undefined4 *)((longlong)plVar5 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_1e8);
    }
    local_50 = &local_e8;
    uVar2 = CONCAT44(uVar11,DAT_1419f5468);
    FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar2,&local_58);
    uVar11 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  local_b8 = 0x54d;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  if (param_4 < 2) {
    plVar5 = &DAT_1419df7b0;
LAB_1404bfcad:
    local_1e8 = *plVar5;
    uStack_1e0 = (undefined4)plVar5[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1e8);
  }
  else {
    plVar5 = (longlong *)param_5[1];
    if (plVar5 != &local_198) goto LAB_1404bfcad;
  }
  local_a8 = &local_198;
  if (param_4 < 3) {
    plVar5 = &DAT_1419df7b0;
LAB_1404bfcfa:
    local_1e8 = *plVar5;
    uStack_1e0 = (undefined4)plVar5[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1e8);
  }
  else {
    plVar5 = (longlong *)param_5[2];
    if (plVar5 != &local_188) goto LAB_1404bfcfa;
  }
  local_a0 = &local_188;
  if (param_4 < 1) {
    plVar5 = &DAT_1419df7b0;
LAB_1404bfd45:
    local_1e8 = *plVar5;
    uStack_1e0 = (undefined4)plVar5[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1e8);
  }
  else {
    plVar5 = (longlong *)*param_5;
    if (plVar5 != &local_178) goto LAB_1404bfd45;
  }
  local_98 = &local_178;
  if (param_4 < 2) {
    plVar5 = &DAT_1419df7b0;
LAB_1404bfd95:
    local_1e8 = *plVar5;
    uStack_1e0 = (undefined4)plVar5[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1e8);
  }
  else {
    plVar5 = (longlong *)param_5[1];
    if (plVar5 != &local_168) goto LAB_1404bfd95;
  }
  local_90 = &local_168;
  if (param_4 < 3) {
    plVar5 = &DAT_1419df7b0;
LAB_1404bfde5:
    local_1e8 = *plVar5;
    uStack_1e0 = (undefined4)plVar5[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1e8);
  }
  else {
    plVar5 = (longlong *)param_5[2];
    if (plVar5 != &local_158) goto LAB_1404bfde5;
  }
  local_88 = &local_158;
  if (param_4 < 4) {
    plVar5 = &DAT_1419df7b0;
LAB_1404bfe35:
    local_1e8 = *plVar5;
    uStack_1e0 = (undefined4)plVar5[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1e8);
  }
  else {
    plVar5 = (longlong *)param_5[3];
    if (plVar5 != &local_148) goto LAB_1404bfe35;
  }
  local_80 = &local_148;
  if (param_4 < 5) {
    plVar5 = &DAT_1419df7b0;
LAB_1404bfe85:
    local_1e8 = *plVar5;
    uStack_1e0 = (undefined4)plVar5[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1e8);
  }
  else {
    plVar5 = (longlong *)param_5[4];
    if (plVar5 != &local_138) goto LAB_1404bfe85;
  }
  local_78 = &local_138;
  if (param_4 < 6) {
    plVar5 = &DAT_1419df7b0;
LAB_1404bfed5:
    local_1e8 = *plVar5;
    uStack_1e0 = (undefined4)plVar5[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1e8);
  }
  else {
    plVar5 = (longlong *)param_5[5];
    if (plVar5 != &local_128) goto LAB_1404bfed5;
  }
  local_70 = &local_128;
  if (param_4 < 7) {
    plVar5 = &DAT_1419df7b0;
LAB_1404bff25:
    local_1e8 = *plVar5;
    uStack_1e0 = (undefined4)plVar5[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1e8);
  }
  else {
    plVar5 = (longlong *)param_5[6];
    if (plVar5 != &local_118) goto LAB_1404bff25;
  }
  local_68 = &local_118;
  if (param_4 < 8) {
    plVar5 = &DAT_1419df7b0;
LAB_1404bff75:
    local_1e8 = *plVar5;
    uStack_1e0 = (undefined4)plVar5[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1e8);
  }
  else {
    plVar5 = (longlong *)param_5[7];
    if (plVar5 != &local_108) goto LAB_1404bff75;
  }
  local_60 = &local_108;
  if (param_4 < 9) {
    plVar5 = &DAT_1419df7b0;
  }
  else {
    plVar5 = (longlong *)param_5[8];
    if (plVar5 == &local_f8) goto LAB_1404bfff2;
  }
  local_1e8 = *plVar5;
  uStack_1e0 = (undefined4)plVar5[1];
  uStack_1dc = *(undefined4 *)((longlong)plVar5 + 0xc);
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_1e8);
LAB_1404bfff2:
  local_58 = &local_f8;
  if ((param_4 < 10) || (plVar8 = (longlong *)param_5[9], plVar8 != &local_e8)) {
    local_1e8 = *plVar8;
    uStack_1e0 = (undefined4)plVar8[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1e8);
  }
  local_50 = &local_e8;
  uVar2 = CONCAT44(uVar11,DAT_141a04898);
  plVar8 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar2,&local_a8);
  uVar11 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (plVar8 != &local_d8) {
    local_1e8 = *plVar8;
    uStack_1e0 = (undefined4)plVar8[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1e8);
  }
  local_48 = &local_d8;
  plVar8 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_1c8,0xb,CONCAT44(uVar11,DAT_141a59730),&local_98);
  if (plVar8 != param_3) {
    local_1e8 = *plVar8;
    uStack_1e0 = (undefined4)plVar8[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  _eh_vector_destructor_iterator_(&local_198,0x10,0xd,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

