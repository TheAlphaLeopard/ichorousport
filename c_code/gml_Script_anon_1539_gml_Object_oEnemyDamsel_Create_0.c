// gml_Script_anon_1539_gml_Object_oEnemyDamsel_Create_0 @ 0x140975e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1539_gml_Object_oEnemyDamsel_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  double *pdVar8;
  undefined8 *puVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  code *pcVar15;
  undefined4 uVar17;
  ulonglong uVar16;
  undefined1 **ppuVar18;
  ulonglong uVar19;
  longlong *local_2d8;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  longlong *local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  longlong *local_298;
  undefined4 local_28c;
  double local_288;
  uint local_27c;
  double local_278;
  uint local_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  char *local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined4 local_234;
  longlong *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined4 local_fc;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 local_d0 [16];
  longlong local_c0;
  
  local_250 = "gml_Script_anon@128@gml_Object_oEnemyDamsel_Create_0";
  local_258 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_258;
  local_248 = 7;
  pcVar15 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_188,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_2cc = 0xffffff;
  local_2d8 = (longlong *)0x0;
  uStack_20c = 0xffffff;
  local_218 = (longlong *)0x0;
  uStack_21c = 0xffffff;
  local_228 = (longlong *)0x0;
  uStack_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_26c = 0xffffff;
  local_278 = 0.0;
  local_27c = 0xffffff;
  local_288 = 0.0;
  local_234 = 0xffffff;
  local_240 = 0;
  local_29c = 0;
  local_2a8 = 0;
  local_1fc = 0;
  local_208 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_248 = 8;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f0868);
  cVar3 = FUN_140e491e0(uVar6);
  iVar10 = 2;
  bVar11 = cVar3 == '\0';
  if (bVar11) {
    local_28c = 0;
    local_298 = (longlong *)0x3ff0000000000000;
    pplVar7 = &local_298;
  }
  else {
    uStack_2ac = 0;
    local_2b8 = (longlong *)0x0;
    pplVar7 = (longlong **)&local_2b8;
  }
  uVar2 = local_28c;
  uVar17 = uStack_2ac;
  local_2c8 = *pplVar7;
  uStack_2c0 = *(undefined4 *)(pplVar7 + 1);
  uStack_2bc = *(uint *)((longlong)pplVar7 + 0xc);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  FUN_140041b80(&local_2d8,&local_2c8);
  if ((bVar11) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_298);
  }
  if ((!bVar11) && ((1 << ((byte)uVar17 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_2b8);
  }
  bVar11 = true;
  do {
    uVar17 = (undefined4)((ulonglong)pcVar15 >> 0x20);
    if (!bVar11) {
      local_248 = 8;
      uVar4 = uStack_2cc & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,(int)local_2d8 + 1);
          }
          else if (uVar4 == 10) {
            local_2d8 = (longlong *)((longlong)local_2d8 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              uStack_2cc = 0;
              goto LAB_1409760db;
            }
            FUN_140042910(&DAT_14172c3d8,&local_2d8,&local_2d8);
          }
          goto LAB_1409760e6;
        }
        local_2d8 = (longlong *)FUN_140e4b060(&local_2d8);
        uStack_2cc = 0;
      }
LAB_1409760db:
      local_2d8 = (longlong *)((double)local_2d8 + 1.0);
    }
