// gml_Object_oKeyRebinder_Draw_0 @ 0x140b31030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oKeyRebinder_Draw_0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  byte bVar13;
  double dVar14;
  longlong *local_res8;
  undefined8 local_res10;
  uint local_res18;
  double **ppdVar15;
  undefined4 uVar16;
  double **in_stack_fffffffffffffd10;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  double local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  byte local_28c;
  double local_288;
  byte local_27c;
  double local_278;
  undefined4 local_26c;
  double local_268;
  byte local_25c;
  double local_258;
  byte local_24c;
  undefined1 local_248 [12];
  byte local_23c;
  undefined1 local_238 [12];
  byte local_22c;
  undefined8 local_228;
  char *local_220;
  undefined4 local_218;
  double *local_210;
  double *local_208;
  double *local_200;
  double *local_1f8;
  double *local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  longlong *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  double local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  double local_198;
  uint local_18c;
  double local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  uint local_16c;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  undefined4 local_14c;
  double local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  longlong local_f8;
  double local_e8;
  undefined4 local_dc;
  double local_d8;
  undefined4 local_cc;
  double local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  double local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  
  local_res18 = 0;
  local_220 = "gml_Object_oKeyRebinder_Step_0";
  local_218 = 0;
  local_228 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_228;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_298,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_17c = 0xffffff;
  local_188 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  uStack_7c = 0xffffff;
  local_88 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  pdVar5 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f3bb8);
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_218 = 2;
  local_2b8 = DAT_1419df7b0;
  uStack_2b0 = _DAT_1419df7b8;
  if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140041b80(&local_298,&local_2b8);
  local_210 = &local_298;
  pdVar6 = (double *)
           gml_Script_InputPlayerGetGamepadType(local_res8,local_res10,&local_2c8,1,&local_210);
  if (pdVar6 != &local_188) {
    local_2b8 = *pdVar6;
    uStack_2b0 = pdVar6[1];
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_2b8);
  }
  local_218 = 3;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  local_210 = &local_188;
  local_1cc = 0xd;
  local_1d8 = (longlong *)0x0;
  uVar7 = gml_Script_InputDeviceGetRebindingResult(local_res8,local_res10,&local_2c8,1,&local_210);
  iVar3 = FUN_140e851f0(uVar7,&local_1d8,DAT_141955260,0);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0xd;
  if (iVar3 == 0) {
    local_128 = 0;
  }
  else {
    local_128 = 0x3ff0000000000000;
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_218 = 5;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  local_2b8 = _DAT_1419ebe80;
  uStack_2b0 = (double)uRam00000001419ebe88;
  if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140041b80(&local_298,&local_2b8);
  local_210 = &local_298;
  local_2b8 = DAT_1419df7b0;
  uStack_2b0 = _DAT_1419df7b8;
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2b8);
  local_208 = &local_288;
  ppdVar15 = &local_210;
  uVar7 = gml_Script_InputPressedMany(local_res8,local_res10,&local_2c8,2,ppdVar15);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 != '\0') {
    local_218 = 7;
    cVar2 = FUN_140e491e0(&local_128);
    if (cVar2 == '\0') {
      local_218 = 0xd;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a07a18);
      puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a07a18);
      cVar2 = FUN_140e491e0(uVar7);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      *(undefined4 *)((longlong)puVar10 + 0xc) = 0xd;
      if (cVar2 == '\0') {
        uVar7 = 0x3ff0000000000000;
      }
      else {
        uVar7 = 0;
      }
      *puVar10 = uVar7;
    }
    else {
      local_218 = 9;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      local_200 = &local_188;
      local_2b8 = _DAT_1419df7a0;
      uStack_2b0 = (double)uRam00000001419df7a8;
      if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      FUN_140041b80(&local_268,&local_2b8);
      local_1f8 = &local_268;
      local_2b8 = DAT_1419df7b0;
      uStack_2b0 = _DAT_1419df7b8;
      if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140041b80(&local_258,&local_2b8);
      local_1f0 = &local_258;
      local_2b8 = DAT_1419df7b0;
      uStack_2b0 = _DAT_1419df7b8;
      if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_248);
      }
      FUN_140041b80(local_248,&local_2b8);
      local_1e8 = local_248;
      local_2b8 = DAT_1419df7b0;
      uStack_2b0 = _DAT_1419df7b8;
      if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_238);
      }
      FUN_140041b80(local_238,&local_2b8);
      local_1e0 = local_238;
      ppdVar15 = &local_200;
      gml_Script_InputDeviceStopAllRebinding(local_res8,local_res10,&local_138,5,ppdVar15);
    }
  }
  local_218 = 0x11;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a07a18);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_218 = 0x65;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    uVar16 = (undefined4)((ulonglong)ppdVar15 >> 0x20);
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    uStack_2b0 = (double)CONCAT44(0xf,(undefined4)uStack_2b0);
    local_2b8 = 7.291122019556786e-304;
    local_2a8 = 7.291122019556786e-304;
    dStack_2a0 = uStack_2b0;
    if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_2a8);
    local_210 = &local_298;
    ppdVar15 = &local_210;
    puVar10 = (undefined8 *)CONCAT44(uVar16,DAT_141a02ef8);
    uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2c8,1,puVar10,ppdVar15);
    cVar2 = FUN_140e491e0(uVar7);
    if (cVar2 == '\0') {
      bVar13 = 0xf;
      uStack_2b0 = (double)CONCAT44(0xf,(undefined4)uStack_2b0);
      local_2b8 = 7.291122019556725e-304;
      pdVar6 = &local_2b8;
      uVar4 = 2;
      bVar12 = uStack_160._4_1_;
    }
    else {
      uStack_160 = (double)CONCAT44(0xf,(undefined4)uStack_160);
      local_168 = 7.291122019556786e-304;
      pdVar6 = &local_168;
      uVar4 = 1;
      bVar13 = uStack_2b0._4_1_;
      bVar12 = 0xf;
    }
    local_2a8 = *pdVar6;
    dStack_2a0 = pdVar6[1];
    local_res18 = uVar4;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_2a8);
    if ((uVar4 & 2) != 0) {
      uVar4 = uVar4 & 0xfffffffd;
      local_res18 = uVar4;
      if ((1 << (bVar13 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
    }
    if (((uVar4 & 1) != 0) && ((1 << (bVar12 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_168);
    }
    local_218 = 0x66;
    iVar3 = FUN_140e63cb0(&local_108,&local_res8,&local_res10,&local_a8);
    if (0 < iVar3) {
      do {
        local_218 = 0x68;
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2c8 = 0;
        local_2c0 = 0;
        local_2bc = 5;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a55440);
        FUN_140e87440(uVar7,DAT_141a55540,0x80000000,&local_98,
                      (ulonglong)puVar10 & 0xffffffffffffff00,
                      (ulonglong)ppdVar15 & 0xffffffffffffff00);
        local_2a8 = _DAT_141dd9978;
        dStack_2a0 = dRam0000000141dd9980;
        if ((1 << ((byte)_local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        FUN_140041b80(&local_298,&local_2a8);
        local_210 = &local_298;
        uVar7 = FUN_140069500(uVar7);
        ppdVar15 = &local_210;
        puVar10 = &local_98;
        FUN_140e63610(uVar7,local_res10,&local_2c8,1,puVar10,ppdVar15);
        cVar2 = FUN_140e643f0(&local_108,&local_res8,&local_res10);
      } while (cVar2 != '\0');
    }
    FUN_140e63970(&local_108,&local_res8,&local_res10);
    local_218 = 0x6b;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_2a8 = _DAT_1419df7a0;
    dStack_2a0 = (double)uRam00000001419df7a8;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_2a8);
    local_210 = &local_298;
    local_2a8 = DAT_1419df7b0;
    dStack_2a0 = _DAT_1419df7b8;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2a8);
    local_208 = &local_288;
    pdVar6 = (double *)FUN_1402fcb40(local_res8,local_res10,&local_2c8,2,&local_210);
    if (pdVar6 != &local_c8) {
      local_2a8 = *pdVar6;
      dStack_2a0 = pdVar6[1];
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_2a8);
    }
    local_218 = 0x6c;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_2a8 = _DAT_1419df7c0;
    dStack_2a0 = (double)uRam00000001419df7c8;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_2a8);
    local_210 = &local_298;
    local_2a8 = DAT_1419df7b0;
    dStack_2a0 = _DAT_1419df7b8;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2a8);
    local_208 = &local_288;
    ppdVar15 = &local_210;
    pdVar6 = (double *)FUN_1402fcb40(local_res8,local_res10,&local_2c8,2,ppdVar15);
    uVar16 = (undefined4)((ulonglong)ppdVar15 >> 0x20);
    if (pdVar6 != &local_d8) {
      local_2a8 = *pdVar6;
      dStack_2a0 = pdVar6[1];
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_2a8);
    }
    local_218 = 0x6d;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_2b8,gml_Object_oKeyRebinder_Draw_64,0);
    if (&local_2b8 != pdVar5) {
      local_2a8 = local_2b8;
      dStack_2a0 = uStack_2b0;
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      FUN_140041b80(pdVar5,&local_2a8);
    }
    FUN_140e60910(1);
    if (pdVar5 != &local_298) {
      local_2a8 = *pdVar5;
      dStack_2a0 = pdVar5[1];
      if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      FUN_140041b80(&local_298,&local_2a8);
    }
    if ((1 << ((byte)((ulonglong)uStack_2b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_210 = &local_298;
    local_208 = &local_c8;
    local_200 = &local_d8;
    uVar7 = CONCAT44(uVar16,DAT_1419fd6d8);
    pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_1b8,3,uVar7,&local_210);
    uVar16 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (pdVar5 != &local_268) {
      local_2a8 = *pdVar5;
      dStack_2a0 = pdVar5[1];
      if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      FUN_140041b80(&local_268,&local_2a8);
    }
    local_1f8 = &local_268;
    uVar7 = CONCAT44(uVar16,DAT_1419ef1c8);
    pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_2c8,1,uVar7,&local_1f8);
    uVar16 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (pdVar5 != &local_e8) {
      local_2a8 = *pdVar5;
      dStack_2a0 = pdVar5[1];
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_2a8);
    }
    local_218 = 0x6f;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_2a8 = _DAT_1419ebe30;
    dStack_2a0 = (double)uRam00000001419ebe38;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_2a8);
    local_210 = &local_298;
    local_2a8 = _DAT_1419ebea0;
    dStack_2a0 = dRam00000001419ebea8;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2a8);
    local_208 = &local_288;
    local_2a8 = _DAT_1419ebea0;
    dStack_2a0 = dRam00000001419ebea8;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_2a8);
    local_200 = &local_278;
    uVar7 = CONCAT44(uVar16,DAT_141a0a588);
    pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_2c8,3,uVar7,&local_210);
    uVar16 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (pdVar5 != &local_178) {
      local_2a8 = *pdVar5;
      dStack_2a0 = pdVar5[1];
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_2a8);
    }
    local_218 = 0x70;
    if ((local_16c & 0xffffff) == 0) {
      dVar14 = local_178;
    }
    else {
      dVar14 = (double)FUN_140e4b060(&local_178);
    }
    FUN_140ececc0((longlong)dVar14,0xd,&local_e8);
    local_218 = 0x71;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    local_210 = &local_178;
    local_208 = &local_178;
    local_2a8 = _DAT_141dd9988;
    dStack_2a0 = (double)uRam0000000141dd9990;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_2a8);
    local_200 = &local_278;
    local_2a8 = _DAT_141dc71d0;
    dStack_2a0 = dRam0000000141dc71d8;
    if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140041b80(&local_268,&local_2a8);
    local_1f8 = &local_268;
    uVar7 = CONCAT44(uVar16,DAT_141a090f8);
    pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_1b8,1,uVar7,&local_210);
    uVar16 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (pdVar5 != &local_258) {
      local_2a8 = *pdVar5;
      dStack_2a0 = pdVar5[1];
      if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140041b80(&local_258,&local_2a8);
    }
    local_1f0 = &local_258;
    uVar7 = CONCAT44(uVar16,DAT_1419f3b98);
    FUN_140e634e0(local_res8,local_res10,&local_2c8,4,uVar7,&local_208);
    uVar16 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_218 = 0x72;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_210 = &local_178;
    FUN_140e634e0(local_res8,local_res10,&local_2c8,1,CONCAT44(uVar16,DAT_1419ef3b8),&local_210);
    local_218 = 0x74;
    FUN_140edd0e0(local_res8,local_res10,0,0);
    if (local_f8 != 0) {
      FUN_140e4cd60();
    }
    goto LAB_140b33fc1;
  }
  local_218 = 0x13;
  cVar2 = FUN_140e491e0(&local_128);
  if (cVar2 != '\0') {
    local_218 = 0x38;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_210 = &local_188;
    pdVar5 = (double *)
             gml_Script_InputDeviceGetSteamHandle(local_res8,local_res10,&local_2c8,1,&local_210);
    if (pdVar5 != &local_148) {
      local_2b8 = *pdVar5;
      uStack_2b0 = pdVar5[1];
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_2b8);
    }
    local_218 = 0x39;
    iVar3 = FUN_140e851f0(&local_148,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar3 != 0) {
      local_218 = 0x3b;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_2c8 = 0;
      local_2c0 = 0;
      local_2bc = 5;
      local_210 = &local_188;
      pdVar5 = (double *)
               gml_Script_InputDeviceSetRebinding(local_res8,local_res10,&local_2c8,1,&local_210);
      if (pdVar5 != &local_158) {
        local_2b8 = *pdVar5;
        uStack_2b0 = pdVar5[1];
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_2b8);
      }
      local_218 = 0x3e;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3b78);
      local_fc = 10;
      local_108 = 0xb;
      iVar3 = FUN_140e851f0(uVar7,&local_108,DAT_141955260,0);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      uVar4 = 1 << ((byte)local_2bc & 0x1f);
      if (iVar3 == 0) {
        local_218 = 0x40;
        if ((uVar4 & 0x46) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2c8 = 0;
        local_2c0 = 0;
        local_2bc = 5;
        pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3b78);
        local_210 = &local_158;
        if (pdVar5 != &local_288) {
          local_2b8 = *pdVar5;
          uStack_2b0 = pdVar5[1];
          if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2b8);
        }
        local_208 = &local_288;
        local_200 = &local_148;
        local_2b8 = DAT_1419df7b0;
        uStack_2b0 = _DAT_1419df7b8;
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_2b8);
        local_1f8 = &local_268;
        local_2b8 = DAT_1419df7b0;
        uStack_2b0 = _DAT_1419df7b8;
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        pdVar5 = &local_2b8;
LAB_140b33048:
        FUN_140041b80(&local_258,pdVar5);
        local_1f0 = &local_258;
        gml_Script_InputBindingSetSafe(local_res8,local_res10,&local_2c8,5,&local_210);
      }
      else {
        local_218 = 0x44;
        if ((uVar4 & 0x46) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2c8 = 0;
        local_2c0 = 0;
        local_2bc = 5;
        pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3b78);
        local_210 = &local_158;
        local_208 = &local_148;
        if (pdVar5 != &local_278) {
          local_2b8 = *pdVar5;
          uStack_2b0 = pdVar5[1];
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          FUN_140041b80(&local_278,&local_2b8);
        }
        local_200 = &local_278;
        local_2b8 = DAT_1419df7b0;
        uStack_2b0 = _DAT_1419df7b8;
        if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_2b8);
        local_1f8 = &local_268;
        local_2b8 = DAT_1419df7b0;
        uStack_2b0 = _DAT_1419df7b8;
        if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        FUN_140041b80(&local_258,&local_2b8);
        local_1f0 = &local_258;
        ppdVar15 = &local_210;
        pdVar5 = (double *)gml_Script_InputBindingGet(local_res8,local_res10,&local_2c8,5,ppdVar15);
        if (pdVar5 != &local_198) {
          local_2b8 = *pdVar5;
          uStack_2b0 = pdVar5[1];
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          FUN_140041b80(&local_198,&local_2b8);
        }
        local_218 = 0x47;
        iVar3 = 0;
        if ((local_18c == 2) && (local_198 != 0.0)) {
          iVar3 = *(int *)((longlong)local_198 + 0x24);
        }
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1bc = 0;
        local_1c8 = (double)(iVar3 + -1);
        bVar1 = true;
