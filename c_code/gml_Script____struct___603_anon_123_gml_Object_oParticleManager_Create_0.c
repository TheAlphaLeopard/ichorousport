// gml_Script____struct___603_anon_123_gml_Object_oParticleManager_Create_0 @ 0x140bc0e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___603_anon_123_gml_Object_oParticleManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  double *pdVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong **pplVar10;
  double *pdVar11;
  double *pdVar12;
  float fVar13;
  longlong *plVar14;
  longlong *plVar15;
  double dVar16;
  double dVar17;
  code *pcVar18;
  ulonglong uVar19;
  undefined4 uVar21;
  undefined8 **ppuVar20;
  ulonglong in_stack_fffffffffffffdb0;
  ulonglong uVar22;
  undefined8 local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  longlong *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  longlong *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a4;
  longlong *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_164;
  longlong *local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  
  local_180 = "gml_Script_step@anon@2450@anon@123@gml_Object_oParticleManager_Create_0";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0xb4;
  pcVar18 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_218,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  uStack_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  uStack_11c = 0xffffff;
  local_128 = (longlong *)0x0;
  local_1dc = 0xffffff;
  local_1e8 = (longlong *)0x0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = (longlong *)0x0;
  uStack_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  uStack_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  local_164 = 0xffffff;
  local_170 = 0;
  uStack_6c = 0xffffff;
  local_78 = (longlong *)0x0;
  uStack_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_21c = 0;
  local_228 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_178 = 0xb6;
  local_68 = puVar5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6f08);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_240 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_248 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_248,puVar5);
    }
    pplVar10 = (longlong **)&local_248;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uStack_22c = 0;
    local_238 = (longlong *)0x3ff0000000000000;
    pplVar10 = &local_238;
    bVar2 = true;
    bVar1 = false;
  }
  uVar21 = uStack_22c;
  local_148 = *pplVar10;
  uStack_140 = *(undefined4 *)(pplVar10 + 1);
  uStack_13c = *(undefined4 *)((longlong)pplVar10 + 0xc);
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  FUN_140041b80(&local_1b0,&local_148);
  if ((bVar1) && ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_248);
  }
  if ((bVar2) && ((1 << ((byte)uVar21 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_238);
  }
  local_178 = 0xb8;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uStack_23c = 0;
  local_248 = (longlong *)0x0;
  iVar4 = FUN_140e851f0(uVar6,&local_248,DAT_141955260,0);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar4 != 0) {
    local_178 = 200;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6f38);
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f310);
    uStack_22c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_230 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
      local_238 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_238,puVar5);
    }
    FUN_140042560(&local_238,&local_1b0);
    FUN_1400460e0(uVar6,&local_238);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_178 = 0xca;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
    uVar19 = (ulonglong)pcVar18 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419f6f18,0x80000000,&local_128,uVar19,in_stack_fffffffffffffdb0);
    uVar19 = uVar19 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419f6ed8,0x80000000,&local_1e8,uVar19,
                  in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
    uVar21 = (undefined4)(uVar19 >> 0x20);
    if (puVar5 != &local_218) {
      local_248 = (longlong *)*puVar5;
      uStack_240 = *(undefined4 *)(puVar5 + 1);
      uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_248);
    }
    local_1d8 = &local_218;
    local_248 = local_128;
    uStack_240 = uStack_120;
    uStack_23c = uStack_11c;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_248);
    local_1d0 = local_208;
    uStack_22c = local_1dc;
    uStack_230 = local_1e0;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
      local_238 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_238,&local_1e8);
    }
    FUN_140042560(&local_238,&local_1b0);
    local_248 = local_238;
    uStack_240 = uStack_230;
    uStack_23c = uStack_22c;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_248);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_1c8 = local_1f8;
    FUN_140e609c0(param_1);
    ppuVar20 = &local_1d8;
    uVar19 = CONCAT44(uVar21,DAT_141a00c58);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_228,3,uVar19,ppuVar20);
    if (puVar5 != puVar9) {
      local_248 = (longlong *)*puVar5;
      uStack_240 = *(undefined4 *)(puVar5 + 1);
      uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_248);
    }
    FUN_140e60910(1);
    local_178 = 0xcb;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    pplVar10 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
    uVar22 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
    uVar19 = uVar19 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_1419f6f18,0x80000000,&local_128,uVar19,uVar22);
    uVar19 = uVar19 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_1419f6ed8,0x80000000,&local_1e8,uVar19,uVar22 & 0xffffffffffffff00);
    uVar21 = (undefined4)(uVar19 >> 0x20);
    if (puVar5 != &local_218) {
      local_248 = (longlong *)*puVar5;
      uStack_240 = *(undefined4 *)(puVar5 + 1);
      uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_248);
    }
    local_1d8 = &local_218;
    local_248 = local_128;
    uStack_240 = uStack_120;
    uStack_23c = uStack_11c;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_248);
    local_1d0 = local_208;
    uStack_22c = local_1dc;
    uStack_230 = local_1e0;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
      local_238 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_238,&local_1e8);
    }
    FUN_140042560(&local_238,&local_1b0);
    local_248 = local_238;
    uStack_240 = uStack_230;
    uStack_23c = uStack_22c;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_248);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_1c8 = local_1f8;
    FUN_140e609c0(param_1);
    ppuVar20 = &local_1d8;
    uVar19 = CONCAT44(uVar21,DAT_141a00c58);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_228,3,uVar19,ppuVar20);
    uStack_22c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_230 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
      local_238 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_238,puVar5);
    }
    FUN_1400460e0(&local_238,uVar6);
    if (&local_238 != pplVar10) {
      local_248 = local_238;
      uStack_240 = uStack_230;
      uStack_23c = uStack_22c;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar10);
      }
      FUN_140041b80(pplVar10,&local_248);
    }
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140e60910(1);
    goto LAB_140bc208e;
  }
  local_178 = 0xba;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
  uVar19 = (ulonglong)pcVar18 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f3418,0x80000000,&local_158,uVar19,in_stack_fffffffffffffdb0);
  in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
  uVar19 = uVar19 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f6f18,0x80000000,&local_128,uVar19,in_stack_fffffffffffffdb0);
  uVar19 = uVar19 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f6ed8,0x80000000,&local_1e8,uVar19,
                in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
  uVar21 = (undefined4)(uVar19 >> 0x20);
  local_248 = local_158;
  uStack_240 = uStack_150;
  uStack_23c = uStack_14c;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_248);
  local_1d8 = &local_218;
  local_248 = local_128;
  uStack_240 = uStack_120;
  uStack_23c = uStack_11c;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_248);
  local_1d0 = local_208;
  uStack_22c = local_1dc;
  uStack_230 = local_1e0;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
    local_238 = local_1e8;
  }
  else {
    FUN_1400419b0(&local_238,&local_1e8);
  }
  FUN_140042560(&local_238,&local_1b0);
  local_248 = local_238;
  uStack_240 = uStack_230;
  uStack_23c = uStack_22c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_248);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_1c8 = local_1f8;
  ppuVar20 = &local_1d8;
  uVar19 = CONCAT44(uVar21,DAT_141a00c58);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_228,3,uVar19,ppuVar20);
  if (puVar5 != &local_f8) {
    local_248 = (longlong *)*puVar5;
    uStack_240 = *(undefined4 *)(puVar5 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_248);
  }
  FUN_140e87930(uVar6,DAT_1419f3418,0x80000000,&local_f8);
  local_178 = 0xbc;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  uVar22 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
  uVar19 = uVar19 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f6ed8,0x80000000,&local_1c0,uVar19,uVar22);
  uStack_23c = 0;
  local_248 = (longlong *)0x3ff0000000000000;
  iVar4 = FUN_140e851f0(&local_1c0,&local_248,DAT_141955260,1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar4 < 1) {
    local_178 = 0xbe;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
    uVar22 = uVar22 & 0xffffffffffffff00;
    ppuVar20 = (undefined8 **)(uVar19 & 0xffffffffffffff00);
    FUN_140e87440(uVar6,DAT_1419f6ed8,0x80000000,&local_1c0,ppuVar20,uVar22);
    uStack_23c = 0;
    local_248 = (longlong *)0x0;
    iVar4 = FUN_140e851f0(&local_1c0,&local_248,DAT_141955260,0);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (iVar4 != 0) {
      local_178 = 0xbf;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
      uVar22 = uVar22 & 0xffffffffffffff00;
      uVar19 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_1419f3418,0x80000000,&local_198,uVar19,uVar22);
      uVar22 = uVar22 & 0xffffffffffffff00;
      uVar19 = uVar19 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_1419f6f18,0x80000000,&local_e8,uVar19,uVar22);
      uVar22 = uVar22 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_1419f6ed8,0x80000000,&local_1c0,uVar19 & 0xffffffffffffff00,uVar22);
      local_248 = local_198;
      uStack_240 = uStack_190;
      uStack_23c = uStack_18c;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_248);
      local_1d8 = &local_218;
      local_248 = local_e8;
      uStack_240 = uStack_e0;
      uStack_23c = uStack_dc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_208);
      }
      FUN_140041b80(local_208,&local_248);
      local_1d0 = local_208;
      uStack_22c = local_1b4;
      uStack_230 = local_1b8;
      if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) == 0) {
        local_238 = local_1c0;
      }
      else {
        FUN_1400419b0(&local_238,&local_1c0);
      }
      FUN_140042560(&local_238,&local_1b0);
      local_248 = local_238;
      uStack_240 = uStack_230;
      uStack_23c = uStack_22c;
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_248);
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      local_1c8 = local_1f8;
      ppuVar20 = &local_1d8;
      puVar5 = (undefined8 *)gml_Script_animation_end(param_1,param_2,&local_228,3,ppuVar20);
      goto LAB_140bc188e;
    }
  }
  else {
    local_178 = 0xbd;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
    uVar22 = uVar22 & 0xffffffffffffff00;
    uVar19 = uVar19 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419f3418,0x80000000,&local_198,uVar19,uVar22);
    uVar22 = uVar22 & 0xffffffffffffff00;
    uVar19 = uVar19 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419f6f18,0x80000000,&local_e8,uVar19,uVar22);
    uVar22 = uVar22 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419f6ed8,0x80000000,&local_1c0,uVar19 & 0xffffffffffffff00,uVar22);
    local_248 = local_198;
    uStack_240 = uStack_190;
    uStack_23c = uStack_18c;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_248);
    local_1d8 = &local_218;
    local_248 = local_e8;
    uStack_240 = uStack_e0;
    uStack_23c = uStack_dc;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_248);
    local_1d0 = local_208;
    uStack_22c = local_1b4;
    uStack_230 = local_1b8;
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) == 0) {
      local_238 = local_1c0;
    }
    else {
      FUN_1400419b0(&local_238,&local_1c0);
    }
    FUN_140042560(&local_238,&local_1b0);
    local_248 = local_238;
    uStack_240 = uStack_230;
    uStack_23c = uStack_22c;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_248);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_1c8 = local_1f8;
    ppuVar20 = &local_1d8;
    puVar5 = (undefined8 *)gml_Script_AngleRotateTowardsLerp(param_1,param_2,&local_228,3,ppuVar20);
