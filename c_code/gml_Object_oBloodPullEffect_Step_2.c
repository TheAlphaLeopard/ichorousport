// gml_Object_oBloodPullEffect_Step_2 @ 0x1406e3280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodPullEffect_Step_2(longlong *param_1,ulonglong param_2)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong **pplVar6;
  double *pdVar7;
  undefined8 uVar8;
  double *pdVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  longlong *plVar13;
  undefined4 uVar17;
  longlong ***ppplVar14;
  ulonglong uVar15;
  double **ppdVar16;
  longlong ***ppplVar18;
  ulonglong uVar19;
  longlong ***ppplVar20;
  longlong *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  longlong *local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  longlong *local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  double local_1d0;
  uint local_1c4;
  longlong *local_1b8;
  byte local_1ac;
  undefined8 local_1a8;
  byte local_19c;
  longlong *local_198;
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  longlong **local_178;
  undefined8 *local_170;
  longlong **local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  double local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  ppplVar20 = &local_178;
  local_1e0 = "gml_Object_oBloodPullEffect_Step_0";
  local_1d8 = 0;
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  uVar17 = 1;
  _eh_vector_constructor_iterator_(&local_1b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_6c = 0xffffff;
  local_78 = 0;
  pplVar6 = (longlong **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a042d8);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_1fc = 0xffffff;
  local_208 = (longlong *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0;
  pdVar7 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_1d8 = 3;
  uStack_230 = (longlong *)CONCAT44(0xf,(undefined4)uStack_230);
  local_238 = (longlong *)0x10000000000001b;
  local_248 = (longlong *)0x10000000000001b;
  uStack_240 = (longlong *)CONCAT44(0xf,(undefined4)uStack_230);
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_248);
  local_178 = &local_1b8;
  ppplVar18 = ppplVar20;
  uVar8 = FUN_140e634e0(param_1,param_2,&local_218,1,CONCAT44(uVar17,DAT_141a02ef8),ppplVar20);
  cVar2 = FUN_140e491e0(uVar8);
  if (cVar2 == '\0') {
    local_1d8 = 5;
    FUN_140edd0e0(param_1,param_2,0,0);
    local_1d8 = 6;
    goto LAB_1406e4d5a;
  }
  local_1d8 = 10;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  local_238 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_230 = (longlong *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_238);
  local_178 = &local_1b8;
  local_238 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_230 = (longlong *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_238);
  local_170 = &local_1a8;
  ppplVar14 = ppplVar20;
  uVar8 = gml_Script_animcurve_lerp(param_1,param_2,&local_218,2,ppplVar20);
  cVar2 = FUN_140e491e0(uVar8);
  if (cVar2 != '\0') {
    local_1d8 = 0xc;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    uVar17 = (undefined4)((ulonglong)ppplVar14 >> 0x20);
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
    if ((longlong **)pdVar9 != &local_198) {
      local_238 = (longlong *)*pdVar9;
      uStack_230 = (longlong *)pdVar9[1];
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_238);
    }
    local_168 = &local_198;
    ppplVar18 = &local_168;
    ppplVar14 = (longlong ***)CONCAT44(uVar17,DAT_141a02ef8);
    uVar8 = FUN_140e634e0(param_1,param_2,&local_1f8,1,ppplVar14,ppplVar18);
    cVar2 = FUN_140e491e0(uVar8);
    if (cVar2 != '\0') {
      local_1d8 = 0xd;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
      uStack_230 = (longlong *)CONCAT44(0xd,(undefined4)uStack_230);
      local_238 = (longlong *)0x0;
      local_248 = (longlong *)0x0;
      uStack_240 = uStack_230;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_248);
      FUN_140e87930(uVar8,DAT_141a04198,0x80000000,&local_148);
    }
    local_1d8 = 0xf;
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  local_1d8 = 0x13;
  uStack_240._4_4_ = 6;
  uVar19 = (ulonglong)ppplVar18 & 0xffffffffffffff00;
  uVar15 = (ulonglong)ppplVar14 & 0xffffffffffffff00;
  local_248 = param_1;
  FUN_140e87440(&local_248,DAT_141a0cfc8,0x80000000,&local_c8,uVar15,uVar19);
  if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_240 = (longlong *)(ulonglong)(uint)uStack_240;
  local_248 = (longlong *)0x4010000000000000;
  uVar3 = FUN_140e851f0(&local_c8,&local_248,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (uVar3 < 0x80000000) {
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
    uStack_240 = (longlong *)((ulonglong)uStack_240 & 0xffffffff);
    local_248 = (longlong *)0xc010000000000000;
    iVar4 = FUN_140e851f0(uVar8,&local_248,DAT_141955260,0);
    if ((1 << ((byte)((ulonglong)uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (iVar4 != 0) goto LAB_1406e45df;
    uStack_240 = (longlong *)CONCAT44(0xf,(uint)uStack_240);
    local_248 = (longlong *)0x100000000000019;
    dVar1 = (double)FUN_140e4b060(&local_248);
    iVar4 = FUN_140edd1e0(param_1,param_2,(int)dVar1);
    if ((1 << ((byte)((ulonglong)uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (0x95 < iVar4) goto LAB_1406e45df;
    local_1d8 = 0x15;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04268);
    uStack_240._4_4_ = 6;
    uVar19 = uVar19 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    local_248 = param_1;
    FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_48,uVar15,uVar19);
    if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uStack_240._4_4_ = 6;
    uVar19 = uVar19 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    local_248 = param_1;
    FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_58,uVar15,uVar19);
    if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uStack_240._4_4_ = 6;
    uVar15 = uVar15 & 0xffffffffffffff00;
    local_248 = param_1;
    FUN_140e87440(&local_248,DAT_141a1b910,0x80000000,&local_68,uVar15,uVar19 & 0xffffffffffffff00);
    uVar17 = (undefined4)(uVar15 >> 0x20);
    if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_238 = (longlong *)local_48;
    uStack_230 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_238);
    local_178 = &local_1b8;
    local_238 = (longlong *)local_58;
    uStack_230 = (longlong *)CONCAT44(uStack_4c,uStack_50);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_238);
    local_170 = &local_1a8;
    local_238 = (longlong *)local_68;
    uStack_230 = (longlong *)CONCAT44(uStack_5c,uStack_60);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_238);
    local_168 = &local_198;
    uStack_230 = (longlong *)CONCAT44(0xf,(undefined4)uStack_230);
    local_238 = (longlong *)0x100000000000019;
    local_248 = (longlong *)0x100000000000019;
    uStack_240 = (longlong *)CONCAT44(0xf,(undefined4)uStack_230);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_248);
    local_160 = &local_188;
    FUN_140e609c0(param_1);
    uVar15 = CONCAT44(uVar17,DAT_141a0a7c8);
    ppplVar18 = ppplVar20;
    puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_218,4,uVar15,ppplVar20);
    if (puVar11 != puVar10) {
      local_238 = (longlong *)*puVar11;
      uStack_230 = (longlong *)puVar11[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      FUN_140041b80(puVar10,&local_238);
    }
    FUN_140e60910(1);
    local_1d8 = 0x16;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_1419ef198,0x80000000,&local_78,uVar15,
                  (ulonglong)ppplVar18 & 0xffffffffffffff00);
    uVar17 = (undefined4)(uVar15 >> 0x20);
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_248,gml_Object_oBloodPullManager_Create_0,0);
    if (&local_248 != pplVar6) {
      local_238 = local_248;
      uStack_230 = uStack_240;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_238);
    }
    FUN_140e60910(1);
    if (pplVar6 != &local_1b8) {
      local_238 = *pplVar6;
      uStack_230 = pplVar6[1];
      if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_238);
    }
    if ((1 << ((byte)((ulonglong)uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_178 = &local_1b8;
    if (puVar10 != &local_1a8) {
      local_238 = (longlong *)*puVar10;
      uStack_230 = (longlong *)puVar10[1];
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_238);
    }
    local_170 = &local_1a8;
    local_238 = (longlong *)local_78;
    uStack_230 = (longlong *)CONCAT44(uStack_6c,uStack_70);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_238);
    local_168 = &local_198;
    ppplVar18 = ppplVar20;
    puVar10 = (undefined8 *)
              FUN_140e634e0(param_1,param_2,&local_1f8,2,CONCAT44(uVar17,DAT_1419fd6d8),ppplVar20);
    if (puVar10 != &local_188) {
      local_238 = (longlong *)*puVar10;
      uStack_230 = (longlong *)puVar10[1];
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_238);
    }
    local_160 = &local_188;
    ppdVar16 = (double **)&local_168;
    gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
              (param_1,param_2,&local_218,2,ppdVar16);
    local_1d8 = 0x18;
    uStack_230 = (longlong *)CONCAT44(0xf,(undefined4)uStack_230);
    local_238 = (longlong *)0x1000000000000ee;
    local_248 = (longlong *)0x1000000000000ee;
    uStack_240 = (longlong *)CONCAT44(0xf,(undefined4)uStack_230);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_248);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
    FUN_140e87930(uVar5,DAT_1419ffea8,0x80000000,&local_d8);
    local_1d8 = 0x19;
    local_238 = (longlong *)0x3ff0000000000000;
    uVar17 = SUB84(uStack_230,0);
    uStack_230 = (longlong *)CONCAT44(0xd,uVar17);
    local_248 = (longlong *)0x3ff0000000000000;
    uStack_240 = (longlong *)CONCAT44(0xd,uVar17);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_248);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
    FUN_140e87930(uVar5,DAT_141a04198,0x80000000,&local_148);
    local_1d8 = 0x1a;
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
    if (puVar10 != &local_108) {
      local_238 = (longlong *)*puVar10;
      uStack_230 = (longlong *)puVar10[1];
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_238);
    }
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
    FUN_140e87930(uVar5,DAT_141a1f290,0x80000000,&local_108);
    local_1d8 = 0x1b;
    uStack_240._4_4_ = 6;
    uVar19 = (ulonglong)ppplVar18 & 0xffffffffffffff00;
    uVar15 = (ulonglong)ppdVar16 & 0xffffffffffffff00;
    local_248 = param_1;
    FUN_140e87440(&local_248,DAT_141a0a778,0x80000000,&local_208,uVar15,uVar19);
    if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uStack_21c = local_1fc;
    uStack_220 = local_200;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
      local_228 = local_208;
    }
    else {
      FUN_1400419b0(&local_228,&local_208);
    }
    uStack_240._4_4_ = 7;
    local_248 = (longlong *)CONCAT44(local_248._4_4_,0xb4);
    FUN_1400460e0(&local_228,&local_248);
    if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_238 = local_228;
    uStack_230 = (longlong *)CONCAT44(uStack_21c,uStack_220);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_238);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
    FUN_140e87930(uVar5,DAT_141a1eed0,0x80000000,&local_e8);
    local_1d8 = 0x1c;
    uStack_240._4_4_ = 6;
    uVar19 = uVar19 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    local_248 = param_1;
    FUN_140e87440(&local_248,DAT_141a0a778,0x80000000,&local_208,uVar15,uVar19);
    if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uStack_21c = local_1fc;
    uStack_220 = local_200;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
      local_228 = local_208;
    }
    else {
      FUN_1400419b0(&local_228,&local_208);
    }
    uStack_240._4_4_ = 7;
    local_248 = (longlong *)CONCAT44(local_248._4_4_,0xb4);
    FUN_1400460e0(&local_228,&local_248);
    if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_238 = local_228;
    uStack_230 = (longlong *)CONCAT44(uStack_21c,uStack_220);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_238);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
    FUN_140e86c30(uVar5,DAT_141a0a778,0x80000000,&local_158);
    local_1d8 = 0x1e;
    uStack_240._4_4_ = 0xf;
    local_248 = (longlong *)0x10000000000001b;
    uVar19 = uVar19 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_248,DAT_141a042e8,0x80000000,&local_88,uVar15,uVar19);
    if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uStack_240._4_4_ = 0xf;
    local_248 = (longlong *)0x10000000000001b;
    uVar19 = uVar19 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_248,DAT_141a042f8,0x80000000,&local_98,uVar15,uVar19);
    if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    iVar4 = FUN_140e851f0(&local_88,&local_98,DAT_141955260,1);
    if (iVar4 != -2 && iVar4 < 0) {
      local_1d8 = 0x20;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      uVar17 = (undefined4)(uVar15 >> 0x20);
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
      local_238 = (longlong *)CONCAT44(uRam0000000141dc68c4,_DAT_141dc68c0);
      uStack_230 = (longlong *)CONCAT44(uRam0000000141dc68cc,uRam0000000141dc68c8);
      if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_238);
      local_178 = &local_1b8;
      uVar15 = CONCAT44(uVar17,DAT_141a0a0d8);
      ppplVar18 = ppplVar20;
      pdVar9 = (double *)FUN_140e634e0(param_1,param_2,&local_218,1,uVar15,ppplVar20);
      uStack_21c = *(uint *)((longlong)pdVar9 + 0xc);
      uStack_220 = *(undefined4 *)(pdVar9 + 1);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
        local_228 = (longlong *)*pdVar9;
      }
      else {
        FUN_1400419b0(&local_228,pdVar9);
      }
      uStack_240._4_4_ = 0;
      local_248 = (longlong *)0x3fe0000000000000;
      FUN_140042560(&local_228,&local_248);
      if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_238 = local_228;
      uStack_230 = (longlong *)CONCAT44(uStack_21c,uStack_220);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_238);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140e87930(uVar5,DAT_141a04168,0x80000000,&local_f8);
      local_1d8 = 0x21;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
      uVar19 = (ulonglong)ppplVar18 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_140e87440(uVar5,DAT_141a04118,0x80000000,&local_128,uVar15,uVar19);
      FUN_140162d40(&local_128,1);
      FUN_140e87930(uVar5,DAT_141a04118,0x80000000,&local_128);
    }
    local_1d8 = 0x23;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04298);
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
    uVar19 = uVar19 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_141a04118,0x80000000,&local_128,uVar15,uVar19);
    FUN_140042560(&local_128,uVar5);
    FUN_140e87930(uVar8,DAT_141a04118,0x80000000,&local_128);
    local_1d8 = 0x24;
    uStack_240._4_4_ = 0xf;
    local_248 = (longlong *)0x10000000000001b;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_248,DAT_141a042e8,0x80000000,&local_1d0,uVar15,uVar19 & 0xffffffffffffff00)
    ;
    uVar17 = (undefined4)(uVar15 >> 0x20);
    if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uVar3 = local_1c4 & 0xffffff;
    if (uVar3 == 0) {
LAB_1406e4578:
      local_1d0 = local_1d0 + 1.0;
    }
    else {
      if (uVar3 == 1) {
        local_1d0 = (double)FUN_140e4b060(&local_1d0);
        local_1c4 = 0;
        goto LAB_1406e4578;
      }
      if (uVar3 == 7) {
        local_1d0 = (double)CONCAT44(local_1d0._4_4_,local_1d0._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_1d0 = (double)((longlong)local_1d0 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_1c4 = 0;
          goto LAB_1406e4578;
        }
        FUN_140042910(&DAT_14172c3d8,&local_1d0,&local_1d0);
      }
    }
    uStack_240 = (longlong *)CONCAT44(0xf,(uint)uStack_240);
    local_248 = (longlong *)0x10000000000001b;
    FUN_140e87930(&local_248,DAT_141a042e8,0x80000000,&local_1d0);
    if ((1 << ((byte)((ulonglong)uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
  }
  else {
LAB_1406e45df:
    uVar17 = (undefined4)(uVar15 >> 0x20);
  }
  local_1d8 = 0x29;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  pplVar6 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
  if (pplVar6 != &local_1b8) {
    local_238 = *pplVar6;
    uStack_230 = pplVar6[1];
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_238);
  }
  local_178 = &local_1b8;
  uVar15 = CONCAT44(uVar17,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_218,1,uVar15,ppplVar20);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 != '\0') {
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04288);
    uStack_240 = (longlong *)CONCAT44(6,(uint)uStack_240);
    uVar15 = uVar15 & 0xffffffffffffff00;
    local_248 = param_1;
    FUN_140e87440(&local_248,DAT_141a0cfc8,0x80000000,&local_c8,uVar15,
                  (ulonglong)ppplVar20 & 0xffffffffffffff00);
    uVar17 = (undefined4)(uVar15 >> 0x20);
    if ((1 << ((byte)((ulonglong)uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_238 = local_c8;
    uStack_230 = (longlong *)CONCAT44(uStack_bc,uStack_c0);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_238);
    local_170 = &local_1a8;
    if ((longlong **)pdVar9 != &local_198) {
      local_238 = (longlong *)*pdVar9;
      uStack_230 = (longlong *)pdVar9[1];
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_238);
    }
    local_168 = &local_198;
    uVar5 = FUN_140e634e0(param_1,param_2,&local_138,1,CONCAT44(uVar17,DAT_1419fe728),&local_168);
    uVar8 = FUN_140e634e0(param_1,param_2,&local_1f8,1,DAT_1419fe728,&local_170);
    iVar4 = FUN_140e851f0(uVar8,uVar5,DAT_141955260,0);
    if (iVar4 != 0) {
      local_1d8 = 0x2b;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
      plVar13 = param_1;
      uVar15 = param_2;
      FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_a8,param_1,param_2);
      uStack_240._4_4_ = 6;
      local_248 = param_1;
      FUN_140e87440(&local_248,DAT_141a0a778,0x80000000,&local_208,
                    (ulonglong)plVar13 & 0xffffffffffffff00,uVar15 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      uStack_21c = local_1fc;
      uStack_220 = local_200;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
        local_228 = local_208;
      }
      else {
        FUN_1400419b0(&local_228,&local_208);
      }
      uStack_230._4_4_ = 7;
      local_238 = (longlong *)CONCAT44(local_238._4_4_,0xb4);
      FUN_1400460e0(&local_228,&local_238);
      if ((1 << ((byte)uStack_230._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      plVar13 = local_228;
      if ((uStack_21c & 0xffffff) != 0) {
        plVar13 = (longlong *)FUN_140e4b060(&local_228);
      }
      fVar12 = (float)FUN_140e78f90(0x40000000,(float)(double)plVar13);
      uStack_240 = (longlong *)(ulonglong)(uint)uStack_240;
      local_248 = (longlong *)(double)fVar12;
      FUN_140042560(&local_248,pdVar7);
      FUN_1400460e0(&local_a8,&local_248);
      if ((1 << ((byte)((ulonglong)uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140e86c30(uVar5,DAT_1419fe0e8,0x80000000,&local_a8);
      local_1d8 = 0x2c;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
      plVar13 = param_1;
      FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_b8,param_1,param_2);
      uStack_230._4_4_ = 6;
      param_2 = param_2 & 0xffffffffffffff00;
      uVar15 = (ulonglong)plVar13 & 0xffffffffffffff00;
      local_238 = param_1;
      FUN_140e87440(&local_238,DAT_141a0a778,0x80000000,&local_208,uVar15,param_2);
      if ((1 << ((byte)uStack_230._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      uStack_21c = local_1fc;
      uStack_220 = local_200;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
        local_228 = local_208;
      }
      else {
        FUN_1400419b0(&local_228,&local_208);
      }
      uStack_230._4_4_ = 7;
      local_238 = (longlong *)CONCAT44(local_238._4_4_,0xb4);
      FUN_1400460e0(&local_228,&local_238);
      if ((1 << ((byte)uStack_230._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      plVar13 = local_228;
      if ((uStack_21c & 0xffffff) != 0) {
        plVar13 = (longlong *)FUN_140e4b060(&local_228);
      }
      fVar12 = (float)FUN_140e79010(0x40000000,(float)(double)plVar13);
      uStack_240 = (longlong *)((ulonglong)uStack_240 & 0xffffffff);
      local_248 = (longlong *)(double)fVar12;
      FUN_140042560(&local_248,pdVar7);
      FUN_1400460e0(&local_b8,&local_248);
      if ((1 << ((byte)((ulonglong)uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140e86c30(uVar5,DAT_1419fe158,0x80000000,&local_b8);
      local_1d8 = 0x2d;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04268);
      uStack_230._4_4_ = 6;
      local_238 = param_1;
      FUN_140e87440(&local_238,DAT_141a0a778,0x80000000,&local_208,uVar15 & 0xffffffffffffff00,
                    param_2 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_230._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      uStack_21c = local_1fc;
      uStack_220 = local_200;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
        local_228 = local_208;
      }
      else {
        FUN_1400419b0(&local_228,&local_208);
      }
      uStack_230._4_4_ = 7;
      local_238 = (longlong *)CONCAT44(local_238._4_4_,0xb4);
      FUN_1400460e0(&local_228,&local_238);
      if ((1 << ((byte)uStack_230._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      local_238 = local_228;
      uStack_230 = (longlong *)CONCAT44(uStack_21c,uStack_220);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_238);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140e86c30(uVar5,DAT_141a0a778,0x80000000,&local_158);
    }
  }
  local_1d8 = 0x31;
  if (pdVar7 != &local_118) {
    local_238 = (longlong *)*pdVar7;
    uStack_230 = (longlong *)pdVar7[1];
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_238);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_118);
LAB_1406e4d5a:
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_1b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return;
}

