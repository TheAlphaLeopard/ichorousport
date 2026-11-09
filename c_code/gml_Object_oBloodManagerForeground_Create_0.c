// gml_Object_oBloodManagerForeground_Create_0 @ 0x1406d4810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodManagerForeground_Create_0(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  double *pdVar5;
  undefined8 uVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  undefined8 *puVar10;
  undefined1 **ppuVar11;
  undefined8 uVar12;
  ulonglong *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  double dVar16;
  undefined1 *puVar17;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 uVar19;
  double **ppdVar18;
  undefined4 uVar20;
  undefined8 local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  double local_1f8;
  byte local_1ec;
  double local_1e8;
  byte local_1dc;
  double local_1d8;
  byte local_1cc;
  double local_1c8;
  byte local_1bc;
  double local_1b8;
  byte local_1ac;
  undefined4 local_1a8 [3];
  byte local_19c;
  undefined4 local_198 [3];
  byte local_18c;
  undefined4 local_188 [3];
  byte local_17c;
  undefined4 local_178 [3];
  byte local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  double *local_138;
  double *local_130;
  double *local_128;
  double *local_120;
  double *local_118;
  undefined4 *local_110;
  undefined4 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined1 *local_c8;
  undefined4 local_c0;
  uint local_bc;
  ulonglong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  ulonglong local_88;
  undefined4 local_7c;
  ulonglong local_78;
  undefined4 local_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_res18 = 0;
  local_150 = "gml_Object_oBloodManagerBackground_Draw_0";
  local_148 = 0;
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  uVar19 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_1f8,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = (undefined1 *)0x0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = (undefined1 *)0x0;
  local_cc = 0xffffff;
  local_d8 = (undefined1 *)0x0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_148 = 1;
  pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04448);
  if (pdVar5 != &local_1f8) {
    local_248 = (undefined1 *)*pdVar5;
    uStack_240 = *(undefined4 *)(pdVar5 + 1);
    uStack_23c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_248);
  }
  local_138 = &local_1f8;
  uVar12 = CONCAT44(uVar19,DAT_141a04798);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_238,1,uVar12,&local_138);
  uVar19 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    local_148 = 2;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04448);
    FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_e8);
    local_248 = local_e8;
    uStack_240 = uStack_e0;
    uStack_23c = uStack_dc;
    if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_248);
    local_130 = &local_1e8;
    local_248 = local_e8;
    uStack_240 = uStack_e0;
    uStack_23c = uStack_dc;
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_248);
    local_128 = &local_1d8;
    uVar6 = CONCAT44(uVar19,DAT_141a00c98);
    pdVar8 = (double *)FUN_140e634e0(local_res8,local_res10,&local_208,1,uVar6,&local_130);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar8 != &local_1c8) {
      local_248 = (undefined1 *)*pdVar8;
      uStack_240 = *(undefined4 *)(pdVar8 + 1);
      uStack_23c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_248);
    }
    local_120 = &local_1c8;
    uVar6 = CONCAT44(uVar19,DAT_141a00d58);
    pdVar8 = (double *)FUN_140e634e0(local_res8,local_res10,&local_168,1,uVar6,&local_128);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar8 != &local_1b8) {
      local_248 = (undefined1 *)*pdVar8;
      uStack_240 = *(undefined4 *)(pdVar8 + 1);
      uStack_23c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_248);
    }
    local_118 = &local_1b8;
    FUN_140e609c0(local_res8);
    uVar6 = CONCAT44(uVar19,DAT_141a04a78);
    pdVar8 = (double *)FUN_140e634e0(local_res8,local_res10,&local_218,2,uVar6,&local_120);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar8 != pdVar7) {
      local_248 = (undefined1 *)*pdVar8;
      uStack_240 = *(undefined4 *)(pdVar8 + 1);
      uStack_23c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar7);
      }
      FUN_140041b80(pdVar7,&local_248);
    }
    FUN_140e60910(1);
  }
  local_148 = 4;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a03728);
  if (pdVar7 != &local_1f8) {
    local_248 = (undefined1 *)*pdVar7;
    uStack_240 = *(undefined4 *)(pdVar7 + 1);
    uStack_23c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_248);
  }
  local_138 = &local_1f8;
  uVar12 = CONCAT44(uVar19,DAT_141a04798);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_238,1,uVar12,&local_138);
  uVar19 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    local_148 = 5;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a03728);
    FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_e8);
    local_248 = local_e8;
    uStack_240 = uStack_e0;
    uStack_23c = uStack_dc;
    if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_248);
    local_130 = &local_1e8;
    local_248 = local_e8;
    uStack_240 = uStack_e0;
    uStack_23c = uStack_dc;
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_248);
    local_128 = &local_1d8;
    uVar6 = CONCAT44(uVar19,DAT_141a00c98);
    pdVar9 = (double *)FUN_140e634e0(local_res8,local_res10,&local_208,1,uVar6,&local_130);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar9 != &local_1c8) {
      local_248 = (undefined1 *)*pdVar9;
      uStack_240 = *(undefined4 *)(pdVar9 + 1);
      uStack_23c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_248);
    }
    local_120 = &local_1c8;
    uVar6 = CONCAT44(uVar19,DAT_141a00d58);
    pdVar9 = (double *)FUN_140e634e0(local_res8,local_res10,&local_168,1,uVar6,&local_128);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar9 != &local_1b8) {
      local_248 = (undefined1 *)*pdVar9;
      uStack_240 = *(undefined4 *)(pdVar9 + 1);
      uStack_23c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_248);
    }
    local_118 = &local_1b8;
    FUN_140e609c0(local_res8);
    uVar6 = CONCAT44(uVar19,DAT_141a04a78);
    pdVar9 = (double *)FUN_140e634e0(local_res8,local_res10,&local_218,2,uVar6,&local_120);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar9 != pdVar8) {
      local_248 = (undefined1 *)*pdVar9;
      uStack_240 = *(undefined4 *)(pdVar9 + 1);
      uStack_23c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar8);
      }
      FUN_140041b80(pdVar8,&local_248);
    }
    FUN_140e60910(1);
  }
  local_148 = 8;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a03a78);
  if (pdVar8 != &local_1f8) {
    local_248 = (undefined1 *)*pdVar8;
    uStack_240 = *(undefined4 *)(pdVar8 + 1);
    uStack_23c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_248);
  }
  local_138 = &local_1f8;
  uVar6 = CONCAT44(uVar19,DAT_141a1c640);
  puVar10 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_238,1,uVar6,&local_138);
  uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((double *)puVar10 != &local_a8) {
    local_248 = (undefined1 *)*puVar10;
    uStack_240 = *(undefined4 *)(puVar10 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar10 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_248);
  }
  local_148 = 9;
  uStack_23c = 0;
  local_248 = &DAT_bff0000000000000;
  iVar4 = FUN_140e851f0(&local_a8,&local_248,DAT_141955260,0);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar4 == 0) {
    local_148 = 9;
  }
  else {
    local_148 = 0xb;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_e8);
    local_248 = local_e8;
    uStack_240 = uStack_e0;
    uStack_23c = uStack_dc;
    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_248);
    local_138 = &local_1f8;
    uVar6 = CONCAT44(uVar19,DAT_141a00e38);
    ppuVar11 = (undefined1 **)FUN_140e634e0(local_res8,local_res10,&local_238,1,uVar6,&local_138);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (ppuVar11 != &local_c8) {
      local_248 = *ppuVar11;
      uStack_240 = *(undefined4 *)(ppuVar11 + 1);
      uStack_23c = *(undefined4 *)((longlong)ppuVar11 + 0xc);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_248);
    }
    local_148 = 0xc;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_e8);
    local_248 = local_e8;
    uStack_240 = uStack_e0;
    uStack_23c = uStack_dc;
    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_248);
    local_138 = &local_1f8;
    uVar6 = CONCAT44(uVar19,DAT_141a00dd8);
    ppuVar11 = (undefined1 **)FUN_140e634e0(local_res8,local_res10,&local_238,1,uVar6,&local_138);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (ppuVar11 != &local_d8) {
      local_248 = *ppuVar11;
      uStack_240 = *(undefined4 *)(ppuVar11 + 1);
      uStack_23c = *(undefined4 *)((longlong)ppuVar11 + 0xc);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_248);
    }
    local_148 = 0xe;
    if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
      dVar16 = *pdVar5;
    }
    else {
      dVar16 = (double)FUN_140e4b060(pdVar5);
    }
    FUN_140ec60c0((longlong)dVar16,0xffffffff);
    local_148 = 0xf;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    local_248 = (undefined1 *)CONCAT44(uRam0000000141dc6864,_DAT_141dc6860);
    uStack_240 = uRam0000000141dc6868;
    uStack_23c = uRam0000000141dc686c;
    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_248);
    local_138 = &local_1f8;
    local_248 = (undefined1 *)CONCAT44(uRam0000000141dc6864,_DAT_141dc6860);
    uStack_240 = uRam0000000141dc6868;
    uStack_23c = uRam0000000141dc686c;
    if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_248);
    local_130 = &local_1e8;
    uVar6 = CONCAT44(uVar19,DAT_141a04558);
    FUN_140e634e0(local_res8,local_res10,&local_238,2,uVar6,&local_138);
    local_148 = 0x11;
    uStack_23c = 0xf;
    local_248 = (undefined1 *)0x100000000000014;
    iVar4 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_248);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (0 < iVar4) {
      do {
        uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
        (**(code **)(*local_res8 + 8))(local_res8,DAT_141a04448);
        local_148 = 0x12;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        pdVar9 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04448);
        if (pdVar9 != &local_1f8) {
          local_248 = (undefined1 *)*pdVar9;
          uStack_240 = *(undefined4 *)(pdVar9 + 1);
          uStack_23c = *(undefined4 *)((longlong)pdVar9 + 0xc);
          if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_248);
        }
        local_138 = &local_1f8;
        uVar6 = CONCAT44(uVar19,DAT_141a04798);
        uVar12 = FUN_140e634e0(local_res8,local_res10,&local_238,1,uVar6,&local_138);
        cVar3 = FUN_140e491e0(uVar12);
        uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (cVar3 != '\0') {
          local_148 = 0x13;
          if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          local_218 = 0;
          local_210 = 0;
          local_20c = 5;
          pdVar9 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04448);
          if (pdVar9 != &local_1e8) {
            local_248 = (undefined1 *)*pdVar9;
            uStack_240 = *(undefined4 *)(pdVar9 + 1);
            uStack_23c = *(undefined4 *)((longlong)pdVar9 + 0xc);
            if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            FUN_140041b80(&local_1e8,&local_248);
          }
          local_130 = &local_1e8;
          local_248 = (undefined1 *)CONCAT44(uRam0000000141dc6864,_DAT_141dc6860);
          uStack_240 = uRam0000000141dc6868;
          uStack_23c = uRam0000000141dc686c;
          if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_248);
          local_128 = &local_1d8;
          local_248 = (undefined1 *)CONCAT44(uRam0000000141dc6864,_DAT_141dc6860);
          uStack_240 = uRam0000000141dc6868;
          uStack_23c = uRam0000000141dc686c;
          if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_248);
          local_120 = &local_1c8;
          uVar6 = CONCAT44(uVar19,DAT_141a049d8);
          FUN_140e634e0(local_res8,local_res10,&local_218,3,uVar6,&local_130);
        }
        cVar3 = FUN_140e643f0(local_68,&local_res8,&local_res10);
        uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
      } while (cVar3 != '\0');
    }
    FUN_140e63970(local_68,&local_res8,&local_res10);
    local_148 = 0x15;
    FUN_140ec7870();
    local_148 = 0x17;
    if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
      dVar16 = *pdVar7;
    }
    else {
      dVar16 = (double)FUN_140e4b060(pdVar7);
    }
    FUN_140ec60c0((longlong)dVar16,0xffffffff);
    local_148 = 0x18;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    local_248 = (undefined1 *)CONCAT44(uRam0000000141dc6864,_DAT_141dc6860);
    uStack_240 = uRam0000000141dc6868;
    uStack_23c = uRam0000000141dc686c;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_248);
    local_138 = &local_1f8;
    local_248 = (undefined1 *)CONCAT44(uRam0000000141dc6864,_DAT_141dc6860);
    uStack_240 = uRam0000000141dc6868;
    uStack_23c = uRam0000000141dc686c;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_248);
    local_130 = &local_1e8;
    uVar6 = CONCAT44(uVar19,DAT_141a04558);
    FUN_140e634e0(local_res8,local_res10,&local_238,2,uVar6,&local_138);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_148 = 0x1a;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    if (pdVar8 != &local_1f8) {
      local_248 = (undefined1 *)*pdVar8;
      uStack_240 = *(undefined4 *)(pdVar8 + 1);
      uStack_23c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_248);
    }
    local_138 = &local_1f8;
    uVar6 = CONCAT44(uVar19,DAT_1419f70c8);
    pdVar8 = (double *)FUN_140e634e0(local_res8,local_res10,&local_218,1,uVar6,&local_138);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar8 != &local_1e8) {
      local_248 = (undefined1 *)*pdVar8;
      uStack_240 = *(undefined4 *)(pdVar8 + 1);
      uStack_23c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_248);
    }
    local_130 = &local_1e8;
    puVar17 = local_c8;
    if ((local_bc & 0xffffff) != 0) {
      puVar17 = (undefined1 *)FUN_140e4b060(&local_c8);
    }
    local_248 = (undefined1 *)((ulonglong)puVar17 ^ 0x8000000000000000);
    uStack_23c = 0;
    local_b8 = (ulonglong)puVar17 ^ 0x8000000000000000;
    uStack_b0 = uStack_240;
    uStack_ac = 0;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_b8);
    local_128 = &local_1d8;
    puVar17 = local_d8;
    if ((local_cc & 0xffffff) != 0) {
      puVar17 = (undefined1 *)FUN_140e4b060(&local_d8);
    }
    local_248 = (undefined1 *)((ulonglong)puVar17 ^ 0x8000000000000000);
    uStack_23c = 0;
    local_b8 = (ulonglong)puVar17 ^ 0x8000000000000000;
    uStack_b0 = uStack_240;
    uStack_ac = 0;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_b8);
    local_120 = &local_1c8;
    uVar6 = CONCAT44(uVar19,DAT_1419f54b8);
    FUN_140e634e0(local_res8,local_res10,&local_238,3,uVar6,&local_130);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_148 = 0x1c;
    FUN_140ec7870();
    local_148 = 0x1e;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    local_138 = &local_a8;
    uVar6 = CONCAT44(uVar19,DAT_141a03d38);
    puVar13 = (ulonglong *)FUN_140e634e0(local_res8,local_res10,&local_238,1,uVar6,&local_138);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar13 != &local_78) {
      local_248 = (undefined1 *)*puVar13;
      uStack_240 = (undefined4)puVar13[1];
      uStack_23c = *(undefined4 *)((longlong)puVar13 + 0xc);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_248);
    }
    local_148 = 0x1f;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    local_138 = &local_a8;
    puVar13 = (ulonglong *)
              FUN_140e634e0(local_res8,local_res10,&local_238,1,CONCAT44(uVar19,DAT_141a03d58),
                            &local_138);
    if (puVar13 != &local_88) {
      local_248 = (undefined1 *)*puVar13;
      uStack_240 = (undefined4)puVar13[1];
      uStack_23c = *(undefined4 *)((longlong)puVar13 + 0xc);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_248);
    }
    local_148 = 0x21;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    local_248 = (undefined1 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_240 = DAT_1419df7b8;
    uStack_23c = DAT_1419df7bc;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_248);
    local_138 = &local_1f8;
    uStack_ac = DAT_141dd5d84;
    uStack_b0 = DAT_141dd5d80;
    if ((1 << ((byte)DAT_141dd5d84 & 0x1f) & 0x46U) == 0) {
      local_b8 = DAT_141dd5d78;
    }
    else {
      FUN_1400419b0(&local_b8,&DAT_141dd5d78);
    }
    uVar2 = uStack_ac;
    uVar19 = uStack_b0;
    uVar1 = local_b8;
    ppdVar18 = &local_138;
    uVar6 = gml_Script_anon_147_DefineBossAttributes_BOSSMODSINIT
                      (local_res8,local_res10,&local_208,1,ppdVar18);
    uVar20 = (undefined4)((ulonglong)ppdVar18 >> 0x20);
    uVar15 = 1 << ((byte)uVar2 & 0x1f) & 0x46;
    uStack_240 = uVar19;
    uStack_23c = uVar2;
    if (uVar15 == 0) {
      local_248 = (undefined1 *)uVar1;
    }
    else {
      FUN_1400419b0(&local_248,&local_b8);
    }
    local_res18 = 1;
    FUN_1400460e0(&local_248,uVar6);
    local_228 = (undefined4)local_248;
    uStack_224 = local_248._4_4_;
    uStack_220 = uStack_240;
    uStack_21c = uStack_23c;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_228);
    local_res18 = 0;
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (uVar15 != 0) {
      FUN_140041a50(&local_b8);
    }
    local_130 = &local_1e8;
    pdVar8 = (double *)
             FUN_140e634e0(local_res8,local_res10,&local_218,1,CONCAT44(uVar20,DAT_141a086f8),
                           &local_130);
    if (pdVar8 != &local_1d8) {
      local_228 = *(undefined4 *)pdVar8;
      uStack_224 = *(undefined4 *)((longlong)pdVar8 + 4);
      uStack_220 = *(undefined4 *)(pdVar8 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_228);
    }
    local_128 = &local_1d8;
    local_228 = _DAT_1419e78d0;
    uStack_224 = uRam00000001419e78d4;
    uStack_220 = uRam00000001419e78d8;
    uStack_21c = uRam00000001419e78dc;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_228);
    local_120 = &local_1c8;
    local_228 = _DAT_1419e78d0;
    uStack_224 = uRam00000001419e78d4;
    uStack_220 = uRam00000001419e78d8;
    uStack_21c = uRam00000001419e78dc;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_228);
    local_118 = &local_1b8;
    ppdVar18 = &local_128;
    gml_Script_SignalSubscribe(local_res8,local_res10,&local_238,3,ppdVar18);
    uVar19 = (undefined4)((ulonglong)ppdVar18 >> 0x20);
    local_148 = 0x23;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    uStack_23c = 0xf;
    local_248 = (undefined1 *)0x100000800000013;
    local_228 = 0x13;
    uStack_224 = 0x1000008;
    uStack_220 = uStack_240;
    uStack_21c = 0xf;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_228);
    local_138 = &local_1f8;
    local_228 = _DAT_141dd5d58;
    uStack_224 = uRam0000000141dd5d5c;
    uStack_220 = uRam0000000141dd5d60;
    uStack_21c = DAT_141dd5d64;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_228);
    local_130 = &local_1e8;
    if (pdVar5 != &local_1d8) {
      local_228 = *(undefined4 *)pdVar5;
      uStack_224 = *(undefined4 *)((longlong)pdVar5 + 4);
      uStack_220 = *(undefined4 *)(pdVar5 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar5 + 0xc);
      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_228);
    }
    local_128 = &local_1d8;
    uVar6 = CONCAT44(uVar19,DAT_1419f54d8);
    pdVar8 = (double *)FUN_140e634e0(local_res8,local_res10,&local_218,2,uVar6,&local_138);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar8 != &local_1c8) {
      local_228 = *(undefined4 *)pdVar8;
      uStack_224 = *(undefined4 *)((longlong)pdVar8 + 4);
      uStack_220 = *(undefined4 *)(pdVar8 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_228);
    }
    local_120 = &local_1c8;
    uVar6 = CONCAT44(uVar19,DAT_141a04b28);
    pdVar8 = (double *)FUN_140e634e0(local_res8,local_res10,&local_208,1,uVar6,&local_128);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar8 != &local_1b8) {
      local_228 = *(undefined4 *)pdVar8;
      uStack_224 = *(undefined4 *)((longlong)pdVar8 + 4);
      uStack_220 = *(undefined4 *)(pdVar8 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_228);
    }
    local_118 = &local_1b8;
    uVar6 = CONCAT44(uVar19,DAT_1419f5468);
    FUN_140e634e0(local_res8,local_res10,&local_238,2,uVar6,&local_120);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_148 = 0x24;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    uStack_23c = 0xf;
    local_248 = (undefined1 *)0x100000800000013;
    local_228 = 0x13;
    uStack_224 = 0x1000008;
    uStack_220 = uStack_240;
    uStack_21c = 0xf;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_228);
    local_138 = &local_1f8;
    local_228 = _DAT_141dd5d88;
    uStack_224 = uRam0000000141dd5d8c;
    uStack_220 = uRam0000000141dd5d90;
    uStack_21c = DAT_141dd5d94;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_228);
    local_130 = &local_1e8;
    FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_e8);
    local_228 = (undefined4)local_e8;
    uStack_224 = local_e8._4_4_;
    uStack_220 = uStack_e0;
    uStack_21c = uStack_dc;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_228);
    local_128 = &local_1d8;
    local_228 = (undefined4)local_e8;
    uStack_224 = local_e8._4_4_;
    uStack_220 = uStack_e0;
    uStack_21c = uStack_dc;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_228);
    local_120 = &local_1c8;
    uVar6 = CONCAT44(uVar19,DAT_141a04778);
    pdVar8 = (double *)FUN_140e634e0(local_res8,local_res10,&local_238,2,uVar6,&local_138);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar8 != &local_1b8) {
      local_228 = *(undefined4 *)pdVar8;
      uStack_224 = *(undefined4 *)((longlong)pdVar8 + 4);
      uStack_220 = *(undefined4 *)(pdVar8 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_228);
    }
    local_118 = &local_1b8;
    uVar6 = CONCAT44(uVar19,DAT_141a00c98);
    puVar14 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_218,1,uVar6,&local_128);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar14 != local_1a8) {
      local_228 = *puVar14;
      uStack_224 = puVar14[1];
      uStack_220 = puVar14[2];
      uStack_21c = puVar14[3];
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_228);
    }
    local_110 = local_1a8;
    uVar6 = CONCAT44(uVar19,DAT_141a00d58);
    puVar14 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_208,1,uVar6,&local_120);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar14 != local_198) {
      local_228 = *puVar14;
      uStack_224 = puVar14[1];
      uStack_220 = puVar14[2];
      uStack_21c = puVar14[3];
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_228);
    }
    local_108 = local_198;
    FUN_140ec9ea0(3,&local_118);
    local_148 = 0x25;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    uStack_23c = 0xf;
    local_248 = (undefined1 *)0x100000800000013;
    local_228 = 0x13;
    uStack_224 = 0x1000008;
    uStack_220 = uStack_240;
    uStack_21c = 0xf;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_228);
    local_138 = &local_1f8;
    local_228 = _DAT_141dd5d68;
    uStack_224 = uRam0000000141dd5d6c;
    uStack_220 = uRam0000000141dd5d70;
    uStack_21c = DAT_141dd5d74;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_228);
    local_130 = &local_1e8;
    if (pdVar5 != &local_1d8) {
      local_228 = *(undefined4 *)pdVar5;
      uStack_224 = *(undefined4 *)((longlong)pdVar5 + 4);
      uStack_220 = *(undefined4 *)(pdVar5 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar5 + 0xc);
      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_228);
    }
    local_128 = &local_1d8;
    uVar6 = CONCAT44(uVar19,DAT_141a04b28);
    pdVar8 = (double *)FUN_140e634e0(local_res8,local_res10,&local_208,1,uVar6,&local_128);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar8 != &local_1c8) {
      local_228 = *(undefined4 *)pdVar8;
      uStack_224 = *(undefined4 *)((longlong)pdVar8 + 4);
      uStack_220 = *(undefined4 *)(pdVar8 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_228);
    }
    local_120 = &local_1c8;
    if (pdVar5 != &local_1b8) {
      local_228 = *(undefined4 *)pdVar5;
      uStack_224 = *(undefined4 *)((longlong)pdVar5 + 4);
      uStack_220 = *(undefined4 *)(pdVar5 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar5 + 0xc);
      if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_228);
    }
    local_118 = &local_1b8;
    uVar6 = CONCAT44(uVar19,DAT_141a04b28);
    puVar14 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_98,1,uVar6,&local_118);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar14 != local_1a8) {
      local_228 = *puVar14;
      uStack_224 = puVar14[1];
      uStack_220 = puVar14[2];
      uStack_21c = puVar14[3];
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_228);
    }
    local_110 = local_1a8;
    uVar6 = CONCAT44(uVar19,DAT_141a04778);
    puVar14 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_238,2,uVar6,&local_138);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar14 != local_198) {
      local_228 = *puVar14;
      uStack_224 = puVar14[1];
      uStack_220 = puVar14[2];
      uStack_21c = puVar14[3];
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_228);
    }
    local_108 = local_198;
    uVar6 = CONCAT44(uVar19,DAT_141a04658);
    puVar14 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_218,1,uVar6,&local_120);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar14 != local_188) {
      local_228 = *puVar14;
      uStack_224 = puVar14[1];
      uStack_220 = puVar14[2];
      uStack_21c = puVar14[3];
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_228);
    }
    local_100 = local_188;
    uVar6 = CONCAT44(uVar19,DAT_141a04668);
    puVar14 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_168,1,uVar6,&local_110);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar14 != local_178) {
      local_228 = *puVar14;
      uStack_224 = puVar14[1];
      uStack_220 = puVar14[2];
      uStack_21c = puVar14[3];
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_228);
    }
    local_f8 = local_178;
    FUN_140ec9ea0(3,&local_108);
    local_148 = 0x2a;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if (pdVar7 != &local_1f8) {
      local_228 = *(undefined4 *)pdVar7;
      uStack_224 = *(undefined4 *)((longlong)pdVar7 + 4);
      uStack_220 = *(undefined4 *)(pdVar7 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar7 + 0xc);
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_228);
    }
    local_138 = &local_1f8;
    uStack_23c = local_bc;
    uStack_240 = local_c0;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
      local_248 = local_c8;
    }
    else {
      FUN_1400419b0(&local_248,&local_c8);
    }
    local_res18 = 8;
    FUN_1400460e0(&local_248,&local_78);
    local_228 = (undefined4)local_248;
    uStack_224 = local_248._4_4_;
    uStack_220 = uStack_240;
    uStack_21c = uStack_23c;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_228);
    local_res18 = 0;
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_130 = &local_1e8;
    uStack_23c = local_cc;
    uStack_240 = local_d0;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
      local_248 = local_d8;
    }
    else {
      FUN_1400419b0(&local_248,&local_d8);
    }
    local_res18 = 0x10;
    FUN_1400460e0(&local_248,&local_88);
    local_228 = (undefined4)local_248;
    uStack_224 = local_248._4_4_;
    uStack_220 = uStack_240;
    uStack_21c = uStack_23c;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_228);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_128 = &local_1d8;
    FUN_140e634e0(local_res8,local_res10,&local_238,3,CONCAT44(uVar19,DAT_141a049d8),&local_138);
    local_148 = 0x2c;
    FUN_140ec9dc0();
    if (local_58 != 0) {
      FUN_140e4cd60();
      local_58 = 0;
    }
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_1f8,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return;
}

