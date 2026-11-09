// gml_Script_anon_1993____struct___395_gml_Object_oBossThePest_Create_0 @ 0x14080e780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1993____struct___395_gml_Object_oBossThePest_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar12;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  ulonglong in_stack_fffffffffffffe80;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  uint local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_130 = "gml_Script_anon@1081@___struct___394@gml_Object_oBossThePest_Create_0";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x3c;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_118,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57ca0);
  local_8c = 0xffffff;
  local_98 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x3e;
  uStack_16c = 0xd;
  local_178 = (longlong *)0x0;
  if (&local_178 != puVar4) {
    local_158 = (longlong *)0x0;
    uStack_150 = uStack_170;
    uStack_14c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_158);
  }
  local_128 = 0x3f;
  uStack_16c = 0xd;
  local_178 = (longlong *)0x0;
  if (&local_178 != puVar5) {
    local_158 = (longlong *)0x0;
    uStack_150 = uStack_170;
    uStack_14c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_158);
  }
  local_128 = 0x41;
  uStack_14c = 6;
  in_stack_fffffffffffffe80 = in_stack_fffffffffffffe80 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_141a0a728,0x80000000,&local_98,uVar9,in_stack_fffffffffffffe80);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 0xf;
  local_158 = (longlong *)0x100000100000345;
  iVar2 = FUN_140e851f0(&local_98,&local_158,DAT_141955260,0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar2 != 0) goto LAB_14080ee08;
  local_128 = 0x43;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a0a848,0x80000000,&local_58,uVar9,
                in_stack_fffffffffffffe80 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar9 >> 0x20);
  local_178 = (longlong *)CONCAT44(uRam0000000141dc6a34,_DAT_141dc6a30);
  uStack_170 = uRam0000000141dc6a38;
  uStack_16c = uRam0000000141dc6a3c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_178);
  local_b8 = &local_118;
  ppuVar11 = &local_b8;
  puVar7 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_168,1,CONCAT44(uVar12,DAT_141a0a0d8),ppuVar11);
  uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_150 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_158 = (longlong *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_158,puVar7);
  }
  uStack_16c = 7;
  local_178 = (longlong *)CONCAT44(local_178._4_4_,2);
  FUN_140042560(&local_158,&local_178);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uVar3 = FUN_140e851f0(&local_58,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (uVar3 < 0x80000000) {
    local_128 = 0x44;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_cc = 0;
    local_d8 = 0x3ff0000000000000;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_d8);
  }
  local_128 = 0x46;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_178 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_170 = DAT_1419df7b8;
  uStack_16c = DAT_1419df7bc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_178);
  local_b8 = &local_118;
  local_178 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_170 = DAT_1419df7b8;
  uStack_16c = DAT_1419df7bc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_178);
  local_b0 = local_108;
  ppuVar10 = &local_b8;
  uVar6 = gml_Script_animcurve_lerp(param_1,param_2,&local_168,2,ppuVar10);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    local_128 = 0x48;
    uStack_16c = 0xf;
    local_178 = (longlong *)0x100000100000357;
    local_158 = (longlong *)0x100000100000357;
    uStack_150 = uStack_170;
    uStack_14c = 0xf;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_158);
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_c8);
    local_128 = 0x49;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_13c = 0;
    local_148 = 0.0;
    FUN_140e87930(uVar6,DAT_141a0a848,0x80000000,&local_148);
  }
  local_128 = 0x4d;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  in_stack_fffffffffffffe80 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a0a848,0x80000000,&local_148,uVar9,in_stack_fffffffffffffe80);
  uVar3 = local_13c & 0xffffff;
  if (uVar3 == 0) {
LAB_14080ede5:
    local_148 = local_148 + 1.0;
  }
  else {
    if (uVar3 == 1) {
      local_148 = (double)FUN_140e4b060(&local_148);
      local_13c = 0;
      goto LAB_14080ede5;
    }
    if (uVar3 == 7) {
      local_148 = (double)CONCAT44(local_148._4_4_,local_148._0_4_ + 1);
    }
    else if (uVar3 == 10) {
      local_148 = (double)((longlong)local_148 + 1);
    }
    else {
      if (uVar3 == 0xd) {
        local_13c = 0;
        goto LAB_14080ede5;
      }
      FUN_140042910(&DAT_14172c3d8,&local_148,&local_148);
    }
  }
  FUN_140e87930(uVar6,DAT_141a0a848,0x80000000,&local_148);
