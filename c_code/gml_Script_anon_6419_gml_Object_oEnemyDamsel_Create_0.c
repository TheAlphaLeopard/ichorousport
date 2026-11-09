// gml_Script_anon_6419_gml_Object_oEnemyDamsel_Create_0 @ 0x14097d410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_6419_gml_Object_oEnemyDamsel_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  double *pdVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar14;
  ulonglong uVar15;
  undefined4 uVar17;
  undefined1 **ppuVar16;
  ulonglong in_stack_fffffffffffffcf0;
  ulonglong uVar18;
  undefined8 local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  longlong *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  char *local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined8 local_290;
  undefined4 local_284;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  double local_268;
  uint local_25c;
  double local_258;
  uint local_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined4 local_1d8 [3];
  byte local_1cc;
  undefined4 local_1c8 [3];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 *local_158;
  undefined8 *local_150;
  undefined4 *local_148;
  undefined4 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  uint local_100 [2];
  undefined8 *local_f8;
  undefined1 local_f0 [16];
  longlong local_e0;
  undefined1 local_d0 [16];
  longlong local_c0;
  
  local_2b0 = "gml_Script_anon@4946@gml_Object_oEnemyDamsel_Create_0";
  local_2b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2b8;
  local_2a8 = 0xce;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_100,param_4,1,param_5);
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_1f8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_284 = 0xffffff;
  local_290 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_294 = 0xffffff;
  local_2a0 = 0;
  uStack_23c = 0xffffff;
  local_248 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_24c = 0xffffff;
  local_258 = 0.0;
  local_25c = 0xffffff;
  local_268 = 0.0;
  local_2cc = 0;
  local_2d8 = 0;
  local_104 = 0;
  local_110 = 0;
  local_114 = 0;
  local_120 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2a8 = 0xce;
  pdVar10 = (double *)&DAT_1419df7b0;
  uVar9 = (ulonglong)local_100[0];
  if ((int)local_100[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_f8;
  }
  iVar4 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_2a8 = 0xce;
    if ((int)local_100[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_f8;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0x4056800000000000;
  }
  local_2a8 = 0xcf;
  pplVar5 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f0868);
  uStack_2ec = 0xd;
  local_2f8 = (longlong *)0x0;
  if (&local_2f8 != pplVar5) {
    local_2e8 = 0;
    uStack_2e0 = uStack_2f0;
    uStack_2dc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar5);
    }
    FUN_140041b80(pplVar5,&local_2e8);
  }
  local_2a8 = 0xd0;
  uStack_2ec = 0xf;
  local_2f8 = (longlong *)0x1000001000000d6;
  local_2e8 = 0x1000001000000d6;
  uStack_2e0 = uStack_2f0;
  uStack_2dc = 0xf;
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  FUN_140041b80(&local_290,&local_2e8);
  FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_290);
  local_2a8 = 0xd1;
  uStack_2ec = 0xf;
  local_2f8 = (longlong *)0x1000001000000d6;
  local_2e8 = 0x1000001000000d6;
  uStack_2e0 = uStack_2f0;
  uStack_2dc = 0xf;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_2e8);
  FUN_140e86fa0(local_res8,DAT_1419f5c58,0x80000000,&local_178);
  local_2a8 = 0xd2;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a572d0);
  uStack_2ec = 0xf;
  local_2f8 = (longlong *)0x1000001000000d6;
  local_2e8 = 0x1000001000000d6;
  uStack_2e0 = uStack_2f0;
  uStack_2dc = 0xf;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_2e8);
  FUN_140e87930(uVar6,DAT_141a0a9f8,0x80000000,&local_188);
  local_2a8 = 0xd4;
  uStack_2fc = 6;
  local_308 = local_res8;
  in_stack_fffffffffffffcf0 = in_stack_fffffffffffffcf0 & 0xffffffffffffff00;
  uVar15 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  FUN_140e87440(&local_308,DAT_141a0a788,0x80000000,&local_208,uVar15,in_stack_fffffffffffffcf0);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  uStack_26c = local_1fc;
  uStack_270 = local_200;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
    local_278 = local_208;
  }
  else {
    FUN_1400419b0(&local_278,&local_208);
  }
  uStack_2fc = 7;
  local_308 = (longlong *)CONCAT44(local_308._4_4_,4);
  FUN_1400460e0(&local_278,&local_308);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_2e8 = local_278;
  uStack_2e0 = uStack_270;
  uStack_2dc = uStack_26c;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_2e8);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_2a8 = 0xd5;
  if (0 < (int)local_100[0]) {
    pdVar10 = (double *)*local_f8;
  }
  if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar10;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar10);
  }
  fVar11 = (float)FUN_140e78f90(0x3f800000,(float)dVar12);
  uVar6 = FUN_140e79500(SUB84((double)fVar11,0));
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  local_294 = 0;
  local_2a8 = 0xd6;
  uStack_2fc = 0;
  local_308 = (longlong *)0x0;
  local_2a0 = uVar6;
  iVar4 = FUN_140e851f0(&local_2a0,&local_308,DAT_141955260,0);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if (iVar4 == 0) {
    local_2a8 = 0xd6;
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_2d8 = 0;
    local_2d0 = 0;
    local_2cc = 5;
    local_2e8 = CONCAT44(uRam00000001419ea6c4,_DAT_1419ea6c0);
    uStack_2e0 = uRam00000001419ea6c8;
    uStack_2dc = uRam00000001419ea6cc;
    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_2e8);
    local_158 = local_1f8;
    local_2e8 = CONCAT44(uRam00000001419ea684,_DAT_1419ea680);
    uStack_2e0 = uRam00000001419ea688;
    uStack_2dc = uRam00000001419ea68c;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_2e8);
    local_150 = (undefined8 *)local_1e8;
    puVar7 = (undefined8 *)FUN_140e78db0(&local_2d8,2,&local_158);
    if (puVar7 != &local_2a0) {
      local_2e8 = *puVar7;
      uStack_2e0 = *(undefined4 *)(puVar7 + 1);
      uStack_2dc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a0);
      }
      FUN_140041b80(&local_2a0,&local_2e8);
    }
  }
  local_2a8 = 0xd8;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2d8 = 0;
  local_2d0 = 0;
  local_2cc = 5;
  uStack_2fc = 6;
  local_308 = local_res8;
  in_stack_fffffffffffffcf0 = in_stack_fffffffffffffcf0 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_140e87440(&local_308,DAT_1419fe0e8,0x80000000,&local_248,uVar15,in_stack_fffffffffffffcf0);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  uStack_2fc = 6;
  local_308 = local_res8;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_140e87440(&local_308,DAT_141a1b910,0x80000000,&local_168,uVar15,
                in_stack_fffffffffffffcf0 & 0xffffffffffffff00);
  uVar17 = (undefined4)(uVar15 >> 0x20);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_2e8 = local_248;
  uStack_2e0 = uStack_240;
  uStack_2dc = uStack_23c;
  if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_2e8);
  local_158 = local_1f8;
  local_2e8 = local_168;
  uStack_2e0 = uStack_160;
  uStack_2dc = uStack_15c;
  local_150 = &local_238;
  if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_2e8);
  local_148 = local_1d8;
  uStack_2ec = 0xf;
  local_2f8 = (longlong *)0x100000000000023;
  local_2e8 = 0x100000000000023;
  uStack_2e0 = uStack_2f0;
  uStack_2dc = 0xf;
  if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_2e8);
  local_140 = local_1c8;
  ppuVar16 = &local_158;
  uVar15 = CONCAT44(uVar17,DAT_141a0a7c8);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2d8,4,uVar15,ppuVar16);
  iVar4 = FUN_140e63cb0(local_d0,&local_res8,&local_res10,uVar6);
  if (0 < iVar4) {
    do {
      local_2a8 = 0xda;
      uStack_2dc = 0xf;
      local_2e8 = 0x1000001000000d5;
      local_2c8 = 0xd5;
      uStack_2c4 = 0x1000001;
      uStack_2c0 = uStack_2e0;
      uStack_2bc = 0xf;
      if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_290);
      }
      FUN_140041b80(&local_290,&local_2c8);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_290);
      local_2a8 = 0xdb;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_20c = 0;
      local_218 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_218);
      local_2a8 = 0xdc;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_21c = 0;
      local_228 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_228);
      local_2a8 = 0xdd;
      plVar2 = (longlong *)FUN_140e794b0(0,0);
      uStack_26c = local_294;
      uStack_270 = local_298;
      if ((1 << ((byte)local_294 & 0x1f) & 0x46U) == 0) {
        local_278 = local_2a0;
      }
      else {
        FUN_1400419b0(&local_278,&local_2a0);
      }
      uStack_2ec = 0;
      local_2f8 = plVar2;
      FUN_140042560(&local_278,&local_2f8);
      if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      uStack_2fc = 0;
      local_308 = (longlong *)0x4056800000000000;
      FUN_1400462a0(&local_308,&local_278);
      local_2c8 = (undefined4)local_308;
      uStack_2c4 = local_308._4_4_;
      uStack_2c0 = uStack_300;
      uStack_2bc = uStack_2fc;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140041b80(&local_258,&local_2c8);
      if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_308);
      }
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_2a8 = 0xde;
      dVar12 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_25c = 0;
      local_2a8 = 0xdf;
      local_268 = dVar12;
      pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      dVar12 = local_258;
      if ((local_24c & 0xffffff) != 0) {
        dVar12 = (double)FUN_140e4b060(&local_258);
      }
      dVar13 = local_268;
      if ((local_25c & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_268);
      }
      fVar11 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar10);
      }
      *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
      *pdVar10 = (double)fVar11;
      local_2a8 = 0xe0;
      pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      dVar12 = local_258;
      if ((local_24c & 0xffffff) != 0) {
        dVar12 = (double)FUN_140e4b060(&local_258);
      }
      dVar13 = local_268;
      if ((local_25c & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_268);
      }
      fVar11 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar10);
      }
      *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
      *pdVar10 = (double)fVar11;
      cVar3 = FUN_140e643f0(local_d0,&local_res8,&local_res10);
    } while (cVar3 != '\0');
  }
  FUN_140e63970(local_d0,&local_res8,&local_res10);
  local_2a8 = 0xe3;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2d8 = 0;
  local_2d0 = 0;
  local_2cc = 5;
  uStack_2ec = 6;
  local_2f8 = local_res8;
  uVar18 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_2f8,DAT_1419fe0e8,0x80000000,&local_248,uVar15 & 0xffffffffffffff00,uVar18);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2c8 = (undefined4)local_248;
  uStack_2c4 = local_248._4_4_;
  uStack_2c0 = uStack_240;
  uStack_2bc = uStack_23c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_2c8);
  local_158 = local_1f8;
  local_150 = &local_238;
  puVar8 = (undefined4 *)FUN_140e8da20(&local_110,local_res8,2,&DAT_1419ea670,&DAT_1419ea640);
  if (puVar8 != local_1d8) {
    local_2c8 = *puVar8;
    uStack_2c4 = puVar8[1];
    uStack_2c0 = puVar8[2];
    uStack_2bc = puVar8[3];
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_2c8);
  }
  local_148 = local_1d8;
  puVar8 = (undefined4 *)FUN_140e8da20(&local_120,local_res8,2,&DAT_1419ea5c0,&DAT_1419ea600);
  if (puVar8 != local_1c8) {
    local_2c8 = *puVar8;
    uStack_2c4 = puVar8[1];
    uStack_2c0 = puVar8[2];
    uStack_2bc = puVar8[3];
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_2c8);
  }
  local_140 = local_1c8;
  local_2c8 = _DAT_1419ea600;
  uStack_2c4 = uRam00000001419ea604;
  uStack_2c0 = uRam00000001419ea608;
  uStack_2bc = uRam00000001419ea60c;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_2c8);
  local_138 = local_1b8;
  local_2c8 = (undefined4)DAT_1419df7b0;
  uStack_2c4 = DAT_1419df7b0._4_4_;
  uStack_2c0 = DAT_1419df7b8;
  uStack_2bc = DAT_1419df7bc;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_2c8);
  local_130 = local_1a8;
  local_2c8 = (undefined4)DAT_1419df7b0;
  uStack_2c4 = DAT_1419df7b0._4_4_;
  uStack_2c0 = DAT_1419df7b8;
  uStack_2bc = DAT_1419df7bc;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_2c8);
  local_128 = local_198;
  ppuVar16 = &local_158;
  gml_Script_get_blood_col(local_res8,local_res10,&local_2d8,7,ppuVar16);
  local_2a8 = 0xe5;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2d8 = 0;
  local_2d0 = 0;
  local_2cc = 5;
  uStack_2ec = 6;
  local_2f8 = local_res8;
  uVar15 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_2f8,DAT_1419fe0e8,0x80000000,&local_248,uVar15,uVar18 & 0xffffffffffffff00);
  uVar17 = (undefined4)(uVar15 >> 0x20);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2c8 = (undefined4)local_248;
  uStack_2c4 = local_248._4_4_;
  uStack_2c0 = uStack_240;
  uStack_2bc = uStack_23c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_2c8);
  local_158 = local_1f8;
  local_2c8 = _DAT_141dd8868;
  uStack_2c4 = uRam0000000141dd886c;
  uStack_2c0 = uRam0000000141dd8870;
  uStack_2bc = DAT_141dd8874;
  local_150 = &local_238;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_2c8);
  local_148 = local_1d8;
  uStack_2dc = 0xf;
  local_2e8 = 0x10000000000012d;
  local_2c8 = 0x12d;
  uStack_2c4 = 0x1000000;
  uStack_2c0 = uStack_2e0;
  uStack_2bc = 0xf;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_2c8);
  local_140 = local_1c8;
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2d8,4,CONCAT44(uVar17,DAT_141a0a7c8),
                        &local_158);
  iVar4 = FUN_140e63cb0(local_f0,&local_res8,&local_res10,uVar6);
  if (0 < iVar4) {
    do {
      local_2a8 = 0xe6;
      uStack_2dc = 0xf;
      local_2e8 = 0x100000100000062;
      local_2c8 = 0x62;
      uStack_2c4 = 0x1000001;
      uStack_2c0 = uStack_2e0;
      uStack_2bc = 0xf;
      if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_290);
      }
      FUN_140041b80(&local_290,&local_2c8);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_290);
      cVar3 = FUN_140e643f0(local_f0,&local_res8,&local_res10);
    } while (cVar3 != '\0');
  }
  FUN_140e63970(local_f0,&local_res8,&local_res10);
  if (local_e0 != 0) {
    FUN_140e4cd60();
    local_e0 = 0;
  }
  if (local_c0 != 0) {
    FUN_140e4cd60();
    local_c0 = 0;
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  _eh_vector_destructor_iterator_(local_1f8,0x10,7,FUN_140041b30);
  if (0 < (int)local_100[0]) {
    puVar7 = local_f8;
    do {
      puVar1 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_f8);
  DAT_141dc7a50 = (undefined8 *)local_2b8;
  return param_3;
}

