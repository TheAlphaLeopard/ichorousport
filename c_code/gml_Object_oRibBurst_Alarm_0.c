// gml_Object_oRibBurst_Alarm_0 @ 0x140cab430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oRibBurst_Alarm_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  longlong **pplVar8;
  ulonglong uVar9;
  double *pdVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  byte bVar15;
  int iVar16;
  float fVar17;
  undefined4 uVar18;
  longlong *plVar19;
  longlong *plVar20;
  double dVar21;
  double dVar22;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar23;
  undefined4 **ppuVar24;
  ulonglong in_stack_fffffffffffffda0;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined4 **ppuVar27;
  undefined8 local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  longlong *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  char *local_200;
  undefined4 local_1f8;
  longlong *local_1f0;
  undefined4 local_1e8;
  uint local_1e4;
  undefined4 local_1d8 [3];
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined8 local_1b8;
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  double local_188;
  uint local_17c;
  double local_178;
  uint local_16c;
  undefined4 *local_168;
  undefined1 *local_160;
  undefined8 *local_158;
  undefined1 *local_150;
  ulonglong local_148;
  uint local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong *local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  double local_f8;
  uint local_ec;
  double local_e8;
  uint local_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [16];
  longlong local_98;
  
  local_res18 = 0;
  local_200 = "gml_Object_oRecreantBead_Step_0";
  local_1f8 = 0;
  local_208 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_208;
  pcVar23 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_13c = 0xffffff;
  local_148 = 0;
  bVar15 = 0xff;
  uStack_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  uStack_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  local_1e4 = 0xffffff;
  local_1f0 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  iVar16 = 2;
  local_1f8 = 2;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a09338);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_1f8 = 4;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f310);
    uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
    uStack_24c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_250 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
      local_258 = (longlong *)*puVar6;
    }
    else {
      FUN_1400419b0(&local_258,puVar6);
    }
    local_res18 = 1;
    FUN_140042560(&local_258,uVar4);
    FUN_1400460e0(uVar5,&local_258);
    local_res18 = 0;
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_1f8 = 6;
    puVar7 = (ulonglong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
    if (puVar7 != &local_148) {
      local_228 = (longlong *)*puVar7;
      uStack_220 = (undefined4)puVar7[1];
      uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_228);
    }
    local_1f8 = 7;
    pplVar8 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
    uVar3 = 0xffffff;
    if (pplVar8 != &local_d8) {
      local_228 = *pplVar8;
      uStack_220 = *(undefined4 *)(pplVar8 + 1);
      uStack_21c = *(undefined4 *)((longlong)pplVar8 + 0xc);
      FUN_140041b80(&local_d8,&local_228);
      uVar3 = uStack_cc;
    }
    bVar15 = (byte)uVar3;
    local_1f8 = 9;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
    uVar25 = 0;
    FUN_140e63610(local_res8,local_res10,&local_248,0,uVar9,0);
    local_1f8 = 0xb;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x3ff4000000000000;
    local_1f8 = 0xc;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x3feccccccccccccd;
    local_1f8 = 0xd;
    pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
    uStack_24c = 6;
    local_258 = local_res8;
    uVar25 = uVar25 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_258,DAT_1419fded8,0x80000000,&local_e8,uVar9,uVar25);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uStack_24c = 6;
    local_258 = local_res8;
    uVar25 = uVar25 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_258,DAT_1419fdd18,0x80000000,&local_f8,uVar9,uVar25);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uStack_24c = 6;
    local_258 = local_res8;
    uVar25 = uVar25 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_258,DAT_1419fe0e8,0x80000000,&local_198,uVar9,uVar25);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uStack_24c = 6;
    local_258 = local_res8;
    FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_1f0,uVar9 & 0xffffffffffffff00,
                  uVar25 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    plVar19 = local_1f0;
    if ((local_1e4 & 0xffffff) != 0) {
      plVar19 = (longlong *)FUN_140e4b060(&local_1f0);
    }
    plVar20 = local_198;
    if ((uStack_18c & 0xffffff) != 0) {
      plVar20 = (longlong *)FUN_140e4b060(&local_198);
    }
    dVar21 = local_f8;
    if ((local_ec & 0xffffff) != 0) {
      dVar21 = (double)FUN_140e4b060(&local_f8);
    }
    dVar22 = local_e8;
    if ((local_dc & 0xffffff) != 0) {
      dVar22 = (double)FUN_140e4b060(&local_e8);
    }
    fVar17 = (float)FUN_140e793d0((float)dVar22,(float)dVar21,(float)(double)plVar20,
                                  (float)(double)plVar19);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar10);
    }
    *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
    *pdVar10 = (double)fVar17;
    local_1f8 = 0xf;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    uVar25 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b58);
    uVar26 = 0;
    uVar9 = uVar25;
    FUN_140e63610(local_res8,local_res10,&local_248,0,uVar25,0);
    local_1f8 = 0x11;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    uStack_24c = 6;
    local_258 = local_res8;
    uVar26 = uVar26 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_258,DAT_1419fe0e8,0x80000000,&local_198,uVar9,uVar26);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uStack_24c = 6;
    local_258 = local_res8;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_1f0,uVar9,uVar26 & 0xffffffffffffff00);
    uVar18 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uStack_24c = uStack_18c;
    uStack_250 = uStack_190;
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
      local_258 = local_198;
    }
    else {
      FUN_1400419b0(&local_258,&local_198);
    }
    local_res18 = 2;
    FUN_1400460e0(&local_258,pplVar8);
    local_228 = local_258;
    uStack_220 = uStack_250;
    uStack_21c = uStack_24c;
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_228);
    local_res18 = 0;
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_168 = local_1d8;
    uStack_24c = local_1e4;
    uStack_250 = local_1e8;
    if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) == 0) {
      local_258 = local_1f0;
    }
    else {
      FUN_1400419b0(&local_258,&local_1f0);
    }
    local_res18 = 4;
    FUN_1400460e0(&local_258,puVar7);
    local_228 = local_258;
    uStack_220 = uStack_250;
    uStack_21c = uStack_24c;
    if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_228);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_160 = local_1c8;
    uStack_22c = 0xf;
    local_238 = (longlong *)0x100000000000149;
    local_228 = (longlong *)0x100000000000149;
    uStack_220 = uStack_230;
    uStack_21c = 0xf;
    if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_228);
    local_158 = &local_1b8;
    ppuVar27 = &local_168;
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_248,3,CONCAT44(uVar18,DAT_141a12628),
                          ppuVar27);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_1f8 = 0x13;
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
      pplVar8 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a09338);
      uStack_22c = 0xd;
      local_238 = (longlong *)0x3ff0000000000000;
      if (&local_238 != pplVar8) {
        local_228 = (longlong *)0x3ff0000000000000;
        uStack_220 = uStack_230;
        uStack_21c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar8);
        }
        FUN_140041b80(pplVar8,&local_228);
      }
      local_1f8 = 0x14;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      FUN_140e609c0(local_res8);
      uVar9 = local_148;
      if ((local_13c & 0xffffff) != 0) {
        uVar9 = FUN_140e4b060(&local_148);
      }
      uStack_22c = 0;
      local_258 = (longlong *)(uVar9 ^ 0x8000000000000000);
      uStack_24c = 0;
      uStack_250 = uStack_230;
      local_res18 = 8;
      local_11c = 0;
      local_128 = (longlong *)0x3fdccccccccccccd;
      local_238 = local_258;
      FUN_140042560(&local_258,&local_128);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if (&local_258 != puVar6) {
        local_228 = local_258;
        uStack_220 = uStack_250;
        uStack_21c = uStack_24c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_228);
      }
      local_res18 = 0;
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140e60910(1);
      local_1f8 = 0x15;
      pplVar8 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      FUN_140e609c0(local_res8);
      if (&local_d8 != pplVar8) {
        local_228 = local_d8;
        uStack_220 = uStack_d0;
        uStack_21c = uStack_cc;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar8);
        }
        FUN_140041b80(pplVar8,&local_228);
      }
      FUN_140e60910(1);
      local_1f8 = 0x17;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
      local_228 = (longlong *)CONCAT44(uRam00000001419ed464,_DAT_1419ed460);
      uStack_220 = uRam00000001419ed468;
      uStack_21c = uRam00000001419ed46c;
      if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_228);
      local_168 = local_1d8;
      local_228 = (longlong *)CONCAT44(uRam00000001419ed464,_DAT_1419ed460);
      uStack_220 = uRam00000001419ed468;
      uStack_21c = uRam00000001419ed46c;
      if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_228);
      local_160 = local_1c8;
      if (puVar6 != &local_1b8) {
        local_228 = (longlong *)*puVar6;
        uStack_220 = *(undefined4 *)(puVar6 + 1);
        uStack_21c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_228);
      }
      local_158 = &local_1b8;
      local_228 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_220 = DAT_1419df7b8;
      uStack_21c = DAT_1419df7bc;
      if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_228);
      local_150 = local_1a8;
      ppuVar24 = &local_168;
      FUN_14044e5b0(local_res8,local_res10,&local_248,4,ppuVar24);
      local_1f8 = 0x19;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
      uVar4 = FUN_140e79480(0);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = uVar4;
      local_1f8 = 0x1b;
      uStack_22c = 0xf;
      local_238 = (longlong *)0x100000100000288;
      local_228 = (longlong *)0x100000100000288;
      uStack_220 = uStack_230;
      uStack_21c = 0xf;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_228);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_108);
      local_1f8 = 0x1c;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_10c = 0;
      local_118 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_118);
      local_1f8 = 0x1e;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f95e8);
      FUN_140e87440(uVar4,DAT_1419f4a98,0x80000000,&local_c8,
                    (ulonglong)ppuVar24 & 0xffffffffffffff00,
                    (ulonglong)ppuVar27 & 0xffffffffffffff00);
      uVar4 = FUN_140069500(uVar4);
      ppuVar27 = (undefined4 **)0x0;
      puVar6 = &local_c8;
      FUN_140e63610(uVar4,local_res10,&local_248,0,puVar6,0);
      do {
        iVar16 = iVar16 + -1;
        local_1f8 = 0x21;
        dVar21 = (double)FUN_140e794b0(0,0x405f400000000000);
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_16c = 0;
        local_1f8 = 0x22;
        local_178 = dVar21;
        dVar21 = (double)FUN_140e794b0(0,0x4010000000000000);
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_17c = 0;
        local_1f8 = 0x23;
        local_188 = dVar21;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_248 = 0;
        local_240 = 0;
        local_23c = 5;
        local_11c = 6;
        local_128 = local_res8;
        uVar26 = (ulonglong)ppuVar27 & 0xffffffffffffff00;
        uVar9 = (ulonglong)puVar6 & 0xffffffffffffff00;
        FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_198,uVar9,uVar26);
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_ac = 6;
        local_b8 = local_res8;
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_b8,DAT_1419fe158,0x80000000,&local_1f0,uVar9,
                      uVar26 & 0xffffffffffffff00);
        uVar18 = (undefined4)(uVar9 >> 0x20);
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        local_218 = (undefined4)local_198;
        uStack_214 = local_198._4_4_;
        uStack_210 = uStack_190;
        uStack_20c = uStack_18c;
        if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        FUN_140041b80(local_1d8,&local_218);
        local_168 = local_1d8;
        uStack_24c = local_1e4;
        uStack_250 = local_1e8;
        if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) == 0) {
          local_258 = local_1f0;
        }
        else {
          FUN_1400419b0(&local_258,&local_1f0);
        }
        local_res18 = 0x200;
        uStack_22c = 7;
        local_238 = (longlong *)CONCAT44(local_238._4_4_,6);
        FUN_1400462a0(&local_258,&local_238);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_218 = (undefined4)local_258;
        uStack_214 = local_258._4_4_;
        uStack_210 = uStack_250;
        uStack_20c = uStack_24c;
        if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_218);
        local_res18 = 0;
        if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_160 = local_1c8;
        local_218 = _DAT_141ddacc8;
        uStack_214 = uRam0000000141ddaccc;
        uStack_210 = uRam0000000141ddacd0;
        uStack_20c = DAT_141ddacd4;
        if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_218);
        local_158 = &local_1b8;
        uStack_21c = 0xf;
        local_228 = (longlong *)0x10000000000011c;
        local_218 = 0x11c;
        uStack_214 = 0x1000000;
        uStack_210 = uStack_220;
        uStack_20c = 0xf;
        if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_218);
        local_150 = local_1a8;
        ppuVar27 = &local_168;
        puVar6 = (undefined8 *)CONCAT44(uVar18,DAT_141a0a7c8);
        uVar4 = FUN_140e634e0(local_res8,local_res10,&local_248,4,puVar6,ppuVar27);
        iVar2 = FUN_140e63cb0(local_a8,&local_res8,&local_res10,uVar4);
        if (0 < iVar2) {
          do {
            (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
            (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
            local_1f8 = 0x25;
            pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
            dVar21 = local_178;
            if ((local_16c & 0xffffff) != 0) {
              dVar21 = (double)FUN_140e4b060(&local_178);
            }
            dVar22 = local_188;
            if ((local_17c & 0xffffff) != 0) {
              dVar22 = (double)FUN_140e4b060(&local_188);
            }
            fVar17 = (float)FUN_140e78f90((float)dVar22,(float)dVar21);
            if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(pdVar10);
            }
            *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
            *pdVar10 = (double)fVar17;
            local_1f8 = 0x26;
            pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
            dVar21 = local_178;
            if ((local_16c & 0xffffff) != 0) {
              dVar21 = (double)FUN_140e4b060(&local_178);
            }
            dVar22 = local_188;
            if ((local_17c & 0xffffff) != 0) {
              dVar22 = (double)FUN_140e4b060(&local_188);
            }
            fVar17 = (float)FUN_140e79010((float)dVar22,(float)dVar21);
            if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(pdVar10);
            }
            *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
            *pdVar10 = (double)fVar17;
            cVar1 = FUN_140e643f0(local_a8,&local_res8,&local_res10);
          } while (cVar1 != '\0');
        }
        FUN_140e63970(local_a8,&local_res8,&local_res10);
        if (local_98 != 0) {
          FUN_140e4cd60();
        }
      } while (0 < iVar16);
    }
    local_1f8 = 0x2c;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    FUN_140e63610(local_res8,local_res10,&local_248,0,uVar25,0);
    local_1f8 = 0x2d;
    goto LAB_140cad309;
  }
  local_1f8 = 0x30;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uStack_22c = 6;
  local_238 = local_res8;
  in_stack_fffffffffffffda0 = in_stack_fffffffffffffda0 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar23 & 0xffffffffffffff00;
  FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_198,uVar9,in_stack_fffffffffffffda0);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  uStack_22c = 6;
  local_238 = local_res8;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_1f0,uVar9,
                in_stack_fffffffffffffda0 & 0xffffffffffffff00);
  uVar18 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_218 = (undefined4)local_198;
  uStack_214 = local_198._4_4_;
  uStack_210 = uStack_190;
  uStack_20c = uStack_18c;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_218);
  local_168 = local_1d8;
  uStack_24c = local_1e4;
  uStack_250 = local_1e8;
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) == 0) {
    local_258 = local_1f0;
  }
  else {
    FUN_1400419b0(&local_258,&local_1f0);
  }
  local_res18 = 0x400;
  uStack_22c = 7;
  local_238 = (longlong *)CONCAT44(local_238._4_4_,1);
  FUN_1400460e0(&local_258,&local_238);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_218 = (undefined4)local_258;
  uStack_214 = local_258._4_4_;
  uStack_210 = uStack_250;
  uStack_20c = uStack_24c;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_218);
  local_res18 = 0;
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_160 = local_1c8;
  uStack_21c = 0xf;
  local_228 = (longlong *)0x100000000000149;
  local_218 = 0x149;
  uStack_214 = 0x1000000;
  uStack_210 = uStack_220;
  uStack_20c = 0xf;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_218);
  local_158 = &local_1b8;
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_248,3,CONCAT44(uVar18,DAT_141a12628),
                        &local_168);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_1f8 = 0x4f;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f310);
    uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
    uStack_24c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_250 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
      local_258 = (longlong *)*puVar6;
    }
    else {
      FUN_1400419b0(&local_258,puVar6);
    }
    local_res18 = 0x2000;
    FUN_140042560(&local_258,uVar4);
    FUN_1400460e0(uVar5,&local_258);
    local_res18 = 0;
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_1f8 = 0x50;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04c68);
    uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
    uStack_24c = *(uint *)((longlong)puVar6 + 0xc);
    uStack_250 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
      local_258 = (longlong *)*puVar6;
    }
    else {
      FUN_1400419b0(&local_258,puVar6);
    }
    local_res18 = 0x4000;
    FUN_140042560(&local_258,uVar4);
    FUN_1400460e0(uVar5,&local_258);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
  }
  else {
    local_1f8 = 0x32;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uStack_21c = 0xf;
    local_228 = (longlong *)0x100000000000149;
    local_218 = 0x149;
    uStack_214 = 0x1000000;
    uStack_210 = uStack_220;
    uStack_20c = 0xf;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_218);
    local_150 = local_1a8;
    gml_GlobalScript_world_pos_to_gui(local_res8,local_res10,&local_138,1,&local_150);
    local_1f8 = 0x33;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
    if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
      uVar18 = (undefined4)*puVar6;
    }
    else {
      uVar18 = FUN_140e4b060(puVar6);
    }
    dVar21 = (double)FUN_140e78d00(uVar18);
    if (dVar21 - 0.5 <= DAT_141955260) {
LAB_140cacd54:
      local_1f8 = 0x3b;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0;
    }
    else {
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fdab8);
      uVar11 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fdaf8);
      iVar16 = FUN_140e851f0(uVar5,uVar11,DAT_141955260,1);
      if ((iVar16 == -2) || (-1 < iVar16)) goto LAB_140cacd54;
      local_1f8 = 0x35;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
      pdVar10 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      FUN_140e609c0(local_res8);
      if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
        uVar18 = (undefined4)*puVar6;
      }
      else {
        uVar18 = FUN_140e4b060(puVar6);
      }
      dVar21 = (double)FUN_140e78d00(uVar18);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar10);
      }
      *(undefined4 *)((longlong)pdVar10 + 0xc) = 0;
      *pdVar10 = dVar21 * -0.95;
      FUN_140e60910(1);
      local_1f8 = 0x36;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04c68);
      local_218 = _DAT_1419ed480;
      uStack_214 = uRam00000001419ed484;
      uStack_210 = uRam00000001419ed488;
      uStack_20c = uRam00000001419ed48c;
      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_218);
      local_168 = local_1d8;
      local_218 = _DAT_1419ed470;
      uStack_214 = uRam00000001419ed474;
      uStack_210 = uRam00000001419ed478;
      uStack_20c = uRam00000001419ed47c;
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_218);
      local_160 = local_1c8;
      FUN_140e609c0(local_res8);
      uVar5 = FUN_140e78db0(&local_248,2,&local_168);
      local_258 = (longlong *)FUN_140e794b0(0,0x403e000000000000);
      uStack_24c = 0;
      local_res18 = 0x800;
      FUN_140042560(&local_258,uVar5);
      if (&local_258 != puVar6) {
        local_218 = (undefined4)local_258;
        uStack_214 = local_258._4_4_;
        uStack_210 = uStack_250;
        uStack_20c = uStack_24c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_218);
      }
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140e60910(1);
      local_1f8 = 0x37;
      uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fdab8);
      FUN_140046040(uVar5);
    }
    local_1f8 = 0x3e;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    puVar12 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
    puVar13 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
    if (puVar12 != local_1d8) {
      local_218 = *puVar12;
      uStack_214 = puVar12[1];
      uStack_210 = puVar12[2];
      uStack_20c = puVar12[3];
      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_218);
    }
    local_168 = local_1d8;
    local_218 = _DAT_141dc7560;
    uStack_214 = uRam0000000141dc7564;
    uStack_210 = uRam0000000141dc7568;
    uStack_20c = uRam0000000141dc756c;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_218);
    local_160 = local_1c8;
    uStack_24c = 0;
    local_258 = (longlong *)0x3fc3333333333333;
    local_res18 = 0x1000;
    FUN_140042560(&local_258,uVar4);
    local_218 = (undefined4)local_258;
    uStack_214 = local_258._4_4_;
    uStack_210 = uStack_250;
    uStack_20c = uStack_24c;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_218);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_158 = &local_1b8;
    FUN_140e609c0(local_res8);
    puVar14 = (undefined4 *)gml_Script_arc(local_res8,local_res10,&local_248,3,&local_168);
    if (puVar14 != puVar13) {
      local_218 = *puVar14;
      uStack_214 = puVar14[1];
      uStack_210 = puVar14[2];
      uStack_20c = puVar14[3];
      if ((1 << ((byte)puVar13[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar13);
      }
      FUN_140041b80(puVar13,&local_218);
    }
    FUN_140e60910(1);
    local_1f8 = 0x40;
    uStack_22c = 0;
    local_238 = (longlong *)0x0;
    iVar16 = FUN_140e851f0(puVar12,&local_238,DAT_141955260,0);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if (iVar16 == 0) {
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
      uStack_22c = 0;
      local_238 = (longlong *)0x0;
      iVar16 = FUN_140e851f0(uVar4,&local_238,DAT_141955260,0);
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if (iVar16 == 0) {
        local_1f8 = 0x42;
        puVar12 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04c98);
        puVar13 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
        FUN_140e609c0(local_res8);
        if (puVar12 != puVar13) {
          local_218 = *puVar12;
          uStack_214 = puVar12[1];
          uStack_210 = puVar12[2];
          uStack_20c = puVar12[3];
          if ((1 << ((byte)puVar13[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar13);
          }
          FUN_140041b80(puVar13,&local_218);
        }
        FUN_140e60910(1);
        local_1f8 = 0x43;
        uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04c88);
        FUN_140046040(uVar4);
        local_1f8 = 0x45;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a04c88);
        uStack_22c = 0;
        local_238 = (longlong *)0x4024000000000000;
        uVar3 = FUN_140e851f0(uVar4,&local_238,DAT_141955260,1);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        if (uVar3 < 0x80000000) {
          local_1f8 = 0x47;
          FUN_140edd0e0(local_res8,local_res10,0,0);
          local_1f8 = 0x48;
          goto LAB_140cad309;
        }
      }
    }
  }
  local_1f8 = 0x53;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
  FUN_140e63610(local_res8,local_res10,&local_248,0,uVar4,0);
LAB_140cad309:
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << (bVar15 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_1d8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_208;
  return;
}

