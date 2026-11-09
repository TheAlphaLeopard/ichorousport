// gml_Script____struct___425_gml_Object_oDeathBloodEffect_Step_0 @ 0x1408e4a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script____struct___425_gml_Object_oDeathBloodEffect_Step_0
               (longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong **pplVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  ulonglong uVar16;
  ulonglong in_stack_fffffffffffffdb0;
  longlong *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  longlong *local_238;
  undefined8 uStack_230;
  double local_228;
  uint local_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  double local_1f0;
  uint local_1e4;
  double local_1e0;
  uint local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  double *local_1a0;
  double *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  double local_178;
  byte local_16c;
  double local_168;
  byte local_15c;
  undefined8 local_158 [2];
  undefined8 local_148 [2];
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  
  local_210 = "gml_Object_oDeathBloodEffect_Create_0";
  local_208 = 0;
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  pcVar15 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_178,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  uStack_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_21c = 0xffffff;
  local_228 = 0.0;
  uStack_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  local_1d4 = 0xffffff;
  local_1e0 = 0.0;
  local_1e4 = 0xffffff;
  local_1f0 = 0.0;
  local_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  local_11c = 0xffffff;
  local_128 = 0;
  uVar13 = 0xffffff;
  uStack_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_208 = 2;
  local_8c = 0;
  local_98 = 0xc08f400000000000;
  FUN_140e86fa0(param_1,DAT_141a02ee8,0x80000000,&local_98);
  local_208 = 4;
  pplVar8 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeb58);
  uStack_23c = 6;
  in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
  uVar16 = (ulonglong)pcVar15 & 0xffffffffffffff00;
  local_248 = param_1;
  FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_e8,uVar16,in_stack_fffffffffffffdb0);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e609c0(param_1);
  if (&local_e8 != pplVar8) {
    uStack_230 = CONCAT44(uStack_dc,uStack_e0);
    local_238 = local_e8;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar8);
    }
    FUN_140041b80(pplVar8,&local_238);
  }
  FUN_140e60910(1);
  local_208 = 5;
  pplVar8 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeaf8);
  uStack_23c = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_248 = param_1;
  FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_f8,uVar16,
                in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e609c0(param_1);
  if (&local_f8 != pplVar8) {
    uStack_230 = CONCAT44(uStack_ec,uStack_f0);
    local_238 = local_f8;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar8);
    }
    FUN_140041b80(pplVar8,&local_238);
  }
  FUN_140e60910(1);
  local_208 = 7;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeae8);
  uVar14 = FUN_140e78f40(3);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar9);
  }
  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
  *puVar9 = uVar14;
  local_208 = 8;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
  FUN_140e609c0(param_1);
  puVar10 = (undefined8 *)FUN_140e8da20(&local_a8,param_1,0);
  if (puVar10 != puVar9) {
    local_238 = (longlong *)*puVar10;
    uStack_230 = puVar10[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_238);
  }
  FUN_140e60910(1);
  local_208 = 9;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08788);
  FUN_140e609c0(param_1);
  puVar10 = (undefined8 *)FUN_140e8da20(&local_b8,param_1,0);
  if (puVar10 != puVar9) {
    local_238 = (longlong *)*puVar10;
    uStack_230 = puVar10[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_238);
  }
  FUN_140e60910(1);
  local_208 = 10;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_21c = 0;
  local_228 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_208 = 10;
      uVar4 = local_21c & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_228 = (double)CONCAT44(local_228._4_4_,local_228._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_228 = (double)((longlong)local_228 + 1);
          }
          else {
            if (uVar4 == 0xd) goto LAB_1408e4f1a;
            FUN_140042910(&DAT_14172c3d8,&local_228,&local_228);
          }
          goto LAB_1408e4f2a;
        }
        local_228 = (double)FUN_140e4b060(&local_228);
LAB_1408e4f1a:
        local_21c = 0;
      }
      local_228 = local_228 + 1.0;
    }