LAB_140bc188e:
    if (puVar5 != &local_170) {
      local_248 = (longlong *)*puVar5;
      uStack_240 = *(undefined4 *)(puVar5 + 1);
      uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      FUN_140041b80(&local_170,&local_248);
    }
    FUN_140e87930(uVar6,DAT_1419f3418,0x80000000,&local_170);
  }
  local_178 = 0xc2;
  pdVar7 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  uVar22 = uVar22 & 0xffffffffffffff00;
  uVar19 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f3418,0x80000000,&local_158,uVar19,uVar22);
  uVar22 = uVar22 & 0xffffffffffffff00;
  uVar19 = uVar19 & 0xffffffffffffff00;
  FUN_140e87440(uVar8,DAT_1419f3418,0x80000000,&local_198,uVar19,uVar22);
  plVar14 = local_198;
  if ((uStack_18c & 0xffffff) != 0) {
    plVar14 = (longlong *)FUN_140e4b060(&local_198);
  }
  plVar15 = local_158;
  if ((uStack_14c & 0xffffff) != 0) {
    plVar15 = (longlong *)FUN_140e4b060(&local_158);
  }
  fVar13 = (float)FUN_140e78f90((float)(double)plVar15,(float)(double)plVar14);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar7);
  }
  *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
  *pdVar7 = (double)fVar13;
  local_178 = 0xc3;
  pdVar7 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  uVar22 = uVar22 & 0xffffffffffffff00;
  uVar19 = uVar19 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f3418,0x80000000,&local_158,uVar19,uVar22);
  ppuVar20 = (undefined8 **)(uVar22 & 0xffffffffffffff00);
  uVar19 = uVar19 & 0xffffffffffffff00;
  FUN_140e87440(uVar8,DAT_1419f3418,0x80000000,&local_198,uVar19,ppuVar20);
  plVar14 = local_198;
  if ((uStack_18c & 0xffffff) != 0) {
    plVar14 = (longlong *)FUN_140e4b060(&local_198);
  }
  plVar15 = local_158;
  if ((uStack_14c & 0xffffff) != 0) {
    plVar15 = (longlong *)FUN_140e4b060(&local_158);
  }
  fVar13 = (float)FUN_140e79010((float)(double)plVar15,(float)(double)plVar14);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar7);
  }
  *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
  *pdVar7 = (double)fVar13;
