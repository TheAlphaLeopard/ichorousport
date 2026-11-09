// gml_Object_oBloodPull_Create_0 @ 0x1406dbea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodPull_Create_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  longlong **pplVar11;
  float fVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  undefined4 uVar18;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong uVar19;
  undefined8 **ppuVar20;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  longlong *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  char *local_290;
  undefined4 local_288;
  longlong *local_280;
  undefined4 local_278;
  undefined4 local_274;
  double local_270;
  uint local_264;
  double local_260;
  uint local_254;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 *local_188;
  undefined1 *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined1 local_b8 [16];
  longlong local_a8;
  
  local_res18 = 0;
  local_290 = "gml_Object_oBloodPortal_Step_0";
  local_288 = 0;
  local_298 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_298;
  uVar18 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_228,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  local_254 = 0xffffff;
  local_260 = 0.0;
  local_264 = 0xffffff;
  local_270 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_288 = 3;
  uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  FUN_140046040(uVar5);
  local_288 = 5;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 5;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
  local_248 = CONCAT44(uRam0000000141dc6894,_DAT_141dc6890);
  uStack_240 = uRam0000000141dc6898;
  uStack_23c = uRam0000000141dc689c;
  if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_248);
  local_188 = &local_228;
  uVar16 = CONCAT44(uVar18,DAT_141a0a0d8);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2a8,1,uVar16,&local_188);
  uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
  iVar2 = FUN_140e851f0(uVar5,uVar6,DAT_141955260,1);
  if (iVar2 == -2 || 0 < iVar2) {
    local_288 = 7;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    local_248 = CONCAT44(uRam0000000141dc6894,_DAT_141dc6890);
    uStack_240 = uRam0000000141dc6898;
    uStack_23c = uRam0000000141dc689c;
    if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_248);
    local_188 = &local_228;
    ppuVar20 = &local_188;
    uVar17 = CONCAT44(uVar18,DAT_141a0a0d8);
    puVar7 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_2a8,1,uVar17,ppuVar20);
    local_274 = *(undefined4 *)((longlong)puVar7 + 0xc);
    local_278 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)local_274 & 0x1f) & 0x46U) == 0) {
      local_280 = (longlong *)*puVar7;
    }
    else {
      FUN_1400419b0(&local_280,puVar7);
    }
    local_res18 = 1;
    uStack_2ac = 7;
    local_2b8 = (longlong *)CONCAT44(local_2b8._4_4_,3);
    FUN_140042560(&local_280,&local_2b8);
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    uVar3 = FUN_140e851f0(uVar5,&local_280,DAT_141955260,1);
    if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_280);
    }
    if (uVar3 < 0x80000000) {
      local_288 = 9;
      (**(code **)(*local_res8 + 8))();
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03f68);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 == '\0') {
        local_288 = 0xb;
        uStack_2ac = 0xf;
        local_2b8 = (longlong *)0x100000000000073;
        local_248 = 0x100000000000073;
        uStack_240 = uStack_2b0;
        uStack_23c = 0xf;
        if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_218);
        }
        FUN_140041b80(local_218,&local_248);
        local_180 = local_218;
        FUN_140edd0e0(local_res8,local_res10,1,&local_180);
        iVar2 = 0xf;
        do {
          iVar2 = iVar2 + -1;
          local_288 = 0xf;
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          local_2a8 = 0;
          local_2a0 = 0;
          local_29c = 5;
          uStack_2ac = 6;
          local_2b8 = local_res8;
          uVar19 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
          uVar17 = uVar17 & 0xffffffffffffff00;
          FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_138,uVar17,uVar19);
          if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_274 = 6;
          local_280 = local_res8;
          uVar17 = uVar17 & 0xffffffffffffff00;
          FUN_140e87440(&local_280,DAT_1419fe158,0x80000000,&local_148,uVar17,
                        uVar19 & 0xffffffffffffff00);
          uVar18 = (undefined4)(uVar17 >> 0x20);
          if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_280);
          }
          local_2c8 = (undefined4)local_138;
          uStack_2c4 = local_138._4_4_;
          uStack_2c0 = uStack_130;
          uStack_2bc = uStack_12c;
          if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          FUN_140041b80(&local_228,&local_2c8);
          local_188 = &local_228;
          local_2c8 = (undefined4)local_148;
          uStack_2c4 = local_148._4_4_;
          uStack_2c0 = uStack_140;
          uStack_2bc = uStack_13c;
          if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_218);
          }
          FUN_140041b80(local_218,&local_2c8);
          local_180 = local_218;
          local_2c8 = _DAT_141dd5e78;
          uStack_2c4 = uRam0000000141dd5e7c;
          uStack_2c0 = uRam0000000141dd5e80;
          uStack_2bc = DAT_141dd5e84;
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          FUN_140041b80(&local_208,&local_2c8);
          local_178 = &local_208;
          uStack_23c = 0xf;
          local_248 = 0x100000000000017;
          local_2c8 = 0x17;
          uStack_2c4 = 0x1000000;
          uStack_2c0 = uStack_240;
          uStack_2bc = 0xf;
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_2c8);
          ppuVar20 = &local_188;
          uVar17 = CONCAT44(uVar18,DAT_141a0a7c8);
          local_170 = &local_1f8;
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2a8,4,uVar17,ppuVar20);
          iVar4 = FUN_140e63cb0(local_d8,&local_res8,&local_res10,uVar5);
          if (0 < iVar4) {
            do {
              local_288 = 0x11;
              dVar14 = (double)FUN_140e79480(0);
              if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_260);
              }
              local_254 = 0;
              local_288 = 0x12;
              local_260 = dVar14;
              dVar14 = (double)FUN_140e794b0(0,0x4014000000000000);
              if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_270);
              }
              local_264 = 0;
              local_288 = 0x13;
              local_270 = dVar14;
              pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
              dVar14 = local_260;
              if ((local_254 & 0xffffff) != 0) {
                dVar14 = (double)FUN_140e4b060(&local_260);
              }
              dVar15 = local_270;
              if ((local_264 & 0xffffff) != 0) {
                dVar15 = (double)FUN_140e4b060(&local_270);
              }
              fVar12 = (float)FUN_140e78f90((float)dVar15,(float)dVar14);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar8);
              }
              *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
              *pdVar8 = (double)fVar12;
              local_288 = 0x14;
              pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
              dVar14 = local_260;
              if ((local_254 & 0xffffff) != 0) {
                dVar14 = (double)FUN_140e4b060(&local_260);
              }
              dVar15 = local_270;
              if ((local_264 & 0xffffff) != 0) {
                dVar15 = (double)FUN_140e4b060(&local_270);
              }
              fVar12 = (float)FUN_140e79010((float)dVar15,(float)dVar14);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar8);
              }
              *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
              *pdVar8 = (double)fVar12;
              local_288 = 0x16;
              puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
              *puVar7 = 0x3f847ae147ae147b;
              local_288 = 0x18;
              if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_198);
              }
              local_18c = 0;
              local_198 = 0x4008000000000000;
              FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_198);
              local_288 = 0x19;
              if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1a8);
              }
              local_19c = 0;
              local_1a8 = 0x4008000000000000;
              FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_1a8);
              local_288 = 0x1b;
              puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f5a0);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
              *puVar7 = 0x3fb999999999999a;
              local_288 = 0x1d;
              uVar5 = FUN_140e79480(0);
              if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              local_1ac = 0;
              local_1b8 = uVar5;
              FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_1b8);
              cVar1 = FUN_140e643f0(local_d8,&local_res8,&local_res10);
            } while (cVar1 != '\0');
          }
          FUN_140e63970(local_d8,&local_res8,&local_res10);
          if (local_c8 != 0) {
            FUN_140e4cd60();
          }
        } while (0 < iVar2);
        local_288 = 0x22;
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        uVar18 = (undefined4)(uVar17 >> 0x20);
        local_2a8 = 0;
        local_2a0 = 0;
        local_29c = 5;
        puVar9 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a03f88);
        uStack_23c = 0xf;
        local_248 = 0x100000b00000000;
        local_2c8 = 0;
        uStack_2c4 = 0x100000b;
        uStack_2c0 = uStack_240;
        uStack_2bc = 0xf;
        if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_2c8);
        local_188 = &local_228;
        FUN_140e609c0(local_res8);
        ppuVar20 = &local_188;
        uVar17 = CONCAT44(uVar18,DAT_141a03fd8);
        puVar10 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_2a8,1,uVar17,ppuVar20);
        if (puVar10 != puVar9) {
          local_2c8 = *puVar10;
          uStack_2c4 = puVar10[1];
          uStack_2c0 = puVar10[2];
          uStack_2bc = puVar10[3];
          if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar9);
          }
          FUN_140041b80(puVar9,&local_2c8);
        }
        FUN_140e60910(1);
        local_288 = 0x24;
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        local_2a8 = 0;
        local_2a0 = 0;
        local_29c = 5;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a03f88);
        uStack_2ac = 6;
        local_2b8 = local_res8;
        uVar19 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
        uVar17 = uVar17 & 0xffffffffffffff00;
        FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_138,uVar17,uVar19);
        if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        uStack_2ac = 6;
        local_2b8 = local_res8;
        uVar17 = uVar17 & 0xffffffffffffff00;
        FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_148,uVar17,
                      uVar19 & 0xffffffffffffff00);
        uVar18 = (undefined4)(uVar17 >> 0x20);
        if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        if (puVar7 != &local_228) {
          local_2c8 = *(undefined4 *)puVar7;
          uStack_2c4 = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_2c0 = *(undefined4 *)(puVar7 + 1);
          uStack_2bc = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          FUN_140041b80(&local_228,&local_2c8);
        }
        local_188 = &local_228;
        local_2c8 = (undefined4)local_138;
        uStack_2c4 = local_138._4_4_;
        uStack_2c0 = uStack_130;
        uStack_2bc = uStack_12c;
        if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_218);
        }
        FUN_140041b80(local_218,&local_2c8);
        local_180 = local_218;
        local_2c8 = (undefined4)local_148;
        uStack_2c4 = local_148._4_4_;
        uStack_2c0 = uStack_140;
        uStack_2bc = uStack_13c;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        FUN_140041b80(&local_208,&local_2c8);
        local_178 = &local_208;
        ppuVar20 = &local_188;
        uVar17 = CONCAT44(uVar18,DAT_141a03fb8);
        FUN_140e634e0(local_res8,local_res10,&local_2a8,3,uVar17,ppuVar20);
        local_288 = 0x25;
        pplVar11 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a03f68);
        uStack_2ac = 0xd;
        local_2b8 = (longlong *)0x3ff0000000000000;
        if (&local_2b8 != pplVar11) {
          local_2c8 = 0;
          uStack_2c4 = 0x3ff00000;
          uStack_2c0 = uStack_2b0;
          uStack_2bc = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar11);
          }
          FUN_140041b80(pplVar11,&local_2c8);
        }
      }
      local_288 = 0x29;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      uStack_2ac = 6;
      local_2b8 = local_res8;
      uVar19 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
      uVar17 = uVar17 & 0xffffffffffffff00;
      FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_138,uVar17,uVar19);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      uStack_2ac = 6;
      local_2b8 = local_res8;
      uVar17 = uVar17 & 0xffffffffffffff00;
      FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_148,uVar17,
                    uVar19 & 0xffffffffffffff00);
      uVar18 = (undefined4)(uVar17 >> 0x20);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      local_2c8 = (undefined4)local_138;
      uStack_2c4 = local_138._4_4_;
      uStack_2c0 = uStack_130;
      uStack_2bc = uStack_12c;
      if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_2c8);
      local_188 = &local_228;
      local_2c8 = (undefined4)local_148;
      uStack_2c4 = local_148._4_4_;
      uStack_2c0 = uStack_140;
      uStack_2bc = uStack_13c;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_218);
      }
      FUN_140041b80(local_218,&local_2c8);
      local_180 = local_218;
      uStack_23c = 0xf;
      local_248 = 0x1000000000000ee;
      local_2c8 = 0xee;
      uStack_2c4 = 0x1000000;
      uStack_2c0 = uStack_240;
      uStack_2bc = 0xf;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_2c8);
      local_178 = &local_208;
      ppuVar20 = &local_188;
      uVar17 = CONCAT44(uVar18,DAT_141a12628);
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2a8,3,uVar17,ppuVar20);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 != '\0') {
        iVar2 = 0xf;
        do {
          iVar2 = iVar2 + -1;
          local_288 = 0x2d;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          uStack_2ac = 6;
          local_2b8 = local_res8;
          uVar19 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
          uVar17 = uVar17 & 0xffffffffffffff00;
          FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_138,uVar17,uVar19);
          if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_274 = 6;
          local_280 = local_res8;
          uVar17 = uVar17 & 0xffffffffffffff00;
          FUN_140e87440(&local_280,DAT_1419fe158,0x80000000,&local_148,uVar17,
                        uVar19 & 0xffffffffffffff00);
          uVar18 = (undefined4)(uVar17 >> 0x20);
          if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_280);
          }
          local_2c8 = (undefined4)local_138;
          uStack_2c4 = local_138._4_4_;
          uStack_2c0 = uStack_130;
          uStack_2bc = uStack_12c;
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_2c8);
          local_2c8 = (undefined4)local_148;
          uStack_2c4 = local_148._4_4_;
          uStack_2c0 = uStack_140;
          uStack_2bc = uStack_13c;
          local_170 = &local_1f8;
          if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1e8);
          }
          FUN_140041b80(local_1e8,&local_2c8);
          local_168 = local_1e8;
          local_2c8 = _DAT_141dd5e78;
          uStack_2c4 = uRam0000000141dd5e7c;
          uStack_2c0 = uRam0000000141dd5e80;
          uStack_2bc = DAT_141dd5e84;
          if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_2c8);
          local_160 = local_1d8;
          uStack_23c = 0xf;
          local_248 = 0x100000000000017;
          local_2c8 = 0x17;
          uStack_2c4 = 0x1000000;
          uStack_2c0 = uStack_240;
          uStack_2bc = 0xf;
          if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1c8);
          }
          FUN_140041b80(local_1c8,&local_2c8);
          local_158 = local_1c8;
          ppuVar20 = &local_170;
          uVar17 = CONCAT44(uVar18,DAT_141a0a7c8);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_238,4,uVar17,ppuVar20);
          iVar4 = FUN_140e63cb0(local_d8,&local_res8,&local_res10,uVar5);
          if (0 < iVar4) {
            do {
              local_288 = 0x2f;
              dVar14 = (double)FUN_140e79480(0);
              if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_260);
              }
              local_254 = 0;
              local_288 = 0x30;
              local_260 = dVar14;
              dVar14 = (double)FUN_140e794b0(0,0x4014000000000000);
              if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_270);
              }
              local_264 = 0;
              local_288 = 0x31;
              local_270 = dVar14;
              pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
              dVar14 = local_260;
              if ((local_254 & 0xffffff) != 0) {
                dVar14 = (double)FUN_140e4b060(&local_260);
              }
              dVar15 = local_270;
              if ((local_264 & 0xffffff) != 0) {
                dVar15 = (double)FUN_140e4b060(&local_270);
              }
              fVar12 = (float)FUN_140e78f90((float)dVar15,(float)dVar14);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar8);
              }
              *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
              *pdVar8 = (double)fVar12;
              local_288 = 0x32;
              pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
              dVar14 = local_260;
              if ((local_254 & 0xffffff) != 0) {
                dVar14 = (double)FUN_140e4b060(&local_260);
              }
              dVar15 = local_270;
              if ((local_264 & 0xffffff) != 0) {
                dVar15 = (double)FUN_140e4b060(&local_270);
              }
              fVar12 = (float)FUN_140e79010((float)dVar15,(float)dVar14);
              if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pdVar8);
              }
              *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
              *pdVar8 = (double)fVar12;
              local_288 = 0x34;
              puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
              *puVar7 = 0x3f847ae147ae147b;
              local_288 = 0x36;
              if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_198);
              }
              local_18c = 0;
              local_198 = 0x4008000000000000;
              FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_198);
              local_288 = 0x37;
              if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1a8);
              }
              local_19c = 0;
              local_1a8 = 0x4008000000000000;
              FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_1a8);
              local_288 = 0x39;
              puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f5a0);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
              *puVar7 = 0x3fb999999999999a;
              local_288 = 0x3b;
              uVar5 = FUN_140e79480(0);
              if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              local_1ac = 0;
              local_1b8 = uVar5;
              FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_1b8);
              cVar1 = FUN_140e643f0(local_d8,&local_res8,&local_res10);
            } while (cVar1 != '\0');
          }
          FUN_140e63970(local_d8,&local_res8,&local_res10);
          if (local_c8 != 0) {
            FUN_140e4cd60();
          }
        } while (0 < iVar2);
        local_288 = 0x40;
        uStack_2ac = 0xf;
        local_2b8 = (longlong *)0x1000000000000ee;
        iVar2 = FUN_140e63cb0(local_b8,&local_res8,&local_res10,&local_2b8);
        if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        uVar18 = (undefined4)(uVar17 >> 0x20);
        if (0 < iVar2) {
          do {
            local_288 = 0x42;
            pplVar11 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04008);
            uStack_2ac = 0xd;
            local_2b8 = (longlong *)0x3ff0000000000000;
            if (&local_2b8 != pplVar11) {
              local_2c8 = 0;
              uStack_2c4 = 0x3ff00000;
              uStack_2c0 = uStack_2b0;
              uStack_2bc = 0xd;
              if ((1 << ((byte)*(undefined4 *)((longlong)pplVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(pplVar11);
              }
              FUN_140041b80(pplVar11,&local_2c8);
            }
            cVar1 = FUN_140e643f0(local_b8,&local_res8,&local_res10);
            uVar18 = (undefined4)(uVar17 >> 0x20);
          } while (cVar1 != '\0');
        }
        FUN_140e63970(local_b8,&local_res8,&local_res10);
        local_288 = 0x45;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_dc = 0;
        local_e8 = 0xc08f400000000000;
        FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_e8);
        local_288 = 0x46;
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        local_2a8 = 0;
        local_2a0 = 0;
        local_29c = 5;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a03f88);
        if (puVar7 != &local_228) {
          local_2c8 = *(undefined4 *)puVar7;
          uStack_2c4 = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_2c0 = *(undefined4 *)(puVar7 + 1);
          uStack_2bc = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          FUN_140041b80(&local_228,&local_2c8);
        }
        local_188 = &local_228;
        FUN_140e634e0(local_res8,local_res10,&local_2a8,1,CONCAT44(uVar18,DAT_141a04038),&local_188)
        ;
        if (local_a8 != 0) {
          FUN_140e4cd60();
        }
      }
    }
    else {
      local_288 = 0x4d;
      puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
      uVar18 = (undefined4)(uVar17 >> 0x20);
      if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
        uVar13 = (undefined4)*puVar7;
      }
      else {
        uVar13 = FUN_140e4b060(puVar7);
      }
      dVar14 = (double)FUN_1412a79b0(uVar13,0x4020000000000000);
      if (dVar14 == 0.0) {
        local_288 = 0x4f;
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        local_2a8 = 0;
        local_2a0 = 0;
        local_29c = 5;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        FUN_140e85f80(local_res8,DAT_141a00d18,0x80000000,&local_f8);
        FUN_140e85f80(local_res8,DAT_141a00c48,0x80000000,&local_108);
        local_2c8 = _DAT_141dc6890;
        uStack_2c4 = uRam0000000141dc6894;
        uStack_2c0 = uRam0000000141dc6898;
        uStack_2bc = uRam0000000141dc689c;
        if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_2c8);
        local_188 = &local_228;
        local_2c8 = (undefined4)local_108;
        uStack_2c4 = local_108._4_4_;
        uStack_2c0 = uStack_100;
        uStack_2bc = uStack_fc;
        if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_218);
        }
        FUN_140041b80(local_218,&local_2c8);
        local_180 = local_218;
        uVar5 = local_f8;
        if ((uStack_ec & 0xffffff) != 0) {
          uVar5 = FUN_140e4b060(&local_f8);
        }
        local_208 = FUN_140e794b0(0,uVar5);
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_1fc = 0;
        local_178 = &local_208;
        puVar7 = (undefined8 *)FUN_140e78db0(&local_238,2,&local_188);
        if (puVar7 != &local_1f8) {
          local_2c8 = *(undefined4 *)puVar7;
          uStack_2c4 = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_2c0 = *(undefined4 *)(puVar7 + 1);
          uStack_2bc = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_2c8);
        }
        local_2c8 = _DAT_141dd5e88;
        uStack_2c4 = uRam0000000141dd5e8c;
        uStack_2c0 = uRam0000000141dd5e90;
        uStack_2bc = DAT_141dd5e94;
        local_170 = &local_1f8;
        if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_2c8);
        local_168 = local_1e8;
        uStack_23c = 0xf;
        local_248 = 0x100000000000073;
        local_2c8 = 0x73;
        uStack_2c4 = 0x1000000;
        uStack_2c0 = uStack_240;
        uStack_2bc = 0xf;
        if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        FUN_140041b80(local_1d8,&local_2c8);
        local_160 = local_1d8;
        ppuVar20 = &local_178;
        uVar17 = CONCAT44(uVar18,DAT_141a0a7c8);
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2a8,4,uVar17,ppuVar20);
        iVar2 = FUN_140e63cb0(local_b8,&local_res8,&local_res10,uVar5);
        if (0 < iVar2) {
          do {
            local_288 = 0x52;
            puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd5a8);
            uStack_2ac = 6;
            local_2b8 = local_res10;
            uVar19 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
            uVar17 = uVar17 & 0xffffffffffffff00;
            FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_118,uVar17,uVar19);
            if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            FUN_140e609c0(local_res8);
            if (&local_118 != puVar7) {
              local_2c8 = (undefined4)local_118;
              uStack_2c4 = local_118._4_4_;
              uStack_2c0 = uStack_110;
              uStack_2bc = uStack_10c;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              FUN_140041b80(puVar7,&local_2c8);
            }
            FUN_140e60910(1);
            local_288 = 0x53;
            puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd408);
            local_274 = 6;
            local_280 = local_res10;
            ppuVar20 = (undefined8 **)(uVar19 & 0xffffffffffffff00);
            uVar17 = uVar17 & 0xffffffffffffff00;
            FUN_140e87440(&local_280,DAT_1419fe158,0x80000000,&local_128,uVar17,ppuVar20);
            if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_280);
            }
            FUN_140e609c0(local_res8);
            if (&local_128 != puVar7) {
              local_2c8 = (undefined4)local_128;
              uStack_2c4 = local_128._4_4_;
              uStack_2c0 = uStack_120;
              uStack_2bc = uStack_11c;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              FUN_140041b80(puVar7,&local_2c8);
            }
            FUN_140e60910(1);
            cVar1 = FUN_140e643f0(local_b8,&local_res8,&local_res10);
          } while (cVar1 != '\0');
        }
        uVar18 = (undefined4)(uVar17 >> 0x20);
        FUN_140e63970(local_b8,&local_res8,&local_res10);
        local_288 = 0x57;
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        local_2a8 = 0;
        local_2a0 = 0;
        local_29c = 5;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        FUN_140e85f80(local_res8,DAT_141a00d18,0x80000000,&local_f8);
        local_2c8 = _DAT_141dc6890;
        uStack_2c4 = uRam0000000141dc6894;
        uStack_2c0 = uRam0000000141dc6898;
        uStack_2bc = uRam0000000141dc689c;
        if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_2c8);
        local_188 = &local_228;
        local_2c8 = (undefined4)local_f8;
        uStack_2c4 = local_f8._4_4_;
        uStack_2c0 = uStack_f0;
        uStack_2bc = uStack_ec;
        if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_218);
        }
        FUN_140041b80(local_218,&local_2c8);
        local_180 = local_218;
        FUN_140e85f80(local_res8,DAT_141a00c48,0x80000000,&local_108);
        puVar7 = (undefined8 *)FUN_140e78db0(&local_238,2,&local_188);
        if (puVar7 != &local_208) {
          local_2c8 = *(undefined4 *)puVar7;
          uStack_2c4 = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_2c0 = *(undefined4 *)(puVar7 + 1);
          uStack_2bc = *(uint *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          FUN_140041b80(&local_208,&local_2c8);
        }
        local_178 = &local_208;
        uVar5 = local_108;
        if ((uStack_fc & 0xffffff) != 0) {
          uVar5 = FUN_140e4b060(&local_108);
        }
        local_1f8 = FUN_140e794b0(0,uVar5);
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1ec = 0;
        local_2c8 = _DAT_141dd5e88;
        uStack_2c4 = uRam0000000141dd5e8c;
        uStack_2c0 = uRam0000000141dd5e90;
        uStack_2bc = DAT_141dd5e94;
        local_170 = &local_1f8;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_2c8);
        local_168 = local_1e8;
        uStack_23c = 0xf;
        local_248 = 0x100000000000073;
        local_2c8 = 0x73;
        uStack_2c4 = 0x1000000;
        uStack_2c0 = uStack_240;
        uStack_2bc = 0xf;
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        FUN_140041b80(local_1d8,&local_2c8);
        local_160 = local_1d8;
        ppuVar20 = &local_178;
        uVar17 = CONCAT44(uVar18,DAT_141a0a7c8);
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2a8,4,uVar17,ppuVar20);
        iVar2 = FUN_140e63cb0(local_d8,&local_res8,&local_res10,uVar5);
        if (0 < iVar2) {
          do {
            local_288 = 0x5a;
            puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd5a8);
            uStack_2ac = 6;
            local_2b8 = local_res10;
            uVar19 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
            uVar17 = uVar17 & 0xffffffffffffff00;
            FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_118,uVar17,uVar19);
            if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            FUN_140e609c0(local_res8);
            if (&local_118 != puVar7) {
              local_2c8 = (undefined4)local_118;
              uStack_2c4 = local_118._4_4_;
              uStack_2c0 = uStack_110;
              uStack_2bc = uStack_10c;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              FUN_140041b80(puVar7,&local_2c8);
            }
            FUN_140e60910(1);
            local_288 = 0x5b;
            puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd408);
            local_274 = 6;
            local_280 = local_res10;
            ppuVar20 = (undefined8 **)(uVar19 & 0xffffffffffffff00);
            uVar17 = uVar17 & 0xffffffffffffff00;
            FUN_140e87440(&local_280,DAT_1419fe158,0x80000000,&local_128,uVar17,ppuVar20);
            if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_280);
            }
            FUN_140e609c0(local_res8);
            if (&local_128 != puVar7) {
              local_2c8 = (undefined4)local_128;
              uStack_2c4 = local_128._4_4_;
              uStack_2c0 = uStack_120;
              uStack_2bc = uStack_11c;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              FUN_140041b80(puVar7,&local_2c8);
            }
            FUN_140e60910(1);
            cVar1 = FUN_140e643f0(local_d8,&local_res8,&local_res10);
          } while (cVar1 != '\0');
        }
        FUN_140e63970(local_d8,&local_res8,&local_res10);
        if (local_c8 != 0) {
          FUN_140e4cd60();
          local_c8 = 0;
        }
        if (local_a8 != 0) {
          FUN_140e4cd60();
        }
      }
    }
  }
  else {
    local_288 = 5;
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(&local_228,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_298;
  return;
}

