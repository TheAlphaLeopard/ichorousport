// gml_Script_floor_n @ 0x140444130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_floor_n(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  double *pdVar7;
  double *pdVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined4 local_res20;
  code *pcVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 **ppuVar19;
  longlong *plVar20;
  ulonglong in_stack_fffffffffffffd20;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  char *local_290;
  undefined4 local_288;
  undefined8 local_278 [2];
  undefined8 local_268;
  byte local_25c;
  undefined8 local_258;
  byte local_24c;
  undefined8 local_248;
  byte local_23c;
  undefined8 local_238;
  byte local_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  double local_208;
  undefined4 local_200;
  uint local_1fc;
  double local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  double local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  double local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178 [2];
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_res20 = 0;
  local_290 = "gml_Script_chunk_transition";
  local_298 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_298;
  local_288 = 0x12;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_a8,param_4,3,param_5);
  pcVar16 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_278,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  uStack_20c = 0xffffff;
  local_218 = 0;
  uStack_21c = 0xffffff;
  local_228 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f7148);
  local_2cc = 0;
  local_2d8 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_288 = 0x12;
  puVar12 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_a8[0];
  if ((int)local_a8[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_a0[2];
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_288 = 0x12;
    if ((int)local_a8[0] < 3) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_a0[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = &DAT_bff0000000000000;
  }
  local_288 = 0x14;
  uStack_2bc = 0xf;
  local_2c8 = 0x10000000000013a;
  local_158 = 0x10000000000013a;
  uStack_150 = uStack_2c0;
  uStack_14c = 0xf;
  if ((1 << ((byte)local_278[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_158);
  local_198 = local_278;
  FUN_140edd0e0(local_res8,local_res10,1,&local_198);
  local_288 = 0x16;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2d8 = 0;
  local_2d0 = 0;
  local_2cc = 5;
  uStack_29c = 0xf;
  local_2a8 = 0x1000000000000ff;
  in_stack_fffffffffffffd20 = in_stack_fffffffffffffd20 & 0xffffffffffffff00;
  uVar17 = (ulonglong)pcVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_2a8,DAT_141a57b10,0x80000000,&local_128,uVar17,in_stack_fffffffffffffd20);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((int)local_a8[0] < 2) {
    pdVar7 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar7 = (double *)local_a0[1];
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar7;
  }
  else {
    dVar14 = (double)FUN_140e4b060();
  }
  if ((int)local_a8[0] < 1) {
    pdVar7 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar7 = (double *)*local_a0;
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar7;
  }
  else {
    dVar15 = (double)FUN_140e4b060();
  }
  uVar3 = FUN_140e4a740(&local_128);
  uVar5 = FUN_140ea8b20(&local_2d8,uVar3,(longlong)dVar15,(longlong)dVar14);
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f71b8,0x80000000,&local_138,uVar17,
                in_stack_fffffffffffffd20 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar17 >> 0x20);
  local_2c8 = local_138;
  uStack_2c0 = uStack_130;
  uStack_2bc = uStack_12c;
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_2c8);
  local_288 = 0x17;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2d8 = 0;
  local_2d0 = 0;
  local_2cc = 5;
  local_198 = &local_1a8;
  uVar18 = CONCAT44(uVar3,DAT_1419fdc08);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2d8,1,uVar18,&local_198);
  uVar3 = (undefined4)((ulonglong)uVar18 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_288 = 0x1c;
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_2d8 = 0;
    local_2d0 = 0;
    local_2cc = 5;
    local_2c8 = CONCAT44(uRam0000000141dc65d4,_DAT_141dc65d0);
    uStack_2c0 = uRam0000000141dc65d8;
    uStack_2bc = uRam0000000141dc65dc;
    if ((1 << ((byte)local_278[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_2c8);
    local_198 = local_278;
    local_2c8 = CONCAT44(uRam0000000141dc65d4,_DAT_141dc65d0);
    uStack_2c0 = uRam0000000141dc65d8;
    uStack_2bc = uRam0000000141dc65dc;
    if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140041b80(&local_268,&local_2c8);
    local_190 = &local_268;
    local_2c8 = CONCAT44(uRam0000000141dd2d1c,_DAT_141dd2d18);
    uStack_2c0 = uRam0000000141dd2d20;
    uStack_2bc = DAT_141dd2d24;
    if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_2c8);
    local_188 = &local_258;
    uStack_2bc = 0xf;
    local_2c8 = 0x10000000000013a;
    local_158 = 0x10000000000013a;
    uStack_150 = uStack_2c0;
    uStack_14c = 0xf;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_158);
    local_180 = &local_248;
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2d8,4,CONCAT44(uVar3,DAT_141a0a7c8),
                          &local_198);
    iVar2 = FUN_140e63cb0(local_98,&local_res8,&local_res10,uVar5);
    if (0 < iVar2) {
      do {
        local_288 = 0x1e;
        puVar12 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
        FUN_140e609c0(local_res8);
        if ((int)local_a8[0] < 3) {
          puVar6 = &DAT_1419df7b0;
        }
        else {
          puVar6 = (undefined8 *)local_a0[2];
        }
        if (puVar6 != puVar12) {
          local_2b8 = *(undefined4 *)puVar6;
          uStack_2b4 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_2b0 = *(undefined4 *)(puVar6 + 1);
          uStack_2ac = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar12);
          }
          FUN_140041b80(puVar12,&local_2b8);
        }
        FUN_140e60910(1);
        local_288 = 0x1f;
        puVar12 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f71d8);
        local_10c = 0xf;
        local_118 = 0x100000000000058;
        FUN_140e87170(&local_118,DAT_1419fe0e8,0x80000000,&local_218,local_res8,local_res10);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140e609c0(local_res8);
        if (&local_218 != puVar12) {
          local_2b8 = (undefined4)local_218;
          uStack_2b4 = local_218._4_4_;
          uStack_2b0 = uStack_210;
          uStack_2ac = uStack_20c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar12);
          }
          FUN_140041b80(puVar12,&local_2b8);
        }
        FUN_140e60910(1);
        local_288 = 0x20;
        puVar12 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f71c8);
        local_fc = 0xf;
        local_108 = 0x100000000000058;
        FUN_140e87170(&local_108,DAT_1419fe158,0x80000000,&local_228,local_res8,local_res10);
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140e609c0(local_res8);
        if (&local_228 != puVar12) {
          local_2b8 = (undefined4)local_228;
          uStack_2b4 = local_228._4_4_;
          uStack_2b0 = uStack_220;
          uStack_2ac = uStack_21c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar12);
          }
          FUN_140041b80(puVar12,&local_2b8);
        }
        FUN_140e60910(1);
        local_288 = 0x21;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
        puVar12 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f71a8);
        local_ec = 0xf;
        local_f8 = 0x100000000000058;
        plVar20 = local_res8;
        FUN_140e87170(&local_f8,DAT_1419fe0e8,0x80000000,&local_218,local_res8,local_res10);
        uVar3 = (undefined4)((ulonglong)plVar20 >> 0x20);
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_148);
        local_2b8 = (undefined4)local_148;
        uStack_2b4 = local_148._4_4_;
        uStack_2b0 = uStack_140;
        uStack_2ac = uStack_13c;
        if ((1 << ((byte)local_278[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_2b8);
        local_198 = local_278;
        FUN_140e609c0(local_res8);
        pdVar8 = (double *)
                 FUN_140e634e0(local_res8,local_res10,&local_2d8,1,CONCAT44(uVar3,DAT_141a00c98),
                               &local_198);
        local_1fc = *(uint *)((longlong)pdVar8 + 0xc);
        local_200 = *(undefined4 *)(pdVar8 + 1);
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
          local_208 = *pdVar8;
        }
        else {
          FUN_1400419b0(&local_208,pdVar8);
        }
        local_res20 = 1;
        local_dc = 0;
        local_e8 = 0x4000000000000000;
        FUN_140046500(&local_208,&local_e8);
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_1dc = local_1fc;
        local_1e0 = local_200;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
          local_1e8 = local_208;
        }
        else {
          FUN_1400419b0(&local_1e8,&local_208);
        }
        local_res20 = 3;
        local_cc = 0;
        local_d8 = 0x3fe0000000000000;
        FUN_140042560(&local_1e8,&local_d8);
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
          dVar14 = *pdVar7;
        }
        else {
          dVar14 = (double)FUN_140e4b060(pdVar7);
        }
        dVar15 = local_1e8;
        if ((local_1dc & 0xffffff) != 0) {
          dVar15 = (double)FUN_140e4b060(&local_1e8);
        }
        fVar13 = (float)FUN_140e78f90((float)dVar15,(float)dVar14);
        uStack_15c = uStack_20c;
        uStack_160 = uStack_210;
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_168 = local_218;
        }
        else {
          FUN_1400419b0(&local_168,&local_218);
        }
        local_res20 = 7;
        FUN_140162c50(&local_168,(double)fVar13);
        if (&local_168 != puVar12) {
          local_2b8 = (undefined4)local_168;
          uStack_2b4 = local_168._4_4_;
          uStack_2b0 = uStack_160;
          uStack_2ac = uStack_15c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar12);
          }
          FUN_140041b80(puVar12,&local_2b8);
        }
        local_res20 = 3;
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_res20 = 1;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_res20 = 0;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        FUN_140e60910(1);
        local_288 = 0x22;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        puVar12 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f7198);
        pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
        local_bc = 0xf;
        local_c8 = 0x100000000000058;
        plVar20 = local_res8;
        FUN_140e87170(&local_c8,DAT_1419fe158,0x80000000,&local_228,local_res8,local_res10);
        uVar3 = (undefined4)((ulonglong)plVar20 >> 0x20);
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_148);
        local_2b8 = (undefined4)local_148;
        uStack_2b4 = local_148._4_4_;
        uStack_2b0 = uStack_140;
        uStack_2ac = uStack_13c;
        if ((1 << ((byte)local_278[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_2b8);
        local_198 = local_278;
        FUN_140e609c0(local_res8);
        uVar5 = CONCAT44(uVar3,DAT_141a00d58);
        pdVar8 = (double *)FUN_140e634e0(local_res8,local_res10,&local_2d8,1,uVar5,&local_198);
        uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_1ec = *(uint *)((longlong)pdVar8 + 0xc);
        local_1f0 = *(undefined4 *)(pdVar8 + 1);
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
          local_1f8 = *pdVar8;
        }
        else {
          FUN_1400419b0(&local_1f8,pdVar8);
        }
        local_res20 = 8;
        local_ac = 0;
        local_b8 = 0x4000000000000000;
        FUN_140046500(&local_1f8,&local_b8);
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        local_1cc = local_1ec;
        local_1d0 = local_1f0;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
          local_1d8 = local_1f8;
        }
        else {
          FUN_1400419b0(&local_1d8,&local_1f8);
        }
        local_res20 = 0x18;
        uStack_14c = 0;
        local_158 = 0x3fe0000000000000;
        FUN_140042560(&local_1d8,&local_158);
        if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
          dVar14 = *pdVar7;
        }
        else {
          dVar14 = (double)FUN_140e4b060(pdVar7);
        }
        dVar15 = local_1d8;
        if ((local_1cc & 0xffffff) != 0) {
          dVar15 = (double)FUN_140e4b060(&local_1d8);
        }
        fVar13 = (float)FUN_140e79010((float)dVar15,(float)dVar14);
        uStack_29c = uStack_21c;
        uStack_2a0 = uStack_220;
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
          local_2a8 = local_228;
        }
        else {
          FUN_1400419b0(&local_2a8,&local_228);
        }
        local_res20 = 0x38;
        FUN_140162c50(&local_2a8,(double)fVar13);
        if (&local_2a8 != puVar12) {
          local_2b8 = (undefined4)local_2a8;
          uStack_2b4 = local_2a8._4_4_;
          uStack_2b0 = uStack_2a0;
          uStack_2ac = uStack_29c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar12);
          }
          FUN_140041b80(puVar12,&local_2b8);
        }
        local_res20 = 0x18;
        if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        local_res20 = 8;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_res20 = 0;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140e60910(1);
        local_288 = 0x23;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        puVar9 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f7138);
        FUN_140e609c0(DAT_141a729d8);
        FUN_140e645a0(&local_2c8,gml_GlobalScript_round_n,0);
        if (&local_2c8 != puVar4) {
          local_2b8 = (undefined4)local_2c8;
          uStack_2b4 = local_2c8._4_4_;
          uStack_2b0 = uStack_2c0;
          uStack_2ac = uStack_2bc;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_2b8);
        }
        FUN_140e60910(1);
        if (puVar4 != local_278) {
          local_2b8 = *(undefined4 *)puVar4;
          uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_2b0 = *(undefined4 *)(puVar4 + 1);
          uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_278[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_278);
          }
          FUN_140041b80(local_278,&local_2b8);
        }
        if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_198 = local_278;
        if ((int)local_a8[0] < 1) {
          puVar12 = &DAT_1419df7b0;
LAB_1404453e8:
          local_2b8 = *(undefined4 *)puVar12;
          uStack_2b4 = *(undefined4 *)((longlong)puVar12 + 4);
          uStack_2b0 = *(undefined4 *)(puVar12 + 1);
          uStack_2ac = *(undefined4 *)((longlong)puVar12 + 0xc);
          if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_268);
          }
          FUN_140041b80(&local_268,&local_2b8);
        }
        else {
          puVar12 = (undefined8 *)*local_a0;
          if (puVar12 != &local_268) goto LAB_1404453e8;
        }
        local_190 = &local_268;
        if ((int)local_a8[0] < 2) {
          puVar12 = &DAT_1419df7b0;
LAB_140445439:
          local_2b8 = *(undefined4 *)puVar12;
          uStack_2b4 = *(undefined4 *)((longlong)puVar12 + 4);
          uStack_2b0 = *(undefined4 *)(puVar12 + 1);
          uStack_2ac = *(undefined4 *)((longlong)puVar12 + 0xc);
          if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          FUN_140041b80(&local_258,&local_2b8);
        }
        else {
          puVar12 = (undefined8 *)local_a0[1];
          if (puVar12 != &local_258) goto LAB_140445439;
        }
        local_188 = &local_258;
        FUN_140e609c0(local_res8);
        puVar10 = (undefined4 *)
                  FUN_140e634e0(local_res8,local_res10,&local_2d8,3,CONCAT44(uVar3,DAT_1419fd6d8),
                                &local_198);
        if (puVar10 != puVar9) {
          local_2b8 = *puVar10;
          uStack_2b4 = puVar10[1];
          uStack_2b0 = puVar10[2];
          uStack_2ac = puVar10[3];
          if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar9);
          }
          FUN_140041b80(puVar9,&local_2b8);
        }
        FUN_140e60910(1);
        local_288 = 0x24;
        puVar12 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f71e8);
        FUN_140e609c0(local_res8);
        if (&local_1a8 != puVar12) {
          local_2b8 = (undefined4)local_1a8;
          uStack_2b4 = local_1a8._4_4_;
          uStack_2b0 = uStack_1a0;
          uStack_2ac = uStack_19c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar12);
          }
          FUN_140041b80(puVar12,&local_2b8);
        }
        FUN_140e60910(1);
        cVar1 = FUN_140e643f0(local_98,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_98,&local_res8,&local_res10);
    if (local_88 != 0) {
      FUN_140e4cd60();
      local_88 = 0;
    }
    goto LAB_1404455b0;
  }
  local_288 = 0x18;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uStack_29c = DAT_141dd2d34;
  uStack_2a0 = DAT_141dd2d30;
  if ((1 << ((byte)DAT_141dd2d34 & 0x1f) & 0x46U) == 0) {
    local_2a8 = DAT_141dd2d28;
  }
  else {
    FUN_1400419b0(&local_2a8,&DAT_141dd2d28);
  }
  uVar3 = uStack_29c;
  local_2c8 = local_2a8;
  uStack_2c0 = uStack_2a0;
  uStack_2bc = uStack_29c;
  if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  FUN_140041b80(&local_268,&local_2c8);
  if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_190 = &local_268;
  if ((int)local_a8[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_14044464d:
    local_2c8 = *puVar4;
    uStack_2c0 = *(undefined4 *)(puVar4 + 1);
    uStack_2bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_2c8);
  }
  else {
    puVar4 = (undefined8 *)*local_a0;
    if (puVar4 != &local_258) goto LAB_14044464d;
  }
  local_188 = &local_258;
  if (((int)local_a8[0] < 2) || (puVar12 = (undefined8 *)local_a0[1], puVar12 != &local_248)) {
    local_2c8 = *puVar12;
    uStack_2c0 = *(undefined4 *)(puVar12 + 1);
    uStack_2bc = *(undefined4 *)((longlong)puVar12 + 0xc);
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2c8);
  }
  local_180 = &local_248;
  ppuVar19 = &local_190;
  puVar12 = (undefined8 *)FUN_140e64420(local_res8,local_res10,&local_1c8,3,ppuVar19);
  uVar3 = (undefined4)((ulonglong)ppuVar19 >> 0x20);
  if (puVar12 != &local_238) {
    local_2c8 = *puVar12;
    uStack_2c0 = *(undefined4 *)(puVar12 + 1);
    uStack_2bc = *(undefined4 *)((longlong)puVar12 + 0xc);
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2c8);
  }
  local_178[0] = &local_238;
  FUN_140e634e0(local_res8,local_res10,&local_1b8,1,CONCAT44(uVar3,DAT_141a03478),local_178);
  local_288 = 0x19;
LAB_1404455b0:
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_278,0x10,5,FUN_140041b30);
  if (0 < (int)local_a8[0]) {
    puVar12 = local_a0;
    do {
      puVar4 = (undefined8 *)*puVar12;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar12 = puVar12 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_a0);
  DAT_141dc7a50 = (undefined8 *)local_298;
  return local_res18;
}