LAB_140bc208e:
  local_178 = 0xcf;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05568);
  uVar22 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
  uVar19 = uVar19 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f3418,0x80000000,&local_78,uVar19,uVar22);
  uVar22 = uVar22 & 0xffffffffffffff00;
  uVar19 = uVar19 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f6f18,0x80000000,&local_88,uVar19,uVar22);
  uVar22 = uVar22 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f6ed8,0x80000000,&local_108,uVar19 & 0xffffffffffffff00,uVar22);
  local_248 = local_78;
  uStack_240 = uStack_70;
  uStack_23c = uStack_6c;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_248);
  local_1d8 = &local_218;
  local_248 = local_88;
  uStack_240 = uStack_80;
  uStack_23c = uStack_7c;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_248);
  local_1d0 = local_208;
  uStack_22c = local_fc;
  uStack_230 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_238 = local_108;
  }
  else {
    FUN_1400419b0(&local_238,&local_108);
  }
  FUN_140042560(&local_238,&local_1b0);
  local_248 = local_238;
  uStack_240 = uStack_230;
  uStack_23c = uStack_22c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_248);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_1c8 = local_1f8;
  ppuVar20 = &local_1d8;
  puVar5 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_228,3,ppuVar20);
  if (puVar5 != &local_118) {
    local_248 = (longlong *)*puVar5;
    uStack_240 = *(undefined4 *)(puVar5 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_248);
  }
  FUN_140e87930(uVar6,DAT_1419f3418,0x80000000,&local_118);
  local_178 = 0xd1;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6f58);
  uStack_23c = 0;
  local_248 = (longlong *)0x0;
  iVar4 = FUN_140e851f0(uVar6,&local_248,DAT_141955260,0);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar4 == 0) {
    local_178 = 0xd2;
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    pdVar11 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    pdVar12 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
    if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
      dVar16 = *pdVar11;
    }
    else {
      dVar16 = (double)FUN_140e4b060(pdVar11);
    }
    if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
      dVar17 = *pdVar7;
    }
    else {
      dVar17 = (double)FUN_140e4b060(pdVar7);
    }
    fVar13 = (float)FUN_140e793d0(0,0,(float)dVar17,(float)dVar16);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar12);
    }
    *(undefined4 *)((longlong)pdVar12 + 0xc) = 0;
    *pdVar12 = (double)fVar13;
  }
  else {
    local_178 = 0xd4;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6f58);
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
    uStack_22c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_230 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
      local_238 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_238,puVar5);
    }
    FUN_140042560(&local_238,&local_1b0);
    FUN_1400460e0(uVar6,&local_238);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
  }
  local_178 = 0xd6;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_23c = 6;
  uVar22 = uVar22 & 0xffffffffffffff00;
  uVar19 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
  local_248 = param_1;
  FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_b8,uVar19,uVar22);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_22c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_230 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
    local_238 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_238,puVar5);
  }
  FUN_140042560(&local_238,&local_1b0);
  FUN_1400460e0(&local_b8,&local_238);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_b8);
  local_178 = 0xd7;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_23c = 6;
  uVar22 = uVar22 & 0xffffffffffffff00;
  uVar19 = uVar19 & 0xffffffffffffff00;
  local_248 = param_1;
  FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_c8,uVar19,uVar22);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_22c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_230 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
    local_238 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_238,puVar5);
  }
  FUN_140042560(&local_238,&local_1b0);
  FUN_1400460e0(&local_c8,&local_238);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_c8);
  local_178 = 0xd9;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_23c = 6;
  uVar22 = uVar22 & 0xffffffffffffff00;
  uVar19 = uVar19 & 0xffffffffffffff00;
  local_248 = param_1;
  FUN_140e87440(&local_248,DAT_141a0cfc8,0x80000000,&local_d8,uVar19,uVar22);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_23c = 6;
  uVar22 = uVar22 & 0xffffffffffffff00;
  uVar19 = uVar19 & 0xffffffffffffff00;
  local_248 = param_1;
  FUN_140e87440(&local_248,DAT_141a0a728,0x80000000,&local_98,uVar19,uVar22);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = local_98;
  uStack_240 = uStack_90;
  uStack_23c = uStack_8c;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_248);
  local_1d8 = &local_218;
  local_248 = (longlong *)CONCAT44(uRam0000000141dc73b4,_DAT_141dc73b0);
  uStack_240 = uRam0000000141dc73b8;
  uStack_23c = uRam0000000141dc73bc;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_248);
  local_1d0 = local_208;
  uStack_23c = 6;
  uVar19 = uVar19 & 0xffffffffffffff00;
  local_248 = param_1;
  FUN_140e87440(&local_248,DAT_141a0a818,0x80000000,&local_a8,uVar19,uVar22 & 0xffffffffffffff00);
  uVar21 = (undefined4)(uVar19 >> 0x20);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uVar6 = FUN_140e634e0(param_1,param_2,&local_138,1,CONCAT44(uVar21,DAT_141a0a0d8),&local_1d0);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_228,1,DAT_141a0a068,&local_1d8);
  uStack_22c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_230 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
    local_238 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_238,puVar5);
  }
  FUN_140046500(&local_238,uVar6);
  uStack_13c = uStack_22c;
  uStack_140 = uStack_230;
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
    local_148 = local_238;
  }
  else {
    FUN_1400419b0(&local_148,&local_238);
  }
  FUN_140042560(&local_148,&local_a8);
  uStack_23c = uStack_13c;
  uStack_240 = uStack_140;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
    local_248 = local_148;
  }
  else {
    FUN_1400419b0(&local_248,&local_148);
  }
  FUN_140042560(&local_248,local_68);
  FUN_1400460e0(&local_d8,&local_248);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_d8);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  _eh_vector_destructor_iterator_(&local_218,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

