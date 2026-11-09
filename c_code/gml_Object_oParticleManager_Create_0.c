// gml_Object_oParticleManager_Create_0 @ 0x140bbd150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oParticleManager_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint *puVar10;
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
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  uint local_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  char *local_2c0;
  undefined4 local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  uint local_298 [4];
  uint local_288 [4];
  uint local_278 [4];
  uint local_268 [4];
  uint local_258 [3];
  byte local_24c;
  uint local_248 [4];
  undefined1 local_238 [16];
  uint local_228 [3];
  undefined4 local_21c;
  longlong *local_218;
  undefined4 local_20c;
  undefined8 local_208;
  uint uStack_200;
  uint uStack_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  uint *local_1e8;
  uint *local_1e0;
  uint *local_1d8;
  uint *local_1d0;
  uint *local_1c8;
  uint *local_1c0;
  undefined1 *local_1b8;
  uint local_1b0 [3];
  undefined4 local_1a4;
  uint local_1a0 [3];
  undefined4 local_194;
  undefined8 local_188;
  uint uStack_180;
  uint uStack_17c;
  uint local_178 [2];
  undefined8 *local_170;
  uint local_168 [3];
  undefined4 local_15c;
  uint local_158 [3];
  undefined4 local_14c;
  uint local_148 [3];
  uint uStack_13c;
  double local_138;
  uint local_12c;
  double local_128;
  uint local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 local_cc;
  longlong *local_c8;
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
  
  local_2c0 = "gml_Script_anon@142@gml_Object_oParSidearm_Create_0";
  local_2c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2c8;
  local_2b8 = 0xc;
  FUN_140041df0(local_178,param_4,1,param_5);
  uVar20 = 1;
  _eh_vector_constructor_iterator_(local_298,0x10,7,FUN_1400424d0,FUN_140041b30);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_1a4 = 0xffffff;
  local_1b0[0] = 0;
  local_1b0[1] = 0;
  uStack_1ec = 0xffffff;
  local_1f8 = 0.0;
  uStack_1fc = 0xffffff;
  local_208 = 0.0;
  local_21c = 0xffffff;
  local_228[0] = 0;
  local_228[1] = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  bVar11 = 0xff;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_194 = 0xffffff;
  local_1a0[0] = 0;
  local_1a0[1] = 0;
  local_14c = 0xffffff;
  local_158[0] = 0;
  local_158[1] = 0;
  local_15c = 0xffffff;
  local_168[0] = 0;
  local_168[1] = 0;
  puVar6 = (uint *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f6b18);
  local_2ec = 0;
  local_2f8 = 0;
  local_2cc = 0;
  local_2d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2b8 = 0xc;
  puVar10 = (uint *)&DAT_1419df7b0;
  if ((int)local_178[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_170;
  }
  iVar4 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_2b8 = 0xc;
    uStack_13c = 0xf;
    local_148[0] = 0xb8;
    local_148[1] = 0x1000000;
    if ((int)local_178[0] < 1) {
      puVar7 = (uint *)&DAT_1419df7b0;
    }
    else {
      puVar7 = (uint *)*local_170;
      if (local_148 == puVar7) goto LAB_140bbd3ce;
    }
    local_2a8 = 7.291122019556695e-304;
    uStack_2a0 = CONCAT44(0xf,local_148[2]);
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_2a8);
  }
