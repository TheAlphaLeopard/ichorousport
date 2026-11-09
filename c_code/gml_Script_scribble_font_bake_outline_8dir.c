// gml_Script_scribble_font_bake_outline_8dir @ 0x140461650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble_font_bake_outline_8dir
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  double *pdVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  double dVar12;
  undefined4 uVar14;
  undefined8 uVar13;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  double local_178;
  undefined4 local_16c;
  double local_168;
  byte local_15c;
  double local_158;
  byte local_14c;
  double local_148;
  undefined4 local_13c;
  double local_138;
  undefined4 local_12c;
  double local_128;
  undefined4 local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  double local_e8;
  byte local_dc;
  double local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  double local_b8;
  undefined4 local_ac;
  double *local_a8;
  double *local_a0;
  double *local_98;
  double *local_90;
  double *local_88;
  double *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_1a0 = "gml_Script_scribble_font_bake_outline_8dir_2px";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 10;
  FUN_140041df0(local_48,param_4,5,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_178,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_1cc = 0;
  local_1d8 = 0;
  local_184 = 0;
  local_190 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf028) &&
     (_Init_thread_header(&DAT_141ddf028), DAT_141ddf028 == -1)) {
    DAT_141ddf030 = (longlong *)FUN_140e63aa0(DAT_1419f7a08);
    _Init_thread_footer(&DAT_141ddf028);
  }
  local_198 = 10;
  pdVar9 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 5) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_40[4];
  }
  iVar3 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar3 == 0) && (local_198 = 10, 4 < (int)local_48[0])) &&
     (puVar8 = (undefined8 *)local_40[4], (double *)puVar8 != &DAT_1419df7b0)) {
    local_1c8 = DAT_1419df7b0;
    uStack_1c0 = _DAT_1419df7b8;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_1c8);
  }
  if (DAT_141ddc18e == '\0') {
    FUN_140e64380(DAT_141ddf030,"gml_Script_scribble_font_bake_outline_8dir_2px");
    FUN_140e64380(param_1,"gml_Script_scribble_font_bake_outline_8dir_2px");
  }
  local_198 = 0xe;
  if (DAT_141ddc18e == '\0') {
    DAT_141ddc18e = '\x01';
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    pdVar5 = (double *)(**(code **)(*DAT_141ddf030 + 0x10))(DAT_141ddf030,DAT_141a05548);
    FUN_140e609c0(DAT_141ddf030);
    uVar14 = 0;
    pdVar6 = (double *)gml_GlobalScript___scribble_constants(param_1,param_2,&local_1d8,0,0);
    if (pdVar6 != pdVar5) {
      local_1c8 = *pdVar6;
      uStack_1c0 = pdVar6[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      FUN_140041b80(pdVar5,&local_1c8);
    }
    FUN_140e60910(1);
  }
  local_198 = 0xc;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  if ((int)local_48[0] < 3) {
    pdVar5 = &DAT_1419df7b0;
LAB_140461942:
    local_1c8 = *pdVar5;
    uStack_1c0 = pdVar5[1];
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1c8);
  }
  else {
    pdVar5 = (double *)local_40[2];
    if (pdVar5 != &local_178) goto LAB_140461942;
  }
  local_a8 = &local_178;
  uVar13 = CONCAT44(uVar14,DAT_1419fdbf8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar13,&local_a8);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 != '\0') {
    local_198 = 0x10;
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    local_190 = 0;
    local_188 = 0;
    local_184 = 5;
    pdVar5 = (double *)(**(code **)(*DAT_141ddf030 + 8))(DAT_141ddf030,DAT_141a05548);
    if (pdVar5 != &local_168) {
      local_1c8 = *pdVar5;
      uStack_1c0 = pdVar5[1];
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1c8);
    }
    local_a0 = &local_168;
    if ((int)local_48[0] < 3) {
      pdVar5 = &DAT_1419df7b0;
LAB_140461a50:
      local_1c8 = *pdVar5;
      uStack_1c0 = pdVar5[1];
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1c8);
    }
    else {
      pdVar5 = (double *)local_40[2];
      if (pdVar5 != &local_158) goto LAB_140461a50;
    }
    local_98 = &local_158;
    uVar7 = CONCAT44(uVar14,DAT_141a01138);
    pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_190,2,uVar7,&local_a0);
    uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (pdVar5 != &local_b8) {
      local_1c8 = *pdVar5;
      uStack_1c0 = pdVar5[1];
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_1c8);
    }
    local_198 = 0x11;
    if ((int)local_48[0] < 3) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_40[2];
    }
    iVar3 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar3 == 0) {
      local_198 = 0x13;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      local_1c8 = _DAT_141dd2f58;
      uStack_1c0 = (double)uRam0000000141dd2f60;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1c8);
      local_a8 = &local_178;
      if (((int)local_48[0] < 3) || (pdVar9 = (double *)local_40[2], pdVar9 != &local_168)) {
        local_1c8 = *pdVar9;
        uStack_1c0 = pdVar9[1];
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_1c8);
      }
      local_a0 = &local_168;
      local_1c8 = _DAT_141dd2f38;
      uStack_1c0 = (double)uRam0000000141dd2f40;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1c8);
      local_98 = &local_158;
      FUN_1401ef7f0(param_1,param_2,&local_1d8,3,&local_a8);
      local_198 = 0x14;
      goto LAB_1404622b7;
    }
    local_198 = 0x16;
    uVar4 = FUN_140e4a8b0(&local_b8);
    if ((int)local_48[0] < 3) {
      puVar11 = (ulonglong *)&DAT_1419df7b0;
    }
    else {
      puVar11 = (ulonglong *)local_40[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    *(undefined4 *)((longlong)puVar11 + 0xc) = 10;
    *puVar11 = (ulonglong)(uVar4 & 0xffffff);
  }
  local_198 = 0x1a;
  uStack_1c0._4_4_ = 0xf;
  local_1c8 = 7.291177646402872e-304;
  dVar12 = (double)FUN_140e4b060(&local_1c8);
  FUN_140ec9e10((int)dVar12);
  if ((1 << ((byte)uStack_1c0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_198 = 0x1b;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  iVar3 = FUN_140ec9d80();
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 0;
  local_178 = (double)iVar3;
  local_a8 = &local_178;
  local_1c8 = _DAT_141dd2f48;
  uStack_1c0 = dRam0000000141dd2f50;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1c8);
  local_a0 = &local_168;
  pdVar5 = (double *)
           FUN_140e634e0(param_1,param_2,&local_1d8,2,CONCAT44(uVar14,DAT_141a04778),&local_a8);
  if (pdVar5 != &local_158) {
    local_1c8 = *pdVar5;
    uStack_1c0 = pdVar5[1];
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1c8);
  }
  local_98 = &local_158;
  if ((int)local_48[0] < 3) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_40[2];
  }
  uVar7 = FUN_140e4a8b0(puVar8);
  iVar3 = FUN_140ec5c20(uVar7);
  local_148 = (double)iVar3 * 0.00392156862745098;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_13c = 0;
  local_90 = &local_148;
  if ((int)local_48[0] < 3) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_40[2];
  }
  uVar7 = FUN_140e4a8b0(puVar8);
  iVar3 = FUN_140ec5c10(uVar7);
  local_138 = (double)iVar3 * 0.00392156862745098;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_88 = &local_138;
  if ((int)local_48[0] < 3) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_40[2];
  }
  uVar7 = FUN_140e4a8b0(puVar8);
  iVar3 = FUN_140ec5c00(uVar7);
  local_128 = (double)iVar3 * 0.00392156862745098;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_80 = &local_128;
  FUN_140ec9ea0(4,&local_98);
  local_198 = 0x1e;
  FUN_140ec9dc0();
  local_198 = 0x21;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  if ((int)local_48[0] < 1) {
    pdVar5 = &DAT_1419df7b0;
LAB_140461f68:
    local_1c8 = *pdVar5;
    uStack_1c0 = pdVar5[1];
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1c8);
  }
  else {
    pdVar5 = (double *)*local_40;
    if (pdVar5 != &local_178) goto LAB_140461f68;
  }
  local_a8 = &local_178;
  if ((int)local_48[0] < 2) {
    pdVar5 = &DAT_1419df7b0;
LAB_140461fb7:
    local_1c8 = *pdVar5;
    uStack_1c0 = pdVar5[1];
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1c8);
  }
  else {
    pdVar5 = (double *)local_40[1];
    if (pdVar5 != &local_168) goto LAB_140461fb7;
  }
  local_a0 = &local_168;
  uStack_1c0 = (double)CONCAT44(0xf,(undefined4)uStack_1c0);
  local_1c8 = 7.291177646402872e-304;
  local_1b8 = 7.291177646402872e-304;
  dStack_1b0 = uStack_1c0;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_1b8);
  local_98 = &local_158;
  local_1b8 = _DAT_1419e5d50;
  dStack_1b0 = (double)uRam00000001419e5d58;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_1b8);
  local_90 = &local_148;
  local_1b8 = _DAT_1419e5d50;
  dStack_1b0 = (double)uRam00000001419e5d58;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1b8);
  local_88 = &local_138;
  local_1b8 = _DAT_1419e5d50;
  dStack_1b0 = (double)uRam00000001419e5d58;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_1b8);
  local_80 = &local_128;
  local_1b8 = _DAT_1419e5d50;
  dStack_1b0 = (double)uRam00000001419e5d58;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1b8);
  local_78 = local_118;
  local_1b8 = _DAT_1419e5d50;
  dStack_1b0 = (double)uRam00000001419e5d58;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1b8);
  local_1b8 = _DAT_1419e5d50;
  dStack_1b0 = (double)uRam00000001419e5d58;
  local_70 = local_108;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1b8);
  local_68 = local_f8;
  if ((int)local_48[0] < 4) {
    pdVar5 = &DAT_1419df7b0;
LAB_1404621d0:
    local_1b8 = *pdVar5;
    dStack_1b0 = pdVar5[1];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1b8);
  }
  else {
    pdVar5 = (double *)local_40[3];
    if (pdVar5 != &local_e8) goto LAB_1404621d0;
  }
  local_60 = &local_e8;
  if (((int)local_48[0] < 5) || (pdVar9 = (double *)local_40[4], pdVar9 != &local_d8)) {
    local_1b8 = *pdVar9;
    dStack_1b0 = pdVar9[1];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1b8);
  }
  local_58 = &local_d8;
  local_1b8 = DAT_1419df7b0;
  dStack_1b0 = _DAT_1419df7b8;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_1b8);
  local_50 = local_c8;
  gml_Script_scribble_font_bake_shadow(param_1,param_2,&local_1d8,0xc,&local_a8);
LAB_1404622b7:
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_178,0x10,0xc,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar8 = local_40;
    do {
      puVar1 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

