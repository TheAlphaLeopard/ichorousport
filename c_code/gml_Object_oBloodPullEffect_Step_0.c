// gml_Object_oBloodPullEffect_Step_0 @ 0x1406e2050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodPullEffect_Step_0(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  double *pdVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 *local_res8;
  undefined8 local_res10;
  undefined4 uVar14;
  ulonglong uVar11;
  undefined1 **ppuVar12;
  undefined8 **ppuVar13;
  longlong **pplVar15;
  ulonglong uVar16;
  undefined8 *local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  double local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  double local_138;
  byte local_12c;
  double local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  double local_e8;
  uint local_dc;
  double local_d8;
  uint local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  double *local_b8;
  undefined1 *local_b0;
  double *local_a8;
  double *local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined4 local_74;
  undefined8 *local_70;
  undefined4 local_64;
  undefined1 local_60 [16];
  longlong local_50;
  
  local_1b0 = "gml_Object_oBloodPull_Draw_0";
  local_1a8 = 0;
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  uVar14 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_158,0x10,7,FUN_1400424d0,FUN_140041b30);
  plVar4 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a04208);
  uStack_18c = 0xffffff;
  local_198 = (undefined8 *)0x0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  uStack_15c = 0xffffff;
  local_168 = (undefined8 *)0x0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_1a8 = 5;
  local_1f8 = (undefined8 *)CONCAT44(uRam0000000141dd5eac,_DAT_141dd5ea8);
  uStack_1f0 = (char *)CONCAT44(DAT_141dd5eb4,uRam0000000141dd5eb0);
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_1f8);
  local_b8 = &local_158;
  pplVar15 = (longlong **)&local_b8;
  uVar11 = CONCAT44(uVar14,DAT_141a57f40);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_208,1,uVar11,pplVar15);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_1a8 = 6;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uVar14 = (undefined4)(uVar11 >> 0x20);
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    FUN_140e609c0(DAT_141a729d8);
    pplVar15 = (longlong **)0x0;
    uVar11 = CONCAT44(uVar14,DAT_1419ff3e8);
    plVar6 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_1d8,0,uVar11,0);
    if (plVar6 != plVar4) {
      local_1f8 = (undefined8 *)*plVar6;
      uStack_1f0 = (char *)plVar6[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar4);
      }
      FUN_140041b80(plVar4,&local_1f8);
    }
    FUN_140e60910(1);
  }
  local_1a8 = 8;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  uStack_20c = 6;
  local_218 = local_res8;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_218,DAT_141a1b910,0x80000000,&local_198,uVar11,
                (ulonglong)pplVar15 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar11 >> 0x20);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((double *)plVar4 != &local_158) {
    local_1f8 = (undefined8 *)*plVar4;
    uStack_1f0 = (char *)plVar4[1];
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1f8);
  }
  local_b8 = &local_158;
  local_1f8 = local_198;
  uStack_1f0 = (char *)CONCAT44(uStack_18c,uStack_190);
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1f8);
  pplVar15 = (longlong **)&local_b8;
  uVar11 = CONCAT44(uVar14,DAT_1419ff4f8);
  local_b0 = local_148;
  pdVar7 = (double *)FUN_140e634e0(local_res8,local_res10,&local_208,2,uVar11,pplVar15);
  if (pdVar7 != &local_1c8) {
    local_1f8 = (undefined8 *)*pdVar7;
    uStack_1f0 = (char *)pdVar7[1];
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_1f8);
  }
  local_1a8 = 9;
  iVar3 = FUN_140e851f0(&local_1c8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 != 0) {
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    local_b8 = &local_1c8;
    pplVar15 = (longlong **)&local_b8;
    uVar11 = CONCAT44((int)(uVar11 >> 0x20),DAT_141a02ef8);
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_208,1,uVar11,pplVar15);
    cVar2 = FUN_140e491e0(uVar5);
    if (cVar2 != '\0') goto LAB_1406e26ca;
  }
  local_1a8 = 0xb;
  uStack_20c = 6;
  local_218 = local_res8;
  uVar16 = (ulonglong)pplVar15 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_218,DAT_141a0a828,0x80000000,&local_168,uVar11,uVar16);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_1f8 = local_168;
  uStack_1f0 = (char *)CONCAT44(uStack_15c,uStack_160);
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_1f8);
  local_1a8 = 0xc;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  uStack_20c = 6;
  local_218 = local_res8;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_218,DAT_141a1b910,0x80000000,&local_198,uVar11,uVar16);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  uStack_20c = 6;
  local_218 = local_res8;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_218,DAT_141a0a828,0x80000000,&local_168,uVar11,uVar16 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar11 >> 0x20);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((double *)plVar4 != &local_158) {
    local_1f8 = (undefined8 *)*plVar4;
    uStack_1f0 = (char *)plVar4[1];
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1f8);
  }
  local_b8 = &local_158;
  local_1f8 = local_198;
  uStack_1f0 = (char *)CONCAT44(uStack_18c,uStack_190);
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1f8);
  local_1f8 = local_168;
  uStack_1f0 = (char *)CONCAT44(uStack_15c,uStack_160);
  local_b0 = local_148;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1f8);
  local_a8 = &local_138;
  pplVar15 = (longlong **)&local_b8;
  uVar11 = CONCAT44(uVar14,DAT_1419ff3d8);
  FUN_140e634e0(local_res8,local_res10,&local_208,3,uVar11,pplVar15);
