// gml_Script____struct___38___outline_surface_create___scr_outline @ 0x1400ee620

undefined8 *
gml_Script____struct___38___outline_surface_create___scr_outline
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  byte bVar2;
  double *pdVar3;
  ulonglong uVar4;
  double dVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  double local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  uint local_1b8;
  uint local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  double local_198;
  undefined4 local_18c;
  double local_188;
  undefined4 local_17c;
  double local_178;
  undefined4 local_16c;
  double local_168;
  byte local_15c;
  longlong local_158;
  byte local_14c;
  double local_108;
  byte local_fc;
  double local_f8;
  undefined4 local_ec;
  double local_e8;
  undefined4 local_e0;
  uint local_dc;
  double local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  double *local_a8;
  double *local_a0;
  double *local_98;
  double *local_90;
  longlong *local_88;
  double *local_60 [4];
  
  local_c0 = "gml_Script___outline_set_uniforms";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x5b;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_198,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_1b4 = 0xffffff;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_1b8 = 0xffffff;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_1ec = 0;
  local_1f8 = 0;
  local_1a4 = 0;
  local_1b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x5d;
  plVar7 = &DAT_1419df7b0;
  if (param_4 < 1) {
    pdVar3 = (double *)&DAT_1419df7b0;
LAB_1400ee724:
    local_1e8 = *pdVar3;
    uStack_1e0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1dc = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1e8);
  }
  else {
    pdVar3 = (double *)*param_5;
    if (pdVar3 != &local_108) goto LAB_1400ee724;
  }
  local_60[0] = &local_108;
  uVar8 = CONCAT44(uVar9,DAT_141a04658);
  pdVar3 = (double *)FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar8,local_60);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  dVar5 = 0.0;
  if (pdVar3 != &local_d8) {
    local_1e8 = *pdVar3;
    uStack_1e0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1dc = *(undefined4 *)((longlong)pdVar3 + 0xc);
    FUN_140041b80(&local_d8,&local_1e8);
    local_1b4 = local_cc;
    dVar5 = local_d8;
  }
  local_b8 = 0x5e;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  if (param_4 < 1) {
    pdVar3 = (double *)&DAT_1419df7b0;
LAB_1400ee7fc:
    local_1e8 = *pdVar3;
    uStack_1e0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1dc = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1e8);
  }
  else {
    pdVar3 = (double *)*param_5;
    if (pdVar3 != &local_198) goto LAB_1400ee7fc;
  }
  local_a8 = &local_198;
  uVar8 = CONCAT44(uVar9,DAT_141a04668);
  pdVar3 = (double *)FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar8,&local_a8);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (pdVar3 != &local_e8) {
    local_1e8 = *pdVar3;
    uStack_1e0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1dc = *(undefined4 *)((longlong)pdVar3 + 0xc);
    FUN_140041b80(&local_e8,&local_1e8);
    local_1b8 = local_dc;
  }
  local_b8 = 0x60;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  if (param_4 < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[3];
  }
  bVar2 = FUN_140e4a8b0(puVar6);
  local_198 = (double)bVar2 * 0.00392156862745098;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_18c = 0;
  local_a8 = &local_198;
  if (param_4 < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[3];
  }
  uVar4 = FUN_140e4a8b0(puVar6);
  local_188 = (double)(uVar4 >> 8 & 0xff) * 0.00392156862745098;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_17c = 0;
  local_a0 = &local_188;
  if (param_4 < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[3];
  }
  uVar4 = FUN_140e4a8b0(puVar6);
  local_178 = (double)(uVar4 >> 0x10 & 0xff) * 0.00392156862745098;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 0;
  local_98 = &local_178;
  if (param_4 < 5) {
    pdVar3 = (double *)&DAT_1419df7b0;
LAB_1400ee9d3:
    local_1e8 = *pdVar3;
    uStack_1e0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1dc = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1e8);
  }
  else {
    pdVar3 = (double *)param_5[4];
    if (pdVar3 != &local_168) goto LAB_1400ee9d3;
  }
  local_90 = &local_168;
  uVar8 = CONCAT44(uVar9,DAT_1419fdca8);
  pdVar3 = (double *)FUN_140e634e0(param_1,param_2,&local_1f8,4,uVar8,&local_a8);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (pdVar3 != &local_f8) {
    local_1e8 = *pdVar3;
    uStack_1e0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1dc = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1e8);
  }
  local_b8 = 0x67;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a046c8);
  if (pdVar3 != &local_198) {
    local_1e8 = *pdVar3;
    uStack_1e0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1dc = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1e8);
  }
  local_a8 = &local_198;
  local_a0 = &local_f8;
  uVar8 = CONCAT44(uVar9,DAT_141a047e8);
  FUN_140e634e0(param_1,param_2,&local_1f8,2,uVar8,&local_a8);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  local_b8 = 0x68;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a4 = 5;
  pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a046b8);
  if (param_4 < 7) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[6];
  }
  uStack_1dc = 0;
  local_1e8 = 1.0;
  FUN_140046500(&local_1e8,puVar6);
  uStack_1bc = local_1b4;
  uStack_1c0 = local_d0;
  local_1b4 = local_1b4 & 0x1f;
  if ((1 << (sbyte)local_1b4 & 0x46U) == 0) {
    local_1c8 = dVar5;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_d8);
  }
  FUN_140042560(&local_1c8,&local_1e8);
  local_1d8 = (undefined4)local_1c8;
  uStack_1d4 = local_1c8._4_4_;
  uStack_1d0 = uStack_1c0;
  uStack_1cc = uStack_1bc;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_1d8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_a8 = &local_198;
  if (param_4 < 7) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[6];
  }
  uStack_1dc = 0;
  local_1e8 = 1.0;
  FUN_140046500(&local_1e8,puVar6);
  uStack_1bc = local_1b8;
  uStack_1c0 = local_e0;
  local_1b8 = local_1b8 & 0x1f;
  if ((1 << (sbyte)local_1b8 & 0x46U) == 0) {
    local_1c8 = local_e8;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_e8);
  }
  FUN_140042560(&local_1c8,&local_1e8);
  local_1d8 = (undefined4)local_1c8;
  uStack_1d4 = local_1c8._4_4_;
  uStack_1d0 = uStack_1c0;
  uStack_1cc = uStack_1bc;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_1d8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_a0 = &local_188;
  if (pdVar3 != &local_178) {
    local_1d8 = *(undefined4 *)pdVar3;
    uStack_1d4 = *(undefined4 *)((longlong)pdVar3 + 4);
    uStack_1d0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1cc = *(uint *)((longlong)pdVar3 + 0xc);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1d8);
  }
  local_98 = &local_178;
  uVar8 = CONCAT44(uVar9,DAT_1419fdca8);
  pdVar3 = (double *)FUN_140e634e0(param_1,param_2,&local_1b0,2,uVar8,&local_a8);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (pdVar3 != &local_168) {
    local_1d8 = *(undefined4 *)pdVar3;
    uStack_1d4 = *(undefined4 *)((longlong)pdVar3 + 4);
    uStack_1d0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1cc = *(uint *)((longlong)pdVar3 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1d8);
  }
  local_90 = &local_168;
  FUN_140e634e0(param_1,param_2,&local_1f8,2,CONCAT44(uVar9,DAT_141a047e8),&local_98);
  local_b8 = 0x69;
  pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04638);
  if (pdVar3 != &local_198) {
    local_1d8 = *(undefined4 *)pdVar3;
    uStack_1d4 = *(undefined4 *)((longlong)pdVar3 + 4);
    uStack_1d0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1cc = *(uint *)((longlong)pdVar3 + 0xc);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1d8);
  }
  local_a8 = &local_198;
  if (param_4 < 7) {
    puVar6 = &DAT_1419df7b0;
    if (param_4 < 3) {
      pdVar3 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar3 = (double *)param_5[2];
    }
  }
  else {
    puVar6 = (undefined8 *)param_5[6];
    pdVar3 = (double *)param_5[2];
  }
  uStack_1bc = *(undefined4 *)((longlong)pdVar3 + 0xc);
  uStack_1c0 = *(undefined4 *)(pdVar3 + 1);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
    local_1c8 = *pdVar3;
  }
  else {
    FUN_1400419b0(&local_1c8);
  }
  FUN_140042560(&local_1c8,puVar6);
  local_1d8 = (undefined4)local_1c8;
  uStack_1d4 = local_1c8._4_4_;
  uStack_1d0 = uStack_1c0;
  uStack_1cc = uStack_1bc;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_1d8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_a0 = &local_188;
  if (param_4 < 8) {
    pdVar3 = (double *)&DAT_1419df7b0;
LAB_1400eefa6:
    local_1d8 = *(undefined4 *)pdVar3;
    uStack_1d4 = *(undefined4 *)((longlong)pdVar3 + 4);
    uStack_1d0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1cc = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1d8);
  }
  else {
    pdVar3 = (double *)param_5[7];
    if (pdVar3 != &local_178) goto LAB_1400eefa6;
  }
  local_98 = &local_178;
  if (param_4 < 6) {
    pdVar3 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar3 = (double *)param_5[5];
    if (pdVar3 == &local_168) goto LAB_1400ef024;
  }
  local_1d8 = *(undefined4 *)pdVar3;
  uStack_1d4 = *(undefined4 *)((longlong)pdVar3 + 4);
  uStack_1d0 = *(undefined4 *)(pdVar3 + 1);
  uStack_1cc = *(undefined4 *)((longlong)pdVar3 + 0xc);
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1d8);
LAB_1400ef024:
  local_90 = &local_168;
  FUN_140ec9ea0(4,&local_a8);
  local_b8 = 0x6a;
  pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04588);
  if (pdVar3 != &local_198) {
    local_1d8 = *(undefined4 *)pdVar3;
    uStack_1d4 = *(undefined4 *)((longlong)pdVar3 + 4);
    uStack_1d0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1cc = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1d8);
  }
  local_a8 = &local_198;
  if (param_4 < 2) {
    pdVar3 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar3 = (double *)param_5[1];
  }
  if (((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 2) && (dVar5 = *pdVar3, dVar5 != 0.0)) {
    if (*(int *)((longlong)dVar5 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      pdVar3 = (double *)0x0;
    }
    else {
      pdVar3 = *(double **)((longlong)dVar5 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar3 != &local_188) {
    local_1d8 = *(undefined4 *)pdVar3;
    uStack_1d4 = *(undefined4 *)((longlong)pdVar3 + 4);
    uStack_1d0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1cc = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1d8);
  }
  local_a0 = &local_188;
  if (param_4 < 2) {
    pdVar3 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar3 = (double *)param_5[1];
  }
  if (((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 2) && (dVar5 = *pdVar3, dVar5 != 0.0)) {
    if (*(int *)((longlong)dVar5 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      pdVar3 = (double *)0x0;
    }
    else {
      pdVar3 = (double *)(*(longlong *)((longlong)dVar5 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar3 != &local_178) {
    local_1d8 = *(undefined4 *)pdVar3;
    uStack_1d4 = *(undefined4 *)((longlong)pdVar3 + 4);
    uStack_1d0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1cc = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1d8);
  }
  local_98 = &local_178;
  if (param_4 < 2) {
    pdVar3 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar3 = (double *)param_5[1];
  }
  if (((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 2) && (dVar5 = *pdVar3, dVar5 != 0.0)) {
    if (*(int *)((longlong)dVar5 + 0x24) < 3) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
      pdVar3 = (double *)0x0;
    }
    else {
      pdVar3 = (double *)(*(longlong *)((longlong)dVar5 + 8) + 0x20);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (pdVar3 != &local_168) {
    local_1d8 = *(undefined4 *)pdVar3;
    uStack_1d4 = *(undefined4 *)((longlong)pdVar3 + 4);
    uStack_1d0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1cc = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1d8);
  }
  local_90 = &local_168;
  if (1 < param_4) {
    plVar7 = (longlong *)param_5[1];
  }
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 4) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",3);
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x30);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar7 != &local_158) {
    local_1d8 = (undefined4)*plVar7;
    uStack_1d4 = *(undefined4 *)((longlong)plVar7 + 4);
    uStack_1d0 = (undefined4)plVar7[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1d8);
  }
  local_88 = &local_158;
  FUN_140ec9ea0(5,&local_a8);
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_1b8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_198,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

