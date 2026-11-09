// gml_Script_anon_22306_DefineBuffs_OFFERINGSINIT @ 0x1403ddfb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_22306_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar13;
  double dVar12;
  longlong *local_res8;
  ulonglong local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong in_stack_fffffffffffffd40;
  ulonglong uVar17;
  undefined8 **ppuVar18;
  double local_2b8;
  uint local_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_290;
  uint local_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  char *local_260;
  undefined4 local_258;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  longlong *local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198 [2];
  undefined8 local_188;
  byte local_17c;
  double local_178;
  byte local_16c;
  undefined8 local_168 [2];
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined4 local_13c;
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
  undefined4 uStack_fc;
  undefined8 *local_f8;
  undefined8 *local_f0;
  double *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong local_b0;
  
  local_res20 = 0;
  local_260 = "gml_Script_anon@21645@DefineBuffs@OFFERINGSINIT";
  local_268 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_268;
  local_258 = 0x389;
  pcVar14 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_198,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0.0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_23c = 0xffffff;
  local_248 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_29c = 0;
  local_2a8 = 0;
  local_20c = 0;
  local_218 = 0;
  local_21c = 0;
  local_228 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_258 = 0x38b;
  if (param_4 < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*param_5;
  }
  local_28c = *(uint *)((longlong)puVar8 + 0xc);
  local_290 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) == 0) {
    local_298 = *puVar8;
  }
  else {
    FUN_1400419b0(&local_298);
  }
  local_res20 = 4;
  local_1ec = 0;
  local_1f8 = (longlong *)0x3fe0000000000000;
  FUN_140042560(&local_298,&local_1f8);
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  uStack_22c = 0;
  local_238 = 0x4030000000000000;
  local_res20 = 0xc;
  FUN_140042560(&local_238,&local_298);
  local_278 = local_238;
  uStack_270 = uStack_230;
  uStack_26c = uStack_22c;
  FUN_140041b80(&local_1a8,&local_278);
  local_res20 = 4;
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  uVar10 = 0;
  local_res20 = 0;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_258 = 0x38c;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 5;
  if (param_4 < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)param_5[1];
  }
  FUN_140e87440(puVar8,DAT_141a1f440,0x80000000,&local_208,(ulonglong)pcVar14 & 0xffffffffffffff00,
                in_stack_fffffffffffffd40 & 0xffffffffffffff00);
  plVar15 = local_res8;
  uVar16 = local_res10;
  FUN_140e87170(&local_208,DAT_1419fe0e8,0x80000000,&local_108,local_res8,local_res10);
  if (param_4 < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)param_5[1];
  }
  FUN_140e87440(puVar8,DAT_141a1f440,0x80000000,&local_208,(ulonglong)plVar15 & 0xffffffffffffff00,
                uVar16 & 0xffffffffffffff00);
  plVar15 = local_res8;
  FUN_140e87170(&local_208,DAT_1419fe158,0x80000000,&local_118,local_res8,local_res10);
  uVar11 = (undefined4)((ulonglong)plVar15 >> 0x20);
  local_278 = local_108;
  uStack_270 = uStack_100;
  uStack_26c = uStack_fc;
  if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_278);
  local_f8 = local_198;
  local_278 = local_118;
  uStack_270 = uStack_110;
  uStack_26c = uStack_10c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_278);
  local_f0 = &local_188;
  local_278 = CONCAT44(uRam0000000141dd287c,_DAT_141dd2878);
  uStack_270 = uRam0000000141dd2880;
  uStack_26c = DAT_141dd2884;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_278);
  local_e8 = &local_178;
  uStack_1ac = 0xf;
  local_1b8 = 0x1000000000000a5;
  local_278 = 0x1000000000000a5;
  uStack_270 = uStack_1b0;
  uStack_26c = 0xf;
  if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_278);
  local_e0 = local_168;
  ppuVar18 = &local_f8;
  uVar16 = CONCAT44(uVar11,DAT_141a0a7c8);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2a8,4,uVar16,ppuVar18);
  iVar4 = FUN_140e63cb0(local_c0,&local_res8,&local_res10,uVar6);
  uVar6 = local_1a8;
  if (0 < iVar4) {
    uVar2 = CONCAT44(uStack_19c,uStack_1a0);
LAB_1403de4c0:
    local_258 = 0x38e;
    if (param_4 < 2) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)param_5[1];
    }
    uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(puVar8,DAT_141a1f440,0x80000000,&local_208,uVar16,uVar17);
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(&local_208,DAT_1419f5b68,0x80000000,&local_128,uVar16,uVar17 & 0xffffffffffffff00)
    ;
    local_288 = local_128;
    uStack_280 = CONCAT44(uStack_11c,uStack_120);
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_288);
    local_258 = 0x38f;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2ac = 0;
    uVar11 = 0;
    uVar13 = 0;
    local_2b8 = 0.0;
    bVar1 = true;
    do {
      dVar12 = (double)CONCAT44(uVar13,uVar11);
      uVar11 = (undefined4)(uVar16 >> 0x20);
      if (!bVar1) {
        local_258 = 0x38f;
        uVar5 = local_2ac & 0xffffff;
        if (uVar5 != 0) {
          if (uVar5 != 1) {
            if (uVar5 == 7) {
              local_2b8 = (double)CONCAT44(local_2b8._4_4_,local_2b8._0_4_ + 1);
            }
            else if (uVar5 == 10) {
              local_2b8 = (double)((longlong)local_2b8 + 1);
            }
            else {
              if (uVar5 == 0xd) goto LAB_1403de5d6;
              FUN_140042910(&DAT_14172c3d8,&local_2b8,&local_2b8);
            }
            goto LAB_1403de5e4;
          }
          dVar12 = (double)FUN_140e4b060(&local_2b8);
LAB_1403de5d6:
          local_2ac = 0;
        }
        local_2b8 = dVar12 + 1.0;
      }
LAB_1403de5e4:
      bVar1 = false;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      local_f8 = &local_1d8;
      ppuVar18 = &local_f8;
      uVar16 = CONCAT44(uVar11,DAT_1419f5e98);
      uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2a8,1,uVar16,ppuVar18);
      iVar4 = FUN_140e851f0(&local_2b8,uVar7,DAT_141955260,1);
      if ((iVar4 == -2) || (-1 < iVar4)) goto LAB_1403de82f;
      local_258 = 0x391;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      uVar11 = (undefined4)(uVar16 >> 0x20);
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      puVar8 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f59b8);
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      local_f0 = &local_1d8;
      local_e8 = &local_2b8;
      ppuVar18 = &local_f0;
      uVar16 = CONCAT44(uVar11,DAT_1419f5a78);
      uVar7 = FUN_140e634e0(local_res8,local_res10,&local_228,2,uVar16,ppuVar18);
      uVar16 = uVar16 & 0xffffffffffffff00;
      FUN_140e87440(uVar7,DAT_141a05b88,0x80000000,&local_138,uVar16,
                    (ulonglong)ppuVar18 & 0xffffffffffffff00);
      uVar11 = (undefined4)(uVar16 >> 0x20);
      if (puVar8 != local_168) {
        local_288 = *puVar8;
        uStack_280 = puVar8[1];
        if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_288);
      }
      local_e0 = local_168;
      local_288 = local_138;
      uStack_280 = CONCAT44(uStack_12c,uStack_130);
      if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_288);
      local_d8 = local_158;
      uVar16 = CONCAT44(uVar11,DAT_141a57350);
      FUN_140e634e0(local_res8,local_res10,&local_218,2,uVar16,&local_e0);
      uVar11 = SUB84(local_2b8,0);
      uVar13 = (undefined4)((ulonglong)local_2b8 >> 0x20);
    } while( true );
  }