LAB_1406e26ca:
  local_1a8 = 0xe;
  uStack_20c = 6;
  local_218 = local_res8;
  FUN_140e87440(&local_218,DAT_141a0a828,0x80000000,&local_168,uVar11 & 0xffffffffffffff00,
                (ulonglong)pplVar15 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  iVar3 = FUN_140e851f0(&local_1c8,&local_168,DAT_141955260,0);
  if (iVar3 == 0) {
    local_1a8 = 0x10;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    local_1f8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1f0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1f8);
    local_b8 = &local_158;
    uStack_20c = DAT_141dd5ec4;
    uStack_210 = DAT_141dd5ec0;
    if ((1 << ((byte)DAT_141dd5ec4 & 0x1f) & 0x46U) == 0) {
      local_218 = DAT_141dd5eb8;
    }
    else {
      FUN_1400419b0(&local_218,&DAT_141dd5eb8);
    }
    uVar1 = uStack_20c;
    local_1f8 = local_218;
    uStack_1f0 = (char *)CONCAT44(uStack_20c,uStack_210);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1f8);
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_b0 = local_148;
    pdVar7 = (double *)
             gml_Script_anon_147_DefineBossAttributes_BOSSMODSINIT
                       (local_res8,local_res10,&local_188,1,&local_b8);
    if (pdVar7 != &local_138) {
      local_1f8 = (undefined8 *)*pdVar7;
      uStack_1f0 = (char *)pdVar7[1];
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1f8);
    }
    local_a8 = &local_138;
    ppuVar12 = &local_b0;
    pdVar7 = (double *)FUN_140e64420(local_res8,local_res10,&local_178,2,ppuVar12);
    uVar14 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
    if (pdVar7 != &local_128) {
      local_1f8 = (undefined8 *)*pdVar7;
      uStack_1f0 = (char *)pdVar7[1];
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_1f8);
    }
    local_a0 = &local_128;
    pplVar15 = (longlong **)&local_a0;
    puVar8 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_1d8,1,CONCAT44(uVar14,DAT_141a086f8),
                           pplVar15);
    if (puVar8 != &local_118) {
      local_1f8 = (undefined8 *)*puVar8;
      uStack_1f0 = (char *)puVar8[1];
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_1f8);
    }
    local_98 = &local_118;
    local_1f8 = (undefined8 *)CONCAT44(uRam00000001419e79a4,_DAT_1419e79a0);
    uStack_1f0 = (char *)CONCAT44(uRam00000001419e79ac,uRam00000001419e79a8);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1f8);
    local_90 = local_108;
    local_1f8 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_1f0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1f8);
    local_88 = local_f8;
    ppuVar13 = &local_98;
    gml_Script_pal_swap_layer_init(local_res8,local_res10,&local_208,3,ppuVar13);
    local_1a8 = 0x12;
    uStack_20c = 6;
    local_218 = local_res8;
    uVar16 = (ulonglong)pplVar15 & 0xffffffffffffff00;
    uVar11 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_218,DAT_141a1b910,0x80000000,&local_198,uVar11,uVar16);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_1f8 = local_198;
    uStack_1f0._4_4_ = uStack_18c;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1f8);
    local_1a8 = 0x13;
    uStack_20c = 0xf;
    local_218 = (undefined8 *)0x100000000000019;
    iVar3 = FUN_140e63cb0(local_60,&local_res8,&local_res10,&local_218);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if (0 < iVar3) {
      do {
        local_1a8 = 0x15;
        local_74 = 6;
        local_80 = local_res8;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_80,DAT_141a1b910,0x80000000,&local_198,uVar11,uVar16);
        if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_80);
        }
        iVar3 = FUN_140e851f0(&local_198,&local_c8,DAT_141955260,0);
        if (iVar3 == 0) {
          local_1a8 = 0x17;
          FUN_140ec5c30(local_res8);
          local_1a8 = 0x18;
          local_64 = 6;
          local_70 = local_res8;
          uVar16 = uVar16 & 0xffffffffffffff00;
          uVar11 = uVar11 & 0xffffffffffffff00;
          FUN_140e87440(&local_70,DAT_1419fe0e8,0x80000000,&local_d8,uVar11,uVar16);
          if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_70);
          }
          uStack_1f0._4_4_ = 6;
          local_1f8 = local_res8;
          uVar16 = uVar16 & 0xffffffffffffff00;
          uVar11 = uVar11 & 0xffffffffffffff00;
          FUN_140e87440(&local_1f8,DAT_1419fe158,0x80000000,&local_e8,uVar11,uVar16);
          uVar14 = (undefined4)(uVar11 >> 0x20);
          if ((1 << ((byte)uStack_1f0._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          uStack_20c = 0xf;
          local_218 = (undefined8 *)0x10000010000005c;
          dVar9 = local_e8;
          if ((local_dc & 0xffffff) != 0) {
            dVar9 = (double)FUN_140e4b060(&local_e8);
          }
          dVar10 = local_d8;
          if ((local_cc & 0xffffff) != 0) {
            dVar10 = (double)FUN_140e4b060(&local_d8);
          }
          puVar8 = local_218;
          if ((uStack_20c & 0xffffff) != 0) {
            puVar8 = (undefined8 *)FUN_140e4b060(&local_218);
          }
          uVar11 = CONCAT44(uVar14,(float)dVar9);
          FUN_140ec5d30(local_res8,(int)(double)puVar8,0,(float)dVar10,uVar11);
          if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
        }
        else {
          local_1a8 = 0x15;
        }
        cVar2 = FUN_140e643f0(local_60,&local_res8,&local_res10);
      } while (cVar2 != '\0');
    }
    FUN_140e63970(local_60,&local_res8,&local_res10);
    local_1a8 = 0x1b;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_200 = 0;
    uStack_1f0 = "gml_Script_pal_swap_reset";
    local_1f8 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_1f8;
    local_1fc = 5;
    local_208 = 0;
    local_1e8 = 0x71;
    iVar3 = FUN_140ec9d80();
    if (iVar3 != -1) {
      local_1e8 = 0x71;
      FUN_140ec9dc0();
    }
    DAT_141dc7a50 = local_1f8;
    if (local_50 != 0) {
      FUN_140e4cd60();
      local_50 = 0;
    }
  }
  else {
    local_1a8 = 0xe;
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
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
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return;
}

