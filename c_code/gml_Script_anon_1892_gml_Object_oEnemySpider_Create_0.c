// gml_Script_anon_1892_gml_Object_oEnemySpider_Create_0 @ 0x140a7f6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1892_gml_Object_oEnemySpider_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar14;
  ulonglong uVar15;
  ulonglong in_stack_fffffffffffffd00;
  undefined1 **ppuVar16;
  longlong *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  double local_2e8;
  uint local_2dc;
  double local_2d8;
  uint local_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  char *local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined4 local_284;
  undefined8 local_280;
  undefined4 local_274;
  undefined8 local_270;
  undefined4 local_264;
  longlong *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong *local_218;
  undefined4 local_20c;
  undefined1 local_208 [12];
  undefined4 local_1fc;
  undefined1 local_1f8 [12];
  undefined4 local_1ec;
  undefined1 local_1e8 [12];
  undefined4 local_1dc;
  undefined1 local_1d8 [12];
  undefined4 local_1cc;
  undefined1 local_1c8 [12];
  undefined4 local_1bc;
  undefined1 local_1b8 [12];
  undefined4 local_1ac;
  undefined1 local_1a8 [12];
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined8 *local_148;
  double *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  longlong local_f8;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined1 local_c8 [16];
  longlong local_b8;
  
  local_res18 = 0;
  local_2a0 = "gml_Script_anon@154@gml_Object_oEnemySpider_Create_0";
  local_2a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2a8;
  local_298 = 7;
  pcVar14 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_208,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0.0;
  uStack_22c = 0xffffff;
  local_238 = 0;
  uStack_23c = 0xffffff;
  local_248 = (longlong *)0x0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_264 = 0xffffff;
  local_270 = 0;
  local_274 = 0xffffff;
  local_280 = 0;
  local_284 = 0xffffff;
  local_290 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0.0;
  local_2ac = 0;
  local_2b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  iVar9 = 8;
  local_298 = 8;
  pdVar4 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06628);
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar4;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar4);
  }
  uVar8 = (ulonglong)dVar12;
  uVar7 = (uint)uVar8;
  while (0 < (int)uVar7) {
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
    local_298 = 9;
    uVar5 = FUN_140e79480(0);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_17c = 0;
    local_298 = 10;
    local_188 = uVar5;
    dVar12 = (double)FUN_140e794b0(0,0);
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_2dc = 0;
    local_298 = 0xb;
    local_2e8 = dVar12;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    local_20c = 6;
    local_218 = local_res8;
    in_stack_fffffffffffffd00 = in_stack_fffffffffffffd00 & 0xffffffffffffff00;
    uVar15 = (ulonglong)pcVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_238,uVar15,in_stack_fffffffffffffd00);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uStack_2ec = 6;
    local_2f8 = local_res8;
    in_stack_fffffffffffffd00 = in_stack_fffffffffffffd00 & 0xffffffffffffff00;
    FUN_140e87440(&local_2f8,DAT_1419fe158,0x80000000,&local_248,uVar15 & 0xffffffffffffff00,
                  in_stack_fffffffffffffd00);
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    uVar10 = FUN_140e794b0(0,0);
    uStack_21c = uStack_22c;
    uStack_220 = uStack_230;
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
      local_228 = local_238;
    }
    else {
      FUN_1400419b0(&local_228,&local_238);
    }
    local_res18 = 1;
    FUN_140162c50(&local_228,uVar10);
    local_2c8 = (longlong *)local_228;
    uStack_2c0 = uStack_220;
    uStack_2bc = uStack_21c;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_2c8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_158 = local_208;
    uVar10 = FUN_140e794b0(0,0);
    uStack_24c = uStack_23c;
    uStack_250 = uStack_240;
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
      local_258 = local_248;
    }
    else {
      FUN_1400419b0(&local_258,&local_248);
    }
    local_res18 = 2;
    FUN_140162c50(&local_258,uVar10);
    local_2c8 = local_258;
    uStack_2c0 = uStack_250;
    uStack_2bc = uStack_24c;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_2c8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_150 = local_1f8;
    local_148 = &local_188;
    local_140 = &local_2e8;
    local_2c8 = (longlong *)CONCAT44(uRam00000001419eb134,_DAT_1419eb130);
    uStack_2c0 = uRam00000001419eb138;
    uStack_2bc = uRam00000001419eb13c;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_2c8);
    local_138 = local_1c8;
    local_2c8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2c0 = DAT_1419df7b8;
    uStack_2bc = DAT_1419df7bc;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_2c8);
    local_130 = local_1b8;
    local_2c8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2c0 = DAT_1419df7b8;
    uStack_2bc = DAT_1419df7bc;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_2c8);
    local_128 = local_1a8;
    pcVar14 = (code *)&local_158;
    gml_Script_get_blood_col(local_res8,local_res10,&local_2b8,7,pcVar14);
  }
  local_298 = 0xe;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  uStack_2ec = 6;
  local_2f8 = local_res8;
  in_stack_fffffffffffffd00 = in_stack_fffffffffffffd00 & 0xffffffffffffff00;
  uVar8 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  FUN_140e87440(&local_2f8,DAT_1419fe0e8,0x80000000,&local_238,uVar8,in_stack_fffffffffffffd00);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  uStack_2ec = 6;
  local_2f8 = local_res8;
  in_stack_fffffffffffffd00 = in_stack_fffffffffffffd00 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_2f8,DAT_1419fe158,0x80000000,&local_248,uVar8,in_stack_fffffffffffffd00);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  uStack_2ec = 6;
  local_2f8 = local_res8;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_2f8,DAT_141a1b910,0x80000000,&local_198,uVar8,
                in_stack_fffffffffffffd00 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar8 >> 0x20);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2c8 = (longlong *)local_238;
  uStack_2c0 = uStack_230;
  uStack_2bc = uStack_22c;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_2c8);
  local_158 = local_208;
  local_2c8 = local_248;
  uStack_2c0 = uStack_240;
  uStack_2bc = uStack_23c;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_2c8);
  local_150 = local_1f8;
  local_2c8 = (longlong *)local_198;
  uStack_2c0 = uStack_190;
  uStack_2bc = uStack_18c;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_2c8);
  local_148 = (undefined8 *)local_1e8;
  uStack_2ec = 0xf;
  local_2f8 = (longlong *)0x100000000000023;
  local_2c8 = (longlong *)0x100000000000023;
  uStack_2c0 = uStack_2f0;
  uStack_2bc = 0xf;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_2c8);
  local_140 = (double *)local_1d8;
  ppuVar16 = &local_158;
  uVar8 = CONCAT44(uVar10,DAT_141a0a7c8);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2b8,4,uVar8,ppuVar16);
  iVar2 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,uVar5);
  if (0 < iVar2) {
    do {
      local_298 = 0x10;
      uStack_2ec = 0xf;
      local_2f8 = (longlong *)0x1000001000001c7;
      local_2c8 = (longlong *)0x1000001000001c7;
      uStack_2c0 = uStack_2f0;
      uStack_2bc = 0xf;
      if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_270);
      }
      FUN_140041b80(&local_270,&local_2c8);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_270);
      local_298 = 0x11;
      if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_280);
      }
      local_274 = 0;
      local_280 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_280);
      local_298 = 0x12;
      if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_290);
      }
      local_284 = 0;
      local_290 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_290);
      local_298 = 0x13;
      dVar12 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2cc = 0;
      local_298 = 0x14;
      local_2d8 = dVar12;
      dVar12 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      local_2dc = 0;
      local_298 = 0x15;
      local_2e8 = dVar12;
      pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      dVar12 = local_2d8;
      if ((local_2cc & 0xffffff) != 0) {
        dVar12 = (double)FUN_140e4b060(&local_2d8);
      }
      dVar13 = local_2e8;
      if ((local_2dc & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_2e8);
      }
      fVar11 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
      *pdVar4 = (double)fVar11;
      local_298 = 0x16;
      pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      dVar12 = local_2d8;
      if ((local_2cc & 0xffffff) != 0) {
        dVar12 = (double)FUN_140e4b060(&local_2d8);
      }
      dVar13 = local_2e8;
      if ((local_2dc & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_2e8);
      }
      fVar11 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
      *pdVar4 = (double)fVar11;
      cVar1 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_e8,&local_res8,&local_res10);
  local_298 = 0x19;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  uStack_2ec = 6;
  local_2f8 = local_res8;
  uVar15 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_2f8,DAT_1419fe0e8,0x80000000,&local_238,uVar8,uVar15);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  uStack_2ec = 6;
  local_2f8 = local_res8;
  uVar15 = uVar15 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_2f8,DAT_1419fe158,0x80000000,&local_248,uVar8,uVar15);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  uStack_2ec = 6;
  local_2f8 = local_res8;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_2f8,DAT_141a1b910,0x80000000,&local_198,uVar8,uVar15 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar8 >> 0x20);
  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2c8 = (longlong *)local_238;
  uStack_2c0 = uStack_230;
  uStack_2bc = uStack_22c;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_2c8);
  local_158 = local_208;
  local_2c8 = local_248;
  uStack_2c0 = uStack_240;
  uStack_2bc = uStack_23c;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_2c8);
  local_150 = local_1f8;
  local_2c8 = (longlong *)local_198;
  uStack_2c0 = uStack_190;
  uStack_2bc = uStack_18c;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_2c8);
  local_148 = (undefined8 *)local_1e8;
  uStack_2ec = 0xf;
  local_2f8 = (longlong *)0x100000000000023;
  local_2c8 = (longlong *)0x100000000000023;
  uStack_2c0 = uStack_2f0;
  uStack_2bc = 0xf;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_2c8);
  local_140 = (double *)local_1d8;
  ppuVar16 = &local_158;
  uVar8 = CONCAT44(uVar10,DAT_141a0a7c8);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2b8,4,uVar8,ppuVar16);
  iVar2 = FUN_140e63cb0(local_108,&local_res8,&local_res10,uVar5);
  if (0 < iVar2) {
    do {
      local_298 = 0x1b;
      uStack_2ec = 0xf;
      local_2f8 = (longlong *)0x1000001000001c7;
      local_2c8 = (longlong *)0x1000001000001c7;
      uStack_2c0 = uStack_2f0;
      uStack_2bc = 0xf;
      if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_270);
      }
      FUN_140041b80(&local_270,&local_2c8);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_270);
      local_298 = 0x1c;
      if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_280);
      }
      local_274 = 0;
      local_280 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_280);
      local_298 = 0x1d;
      if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_290);
      }
      local_284 = 0;
      local_290 = 0x4000000000000000;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_290);
      local_298 = 0x1e;
      dVar12 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2cc = 0;
      local_298 = 0x1f;
      local_2d8 = dVar12;
      dVar12 = (double)FUN_140e794b0(0,0);
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      local_2dc = 0;
      local_298 = 0x20;
      local_2e8 = dVar12;
      pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      dVar12 = local_2d8;
      if ((local_2cc & 0xffffff) != 0) {
        dVar12 = (double)FUN_140e4b060(&local_2d8);
      }
      dVar13 = local_2e8;
      if ((local_2dc & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_2e8);
      }
      fVar11 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
      *pdVar4 = (double)fVar11;
      local_298 = 0x21;
      pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      dVar12 = local_2d8;
      if ((local_2cc & 0xffffff) != 0) {
        dVar12 = (double)FUN_140e4b060(&local_2d8);
      }
      dVar13 = local_2e8;
      if ((local_2dc & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_2e8);
      }
      fVar11 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
      *pdVar4 = (double)fVar11;
      cVar1 = FUN_140e643f0(local_108,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_108,&local_res8,&local_res10);
  iVar2 = 2;
  do {
    iVar2 = iVar2 + -1;
    local_298 = 0x25;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    uStack_2ec = 6;
    local_2f8 = local_res8;
    uVar15 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_2f8,DAT_1419fe0e8,0x80000000,&local_238,uVar8,uVar15);
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_20c = 6;
    local_218 = local_res8;
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_248,uVar8,uVar15);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uStack_24c = 6;
    local_258 = local_res8;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_258,DAT_141a1b910,0x80000000,&local_198,uVar8,uVar15 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_2c8 = (longlong *)local_238;
    uStack_2c0 = uStack_230;
    uStack_2bc = uStack_22c;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_2c8);
    local_158 = local_208;
    local_2c8 = local_248;
    uStack_2c0 = uStack_240;
    uStack_2bc = uStack_23c;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_2c8);
    local_150 = local_1f8;
    local_2c8 = (longlong *)local_198;
    uStack_2c0 = uStack_190;
    uStack_2bc = uStack_18c;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_2c8);
    local_148 = (undefined8 *)local_1e8;
    uStack_21c = 0xf;
    local_228 = 0x100000000000023;
    local_2c8 = (longlong *)0x100000000000023;
    uStack_2c0 = uStack_220;
    uStack_2bc = 0xf;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_2c8);
    local_140 = (double *)local_1d8;
    ppuVar16 = &local_158;
    uVar8 = CONCAT44(uVar10,DAT_141a0a7c8);
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2b8,4,uVar8,ppuVar16);
    iVar3 = FUN_140e63cb0(&local_178,&local_res8,&local_res10,uVar5);
    if (0 < iVar3) {
      do {
        local_298 = 0x27;
        uStack_10c = 0xf;
        local_118 = 0x1000001000001c7;
        local_2c8 = (longlong *)0x1000001000001c7;
        uStack_2c0 = uStack_110;
        uStack_2bc = 0xf;
        if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_270);
        }
        FUN_140041b80(&local_270,&local_2c8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_270);
        local_298 = 0x28;
        if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_280);
        }
        local_274 = 0;
        local_280 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_280);
        local_298 = 0x29;
        if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_290);
        }
        local_284 = 0;
        local_290 = 0x3ff0000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_290);
        local_298 = 0x2a;
        dVar12 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2cc = 0;
        local_298 = 0x2b;
        local_2d8 = dVar12;
        dVar12 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        local_2dc = 0;
        local_298 = 0x2c;
        local_2e8 = dVar12;
        pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar12 = local_2d8;
        if ((local_2cc & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_2d8);
        }
        dVar13 = local_2e8;
        if ((local_2dc & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_2e8);
        }
        fVar11 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
        *pdVar4 = (double)fVar11;
        local_298 = 0x2d;
        pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar12 = local_2d8;
        if ((local_2cc & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_2d8);
        }
        dVar13 = local_2e8;
        if ((local_2dc & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_2e8);
        }
        fVar11 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
        *pdVar4 = (double)fVar11;
        cVar1 = FUN_140e643f0(&local_178,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(&local_178,&local_res8,&local_res10);
    if (local_168 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar2);
  do {
    iVar9 = iVar9 + -1;
    local_298 = 0x32;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    uStack_2ec = 6;
    local_2f8 = local_res8;
    uVar15 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_2f8,DAT_1419fe0e8,0x80000000,&local_238,uVar8,uVar15);
    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_20c = 6;
    local_218 = local_res8;
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_248,uVar8,uVar15);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uStack_24c = 6;
    local_258 = local_res8;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_258,DAT_141a1b910,0x80000000,&local_198,uVar8,uVar15 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_178 = (undefined4)local_238;
    uStack_174 = local_238._4_4_;
    uStack_170 = uStack_230;
    uStack_16c = uStack_22c;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_178);
    local_158 = local_208;
    local_178 = (undefined4)local_248;
    uStack_174 = local_248._4_4_;
    uStack_170 = uStack_240;
    uStack_16c = uStack_23c;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_178);
    local_150 = local_1f8;
    local_178 = (undefined4)local_198;
    uStack_174 = local_198._4_4_;
    uStack_170 = uStack_190;
    uStack_16c = uStack_18c;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_178);
    local_148 = (undefined8 *)local_1e8;
    uStack_10c = 0xf;
    local_118 = 0x100000000000023;
    local_178 = 0x23;
    uStack_174 = 0x1000000;
    uStack_170 = uStack_110;
    uStack_16c = 0xf;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_178);
    local_140 = (double *)local_1d8;
    ppuVar16 = &local_158;
    uVar8 = CONCAT44(uVar10,DAT_141a0a7c8);
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2b8,4,uVar8,ppuVar16);
    iVar2 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar5);
    if (0 < iVar2) {
      do {
        local_298 = 0x34;
        uStack_2bc = 0xf;
        local_2c8 = (longlong *)0x10000010000014c;
        local_178 = 0x14c;
        uStack_174 = 0x1000001;
        uStack_170 = uStack_2c0;
        uStack_16c = 0xf;
        if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_270);
        }
        FUN_140041b80(&local_270,&local_178);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_270);
        local_298 = 0x35;
        if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_280);
        }
        local_274 = 0;
        local_280 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_280);
        local_298 = 0x36;
        uVar5 = FUN_140e78f00(2);
        if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_290);
        }
        local_284 = 0;
        local_290 = uVar5;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_290);
        local_298 = 0x37;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04c38);
        uStack_21c = 0xd;
        local_228 = 0x3ff0000000000000;
        if (&local_228 != puVar6) {
          local_178 = 0;
          uStack_174 = 0x3ff00000;
          uStack_170 = uStack_220;
          uStack_16c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_178);
        }
        local_298 = 0x38;
        dVar12 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2cc = 0;
        local_298 = 0x39;
        local_2d8 = dVar12;
        dVar12 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        local_2dc = 0;
        local_298 = 0x3a;
        local_2e8 = dVar12;
        pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar12 = local_2d8;
        if ((local_2cc & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_2d8);
        }
        dVar13 = local_2e8;
        if ((local_2dc & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_2e8);
        }
        fVar11 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
        *pdVar4 = (double)fVar11;
        local_298 = 0x3b;
        pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar12 = local_2d8;
        if ((local_2cc & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_2d8);
        }
        dVar13 = local_2e8;
        if ((local_2dc & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_2e8);
        }
        fVar11 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
        *pdVar4 = (double)fVar11;
        cVar1 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_c8,&local_res8,&local_res10);
    if (local_b8 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar9);
  if (local_f8 != 0) {
    FUN_140e4cd60();
    local_f8 = 0;
  }
  if (local_d8 != 0) {
    FUN_140e4cd60();
    local_d8 = 0;
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_280);
  }
  if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(local_208,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2a8;
  return param_3;
}

