// gml_Script_scribble_font_bake_outline_and_shadow @ 0x1404624b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble_font_bake_outline_and_shadow
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  double *pdVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  double dVar11;
  undefined4 uVar13;
  undefined8 uVar12;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  double local_190;
  undefined4 local_184;
  double local_180;
  undefined4 local_174;
  double local_168;
  undefined4 local_15c;
  double local_158;
  byte local_14c;
  double local_148;
  byte local_13c;
  double local_138;
  undefined4 local_12c;
  double local_128;
  undefined4 local_11c;
  double local_118;
  undefined4 local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  double local_d8;
  byte local_cc;
  double local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  double *local_a8;
  double *local_a0;
  undefined8 *local_98;
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
  
  local_1b0 = "gml_Script_scribble_font_bake_outline_8dir";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1a8 = 10;
  FUN_140041df0(local_48,param_4,5,param_5);
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_168,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  local_174 = 0xffffff;
  local_180 = 0.0;
  local_184 = 0xffffff;
  local_190 = 0.0;
  local_1dc = 0;
  local_1e8 = 0;
  local_194 = 0;
  local_1a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1a8 = 10;
  pdVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_40[4];
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar3 == 0) && (local_1a8 = 10, 4 < (int)local_48[0])) &&
     (puVar7 = (undefined8 *)local_40[4], (double *)puVar7 != &DAT_1419df7b0)) {
    local_1d8 = DAT_1419df7b0;
    uStack_1d0 = _DAT_1419df7b8;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1d8);
  }
  local_1a8 = 0xc;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((int)local_48[0] < 3) {
    pdVar6 = &DAT_1419df7b0;
LAB_14046266a:
    local_1d8 = *pdVar6;
    uStack_1d0 = pdVar6[1];
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1d8);
  }
  else {
    pdVar6 = (double *)local_40[2];
    if (pdVar6 != &local_168) goto LAB_14046266a;
  }
  local_a8 = &local_168;
  uVar12 = CONCAT44(uVar13,DAT_1419fdbf8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_1e8,1,uVar12,&local_a8);
  uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 != '\0') {
    local_1a8 = 0xe;
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    local_1a0 = 0;
    local_198 = 0;
    local_194 = 5;
    uVar13 = 0;
    pdVar6 = (double *)gml_GlobalScript___scribble_constants(param_1,param_2,&local_1a0,0,0);
    if (pdVar6 != &local_180) {
      local_1d8 = *pdVar6;
      uStack_1d0 = pdVar6[1];
      if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_180);
      }
      FUN_140041b80(&local_180,&local_1d8);
    }
    local_1a8 = 0x10;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_a8 = &local_180;
    if ((int)local_48[0] < 3) {
      pdVar6 = &DAT_1419df7b0;
LAB_1404627b3:
      local_1d8 = *pdVar6;
      uStack_1d0 = pdVar6[1];
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1d8);
    }
    else {
      pdVar6 = (double *)local_40[2];
      if (pdVar6 != &local_158) goto LAB_1404627b3;
    }
    local_a0 = &local_158;
    uVar5 = CONCAT44(uVar13,DAT_141a01138);
    pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_1e8,2,uVar5,&local_a8);
    uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (pdVar6 != &local_190) {
      local_1d8 = *pdVar6;
      uStack_1d0 = pdVar6[1];
      if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_190);
      }
      FUN_140041b80(&local_190,&local_1d8);
    }
    local_1a8 = 0x11;
    if ((int)local_48[0] < 3) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_40[2];
    }
    iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar3 == 0) {
      local_1a8 = 0x13;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      local_1d8 = _DAT_141dd2f88;
      uStack_1d0 = (double)uRam0000000141dd2f90;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1d8);
      local_a8 = &local_168;
      if (((int)local_48[0] < 3) || (pdVar8 = (double *)local_40[2], pdVar8 != &local_158)) {
        local_1d8 = *pdVar8;
        uStack_1d0 = pdVar8[1];
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_1d8);
      }
      local_a0 = &local_158;
      local_1d8 = _DAT_141dd2f68;
      uStack_1d0 = (double)uRam0000000141dd2f70;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_1d8);
      local_98 = &local_148;
      FUN_1401ef7f0(param_1,param_2,&local_1e8,3,&local_a8);
      local_1a8 = 0x14;
      goto LAB_140463028;
    }
    local_1a8 = 0x17;
    uVar4 = FUN_140e4a8b0(&local_190);
    if ((int)local_48[0] < 3) {
      puVar10 = (ulonglong *)&DAT_1419df7b0;
    }
    else {
      puVar10 = (ulonglong *)local_40[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 10;
    *puVar10 = (ulonglong)(uVar4 & 0xffffff);
  }
  local_1a8 = 0x1b;
  uStack_1d0._4_4_ = 0xf;
  local_1d8 = 7.291177646402873e-304;
  dVar11 = (double)FUN_140e4b060(&local_1d8);
  FUN_140ec9e10((int)dVar11);
  if ((1 << ((byte)uStack_1d0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1a8 = 0x1c;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  iVar3 = FUN_140ec9d80();
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 0;
  local_168 = (double)iVar3;
  local_a8 = &local_168;
  local_1d8 = _DAT_141dd2f78;
  uStack_1d0 = dRam0000000141dd2f80;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_1d8);
  local_a0 = &local_158;
  pdVar6 = (double *)
           FUN_140e634e0(param_1,param_2,&local_1e8,2,CONCAT44(uVar13,DAT_141a04778),&local_a8);
  if (pdVar6 != &local_148) {
    local_1d8 = *pdVar6;
    uStack_1d0 = pdVar6[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1d8);
  }
  local_98 = &local_148;
  if ((int)local_48[0] < 3) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_40[2];
  }
  uVar5 = FUN_140e4a8b0(puVar7);
  iVar3 = FUN_140ec5c20(uVar5);
  local_138 = (double)iVar3 * 0.00392156862745098;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_90 = &local_138;
  if ((int)local_48[0] < 3) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_40[2];
  }
  uVar5 = FUN_140e4a8b0(puVar7);
  iVar3 = FUN_140ec5c10(uVar5);
  local_128 = (double)iVar3 * 0.00392156862745098;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_88 = &local_128;
  if ((int)local_48[0] < 3) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_40[2];
  }
  uVar5 = FUN_140e4a8b0(puVar7);
  iVar3 = FUN_140ec5c00(uVar5);
  local_118 = (double)iVar3 * 0.00392156862745098;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_80 = &local_118;
  FUN_140ec9ea0(4,&local_98);
  local_1a8 = 0x1f;
  FUN_140ec9dc0();
  local_1a8 = 0x22;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((int)local_48[0] < 1) {
    pdVar6 = &DAT_1419df7b0;
LAB_140462cd0:
    local_1d8 = *pdVar6;
    uStack_1d0 = pdVar6[1];
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1d8);
  }
  else {
    pdVar6 = (double *)*local_40;
    if (pdVar6 != &local_168) goto LAB_140462cd0;
  }
  local_a8 = &local_168;
  if ((int)local_48[0] < 2) {
    pdVar6 = &DAT_1419df7b0;
LAB_140462d20:
    local_1d8 = *pdVar6;
    uStack_1d0 = pdVar6[1];
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1d8);
  }
  else {
    pdVar6 = (double *)local_40[1];
    if (pdVar6 != &local_158) goto LAB_140462d20;
  }
  local_a0 = &local_158;
  uStack_1d0 = (double)CONCAT44(0xf,(undefined4)uStack_1d0);
  local_1d8 = 7.291177646402873e-304;
  local_1c8 = 7.291177646402873e-304;
  dStack_1c0 = uStack_1d0;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_1c8);
  local_98 = &local_148;
  local_1c8 = _DAT_1419e5d70;
  dStack_1c0 = (double)uRam00000001419e5d78;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1c8);
  local_90 = &local_138;
  local_1c8 = _DAT_1419e5d60;
  dStack_1c0 = (double)uRam00000001419e5d68;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_1c8);
  local_88 = &local_128;
  local_1c8 = _DAT_1419e5d60;
  dStack_1c0 = (double)uRam00000001419e5d68;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_1c8);
  local_1c8 = _DAT_1419e5d60;
  dStack_1c0 = (double)uRam00000001419e5d68;
  local_80 = &local_118;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1c8);
  local_78 = local_108;
  local_1c8 = _DAT_1419e5d60;
  dStack_1c0 = (double)uRam00000001419e5d68;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1c8);
  local_70 = local_f8;
  local_1c8 = _DAT_1419e5d60;
  dStack_1c0 = (double)uRam00000001419e5d68;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1c8);
  local_68 = local_e8;
  if ((int)local_48[0] < 4) {
    pdVar6 = &DAT_1419df7b0;
LAB_140462f40:
    local_1c8 = *pdVar6;
    dStack_1c0 = pdVar6[1];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1c8);
  }
  else {
    pdVar6 = (double *)local_40[3];
    if (pdVar6 != &local_d8) goto LAB_140462f40;
  }
  local_60 = &local_d8;
  if (((int)local_48[0] < 5) || (pdVar8 = (double *)local_40[4], pdVar8 != &local_c8)) {
    local_1c8 = *pdVar8;
    dStack_1c0 = pdVar8[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1c8);
  }
  local_58 = &local_c8;
  local_1c8 = DAT_1419df7b0;
  dStack_1c0 = _DAT_1419df7b8;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_1c8);
  local_50 = local_b8;
  gml_Script_scribble_font_bake_shadow(param_1,param_2,&local_1e8,0xc,&local_a8);
LAB_140463028:
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,0xc,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar7 = local_40;
    do {
      puVar1 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return param_3;
}

