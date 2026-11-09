// gml_Object_oIKTest_Step_0 @ 0x140b1ab00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oIKTest_Step_0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  bool bVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  code *pcVar18;
  ulonglong uVar19;
  undefined4 uVar21;
  double **ppdVar20;
  ulonglong in_stack_fffffffffffffd80;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  double local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  double local_238;
  byte local_22c;
  double local_228;
  byte local_21c;
  double local_218;
  byte local_20c;
  double local_208;
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  double local_180;
  uint local_174;
  double *local_168;
  double *local_160;
  double *local_158;
  double *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  double *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  double local_118;
  undefined4 local_110;
  undefined4 local_10c;
  double local_108;
  undefined4 local_100;
  undefined4 local_fc;
  double local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  double local_d8;
  undefined4 local_cc;
  double local_c8;
  undefined4 local_bc;
  double local_b8;
  undefined4 local_ac;
  double local_a8;
  undefined4 local_9c;
  double local_98;
  undefined4 local_8c;
  double local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  local_1a0 = "gml_Object_oIKArm_Draw_0";
  local_198 = 0;
  local_1a8 = DAT_141dc7a50;
  pcVar18 = FUN_140041b30;
  DAT_141dc7a50 = &local_1a8;
  _eh_vector_constructor_iterator_(&local_238,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_174 = 0xffffff;
  local_180 = 0.0;
  local_8c = 0xffffff;
  local_98 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_198 = 3;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff228);
  uStack_26c = DAT_141dd9544;
  uStack_270 = DAT_141dd9540;
  if ((1 << ((byte)DAT_141dd9544 & 0x1f) & 0x46U) == 0) {
    local_278 = (longlong *)DAT_141dd9538;
  }
  else {
    FUN_1400419b0(&local_278,&DAT_141dd9538);
  }
  iVar4 = FUN_140e851f0(uVar6,&local_278,DAT_141955260,0);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if (iVar4 == 0) {
    local_198 = 3;
    goto LAB_140b1d2dd;
  }
  local_198 = 5;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  uStack_26c = 6;
  uVar19 = (ulonglong)pcVar18 & 0xffffffffffffff00;
  local_278 = param_1;
  FUN_140e87440(&local_278,DAT_141a0cfc8,0x80000000,&local_88,uVar19,
                in_stack_fffffffffffffd80 & 0xffffffffffffff00);
  uVar21 = (undefined4)(uVar19 >> 0x20);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = (longlong *)local_88;
  uStack_270 = uStack_80;
  uStack_26c = uStack_7c;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_278);
  local_168 = &local_238;
  uVar6 = CONCAT44(uVar21,DAT_1419fe728);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_258,1,uVar6,&local_168);
  uVar21 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (pdVar7 != &local_d8) {
    local_278 = (longlong *)*pdVar7;
    uStack_270 = *(undefined4 *)(pdVar7 + 1);
    uStack_26c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_278);
  }
  local_198 = 7;
  pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar7, dVar16 != 0.0)) {
    if (*(int *)((longlong)dVar16 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      pdVar11 = (double *)0x0;
    }
    else {
      pdVar11 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    pdVar11 = pdVar7;
  }
  if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
    dVar16 = *pdVar11;
  }
  else {
    dVar16 = (double)FUN_140e4b060(pdVar11);
  }
  if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar17 = *pdVar10, dVar17 != 0.0))
  {
    if (*(int *)((longlong)dVar17 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      pdVar11 = (double *)0x0;
    }
    else {
      pdVar11 = (double *)(*(longlong *)((longlong)dVar17 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    pdVar11 = pdVar10;
  }
  if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
    dVar17 = *pdVar11;
  }
  else {
    dVar17 = (double)FUN_140e4b060(pdVar11);
  }
  if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar14 = *pdVar9, dVar14 != 0.0)) {
    if (*(int *)((longlong)dVar14 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      pdVar11 = (double *)0x0;
    }
    else {
      pdVar11 = *(double **)((longlong)dVar14 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    pdVar11 = pdVar9;
  }
  if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar11;
  }
  else {
    dVar14 = (double)FUN_140e4b060(pdVar11);
  }
  if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (dVar15 = *pdVar8, dVar15 != 0.0)) {
    if (*(int *)((longlong)dVar15 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      pdVar11 = (double *)0x0;
    }
    else {
      pdVar11 = *(double **)((longlong)dVar15 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    pdVar11 = pdVar8;
  }
  if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar11;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar11);
  }
  fVar13 = (float)FUN_140e793d0((float)dVar15,(float)dVar14,(float)dVar17,(float)dVar16);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = (double)fVar13;
  local_198 = 8;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar8, dVar16 != 0.0)) {
    if (*(int *)((longlong)dVar16 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      pdVar8 = (double *)0x0;
    }
    else {
      pdVar8 = *(double **)((longlong)dVar16 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar8 != &local_238) {
    local_278 = (longlong *)*pdVar8;
    uStack_270 = *(undefined4 *)(pdVar8 + 1);
    uStack_26c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_278);
  }
  local_168 = &local_238;
  if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar9, dVar16 != 0.0)) {
    if (*(int *)((longlong)dVar16 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      pdVar9 = (double *)0x0;
    }
    else {
      pdVar9 = *(double **)((longlong)dVar16 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar9 != &local_228) {
    local_278 = (longlong *)*pdVar9;
    uStack_270 = *(undefined4 *)(pdVar9 + 1);
    uStack_26c = *(undefined4 *)((longlong)pdVar9 + 0xc);
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_278);
  }
  local_160 = &local_228;
  if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar10, dVar16 != 0.0))
  {
    if (*(int *)((longlong)dVar16 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      pdVar10 = (double *)0x0;
    }
    else {
      pdVar10 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar10 != &local_218) {
    local_278 = (longlong *)*pdVar10;
    uStack_270 = *(undefined4 *)(pdVar10 + 1);
    uStack_26c = *(undefined4 *)((longlong)pdVar10 + 0xc);
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_278);
  }
  local_158 = &local_218;
  if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar7, dVar16 != 0.0)) {
    if (*(int *)((longlong)dVar16 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      pdVar7 = (double *)0x0;
    }
    else {
      pdVar7 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar7 != &local_208) {
    local_278 = (longlong *)*pdVar7;
    uStack_270 = *(undefined4 *)(pdVar7 + 1);
    uStack_26c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_278);
  }
  local_150 = &local_208;
  uVar6 = CONCAT44(uVar21,DAT_1419fd548);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_258,4,uVar6,&local_168);
  uVar21 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (pdVar7 != &local_f8) {
    local_278 = (longlong *)*pdVar7;
    uStack_270 = *(undefined4 *)(pdVar7 + 1);
    uStack_26c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_278);
  }
  local_198 = 10;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3748);
  uStack_26c = 0;
  local_278 = (longlong *)0x0;
  uVar5 = FUN_140e851f0(uVar6,&local_278,DAT_141955260,1);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if (uVar5 < 0x80000000) {
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    uStack_26c = 0;
    local_278 = (longlong *)0x0;
    iVar4 = FUN_140e851f0(&local_f8,&local_278,DAT_141955260,1);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if (iVar4 < 1) goto LAB_140b1ba02;
    local_198 = 0xb;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    local_190 = 0;
    local_188 = 0;
    local_184 = 5;
    pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3748);
    if (pdVar9 != &local_238) {
      local_278 = (longlong *)*pdVar9;
      uStack_270 = *(undefined4 *)(pdVar9 + 1);
      uStack_26c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_278);
    }
    local_168 = &local_238;
    if (pdVar9 != &local_228) {
      local_278 = (longlong *)*pdVar9;
      uStack_270 = *(undefined4 *)(pdVar9 + 1);
      uStack_26c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_278);
    }
    local_160 = &local_228;
    uVar6 = FUN_140e634e0(param_1,param_2,&local_190,1,CONCAT44(uVar21,DAT_141a04788),&local_160);
    pdVar9 = (double *)FUN_140e634e0(param_1,param_2,&local_258,1,DAT_141a047c8,&local_168);
    uStack_23c = *(undefined4 *)((longlong)pdVar9 + 0xc);
    uStack_240 = *(undefined4 *)(pdVar9 + 1);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
      local_248 = *pdVar9;
    }
    else {
      FUN_1400419b0(&local_248,pdVar9);
    }
    FUN_1400462a0(&local_248,uVar6);
    local_278 = (longlong *)local_248;
    uStack_270 = uStack_240;
    uStack_26c = uStack_23c;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_278);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_198 = 0xc;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    pdVar11 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3748);
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3778);
    if (pdVar11 != &local_238) {
      local_278 = (longlong *)*pdVar11;
      uStack_270 = *(undefined4 *)(pdVar11 + 1);
      uStack_26c = *(undefined4 *)((longlong)pdVar11 + 0xc);
      if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_278);
    }
    local_168 = &local_238;
    local_160 = &local_d8;
    if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar8, dVar16 != 0.0))
    {
      if (*(int *)((longlong)dVar16 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        pdVar8 = (double *)0x0;
      }
      else {
        pdVar8 = *(double **)((longlong)dVar16 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar8 != &local_218) {
      local_278 = (longlong *)*pdVar8;
      uStack_270 = *(undefined4 *)(pdVar8 + 1);
      uStack_26c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_278);
    }
    local_158 = &local_218;
    if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar9, dVar16 != 0.0))
    {
      if (*(int *)((longlong)dVar16 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        pdVar9 = (double *)0x0;
      }
      else {
        pdVar9 = *(double **)((longlong)dVar16 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar9 != &local_208) {
      local_278 = (longlong *)*pdVar9;
      uStack_270 = *(undefined4 *)(pdVar9 + 1);
      uStack_26c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_278);
    }
    local_150 = &local_208;
    uStack_23c = local_ec;
    uStack_240 = local_f0;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
      local_248 = local_f8;
    }
    else {
      FUN_1400419b0(&local_248,&local_f8);
    }
    FUN_1400460e0(&local_248,uVar6);
    uStack_26c = uStack_23c;
    uStack_270 = uStack_240;
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
      local_278 = (longlong *)local_248;
    }
    else {
      FUN_1400419b0(&local_278,&local_248);
    }
    FUN_140046500(&local_278,&local_e8);
    local_268 = (undefined4)local_278;
    uStack_264 = local_278._4_4_;
    uStack_260 = uStack_270;
    uStack_25c = uStack_26c;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_268);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_148 = local_1f8;
    local_268 = _DAT_1419ebba0;
    uStack_264 = uRam00000001419ebba4;
    uStack_260 = uRam00000001419ebba8;
    uStack_25c = uRam00000001419ebbac;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_268);
    local_140 = local_1e8;
    local_138 = &local_c8;
    local_268 = _DAT_1419ebbb0;
    uStack_264 = uRam00000001419ebbb4;
    uStack_260 = uRam00000001419ebbb8;
    uStack_25c = uRam00000001419ebbbc;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_268);
    local_130 = local_1c8;
    local_268 = _DAT_1419ebba0;
    uStack_264 = uRam00000001419ebba4;
    uStack_260 = uRam00000001419ebba8;
    uStack_25c = uRam00000001419ebbac;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_268);
    local_128 = local_1b8;
    ppdVar20 = &local_168;
    FUN_1403ae470(param_1,param_2,&local_258,9,ppdVar20);
    uVar21 = (undefined4)((ulonglong)ppdVar20 >> 0x20);
  }
  else {
LAB_140b1ba02:
    local_198 = 0xe;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar8, dVar16 != 0.0))
    {
      if (*(int *)((longlong)dVar16 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        pdVar8 = (double *)0x0;
      }
      else {
        pdVar8 = *(double **)((longlong)dVar16 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar8 != &local_238) {
      local_268 = *(undefined4 *)pdVar8;
      uStack_264 = *(undefined4 *)((longlong)pdVar8 + 4);
      uStack_260 = *(undefined4 *)(pdVar8 + 1);
      uStack_25c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_268);
    }
    local_168 = &local_238;
    if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar9, dVar16 != 0.0))
    {
      if (*(int *)((longlong)dVar16 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        pdVar9 = (double *)0x0;
      }
      else {
        pdVar9 = *(double **)((longlong)dVar16 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar9 != &local_228) {
      local_268 = *(undefined4 *)pdVar9;
      uStack_264 = *(undefined4 *)((longlong)pdVar9 + 4);
      uStack_260 = *(undefined4 *)(pdVar9 + 1);
      uStack_25c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_268);
    }
    local_160 = &local_228;
    if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar10, dVar16 != 0.0)
       ) {
      if (*(int *)((longlong)dVar16 + 0x24) < 2) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
        pdVar9 = (double *)0x0;
      }
      else {
        pdVar9 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x10);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar9 = pdVar10;
    }
    if (pdVar9 != &local_218) {
      local_268 = *(undefined4 *)pdVar9;
      uStack_264 = *(undefined4 *)((longlong)pdVar9 + 4);
      uStack_260 = *(undefined4 *)(pdVar9 + 1);
      uStack_25c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_268);
    }
    local_158 = &local_218;
    if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar7, dVar16 != 0.0))
    {
      if (*(int *)((longlong)dVar16 + 0x24) < 2) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
        pdVar9 = (double *)0x0;
      }
      else {
        pdVar9 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x10);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar9 = pdVar7;
    }
    if (pdVar9 != &local_208) {
      local_268 = *(undefined4 *)pdVar9;
      uStack_264 = *(undefined4 *)((longlong)pdVar9 + 4);
      uStack_260 = *(undefined4 *)(pdVar9 + 1);
      uStack_25c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_268);
    }
    local_150 = &local_208;
    uVar6 = CONCAT44(uVar21,DAT_141a0faa8);
    FUN_140e634e0(param_1,param_2,&local_258,4,uVar6,&local_168);
    uVar21 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  local_198 = 0x11;
  pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar9, dVar16 != 0.0)) {
    if (*(int *)((longlong)dVar16 + 0x24) < 3) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
      pdVar11 = (double *)0x0;
    }
    else {
      pdVar11 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x20);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    pdVar11 = pdVar9;
  }
  if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
    dVar16 = *pdVar11;
  }
  else {
    dVar16 = (double)FUN_140e4b060(pdVar11);
  }
  if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (dVar17 = *pdVar8, dVar17 != 0.0)) {
    if (*(int *)((longlong)dVar17 + 0x24) < 3) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
      pdVar11 = (double *)0x0;
    }
    else {
      pdVar11 = (double *)(*(longlong *)((longlong)dVar17 + 8) + 0x20);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    pdVar11 = pdVar8;
  }
  if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
    dVar17 = *pdVar11;
  }
  else {
    dVar17 = (double)FUN_140e4b060(pdVar11);
  }
  if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar14 = *pdVar7, dVar14 != 0.0)) {
    if (*(int *)((longlong)dVar14 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      pdVar11 = (double *)0x0;
    }
    else {
      pdVar11 = (double *)(*(longlong *)((longlong)dVar14 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    pdVar11 = pdVar7;
  }
  if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar11;
  }
  else {
    dVar14 = (double)FUN_140e4b060(pdVar11);
  }
  if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar15 = *pdVar10, dVar15 != 0.0))
  {
    if (*(int *)((longlong)dVar15 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      pdVar11 = (double *)0x0;
    }
    else {
      pdVar11 = (double *)(*(longlong *)((longlong)dVar15 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    pdVar11 = pdVar10;
  }
  if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar11;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar11);
  }
  fVar13 = (float)FUN_140e793d0((float)dVar15,(float)dVar14,(float)dVar17,(float)dVar16);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = (double)fVar13;
  local_198 = 0x12;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar10, dVar16 != 0.0))
  {
    if (*(int *)((longlong)dVar16 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      pdVar10 = (double *)0x0;
    }
    else {
      pdVar10 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar10 != &local_238) {
    local_268 = *(undefined4 *)pdVar10;
    uStack_264 = *(undefined4 *)((longlong)pdVar10 + 4);
    uStack_260 = *(undefined4 *)(pdVar10 + 1);
    uStack_25c = *(undefined4 *)((longlong)pdVar10 + 0xc);
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_268);
  }
  local_168 = &local_238;
  if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar7, dVar16 != 0.0)) {
    if (*(int *)((longlong)dVar16 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      pdVar7 = (double *)0x0;
    }
    else {
      pdVar7 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar7 != &local_228) {
    local_268 = *(undefined4 *)pdVar7;
    uStack_264 = *(undefined4 *)((longlong)pdVar7 + 4);
    uStack_260 = *(undefined4 *)(pdVar7 + 1);
    uStack_25c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_268);
  }
  local_160 = &local_228;
  if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar8, dVar16 != 0.0)) {
    if (*(int *)((longlong)dVar16 + 0x24) < 3) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
      pdVar8 = (double *)0x0;
    }
    else {
      pdVar8 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x20);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar8 != &local_218) {
    local_268 = *(undefined4 *)pdVar8;
    uStack_264 = *(undefined4 *)((longlong)pdVar8 + 4);
    uStack_260 = *(undefined4 *)(pdVar8 + 1);
    uStack_25c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_268);
  }
  local_158 = &local_218;
  if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar9, dVar16 != 0.0)) {
    if (*(int *)((longlong)dVar16 + 0x24) < 3) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
      pdVar9 = (double *)0x0;
    }
    else {
      pdVar9 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x20);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar9 != &local_208) {
    local_268 = *(undefined4 *)pdVar9;
    uStack_264 = *(undefined4 *)((longlong)pdVar9 + 4);
    uStack_260 = *(undefined4 *)(pdVar9 + 1);
    uStack_25c = *(undefined4 *)((longlong)pdVar9 + 0xc);
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_268);
  }
  local_150 = &local_208;
  uVar6 = CONCAT44(uVar21,DAT_1419fd548);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_258,4,uVar6,&local_168);
  uVar21 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (pdVar7 != &local_118) {
    local_268 = *(undefined4 *)pdVar7;
    uStack_264 = *(undefined4 *)((longlong)pdVar7 + 4);
    uStack_260 = *(undefined4 *)(pdVar7 + 1);
    uStack_25c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_268);
  }
  local_198 = 0x14;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f37d8);
  uStack_26c = 0;
  local_278 = (longlong *)0x0;
  uVar5 = FUN_140e851f0(uVar6,&local_278,DAT_141955260,1);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if (uVar5 < 0x80000000) {
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    uStack_26c = 0;
    local_278 = (longlong *)0x0;
    iVar4 = FUN_140e851f0(&local_118,&local_278,DAT_141955260,1);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if (iVar4 < 1) goto LAB_140b1c891;
    local_198 = 0x15;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    local_190 = 0;
    local_188 = 0;
    local_184 = 5;
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f37d8);
    if (pdVar7 != &local_238) {
      local_268 = *(undefined4 *)pdVar7;
      uStack_264 = *(undefined4 *)((longlong)pdVar7 + 4);
      uStack_260 = *(undefined4 *)(pdVar7 + 1);
      uStack_25c = *(undefined4 *)((longlong)pdVar7 + 0xc);
      if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_268);
    }
    local_168 = &local_238;
    if (pdVar7 != &local_228) {
      local_268 = *(undefined4 *)pdVar7;
      uStack_264 = *(undefined4 *)((longlong)pdVar7 + 4);
      uStack_260 = *(undefined4 *)(pdVar7 + 1);
      uStack_25c = *(undefined4 *)((longlong)pdVar7 + 0xc);
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_268);
    }
    local_160 = &local_228;
    uVar6 = FUN_140e634e0(param_1,param_2,&local_190,1,CONCAT44(uVar21,DAT_141a04788),&local_160);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_258,1,DAT_141a047c8,&local_168);
    uStack_26c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    uStack_270 = *(undefined4 *)(pdVar7 + 1);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
      local_278 = (longlong *)*pdVar7;
    }
    else {
      FUN_1400419b0(&local_278,pdVar7);
    }
    FUN_1400462a0(&local_278,uVar6);
    local_268 = (undefined4)local_278;
    uStack_264 = local_278._4_4_;
    uStack_260 = uStack_270;
    uStack_25c = uStack_26c;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_268);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_198 = 0x16;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f37d8);
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3778);
    if (pdVar9 != &local_238) {
      local_268 = *(undefined4 *)pdVar9;
      uStack_264 = *(undefined4 *)((longlong)pdVar9 + 4);
      uStack_260 = *(undefined4 *)(pdVar9 + 1);
      uStack_25c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_268);
    }
    local_168 = &local_238;
    local_160 = &local_d8;
    if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar10, dVar16 != 0.0)
       ) {
      if (*(int *)((longlong)dVar16 + 0x24) < 2) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
        pdVar10 = (double *)0x0;
      }
      else {
        pdVar10 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x10);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar10 != &local_218) {
      local_268 = *(undefined4 *)pdVar10;
      uStack_264 = *(undefined4 *)((longlong)pdVar10 + 4);
      uStack_260 = *(undefined4 *)(pdVar10 + 1);
      uStack_25c = *(undefined4 *)((longlong)pdVar10 + 0xc);
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_268);
    }
    local_158 = &local_218;
    if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar7, dVar16 != 0.0))
    {
      if (*(int *)((longlong)dVar16 + 0x24) < 2) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
        pdVar7 = (double *)0x0;
      }
      else {
        pdVar7 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x10);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar7 != &local_208) {
      local_268 = *(undefined4 *)pdVar7;
      uStack_264 = *(undefined4 *)((longlong)pdVar7 + 4);
      uStack_260 = *(undefined4 *)(pdVar7 + 1);
      uStack_25c = *(undefined4 *)((longlong)pdVar7 + 0xc);
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_268);
    }
    local_150 = &local_208;
    uStack_23c = local_10c;
    uStack_240 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_248 = local_118;
    }
    else {
      FUN_1400419b0(&local_248,&local_118);
    }
    FUN_1400460e0(&local_248,uVar6);
    uStack_26c = uStack_23c;
    uStack_270 = uStack_240;
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
      local_278 = (longlong *)local_248;
    }
    else {
      FUN_1400419b0(&local_278,&local_248);
    }
    FUN_140046500(&local_278,&local_e8);
    local_268 = (undefined4)local_278;
    uStack_264 = local_278._4_4_;
    uStack_260 = uStack_270;
    uStack_25c = uStack_26c;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_268);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_148 = local_1f8;
    local_268 = _DAT_1419ebba0;
    uStack_264 = uRam00000001419ebba4;
    uStack_260 = uRam00000001419ebba8;
    uStack_25c = uRam00000001419ebbac;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_268);
    local_140 = local_1e8;
    local_138 = &local_108;
    local_268 = _DAT_1419ebbb0;
    uStack_264 = uRam00000001419ebbb4;
    uStack_260 = uRam00000001419ebbb8;
    uStack_25c = uRam00000001419ebbbc;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_268);
    local_130 = local_1c8;
    local_268 = _DAT_1419ebba0;
    uStack_264 = uRam00000001419ebba4;
    uStack_260 = uRam00000001419ebba8;
    uStack_25c = uRam00000001419ebbac;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_268);
    local_128 = local_1b8;
    FUN_1403ae470(param_1,param_2,&local_258,9,&local_168);
  }
  else {
LAB_140b1c891:
    local_198 = 0x18;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar8, dVar16 != 0.0))
    {
      if (*(int *)((longlong)dVar16 + 0x24) < 2) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
        pdVar8 = (double *)0x0;
      }
      else {
        pdVar8 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x10);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar8 != &local_238) {
      local_268 = *(undefined4 *)pdVar8;
      uStack_264 = *(undefined4 *)((longlong)pdVar8 + 4);
      uStack_260 = *(undefined4 *)(pdVar8 + 1);
      uStack_25c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_268);
    }
    local_168 = &local_238;
    if (((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar9, dVar16 != 0.0))
    {
      if (*(int *)((longlong)dVar16 + 0x24) < 2) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
        pdVar9 = (double *)0x0;
      }
      else {
        pdVar9 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x10);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar9 != &local_228) {
      local_268 = *(undefined4 *)pdVar9;
      uStack_264 = *(undefined4 *)((longlong)pdVar9 + 4);
      uStack_260 = *(undefined4 *)(pdVar9 + 1);
      uStack_25c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_268);
    }
    local_160 = &local_228;
    if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar10, dVar16 != 0.0)
       ) {
      if (*(int *)((longlong)dVar16 + 0x24) < 3) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
        pdVar10 = (double *)0x0;
      }
      else {
        pdVar10 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x20);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar10 != &local_218) {
      local_268 = *(undefined4 *)pdVar10;
      uStack_264 = *(undefined4 *)((longlong)pdVar10 + 4);
      uStack_260 = *(undefined4 *)(pdVar10 + 1);
      uStack_25c = *(undefined4 *)((longlong)pdVar10 + 0xc);
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_268);
    }
    local_158 = &local_218;
    if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar16 = *pdVar7, dVar16 != 0.0))
    {
      if (*(int *)((longlong)dVar16 + 0x24) < 3) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
        pdVar7 = (double *)0x0;
      }
      else {
        pdVar7 = (double *)(*(longlong *)((longlong)dVar16 + 8) + 0x20);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar7 != &local_208) {
      local_268 = *(undefined4 *)pdVar7;
      uStack_264 = *(undefined4 *)((longlong)pdVar7 + 4);
      uStack_260 = *(undefined4 *)(pdVar7 + 1);
      uStack_25c = *(undefined4 *)((longlong)pdVar7 + 0xc);
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_268);
    }
    local_150 = &local_208;
    FUN_140e634e0(param_1,param_2,&local_258,4,CONCAT44(uVar21,DAT_141a0faa8),&local_168);
  }
  local_198 = 0x1b;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3788);
  uStack_26c = 0;
  local_278 = (longlong *)0x0;
  uVar5 = FUN_140e851f0(uVar6,&local_278,DAT_141955260,1);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if (uVar5 < 0x80000000) {
    local_198 = 0x1c;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f37c8);
    cVar3 = FUN_140e491e0(uVar6);
    if (cVar3 == '\0') {
      uStack_26c = local_fc;
      uStack_270 = local_100;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
        local_278 = (longlong *)local_108;
      }
      else {
        FUN_1400419b0(&local_278,&local_108);
      }
      pdVar7 = (double *)&local_278;
      bVar1 = false;
      bVar12 = true;
    }
    else {
      pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f37a8);
      uStack_23c = *(undefined4 *)((longlong)pdVar7 + 0xc);
      uStack_240 = *(undefined4 *)(pdVar7 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_248 = *pdVar7;
      }
      else {
        FUN_1400419b0(&local_248,pdVar7);
      }
      pdVar7 = &local_248;
      bVar1 = true;
      bVar12 = false;
    }
    local_268 = *(undefined4 *)pdVar7;
    uStack_264 = *(undefined4 *)((longlong)pdVar7 + 4);
    uStack_260 = *(undefined4 *)(pdVar7 + 1);
    uStack_25c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_180);
    }
    FUN_140041b80(&local_180,&local_268);
    if ((bVar12) && ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_278);
    }
    if ((bVar1) && ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_248);
    }
    local_198 = 0x1d;
    cVar3 = FUN_140e491e0(uVar6);
    bVar12 = cVar3 == '\0';
    if (bVar12) {
      uStack_26c = 0;
      local_278 = (longlong *)0x0;
      pdVar7 = (double *)&local_278;
    }
    else {
      uStack_23c = 0;
      local_248 = 1.0;
      pdVar7 = &local_248;
    }
    uVar2 = uStack_23c;
    uVar21 = uStack_26c;
    local_268 = *(undefined4 *)pdVar7;
    uStack_264 = *(undefined4 *)((longlong)pdVar7 + 4);
    uStack_260 = *(undefined4 *)(pdVar7 + 1);
    uStack_25c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_268);
    if ((bVar12) && ((1 << ((byte)uVar21 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_278);
    }
    if ((!bVar12) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_248);
    }
    local_198 = 0x1e;
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f37b8);
    dVar16 = local_180;
    if ((local_174 & 0xffffff) != 0) {
      dVar16 = (double)FUN_140e4b060(&local_180);
    }
    if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
      dVar17 = *pdVar10;
    }
    else {
      dVar17 = (double)FUN_140e4b060(pdVar10);
    }
    if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar14 = *pdVar7, dVar14 != 0.0))
    {
      if (*(int *)((longlong)dVar14 + 0x24) < 3) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
        pdVar7 = (double *)0x0;
      }
      else {
        pdVar7 = (double *)(*(longlong *)((longlong)dVar14 + 8) + 0x20);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    fVar13 = (float)FUN_140e78f90((float)dVar17,(float)dVar16);
    uStack_26c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    uStack_270 = *(undefined4 *)(pdVar7 + 1);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
      local_278 = (longlong *)*pdVar7;
    }
    else {
      FUN_1400419b0(&local_278,pdVar7);
    }
    uStack_23c = 0;
    local_248 = (double)fVar13;
    FUN_1400462a0(&local_278,&local_248);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_268 = (undefined4)local_278;
    uStack_264 = local_278._4_4_;
    uStack_260 = uStack_270;
    uStack_25c = uStack_26c;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_268);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_198 = 0x1f;
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    dVar16 = local_180;
    if ((local_174 & 0xffffff) != 0) {
      dVar16 = (double)FUN_140e4b060(&local_180);
    }
    if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
      dVar17 = *pdVar10;
    }
    else {
      dVar17 = (double)FUN_140e4b060(pdVar10);
    }
    if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar14 = *pdVar7, dVar14 != 0.0))
    {
      if (*(int *)((longlong)dVar14 + 0x24) < 3) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
        pdVar7 = (double *)0x0;
      }
      else {
        pdVar7 = (double *)(*(longlong *)((longlong)dVar14 + 8) + 0x20);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    fVar13 = (float)FUN_140e79010((float)dVar17,(float)dVar16);
    uStack_26c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    uStack_270 = *(undefined4 *)(pdVar7 + 1);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
      local_278 = (longlong *)*pdVar7;
    }
    else {
      FUN_1400419b0(&local_278,pdVar7);
    }
    uStack_23c = 0;
    local_248 = (double)fVar13;
    FUN_1400462a0(&local_278,&local_248);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_268 = (undefined4)local_278;
    uStack_264 = local_278._4_4_;
    uStack_260 = uStack_270;
    uStack_25c = uStack_26c;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_268);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_198 = 0x20;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3788);
    if (pdVar7 != &local_238) {
      local_268 = *(undefined4 *)pdVar7;
      uStack_264 = *(undefined4 *)((longlong)pdVar7 + 4);
      uStack_260 = *(undefined4 *)(pdVar7 + 1);
      uStack_25c = *(undefined4 *)((longlong)pdVar7 + 0xc);
      if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_268);
    }
    local_168 = &local_238;
    local_160 = &local_98;
    local_158 = &local_a8;
    local_150 = &local_b8;
    local_268 = _DAT_1419ebba0;
    uStack_264 = uRam00000001419ebba4;
    uStack_260 = uRam00000001419ebba8;
    uStack_25c = uRam00000001419ebbac;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_268);
    local_148 = local_1f8;
    local_268 = _DAT_1419ebba0;
    uStack_264 = uRam00000001419ebba4;
    uStack_260 = uRam00000001419ebba8;
    uStack_25c = uRam00000001419ebbac;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_268);
    local_140 = local_1e8;
    local_138 = &local_180;
    local_268 = _DAT_1419ebbb0;
    uStack_264 = uRam00000001419ebbb4;
    uStack_260 = uRam00000001419ebbb8;
    uStack_25c = uRam00000001419ebbbc;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_268);
    local_130 = local_1c8;
    local_268 = _DAT_1419ebba0;
    uStack_264 = uRam00000001419ebba4;
    uStack_260 = uRam00000001419ebba8;
    uStack_25c = uRam00000001419ebbac;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_268);
    local_128 = local_1b8;
    FUN_1403ae470(param_1,param_2,&local_258,9,&local_168);
  }
LAB_140b1d2dd:
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_238,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return;
}