LAB_1403dee2f:
  FUN_140e63970(local_c0,&local_res8,&local_res10);
  if (local_b0 != 0) {
    FUN_140e4cd60();
    local_b0 = 0;
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
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
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  _eh_vector_destructor_iterator_(local_198,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_268;
  return param_3;
LAB_1403de82f:
  local_258 = 0x394;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 5;
  if (param_4 < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)param_5[1];
  }
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_140e87440(puVar8,DAT_141a1f4e0,0x80000000,&local_248,uVar16,
                (ulonglong)ppuVar18 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar16 >> 0x20);
  local_288 = local_248;
  uStack_280 = CONCAT44(uStack_23c,uStack_240);
  if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_288);
  local_f8 = local_198;
  ppuVar18 = &local_f8;
  uVar16 = CONCAT44(uVar11,DAT_141a02ef8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2a8,1,uVar16,ppuVar18);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 == '\0') {
    local_258 = 0x395;
    uStack_26c = 0xf;
    local_278 = 0x1000000000000ee;
    local_288 = 0x1000000000000ee;
    uStack_280 = CONCAT44(0xf,uStack_270);
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_288);
    if (param_4 < 2) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)param_5[1];
    }
    FUN_140e87930(puVar8,DAT_141a1f4e0,0x80000000,&local_1c8);
  }
  local_258 = 0x397;
  puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5ef8);
  local_1ec = 6;
  local_1f8 = local_res8;
  uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_1419fe0e8,0x80000000,&local_1e8,uVar16,uVar17);
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (param_4 < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)param_5[1];
  }
  FUN_140e87440(puVar9,DAT_141a1f4e0,0x80000000,&local_248,uVar16 & 0xffffffffffffff00,
                uVar17 & 0xffffffffffffff00);
  plVar15 = local_res8;
  uVar16 = local_res10;
  FUN_140e87170(&local_248,DAT_1419fe0e8,0x80000000,&local_148,local_res8,local_res10);
  local_28c = local_1dc;
  local_290 = local_1e0;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
    local_298 = local_1e8;
  }
  else {
    FUN_1400419b0(&local_298,&local_1e8);
  }
  local_res20 = uVar10 | 0x10;
  FUN_1400462a0(&local_298,&local_148);
  if ((local_28c & 0xffffff) == 0) {
    uVar11 = (undefined4)local_298;
  }
  else {
    uVar11 = FUN_140e4b060(&local_298);
  }
  uVar7 = FUN_140e79500(uVar11);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar8);
  }
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  *puVar8 = uVar7;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_258 = 0x398;
  puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
  if (param_4 < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)param_5[1];
  }
  ppuVar18 = (undefined8 **)(uVar16 & 0xffffffffffffff00);
  uVar16 = (ulonglong)plVar15 & 0xffffffffffffff00;
  FUN_140e87440(puVar9,DAT_141a1f4e0,0x80000000,&local_248,uVar16,ppuVar18);
  FUN_140e609c0(local_res8);
  if (&local_248 != puVar8) {
    local_288 = local_248;
    uStack_280 = CONCAT44(uStack_23c,uStack_240);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_288);
  }
  FUN_140e60910(1);
  local_258 = 0x39a;
  puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f290);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar8);
  }
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  *puVar8 = 0x4008000000000000;
  local_258 = 0x39b;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
  puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
  uStack_22c = 0;
  local_238 = 0x3ff0000000000000;
  iVar4 = FUN_140e851f0(uVar7,&local_238,DAT_141955260,0);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (iVar4 == 0) {
    uStack_1ac = 0;
    local_1b8 = 0;
    puVar9 = &local_1b8;
    uVar10 = uVar10 | 1;
  }
  else {
    local_c4 = 0;
    local_d0 = 0x4066800000000000;
    puVar9 = &local_d0;
    uVar10 = uVar10 | 2;
  }
  local_res20 = uVar10;
  FUN_140e609c0(local_res8);
  if (puVar9 != puVar8) {
    local_288 = *puVar9;
    uStack_280 = puVar9[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_288);
  }
  if ((uVar10 & 2) != 0) {
    uVar10 = uVar10 & 0xfffffffd;
    local_res20 = uVar10;
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
  }
  if ((uVar10 & 1) != 0) {
    uVar10 = uVar10 & 0xfffffffe;
    local_res20 = uVar10;
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
  }
  FUN_140e60910(1);
  local_258 = 0x39d;
  puVar8 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
  puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
  FUN_140e609c0(local_res8);
  if (puVar8 != puVar9) {
    local_288 = *puVar8;
    uStack_280 = puVar8[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_288);
  }
  FUN_140e60910(1);
  local_258 = 0x39e;
  puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a58020);
  FUN_140e609c0(local_res8);
  if (&local_1a8 != puVar8) {
    local_288 = uVar6;
    uStack_280 = uVar2;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_288);
  }
  FUN_140e60910(1);
  cVar3 = FUN_140e643f0(local_c0,&local_res8,&local_res10);
  if (cVar3 == '\0') goto code_r0x0001403dee28;
  goto LAB_1403de4c0;
code_r0x0001403dee28:
  param_3 = local_res18;
  goto LAB_1403dee2f;
}