LAB_1408e4f2a:
    bVar2 = false;
    uVar14 = (**(code **)(*param_1 + 8))(param_1,DAT_1419eeae8);
    iVar5 = FUN_140e851f0(&local_228,uVar14,DAT_141955260,1);
    uVar6 = (undefined4)(uVar16 >> 0x20);
    if ((iVar5 == -2) || (-1 < iVar5)) break;
    local_208 = 0xc;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
    FUN_140e609c0(param_1);
    uVar6 = FUN_140e4a740(&local_228);
    puVar10 = (undefined8 *)FUN_140e48e40(puVar9,uVar6);
    FUN_140e609c0(*(undefined8 *)*puVar9);
    uVar14 = FUN_140e79480();
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *puVar10 = uVar14;
    FUN_140e60910(2);
    local_208 = 0xd;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08788);
    FUN_140e609c0(param_1);
    uVar6 = FUN_140e4a740(&local_228);
    puVar10 = (undefined8 *)FUN_140e48e40(puVar9,uVar6);
    FUN_140e609c0(*(undefined8 *)*puVar9);
    uVar14 = FUN_140e794b0();
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *puVar10 = uVar14;
    FUN_140e60910(2);
  } while( true );
  local_208 = 0x10;
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a4 = 5;
  pplVar8 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eead8);
  local_238 = _DAT_141dc6d40;
  uStack_230 = uRam0000000141dc6d48;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_238);
  local_1a0 = &local_178;
  FUN_140e609c0(param_1);
  uVar14 = CONCAT44(uVar6,DAT_141a0a0d8);
  puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b0,1,uVar14,&local_1a0);
  uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
  uStack_240 = *(undefined4 *)(puVar9 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = (longlong *)*puVar9;
  }
  else {
    FUN_1400419b0(&local_248,puVar9);
  }
  uStack_230 = uStack_230 & 0xffffffff;
  local_238 = (longlong *)0x4012000000000000;
  FUN_140042560(&local_248,&local_238);
  if ((1 << ((byte)(uStack_230 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (&local_248 != pplVar8) {
    uStack_230 = CONCAT44(uStack_23c,uStack_240);
    local_238 = local_248;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar8);
    }
    FUN_140041b80(pplVar8,&local_238);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e60910(1);
  local_208 = 0x11;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar9);
  }
  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
  *puVar9 = 0;
  local_208 = 0x13;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeb18);
  FUN_140e609c0(param_1);
  puVar10 = (undefined8 *)FUN_140e8da20(&local_1b0,param_1,0);
  if (puVar10 != puVar9) {
    local_238 = (longlong *)*puVar10;
    uStack_230 = puVar10[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_238);
  }
  FUN_140e60910(1);
  local_208 = 0x14;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeb48);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar9);
  }
  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
  *puVar9 = 0x4024000000000000;
  local_208 = 0x15;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419eead8);
  pplVar8 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeab8);
  FUN_140e609c0(param_1);
  uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
  uStack_240 = *(undefined4 *)(puVar9 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = (longlong *)*puVar9;
  }
  else {
    FUN_1400419b0(&local_248,puVar9);
  }
  uStack_230 = uStack_230 & 0xffffffff;
  local_238 = (longlong *)0x3fe8000000000000;
  FUN_140042560(&local_248,&local_238);
  if ((1 << ((byte)(uStack_230 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (&local_248 != pplVar8) {
    uStack_230 = CONCAT44(uStack_23c,uStack_240);
    local_238 = local_248;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar8);
    }
    FUN_140041b80(pplVar8,&local_238);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e60910(1);
  local_208 = 0x16;
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  local_200 = 0;
  local_1f8 = 0;
  local_1f4 = 5;
  pplVar8 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eea98);
  local_238 = _DAT_141dc6d40;
  uStack_230 = uRam0000000141dc6d48;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_238);
  local_1a0 = &local_178;
  FUN_140e609c0(param_1);
  uVar14 = CONCAT44(uVar6,DAT_141a0a0d8);
  puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_200,1,uVar14,&local_1a0);
  uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
  uStack_240 = *(undefined4 *)(puVar9 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = (longlong *)*puVar9;
  }
  else {
    FUN_1400419b0(&local_248,puVar9);
  }
  uStack_230 = uStack_230 & 0xffffffff;
  local_238 = (longlong *)0x3ff3333333333333;
  FUN_140042560(&local_248,&local_238);
  if ((1 << ((byte)(uStack_230 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (&local_248 != pplVar8) {
    uStack_230 = CONCAT44(uStack_23c,uStack_240);
    local_238 = local_248;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar8);
    }
    FUN_140041b80(pplVar8,&local_238);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e60910(1);
  local_208 = 0x18;
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  local_200 = 0;
  local_1f8 = 0;
  local_1f4 = 5;
  pplVar8 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeaa8);
  local_238 = _DAT_141dc6d40;
  uStack_230 = uRam0000000141dc6d48;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_238);
  local_1a0 = &local_178;
  FUN_140e609c0(param_1);
  uVar14 = CONCAT44(uVar6,DAT_141a0a0d8);
  puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_200,1,uVar14,&local_1a0);
  uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
  uStack_240 = *(undefined4 *)(puVar9 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = (longlong *)*puVar9;
  }
  else {
    FUN_1400419b0(&local_248,puVar9);
  }
  uStack_230 = uStack_230 & 0xffffffff;
  local_238 = (longlong *)0x3fd0000000000000;
  FUN_140042560(&local_248,&local_238);
  if ((1 << ((byte)(uStack_230 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (&local_248 != pplVar8) {
    uStack_230 = CONCAT44(uStack_23c,uStack_240);
    local_238 = local_248;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar8);
    }
    FUN_140041b80(pplVar8,&local_238);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e60910(1);
  local_208 = 0x19;
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  local_200 = 0;
  local_1f8 = 0;
  local_1f4 = 5;
  pplVar8 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeb68);
  local_238 = _DAT_141dc6d40;
  uStack_230 = uRam0000000141dc6d48;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_238);
  local_1a0 = &local_178;
  FUN_140e609c0(param_1);
  uVar14 = CONCAT44(uVar6,DAT_141a0a0d8);
  puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_200,1,uVar14,&local_1a0);
  uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
  uStack_240 = *(undefined4 *)(puVar9 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = (longlong *)*puVar9;
  }
  else {
    FUN_1400419b0(&local_248,puVar9);
  }
  uStack_230 = CONCAT44(7,(undefined4)uStack_230);
  local_238 = (longlong *)CONCAT44(local_238._4_4_,4);
  FUN_140042560(&local_248,&local_238);
  if ((1 << ((byte)(uStack_230 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (&local_248 != pplVar8) {
    uStack_230 = CONCAT44(uStack_23c,uStack_240);
    local_238 = local_248;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar8);
    }
    FUN_140041b80(pplVar8,&local_238);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e60910(1);
  local_208 = 0x1b;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeb38);
  FUN_140e609c0(param_1);
  puVar10 = (undefined8 *)FUN_140e8da20(&local_200,param_1,0);
  if (puVar10 != puVar9) {
    local_238 = (longlong *)*puVar10;
    uStack_230 = puVar10[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_238);
  }
  FUN_140e60910(1);
  local_208 = 0x1d;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eea88);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar9);
  }
  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
  *puVar9 = 0x4044000000000000;
  local_208 = 0x1e;
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b4 = 5;
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c4 = 5;
  uVar14 = (**(code **)(*param_1 + 8))(param_1,DAT_1419eea88);
  pplVar8 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeb08);
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_108);
  uStack_230 = CONCAT44(uStack_fc,uStack_100);
  local_238 = local_108;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_238);
  uVar11 = CONCAT44(uVar6,DAT_141a00c98);
  local_1a0 = &local_178;
  puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1d0,1,uVar11,&local_1a0);
  uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
  uStack_240 = *(undefined4 *)(puVar9 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = (longlong *)*puVar9;
  }
  else {
    FUN_1400419b0(&local_248,puVar9);
  }
  FUN_140046500(&local_248,uVar14);
  uStack_230 = CONCAT44(uStack_23c,uStack_240);
  local_238 = local_248;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_238);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_198 = &local_168;
  FUN_140e609c0(param_1);
  uVar11 = CONCAT44(uVar6,DAT_141a08838);
  puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c0,1,uVar11,&local_198);
  uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
  uStack_240 = *(undefined4 *)(puVar9 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = (longlong *)*puVar9;
  }
  else {
    FUN_1400419b0(&local_248,puVar9);
  }
  uStack_230._4_4_ = 7;
  local_238 = (longlong *)CONCAT44(local_238._4_4_,2);
  FUN_1400460e0(&local_248,&local_238);
  if ((1 << ((byte)uStack_230._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (&local_248 != pplVar8) {
    local_238 = local_248;
    uStack_230._0_4_ = uStack_240;
    uStack_230._4_4_ = uStack_23c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar8);
    }
    FUN_140041b80(pplVar8,&local_238);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e60910(1);
  local_208 = 0x1f;
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b4 = 5;
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c4 = 5;
  pplVar8 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeb28);
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_108);
  uStack_230 = CONCAT44(uStack_fc,uStack_100);
  local_238 = local_108;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_238);
  uVar11 = CONCAT44(uVar6,DAT_141a00d58);
  local_1a0 = &local_178;
  puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1d0,1,uVar11,&local_1a0);
  uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
  uStack_240 = *(undefined4 *)(puVar9 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = (longlong *)*puVar9;
  }
  else {
    FUN_1400419b0(&local_248,puVar9);
  }
  FUN_140046500(&local_248,uVar14);
  uStack_230 = CONCAT44(uStack_23c,uStack_240);
  local_238 = local_248;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_238);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_198 = &local_168;
  FUN_140e609c0(param_1);
  uVar14 = CONCAT44(uVar6,DAT_141a08838);
  puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c0,1,uVar14,&local_198);
  uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
  uStack_240 = *(undefined4 *)(puVar9 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = (longlong *)*puVar9;
  }
  else {
    FUN_1400419b0(&local_248,puVar9);
  }
  uStack_230 = CONCAT44(7,(undefined4)uStack_230);
  local_238 = (longlong *)CONCAT44(local_238._4_4_,2);
  FUN_1400460e0(&local_248,&local_238);
  if ((1 << ((byte)(uStack_230 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (&local_248 != pplVar8) {
    uStack_230 = CONCAT44(uStack_23c,uStack_240);
    local_238 = local_248;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar8);
    }
    FUN_140041b80(pplVar8,&local_238);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e60910(1);
  local_208 = 0x21;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeb78);
  FUN_140e609c0(param_1);
  puVar10 = (undefined8 *)FUN_140e8da20(&local_1c0,param_1,0);
  if (puVar10 != puVar9) {
    local_238 = (longlong *)*puVar10;
    uStack_230 = puVar10[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_238);
  }
  FUN_140e60910(1);
  local_208 = 0x22;
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  local_1d4 = 0;
  local_1e0 = 0.0;
  bVar2 = true;
LAB_1408e5eb5:
  if (!bVar2) {
    local_208 = 0x22;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419eea88);
    uVar4 = local_1d4 & 0xffffff;
    if (uVar4 != 0) {
      if (uVar4 != 1) {
        if (uVar4 == 7) {
          local_1e0 = (double)CONCAT44(local_1e0._4_4_,local_1e0._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_1e0 = (double)((longlong)local_1e0 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_1d4 = 0;
            goto LAB_1408e5f1a;
          }
          FUN_140042910(&DAT_14172c3d8,&local_1e0,&local_1e0);
        }
        goto LAB_1408e5f24;
      }
      local_1e0 = (double)FUN_140e4b060(&local_1e0);
      local_1d4 = 0;
    }
LAB_1408e5f1a:
    local_1e0 = local_1e0 + 1.0;
  }
LAB_1408e5f24:
  bVar2 = false;
  uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419eeb08);
  iVar5 = FUN_140e851f0(&local_1e0,uVar11,DAT_141955260,1);
  if ((iVar5 != -2) && (iVar5 < 0)) {
    local_208 = 0x24;
    if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f0);
    }
    local_1e4 = 0;
    local_1f0 = 0.0;
    bVar3 = true;
    do {
      if (!bVar3) {
        local_208 = 0x24;
        uVar4 = local_1e4 & 0xffffff;
        if (uVar4 != 0) {
          if (uVar4 != 1) {
            if (uVar4 == 7) {
              local_1f0 = (double)CONCAT44(local_1f0._4_4_,local_1f0._0_4_ + 1);
            }
            else if (uVar4 == 10) {
              local_1f0 = (double)((longlong)local_1f0 + 1);
            }
            else {
              if (uVar4 == 0xd) goto LAB_1408e6004;
              FUN_140042910(&DAT_14172c3d8,&local_1f0,&local_1f0);
            }
            goto LAB_1408e6012;
          }
          local_1f0 = (double)FUN_140e4b060(&local_1f0);
LAB_1408e6004:
          local_1e4 = 0;
        }
        local_1f0 = local_1f0 + 1.0;
      }
LAB_1408e6012:
      bVar3 = false;
      uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419eeb28);
      iVar5 = FUN_140e851f0(&local_1f0,uVar11,DAT_141955260,1);
      uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
      if ((iVar5 == -2) || (-1 < iVar5)) goto LAB_1408e5eb5;
      local_208 = 0x25;
      if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d0);
      }
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c4 = 5;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419eeb78);
      local_1a0 = &local_1e0;
      local_198 = &local_1f0;
      if (puVar9 != local_158) {
        local_238 = (longlong *)*puVar9;
        uStack_230 = puVar9[1];
        if ((1 << ((byte)local_158[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_238);
      }
      local_190 = local_158;
      uVar14 = CONCAT44(uVar6,DAT_1419fdca8);
      puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,2,uVar14,&local_1a0);
      uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
      if (puVar9 != local_148) {
        local_238 = (longlong *)*puVar9;
        uStack_230 = puVar9[1];
        if ((1 << ((byte)local_148[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_238);
      }
      local_188 = local_148;
      uVar14 = CONCAT44(uVar6,DAT_1419fe568);
      FUN_140e634e0(param_1,param_2,&local_1d0,2,uVar14,&local_190);
    } while( true );
  }
  local_208 = 0x28;
  plVar12 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419eeb78);
  iVar5 = 0;
  if ((*(int *)((longlong)plVar12 + 0xc) == 2) && (*plVar12 != 0)) {
    iVar5 = *(int *)(*plVar12 + 0x24);
  }
  local_cc = 0;
  local_248 = (longlong *)(double)iVar5;
  local_208 = 0x29;
  uStack_23c = 0;
  uStack_240 = local_d0;
  uStack_230._4_4_ = 7;
  local_238 = (longlong *)CONCAT44(local_238._4_4_,1);
  local_d8 = local_248;
  FUN_1400462a0(&local_248,&local_238);
  if ((1 << ((byte)uStack_230._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  uStack_230 = CONCAT44(uStack_23c,uStack_240);
  local_238 = local_248;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_238);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  bVar2 = true;
  do {
    if (!bVar2) {
      local_208 = 0x29;
      uVar4 = local_21c & 0xffffff;
      if (uVar4 == 0) {
LAB_1408e62e9:
        local_228 = local_228 + -1.0;
      }
      else if (uVar4 == 1) {
        local_228 = (double)FUN_140e4b060(&local_228);
        local_228 = local_228 - 1.0;
        local_21c = 0;
      }
      else if (uVar4 == 7) {
        local_228 = (double)CONCAT44(local_228._4_4_,local_228._0_4_ + -1);
      }
      else if (uVar4 == 10) {
        local_228 = (double)((longlong)local_228 + -1);
      }
      else {
        if (uVar4 == 0xd) {
          local_21c = 0;
          goto LAB_1408e62e9;
        }
        FUN_140042910(&DAT_14172c450,&local_228,&local_228);
      }
    }
    bVar2 = false;
    uStack_230 = uStack_230 & 0xffffffff;
    local_238 = (longlong *)0x0;
    iVar5 = FUN_140e851f0(&local_228,&local_238,DAT_141955260,1);
    if ((1 << ((byte)(uStack_230 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if (iVar5 < 1) {
      local_208 = 0x31;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeac8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      *puVar9 = 0;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d0);
      }
      if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c0);
      }
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f0);
      }
      if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e0);
      }
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      _eh_vector_destructor_iterator_(&local_178,0x10,4,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_218;
      return;
    }
    local_208 = 0x2b;
    uVar14 = FUN_140e4a8b0(&local_228);
    uVar14 = FUN_140e78f00(uVar14);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 0;
    local_208 = 0x2c;
    local_128 = uVar14;
    pplVar8 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_1419eeb78);
    iVar5 = FUN_140e4a740(&local_228);
    if (((*(uint *)((longlong)pplVar8 + 0xc) & 0xffffff) == 2) &&
       (plVar12 = *pplVar8, plVar12 != (longlong *)0x0)) {
      if ((iVar5 < 0) || (*(int *)((longlong)plVar12 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)((longlong)plVar12 + 0x24));
        pplVar8 = (longlong **)0x0;
      }
      else {
        pplVar8 = (longlong **)((longlong)iVar5 * 0x10 + plVar12[1]);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pplVar8 != &local_118) {
      local_c8 = *pplVar8;
      plStack_c0 = pplVar8[1];
      if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_c8);
      uVar13 = uStack_10c;
    }
    local_208 = 0x2d;
    plVar12 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419eeb78);
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeb78);
    FUN_140e609c0(param_1);
    iVar5 = FUN_140e4a740(&local_128);
    if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar12, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uStack_23c = *(undefined4 *)((longlong)plVar12 + 0xc);
    uStack_240 = (undefined4)plVar12[1];
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
      local_248 = (longlong *)*plVar12;
    }
    else {
      FUN_1400419b0(&local_248,plVar12);
    }
    uVar6 = uStack_23c;
    uVar7 = FUN_140e4a740(&local_228);
    pplVar8 = (longlong **)FUN_140e48e40(puVar9,uVar7);
    FUN_140e609c0(*(undefined8 *)*puVar9);
    if (&local_248 != pplVar8) {
      plStack_c0 = (longlong *)CONCAT44(uStack_23c,uStack_240);
      local_c8 = local_248;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar8);
      }
      FUN_140041b80(pplVar8,&local_c8);
    }
    if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140e60910(2);
    local_208 = 0x2e;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeb78);
    FUN_140e609c0(param_1);
    uVar6 = FUN_140e4a740(&local_128);
    pplVar8 = (longlong **)FUN_140e48e40(puVar9,uVar6);
    FUN_140e609c0(*(undefined8 *)*puVar9);
    if (&local_118 != pplVar8) {
      plStack_c0 = (longlong *)CONCAT44(uStack_10c,uStack_110);
      local_c8 = local_118;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar8);
      }
      FUN_140041b80(pplVar8,&local_c8);
    }
    FUN_140e60910(2);
  } while( true );
}

