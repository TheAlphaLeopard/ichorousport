// gml_Object_oProjectile_Alarm_0 @ 0x140ca14c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oProjectile_Alarm_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  longlong **pplVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  byte bVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar20;
  uint **ppuVar17;
  undefined8 uVar18;
  longlong *plVar19;
  ulonglong uVar21;
  uint **ppuVar22;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  uint local_2b8;
  uint uStack_2b4;
  uint uStack_2b0;
  uint uStack_2ac;
  undefined8 local_2a8;
  char *local_2a0;
  undefined4 local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  uint local_268 [3];
  undefined4 local_25c;
  longlong *local_258;
  undefined4 local_24c;
  uint local_248 [3];
  undefined4 local_23c;
  undefined8 local_238;
  uint uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  uint local_218 [2];
  undefined8 *local_210;
  undefined8 local_208;
  uint uStack_200;
  uint uStack_1fc;
  uint local_1f8 [4];
  uint local_1e8 [4];
  undefined8 local_1d8 [2];
  uint local_1c8 [4];
  uint local_1b8 [3];
  byte local_1ac;
  uint local_1a8 [4];
  undefined1 local_198 [16];
  uint local_188 [4];
  undefined1 local_178 [16];
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  uint *local_158;
  uint *local_150;
  undefined8 *local_148;
  uint *local_140;
  uint *local_138;
  uint *local_130;
  undefined1 *local_128;
  uint *local_120;
  undefined1 *local_118;
  double local_108;
  uint local_fc;
  double local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 local_8c;
  ulonglong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  local_2a0 = "gml_Script_anon@382@gml_Object_oProjectile_Create_0";
  local_2a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2a8;
  local_298 = 0x1f;
  FUN_140041df0(local_218,param_4,1,param_5);
  uVar20 = 1;
  _eh_vector_constructor_iterator_(local_1f8,0x10,9,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  puVar8 = local_210;
  uStack_1fc = 0xffffff;
  local_208 = 0;
  local_23c = 0xffffff;
  local_248[0] = 0;
  local_248[1] = 0;
  uStack_21c = 0xffffff;
  local_228 = 0.0;
  uStack_22c = 0xffffff;
  local_238 = 0.0;
  local_25c = 0xffffff;
  local_268[0] = 0;
  local_268[1] = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  bVar11 = 0xff;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_2bc = 0;
  local_2c8 = 0;
  local_26c = 0;
  local_278 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_298 = 0x1f;
  puVar10 = &DAT_1419df7b0;
  if ((int)local_218[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_210;
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_298 = 0x1f;
    uStack_15c = 0xf;
    local_168 = (longlong *)0x1000000000000b8;
    if ((int)local_218[0] < 1) {
      pplVar7 = (longlong **)&DAT_1419df7b0;
    }
    else {
      pplVar7 = (longlong **)*puVar8;
      if (&local_168 == pplVar7) goto LAB_140ca16d4;
    }
    local_288 = 7.291122019556695e-304;
    uStack_280 = CONCAT44(0xf,uStack_160);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_288);
  }
LAB_140ca16d4:
  local_298 = 0x21;
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_298 = 0x23;
    uStack_e0 = CONCAT44(0xd,(undefined4)uStack_e0);
    local_e8 = 0;
    local_288 = 0.0;
    uStack_280 = uStack_e0;
    FUN_140041b80(&local_208,&local_288);
    local_298 = 0x25;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    uVar21 = 0;
    uVar9 = CONCAT44(uVar20,DAT_1419ef5d8);
    puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_2c8,0,uVar9,0);
    if (puVar4 != local_248) {
      local_288 = *(double *)puVar4;
      uStack_280 = *(undefined8 *)(puVar4 + 2);
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_248);
      }
      FUN_140041b80(local_248,&local_288);
    }
    local_298 = 0x26;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_24c = 6;
    uVar21 = uVar21 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_258 = param_1;
    FUN_140e87440(&local_258,DAT_1419fe0e8,0x80000000,&local_228,uVar9,uVar21);
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_24c = 6;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_258 = param_1;
    FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_238,uVar9,uVar21 & 0xffffffffffffff00);
    uVar20 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_288 = local_228;
    uStack_280 = CONCAT44(uStack_21c,uStack_220);
    if ((1 << ((byte)local_1f8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_288);
    local_288 = local_238;
    uStack_280 = CONCAT44(uStack_22c,uStack_230);
    local_158 = local_1f8;
    if ((1 << ((byte)local_1e8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_288);
    puVar8 = local_210;
    local_150 = local_1e8;
    if (((int)local_218[0] < 1) || (puVar10 = (undefined8 *)*local_210, puVar10 != local_1d8)) {
      local_288 = (double)*puVar10;
      uStack_280 = puVar10[1];
      if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_288);
    }
    local_148 = local_1d8;
    local_140 = local_248;
    local_288 = (double)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_280 = CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_288);
    local_138 = local_1b8;
    ppuVar17 = (uint **)CONCAT44(uVar20,DAT_141a56b80);
    FUN_140e634e0(param_1,param_2,&local_2c8,5,ppuVar17,&local_158);
    local_298 = 0x27;
    while( true ) {
      uVar20 = (undefined4)((ulonglong)ppuVar17 >> 0x20);
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_2c8 = 0;
      local_2c0 = 0;
      local_2bc = 5;
      local_158 = local_248;
      uVar18 = CONCAT44(uVar20,DAT_1419f58d8);
      uVar3 = FUN_140e634e0(param_1,param_2,&local_2c8,1,uVar18,&local_158);
      uVar20 = (undefined4)((ulonglong)uVar18 >> 0x20);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') break;
      local_298 = 0x29;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_278 = 0;
      local_270 = 0;
      local_26c = 5;
      local_150 = local_248;
      local_2b8 = _DAT_141dc7510;
      uStack_2b4 = uRam0000000141dc7514;
      uStack_2b0 = uRam0000000141dc7518;
      uStack_2ac = uRam0000000141dc751c;
      if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_2b8);
      local_148 = local_1d8;
      uVar3 = CONCAT44(uVar20,DAT_1419f5a78);
      puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_278,2,uVar3,&local_150);
      uVar20 = (undefined4)((ulonglong)uVar3 >> 0x20);
      if (puVar4 != local_268) {
        local_2b8 = *puVar4;
        uStack_2b4 = puVar4[1];
        uStack_2b0 = puVar4[2];
        uStack_2ac = puVar4[3];
        if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        FUN_140041b80(local_268,&local_2b8);
      }
      local_298 = 0x2a;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_2c8 = 0;
      local_2c0 = 0;
      local_2bc = 5;
      local_158 = local_248;
      local_2b8 = _DAT_141dc7510;
      uStack_2b4 = uRam0000000141dc7514;
      uStack_2b0 = uRam0000000141dc7518;
      uStack_2ac = uRam0000000141dc751c;
      if ((1 << ((byte)local_1e8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_2b8);
      local_150 = local_1e8;
      uVar3 = CONCAT44(uVar20,DAT_1419f5938);
      FUN_140e634e0(param_1,param_2,&local_2c8,2,uVar3,&local_158);
      uVar20 = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_298 = 0x2c;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_2c8 = 0;
      local_2c0 = 0;
      local_2bc = 5;
      puVar4 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
      if (puVar4 != local_1f8) {
        local_2b8 = *puVar4;
        uStack_2b4 = puVar4[1];
        uStack_2b0 = puVar4[2];
        uStack_2ac = puVar4[3];
        if ((1 << ((byte)local_1f8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1f8);
        }
        FUN_140041b80(local_1f8,&local_2b8);
      }
      local_2b8 = _DAT_1419ed360;
      uStack_2b4 = uRam00000001419ed364;
      uStack_2b0 = uRam00000001419ed368;
      uStack_2ac = uRam00000001419ed36c;
      local_158 = local_1f8;
      if ((1 << ((byte)local_1e8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_2b8);
      local_150 = local_1e8;
      ppuVar17 = (uint **)CONCAT44(uVar20,DAT_141a01af8);
      uVar3 = FUN_140e634e0(param_1,param_2,&local_2c8,2,ppuVar17,&local_158);
      cVar1 = FUN_140e491e0(uVar3);
      uVar20 = (undefined4)((ulonglong)ppuVar17 >> 0x20);
      if (cVar1 == '\0') {
        local_298 = 0x2c;
      }
      else {
        local_298 = 0x2d;
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2c8 = 0;
        local_2c0 = 0;
        local_2bc = 5;
        if (puVar4 != local_1f8) {
          local_2b8 = *puVar4;
          uStack_2b4 = puVar4[1];
          uStack_2b0 = puVar4[2];
          uStack_2ac = puVar4[3];
          if ((1 << ((byte)local_1f8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1f8);
          }
          FUN_140041b80(local_1f8,&local_2b8);
        }
        local_150 = local_268;
        ppuVar17 = (uint **)CONCAT44(uVar20,DAT_141a573f0);
        local_158 = local_1f8;
        uVar3 = FUN_140e634e0(param_1,param_2,&local_2c8,2,ppuVar17,&local_158);
        local_24c = 0;
        local_258 = (longlong *)&DAT_bff0000000000000;
        iVar2 = FUN_140e851f0(uVar3,&local_258,DAT_141955260,0);
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        uVar20 = (undefined4)((ulonglong)ppuVar17 >> 0x20);
        if (iVar2 == 0) {
          local_298 = 0x2e;
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          local_2c8 = 0;
          local_2c0 = 0;
          local_2bc = 5;
          local_158 = local_268;
          ppuVar22 = &local_158;
          ppuVar17 = (uint **)CONCAT44(uVar20,DAT_141a02ef8);
          uVar3 = FUN_140e634e0(param_1,param_2,&local_2c8,1,ppuVar17,ppuVar22);
          cVar1 = FUN_140e491e0(uVar3);
          if (cVar1 == '\0') {
            local_298 = 0x2e;
          }
          else {
            local_298 = 0x2f;
            if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            local_2c8 = 0;
            local_2c0 = 0;
            local_2bc = 5;
            FUN_140e87440(local_268,DAT_141a56cd0,0x80000000,&local_c8,
                          (ulonglong)ppuVar17 & 0xffffffffffffff00,
                          (ulonglong)ppuVar22 & 0xffffffffffffff00);
            local_2b8 = (uint)DAT_1419df7b0;
            uStack_2b4 = DAT_1419df7b0._4_4_;
            uStack_2b0 = DAT_1419df7b8;
            uStack_2ac = DAT_1419df7bc;
            if ((1 << ((byte)local_1f8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1f8);
            }
            FUN_140041b80(local_1f8,&local_2b8);
            ppuVar17 = &local_158;
            local_158 = local_1f8;
            uVar3 = gml_Script_OwnerY(param_1,param_2,&local_2c8,1,ppuVar17);
            iVar2 = FUN_140e851f0(&local_c8,uVar3,DAT_141955260,0);
            uVar20 = (undefined4)((ulonglong)ppuVar17 >> 0x20);
            if (iVar2 == 0) {
              local_298 = 0x2f;
            }
            else {
              local_298 = 0x31;
              if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2c8);
              }
              local_2c8 = 0;
              local_2c0 = 0;
              local_2bc = 5;
              if (puVar4 != local_1f8) {
                local_2b8 = *puVar4;
                uStack_2b4 = puVar4[1];
                uStack_2b0 = puVar4[2];
                uStack_2ac = puVar4[3];
                if ((1 << ((byte)local_1f8[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1f8);
                }
                FUN_140041b80(local_1f8,&local_2b8);
              }
              local_150 = local_268;
              ppuVar17 = &local_158;
              uVar9 = CONCAT44(uVar20,DAT_141a57350);
              local_158 = local_1f8;
              FUN_140e634e0(param_1,param_2,&local_2c8,2,uVar9,ppuVar17);
              local_298 = 0x33;
              local_ac = 6;
              uVar21 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
              uVar9 = uVar9 & 0xffffffffffffff00;
              local_b8 = param_1;
              FUN_140e87440(&local_b8,DAT_1419fe0e8,0x80000000,&local_228,uVar9,uVar21);
              if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_b8);
              }
              local_9c = 6;
              local_a8 = param_1;
              FUN_140e87440(&local_a8,DAT_1419fe158,0x80000000,&local_238,uVar9 & 0xffffffffffffff00
                            ,uVar21 & 0xffffffffffffff00);
              if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_a8);
              }
              (**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
              FUN_140e87170(local_268,DAT_1419fe0e8,0x80000000,&local_f8,param_1,param_2);
              plVar19 = param_1;
              uVar9 = param_2;
              FUN_140e87170(local_268,DAT_1419fe158,0x80000000,&local_108,param_1,param_2);
              dVar13 = local_108;
              if ((local_fc & 0xffffff) != 0) {
                dVar13 = (double)FUN_140e4b060(&local_108);
              }
              dVar14 = local_f8;
              if ((local_ec & 0xffffff) != 0) {
                dVar14 = (double)FUN_140e4b060(&local_f8);
              }
              dVar15 = local_238;
              if ((uStack_22c & 0xffffff) != 0) {
                dVar15 = (double)FUN_140e4b060(&local_238);
              }
              dVar16 = local_228;
              if ((uStack_21c & 0xffffff) != 0) {
                dVar16 = (double)FUN_140e4b060(&local_228);
              }
              fVar12 = (float)FUN_140e793d0((float)dVar16,(float)dVar15,(float)dVar14,(float)dVar13)
              ;
              if ((1 << (bVar11 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_d8);
              }
              bVar11 = 0;
              local_cc = 0;
              local_d8 = (double)fVar12;
              local_298 = 0x35;
              if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2c8);
              }
              local_2c8 = 0;
              local_2c0 = 0;
              local_2bc = 5;
              if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_278);
              }
              local_278 = 0;
              local_270 = 0;
              local_26c = 5;
              puVar4 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
              puVar5 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7d8);
              local_8c = 6;
              uVar9 = uVar9 & 0xffffffffffffff00;
              uVar21 = (ulonglong)plVar19 & 0xffffffffffffff00;
              local_98 = param_1;
              FUN_140e87440(&local_98,DAT_1419fe0e8,0x80000000,&local_228,uVar21,uVar9);
              if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_98);
              }
              uStack_15c = 6;
              uVar21 = uVar21 & 0xffffffffffffff00;
              local_168 = param_1;
              FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_238,uVar21,
                            uVar9 & 0xffffffffffffff00);
              uVar20 = (undefined4)(uVar21 >> 0x20);
              if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_168);
              }
              local_2b8 = DAT_141a575a0 & 0xffffff;
              uStack_2b4 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
              if (uStack_2b4 == 0xf) {
                uStack_2b4 = 0x4000004;
              }
              else {
                uStack_2b4 = uStack_2b4 | 0x1000000;
              }
              uStack_7c = 0xf;
              local_88 = CONCAT44(uStack_2b4,DAT_141a575a0) & 0xffffffff00ffffff;
              uStack_2b0 = uStack_80;
              uStack_2ac = 0xf;
              if ((1 << ((byte)local_1f8[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1f8);
              }
              FUN_140041b80(local_1f8,&local_2b8);
              local_2b8 = (uint)local_228;
              uStack_2b4 = local_228._4_4_;
              uStack_2b0 = uStack_220;
              uStack_2ac = uStack_21c;
              local_158 = local_1f8;
              if ((1 << ((byte)local_1e8[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1e8);
              }
              FUN_140041b80(local_1e8,&local_2b8);
              local_150 = local_1e8;
              local_2b8 = (uint)local_238;
              uStack_2b4 = local_238._4_4_;
              uStack_2b0 = uStack_230;
              uStack_2ac = uStack_22c;
              if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1d8);
              }
              FUN_140041b80(local_1d8,&local_2b8);
              local_148 = local_1d8;
              if (puVar4 != local_1c8) {
                local_2b8 = *puVar4;
                uStack_2b4 = puVar4[1];
                uStack_2b0 = puVar4[2];
                uStack_2ac = puVar4[3];
                if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1c8);
                }
                FUN_140041b80(local_1c8,&local_2b8);
              }
              local_140 = local_1c8;
              local_138 = local_268;
              if (puVar5 != local_1a8) {
                local_2b8 = *puVar5;
                uStack_2b4 = puVar5[1];
                uStack_2b0 = puVar5[2];
                uStack_2ac = puVar5[3];
                if ((1 << ((byte)local_1a8[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1a8);
                }
                FUN_140041b80(local_1a8,&local_2b8);
              }
              local_130 = local_1a8;
              FUN_140e645a0(&local_e8,gml_Script_anon_1891_gml_Object_oProjectile_Create_0,param_1);
              local_2b8 = (uint)local_e8;
              uStack_2b4 = local_e8._4_4_;
              uStack_2b0 = (undefined4)uStack_e0;
              uStack_2ac = uStack_e0._4_4_;
              if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_198);
              }
              FUN_140041b80(local_198,&local_2b8);
              if ((1 << ((byte)((ulonglong)uStack_e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_e8);
              }
              local_128 = local_198;
              puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_278,7,
                                             CONCAT44(uVar20,DAT_1419fd6d8),&local_158);
              if (puVar4 != local_188) {
                local_2b8 = *puVar4;
                uStack_2b4 = puVar4[1];
                uStack_2b0 = puVar4[2];
                uStack_2ac = puVar4[3];
                if ((1 << ((byte)local_188[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_188);
                }
                FUN_140041b80(local_188,&local_2b8);
              }
              local_120 = local_188;
              local_2b8 = (uint)DAT_1419df7b0;
              uStack_2b4 = DAT_1419df7b0._4_4_;
              uStack_2b0 = DAT_1419df7b8;
              uStack_2ac = DAT_1419df7bc;
              if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_178);
              }
              FUN_140041b80(local_178,&local_2b8);
              local_118 = local_178;
              ppuVar17 = &local_120;
              gml_Script_draw_line_sprite(param_1,param_2,&local_2c8,2,ppuVar17);
              local_298 = 0x56;
              local_288 = 1.0;
              uStack_280 = CONCAT44(0xd,(uint)uStack_280);
              local_2b8 = 0;
              uStack_2b4 = 0x3ff00000;
              uStack_2b0 = (uint)uStack_280;
              uStack_2ac = 0xd;
              if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_208);
              }
              FUN_140041b80(&local_208,&local_2b8);
              local_298 = 0x57;
              puVar4 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f59c8);
              puVar5 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7d8);
              FUN_140e609c0(param_1);
              if (puVar4 != puVar5) {
                local_2b8 = *puVar4;
                uStack_2b4 = puVar4[1];
                uStack_2b0 = puVar4[2];
                uStack_2ac = puVar4[3];
                if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar5);
                }
                FUN_140041b80(puVar5,&local_2b8);
              }
              FUN_140e60910(1);
            }
          }
        }
        else {
          local_298 = 0x2d;
          (**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
        }
      }
    }
    local_298 = 0x5b;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_158 = local_248;
    FUN_140e634e0(param_1,param_2,&local_2c8,1,CONCAT44(uVar20,DAT_1419f6038),&local_158);
    local_298 = 0x5d;
    if (&local_208 != param_3) {
      local_2b8 = (uint)local_208;
      uStack_2b4 = local_208._4_4_;
      uStack_2b0 = uStack_200;
      uStack_2ac = uStack_1fc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_2b8);
    }
  }
  else {
    local_298 = 0x21;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
    puVar8 = local_210;
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << (bVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_268);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  _eh_vector_destructor_iterator_(local_1f8,0x10,9,FUN_140041b30);
  if (0 < (int)local_218[0]) {
    uVar9 = (ulonglong)local_218[0];
    do {
      puVar10 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 1) = 0;
      *(undefined4 *)((longlong)puVar10 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_210);
  DAT_141dc7a50 = (undefined8 *)local_2a8;
  return param_3;
}

