// gml_Script_anon_2496_GuardPulse_GuardPulse @ 0x140290110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2496_GuardPulse_GuardPulse
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar14;
  double **ppdVar12;
  undefined8 uVar13;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  double local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  double local_238;
  undefined4 local_230;
  uint local_22c;
  undefined8 local_228;
  undefined4 local_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  double local_1f8;
  byte local_1ec;
  double local_1e8;
  byte local_1dc;
  double local_1d8;
  byte local_1cc;
  double local_1c8;
  byte local_1bc;
  double local_178;
  byte local_16c;
  double local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  double local_150;
  uint local_144;
  double *local_138;
  double *local_130;
  double *local_128;
  double *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  double *local_108;
  double *local_100;
  double *local_f8 [2];
  double local_e8;
  undefined4 local_e0;
  uint local_dc;
  double local_d8;
  undefined4 local_d0;
  uint local_cc;
  double local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  double local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  double local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  double local_78;
  undefined4 local_70;
  undefined4 local_6c;
  double local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_210 = "gml_Script_guard_draw_ring";
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  local_208 = 0x1a;
  FUN_140041df0(local_58,param_4,8,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_1f8,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_154 = 0xffffff;
  local_5c = 0xffffff;
  local_68 = 0.0;
  local_158 = 0xffffff;
  local_6c = 0xffffff;
  dVar10 = 0.0;
  local_78 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_144 = 0xffffff;
  local_150 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_25c = 0;
  local_268 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_208 = 0x1b;
  pdVar9 = (double *)&DAT_1419df7b0;
  uVar8 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 7) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_14029029f:
    local_258 = *pdVar5;
    uStack_250 = *(undefined4 *)(pdVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_258);
  }
  else {
    pdVar5 = (double *)local_50[6];
    if (pdVar5 != &local_178) goto LAB_14029029f;
  }
  local_f8[0] = &local_178;
  if ((int)local_58[0] < 7) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_50[6];
  }
  uVar13 = CONCAT44(uVar14,DAT_1419fe728);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_268,1,uVar13,local_f8);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  if (pdVar4 != pdVar5) {
    local_258 = *pdVar4;
    uStack_250 = *(undefined4 *)(pdVar4 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar5);
    }
    FUN_140041b80(pdVar5,&local_258);
  }
  local_208 = 0x1c;
  if ((int)local_58[0] < 7) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_50[6];
  }
  uStack_23c = 0;
  local_248 = 0.0;
  iVar3 = FUN_140e851f0(puVar7,&local_248,DAT_141955260,1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar3 != -2 && iVar3 < 0) {
    local_208 = 0x1c;
    goto LAB_140292195;
  }
  local_208 = 0x1e;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  if ((int)local_58[0] < 3) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_14029040e:
    local_258 = *pdVar5;
    uStack_250 = *(undefined4 *)(pdVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_258);
  }
  else {
    pdVar5 = (double *)local_50[2];
    if (pdVar5 != &local_1f8) goto LAB_14029040e;
  }
  local_138 = &local_1f8;
  uVar13 = CONCAT44(uVar14,DAT_141a04788);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_268,1,uVar13,&local_138);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  if (pdVar5 != &local_b8) {
    local_258 = *pdVar5;
    uStack_250 = *(undefined4 *)(pdVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_258);
  }
  local_208 = 0x1f;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  if ((int)local_58[0] < 3) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_140290509:
    local_258 = *pdVar5;
    uStack_250 = *(undefined4 *)(pdVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_258);
  }
  else {
    pdVar5 = (double *)local_50[2];
    if (pdVar5 != &local_1f8) goto LAB_140290509;
  }
  local_138 = &local_1f8;
  uVar13 = CONCAT44(uVar14,DAT_141a04768);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_268,1,uVar13,&local_138);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  if (pdVar5 != &local_c8) {
    local_258 = *pdVar5;
    uStack_250 = *(undefined4 *)(pdVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_258);
  }
  local_208 = 0x20;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  if ((int)local_58[0] < 3) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_1402905fd:
    local_258 = *pdVar5;
    uStack_250 = *(undefined4 *)(pdVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_258);
  }
  else {
    pdVar5 = (double *)local_50[2];
    if (pdVar5 != &local_1f8) goto LAB_1402905fd;
  }
  local_138 = &local_1f8;
  uVar13 = CONCAT44(uVar14,DAT_141a047c8);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_268,1,uVar13,&local_138);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  dVar11 = 0.0;
  if (pdVar5 != &local_68) {
    local_258 = *pdVar5;
    uStack_250 = *(undefined4 *)(pdVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    FUN_140041b80(&local_68,&local_258);
    local_154 = local_5c;
    dVar11 = local_68;
  }
  local_208 = 0x21;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  if ((int)local_58[0] < 3) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_1402906e1:
    local_258 = *pdVar5;
    uStack_250 = *(undefined4 *)(pdVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_258);
  }
  else {
    pdVar5 = (double *)local_50[2];
    if (pdVar5 != &local_1f8) goto LAB_1402906e1;
  }
  local_138 = &local_1f8;
  pdVar5 = (double *)
           FUN_140e634e0(param_1,param_2,&local_268,1,CONCAT44(uVar14,DAT_141a04808),&local_138);
  if (pdVar5 != &local_78) {
    local_258 = *pdVar5;
    uStack_250 = *(undefined4 *)(pdVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    FUN_140041b80(&local_78,&local_258);
    local_158 = local_6c;
    dVar10 = local_78;
  }
  uVar14 = local_158;
  local_208 = 0x22;
  if ((int)local_58[0] < 7) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_50[6];
  }
  uStack_23c = *(undefined4 *)((longlong)pdVar5 + 0xc);
  uStack_240 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_248);
  }
  local_22c = 7;
  local_238 = (double)CONCAT44(local_238._4_4_,2);
  FUN_1400460e0(&local_248,&local_238);
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_258 = local_248;
  uStack_250 = uStack_240;
  uStack_24c = uStack_23c;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_258);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_208 = 0x23;
  local_22c = local_15c;
  local_230 = local_160;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_238 = local_168;
  }
  else {
    FUN_1400419b0(&local_238,&local_168);
  }
  local_21c = 7;
  local_228 = CONCAT44(local_228._4_4_,2);
  FUN_140042560(&local_238,&local_228);
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  uStack_23c = local_154;
  uStack_240 = local_60;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
    local_248 = dVar11;
  }
  else {
    FUN_1400419b0(&local_248,&local_68);
  }
  FUN_1400460e0(&local_248,&local_238);
  local_258 = local_248;
  uStack_250 = uStack_240;
  uStack_24c = uStack_23c;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_258);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_208 = 0x24;
  local_22c = local_15c;
  local_230 = local_160;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_238 = local_168;
  }
  else {
    FUN_1400419b0(&local_238,&local_168);
  }
  local_21c = 7;
  local_228 = CONCAT44(local_228._4_4_,2);
  FUN_140042560(&local_238,&local_228);
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  uStack_240 = local_70;
  uStack_23c = uVar14;
  if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) == 0) {
    local_248 = dVar10;
  }
  else {
    FUN_1400419b0(&local_248,&local_78);
  }
  FUN_1400460e0(&local_248,&local_238);
  local_258 = local_248;
  uStack_250 = uStack_240;
  uStack_24c = uStack_23c;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_258);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_208 = 0x25;
  uStack_23c = local_ac;
  uStack_240 = local_b0;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_248 = local_b8;
  }
  else {
    FUN_1400419b0(&local_248,&local_b8);
  }
  FUN_1400460e0(&local_248,&local_168);
  local_258 = local_248;
  uStack_250 = uStack_240;
  uStack_24c = uStack_23c;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_258);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_208 = 0x26;
  uStack_23c = local_bc;
  uStack_240 = local_c0;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_248 = local_c8;
  }
  else {
    FUN_1400419b0(&local_248,&local_c8);
  }
  FUN_1400460e0(&local_248,&local_168);
  local_258 = local_248;
  uStack_250 = uStack_240;
  uStack_24c = uStack_23c;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_258);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_208 = 0x28;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  if ((int)local_58[0] < 3) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_140290ce4:
    local_258 = *pdVar5;
    uStack_250 = *(undefined4 *)(pdVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_258);
  }
  else {
    pdVar5 = (double *)local_50[2];
    if (pdVar5 != &local_1f8) goto LAB_140290ce4;
  }
  local_138 = &local_1f8;
  if ((int)local_58[0] < 4) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_140290d34:
    local_258 = *pdVar5;
    uStack_250 = *(undefined4 *)(pdVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_258);
  }
  else {
    pdVar5 = (double *)local_50[3];
    if (pdVar5 != &local_1e8) goto LAB_140290d34;
  }
  local_130 = &local_1e8;
  if ((int)local_58[0] < 5) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_140290d84:
    local_258 = *pdVar5;
    uStack_250 = *(undefined4 *)(pdVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_258);
  }
  else {
    pdVar5 = (double *)local_50[4];
    if (pdVar5 != &local_1d8) goto LAB_140290d84;
  }
  local_128 = &local_1d8;
  if ((int)local_58[0] < 6) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_140290dd4:
    local_258 = *pdVar5;
    uStack_250 = *(undefined4 *)(pdVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_258);
  }
  else {
    pdVar5 = (double *)local_50[5];
    if (pdVar5 != &local_1c8) goto LAB_140290dd4;
  }
  local_120 = &local_1c8;
  local_118 = &local_88;
  local_110 = &local_98;
  local_108 = &local_d8;
  local_100 = &local_e8;
  if ((int)local_58[0] < 7) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_140290e5c:
    local_258 = *pdVar5;
    uStack_250 = *(undefined4 *)(pdVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_258);
  }
  else {
    pdVar5 = (double *)local_50[6];
    if (pdVar5 != &local_178) goto LAB_140290e5c;
  }
  local_f8[0] = &local_178;
  ppdVar12 = &local_138;
  pdVar5 = (double *)FUN_14028f560(param_1,param_2,&local_268,9,ppdVar12);
  uVar14 = (undefined4)((ulonglong)ppdVar12 >> 0x20);
  if (pdVar5 != &local_150) {
    local_258 = *pdVar5;
    uStack_250 = *(undefined4 *)(pdVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    FUN_140041b80(&local_150,&local_258);
  }
  local_208 = 0x2a;
  if ((int)local_58[0] < 7) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_50[6];
  }
  local_21c = 0;
  local_228 = 0;
  iVar3 = FUN_140e851f0(puVar7,&local_228,DAT_141955260,1);
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if (0 < iVar3) {
    local_208 = 0x2b;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    if ((int)local_58[0] < 3) {
      pdVar5 = (double *)&DAT_1419df7b0;
LAB_140290faa:
      local_258 = *pdVar5;
      uStack_250 = *(undefined4 *)(pdVar5 + 1);
      uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_258);
    }
    else {
      pdVar5 = (double *)local_50[2];
      if (pdVar5 != &local_1f8) goto LAB_140290faa;
    }
    local_138 = &local_1f8;
    if ((int)local_58[0] < 4) {
      pdVar5 = (double *)&DAT_1419df7b0;
LAB_140290ffa:
      local_258 = *pdVar5;
      uStack_250 = *(undefined4 *)(pdVar5 + 1);
      uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_258);
    }
    else {
      pdVar5 = (double *)local_50[3];
      if (pdVar5 != &local_1e8) goto LAB_140290ffa;
    }
    local_130 = &local_1e8;
    if ((int)local_58[0] < 5) {
      pdVar5 = (double *)&DAT_1419df7b0;
LAB_14029104a:
      local_258 = *pdVar5;
      uStack_250 = *(undefined4 *)(pdVar5 + 1);
      uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_258);
    }
    else {
      pdVar5 = (double *)local_50[4];
      if (pdVar5 != &local_1d8) goto LAB_14029104a;
    }
    local_128 = &local_1d8;
    if ((int)local_58[0] < 6) {
      pdVar5 = (double *)&DAT_1419df7b0;
LAB_14029109a:
      local_258 = *pdVar5;
      uStack_250 = *(undefined4 *)(pdVar5 + 1);
      uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_258);
    }
    else {
      pdVar5 = (double *)local_50[5];
      if (pdVar5 != &local_1c8) goto LAB_14029109a;
    }
    local_120 = &local_1c8;
    local_118 = &local_88;
    local_110 = &local_98;
    local_108 = &local_d8;
    local_100 = &local_e8;
    if ((int)local_58[0] < 7) {
      pdVar5 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar5 = (double *)local_50[6];
    }
    uStack_23c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    uStack_240 = *(undefined4 *)(pdVar5 + 1);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
      local_248 = *pdVar5;
    }
    else {
      FUN_1400419b0(&local_248);
    }
    local_21c = 7;
    local_228 = CONCAT44(local_228._4_4_,1);
    FUN_1400462a0(&local_248,&local_228);
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_258 = local_248;
    uStack_250 = uStack_240;
    uStack_24c = uStack_23c;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_258);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_f8[0] = &local_178;
    ppdVar12 = &local_138;
    pdVar5 = (double *)FUN_14028f560(param_1,param_2,&local_268,9,ppdVar12);
    uVar14 = (undefined4)((ulonglong)ppdVar12 >> 0x20);
    if (pdVar5 != &local_a8) {
      local_258 = *pdVar5;
      uStack_250 = *(undefined4 *)(pdVar5 + 1);
      uStack_24c = *(undefined4 *)((longlong)pdVar5 + 0xc);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_258);
    }
    local_208 = 0x2c;
    dVar10 = local_150;
    if ((local_144 & 0xffffff) != 0) {
      dVar10 = (double)FUN_140e4b060(&local_150);
    }
    FUN_140ec60c0((longlong)dVar10,0xffffffff);
    local_208 = 0x2d;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    local_258 = (double)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_250 = uRam00000001419df7a8;
    uStack_24c = uRam00000001419df7ac;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_258);
    local_138 = &local_1f8;
    local_258 = (double)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_250 = uRam00000001419df7a8;
    uStack_24c = uRam00000001419df7ac;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_258);
    local_130 = &local_1e8;
    local_258 = (double)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_250 = uRam00000001419df7a8;
    uStack_24c = uRam00000001419df7ac;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_258);
    local_128 = &local_1d8;
    local_258 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_250 = uRam00000001419df7c8;
    uStack_24c = uRam00000001419df7cc;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_258);
    local_120 = &local_1c8;
    uVar13 = CONCAT44(uVar14,DAT_141a580a0);
    FUN_140e634e0(param_1,param_2,&local_268,4,uVar13,&local_138);
    uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    local_208 = 0x2e;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    local_258 = (double)CONCAT44(uRam00000001419e3a54,_DAT_1419e3a50);
    uStack_250 = uRam00000001419e3a58;
    uStack_24c = uRam00000001419e3a5c;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_258);
    local_138 = &local_1f8;
    local_258 = (double)CONCAT44(uRam00000001419e3a34,_DAT_1419e3a30);
    uStack_250 = uRam00000001419e3a38;
    uStack_24c = uRam00000001419e3a3c;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_258);
    local_130 = &local_1e8;
    uVar13 = CONCAT44(uVar14,DAT_141a04a18);
    FUN_140e634e0(param_1,param_2,&local_268,2,uVar13,&local_138);
    uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    local_208 = 0x2f;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    local_138 = &local_a8;
    local_258 = (double)CONCAT44(uRam0000000141dc63b4,_DAT_141dc63b0);
    uStack_250 = uRam0000000141dc63b8;
    uStack_24c = uRam0000000141dc63bc;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_258);
    local_130 = &local_1e8;
    local_258 = (double)CONCAT44(uRam0000000141dc63b4,_DAT_141dc63b0);
    uStack_250 = uRam0000000141dc63b8;
    uStack_24c = uRam0000000141dc63bc;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_258);
    local_128 = &local_1d8;
    uVar13 = CONCAT44(uVar14,DAT_141a049d8);
    FUN_140e634e0(param_1,param_2,&local_268,3,uVar13,&local_138);
    uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    local_208 = 0x30;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    local_258 = (double)CONCAT44(uRam0000000141dc63b4,_DAT_141dc63b0);
    uStack_250 = uRam0000000141dc63b8;
    uStack_24c = uRam0000000141dc63bc;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_258);
    local_138 = &local_1f8;
    uVar13 = CONCAT44(uVar14,DAT_141a04848);
    FUN_140e634e0(param_1,param_2,&local_268,1,uVar13,&local_138);
    uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    local_208 = 0x31;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    local_258 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_250 = uRam00000001419df7c8;
    uStack_24c = uRam00000001419df7cc;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_258);
    local_138 = &local_1f8;
    local_258 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_250 = uRam00000001419df7c8;
    uStack_24c = uRam00000001419df7cc;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_258);
    local_130 = &local_1e8;
    local_258 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_250 = uRam00000001419df7c8;
    uStack_24c = uRam00000001419df7cc;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_258);
    local_128 = &local_1d8;
    local_258 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_250 = uRam00000001419df7c8;
    uStack_24c = uRam00000001419df7cc;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_258);
    local_120 = &local_1c8;
    uVar13 = CONCAT44(uVar14,DAT_141a580a0);
    FUN_140e634e0(param_1,param_2,&local_268,4,uVar13,&local_138);
    uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    local_208 = 0x32;
    FUN_140ec7870();
    local_208 = 0x33;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    local_138 = &local_a8;
    uVar13 = CONCAT44(uVar14,DAT_141a04918);
    FUN_140e634e0(param_1,param_2,&local_268,1,uVar13,&local_138);
    uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  }
  local_208 = 0x36;
  dVar10 = local_150;
  if ((local_144 & 0xffffff) != 0) {
    dVar10 = (double)FUN_140e4b060(&local_150);
  }
  FUN_140ec60c0((longlong)dVar10,0xffffffff);
  local_208 = 0x37;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  local_258 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_250 = uRam00000001419df7c8;
  uStack_24c = uRam00000001419df7cc;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_258);
  local_138 = &local_1f8;
  local_258 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_250 = uRam00000001419df7c8;
  uStack_24c = uRam00000001419df7cc;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_258);
  local_130 = &local_1e8;
  local_258 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_250 = uRam00000001419df7c8;
  uStack_24c = uRam00000001419df7cc;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_258);
  local_128 = &local_1d8;
  local_258 = (double)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_250 = uRam00000001419df7a8;
  uStack_24c = uRam00000001419df7ac;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_258);
  local_120 = &local_1c8;
  uVar13 = CONCAT44(uVar14,DAT_141a580a0);
  FUN_140e634e0(param_1,param_2,&local_268,4,uVar13,&local_138);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  local_208 = 0x38;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  local_258 = (double)CONCAT44(uRam00000001419e3a44,_DAT_1419e3a40);
  uStack_250 = uRam00000001419e3a48;
  uStack_24c = uRam00000001419e3a4c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_258);
  local_138 = &local_1f8;
  local_258 = (double)CONCAT44(uRam00000001419e3a54,_DAT_1419e3a50);
  uStack_250 = uRam00000001419e3a58;
  uStack_24c = uRam00000001419e3a5c;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_258);
  local_130 = &local_1e8;
  uVar13 = CONCAT44(uVar14,DAT_141a04a18);
  FUN_140e634e0(param_1,param_2,&local_268,2,uVar13,&local_138);
  local_208 = 0x39;
  if ((int)local_58[0] < 8) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_50[7];
  }
  uVar6 = FUN_140e4a8b0(puVar7);
  FUN_140e9c240(uVar6);
  local_208 = 0x3a;
  FUN_140e9c1f0(0x3f800000);
  local_208 = 0x3b;
  uStack_24c = 0xd;
  local_258 = 0.0;
  uStack_23c = local_dc;
  uStack_240 = local_e0;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_248 = local_e8;
  }
  else {
    FUN_1400419b0(&local_248,&local_e8);
  }
  local_21c = 7;
  local_228 = CONCAT44(local_228._4_4_,1);
  FUN_1400462a0(&local_248,&local_228);
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_22c = local_cc;
  local_230 = local_d0;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_238 = local_d8;
  }
  else {
    FUN_1400419b0(&local_238,&local_d8);
  }
  local_21c = 7;
  local_228 = CONCAT44(local_228._4_4_,1);
  FUN_1400462a0(&local_238,&local_228);
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  uVar2 = FUN_140e491e0(&local_258);
  dVar10 = local_248;
  if ((uStack_23c & 0xffffff) != 0) {
    dVar10 = (double)FUN_140e4b060(&local_248);
  }
  dVar11 = local_238;
  if ((local_22c & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_238);
  }
  uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),uVar2);
  FUN_140e9c1c0(0,0,(float)dVar11,(float)dVar10,uVar13);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_208 = 0x3c;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  local_258 = (double)CONCAT44(uRam0000000141dc63b4,_DAT_141dc63b0);
  uStack_250 = uRam0000000141dc63b8;
  uStack_24c = uRam0000000141dc63bc;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_258);
  local_138 = &local_1f8;
  uVar13 = CONCAT44(uVar14,DAT_141a04848);
  FUN_140e634e0(param_1,param_2,&local_268,1,uVar13,&local_138);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  local_208 = 0x3d;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  local_258 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_250 = uRam00000001419df7c8;
  uStack_24c = uRam00000001419df7cc;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_258);
  local_138 = &local_1f8;
  local_258 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_250 = uRam00000001419df7c8;
  uStack_24c = uRam00000001419df7cc;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_258);
  local_130 = &local_1e8;
  local_258 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_250 = uRam00000001419df7c8;
  uStack_24c = uRam00000001419df7cc;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_258);
  local_128 = &local_1d8;
  local_258 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_250 = uRam00000001419df7c8;
  uStack_24c = uRam00000001419df7cc;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_258);
  local_120 = &local_1c8;
  uVar13 = CONCAT44(uVar14,DAT_141a580a0);
  FUN_140e634e0(param_1,param_2,&local_268,4,uVar13,&local_138);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  local_208 = 0x3e;
  FUN_140ec7870();
  local_208 = 0x40;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  local_138 = &local_150;
  if ((int)local_58[0] < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)*local_50;
  }
  local_22c = *(undefined4 *)((longlong)pdVar5 + 0xc);
  local_230 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) == 0) {
    local_238 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_238);
  }
  FUN_1400462a0(&local_238,&local_b8);
  uStack_23c = local_22c;
  uStack_240 = local_230;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) == 0) {
    local_248 = local_238;
  }
  else {
    FUN_1400419b0(&local_248,&local_238);
  }
  FUN_1400462a0(&local_248,&local_168);
  local_258 = local_248;
  uStack_250 = uStack_240;
  uStack_24c = uStack_23c;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_258);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_130 = &local_1e8;
  if (1 < (int)local_58[0]) {
    pdVar9 = (double *)local_50[1];
  }
  local_22c = *(undefined4 *)((longlong)pdVar9 + 0xc);
  local_230 = *(undefined4 *)(pdVar9 + 1);
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) == 0) {
    local_238 = *pdVar9;
  }
  else {
    FUN_1400419b0(&local_238,pdVar9);
  }
  FUN_1400462a0(&local_238,&local_c8);
  uStack_23c = local_22c;
  uStack_240 = local_230;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) == 0) {
    local_248 = local_238;
  }
  else {
    FUN_1400419b0(&local_248,&local_238);
  }
  FUN_1400462a0(&local_248,&local_168);
  local_258 = local_248;
  uStack_250 = uStack_240;
  uStack_24c = uStack_23c;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_258);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_128 = &local_1d8;
  uVar13 = CONCAT44(uVar14,DAT_141a049d8);
  FUN_140e634e0(param_1,param_2,&local_268,3,uVar13,&local_138);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  local_208 = 0x41;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  local_138 = &local_150;
  FUN_140e634e0(param_1,param_2,&local_268,1,CONCAT44(uVar14,DAT_141a04918),&local_138);
  local_208 = 0x43;
  FUN_140e9c240(0xffffff);
  local_208 = 0x44;
  FUN_140e9c1f0(0x3f800000);
LAB_140292195:
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_158 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_1f8,0x10,9,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar7 = local_50;
    do {
      puVar1 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_218;
  return param_3;
}

