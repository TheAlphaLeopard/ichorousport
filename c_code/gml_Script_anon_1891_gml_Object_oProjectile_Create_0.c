// gml_Script_anon_1891_gml_Object_oProjectile_Create_0 @ 0x140c9ff70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1891_gml_Object_oProjectile_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  double *pdVar7;
  double *pdVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  double *pdVar12;
  ulonglong uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  code *pcVar21;
  ulonglong uVar22;
  undefined4 uVar26;
  longlong *plVar23;
  ulonglong uVar24;
  undefined8 **ppuVar25;
  ulonglong in_stack_fffffffffffffd50;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  double local_288;
  uint local_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  char *local_240;
  undefined4 local_238;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  double local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8 [2];
  double local_1d8 [2];
  double local_1c8;
  byte local_1bc;
  double local_1b8;
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined4 local_168 [3];
  byte local_15c;
  double local_158;
  uint local_14c;
  double local_148;
  uint local_13c;
  double local_138;
  uint local_12c;
  double local_128;
  uint local_11c;
  undefined8 *local_118;
  double *local_110;
  double *local_108;
  double *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined8 *local_e8;
  undefined1 *local_e0;
  undefined4 *local_d8;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  
  local_240 = "gml_Script_anon@980@anon@382@gml_Object_oProjectile_Create_0";
  local_248 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_248;
  local_238 = 0x35;
  FUN_140041df0(local_78,param_4,1,param_5);
  pcVar21 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_1e8,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_26c = 0xffffff;
  local_278 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_1fc = 0xffffff;
  local_208 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_21c = 0xffffff;
  local_228 = 0.0;
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_8c = 0xffffff;
  local_98 = 0;
  pdVar7 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f94f8);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_27c = 0xffffff;
  local_288 = 0.0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_29c = 0;
  uVar19 = 0;
  uVar20 = 0;
  local_2a8 = 0;
  local_25c = 0;
  local_268 = 0;
  local_20c = 0;
  local_218 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_238 = 0x35;
  pdVar12 = (double *)&DAT_1419df7b0;
  uVar13 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*local_70;
  }
  iVar4 = FUN_140e851f0(puVar11,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_238 = 0x35;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    if (0 < (int)local_78[0]) {
      pdVar12 = (double *)*local_70;
    }
    in_stack_fffffffffffffd50 = 0;
    pcVar21 = (code *)CONCAT44((int)((ulonglong)pcVar21 >> 0x20),DAT_1419fd6d8);
    pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_2a8,0,pcVar21,0);
    if (pdVar8 != pdVar12) {
      local_258 = *pdVar8;
      uStack_250 = *(undefined4 *)(pdVar8 + 1);
      uStack_24c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar12);
      }
      FUN_140041b80(pdVar12,&local_258);
    }
  }
  local_238 = 0x37;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 5;
  if ((int)local_78[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*local_70;
  }
  uVar22 = (ulonglong)pcVar21 & 0xffffffffffffff00;
  FUN_140e87440(puVar11,DAT_141a1f440,0x80000000,&local_278,uVar22,
                in_stack_fffffffffffffd50 & 0xffffffffffffff00);
  uVar26 = (undefined4)(uVar22 >> 0x20);
  local_258 = local_278;
  uStack_250 = uStack_270;
  uStack_24c = uStack_26c;
  if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_258);
  local_118 = local_1e8;
  uVar9 = FUN_140e634e0(param_1,param_2,&local_2a8,1,CONCAT44(uVar26,DAT_141a02ef8),&local_118);
  cVar3 = FUN_140e491e0(uVar9);
  if (cVar3 == '\0') {
    local_238 = 0x37;
    goto LAB_140ca11bb;
  }
  local_238 = 0x39;
  if ((int)local_78[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*local_70;
  }
  FUN_140e87170(puVar11,DAT_1419fe0e8,0x80000000,&local_128,param_1,param_2);
  if ((int)local_78[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*local_70;
  }
  plVar23 = param_1;
  uVar22 = param_2;
  FUN_140e87170(puVar11,DAT_1419fe158,0x80000000,&local_138,param_1,param_2);
  if ((int)local_78[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*local_70;
  }
  FUN_140e87440(puVar11,DAT_141a1f440,0x80000000,&local_278,(ulonglong)plVar23 & 0xffffffffffffff00,
                uVar22 & 0xffffffffffffff00);
  plVar23 = param_1;
  uVar22 = param_2;
  FUN_140e87170(&local_278,DAT_1419fe0e8,0x80000000,&local_148,param_1,param_2);
  if ((int)local_78[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*local_70;
  }
  FUN_140e87440(puVar11,DAT_141a1f440,0x80000000,&local_278,(ulonglong)plVar23 & 0xffffffffffffff00,
                uVar22 & 0xffffffffffffff00);
  plVar23 = param_1;
  uVar22 = param_2;
  FUN_140e87170(&local_278,DAT_1419fe158,0x80000000,&local_158,param_1,param_2);
  dVar15 = local_158;
  if ((local_14c & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_158);
  }
  dVar16 = local_148;
  if ((local_13c & 0xffffff) != 0) {
    dVar16 = (double)FUN_140e4b060(&local_148);
  }
  dVar17 = local_138;
  if ((local_12c & 0xffffff) != 0) {
    dVar17 = (double)FUN_140e4b060(&local_138);
  }
  dVar18 = local_128;
  if ((local_11c & 0xffffff) != 0) {
    dVar18 = (double)FUN_140e4b060(&local_128);
  }
  fVar14 = (float)FUN_140e793d0((float)dVar18,(float)dVar17,(float)dVar16,(float)dVar15);
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_1fc = 0;
  local_208 = (double)fVar14;
  local_238 = 0x3b;
  if ((int)local_78[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*local_70;
  }
  FUN_140e87440(puVar11,DAT_141a1f440,0x80000000,&local_278,(ulonglong)plVar23 & 0xffffffffffffff00,
                uVar22 & 0xffffffffffffff00);
  plVar23 = param_1;
  uVar22 = param_2;
  FUN_140e87170(&local_278,DAT_141a1f580,0x80000000,&local_88,param_1,param_2);
  uStack_24c = 0xf;
  local_258 = 7.291122019556783e-304;
  iVar4 = FUN_140e851f0(&local_88,&local_258,DAT_141955260,0);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if (iVar4 != 0) {
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    if ((int)local_78[0] < 1) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (undefined8 *)*local_70;
    }
    uVar24 = (ulonglong)plVar23 & 0xffffffffffffff00;
    FUN_140e87440(puVar11,DAT_141a1f4e0,0x80000000,&local_228,uVar24,uVar22 & 0xffffffffffffff00);
    uVar26 = (undefined4)(uVar24 >> 0x20);
    local_258 = local_228;
    uStack_250 = uStack_220;
    uStack_24c = uStack_21c;
    if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_258);
    local_118 = local_1e8;
    ppuVar25 = &local_118;
    uVar22 = CONCAT44(uVar26,DAT_141a02ef8);
    uVar9 = FUN_140e634e0(param_1,param_2,&local_2a8,1,uVar22,ppuVar25);
    cVar3 = FUN_140e491e0(uVar9);
    if (cVar3 != '\0') {
      local_238 = 0x3d;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      uVar24 = (ulonglong)ppuVar25 & 0xffffffffffffff00;
      uVar22 = uVar22 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_141a1f480,0x80000000,&local_98,uVar22,uVar24);
      if ((int)local_78[0] < 1) {
        puVar11 = &DAT_1419df7b0;
      }
      else {
        puVar11 = (undefined8 *)*local_70;
      }
      uVar24 = uVar24 & 0xffffffffffffff00;
      uVar22 = uVar22 & 0xffffffffffffff00;
      FUN_140e87440(puVar11,DAT_141a1f440,0x80000000,&local_278,uVar22,uVar24);
      if ((int)local_78[0] < 1) {
        puVar11 = &DAT_1419df7b0;
      }
      else {
        puVar11 = (undefined8 *)*local_70;
      }
      FUN_140e87440(puVar11,DAT_141a1f4e0,0x80000000,&local_228,uVar22 & 0xffffffffffffff00,
                    uVar24 & 0xffffffffffffff00);
      plVar23 = param_1;
      uVar22 = param_2;
      FUN_140e87170(&local_228,DAT_141a0a828,0x80000000,&local_a8,param_1,param_2);
      if ((int)local_78[0] < 1) {
        puVar11 = &DAT_1419df7b0;
      }
      else {
        puVar11 = (undefined8 *)*local_70;
      }
      uVar22 = uVar22 & 0xffffffffffffff00;
      uVar24 = (ulonglong)plVar23 & 0xffffffffffffff00;
      FUN_140e87440(puVar11,DAT_141a1f4e0,0x80000000,&local_228,uVar24,uVar22);
      uVar24 = uVar24 & 0xffffffffffffff00;
      FUN_140e87440(&local_228,DAT_141a0a7d8,0x80000000,&local_b8,uVar24,uVar22 & 0xffffffffffffff00
                   );
      uVar26 = (undefined4)(uVar24 >> 0x20);
      FUN_140e609c0(DAT_141a729d8);
      FUN_140e645a0(&local_258,gml_Script_anon_382_gml_Object_oProjectile_Create_0,0);
      if ((double *)&local_258 != pdVar7) {
        local_298 = (undefined4)local_258;
        uStack_294 = local_258._4_4_;
        uStack_290 = uStack_250;
        uStack_28c = uStack_24c;
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar7);
        }
        FUN_140041b80(pdVar7,&local_298);
      }
      FUN_140e60910(1);
      if (pdVar7 != local_1d8) {
        local_298 = *(undefined4 *)pdVar7;
        uStack_294 = *(undefined4 *)((longlong)pdVar7 + 4);
        uStack_290 = *(undefined4 *)(pdVar7 + 1);
        uStack_28c = *(undefined4 *)((longlong)pdVar7 + 0xc);
        if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        FUN_140041b80(local_1d8,&local_298);
      }
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_298 = (undefined4)local_278;
      uStack_294 = local_278._4_4_;
      uStack_290 = uStack_270;
      uStack_28c = uStack_26c;
      local_110 = local_1d8;
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_298);
      local_108 = &local_1c8;
      local_100 = &local_208;
      local_298 = (undefined4)local_a8;
      uStack_294 = local_a8._4_4_;
      uStack_290 = uStack_a0;
      uStack_28c = uStack_9c;
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_298);
      local_f8 = local_1a8;
      local_298 = (undefined4)local_b8;
      uStack_294 = local_b8._4_4_;
      uStack_290 = uStack_b0;
      uStack_28c = uStack_ac;
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_298);
      local_f0 = local_198;
      if ((int)local_78[0] < 1) {
        puVar11 = &DAT_1419df7b0;
LAB_140ca098a:
        local_298 = *(undefined4 *)puVar11;
        uStack_294 = *(undefined4 *)((longlong)puVar11 + 4);
        uStack_290 = *(undefined4 *)(puVar11 + 1);
        uStack_28c = *(undefined4 *)((longlong)puVar11 + 0xc);
        if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_298);
      }
      else {
        puVar11 = (undefined8 *)*local_70;
        if (puVar11 != &local_188) goto LAB_140ca098a;
      }
      local_e8 = &local_188;
      local_298 = (undefined4)local_98;
      uStack_294 = local_98._4_4_;
      uStack_290 = uStack_90;
      uStack_28c = uStack_8c;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_298);
      local_e0 = local_178;
      puVar10 = (undefined4 *)
                FUN_140e634e0(param_1,param_2,&local_218,6,CONCAT44(uVar26,DAT_1419fd6d8),&local_110
                             );
      if (puVar10 != local_168) {
        local_298 = *puVar10;
        uStack_294 = puVar10[1];
        uStack_290 = puVar10[2];
        uStack_28c = puVar10[3];
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_298);
      }
      local_d8 = local_168;
      gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
                (param_1,param_2,&local_268,2,&local_e0);
    }
  }
  local_238 = 0x47;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 5;
  local_298 = _DAT_1419ed350;
  uStack_294 = uRam00000001419ed354;
  uStack_290 = uRam00000001419ed358;
  uStack_28c = uRam00000001419ed35c;
  if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_298);
  local_118 = local_1e8;
  local_298 = _DAT_1419ed340;
  uStack_294 = uRam00000001419ed344;
  uStack_290 = uRam00000001419ed348;
  uStack_28c = uRam00000001419ed34c;
  if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_298);
  local_108 = &local_208;
  local_298 = (undefined4)DAT_1419df7b0;
  uStack_294 = DAT_1419df7b0._4_4_;
  uStack_290 = DAT_1419df7b8;
  uStack_28c = DAT_1419df7bc;
  local_110 = local_1d8;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_298);
  local_100 = &local_1b8;
  ppuVar25 = &local_118;
  FUN_14044e5b0(param_1,param_2,&local_2a8,4,ppuVar25);
  uVar26 = (undefined4)((ulonglong)ppuVar25 >> 0x20);
  local_238 = 0x49;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 5;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f59b8);
  if (puVar11 != local_1e8) {
    local_298 = *(undefined4 *)puVar11;
    uStack_294 = *(undefined4 *)((longlong)puVar11 + 4);
    uStack_290 = *(undefined4 *)(puVar11 + 1);
    uStack_28c = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_298);
  }
  local_118 = local_1e8;
  local_298 = _DAT_1419ed360;
  uStack_294 = uRam00000001419ed364;
  uStack_290 = uRam00000001419ed368;
  uStack_28c = uRam00000001419ed36c;
  if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_298);
  puVar11 = (undefined8 *)CONCAT44(uVar26,DAT_141a01af8);
  local_110 = local_1d8;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_2a8,2,puVar11,&local_118);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 != '\0') {
    local_238 = 0x4a;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_27c = 0;
    local_288 = 0.0;
    bVar2 = true;
    do {
      uVar26 = (undefined4)((ulonglong)puVar11 >> 0x20);
      if (!bVar2) {
        local_238 = 0x4a;
        uVar5 = local_27c & 0xffffff;
        if (uVar5 == 0) {
LAB_140ca0d40:
          local_288 = (double)CONCAT44(uVar20,uVar19) + 1.0;
        }
        else if (uVar5 == 1) {
          local_288 = (double)FUN_140e4b060(&local_288);
          local_288 = local_288 + 1.0;
          local_27c = 0;
        }
        else if (uVar5 == 7) {
          local_288 = (double)CONCAT44(local_288._4_4_,local_288._0_4_ + 1);
        }
        else if (uVar5 == 10) {
          local_288 = (double)((longlong)local_288 + 1);
        }
        else {
          if (uVar5 == 0xd) {
            local_27c = 0;
            goto LAB_140ca0d40;
          }
          FUN_140042910(&DAT_14172c3d8,&local_288,&local_288);
        }
      }
      bVar2 = false;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      puVar11 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f59b8);
      if (puVar11 != local_1e8) {
        local_298 = *(undefined4 *)puVar11;
        uStack_294 = *(undefined4 *)((longlong)puVar11 + 4);
        uStack_290 = *(undefined4 *)(puVar11 + 1);
        uStack_28c = *(undefined4 *)((longlong)puVar11 + 0xc);
        if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_298);
      }
      local_118 = local_1e8;
      ppuVar25 = &local_118;
      uVar22 = CONCAT44(uVar26,DAT_1419f5e98);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_2a8,1,uVar22,ppuVar25);
      iVar4 = FUN_140e851f0(&local_288,uVar6,DAT_141955260,1);
      if ((iVar4 == -2) || (-1 < iVar4)) break;
      local_238 = 0x4c;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if ((int)local_78[0] < 1) {
        puVar11 = &DAT_1419df7b0;
      }
      else {
        puVar11 = (undefined8 *)*local_70;
      }
      uVar22 = uVar22 & 0xffffffffffffff00;
      FUN_140e87440(puVar11,DAT_141a1f440,0x80000000,&local_278,uVar22,
                    (ulonglong)ppuVar25 & 0xffffffffffffff00);
      uVar19 = (undefined4)(uVar22 >> 0x20);
      local_298 = (undefined4)local_278;
      uStack_294 = local_278._4_4_;
      uStack_290 = uStack_270;
      uStack_28c = uStack_26c;
      if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_298);
      uVar9 = CONCAT44(uVar19,DAT_141a02ef8);
      local_110 = local_1d8;
      uVar6 = FUN_140e634e0(param_1,param_2,&local_268,1,uVar9,&local_110);
      uVar19 = (undefined4)((ulonglong)uVar9 >> 0x20);
      cVar3 = FUN_140e491e0(uVar6);
      if (cVar3 == '\0') goto LAB_140ca11b4;
      local_238 = 0x4e;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      puVar11 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f59b8);
      if (puVar11 != local_1e8) {
        local_298 = *(undefined4 *)puVar11;
        uStack_294 = *(undefined4 *)((longlong)puVar11 + 4);
        uStack_290 = *(undefined4 *)(puVar11 + 1);
        uStack_28c = *(undefined4 *)((longlong)puVar11 + 0xc);
        if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_298);
      }
      local_118 = local_1e8;
      local_110 = &local_288;
      ppuVar25 = &local_118;
      uVar22 = CONCAT44(uVar19,DAT_1419f5a78);
      puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2a8,2,uVar22,ppuVar25);
      if (puVar11 != &local_1f8) {
        local_298 = *(undefined4 *)puVar11;
        uStack_294 = *(undefined4 *)((longlong)puVar11 + 4);
        uStack_290 = *(undefined4 *)(puVar11 + 1);
        uStack_28c = *(undefined4 *)((longlong)puVar11 + 0xc);
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_298);
      }
      local_238 = 0x50;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      if ((int)local_78[0] < 1) {
        puVar11 = &DAT_1419df7b0;
      }
      else {
        puVar11 = (undefined8 *)*local_70;
      }
      uVar24 = (ulonglong)ppuVar25 & 0xffffffffffffff00;
      uVar22 = uVar22 & 0xffffffffffffff00;
      FUN_140e87440(puVar11,DAT_141a1f440,0x80000000,&local_278,uVar22,uVar24);
      uVar24 = uVar24 & 0xffffffffffffff00;
      uVar22 = uVar22 & 0xffffffffffffff00;
      FUN_140e87440(&local_278,DAT_141a1edd0,0x80000000,&local_c8,uVar22,uVar24);
      if ((int)local_78[0] < 1) {
        puVar11 = &DAT_1419df7b0;
      }
      else {
        puVar11 = (undefined8 *)*local_70;
      }
      FUN_140e87440(puVar11,DAT_141a1f4e0,0x80000000,&local_228,uVar22 & 0xffffffffffffff00,
                    uVar24 & 0xffffffffffffff00);
      local_118 = &local_1f8;
      local_298 = (undefined4)local_228;
      uStack_294 = local_228._4_4_;
      uStack_290 = uStack_220;
      uStack_28c = uStack_21c;
      if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_298);
      switch(uStack_26c) {
      default:
switchD_140ca1140_caseD_1:
        dVar15 = 0.0;
        local_110 = local_1d8;
        break;
      case 6:
        dVar15 = local_278;
        local_110 = local_1d8;
        break;
      case 0xf:
        iVar4 = (int)((ulonglong)local_278 >> 0x20);
        if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140ca1140_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        local_110 = local_1d8;
        uVar19 = FUN_140e4a8b0(&local_278);
        dVar15 = (double)FUN_140e87250(uVar19);
      }
      puVar11 = &local_c8;
      FUN_140e63610(dVar15,param_2,&local_2a8,2,puVar11,&local_118);
      uVar19 = SUB84(local_288,0);
      uVar20 = (undefined4)((ulonglong)local_288 >> 0x20);
    } while( true );
  }
LAB_140ca11bb:
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  _eh_vector_destructor_iterator_(local_1e8,0x10,9,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar11 = local_70;
    do {
      puVar1 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_248;
  return param_3;
LAB_140ca11b4:
  local_238 = 0x4c;
  goto LAB_140ca11bb;
}

