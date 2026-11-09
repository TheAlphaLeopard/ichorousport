// gml_Object_oBloodParticle_Create_0 @ 0x1406d7430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodParticle_Create_0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  undefined8 uVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  double dVar15;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Db_00;
  uint extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  uint local_res20;
  undefined4 uVar19;
  undefined *puVar17;
  double **ppdVar18;
  double *local_2b8;
  double dStack_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  double *local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  double local_258;
  byte local_24c;
  double local_248;
  byte local_23c;
  double local_238;
  byte local_22c;
  double local_228;
  byte local_21c;
  double local_218;
  byte local_20c;
  double local_208;
  byte local_1fc;
  double local_1f8;
  byte local_1ec;
  double local_1e8;
  byte local_1dc;
  double local_1d8;
  byte local_1cc;
  double *local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  double local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  double *local_188;
  double *local_180;
  double *local_178;
  double *local_170;
  double *local_168;
  double *local_160;
  double *local_158;
  double *local_150;
  double *local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  uint local_11c;
  undefined8 local_118;
  undefined4 local_110;
  uint local_10c;
  double *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  double local_d8;
  uint uStack_cc;
  double local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_res18 = 0;
  local_1a0 = "gml_Object_oBloodManagerForeground_Draw_0";
  local_198 = 0;
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  uVar19 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_258,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = (double *)0x0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_10c = 0xffffff;
  local_118 = (double *)0x0;
  local_11c = 0xffffff;
  local_128 = (double *)0x0;
  local_res20 = 0xffffff;
  uStack_cc = 0xffffff;
  local_d8 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_198 = 1;
  pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a03a78);
  if (pdVar5 != &local_258) {
    local_298 = (double *)*pdVar5;
    uStack_290 = pdVar5[1];
    if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_298);
  }
  local_188 = &local_258;
  uVar11 = CONCAT44(uVar19,DAT_141a1c670);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_288,1,uVar11,&local_188);
  uVar19 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_198 = 1;
    uVar13 = 0xffffff;
  }
  else {
    local_198 = 3;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04448);
    local_1c8 = pdVar7;
    if (pdVar7 != &local_258) {
      local_298 = (double *)*pdVar7;
      uStack_290 = pdVar7[1];
      if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140041b80(&local_258,&local_298);
    }
    local_188 = &local_258;
    uVar11 = CONCAT44(uVar19,DAT_141a04798);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_288,1,uVar11,&local_188);
    uVar19 = (undefined4)((ulonglong)uVar11 >> 0x20);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      local_198 = 3;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_278 = 0;
      local_270 = 0;
      local_26c = 5;
      pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04448);
      FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_108);
      uStack_290 = (double)CONCAT44(uStack_fc,uStack_100);
      local_298 = local_108;
      if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140041b80(&local_248,&local_298);
      local_180 = &local_248;
      uStack_290 = (double)CONCAT44(uStack_fc,uStack_100);
      local_298 = local_108;
      if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_298);
      local_178 = &local_238;
      uVar6 = CONCAT44(uVar19,DAT_141a00c98);
      pdVar9 = (double *)FUN_140e634e0(local_res8,local_res10,&local_268,1,uVar6,&local_180);
      uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (pdVar9 != &local_228) {
        local_298 = (double *)*pdVar9;
        uStack_290 = pdVar9[1];
        if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_298);
      }
      local_170 = &local_228;
      uVar6 = CONCAT44(uVar19,DAT_141a00d58);
      pdVar9 = (double *)FUN_140e634e0(local_res8,local_res10,&local_278,1,uVar6,&local_178);
      uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (pdVar9 != &local_218) {
        local_298 = (double *)*pdVar9;
        uStack_290 = pdVar9[1];
        if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140041b80(&local_218,&local_298);
      }
      local_168 = &local_218;
      FUN_140e609c0(local_res8);
      uVar6 = CONCAT44(uVar19,DAT_141a04a78);
      pdVar9 = (double *)FUN_140e634e0(local_res8,local_res10,&local_2a8,2,uVar6,&local_170);
      uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (pdVar9 != pdVar8) {
        local_298 = (double *)*pdVar9;
        uStack_290 = pdVar9[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar8);
        }
        FUN_140041b80(pdVar8,&local_298);
      }
      FUN_140e60910(1);
    }
    local_198 = 4;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a03728);
    if (pdVar8 != &local_258) {
      local_298 = (double *)*pdVar8;
      uStack_290 = pdVar8[1];
      if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140041b80(&local_258,&local_298);
    }
    local_188 = &local_258;
    uVar11 = CONCAT44(uVar19,DAT_141a04798);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_288,1,uVar11,&local_188);
    uVar19 = (undefined4)((ulonglong)uVar11 >> 0x20);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      local_198 = 4;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_278 = 0;
      local_270 = 0;
      local_26c = 5;
      pdVar9 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a03728);
      FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_108);
      uStack_290 = (double)CONCAT44(uStack_fc,uStack_100);
      local_298 = local_108;
      if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140041b80(&local_248,&local_298);
      local_180 = &local_248;
      uStack_290 = (double)CONCAT44(uStack_fc,uStack_100);
      local_298 = local_108;
      if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_298);
      local_178 = &local_238;
      uVar6 = CONCAT44(uVar19,DAT_141a00c98);
      pdVar10 = (double *)FUN_140e634e0(local_res8,local_res10,&local_268,1,uVar6,&local_180);
      uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (pdVar10 != &local_228) {
        local_298 = (double *)*pdVar10;
        uStack_290 = pdVar10[1];
        if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_298);
      }
      local_170 = &local_228;
      uVar6 = CONCAT44(uVar19,DAT_141a00d58);
      pdVar10 = (double *)FUN_140e634e0(local_res8,local_res10,&local_278,1,uVar6,&local_178);
      uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (pdVar10 != &local_218) {
        local_298 = (double *)*pdVar10;
        uStack_290 = pdVar10[1];
        if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140041b80(&local_218,&local_298);
      }
      local_168 = &local_218;
      FUN_140e609c0(local_res8);
      uVar6 = CONCAT44(uVar19,DAT_141a04a78);
      pdVar10 = (double *)FUN_140e634e0(local_res8,local_res10,&local_2a8,2,uVar6,&local_170);
      uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (pdVar10 != pdVar9) {
        local_298 = (double *)*pdVar10;
        uStack_290 = pdVar10[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar9);
        }
        FUN_140041b80(pdVar9,&local_298);
      }
      FUN_140e60910(1);
    }
    local_198 = 6;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    if (pdVar5 != &local_258) {
      local_298 = (double *)*pdVar5;
      uStack_290 = pdVar5[1];
      if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140041b80(&local_258,&local_298);
    }
    local_188 = &local_258;
    uVar6 = CONCAT44(uVar19,DAT_141a1c640);
    pdVar9 = (double *)FUN_140e634e0(local_res8,local_res10,&local_288,1,uVar6,&local_188);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar9 != &local_c8) {
      local_298 = (double *)*pdVar9;
      uStack_290 = pdVar9[1];
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_298);
    }
    local_198 = 7;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_108);
    uStack_290 = (double)CONCAT44(uStack_fc,uStack_100);
    local_298 = local_108;
    if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_298);
    local_188 = &local_258;
    uVar6 = CONCAT44(uVar19,DAT_141a00e38);
    pdVar9 = (double *)FUN_140e634e0(local_res8,local_res10,&local_288,1,uVar6,&local_188);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar9 != (double *)&local_118) {
      local_298 = (double *)*pdVar9;
      uStack_290 = pdVar9[1];
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_298);
    }
    local_198 = 8;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_108);
    uStack_290 = (double)CONCAT44(uStack_fc,uStack_100);
    local_298 = local_108;
    if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_298);
    local_188 = &local_258;
    uVar6 = CONCAT44(uVar19,DAT_141a00dd8);
    pdVar9 = (double *)FUN_140e634e0(local_res8,local_res10,&local_288,1,uVar6,&local_188);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar9 != (double *)&local_128) {
      local_298 = (double *)*pdVar9;
      uStack_290 = pdVar9[1];
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_298);
    }
    local_198 = 10;
    if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
      dVar15 = *pdVar7;
    }
    else {
      dVar15 = (double)FUN_140e4b060(pdVar7);
    }
    FUN_140ec60c0((longlong)dVar15,0xffffffff);
    local_198 = 0xb;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    local_298 = _DAT_141dc6870;
    uStack_290 = dRam0000000141dc6878;
    if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_298);
    local_188 = &local_258;
    local_298 = _DAT_141dc6870;
    uStack_290 = dRam0000000141dc6878;
    if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_298);
    local_180 = &local_248;
    uVar6 = CONCAT44(uVar19,DAT_141a04558);
    FUN_140e634e0(local_res8,local_res10,&local_288,2,uVar6,&local_188);
    local_198 = 0xc;
    uStack_ec = 0xf;
    local_f8 = 7.29112201955643e-304;
    iVar3 = FUN_140e63cb0(local_88,&local_res8,&local_res10,&local_f8);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (0 < iVar3) {
      do {
        uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
        (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03a78);
        (**(code **)(*local_res8 + 8))(local_res8,DAT_141a04448);
        local_198 = 0xd;
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        local_288 = 0;
        local_280 = 0;
        local_27c = 5;
        (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03a78);
        pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04448);
        if (pdVar7 != &local_258) {
          local_298 = (double *)*pdVar7;
          uStack_290 = pdVar7[1];
          if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          FUN_140041b80(&local_258,&local_298);
        }
        local_188 = &local_258;
        uVar6 = CONCAT44(uVar19,DAT_141a04798);
        uVar11 = FUN_140e634e0(local_res8,local_res10,&local_288,1,uVar6,&local_188);
        cVar2 = FUN_140e491e0(uVar11);
        uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (cVar2 != '\0') {
          local_198 = 0xe;
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          local_2a8 = 0;
          local_2a0 = 0;
          local_29c = 5;
          pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04448);
          if (pdVar7 != &local_248) {
            local_298 = (double *)*pdVar7;
            uStack_290 = pdVar7[1];
            if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            FUN_140041b80(&local_248,&local_298);
          }
          local_180 = &local_248;
          local_298 = _DAT_141dc6870;
          uStack_290 = dRam0000000141dc6878;
          if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          FUN_140041b80(&local_238,&local_298);
          local_178 = &local_238;
          local_298 = _DAT_141dc6870;
          uStack_290 = dRam0000000141dc6878;
          if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          FUN_140041b80(&local_228,&local_298);
          local_170 = &local_228;
          uVar6 = CONCAT44(uVar19,DAT_141a049d8);
          FUN_140e634e0(local_res8,local_res10,&local_2a8,3,uVar6,&local_180);
        }
        cVar2 = FUN_140e643f0(local_88,&local_res8,&local_res10);
        uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
      } while (cVar2 != '\0');
    }
    FUN_140e63970(local_88,&local_res8,&local_res10);
    local_198 = 0xf;
    FUN_140ec7870();
    local_198 = 0x11;
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
      dVar15 = *pdVar8;
    }
    else {
      dVar15 = (double)FUN_140e4b060(pdVar8);
    }
    FUN_140ec60c0((longlong)dVar15,0xffffffff);
    local_198 = 0x12;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    local_298 = _DAT_141dc6870;
    uStack_290 = dRam0000000141dc6878;
    if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_298);
    local_188 = &local_258;
    local_298 = _DAT_141dc6870;
    uStack_290 = dRam0000000141dc6878;
    if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_298);
    local_180 = &local_248;
    uVar6 = CONCAT44(uVar19,DAT_141a04558);
    FUN_140e634e0(local_res8,local_res10,&local_288,2,uVar6,&local_188);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_198 = 0x13;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    if (pdVar5 != &local_258) {
      local_298 = (double *)*pdVar5;
      uStack_290 = pdVar5[1];
      if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140041b80(&local_258,&local_298);
    }
    local_188 = &local_258;
    uVar6 = CONCAT44(uVar19,DAT_1419f70c8);
    pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_2a8,1,uVar6,&local_188);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar5 != &local_248) {
      local_298 = (double *)*pdVar5;
      uStack_290 = pdVar5[1];
      if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140041b80(&local_248,&local_298);
    }
    local_180 = &local_248;
    if ((local_10c & 0xffffff) == 0) {
      uVar14 = (undefined4)local_118;
      uVar16 = local_118._4_4_;
    }
    else {
      FUN_140e4b060(&local_118);
      uVar14 = extraout_XMM0_Da;
      uVar16 = extraout_XMM0_Db;
    }
    local_f8 = -(double)CONCAT44(uVar16,uVar14);
    uStack_ec = 0;
    local_298 = (double *)(CONCAT44(uVar16,uVar14) ^ 0x8000000000000000);
    uStack_290 = (double)(ulonglong)uStack_f0;
    if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_298);
    local_178 = &local_238;
    if ((local_11c & 0xffffff) == 0) {
      uVar14 = (undefined4)local_128;
      uVar16 = local_128._4_4_;
    }
    else {
      FUN_140e4b060(&local_128);
      uVar14 = extraout_XMM0_Da_00;
      uVar16 = extraout_XMM0_Db_00;
    }
    local_f8 = -(double)CONCAT44(uVar16,uVar14);
    uStack_ec = 0;
    local_298 = (double *)(CONCAT44(uVar16,uVar14) ^ 0x8000000000000000);
    uStack_290 = (double)(ulonglong)uStack_f0;
    if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_298);
    local_170 = &local_228;
    FUN_140e634e0(local_res8,local_res10,&local_288,3,CONCAT44(uVar19,DAT_1419f54b8),&local_180);
    local_198 = 0x15;
    puVar17 = &DAT_141dd5e28;
    pdVar5 = (double *)
             FUN_140e8da20(&local_288,local_res8,4,&DAT_141dd5e38,&DAT_141dd5e28,&DAT_141dd5e08,
                           &DAT_141dd5e18);
    dVar15 = 0.0;
    if (pdVar5 != &local_d8) {
      local_298 = (double *)*pdVar5;
      uStack_290 = pdVar5[1];
      FUN_140041b80(&local_d8,&local_298);
      local_res20 = uStack_cc;
      dVar15 = local_d8;
    }
    local_198 = 0x16;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uVar13 = local_res20;
    local_1ac = 0;
    local_1b8 = 0.0;
    bVar1 = true;