LAB_1409760e6:
    bVar11 = false;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    uStack_18c = 0xf;
    local_198 = (undefined1 *)0x1000001000000d4;
    local_2c8 = (longlong *)0x1000001000000d4;
    uStack_2c0 = uStack_190;
    uStack_2bc = 0xf;
    if ((1 << (local_188[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_2c8);
    local_f8 = local_188;
    ppuVar18 = &local_f8;
    uVar16 = CONCAT44(uVar17,DAT_141a049b8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2a8,1,uVar16,ppuVar18);
    iVar5 = FUN_140e851f0(&local_2d8,uVar6,DAT_141955260,1);
    puVar1 = local_res18;
    if ((iVar5 == -2) || (-1 < iVar5)) {
      local_248 = 0x15;
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      local_234 = 0;
      local_240 = 0x3ff0000000000000;
      do {
        iVar10 = iVar10 + -1;
        local_248 = 0x18;
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        local_2a8 = 0;
        local_2a0 = 0;
        local_29c = 5;
        local_fc = 6;
        local_108 = local_res8;
        uVar19 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
        uVar16 = uVar16 & 0xffffffffffffff00;
        FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_218,uVar16,uVar19);
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        uStack_1ac = 6;
        local_1b8 = local_res8;
        uVar16 = uVar16 & 0xffffffffffffff00;
        FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_228,uVar16,
                      uVar19 & 0xffffffffffffff00);
        uVar17 = (undefined4)(uVar16 >> 0x20);
        if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_28c = 0;
        local_298 = (longlong *)0x4000000000000000;
        FUN_140042560(&local_298,&local_240);
        uStack_1dc = uStack_20c;
        uStack_1e0 = uStack_210;
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_1e8 = local_218;
        }
        else {
          FUN_1400419b0(&local_1e8,&local_218);
        }
        FUN_1400460e0(&local_1e8,&local_298);
        local_138 = (undefined4)local_1e8;
        uStack_134 = local_1e8._4_4_;
        uStack_130 = uStack_1e0;
        uStack_12c = uStack_1dc;
        if ((1 << (local_188[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_188);
        }
        FUN_140041b80(local_188,&local_138);
        if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        local_f8 = local_188;
        uStack_25c = uStack_21c;
        uStack_260 = uStack_220;
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
          local_268 = local_228;
        }
        else {
          FUN_1400419b0(&local_268,&local_228);
        }
        uStack_19c = 7;
        local_1a8 = CONCAT44(local_1a8._4_4_,4);
        FUN_1400462a0(&local_268,&local_1a8);
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_138 = (undefined4)local_268;
        uStack_134 = local_268._4_4_;
        uStack_130 = uStack_260;
        uStack_12c = uStack_25c;
        if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_138);
        if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        local_f0 = local_178;
        local_138 = _DAT_141dd8888;
        uStack_134 = uRam0000000141dd888c;
        uStack_130 = uRam0000000141dd8890;
        uStack_12c = DAT_141dd8894;
        if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_138);
        local_e8 = local_168;
        uStack_2bc = 0xf;
        local_2c8 = (longlong *)0x1000000000000ac;
        local_138 = 0xac;
        uStack_134 = 0x1000000;
        uStack_130 = uStack_2c0;
        uStack_12c = 0xf;
        if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_138);
        local_e0 = local_158;
        ppuVar18 = &local_f8;
        uVar16 = CONCAT44(uVar17,DAT_141a0a7c8);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2a8,4,uVar16,ppuVar18);
        iVar5 = FUN_140e63cb0(local_d0,&local_res8,&local_res10,uVar6);
        if (0 < iVar5) {
          do {
            local_248 = 0x1a;
            puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
            FUN_140e609c0(local_res8);
            uStack_2ac = 0;
            local_2b8 = (longlong *)0x3fe0000000000000;
            FUN_140042560(&local_2b8,&local_240);
            if (&local_2b8 != puVar9) {
              local_138 = (undefined4)local_2b8;
              uStack_134 = local_2b8._4_4_;
              uStack_130 = uStack_2b0;
              uStack_12c = uStack_2ac;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar9);
              }
              FUN_140041b80(puVar9,&local_138);
            }
            if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            FUN_140e60910(1);
            cVar3 = FUN_140e643f0(local_d0,&local_res8,&local_res10);
          } while (cVar3 != '\0');
        }
        FUN_140e63970(local_d0,&local_res8,&local_res10);
        local_248 = 0x1c;
        uStack_18c = 0;
        local_198 = &DAT_bff0000000000000;
        FUN_140042560(&local_240,&local_198);
        if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        if (local_c0 != 0) {
          FUN_140e4cd60();
        }
      } while (0 < iVar10);
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      _eh_vector_destructor_iterator_(local_188,0x10,5,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_258;
      return puVar1;
    }
    local_248 = 9;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    local_28c = 6;
    local_298 = local_res8;
    uVar19 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(&local_298,DAT_1419fe0e8,0x80000000,&local_218,uVar16,uVar19);
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    uStack_2ac = 6;
    local_2b8 = local_res8;
    uVar19 = uVar19 & 0xffffffffffffff00;
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_228,uVar16,uVar19);
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    uStack_25c = 6;
    local_268 = local_res8;
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(&local_268,DAT_141a1b910,0x80000000,&local_118,uVar16,uVar19 & 0xffffffffffffff00)
    ;
    uVar17 = (undefined4)(uVar16 >> 0x20);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_2c8 = local_218;
    uStack_2c0 = uStack_210;
    uStack_2bc = uStack_20c;
    if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_2c8);
    local_f0 = local_178;
    local_2c8 = local_228;
    uStack_2c0 = uStack_220;
    uStack_2bc = uStack_21c;
    if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_2c8);
    local_e8 = local_168;
    local_2c8 = local_118;
    uStack_2c0 = uStack_110;
    uStack_2bc = uStack_10c;
    if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_2c8);
    local_e0 = local_158;
    uStack_19c = 0xf;
    local_1a8 = 0x100000000000023;
    local_2c8 = (longlong *)0x100000000000023;
    uStack_2c0 = uStack_1a0;
    uStack_2bc = 0xf;
    if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_2c8);
    local_d8 = local_148;
    pcVar15 = (code *)CONCAT44(uVar17,DAT_141a0a7c8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_208,4,pcVar15,&local_f0);
    iVar5 = FUN_140e63cb0(&local_138,&local_res8,&local_res10,uVar6);
    if (0 < iVar5) {
      do {
        local_248 = 0xb;
        uStack_1ac = 0xf;
        local_1b8 = (longlong *)0x1000001000000d4;
        local_2c8 = (longlong *)0x1000001000000d4;
        uStack_2c0 = uStack_1b0;
        uStack_2bc = 0xf;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_2c8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1c8);
        local_248 = 0xc;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1ec = 0;
        local_1f8 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1f8);
        local_248 = 0xd;
        local_2c8 = local_2d8;
        uStack_2c0 = uStack_2d0;
        uStack_2bc = uStack_2cc;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_2c8);
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_1d8);
        local_248 = 0xe;
        dVar13 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        local_26c = 0;
        local_248 = 0xf;
        local_278 = dVar13;
        dVar13 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        local_27c = 0;
        local_248 = 0x10;
        local_288 = dVar13;
        pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar13 = local_278;
        if ((local_26c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_278);
        }
        dVar14 = local_288;
        if ((local_27c & 0xffffff) != 0) {
          dVar14 = (double)FUN_140e4b060(&local_288);
        }
        fVar12 = (float)FUN_140e78f90((float)dVar14,(float)dVar13);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar8);
        }
        *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
        *pdVar8 = (double)fVar12;
        local_248 = 0x11;
        pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar13 = local_278;
        if ((local_26c & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_278);
        }
        dVar14 = local_288;
        if ((local_27c & 0xffffff) != 0) {
          dVar14 = (double)FUN_140e4b060(&local_288);
        }
        fVar12 = (float)FUN_140e79010((float)dVar14,(float)dVar13);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar8);
        }
        *(undefined4 *)((longlong)pdVar8 + 0xc) = 0;
        *pdVar8 = (double)fVar12;
        cVar3 = FUN_140e643f0(&local_138,&local_res8,&local_res10);
      } while (cVar3 != '\0');
    }
    FUN_140e63970(&local_138,&local_res8,&local_res10);
    if (local_128 != 0) {
      FUN_140e4cd60();
    }
  } while( true );
}