LAB_14080ee08:
  local_128 = 0x50;
  uStack_16c = 6;
  in_stack_fffffffffffffe80 = in_stack_fffffffffffffe80 & 0xffffffffffffff00;
  ppuVar11 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_98,ppuVar11,in_stack_fffffffffffffe80);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_16c = 0xf;
  local_178 = (longlong *)0x100000100000357;
  iVar2 = FUN_140e851f0(&local_98,&local_178,DAT_141955260,0);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar2 == 0) {
    local_128 = 0x52;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_cc = 0;
    local_d8 = 0x3ff0000000000000;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_d8);
    local_128 = 0x53;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_178 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_170 = DAT_1419df7b8;
    uStack_16c = DAT_1419df7bc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
    local_b8 = &local_118;
    local_178 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_170 = DAT_1419df7b8;
    uStack_16c = DAT_1419df7bc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_178);
    local_b0 = local_108;
    ppuVar11 = &local_b8;
    uVar6 = gml_Script_animcurve_lerp(param_1,param_2,&local_168,2,ppuVar11);
    cVar1 = FUN_140e491e0(uVar6);
    if (cVar1 != '\0') {
      local_128 = 0x55;
      uStack_16c = 0xf;
      local_178 = (longlong *)0x100000100000379;
      local_158 = (longlong *)0x100000100000379;
      uStack_150 = uStack_170;
      uStack_14c = 0xf;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_158);
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_c8);
      local_128 = 0x56;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      ppuVar11 = (undefined8 **)0x0;
      FUN_140265ac0(param_1,param_2,&local_168,0,0);
    }
  }
  local_128 = 0x5c;
  uStack_16c = 6;
  in_stack_fffffffffffffe80 = in_stack_fffffffffffffe80 & 0xffffffffffffff00;
  uVar9 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_98,uVar9,in_stack_fffffffffffffe80);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_16c = 0xf;
  local_178 = (longlong *)0x100000100000379;
  iVar2 = FUN_140e851f0(&local_98,&local_178,DAT_141955260,0);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar2 == 0) {
    uStack_16c = 6;
    in_stack_fffffffffffffe80 = in_stack_fffffffffffffe80 & 0xffffffffffffff00;
    local_178 = param_1;
    FUN_140e87440(&local_178,DAT_141a0cfc8,0x80000000,&local_68,uVar9 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe80);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    uStack_16c = 0;
    local_178 = (longlong *)0x4014000000000000;
    iVar2 = FUN_140e851f0(&local_68,&local_178,DAT_141955260,1);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (0 < iVar2) {
      local_128 = 0x5f;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      local_178 = (longlong *)CONCAT44(uRam00000001419e8a54,_DAT_1419e8a50);
      uStack_170 = uRam00000001419e8a58;
      uStack_16c = uRam00000001419e8a5c;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
      local_b8 = &local_118;
      local_178 = (longlong *)CONCAT44(uRam00000001419e8a14,_DAT_1419e8a10);
      uStack_170 = uRam00000001419e8a18;
      uStack_16c = uRam00000001419e8a1c;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_178);
      local_b0 = local_108;
      local_f8 = FUN_140e79480(0);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_ec = 0;
      local_a8 = &local_f8;
      local_178 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_170 = DAT_1419df7b8;
      uStack_16c = DAT_1419df7bc;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_178);
      local_a0 = local_e8;
      FUN_14044e5b0(param_1,param_2,&local_168,4,&local_b8);
      local_128 = 0x60;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      local_178 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_170 = DAT_1419df7b8;
      uStack_16c = DAT_1419df7bc;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
      local_b8 = &local_118;
      local_178 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_170 = DAT_1419df7b8;
      uStack_16c = DAT_1419df7bc;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_178);
      local_b0 = local_108;
      ppuVar11 = &local_b8;
      uVar6 = gml_Script_animcurve_lerp(param_1,param_2,&local_168,2,ppuVar11);
      cVar1 = FUN_140e491e0(uVar6);
      if (cVar1 != '\0') {
        local_128 = 0x62;
        uStack_16c = 0xf;
        local_178 = (longlong *)0x1000000000000ee;
        local_158 = (longlong *)0x1000000000000ee;
        uStack_150 = uStack_170;
        uStack_14c = 0xf;
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_158);
        uStack_16c = 0xf;
        local_178 = (longlong *)0x100000000000058;
        FUN_140e87930(&local_178,DAT_141a1f440,0x80000000,&local_88);
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_128 = 99;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_168 = 0;
        local_160 = 0;
        local_15c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
        FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_78,
                      (ulonglong)ppuVar11 & 0xffffffffffffff00,
                      in_stack_fffffffffffffe80 & 0xffffffffffffff00);
        local_178 = (longlong *)CONCAT44(uRam0000000141dd6dac,_DAT_141dd6da8);
        uStack_170 = uRam0000000141dd6db0;
        uStack_16c = DAT_141dd6db4;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_178);
        local_b8 = &local_118;
        uVar6 = FUN_140069500(uVar6);
        FUN_140e63610(uVar6,param_2,&local_168,1,&local_78,&local_b8);
        local_128 = 100;
        uStack_16c = 0xd;
        local_178 = (longlong *)0x3ff0000000000000;
        if (&local_178 != puVar4) {
          local_158 = (longlong *)0x3ff0000000000000;
          uStack_150 = uStack_170;
          uStack_14c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_158);
        }
        local_128 = 0x65;
        uStack_16c = 0xd;
        local_178 = (longlong *)0x3ff0000000000000;
        if (&local_178 != puVar5) {
          local_158 = (longlong *)0x3ff0000000000000;
          uStack_150 = uStack_170;
          uStack_14c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_158);
        }
        local_128 = 0x67;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09c88);
        if (puVar4 != &local_118) {
          local_178 = (longlong *)*puVar4;
          uStack_170 = *(undefined4 *)(puVar4 + 1);
          uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_178);
        }
        local_b8 = &local_118;
        FUN_140edd0e0(param_1,param_2,1,&local_b8);
        local_128 = 0x69;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_168 = 0;
        local_160 = 0;
        local_15c = 5;
        uStack_16c = 0xf;
        local_178 = (longlong *)0x100000200000014;
        local_158 = (longlong *)0x100000200000014;
        uStack_150 = uStack_170;
        uStack_14c = 0xf;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_158);
        local_b8 = &local_118;
        gml_Script_jb_track_is_paused(param_1,param_2,&local_168,1,&local_b8);
      }
    }
  }
  local_128 = 0x6d;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_168,0,uVar6,0);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