LAB_1406d873d:
    uVar19 = (undefined4)((ulonglong)puVar17 >> 0x20);
    pdVar5 = (double *)0x0;
    if (!bVar1) {
      local_198 = 0x16;
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03a78);
      pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a03728);
      uVar4 = local_1ac & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_1b8 = (double)CONCAT44(local_1b8._4_4_,local_1b8._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_1b8 = (double)((longlong)local_1b8 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_1ac = 0;
              goto LAB_1406d87b6;
            }
            FUN_140042910(&DAT_14172c3d8,&local_1b8,&local_1b8);
          }
          goto LAB_1406d87bf;
        }
        local_1b8 = (double)FUN_140e4b060(&local_1b8);
        local_1ac = 0;
      }
LAB_1406d87b6:
      local_1b8 = local_1b8 + 1.0;
    }
LAB_1406d87bf:
    bVar1 = false;
    pdVar7 = pdVar5;
    if ((uVar13 == 2) && (dVar15 != 0.0)) {
      pdVar7 = (double *)(ulonglong)*(uint *)((longlong)dVar15 + 0x24);
    }
    uStack_ec = 0;
    local_f8 = (double)(int)pdVar7;
    iVar3 = FUN_140e851f0(&local_1b8,&local_f8,DAT_141955260,1);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (iVar3 != -2 && iVar3 < 0) {
      local_198 = 0x18;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      iVar3 = FUN_140e4a740(&local_1b8);
      uVar4 = uVar13 & 0xffffff;
      if ((uVar4 == 2) && (dVar15 != 0.0)) {
        if ((iVar3 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)dVar15 + 0x24));
        }
        else {
          pdVar5 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
        }
        if (pdVar5 != &local_258) goto LAB_1406d88eb;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar5 = &local_d8;
