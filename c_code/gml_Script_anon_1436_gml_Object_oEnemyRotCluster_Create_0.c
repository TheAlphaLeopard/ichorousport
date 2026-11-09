// gml_Script_anon_1436_gml_Object_oEnemyRotCluster_Create_0 @ 0x140a1a0b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1436_gml_Object_oEnemyRotCluster_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  double *pdVar4;
  undefined8 *puVar5;
  double *pdVar6;
  undefined8 **ppuVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  double *pdVar10;
  undefined8 *puVar11;
  double *pdVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  code *pcVar21;
  undefined8 uVar22;
  ulonglong in_stack_fffffffffffffce0;
  ulonglong uVar23;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  double *local_2d8;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  double *local_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  double *local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined8 local_280;
  char *local_278;
  undefined4 local_270;
  double *local_268;
  undefined4 local_260;
  uint local_25c;
  double *local_258;
  undefined4 local_250;
  uint local_24c;
  double *local_248;
  undefined4 local_240;
  undefined4 local_23c;
  double local_238;
  uint local_22c;
  double local_228;
  byte local_21c;
  double local_218;
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined8 local_1f8;
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  double local_1d8;
  byte local_1cc;
  double local_1c8;
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  double local_168;
  undefined4 local_15c;
  double *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  double *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  undefined4 local_12c;
  double *local_128;
  undefined8 **local_120;
  undefined1 *local_118;
  undefined8 *local_110;
  undefined1 *local_108;
  undefined8 *local_100;
  double *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  local_278 = "gml_Script_anon@386@gml_Object_oEnemyRotCluster_Create_0";
  local_280 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_280;
  local_270 = 0x1e;
  pcVar21 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_228,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_294 = 0xffffff;
  local_13c = 0xffffff;
  local_148 = (double *)0x0;
  local_298 = 0xffffff;
  local_14c = 0xffffff;
  pdVar10 = (double *)0x0;
  local_158 = (double *)0x0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_16c = 0xffffff;
  local_178 = 0;
  local_22c = 0xffffff;
  local_238 = 0.0;
  local_23c = 0xffffff;
  local_248 = (double *)0x0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_24c = 0xffffff;
  local_258 = (double *)0x0;
  local_25c = 0xffffff;
  local_268 = (double *)0x0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_2bc = 0;
  local_2c8 = 0;
  local_284 = 0;
  local_290 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_270 = 0x20;
  uStack_2f0._4_4_ = 6;
  uVar16 = (ulonglong)pcVar21 & 0xffffffffffffff00;
  local_2f8 = (double *)param_1;
  FUN_140e87440(&local_2f8,DAT_141a0a7e8,0,&local_188,uVar16,
                in_stack_fffffffffffffce0 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar16 >> 0x20);
  if ((1 << ((byte)uStack_2f0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  uStack_2f0 = (char *)(ulonglong)(uint)uStack_2f0;
  local_2f8 = (double *)&DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(&local_188,&local_2f8,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)uStack_2f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if (iVar1 != 0) {
    local_270 = 0x22;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a574b0);
    if (pdVar4 != &local_228) {
      local_2f8 = (double *)*pdVar4;
      uStack_2f0 = (char *)pdVar4[1];
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_2f8);
    }
    local_128 = &local_228;
    ppuVar7 = &local_128;
    uVar16 = CONCAT44(uVar14,DAT_141a047c8);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,1,uVar16,ppuVar7);
    if (puVar5 != &local_198) {
      local_2f8 = (double *)*puVar5;
      uStack_2f0 = (char *)puVar5[1];
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_2f8);
    }
    local_270 = 0x23;
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5b48);
    uStack_2cc = *(undefined4 *)((longlong)pdVar6 + 0xc);
    uStack_2d0 = *(undefined4 *)(pdVar6 + 1);
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) == 0) {
      local_2d8 = (double *)*pdVar6;
    }
    else {
      FUN_1400419b0(&local_2d8,pdVar6);
    }
    FUN_140042560(&local_2d8,&local_198);
    local_2f8 = local_2d8;
    uStack_2f0 = (char *)CONCAT44(uStack_2cc,uStack_2d0);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138);
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_270 = 0x24;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_290);
    }
    local_290 = 0;
    local_288 = 0;
    local_284 = 5;
    uStack_2f0._4_4_ = 6;
    uVar16 = uVar16 & 0xffffffffffffff00;
    local_2f8 = (double *)param_1;
    FUN_140e87440(&local_2f8,DAT_141a0a7e8,0,&local_188,uVar16,
                  (ulonglong)ppuVar7 & 0xffffffffffffff00);
    uVar14 = (undefined4)(uVar16 >> 0x20);
    if ((1 << ((byte)uStack_2f0._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = (double *)local_188;
    uStack_2f0 = (char *)CONCAT44(uStack_17c,uStack_180);
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_2f8);
    local_128 = &local_228;
    local_120 = (undefined8 **)&local_138;
    local_2f8 = (double *)CONCAT44(uRam0000000141dc6f34,_DAT_141dc6f30);
    uStack_2f0 = (char *)CONCAT44(uRam0000000141dc6f3c,uRam0000000141dc6f38);
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_2f8);
    local_118 = local_208;
    puVar5 = (undefined8 *)FUN_140e79230(&local_290,2,&local_128);
    if (puVar5 != &local_1f8) {
      local_2f8 = (double *)*puVar5;
      uStack_2f0 = (char *)puVar5[1];
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_2f8);
    }
    local_110 = &local_1f8;
    ppuVar7 = (undefined8 **)FUN_140e79090(&local_2c8,2,&local_118);
    pdVar6 = (double *)0x0;
    if ((double **)ppuVar7 != &local_148) {
      local_2f8 = (double *)*ppuVar7;
      uStack_2f0 = (char *)ppuVar7[1];
      FUN_140041b80(&local_148,&local_2f8);
      local_294 = local_13c;
      pdVar6 = local_148;
    }
    local_270 = 0x25;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_29c = local_294;
    local_2a0 = local_140;
    if ((1 << ((byte)local_294 & 0x1f) & 0x46U) == 0) {
      local_2a8 = pdVar6;
    }
    else {
      FUN_1400419b0(&local_2a8,&local_148);
    }
    FUN_140046500(&local_2a8,&local_138);
    uStack_2cc = 0;
    local_2d8 = (double *)0x3ff0000000000000;
    FUN_1400462a0(&local_2d8,&local_2a8);
    uStack_2ac = uStack_2cc;
    uStack_2b0 = uStack_2d0;
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) == 0) {
      local_2b8 = local_2d8;
    }
    else {
      FUN_1400419b0(&local_2b8,&local_2d8);
    }
    FUN_140042560(&local_2b8,&local_198);
    local_2f8 = local_2b8;
    uStack_2f0 = (char *)CONCAT44(uStack_2ac,uStack_2b0);
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_2f8);
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_128 = &local_228;
    ppuVar7 = (undefined8 **)
              FUN_140e634e0(param_1,param_2,&local_2c8,1,CONCAT44(uVar14,DAT_1419fe728),&local_128);
    if ((double **)ppuVar7 != &local_158) {
      local_2f8 = (double *)*ppuVar7;
      uStack_2f0 = (char *)ppuVar7[1];
      FUN_140041b80(&local_158,&local_2f8);
      local_298 = local_14c;
      pdVar10 = local_158;
    }
    uVar14 = local_298;
    local_270 = 0x26;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if (pdVar4 != &local_228) {
      local_2f8 = (double *)*pdVar4;
      uStack_2f0 = (char *)pdVar4[1];
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_2f8);
    }
    local_128 = &local_228;
    uStack_2d0 = local_150;
    uStack_2cc = uVar14;
    if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) == 0) {
      local_2d8 = pdVar10;
    }
    else {
      FUN_1400419b0(&local_2d8,&local_158);
    }
    uStack_2f0._4_4_ = 7;
    local_2f8 = (double *)CONCAT44(local_2f8._4_4_,1);
    FUN_1400460e0(&local_2d8,&local_2f8);
    if ((1 << ((byte)uStack_2f0._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = local_2d8;
    uStack_2f0 = (char *)CONCAT44(uStack_2cc,uStack_2d0);
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_2f8);
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_120 = (undefined8 **)&local_218;
    local_2f8 = (double *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_2f0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_2f8);
    local_118 = local_208;
    gml_Script_pal_swap_layer_init(param_1,param_2,&local_2c8,3,&local_128);
  }
  local_270 = 0x29;
  puVar8 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
    uVar16 = *puVar8;
  }
  else {
    uVar16 = FUN_140e4b060(puVar8);
  }
  dVar17 = (double)uStack_2f0;
  uStack_2f0 = (char *)((ulonglong)uStack_2f0 & 0xffffffff);
  dVar18 = (double)uStack_2f0;
  local_2f8 = (double *)(uVar16 ^ 0x8000000000000000);
  uStack_2cc = 0;
  uStack_2f0._0_4_ = SUB84(dVar17,0);
  uStack_2d0 = (uint)uStack_2f0;
  uStack_2f0 = (char *)dVar18;
  local_2d8 = local_2f8;
  FUN_140046500(&local_2d8,uVar9);
  if ((uStack_2cc & 0xffffff) == 0) {
    uVar14 = SUB84(local_2d8,0);
  }
  else {
    uVar14 = FUN_140e4b060(&local_2d8);
  }
  dVar17 = (double)FUN_140e78ec0(uVar14,0,0x3ff0000000000000);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 0;
  local_168 = dVar17 * 20.0;
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_270 = 0x2a;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  local_2a8 = pdVar10;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  if (pdVar10 != &local_228) {
    local_2f8 = (double *)*pdVar10;
    uStack_2f0 = (char *)pdVar10[1];
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_2f8);
  }
  local_128 = &local_228;
  local_120 = (undefined8 **)&local_168;
  uStack_2f0 = (char *)((ulonglong)uStack_2f0 & 0xffffffff);
  local_2f8 = (double *)0x3fb47ae147ae147b;
  FUN_140042560(&local_2f8,uVar3);
  local_2d8 = local_2f8;
  uStack_2d0 = (uint)uStack_2f0;
  uStack_2cc = uStack_2f0._4_4_;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_2d8);
  if ((1 << ((byte)((ulonglong)uStack_2f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_118 = local_208;
  FUN_140e609c0(param_1);
  ppuVar7 = &local_128;
  puVar11 = (undefined8 *)gml_Script_animation_end(param_1,param_2,&local_2c8,3,ppuVar7);
  uVar14 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
  if (puVar11 != puVar5) {
    local_2f8 = (double *)*puVar11;
    uStack_2f0 = (char *)puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_2f8);
  }
  FUN_140e60910(1);
  local_270 = 0x2c;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 0;
  local_178 = 0x3fb3333333333333;
  local_270 = 0x2d;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_22c = 0;
  local_238 = 0.4;
  local_270 = 0x2e;
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  dVar17 = local_238;
  if ((local_22c & 0xffffff) != 0) {
    dVar17 = (double)FUN_140e4b060(&local_238);
  }
  uStack_2cc = 0;
  local_2d8 = (double *)((ulonglong)dVar17 ^ 0x8000000000000000);
  uStack_2ac = *(uint *)((longlong)pdVar10 + 0xc);
  uStack_2b0 = *(undefined4 *)(pdVar10 + 1);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
    local_2b8 = (double *)*pdVar10;
  }
  else {
    FUN_1400419b0(&local_2b8,pdVar10);
  }
  FUN_140042560(&local_2b8,&local_178);
  dVar17 = local_238;
  if ((local_22c & 0xffffff) != 0) {
    dVar17 = (double)FUN_140e4b060(&local_238);
  }
  if ((uStack_2cc & 0xffffff) == 0) {
    uVar15 = SUB84(local_2d8,0);
  }
  else {
    uVar15 = FUN_140e4b060(&local_2d8);
  }
  if ((uStack_2ac & 0xffffff) == 0) {
    uVar2 = SUB84(local_2b8,0);
  }
  else {
    uVar2 = FUN_140e4b060(&local_2b8);
  }
  dVar17 = (double)FUN_140e78ec0(uVar2,uVar15,dVar17);
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_23c = 0;
  local_248 = (double *)(dVar17 + 1.0);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_270 = 0x2f;
  uStack_2d0 = local_240;
  uStack_2cc = local_23c;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) == 0) {
    local_2d8 = local_248;
  }
  else {
    FUN_1400419b0(&local_2d8,&local_248);
  }
  uStack_2ac = 7;
  local_2b8 = (double *)CONCAT44(local_2b8._4_4_,1);
  FUN_1400462a0(&local_2d8,&local_2b8);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  uStack_2f0 = (char *)((ulonglong)uStack_2f0 & 0xffffffff);
  local_2f8 = (double *)0x3ff0000000000000;
  FUN_1400462a0(&local_2f8,&local_2d8);
  local_2b8 = local_2f8;
  uStack_2b0 = (uint)uStack_2f0;
  uStack_2ac = uStack_2f0._4_4_;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_2b8);
  if ((1 << ((byte)((ulonglong)uStack_2f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_270 = 0x30;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if (pdVar10 != &local_228) {
    local_2f8 = (double *)*pdVar10;
    uStack_2f0 = (char *)pdVar10[1];
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_2f8);
  }
  local_128 = &local_228;
  uStack_2f0 = (char *)((ulonglong)uStack_2f0 & 0xffffffff);
  local_2f8 = (double *)0x3fd0000000000000;
  local_120 = &local_248;
  FUN_140042560(&local_2f8,uVar3);
  local_2d8 = local_2f8;
  uStack_2d0 = (uint)uStack_2f0;
  uStack_2cc = uStack_2f0._4_4_;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_2d8);
  if ((1 << ((byte)((ulonglong)uStack_2f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_118 = local_208;
  FUN_140e609c0(param_1);
  uVar9 = CONCAT44(uVar14,DAT_141a00c58);
  puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,3,uVar9,&local_128);
  uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar11 != puVar5) {
    local_2f8 = (double *)*puVar11;
    uStack_2f0 = (char *)puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_2f8);
  }
  FUN_140e60910(1);
  local_270 = 0x31;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if (pdVar4 != &local_228) {
    local_2f8 = (double *)*pdVar4;
    uStack_2f0 = (char *)pdVar4[1];
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_2f8);
  }
  local_128 = &local_228;
  local_120 = (undefined8 **)&local_c8;
  uStack_2f0 = (char *)((ulonglong)uStack_2f0 & 0xffffffff);
  local_2f8 = (double *)0x3fd0000000000000;
  FUN_140042560(&local_2f8,uVar3);
  local_2d8 = local_2f8;
  uStack_2d0 = (uint)uStack_2f0;
  uStack_2cc = uStack_2f0._4_4_;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_2d8);
  if ((1 << ((byte)((ulonglong)uStack_2f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_118 = local_208;
  FUN_140e609c0(param_1);
  ppuVar7 = &local_128;
  uVar16 = CONCAT44(uVar14,DAT_141a00c58);
  puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,3,uVar16,ppuVar7);
  if (puVar11 != puVar5) {
    local_2f8 = (double *)*puVar11;
    uStack_2f0 = (char *)puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_2f8);
  }
  FUN_140e60910(1);
  local_270 = 0x33;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd428);
  local_2b8 = pdVar6;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd5d8);
  pdVar12 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  uStack_2f0._4_4_ = 6;
  uVar23 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_2f8 = (double *)param_1;
  FUN_140e87440(&local_2f8,DAT_141a0a728,0x80000000,&local_a8,uVar16,uVar23);
  if ((1 << ((byte)uStack_2f0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  uStack_2f0._4_4_ = 6;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_2f8 = (double *)param_1;
  FUN_140e87440(&local_2f8,DAT_141a0cfc8,0x80000000,&local_b8,uVar16,uVar23);
  if ((1 << ((byte)uStack_2f0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  uStack_2f0._4_4_ = 6;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_2f8 = (double *)param_1;
  FUN_140e87440(&local_2f8,DAT_1419fe0e8,0x80000000,&local_258,uVar16,uVar23);
  if ((1 << ((byte)uStack_2f0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  uStack_2f0._4_4_ = 6;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_2f8 = (double *)param_1;
  FUN_140e87440(&local_2f8,DAT_1419fe158,0x80000000,&local_268,uVar16,uVar23);
  if ((1 << ((byte)uStack_2f0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  uStack_2f0._4_4_ = 6;
  uVar23 = uVar23 & 0xffffffffffffff00;
  local_2f8 = (double *)param_1;
  FUN_140e87440(&local_2f8,DAT_141a0f9d8,0x80000000,&local_d8,uVar16 & 0xffffffffffffff00,uVar23);
  if ((1 << ((byte)uStack_2f0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = (double *)local_a8;
  uStack_2f0 = (char *)CONCAT44(uStack_9c,uStack_a0);
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_2f8);
  local_128 = &local_228;
  local_2f8 = (double *)local_b8;
  uStack_2f0 = (char *)CONCAT44(uStack_ac,uStack_b0);
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_2f8);
  local_120 = (undefined8 **)&local_218;
  uStack_2cc = local_24c;
  uStack_2d0 = local_250;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
    local_2d8 = local_258;
  }
  else {
    FUN_1400419b0(&local_2d8,&local_258);
  }
  FUN_1400460e0(&local_2d8,pdVar6);
  local_2f8 = local_2d8;
  uStack_2f0 = (char *)CONCAT44(uStack_2cc,uStack_2d0);
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_2f8);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_118 = local_208;
  uStack_2cc = local_25c;
  uStack_2d0 = local_260;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
    local_2d8 = local_268;
  }
  else {
    FUN_1400419b0(&local_2d8,&local_268);
  }
  FUN_1400460e0(&local_2d8,uVar3);
  local_2f8 = local_2d8;
  uStack_2f0 = (char *)CONCAT44(uStack_2cc,uStack_2d0);
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_2f8);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_110 = &local_1f8;
  uStack_2cc = *(undefined4 *)((longlong)pdVar10 + 0xc);
  uStack_2d0 = *(undefined4 *)(pdVar10 + 1);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) == 0) {
    local_2d8 = (double *)*pdVar10;
  }
  else {
    FUN_1400419b0(&local_2d8,pdVar10);
  }
  FUN_140042560(&local_2d8,pdVar12);
  local_2f8 = local_2d8;
  uStack_2f0 = (char *)CONCAT44(uStack_2cc,uStack_2d0);
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_2f8);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_108 = local_1e8;
  if (pdVar4 != &local_1d8) {
    local_2f8 = (double *)*pdVar4;
    uStack_2f0 = (char *)pdVar4[1];
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_2f8);
  }
  pdVar10 = local_2a8;
  local_100 = &local_1d8;
  if (local_2a8 != &local_1c8) {
    local_2f8 = (double *)*local_2a8;
    uStack_2f0 = (char *)local_2a8[1];
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_2f8);
  }
  local_f8 = &local_1c8;
  local_2f8 = (double *)local_d8;
  uStack_2f0 = (char *)CONCAT44(uStack_cc,uStack_d0);
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_2f8);
  local_f0 = local_1b8;
  local_2f8 = (double *)CONCAT44(uRam00000001419ead24,_DAT_1419ead20);
  uStack_2f0 = (char *)CONCAT44(uRam00000001419ead2c,uRam00000001419ead28);
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_2f8);
  local_e8 = local_1a8;
  ppuVar7 = &local_128;
  FUN_1403ae470(param_1,param_2,&local_2c8,9,ppuVar7);
  local_270 = 0x34;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a099b8);
  uStack_2f0._4_4_ = 6;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar16 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  local_2f8 = (double *)param_1;
  FUN_140e87440(&local_2f8,DAT_1419fe0e8,0x80000000,&local_258,uVar16,uVar23);
  if ((1 << ((byte)uStack_2f0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  uStack_2f0._4_4_ = 6;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_2f8 = (double *)param_1;
  FUN_140e87440(&local_2f8,DAT_1419fe158,0x80000000,&local_268,uVar16,uVar23);
  if ((1 << ((byte)uStack_2f0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  uStack_2f0._4_4_ = 6;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_2f8 = (double *)param_1;
  FUN_140e87440(&local_2f8,DAT_141a0f9d8,0x80000000,&local_d8,uVar16,uVar23);
  uVar14 = (undefined4)(uVar16 >> 0x20);
  uVar15 = (undefined4)(uVar23 >> 0x20);
  if ((1 << ((byte)uStack_2f0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  uStack_2cc = local_25c;
  uStack_2d0 = local_260;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
    local_2d8 = local_268;
  }
  else {
    FUN_1400419b0(&local_2d8,&local_268);
  }
  FUN_1400460e0(&local_2d8,uVar3);
  local_29c = local_24c;
  local_2a0 = local_250;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
    local_2a8 = local_258;
  }
  else {
    FUN_1400419b0(&local_2a8,&local_258);
  }
  FUN_1400460e0(&local_2a8,local_2b8);
  uStack_2f0 = (char *)CONCAT44(0xf,(uint)uStack_2f0);
  local_2f8 = (double *)0x100000100000293;
  uVar2 = FUN_140e4a8b0(&local_d8);
  if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
    dVar17 = *pdVar10;
  }
  else {
    dVar17 = (double)FUN_140e4b060(pdVar10);
  }
  if ((*(uint *)((longlong)pdVar12 + 0xc) & 0xffffff) == 0) {
    dVar18 = *pdVar12;
  }
  else {
    dVar18 = (double)FUN_140e4b060(pdVar12);
  }
  pdVar10 = local_2d8;
  if ((uStack_2cc & 0xffffff) != 0) {
    pdVar10 = (double *)FUN_140e4b060(&local_2d8);
  }
  pdVar6 = local_2a8;
  if ((local_29c & 0xffffff) != 0) {
    pdVar6 = (double *)FUN_140e4b060(&local_2a8);
  }
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar19 = *pdVar4;
  }
  else {
    dVar19 = (double)FUN_140e4b060(pdVar4);
  }
  dVar20 = (double)local_2f8;
  if (((ulonglong)uStack_2f0 & 0xffffff00000000) != 0) {
    dVar20 = (double)FUN_140e4b060(&local_2f8);
  }
  uVar3 = CONCAT44(uVar14,(float)(double)pdVar10);
  FUN_140ec5dd0(param_1,(int)dVar20,(float)dVar19,(float)(double)pdVar6,uVar3,
                CONCAT44(uVar15,(float)dVar18),0x3f800000,(float)dVar17,uVar2,0x3f800000);
  uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((1 << ((byte)((ulonglong)uStack_2f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_270 = 0x36;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  local_290 = 0;
  local_288 = 0;
  local_284 = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09808);
  uVar9 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a099b8);
  uStack_2f0 = (char *)CONCAT44(0xf,(uint)uStack_2f0);
  local_2f8 = (double *)0x100000100000293;
  local_2d8 = (double *)0x100000100000293;
  uStack_2d0 = (uint)uStack_2f0;
  uStack_2cc = 0xf;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_2d8);
  local_128 = &local_228;
  local_2f8 = (double *)CONCAT44(uRam0000000141dc6f34,_DAT_141dc6f30);
  uStack_2f0 = (char *)CONCAT44(uRam0000000141dc6f3c,uRam0000000141dc6f38);
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_2f8);
  local_120 = (undefined8 **)&local_218;
  uVar22 = CONCAT44(uVar14,DAT_141a0a0d8);
  uVar13 = FUN_140e634e0(param_1,param_2,&local_290,1,uVar22,&local_120);
  ppuVar7 = &local_128;
  uVar16 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),DAT_141a0a068);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,1,uVar16,ppuVar7);
  uStack_2ac = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_2b0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
    local_2b8 = (double *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_2b8,puVar5);
  }
  FUN_140046500(&local_2b8,uVar13);
  uStack_2cc = uStack_2ac;
  uStack_2d0 = uStack_2b0;
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
    local_2d8 = local_2b8;
  }
  else {
    FUN_1400419b0(&local_2d8,&local_2b8);
  }
  FUN_140042560(&local_2d8,uVar3);
  FUN_1400460e0(uVar9,&local_2d8);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_270 = 0x38;
  uStack_2f0._4_4_ = 6;
  local_2f8 = (double *)param_1;
  FUN_140e87440(&local_2f8,DAT_141a0a7e8,0,&local_188,uVar16 & 0xffffffffffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_2f0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  uStack_2f0 = (char *)(ulonglong)(uint)uStack_2f0;
  local_2f8 = (double *)&DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(&local_188,&local_2f8,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)uStack_2f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if (iVar1 != 0) {
    local_270 = 0x39;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
    (**(code **)(*param_1 + 8))(param_1,DAT_1419fd428);
    (**(code **)(*param_1 + 8))(param_1,DAT_1419fd5d8);
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
    uStack_2f0 = "gml_Script_pal_swap_reset";
    local_2f8 = (double *)DAT_141dc7a50;
    DAT_141dc7a50 = &local_2f8;
    local_2bc = 5;
    local_2c8 = 0;
    local_2e8 = 0x71;
    iVar1 = FUN_140ec9d80();
    if (iVar1 != -1) {
      local_2e8 = 0x71;
      FUN_140ec9dc0();
    }
    DAT_141dc7a50 = local_2f8;
  }
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_298 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(&local_228,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_280;
  return param_3;
}