LAB_140bbd3ce:
  local_2b8 = 0xe;
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 == '\0') {
    local_2b8 = 0x10;
    uStack_110 = CONCAT44(0xd,(uint)uStack_110);
    local_118 = 0;
    local_2a8 = 0.0;
    uStack_2a0 = uStack_110;
    FUN_140041b80(&local_188,&local_2a8);
    local_2b8 = 0x12;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    uVar21 = 0;
    uVar9 = CONCAT44(uVar20,DAT_1419ef5d8);
    puVar7 = (uint *)FUN_140e634e0(param_1,param_2,&local_2f8,0,uVar9,0);
    if (puVar7 != local_1b0) {
      local_2a8 = *(double *)puVar7;
      uStack_2a0 = *(undefined8 *)(puVar7 + 2);
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b0);
      }
      FUN_140041b80(local_1b0,&local_2a8);
    }
    local_2b8 = 0x13;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_20c = 6;
    uVar21 = uVar21 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_218 = param_1;
    FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_1f8,uVar9,uVar21);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_20c = 6;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_218 = param_1;
    FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_208,uVar9,uVar21 & 0xffffffffffffff00);
    uVar20 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_2a8 = local_1f8;
    uStack_2a0 = CONCAT44(uStack_1ec,uStack_1f0);
    if ((1 << ((byte)local_298[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_2a8);
    local_1e8 = local_298;
    local_2a8 = local_208;
    uStack_2a0 = CONCAT44(uStack_1fc,uStack_200);
    if ((1 << ((byte)local_288[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    FUN_140041b80(local_288,&local_2a8);
    local_1e0 = local_288;
    if (((int)local_178[0] < 1) || (puVar10 = (uint *)*local_170, puVar10 != local_278)) {
      local_2a8 = *(double *)puVar10;
      uStack_2a0 = *(undefined8 *)(puVar10 + 2);
      if ((1 << ((byte)local_278[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_278);
      }
      FUN_140041b80(local_278,&local_2a8);
    }
    local_1d8 = local_278;
    local_1d0 = local_1b0;
    local_2a8 = (double)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_2a0 = CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_258);
    }
    FUN_140041b80(local_258,&local_2a8);
    local_1c8 = local_258;
    ppuVar17 = (uint **)CONCAT44(uVar20,DAT_141a56b80);
    FUN_140e634e0(param_1,param_2,&local_2f8,5,ppuVar17,&local_1e8);
    local_2b8 = 0x14;
    while( true ) {
      uVar20 = (undefined4)((ulonglong)ppuVar17 >> 0x20);
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      local_1e8 = local_1b0;
      uVar18 = CONCAT44(uVar20,DAT_1419f58d8);
      uVar5 = FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar18,&local_1e8);
      uVar20 = (undefined4)((ulonglong)uVar18 >> 0x20);
      cVar3 = FUN_140e491e0(uVar5);
      if (cVar3 != '\0') break;
      local_2b8 = 0x16;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2d8 = 0;
      local_2d0 = 0;
      local_2cc = 5;
      local_1e0 = local_1b0;
      local_2e8 = _DAT_141dc73a0;
      uStack_2e4 = uRam0000000141dc73a4;
      uStack_2e0 = uRam0000000141dc73a8;
      uStack_2dc = uRam0000000141dc73ac;
      if ((1 << ((byte)local_278[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_278);
      }
      FUN_140041b80(local_278,&local_2e8);
      local_1d8 = local_278;
      uVar5 = CONCAT44(uVar20,DAT_1419f5a78);
      puVar10 = (uint *)FUN_140e634e0(param_1,param_2,&local_2d8,2,uVar5,&local_1e0);
      uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (puVar10 != local_228) {
        local_2e8 = *puVar10;
        uStack_2e4 = puVar10[1];
        uStack_2e0 = puVar10[2];
        uStack_2dc = puVar10[3];
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_228);
        }
        FUN_140041b80(local_228,&local_2e8);
      }
      local_2b8 = 0x17;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      local_1e8 = local_1b0;
      local_2e8 = _DAT_141dc73a0;
      uStack_2e4 = uRam0000000141dc73a4;
      uStack_2e0 = uRam0000000141dc73a8;
      uStack_2dc = uRam0000000141dc73ac;
      if ((1 << ((byte)local_288[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_288);
      }
      FUN_140041b80(local_288,&local_2e8);
      local_1e0 = local_288;
      uVar5 = CONCAT44(uVar20,DAT_1419f5938);
      FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar5,&local_1e8);
      uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_2b8 = 0x19;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      ppuVar17 = (uint **)CONCAT44(uVar20,DAT_141a02ef8);
      local_1e8 = local_228;
      uVar5 = FUN_140e634e0(param_1,param_2,&local_2f8,1,ppuVar17,&local_1e8);
      cVar3 = FUN_140e491e0(uVar5);
      uVar20 = (undefined4)((ulonglong)ppuVar17 >> 0x20);
      if (cVar3 == '\0') {
        local_2b8 = 0x19;
      }
      else {
        local_2b8 = 0x1a;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        puVar10 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
        if (puVar10 != local_298) {
          local_2e8 = *puVar10;
          uStack_2e4 = puVar10[1];
          uStack_2e0 = puVar10[2];
          uStack_2dc = puVar10[3];
          if ((1 << ((byte)local_298[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_298);
          }
          FUN_140041b80(local_298,&local_2e8);
        }
        local_1e8 = local_298;
        local_2e8 = _DAT_1419ec880;
        uStack_2e4 = uRam00000001419ec884;
        uStack_2e0 = uRam00000001419ec888;
        uStack_2dc = uRam00000001419ec88c;
        if ((1 << ((byte)local_288[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_288);
        }
        FUN_140041b80(local_288,&local_2e8);
        local_1e0 = local_288;
        ppuVar17 = (uint **)CONCAT44(uVar20,DAT_141a01af8);
        uVar5 = FUN_140e634e0(param_1,param_2,&local_2f8,2,ppuVar17,&local_1e8);
        cVar3 = FUN_140e491e0(uVar5);
        uVar20 = (undefined4)((ulonglong)ppuVar17 >> 0x20);
        if (cVar3 == '\0') {
          local_2b8 = 0x1a;
        }
        else {
          local_2b8 = 0x1b;
          if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2f8);
          }
          local_2f8 = 0;
          local_2f0 = 0;
          local_2ec = 5;
          if (puVar10 != local_298) {
            local_2e8 = *puVar10;
            uStack_2e4 = puVar10[1];
            uStack_2e0 = puVar10[2];
            uStack_2dc = puVar10[3];
            if ((1 << ((byte)local_298[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_298);
            }
            FUN_140041b80(local_298,&local_2e8);
          }
          local_1e8 = local_298;
          ppuVar22 = &local_1e8;
          ppuVar17 = (uint **)CONCAT44(uVar20,DAT_141a573f0);
          local_1e0 = local_228;
          uVar5 = FUN_140e634e0(param_1,param_2,&local_2f8,2,ppuVar17,ppuVar22);
          local_20c = 0;
          local_218 = (longlong *)&DAT_bff0000000000000;
          iVar4 = FUN_140e851f0(uVar5,&local_218,DAT_141955260,0);
          if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          if (iVar4 == 0) {
            local_2b8 = 0x1c;
            if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2f8);
            }
            local_2f8 = 0;
            local_2f0 = 0;
            local_2ec = 5;
            FUN_140e87440(local_228,DAT_141a56cd0,0x80000000,&local_f8,
                          (ulonglong)ppuVar17 & 0xffffffffffffff00,
                          (ulonglong)ppuVar22 & 0xffffffffffffff00);
            local_2e8 = _DAT_1419ec890;
            uStack_2e4 = uRam00000001419ec894;
            uStack_2e0 = uRam00000001419ec898;
            uStack_2dc = uRam00000001419ec89c;
            if ((1 << ((byte)local_298[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_298);
            }
            FUN_140041b80(local_298,&local_2e8);
            local_1e8 = local_298;
            ppuVar17 = &local_1e8;
            uVar5 = gml_Script_OwnerY(param_1,param_2,&local_2f8,1,ppuVar17);
            iVar4 = FUN_140e851f0(&local_f8,uVar5,DAT_141955260,0);
            uVar20 = (undefined4)((ulonglong)ppuVar17 >> 0x20);
            if (iVar4 == 0) {
              local_2b8 = 0x1c;
            }
            else {
              local_2b8 = 0x1e;
              if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2f8);
              }
              local_2f8 = 0;
              local_2f0 = 0;
              local_2ec = 5;
              if (puVar10 != local_298) {
                local_2e8 = *puVar10;
                uStack_2e4 = puVar10[1];
                uStack_2e0 = puVar10[2];
                uStack_2dc = puVar10[3];
                if ((1 << ((byte)local_298[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_298);
                }
                FUN_140041b80(local_298,&local_2e8);
              }
              local_1e8 = local_298;
              ppuVar17 = &local_1e8;
              uVar9 = CONCAT44(uVar20,DAT_141a57350);
              local_1e0 = local_228;
              FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar9,ppuVar17);
              local_2b8 = 0x20;
              local_dc = 6;
              uVar21 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
              uVar9 = uVar9 & 0xffffffffffffff00;
              local_e8 = param_1;
              FUN_140e87440(&local_e8,DAT_1419fe0e8,0x80000000,&local_1f8,uVar9,uVar21);
              if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_e8);
              }
              local_cc = 6;
              local_d8 = param_1;
              FUN_140e87440(&local_d8,DAT_1419fe158,0x80000000,&local_208,uVar9 & 0xffffffffffffff00
                            ,uVar21 & 0xffffffffffffff00);
              if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_d8);
              }
              (**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
              FUN_140e87170(local_228,DAT_1419fe0e8,0x80000000,&local_128,param_1,param_2);
              plVar19 = param_1;
              uVar9 = param_2;
              FUN_140e87170(local_228,DAT_1419fe158,0x80000000,&local_138,param_1,param_2);
              dVar13 = local_138;
              if ((local_12c & 0xffffff) != 0) {
                dVar13 = (double)FUN_140e4b060(&local_138);
              }
              dVar14 = local_128;
              if ((local_11c & 0xffffff) != 0) {
                dVar14 = (double)FUN_140e4b060(&local_128);
              }
              dVar15 = local_208;
              if ((uStack_1fc & 0xffffff) != 0) {
                dVar15 = (double)FUN_140e4b060(&local_208);
              }
              dVar16 = local_1f8;
              if ((uStack_1ec & 0xffffff) != 0) {
                dVar16 = (double)FUN_140e4b060(&local_1f8);
              }
              fVar12 = (float)FUN_140e793d0((float)dVar16,(float)dVar15,(float)dVar14,(float)dVar13)
              ;
              if ((1 << (bVar11 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_108);
              }
              bVar11 = 0;
              local_fc = 0;
              local_108 = (double)fVar12;
              local_2b8 = 0x22;
              if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2f8);
              }
              local_2f8 = 0;
              local_2f0 = 0;
              local_2ec = 5;
              if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2d8);
              }
              local_2d8 = 0;
              local_2d0 = 0;
              local_2cc = 5;
              puVar10 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7d8);
              local_bc = 6;
              uVar9 = uVar9 & 0xffffffffffffff00;
              uVar21 = (ulonglong)plVar19 & 0xffffffffffffff00;
              local_c8 = param_1;
              FUN_140e87440(&local_c8,DAT_1419fe0e8,0x80000000,&local_1f8,uVar21,uVar9);
              if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_c8);
              }
              local_ac = 6;
              local_b8 = param_1;
              FUN_140e87440(&local_b8,DAT_1419fe158,0x80000000,&local_208,
                            uVar21 & 0xffffffffffffff00,uVar9 & 0xffffffffffffff00);
              if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_b8);
              }
              local_2e8 = DAT_141a575a0 & 0xffffff;
              uStack_2e4 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
              if (uStack_2e4 == 0xf) {
                uStack_2e4 = 0x4000004;
              }
              else {
                uStack_2e4 = uStack_2e4 | 0x1000000;
              }
              uStack_7c = 0xf;
              local_88 = CONCAT44(uStack_2e4,DAT_141a575a0) & 0xffffffff00ffffff;
              uStack_2e0 = uStack_80;
              uStack_2dc = 0xf;
              if ((1 << ((byte)local_298[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_298);
              }
              FUN_140041b80(local_298,&local_2e8);
              local_1e8 = local_298;
              local_2e8 = (uint)local_1f8;
              uStack_2e4 = local_1f8._4_4_;
              uStack_2e0 = uStack_1f0;
              uStack_2dc = uStack_1ec;
              if ((1 << ((byte)local_288[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_288);
              }
              FUN_140041b80(local_288,&local_2e8);
              local_1e0 = local_288;
              local_2e8 = (uint)local_208;
              uStack_2e4 = local_208._4_4_;
              uStack_2e0 = uStack_200;
              uStack_2dc = uStack_1fc;
              if ((1 << ((byte)local_278[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_278);
              }
              FUN_140041b80(local_278,&local_2e8);
              local_1d8 = local_278;
              uVar20 = 0;
              puVar7 = (uint *)gml_Script_deal_damage(param_1,param_2,&local_2d8,0,0);
              if (puVar7 != local_268) {
                local_2e8 = *puVar7;
                uStack_2e4 = puVar7[1];
                uStack_2e0 = puVar7[2];
                uStack_2dc = puVar7[3];
                if ((1 << ((byte)local_268[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_268);
                }
                FUN_140041b80(local_268,&local_2e8);
              }
              local_1d0 = local_268;
              local_1c8 = local_228;
              if (puVar10 != local_248) {
                local_2e8 = *puVar10;
                uStack_2e4 = puVar10[1];
                uStack_2e0 = puVar10[2];
                uStack_2dc = puVar10[3];
                if ((1 << ((byte)local_248[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_248);
                }
                FUN_140041b80(local_248,&local_2e8);
              }
              local_1c0 = local_248;
              FUN_140e645a0(&local_118,gml_Script_anon_142_gml_Object_oParSidearm_Create_0,param_1);
              local_2e8 = (uint)local_118;
              uStack_2e4 = local_118._4_4_;
              uStack_2e0 = (uint)uStack_110;
              uStack_2dc = uStack_110._4_4_;
              if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_238);
              }
              FUN_140041b80(local_238,&local_2e8);
              if ((1 << ((byte)((ulonglong)uStack_110 >> 0x20) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_118);
              }
              local_1b8 = local_238;
              ppuVar17 = &local_1e8;
              uVar9 = CONCAT44(uVar20,DAT_1419fd6d8);
              puVar10 = (uint *)FUN_140e634e0(param_1,param_2,&local_2f8,7,uVar9,ppuVar17);
              if (puVar10 != local_1a0) {
                local_2e8 = *puVar10;
                uStack_2e4 = puVar10[1];
                uStack_2e0 = puVar10[2];
                uStack_2dc = puVar10[3];
                if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1a0);
                }
                FUN_140041b80(local_1a0,&local_2e8);
              }
              local_2b8 = 0x3d;
              puVar10 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57520);
              if (puVar10 != local_158) {
                local_2e8 = *puVar10;
                uStack_2e4 = puVar10[1];
                uStack_2e0 = puVar10[2];
                uStack_2dc = puVar10[3];
                if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_158);
                }
                FUN_140041b80(local_158,&local_2e8);
              }
              FUN_140e87930(local_1a0,DAT_141a57520,0x80000000,local_158);
              local_2b8 = 0x3e;
              if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2f8);
              }
              local_2f8 = 0;
              local_2f0 = 0;
              local_2ec = 5;
              puVar10 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6b58);
              puVar7 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6ab8);
              local_9c = 6;
              uVar21 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
              uVar9 = uVar9 & 0xffffffffffffff00;
              local_a8 = param_1;
              FUN_140e87440(&local_a8,DAT_1419fe0e8,0x80000000,&local_1f8,uVar9,uVar21);
              if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_a8);
              }
              local_8c = 6;
              uVar9 = uVar9 & 0xffffffffffffff00;
              local_98 = param_1;
              FUN_140e87440(&local_98,DAT_1419fe158,0x80000000,&local_208,uVar9,
                            uVar21 & 0xffffffffffffff00);
              uVar20 = (undefined4)(uVar9 >> 0x20);
              if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_98);
              }
              if (puVar10 != local_298) {
                local_2e8 = *puVar10;
                uStack_2e4 = puVar10[1];
                uStack_2e0 = puVar10[2];
                uStack_2dc = puVar10[3];
                if ((1 << ((byte)local_298[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_298);
                }
                FUN_140041b80(local_298,&local_2e8);
              }
              local_1e8 = local_298;
              if (puVar7 != local_288) {
                local_2e8 = *puVar7;
                uStack_2e4 = puVar7[1];
                uStack_2e0 = puVar7[2];
                uStack_2dc = puVar7[3];
                if ((1 << ((byte)local_288[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_288);
                }
                FUN_140041b80(local_288,&local_2e8);
              }
              local_1e0 = local_288;
              local_2e8 = (uint)local_1f8;
              uStack_2e4 = local_1f8._4_4_;
              uStack_2e0 = uStack_1f0;
              uStack_2dc = uStack_1ec;
              if ((1 << ((byte)local_278[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_278);
              }
              FUN_140041b80(local_278,&local_2e8);
              local_1d8 = local_278;
              local_2e8 = (uint)local_208;
              uStack_2e4 = local_208._4_4_;
              uStack_2e0 = uStack_200;
              uStack_2dc = uStack_1fc;
              if ((1 << ((byte)local_268[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_268);
              }
              FUN_140041b80(local_268,&local_2e8);
              local_1d0 = local_268;
              uVar5 = CONCAT44(uVar20,DAT_1419fd548);
              puVar10 = (uint *)FUN_140e634e0(param_1,param_2,&local_2f8,4,uVar5,&local_1e8);
              uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
              if (puVar10 != local_168) {
                local_2e8 = *puVar10;
                uStack_2e4 = puVar10[1];
                uStack_2e0 = puVar10[2];
                uStack_2dc = puVar10[3];
                if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_168);
                }
                FUN_140041b80(local_168,&local_2e8);
              }
              FUN_140e87930(local_1a0,DAT_1419ff828,0x80000000,local_168);
              local_2b8 = 0x3f;
              if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2f8);
              }
              local_2f8 = 0;
              local_2f0 = 0;
              local_2ec = 5;
              if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2d8);
              }
              local_2d8 = 0;
              local_2d0 = 0;
              local_2cc = 5;
              puVar10 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03598);
              FUN_140e609c0(DAT_141a729d8);
              FUN_140e645a0(local_148,gml_Object_oParSidearm_Alarm_1,0);
              if (local_148 != puVar6) {
                local_2e8 = local_148[0];
                uStack_2e4 = local_148[1];
                uStack_2e0 = local_148[2];
                uStack_2dc = uStack_13c;
                if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar6);
                }
                FUN_140041b80(puVar6,&local_2e8);
              }
              FUN_140e60910(1);
              if (puVar6 != local_298) {
                local_2e8 = *puVar6;
                uStack_2e4 = puVar6[1];
                uStack_2e0 = puVar6[2];
                uStack_2dc = puVar6[3];
                if ((1 << ((byte)local_298[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_298);
                }
                FUN_140041b80(local_298,&local_2e8);
              }
              if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_148);
              }
              local_1e8 = local_298;
              if (puVar10 != local_288) {
                local_2e8 = *puVar10;
                uStack_2e4 = puVar10[1];
                uStack_2e0 = puVar10[2];
                uStack_2dc = puVar10[3];
                if ((1 << ((byte)local_288[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_288);
                }
                FUN_140041b80(local_288,&local_2e8);
              }
              local_1e0 = local_288;
              local_1d8 = local_1a0;
              puVar10 = (uint *)FUN_140e634e0(param_1,param_2,&local_2d8,2,
                                              CONCAT44(uVar20,DAT_1419fd6d8),&local_1e8);
              if (puVar10 != local_268) {
                local_2e8 = *puVar10;
                uStack_2e4 = puVar10[1];
                uStack_2e0 = puVar10[2];
                uStack_2dc = puVar10[3];
                if ((1 << ((byte)local_268[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_268);
                }
                FUN_140041b80(local_268,&local_2e8);
              }
              local_1d0 = local_268;
              ppuVar17 = &local_1d8;
              gml_Script_draw_line_sprite(param_1,param_2,&local_2f8,2,ppuVar17);
              local_2b8 = 0x41;
              local_2a8 = 1.0;
              uStack_2a0 = CONCAT44(0xd,(uint)uStack_2a0);
              local_2e8 = 0;
              uStack_2e4 = 0x3ff00000;
              uStack_2e0 = (uint)uStack_2a0;
              uStack_2dc = 0xd;
              if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_188);
              }
              FUN_140041b80(&local_188,&local_2e8);
              local_2b8 = 0x42;
              puVar10 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f59c8);
              puVar7 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7d8);
              FUN_140e609c0(param_1);
              if (puVar10 != puVar7) {
                local_2e8 = *puVar10;
                uStack_2e4 = puVar10[1];
                uStack_2e0 = puVar10[2];
                uStack_2dc = puVar10[3];
                if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar7);
                }
                FUN_140041b80(puVar7,&local_2e8);
              }
              FUN_140e60910(1);
            }
          }
          else {
            local_2b8 = 0x1b;
            (**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
          }
        }
      }
    }
    local_2b8 = 0x46;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_1e8 = local_1b0;
    FUN_140e634e0(param_1,param_2,&local_2f8,1,CONCAT44(uVar20,DAT_1419f6038),&local_1e8);
    local_2b8 = 0x48;
    if (&local_188 != param_3) {
      local_2e8 = (uint)local_188;
      uStack_2e4 = local_188._4_4_;
      uStack_2e0 = uStack_180;
      uStack_2dc = uStack_17c;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_2e8);
    }
    uVar1 = local_178[0];
  }
  else {
    local_2b8 = 0xe;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
    uVar1 = local_178[0];
  }
  uVar9 = (ulonglong)uVar1;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a0);
  }
  if ((1 << (bVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b0);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(local_298,0x10,7,FUN_140041b30);
  if (0 < (int)uVar1) {
    puVar8 = local_170;
    do {
      puVar2 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_170);
  DAT_141dc7a50 = (undefined8 *)local_2c8;
  return param_3;
}