LAB_1406d88eb:
        local_2b8 = (double *)*pdVar5;
        dStack_2b0 = pdVar5[1];
        if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        FUN_140041b80(&local_258,&local_2b8);
      }
      local_188 = &local_258;
      puVar17 = (undefined *)CONCAT44(uVar19,DAT_141a1c670);
      uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2a8,1,puVar17,&local_188);
      cVar2 = FUN_140e491e0(uVar6);
      uVar19 = (undefined4)((ulonglong)puVar17 >> 0x20);
      if (cVar2 != '\0') {
        if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        pdVar5 = (double *)0x0;
        local_268 = 0;
        local_260 = 0;
        local_25c = 5;
        iVar3 = FUN_140e4a740(&local_1b8);
        if ((uVar4 == 2) && (dVar15 != 0.0)) {
          if ((iVar3 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar3)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                          *(undefined4 *)((longlong)dVar15 + 0x24));
          }
          else {
            pdVar5 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
          }
          if (pdVar5 != &local_248) goto LAB_1406d89df;
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          pdVar5 = &local_d8;
LAB_1406d89df:
          local_2b8 = (double *)*pdVar5;
          dStack_2b0 = pdVar5[1];
          if ((1 << ((byte)_local_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          FUN_140041b80(&local_248,&local_2b8);
        }
        local_180 = &local_248;
        puVar17 = (undefined *)CONCAT44(uVar19,DAT_141a03a98);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_268,1,puVar17,&local_180);
        cVar2 = FUN_140e491e0(uVar6);
        uVar19 = (undefined4)((ulonglong)puVar17 >> 0x20);
        if (cVar2 != '\0') {
          local_198 = 0x1a;
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          pdVar5 = (double *)0x0;
          local_278 = 0;
          local_270 = 0;
          local_26c = 5;
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          local_138 = 0;
          local_130 = 0;
          local_12c = 5;
          iVar3 = FUN_140e4a740(&local_1b8);
          if ((uVar4 == 2) && (dVar15 != 0.0)) {
            if ((iVar3 < 0) || (*(int *)((longlong)dVar15 + 0x24) <= iVar3)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                            *(undefined4 *)((longlong)dVar15 + 0x24));
            }
            else {
              pdVar5 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar15 + 8));
            }
            if (pdVar5 != &local_238) goto LAB_1406d8b0d;
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
            pdVar5 = &local_d8;
LAB_1406d8b0d:
            local_2b8 = (double *)*pdVar5;
            dStack_2b0 = pdVar5[1];
            if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            FUN_140041b80(&local_238,&local_2b8);
          }
          local_178 = &local_238;
          uVar6 = CONCAT44(uVar19,DAT_1419f70c8);
          pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_138,1,uVar6,&local_178);
          uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if (pdVar5 != &local_228) {
            local_2b8 = (double *)*pdVar5;
            dStack_2b0 = pdVar5[1];
            if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            FUN_140041b80(&local_228,&local_2b8);
          }
          local_170 = &local_228;
          if ((local_10c & 0xffffff) == 0) {
            local_98 = (undefined4)local_118;
            uVar4 = local_118._4_4_;
          }
          else {
            FUN_140e4b060(&local_118);
            local_98 = extraout_XMM0_Da_01;
            uVar4 = extraout_XMM0_Db_01;
          }
          uStack_94 = uVar4 ^ 0x80000000;
          uStack_8c = 0;
          local_2b8 = (double *)(CONCAT44(uVar4,local_98) ^ 0x8000000000000000);
          dStack_2b0 = (double)(ulonglong)uStack_90;
          if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          FUN_140041b80(&local_218,&local_2b8);
          local_168 = &local_218;
          if ((local_11c & 0xffffff) == 0) {
            uVar14 = (undefined4)local_128;
            uVar16 = local_128._4_4_;
          }
          else {
            FUN_140e4b060(&local_128);
            uVar14 = extraout_XMM0_Da_02;
            uVar16 = extraout_XMM0_Db_02;
          }
          dStack_2b0 = uStack_290;
          local_298 = (double *)(CONCAT44(uVar16,uVar14) ^ 0x8000000000000000);
          uStack_290 = (double)((ulonglong)uStack_290 & 0xffffffff);
          local_2b8 = (double *)(CONCAT44(uVar16,uVar14) ^ 0x8000000000000000);
          dStack_2b0 = (double)((ulonglong)dStack_2b0 & 0xffffffff);
          if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          FUN_140041b80(&local_208,&local_2b8);
          local_160 = &local_208;
          puVar17 = (undefined *)CONCAT44(uVar19,DAT_1419f54b8);
          FUN_140e634e0(local_res8,local_res10,&local_278,3,puVar17,&local_170);
        }
      }
      goto LAB_1406d873d;
    }
    local_198 = 0x1e;
    FUN_140ec7870();
    pdVar5 = local_1c8;
    local_198 = 0x20;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    local_188 = &local_c8;
    uVar6 = CONCAT44(uVar19,DAT_141a03d38);
    puVar12 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_2a8,1,uVar6,&local_188);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar12 != &local_a8) {
      local_2b8 = (double *)*puVar12;
      dStack_2b0 = (double)puVar12[1];
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_2b8);
    }
    local_198 = 0x21;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    local_188 = &local_c8;
    puVar12 = (undefined8 *)
              FUN_140e634e0(local_res8,local_res10,&local_2a8,1,CONCAT44(uVar19,DAT_141a03d58),
                            &local_188);
    if (puVar12 != &local_b8) {
      local_2b8 = (double *)*puVar12;
      dStack_2b0 = (double)puVar12[1];
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_2b8);
    }
    local_198 = 0x23;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_2b8 = DAT_1419df7b0;
    dStack_2b0 = (double)_DAT_1419df7b8;
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_2b8);
    local_188 = &local_258;
    uStack_1bc = DAT_141dd5de4;
    uStack_1c0 = DAT_141dd5de0;
    if ((1 << ((byte)DAT_141dd5de4 & 0x1f) & 0x46U) == 0) {
      local_1c8 = DAT_141dd5dd8;
    }
    else {
      FUN_1400419b0(&local_1c8,&DAT_141dd5dd8);
    }
    uVar13 = uStack_1bc;
    dStack_2b0 = (double)CONCAT44(uStack_1bc,uStack_1c0);
    local_2b8 = local_1c8;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
    if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_180 = &local_248;
    pdVar7 = (double *)
             gml_Script_anon_147_DefineBossAttributes_BOSSMODSINIT
                       (local_res8,local_res10,&local_138,1,&local_188);
    if (pdVar7 != &local_238) {
      local_2b8 = (double *)*pdVar7;
      dStack_2b0 = pdVar7[1];
      if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_2b8);
    }
    local_178 = &local_238;
    ppdVar18 = &local_180;
    pdVar7 = (double *)FUN_140e64420(local_res8,local_res10,&local_278,2,ppdVar18);
    uVar19 = (undefined4)((ulonglong)ppdVar18 >> 0x20);
    if (pdVar7 != &local_228) {
      local_2b8 = (double *)*pdVar7;
      dStack_2b0 = pdVar7[1];
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_2b8);
    }
    local_170 = &local_228;
    pdVar7 = (double *)
             FUN_140e634e0(local_res8,local_res10,&local_268,1,CONCAT44(uVar19,DAT_141a086f8),
                           &local_170);
    if (pdVar7 != &local_218) {
      local_2b8 = (double *)*pdVar7;
      dStack_2b0 = pdVar7[1];
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_2b8);
    }
    local_168 = &local_218;
    local_2b8 = _DAT_1419e78f0;
    dStack_2b0 = (double)uRam00000001419e78f8;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_2b8);
    local_160 = &local_208;
    local_2b8 = _DAT_1419e78e0;
    dStack_2b0 = (double)uRam00000001419e78e8;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_2b8);
    ppdVar18 = &local_168;
    local_158 = &local_1f8;
    gml_Script_SignalSubscribe(local_res8,local_res10,&local_2a8,3,ppdVar18);
    uVar19 = (undefined4)((ulonglong)ppdVar18 >> 0x20);
    local_198 = 0x24;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    uStack_290 = (double)CONCAT44(0xf,(undefined4)uStack_290);
    local_298 = (double *)0x100000800000013;
    local_2b8 = (double *)0x100000800000013;
    dStack_2b0 = uStack_290;
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_2b8);
    local_188 = &local_258;
    local_2b8 = _DAT_141dd5e48;
    dStack_2b0 = dRam0000000141dd5e50;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
    local_180 = &local_248;
    if (pdVar5 != &local_238) {
      local_2b8 = (double *)*pdVar5;
      dStack_2b0 = pdVar5[1];
      if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_2b8);
    }
    local_178 = &local_238;
    uVar6 = CONCAT44(uVar19,DAT_1419f54d8);
    pdVar7 = (double *)FUN_140e634e0(local_res8,local_res10,&local_268,2,uVar6,&local_188);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar7 != &local_228) {
      local_2b8 = (double *)*pdVar7;
      dStack_2b0 = pdVar7[1];
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_2b8);
    }
    local_170 = &local_228;
    uVar6 = CONCAT44(uVar19,DAT_141a04b28);
    pdVar7 = (double *)FUN_140e634e0(local_res8,local_res10,&local_278,1,uVar6,&local_178);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar7 != &local_218) {
      local_2b8 = (double *)*pdVar7;
      dStack_2b0 = pdVar7[1];
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_2b8);
    }
    local_168 = &local_218;
    uVar6 = CONCAT44(uVar19,DAT_1419f5468);
    FUN_140e634e0(local_res8,local_res10,&local_2a8,2,uVar6,&local_170);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_198 = 0x25;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    uStack_290 = (double)CONCAT44(0xf,(undefined4)uStack_290);
    local_298 = (double *)0x100000800000013;
    local_2b8 = (double *)0x100000800000013;
    dStack_2b0 = uStack_290;
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_2b8);
    local_188 = &local_258;
    local_2b8 = _DAT_141dd5df8;
    dStack_2b0 = (double)uRam0000000141dd5e00;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
    local_180 = &local_248;
    FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_108);
    dStack_2b0 = (double)CONCAT44(uStack_fc,uStack_100);
    local_2b8 = local_108;
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2b8);
    local_178 = &local_238;
    dStack_2b0 = (double)CONCAT44(uStack_fc,uStack_100);
    local_2b8 = local_108;
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_2b8);
    local_170 = &local_228;
    uVar6 = CONCAT44(uVar19,DAT_141a04778);
    pdVar7 = (double *)FUN_140e634e0(local_res8,local_res10,&local_2a8,2,uVar6,&local_188);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar7 != &local_218) {
      local_2b8 = (double *)*pdVar7;
      dStack_2b0 = pdVar7[1];
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_2b8);
    }
    local_168 = &local_218;
    uVar6 = CONCAT44(uVar19,DAT_141a00c98);
    pdVar7 = (double *)FUN_140e634e0(local_res8,local_res10,&local_268,1,uVar6,&local_178);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar7 != &local_208) {
      local_2b8 = (double *)*pdVar7;
      dStack_2b0 = pdVar7[1];
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_2b8);
    }
    local_160 = &local_208;
    uVar6 = CONCAT44(uVar19,DAT_141a00d58);
    pdVar7 = (double *)FUN_140e634e0(local_res8,local_res10,&local_278,1,uVar6,&local_170);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar7 != &local_1f8) {
      local_2b8 = (double *)*pdVar7;
      dStack_2b0 = pdVar7[1];
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_2b8);
    }
    local_158 = &local_1f8;
    FUN_140ec9ea0(3,&local_168);
    local_198 = 0x26;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uStack_290 = (double)CONCAT44(0xf,(undefined4)uStack_290);
    local_298 = (double *)0x100000800000013;
    local_2b8 = (double *)0x100000800000013;
    dStack_2b0 = uStack_290;
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_2b8);
    local_188 = &local_258;
    local_2b8 = _DAT_141dd5de8;
    dStack_2b0 = dRam0000000141dd5df0;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
    local_180 = &local_248;
    if (pdVar5 != &local_238) {
      local_2b8 = (double *)*pdVar5;
      dStack_2b0 = pdVar5[1];
      if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_2b8);
    }
    local_178 = &local_238;
    uVar6 = CONCAT44(uVar19,DAT_141a04b28);
    pdVar7 = (double *)FUN_140e634e0(local_res8,local_res10,&local_278,1,uVar6,&local_178);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar7 != &local_228) {
      local_2b8 = (double *)*pdVar7;
      dStack_2b0 = pdVar7[1];
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_2b8);
    }
    local_170 = &local_228;
    if (pdVar5 != &local_218) {
      local_2b8 = (double *)*pdVar5;
      dStack_2b0 = pdVar5[1];
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_2b8);
    }
    local_168 = &local_218;
    uVar6 = CONCAT44(uVar19,DAT_141a04b28);
    pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_e8,1,uVar6,&local_168);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar5 != &local_208) {
      local_2b8 = (double *)*pdVar5;
      dStack_2b0 = pdVar5[1];
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_2b8);
    }
    local_160 = &local_208;
    uVar6 = CONCAT44(uVar19,DAT_141a04778);
    pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_2a8,2,uVar6,&local_188);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar5 != &local_1f8) {
      local_2b8 = (double *)*pdVar5;
      dStack_2b0 = pdVar5[1];
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_2b8);
    }
    uVar6 = CONCAT44(uVar19,DAT_141a04658);
    local_158 = &local_1f8;
    pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_268,1,uVar6,&local_170);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar5 != &local_1e8) {
      local_2b8 = (double *)*pdVar5;
      dStack_2b0 = pdVar5[1];
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_2b8);
    }
    local_150 = &local_1e8;
    uVar6 = CONCAT44(uVar19,DAT_141a04668);
    pdVar5 = (double *)FUN_140e634e0(local_res8,local_res10,&local_138,1,uVar6,&local_160);
    uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar5 != &local_1d8) {
      local_2b8 = (double *)*pdVar5;
      dStack_2b0 = pdVar5[1];
      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_2b8);
    }
    local_148 = &local_1d8;
    FUN_140ec9ea0(3,&local_158);
    local_198 = 0x2a;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    if (pdVar8 != &local_258) {
      local_2b8 = (double *)*pdVar8;
      dStack_2b0 = pdVar8[1];
      if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140041b80(&local_258,&local_2b8);
    }
    local_188 = &local_258;
    uStack_1bc = local_10c;
    uStack_1c0 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_1c8 = local_118;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_118);
    }
    local_res18 = 4;
    FUN_1400460e0(&local_1c8,&local_a8);
    dStack_2b0 = (double)CONCAT44(uStack_1bc,uStack_1c0);
    local_2b8 = local_1c8;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_180 = &local_248;
    uStack_1bc = local_11c;
    uStack_1c0 = local_120;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
      local_1c8 = local_128;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_128);
    }
    local_res18 = 8;
    FUN_1400460e0(&local_1c8,&local_b8);
    dStack_2b0 = (double)CONCAT44(uStack_1bc,uStack_1c0);
    local_2b8 = local_1c8;
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2b8);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_178 = &local_238;
    FUN_140e634e0(local_res8,local_res10,&local_2a8,3,CONCAT44(uVar19,DAT_141a049d8),&local_188);
    local_198 = 0x2b;
    FUN_140ec9dc0();
    if (local_78 != 0) {
      FUN_140e4cd60();
      local_78 = 0;
    }
    uVar13 = local_res20;
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_258,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return;
}