LAB_140b32a90:
        if (!bVar1) {
          local_218 = 0x47;
          uVar4 = local_1bc & 0xffffff;
          if (uVar4 == 0) {
LAB_140b32ad4:
            local_1c8 = local_1c8 + -1.0;
          }
          else if (uVar4 == 1) {
            local_1c8 = (double)FUN_140e4b060(&local_1c8);
            local_1c8 = local_1c8 - 1.0;
            local_1bc = 0;
          }
          else if (uVar4 == 7) {
            local_1c8 = (double)CONCAT44(local_1c8._4_4_,local_1c8._0_4_ + -1);
          }
          else if (uVar4 == 10) {
            local_1c8 = (double)((longlong)local_1c8 + -1);
          }
          else {
            if (uVar4 == 0xd) {
              local_1bc = 0;
              goto LAB_140b32ad4;
            }
            FUN_140042910(&DAT_14172c450,&local_1c8,&local_1c8);
          }
        }
        bVar1 = false;
        local_fc = 0;
        local_108 = 0;
        uVar4 = FUN_140e851f0(&local_1c8,&local_108,DAT_141955260,1);
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        if (uVar4 < 0x80000000) {
          local_218 = 0x49;
          iVar3 = FUN_140e4a740(&local_1c8);
          pdVar5 = (double *)0x0;
          if (((local_18c & 0xffffff) == 2) && (local_198 != 0.0)) {
            if ((iVar3 < 0) || (*(int *)((longlong)local_198 + 0x24) <= iVar3)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                            *(undefined4 *)((longlong)local_198 + 0x24));
            }
            else {
              pdVar5 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)local_198 + 8));
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
            pdVar5 = &local_198;
          }
          in_stack_fffffffffffffd10 =
               (double **)((ulonglong)in_stack_fffffffffffffd10 & 0xffffffffffffff00);
          ppdVar15 = (double **)((ulonglong)ppdVar15 & 0xffffffffffffff00);
          FUN_140e87440(pdVar5,DAT_141a04028,0x80000000,&local_88,ppdVar15,in_stack_fffffffffffffd10
                       );
          dStack_2a0 = (double)CONCAT44(uStack_7c,uStack_80);
          local_2a8 = local_88;
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_2a8);
          local_218 = 0x4a;
          local_1cc = 10;
          local_1d8 = (longlong *)0xb;
          iVar3 = FUN_140e851f0(&local_118,&local_1d8,DAT_141955260,0);
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          if (iVar3 == 0) goto LAB_140b32d33;
          uStack_160 = (double)CONCAT44(10,(undefined4)uStack_160);
          local_168 = 5.92878775009496e-323;
          iVar3 = FUN_140e851f0(&local_118,&local_168,DAT_141955260,0);
          if ((1 << ((byte)((ulonglong)uStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          if (iVar3 == 0) goto LAB_140b32d33;
          uStack_2b0 = (double)CONCAT44(10,(undefined4)uStack_2b0);
          local_2b8 = 6.42285339593621e-323;
          iVar3 = FUN_140e851f0(&local_118,&local_2b8,DAT_141955260,0);
          if ((1 << ((byte)((ulonglong)uStack_2b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          if (iVar3 == 0) {
LAB_140b32d33:
            uVar16 = (undefined4)((ulonglong)ppdVar15 >> 0x20);
            local_218 = 0x4b;
            if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            local_2c8 = 0;
            local_2c0 = 0;
            local_2bc = 5;
            local_210 = &local_198;
            local_208 = &local_1c8;
            local_2a8 = _DAT_1419ebea0;
            dStack_2a0 = dRam00000001419ebea8;
            if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            FUN_140041b80(&local_278,&local_2a8);
            local_200 = &local_278;
            in_stack_fffffffffffffd10 = &local_210;
            ppdVar15 = (double **)CONCAT44(uVar16,DAT_1419fd808);
            FUN_140e634e0(local_res8,local_res10,&local_2c8,3,ppdVar15,in_stack_fffffffffffffd10);
          }
          goto LAB_140b32a90;
        }
        if (((local_18c != 2) || (local_198 == 0.0)) || (*(int *)((longlong)local_198 + 0x24) == 0))
        {
          local_218 = 0x50;
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          local_2c8 = 0;
          local_2c0 = 0;
          local_2bc = 5;
          pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3b78);
          local_210 = &local_158;
          if (pdVar5 != &local_288) {
            local_2a8 = *pdVar5;
            dStack_2a0 = pdVar5[1];
            if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            FUN_140041b80(&local_288,&local_2a8);
          }
          local_208 = &local_288;
          local_200 = &local_148;
          local_2a8 = DAT_1419df7b0;
          dStack_2a0 = _DAT_1419df7b8;
          if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_268);
          }
          FUN_140041b80(&local_268,&local_2a8);
          local_1f8 = &local_268;
          local_2a8 = DAT_1419df7b0;
          dStack_2a0 = _DAT_1419df7b8;
          if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          pdVar5 = &local_2a8;
          goto LAB_140b33048;
        }
        local_218 = 0x54;
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2c8 = 0;
        local_2c0 = 0;
        local_2bc = 5;
        pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3b78);
        local_210 = &local_158;
        if (pdVar5 != &local_288) {
          local_2a8 = *pdVar5;
          dStack_2a0 = pdVar5[1];
          if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2a8);
        }
        local_208 = &local_288;
        local_200 = &local_148;
        local_2a8 = DAT_1419df7b0;
        dStack_2a0 = _DAT_1419df7b8;
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_2a8);
        local_1f8 = &local_268;
        local_2a8 = DAT_1419df7b0;
        dStack_2a0 = _DAT_1419df7b8;
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        FUN_140041b80(&local_258,&local_2a8);
        local_1f0 = &local_258;
        gml_Script_InputBindingsExport(local_res8,local_res10,&local_2c8,5,&local_210);
      }
      local_218 = 0x58;
      cVar2 = FUN_140e491e0(&local_158);
      if (cVar2 == '\0') {
        local_218 = 0x5a;
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2c8 = 0;
        local_2c0 = 0;
        local_2bc = 5;
        local_2a8 = _DAT_1419df7a0;
        dStack_2a0 = (double)uRam00000001419df7a8;
        if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        FUN_140041b80(&local_298,&local_2a8);
        local_210 = &local_298;
        local_2a8 = _DAT_1419ebeb0;
        dStack_2a0 = (double)uRam00000001419ebeb8;
        if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        FUN_140041b80(&local_288,&local_2a8);
        local_208 = &local_288;
        local_2a8 = _DAT_1419ebec0;
        dStack_2a0 = (double)uRam00000001419ebec8;
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        FUN_140041b80(&local_278,&local_2a8);
        local_200 = &local_278;
        local_2a8 = DAT_1419df7b0;
        dStack_2a0 = _DAT_1419df7b8;
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_2a8);
        local_1f8 = &local_268;
        local_2a8 = DAT_1419df7b0;
        dStack_2a0 = _DAT_1419df7b8;
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        FUN_140041b80(&local_258,&local_2a8);
        local_1f0 = &local_258;
        gml_Script_InputBindingSetSafe(local_res8,local_res10,&local_2c8,5,&local_210);
        local_218 = 0x5b;
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2c8 = 0;
        local_2c0 = 0;
        local_2bc = 5;
        local_2a8 = _DAT_1419df7a0;
        dStack_2a0 = (double)uRam00000001419df7a8;
        if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        FUN_140041b80(&local_298,&local_2a8);
        local_210 = &local_298;
        local_2a8 = _DAT_1419ebed0;
        dStack_2a0 = (double)uRam00000001419ebed8;
        if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        FUN_140041b80(&local_288,&local_2a8);
        local_208 = &local_288;
        local_2a8 = _DAT_1419ebe50;
        dStack_2a0 = (double)uRam00000001419ebe58;
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        FUN_140041b80(&local_278,&local_2a8);
        local_200 = &local_278;
        local_2a8 = DAT_1419df7b0;
        dStack_2a0 = _DAT_1419df7b8;
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_2a8);
        local_1f8 = &local_268;
        local_2a8 = DAT_1419df7b0;
        dStack_2a0 = _DAT_1419df7b8;
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        FUN_140041b80(&local_258,&local_2a8);
        local_1f0 = &local_258;
        gml_Script_InputBindingSetSafe(local_res8,local_res10,&local_2c8,5,&local_210);
      }
      local_218 = 0x5e;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_2c8 = 0;
      local_2c0 = 0;
      local_2bc = 5;
      local_210 = &local_188;
      local_2a8 = _DAT_1419df7a0;
      dStack_2a0 = (double)uRam00000001419df7a8;
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_2a8);
      local_208 = &local_288;
      local_2a8 = DAT_1419df7b0;
      dStack_2a0 = _DAT_1419df7b8;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_2a8);
      local_200 = &local_278;
      local_2a8 = DAT_1419df7b0;
      dStack_2a0 = _DAT_1419df7b8;
      if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      FUN_140041b80(&local_268,&local_2a8);
      local_1f8 = &local_268;
      local_2a8 = DAT_1419df7b0;
      dStack_2a0 = _DAT_1419df7b8;
      if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140041b80(&local_258,&local_2a8);
      local_1f0 = &local_258;
      gml_Script_InputDeviceStopAllRebinding(local_res8,local_res10,&local_2c8,5,&local_210);
    }
    local_218 = 0x60;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_ac = 0;
    local_b8 = 0x4024000000000000;
    FUN_140e86fa0(local_res8,DAT_141a0a7e8,0,&local_b8);
    goto LAB_140b33fc1;
  }
  local_218 = 0x15;
  local_1cc = 6;
  local_1d8 = local_res8;
  FUN_140e87440(&local_1d8,DAT_141a0a7e8,0,&local_78,(ulonglong)ppdVar15 & 0xffffffffffffff00,
                (ulonglong)in_stack_fffffffffffffd10 & 0xffffffffffffff00);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1cc = 0;
  local_1d8 = (longlong *)&DAT_bff0000000000000;
  iVar3 = FUN_140e851f0(&local_78,&local_1d8,DAT_141955260,0);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (iVar3 != 0) {
    local_218 = 0x15;
    goto LAB_140b33fc1;
  }
  local_218 = 0x17;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a575f0);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_218 = 0x18;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    uVar8 = gml_Script_InputMousePressed(local_res8,local_res10,&local_2c8,0,0);
    cVar2 = FUN_140e491e0(uVar8);
    if (cVar2 != '\0') {
      local_218 = 0x19;
      pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a575f0);
      uStack_2b0 = (double)CONCAT44(0xd,(undefined4)uStack_2b0);
      local_2b8 = 1.0;
      if (&local_2b8 != pdVar5) {
        local_168 = 1.0;
        uStack_160 = uStack_2b0;
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        FUN_140041b80(pdVar5,&local_168);
      }
    }
  }
  else {
    local_218 = 0x1c;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    pdVar5 = (double *)
             FUN_140e8da20(&local_138,local_res8,7,&DAT_1419ebe70,&DAT_1419ebe60,&DAT_1419ebe20,
                           &DAT_1419ebee0,&DAT_1419ebef0,&DAT_1419ebe40,&DAT_1419ebe80);
    if (pdVar5 != &local_298) {
      local_2b8 = *pdVar5;
      uStack_2b0 = pdVar5[1];
      if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      FUN_140041b80(&local_298,&local_2b8);
    }
    local_210 = &local_298;
    local_2b8 = DAT_1419df7b0;
    uStack_2b0 = _DAT_1419df7b8;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2b8);
    local_208 = &local_288;
    uVar8 = gml_Script_InputReleased(local_res8,local_res10,&local_2c8,2,&local_210);
    cVar2 = FUN_140e491e0(uVar8);
    if (cVar2 != '\0') {
      local_218 = 0x1d;
      pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a575f0);
      uStack_2b0 = (double)CONCAT44(0xd,(undefined4)uStack_2b0);
      local_2b8 = 0.0;
      if (&local_2b8 != pdVar5) {
        local_168 = 0.0;
        uStack_160 = uStack_2b0;
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        FUN_140041b80(pdVar5,&local_168);
      }
    }
  }
  local_218 = 0x21;
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_218 = 0x25;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f3b58);
    local_2b8 = _DAT_1419ebe70;
    uStack_2b0 = (double)uRam00000001419ebe78;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_2b8);
    local_210 = &local_298;
    local_2b8 = _DAT_1419ebe60;
    uStack_2b0 = (double)uRam00000001419ebe68;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2b8);
    local_208 = &local_288;
    local_2b8 = DAT_1419df7b0;
    uStack_2b0 = _DAT_1419df7b8;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_2b8);
    local_200 = &local_278;
    local_2b8 = DAT_1419df7b0;
    uStack_2b0 = _DAT_1419df7b8;
    if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140041b80(&local_268,&local_2b8);
    local_1f8 = &local_268;
    local_2b8 = DAT_1419df7b0;
    uStack_2b0 = _DAT_1419df7b8;
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_2b8);
    local_1f0 = &local_258;
    FUN_140e609c0(local_res8);
    uVar7 = gml_Script_InputPartyGetJoin(local_res8,local_res10,&local_2c8,5,&local_210);
    FUN_1400460e0(pdVar5,uVar7);
    FUN_140e60910(1);
    local_218 = 0x26;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    pdVar6 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3b58);
    plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3b68);
    if (pdVar6 != &local_298) {
      local_2b8 = *pdVar6;
      uStack_2b0 = pdVar6[1];
      if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      FUN_140041b80(&local_298,&local_2b8);
    }
    local_210 = &local_298;
    local_2b8 = _DAT_141dc71d0;
    uStack_2b0 = dRam0000000141dc71d8;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2b8);
    local_208 = &local_288;
    iVar3 = 0;
    if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
      iVar3 = *(int *)(*plVar9 + 0x24);
    }
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_26c = 0;
    local_278 = (double)iVar3;
    local_200 = &local_278;
    FUN_140e609c0(local_res8);
    pdVar6 = (double *)
             gml_RoomCC_rmGravePit01_0_Create(local_res8,local_res10,&local_2c8,3,&local_210);
    if (pdVar6 != pdVar5) {
      local_2b8 = *pdVar6;
      uStack_2b0 = pdVar6[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      FUN_140041b80(pdVar5,&local_2b8);
    }
    FUN_140e60910(1);
  }
  else {
    local_218 = 0x22;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a575f0);
    uVar7 = gml_Script_InputMousePressed(local_res8,local_res10,&local_2c8,0,0);
    cVar2 = FUN_140e491e0(uVar7);
    if (cVar2 != '\0') {
      local_218 = 0x23;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3b68);
      puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f3b58);
      puVar11 = (undefined8 *)gml_Script_InputMouseMoved(local_res8,local_res10,&local_1a8,0,0);
      local_1cc = *(undefined4 *)((longlong)puVar11 + 0xc);
      local_1d0 = *(undefined4 *)(puVar11 + 1);
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
        local_1d8 = (longlong *)*puVar11;
      }
      else {
        FUN_1400419b0(&local_1d8,puVar11);
      }
      local_res18 = 4;
      local_fc = 7;
      local_108 = CONCAT44(local_108._4_4_,9);
      FUN_1400462a0(&local_1d8,&local_108);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      puVar11 = (undefined8 *)FUN_14018a720(&local_2b8,&local_1d8,0x18);
      iVar3 = 0;
      if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
        iVar3 = *(int *)(*plVar9 + 0x24);
      }
      if ((*(uint *)((longlong)puVar11 + 0xc) & 0xffffff) == 0) {
        uVar7 = *puVar11;
      }
      else {
        uVar7 = FUN_140e4b060(puVar11);
      }
      uVar7 = FUN_140e78ec0(uVar7,0,(double)(iVar3 + -1));
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
      *puVar10 = uVar7;
      if ((1 << ((byte)((ulonglong)uStack_2b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
    }
  }
  local_218 = 0x29;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  local_2b8 = _DAT_1419ebef0;
  uStack_2b0 = (double)uRam00000001419ebef8;
  if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140041b80(&local_298,&local_2b8);
  local_210 = &local_298;
  local_2b8 = DAT_1419df7b0;
  uStack_2b0 = _DAT_1419df7b8;
  if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2b8);
  local_208 = &local_288;
  uVar7 = gml_Script_InputPressedMany(local_res8,local_res10,&local_2c8,2,&local_210);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    local_2b8 = _DAT_1419ebea0;
    uStack_2b0 = dRam00000001419ebea8;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_2b8);
    local_200 = &local_278;
    uVar7 = gml_Script_InputMouseReleased(local_res8,local_res10,&local_1a8,1,&local_200);
    cVar2 = FUN_140e491e0(uVar7);
    if (cVar2 != '\0') goto LAB_140b320b8;
  }
  else {
LAB_140b320b8:
    local_218 = 0x2b;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3b58);
    pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3b68);
    pdVar6 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f3b78);
    FUN_140e609c0(local_res8);
    iVar3 = FUN_140e4a740(uVar7);
    if (((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 2) && (dVar14 = *pdVar5, dVar14 != 0.0))
    {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar14 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar14 + 0x24));
        pdVar5 = (double *)0x0;
      }
      else {
        pdVar5 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar14 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar5 != pdVar6) {
      local_2b8 = *pdVar5;
      uStack_2b0 = pdVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar6);
      }
      FUN_140041b80(pdVar6,&local_2b8);
    }
    FUN_140e60910(1);
    local_218 = 0x2c;
    pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f3b88);
    FUN_140e609c0(local_res8);
    if (&local_188 != pdVar5) {
      uStack_2b0 = (double)CONCAT44(uStack_17c,uStack_180);
      local_2b8 = local_188;
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      FUN_140041b80(pdVar5,&local_2b8);
    }
    FUN_140e60910(1);
    local_218 = 0x2d;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_210 = &local_188;
    local_2b8 = _DAT_1419df7c0;
    uStack_2b0 = (double)uRam00000001419df7c8;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2b8);
    local_208 = &local_288;
    pdVar5 = (double *)FUN_140e8da20(&local_1a8,local_res8,1,&DAT_1419ebe90);
    if (pdVar5 != &local_278) {
      local_2b8 = *pdVar5;
      uStack_2b0 = pdVar5[1];
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_2b8);
    }
    local_200 = &local_278;
    local_2b8 = DAT_1419df7b0;
    uStack_2b0 = _DAT_1419df7b8;
    if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140041b80(&local_268,&local_2b8);
    local_1f8 = &local_268;
    local_2b8 = DAT_1419df7b0;
    uStack_2b0 = _DAT_1419df7b8;
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_2b8);
    local_1f0 = &local_258;
    gml_Script_InputDeviceStopAllRebinding(local_res8,local_res10,&local_2c8,5,&local_210);
  }
  local_218 = 0x30;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  local_2b8 = _DAT_1419ebe40;
  uStack_2b0 = (double)uRam00000001419ebe48;
  if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140041b80(&local_298,&local_2b8);
  local_210 = &local_298;
  local_2b8 = DAT_1419df7b0;
  uStack_2b0 = _DAT_1419df7b8;
  if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2b8);
  local_208 = &local_288;
  uVar7 = gml_Script_InputPressedMany(local_res8,local_res10,&local_2c8,2,&local_210);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 != '\0') {
    local_218 = 0x32;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    local_2b8 = _DAT_1419df7a0;
    uStack_2b0 = (double)uRam00000001419df7a8;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_2b8);
    local_200 = &local_278;
    local_2b8 = DAT_1419df7b0;
    uStack_2b0 = _DAT_1419df7b8;
    if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140041b80(&local_268,&local_2b8);
    local_1f8 = &local_268;
    FUN_1402ffe40(local_res8,local_res10,&local_1b8,2,&local_200);
    local_218 = 0x33;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_2b8 = _DAT_1419df7c0;
    uStack_2b0 = (double)uRam00000001419df7c8;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_2b8);
    local_210 = &local_298;
    local_2b8 = DAT_1419df7b0;
    uStack_2b0 = _DAT_1419df7b8;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2b8);
    local_208 = &local_288;
    FUN_1402ffe40(local_res8,local_res10,&local_2c8,2,&local_210);
  }
LAB_140b33fc1:
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(&local_298,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_228;
  return;
}

