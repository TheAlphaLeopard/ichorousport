// gml_Script___scribble_sprite_get_material @ 0x140202f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_Script___scribble_sprite_get_material
                   (undefined8 param_1,undefined8 param_2,double *param_3,undefined4 param_4,
                   undefined8 param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  double *pdVar8;
  double *pdVar9;
  ulonglong uVar10;
  double dVar11;
  double *pdVar12;
  undefined8 *puVar13;
  bool bVar14;
  uint local_res18;
  longlong **pplVar15;
  undefined8 **ppuVar16;
  undefined4 uVar18;
  undefined8 uVar17;
  ulonglong in_stack_fffffffffffffe10;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  double local_188;
  undefined4 local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  double local_160;
  undefined4 local_158;
  uint local_154;
  double local_148;
  byte local_13c;
  longlong local_138;
  byte local_12c;
  double local_128;
  byte local_11c;
  double local_118;
  byte local_10c;
  double local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  double local_e8;
  byte local_dc;
  double local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  double local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double *local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  double *local_90;
  longlong *local_88;
  undefined1 *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_64;
  uint local_60 [2];
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_44;
  
  local_170 = "gml_Script___scribble_play_sound";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 7;
  FUN_140041df0(local_60,param_4,3,param_5);
  uVar18 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0.0;
  uStack_bc = 0xffffff;
  local_c8 = 0.0;
  local_res18 = 0xffffff;
  local_154 = 0xffffff;
  dVar11 = 0.0;
  local_160 = 0.0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_1dc = 0;
  local_1e8 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_18c = 0;
  local_198 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddaa0) &&
     (_Init_thread_header(&DAT_141dddaa0), DAT_141dddaa0 == -1)) {
    DAT_141ddda98 = (longlong *)FUN_140e63aa0(DAT_141a0a308);
    _Init_thread_footer(&DAT_141dddaa0);
  }
  if (DAT_141ddc0a0 == '\0') {
    FUN_140e64380(DAT_141ddda98,"gml_Script___scribble_play_sound");
    FUN_140e64380(param_1,"gml_Script___scribble_play_sound");
  }
  local_168 = 9;
  if (DAT_141ddc0a0 == '\0') {
    DAT_141ddc0a0 = '\x01';
    plVar6 = (longlong *)(**(code **)(*DAT_141ddda98 + 0x10))(DAT_141ddda98,DAT_141a0a318);
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_1d8 = DAT_1419df7b0;
    dStack_1d0 = _DAT_1419df7b8;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1d8);
    pplVar15 = (longlong **)&local_90;
    local_90 = &local_118;
    uVar7 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_1e8,1,pplVar15);
    in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
    uVar10 = (ulonglong)pplVar15 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_141a05158,0x80000000,&local_70,uVar10,in_stack_fffffffffffffe10);
    in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
    FUN_140e87440(&local_70,DAT_141a0a2f8,0x80000000,&local_b8,uVar10 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe10);
    FUN_140e609c0(DAT_141ddda98);
    if (&local_b8 != (double *)plVar6) {
      dStack_1d0 = (double)CONCAT44(uStack_ac,uStack_b0);
      local_1d8 = local_b8;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar6);
      }
      FUN_140041b80(plVar6,&local_1d8);
    }
    FUN_140e60910(1);
    plVar6 = (longlong *)(**(code **)(*DAT_141ddda98 + 0x10))(DAT_141ddda98,DAT_141a08f78);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    local_1d8 = DAT_1419df7b0;
    dStack_1d0 = _DAT_1419df7b8;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1d8);
    local_88 = (longlong *)&local_108;
    ppuVar16 = &local_88;
    uVar7 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_1b8,1,ppuVar16);
    uVar10 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_141a08f98,0x80000000,&local_c8,uVar10,
                  in_stack_fffffffffffffe10 & 0xffffffffffffff00);
    uVar18 = (undefined4)(uVar10 >> 0x20);
    FUN_140e609c0(DAT_141ddda98);
    if (&local_c8 != (double *)plVar6) {
      dStack_1d0 = (double)CONCAT44(uStack_bc,uStack_c0);
      local_1d8 = local_c8;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar6);
      }
      FUN_140041b80(plVar6,&local_1d8);
    }
    FUN_140e60910(1);
  }
  local_168 = 0xc;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  pdVar9 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_60[0];
  if ((int)local_60[0] < 1) {
    pdVar8 = &DAT_1419df7b0;
LAB_1402033c9:
    local_1d8 = *pdVar8;
    dStack_1d0 = pdVar8[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1d8);
  }
  else {
    pdVar8 = (double *)*local_58;
    if (pdVar8 != &local_148) goto LAB_1402033c9;
  }
  local_a8 = &local_148;
  uVar17 = CONCAT44(uVar18,DAT_1419fdbf8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_1e8,1,uVar17,&local_a8);
  uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
  cVar5 = FUN_140e491e0(uVar7);
  if (cVar5 != '\0') {
    local_168 = 0xe;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    pdVar8 = (double *)(**(code **)(*DAT_141ddda98 + 8))(DAT_141ddda98,DAT_141a08f78);
    if (pdVar8 != &local_118) {
      local_1d8 = *pdVar8;
      dStack_1d0 = pdVar8[1];
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_1d8);
    }
    if ((int)local_60[0] < 1) {
      pdVar8 = &DAT_1419df7b0;
LAB_1402034de:
      local_1d8 = *pdVar8;
      dStack_1d0 = pdVar8[1];
      local_90 = &local_118;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_1d8);
    }
    else {
      pdVar8 = (double *)*local_58;
      local_90 = &local_118;
      if (pdVar8 != &local_108) goto LAB_1402034de;
    }
    local_88 = (longlong *)&local_108;
    uVar7 = CONCAT44(uVar18,DAT_1419ff4f8);
    bVar3 = false;
    bVar2 = true;
    pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar7,&local_90);
    uVar18 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (pdVar8 != &local_160) {
      local_1d8 = *pdVar8;
      dStack_1d0 = pdVar8[1];
      FUN_140041b80(&local_160,&local_1d8);
      local_res18 = local_154;
      dVar11 = local_160;
    }
    if ((local_res18 & 0xffffff) == 3) {
      bVar14 = dVar11 == 0.0;
    }
    else {
      bVar14 = (local_res18 & 0xffffff) == 5;
    }
    if (bVar14) {
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      if ((int)local_60[0] < 1) {
        pdVar8 = &DAT_1419df7b0;
LAB_1402035da:
        local_1d8 = *pdVar8;
        dStack_1d0 = pdVar8[1];
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_1d8);
      }
      else {
        pdVar8 = (double *)*local_58;
        if (pdVar8 != &local_128) goto LAB_1402035da;
      }
      local_98 = (longlong *)&local_128;
      uVar7 = CONCAT44(uVar18,DAT_141a086f8);
      pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_198,1,uVar7,&local_98);
      uVar18 = (undefined4)((ulonglong)uVar7 >> 0x20);
      dStack_1d0 = pdVar8[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_1d8 = *pdVar8;
      }
      else {
        FUN_1400419b0(&local_1d8,pdVar8);
      }
      pdVar8 = &local_1d8;
      bVar3 = true;
      bVar2 = false;
    }
    else {
      uStack_d0 = local_158;
      uStack_cc = local_res18;
      if ((1 << ((byte)local_res18 & 0x1f) & 0x46U) == 0) {
        local_d8 = dVar11;
      }
      else {
        FUN_1400419b0(&local_d8,&local_160);
      }
      pdVar8 = &local_d8;
    }
    if ((int)local_60[0] < 1) {
      pdVar12 = &DAT_1419df7b0;
    }
    else {
      pdVar12 = (double *)*local_58;
    }
    if (pdVar8 != pdVar12) {
      local_1c8 = *pdVar8;
      dStack_1c0 = pdVar8[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar12);
      }
      FUN_140041b80(pdVar12,&local_1c8);
    }
    if ((bVar2) && ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_d8);
    }
    if ((bVar3) && ((1 << ((byte)((ulonglong)dStack_1d0 >> 0x20) & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_1d8);
    }
  }
  local_168 = 0x11;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((int)local_60[0] < 1) {
    pdVar8 = &DAT_1419df7b0;
LAB_140203799:
    local_1c8 = *pdVar8;
    dStack_1c0 = pdVar8[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1c8);
  }
  else {
    pdVar8 = (double *)*local_58;
    if (pdVar8 != &local_148) goto LAB_140203799;
  }
  local_a8 = &local_148;
  uVar17 = CONCAT44(uVar18,DAT_141a0a2b8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_1e8,1,uVar17,&local_a8);
  uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
  cVar5 = FUN_140e491e0(uVar7);
  iVar4 = DAT_141a0a2e8;
  if (cVar5 == '\0') {
    local_168 = 0x13;
  }
  else {
    local_168 = 0x18;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_17c = 0;
    local_188 = (double)iVar4;
    local_168 = 0x19;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_a8 = &local_188;
    uVar7 = FUN_140e634e0(param_1,param_2,&local_1e8,1,CONCAT44(uVar18,DAT_141a02278),&local_a8);
    cVar5 = FUN_140e491e0(uVar7);
    if (cVar5 != '\0') {
      local_168 = 0x1b;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      if ((int)local_60[0] < 1) {
        plVar6 = (longlong *)&DAT_1419df7b0;
LAB_140203910:
        local_1c8 = (double)*plVar6;
        dStack_1c0 = (double)plVar6[1];
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_1c8);
      }
      else {
        plVar6 = (longlong *)*local_58;
        if (plVar6 != &local_138) goto LAB_140203910;
      }
      local_a0 = &local_138;
      local_1c8 = (double)_DAT_1419e3590;
      dStack_1c0 = (double)uRam00000001419e3598;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_1c8);
      local_98 = (longlong *)&local_128;
      local_1c8 = (double)_DAT_1419df7a0;
      dStack_1c0 = (double)uRam00000001419df7a8;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_1c8);
      if ((int)local_60[0] < 2) {
        plVar6 = (longlong *)&DAT_1419df7b0;
LAB_1402039df:
        local_1c8 = (double)*plVar6;
        dStack_1c0 = (double)plVar6[1];
        local_90 = &local_118;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_1c8);
      }
      else {
        plVar6 = (longlong *)local_58[1];
        local_90 = &local_118;
        if ((double *)plVar6 != &local_108) goto LAB_1402039df;
      }
      local_88 = (longlong *)&local_108;
      local_1c8 = _DAT_141dc6280;
      dStack_1c0 = dRam0000000141dc6288;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1c8);
      local_80 = local_f8;
      if (((int)local_60[0] < 3) || (pdVar9 = (double *)local_58[2], pdVar9 != &local_e8)) {
        local_1c8 = *pdVar9;
        dStack_1c0 = pdVar9[1];
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_1c8);
      }
      local_78 = (longlong *)&local_e8;
      pdVar9 = (double *)FUN_140e63610(param_1,param_2,&local_1b8,6,&local_188,&local_a0);
      if (pdVar9 != param_3) {
        local_1c8 = *pdVar9;
        dStack_1c0 = pdVar9[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_1c8);
      }
      goto LAB_140203b33;
    }
    local_168 = 0x1f;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *param_3 = (double)&DAT_bff0000000000000;
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
LAB_140203b33:
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_res18 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,7,FUN_140041b30);
  if (0 < (int)local_60[0]) {
    puVar13 = local_58;
    do {
      puVar1 = (undefined8 *)*puVar13;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar13 = puVar13 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_58);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

