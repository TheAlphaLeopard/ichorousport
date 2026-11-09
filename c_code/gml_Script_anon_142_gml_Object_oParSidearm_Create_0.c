// gml_Script_anon_142_gml_Object_oParSidearm_Create_0 @ 0x140bbbc60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_142_gml_Object_oParSidearm_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  code *pcVar19;
  ulonglong uVar20;
  undefined4 uVar24;
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 **ppuVar23;
  ulonglong in_stack_fffffffffffffd70;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  double local_268;
  uint local_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  char *local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  double local_200;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined8 local_1d8 [2];
  undefined8 local_1c8 [2];
  double local_1b8;
  byte local_1ac;
  double local_1a8;
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined4 local_168 [3];
  byte local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  uint local_13c;
  double local_138;
  uint local_12c;
  double local_128;
  uint local_11c;
  double local_118;
  uint local_10c;
  undefined8 *local_108;
  undefined8 *local_100;
  double *local_f8;
  double *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined4 *local_d0;
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
  
  local_220 = "gml_Script_anon@759@anon@142@gml_Object_oParSidearm_Create_0";
  local_228 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_228;
  local_218 = 0x22;
  FUN_140041df0(local_78,param_4,1,param_5);
  pcVar19 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_1d8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_24c = 0xffffff;
  local_258 = 0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_1f4 = 0xffffff;
  local_200 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_8c = 0xffffff;
  local_98 = 0;
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f6c18);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_25c = 0xffffff;
  local_268 = 0.0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_27c = 0;
  uVar17 = 0;
  uVar18 = 0;
  local_288 = 0;
  local_23c = 0;
  local_248 = 0;
  local_204 = 0;
  local_210 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_218 = 0x22;
  puVar10 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_70;
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_218 = 0x22;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    if (0 < (int)local_78[0]) {
      puVar10 = (undefined8 *)*local_70;
    }
    in_stack_fffffffffffffd70 = 0;
    pcVar19 = (code *)CONCAT44((int)((ulonglong)pcVar19 >> 0x20),DAT_1419fd6d8);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_288,0,pcVar19,0);
    if (puVar7 != puVar10) {
      local_238 = *puVar7;
      uStack_230 = *(undefined4 *)(puVar7 + 1);
      uStack_22c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      FUN_140041b80(puVar10,&local_238);
    }
  }
  local_218 = 0x24;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  if ((int)local_78[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_70;
  }
  uVar20 = (ulonglong)pcVar19 & 0xffffffffffffff00;
  FUN_140e87440(puVar10,DAT_141a1f440,0x80000000,&local_258,uVar20,
                in_stack_fffffffffffffd70 & 0xffffffffffffff00);
  uVar24 = (undefined4)(uVar20 >> 0x20);
  local_238 = local_258;
  uStack_230 = uStack_250;
  uStack_22c = uStack_24c;
  if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_238);
  local_108 = local_1d8;
  uVar8 = FUN_140e634e0(param_1,param_2,&local_288,1,CONCAT44(uVar24,DAT_141a02ef8),&local_108);
  cVar2 = FUN_140e491e0(uVar8);
  if (cVar2 == '\0') {
    local_218 = 0x24;
  }
  else {
    local_218 = 0x26;
    if ((int)local_78[0] < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_70;
    }
    FUN_140e87170(puVar10,DAT_1419fe0e8,0x80000000,&local_118,param_1,param_2);
    if ((int)local_78[0] < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_70;
    }
    plVar21 = param_1;
    uVar20 = param_2;
    FUN_140e87170(puVar10,DAT_1419fe158,0x80000000,&local_128,param_1,param_2);
    if ((int)local_78[0] < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_70;
    }
    FUN_140e87440(puVar10,DAT_141a1f440,0x80000000,&local_258,
                  (ulonglong)plVar21 & 0xffffffffffffff00,uVar20 & 0xffffffffffffff00);
    plVar21 = param_1;
    uVar20 = param_2;
    FUN_140e87170(&local_258,DAT_1419fe0e8,0x80000000,&local_138,param_1,param_2);
    if ((int)local_78[0] < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_70;
    }
    FUN_140e87440(puVar10,DAT_141a1f440,0x80000000,&local_258,
                  (ulonglong)plVar21 & 0xffffffffffffff00,uVar20 & 0xffffffffffffff00);
    plVar21 = param_1;
    uVar20 = param_2;
    FUN_140e87170(&local_258,DAT_1419fe158,0x80000000,&local_148,param_1,param_2);
    dVar13 = local_148;
    if ((local_13c & 0xffffff) != 0) {
      dVar13 = (double)FUN_140e4b060(&local_148);
    }
    dVar14 = local_138;
    if ((local_12c & 0xffffff) != 0) {
      dVar14 = (double)FUN_140e4b060(&local_138);
    }
    dVar15 = local_128;
    if ((local_11c & 0xffffff) != 0) {
      dVar15 = (double)FUN_140e4b060(&local_128);
    }
    dVar16 = local_118;
    if ((local_10c & 0xffffff) != 0) {
      dVar16 = (double)FUN_140e4b060(&local_118);
    }
    fVar12 = (float)FUN_140e793d0((float)dVar16,(float)dVar15,(float)dVar14,(float)dVar13);
    if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_200);
    }
    local_1f4 = 0;
    local_200 = (double)fVar12;
    local_218 = 0x28;
    if ((int)local_78[0] < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_70;
    }
    FUN_140e87440(puVar10,DAT_141a1f440,0x80000000,&local_258,
                  (ulonglong)plVar21 & 0xffffffffffffff00,uVar20 & 0xffffffffffffff00);
    plVar21 = param_1;
    uVar20 = param_2;
    FUN_140e87170(&local_258,DAT_141a1f580,0x80000000,&local_88,param_1,param_2);
    uStack_22c = 0xf;
    local_238 = 0x1000000000000ee;
    iVar3 = FUN_140e851f0(&local_88,&local_238,DAT_141955260,0);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if (iVar3 != 0) {
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
      if ((int)local_78[0] < 1) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)*local_70;
      }
      uVar22 = (ulonglong)plVar21 & 0xffffffffffffff00;
      FUN_140e87440(puVar10,DAT_141a1f4e0,0x80000000,&local_158,uVar22,uVar20 & 0xffffffffffffff00);
      uVar24 = (undefined4)(uVar22 >> 0x20);
      local_238 = local_158;
      uStack_230 = uStack_150;
      uStack_22c = uStack_14c;
      if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_238);
      local_108 = local_1d8;
      ppuVar23 = &local_108;
      uVar20 = CONCAT44(uVar24,DAT_141a02ef8);
      uVar8 = FUN_140e634e0(param_1,param_2,&local_288,1,uVar20,ppuVar23);
      cVar2 = FUN_140e491e0(uVar8);
      if (cVar2 != '\0') {
        local_218 = 0x2a;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_248 = 0;
        local_240 = 0;
        local_23c = 5;
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        local_210 = 0;
        local_208 = 0;
        local_204 = 5;
        uVar22 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
        uVar20 = uVar20 & 0xffffffffffffff00;
        FUN_140e87440(uVar5,DAT_1419eef58,0x80000000,&local_98,uVar20,uVar22);
        if ((int)local_78[0] < 1) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)*local_70;
        }
        uVar22 = uVar22 & 0xffffffffffffff00;
        uVar20 = uVar20 & 0xffffffffffffff00;
        FUN_140e87440(puVar10,DAT_141a1f440,0x80000000,&local_258,uVar20,uVar22);
        if ((int)local_78[0] < 1) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)*local_70;
        }
        FUN_140e87440(puVar10,DAT_141a1f4e0,0x80000000,&local_158,uVar20 & 0xffffffffffffff00,
                      uVar22 & 0xffffffffffffff00);
        plVar21 = param_1;
        uVar20 = param_2;
        FUN_140e87170(&local_158,DAT_141a0a828,0x80000000,&local_a8,param_1,param_2);
        if ((int)local_78[0] < 1) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)*local_70;
        }
        uVar22 = (ulonglong)plVar21 & 0xffffffffffffff00;
        FUN_140e87440(puVar10,DAT_141a0a7d8,0x80000000,&local_b8,uVar22,uVar20 & 0xffffffffffffff00)
        ;
        uVar24 = (undefined4)(uVar22 >> 0x20);
        FUN_140e609c0(DAT_141a729d8);
        FUN_140e645a0(&local_238,gml_Script____struct___602_anon_142_gml_Object_oParSidearm_Create_0
                      ,0);
        if (&local_238 != puVar6) {
          local_278 = (undefined4)local_238;
          uStack_274 = local_238._4_4_;
          uStack_270 = uStack_230;
          uStack_26c = uStack_22c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_278);
        }
        FUN_140e60910(1);
        if (puVar6 != local_1c8) {
          local_278 = *(undefined4 *)puVar6;
          uStack_274 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_270 = *(undefined4 *)(puVar6 + 1);
          uStack_26c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1c8);
          }
          FUN_140041b80(local_1c8,&local_278);
        }
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_100 = local_1c8;
        local_278 = (undefined4)local_258;
        uStack_274 = local_258._4_4_;
        uStack_270 = uStack_250;
        uStack_26c = uStack_24c;
        if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_278);
        local_f0 = &local_200;
        local_278 = (undefined4)local_a8;
        uStack_274 = local_a8._4_4_;
        uStack_270 = uStack_a0;
        uStack_26c = uStack_9c;
        local_f8 = &local_1b8;
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_278);
        local_e8 = local_198;
        local_278 = (undefined4)local_b8;
        uStack_274 = local_b8._4_4_;
        uStack_270 = uStack_b0;
        uStack_26c = uStack_ac;
        if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_188);
        }
        FUN_140041b80(local_188,&local_278);
        local_e0 = local_188;
        local_278 = (undefined4)local_98;
        uStack_274 = local_98._4_4_;
        uStack_270 = uStack_90;
        uStack_26c = uStack_8c;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_278);
        local_d8 = local_178;
        puVar9 = (undefined4 *)
                 FUN_140e634e0(param_1,param_2,&local_210,5,CONCAT44(uVar24,DAT_1419fd6d8),
                               &local_100);
        if (puVar9 != local_168) {
          local_278 = *puVar9;
          uStack_274 = puVar9[1];
          uStack_270 = puVar9[2];
          uStack_26c = puVar9[3];
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_278);
        }
        local_d0 = local_168;
        gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
                  (param_1,param_2,&local_248,2,&local_d8);
      }
    }
    local_218 = 0x32;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    local_278 = _DAT_1419ec870;
    uStack_274 = uRam00000001419ec874;
    uStack_270 = uRam00000001419ec878;
    uStack_26c = uRam00000001419ec87c;
    if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_278);
    local_108 = local_1d8;
    local_278 = _DAT_1419ec860;
    uStack_274 = uRam00000001419ec864;
    uStack_270 = uRam00000001419ec868;
    uStack_26c = uRam00000001419ec86c;
    if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_278);
    local_100 = local_1c8;
    local_f8 = &local_200;
    local_278 = (undefined4)DAT_1419df7b0;
    uStack_274 = DAT_1419df7b0._4_4_;
    uStack_270 = DAT_1419df7b8;
    uStack_26c = DAT_1419df7bc;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_278);
    local_f0 = &local_1a8;
    ppuVar23 = &local_108;
    FUN_14044e5b0(param_1,param_2,&local_288,4,ppuVar23);
    uVar24 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
    local_218 = 0x33;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f59b8);
    if (puVar10 != local_1d8) {
      local_278 = *(undefined4 *)puVar10;
      uStack_274 = *(undefined4 *)((longlong)puVar10 + 4);
      uStack_270 = *(undefined4 *)(puVar10 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_278);
    }
    local_108 = local_1d8;
    local_278 = _DAT_1419ec880;
    uStack_274 = uRam00000001419ec884;
    uStack_270 = uRam00000001419ec888;
    uStack_26c = uRam00000001419ec88c;
    if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_278);
    local_100 = local_1c8;
    puVar10 = (undefined8 *)CONCAT44(uVar24,DAT_141a01af8);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_288,2,puVar10,&local_108);
    cVar2 = FUN_140e491e0(uVar5);
    if (cVar2 != '\0') {
      local_218 = 0x34;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_25c = 0;
      local_268 = 0.0;
      bVar1 = true;
      do {
        uVar24 = (undefined4)((ulonglong)puVar10 >> 0x20);
        if (!bVar1) {
          local_218 = 0x34;
          uVar4 = local_25c & 0xffffff;
          if (uVar4 == 0) {
LAB_140bbcc7f:
            local_268 = (double)CONCAT44(uVar18,uVar17) + 1.0;
          }
          else if (uVar4 == 1) {
            local_268 = (double)FUN_140e4b060(&local_268);
            local_268 = local_268 + 1.0;
            local_25c = 0;
          }
          else if (uVar4 == 7) {
            local_268 = (double)CONCAT44(local_268._4_4_,local_268._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_268 = (double)((longlong)local_268 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_25c = 0;
              goto LAB_140bbcc7f;
            }
            FUN_140042910(&DAT_14172c3d8,&local_268,&local_268);
          }
        }
        bVar1 = false;
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        local_288 = 0;
        local_280 = 0;
        local_27c = 5;
        puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f59b8);
        if (puVar10 != local_1d8) {
          local_278 = *(undefined4 *)puVar10;
          uStack_274 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_270 = *(undefined4 *)(puVar10 + 1);
          uStack_26c = *(undefined4 *)((longlong)puVar10 + 0xc);
          if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_278);
        }
        local_108 = local_1d8;
        uVar8 = CONCAT44(uVar24,DAT_1419f5e98);
        uVar5 = FUN_140e634e0(param_1,param_2,&local_288,1,uVar8,&local_108);
        uVar17 = (undefined4)((ulonglong)uVar8 >> 0x20);
        iVar3 = FUN_140e851f0(&local_268,uVar5,DAT_141955260,1);
        if ((iVar3 == -2) || (-1 < iVar3)) break;
        local_218 = 0x36;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_248 = 0;
        local_240 = 0;
        local_23c = 5;
        puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f59b8);
        if (puVar10 != local_1c8) {
          local_278 = *(undefined4 *)puVar10;
          uStack_274 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_270 = *(undefined4 *)(puVar10 + 1);
          uStack_26c = *(undefined4 *)((longlong)puVar10 + 0xc);
          if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1c8);
          }
          FUN_140041b80(local_1c8,&local_278);
        }
        local_100 = local_1c8;
        local_f8 = &local_268;
        ppuVar23 = &local_100;
        uVar20 = CONCAT44(uVar17,DAT_1419f5a78);
        puVar10 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_248,2,uVar20,ppuVar23);
        if (puVar10 != &local_1f0) {
          local_278 = *(undefined4 *)puVar10;
          uStack_274 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_270 = *(undefined4 *)(puVar10 + 1);
          uStack_26c = *(undefined4 *)((longlong)puVar10 + 0xc);
          if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f0);
          }
          FUN_140041b80(&local_1f0,&local_278);
        }
        local_218 = 0x38;
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        local_288 = 0;
        local_280 = 0;
        local_27c = 5;
        if ((int)local_78[0] < 1) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)*local_70;
        }
        uVar22 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
        uVar20 = uVar20 & 0xffffffffffffff00;
        FUN_140e87440(puVar10,DAT_141a1f440,0x80000000,&local_258,uVar20,uVar22);
        FUN_140e87440(&local_258,DAT_141a1edd0,0x80000000,&local_c8,uVar20 & 0xffffffffffffff00,
                      uVar22 & 0xffffffffffffff00);
        local_108 = &local_1f0;
        switch(uStack_24c) {
        default:
switchD_140bbcf39_caseD_1:
          uVar5 = 0;
          break;
        case 6:
          uVar5 = local_258;
          break;
        case 0xf:
          iVar3 = (int)((ulonglong)local_258 >> 0x20);
          if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140bbcf39_caseD_1;
        case 0:
        case 7:
        case 10:
        case 0xd:
          uVar17 = FUN_140e4a8b0(&local_258);
          uVar5 = FUN_140e87250(uVar17);
        }
        puVar10 = &local_c8;
        FUN_140e63610(uVar5,param_2,&local_288,1,puVar10,&local_108);
        uVar17 = SUB84(local_268,0);
        uVar18 = (undefined4)((ulonglong)local_268 >> 0x20);
      } while( true );
    }
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
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
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
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
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  _eh_vector_destructor_iterator_(local_1d8,0x10,8,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar10 = local_70;
    do {
      puVar6 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_228;
  return param_3;
}

