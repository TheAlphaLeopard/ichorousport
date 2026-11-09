// gml_GlobalScript_PerlinFunc @ 0x140431af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_GlobalScript_PerlinFunc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  undefined8 *puVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar11;
  undefined8 uVar9;
  double **ppdVar10;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  double local_1d8;
  uint local_1cc;
  double local_1c8;
  byte local_1bc;
  undefined8 local_1b8;
  byte local_1ac;
  longlong local_1a8;
  undefined4 local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  longlong local_178;
  undefined4 local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  double *local_128;
  double *local_120;
  longlong *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  longlong *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  double local_d8;
  uint local_cc;
  double local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  
  local_140 = "gml_Script_create_perlin_noise_buffer";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x71;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_1c8,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  uStack_dc = 0xffffff;
  local_e8 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_1ec = 0;
  uVar7 = 0;
  uVar8 = 0;
  local_1f8 = 0;
  local_8c = 0;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x73;
  local_1e8 = (double)CONCAT44(uRam00000001419e4cb4,_DAT_1419e4cb0);
  uStack_1e0 = uRam00000001419e4cb8;
  uStack_1dc = uRam00000001419e4cbc;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_1e8);
  local_128 = &local_1c8;
  local_1e8 = (double)CONCAT44(uRam00000001419e4cb4,_DAT_1419e4cb0);
  uStack_1e0 = uRam00000001419e4cb8;
  uStack_1dc = uRam00000001419e4cbc;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_1e8);
  local_120 = (double *)&local_1b8;
  uVar9 = CONCAT44(uVar11,DAT_141a04a78);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_1f8,2,uVar9,&local_128);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (pdVar4 != &local_d8) {
    local_1e8 = *pdVar4;
    uStack_1e0 = *(undefined4 *)(pdVar4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1e8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0x4130000000000000;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_1a8 = FUN_140e4a8b0(&local_b8);
  local_1a8 = local_1a8 * 4;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_19c = 10;
  local_118 = &local_1a8;
  local_1e8 = (double)CONCAT44(uRam00000001419e4c44,_DAT_1419e4c40);
  uStack_1e0 = uRam00000001419e4c48;
  uStack_1dc = uRam00000001419e4c4c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_1e8);
  local_110 = local_198;
  local_1e8 = (double)CONCAT44(uRam00000001419e4ca4,_DAT_1419e4ca0);
  uStack_1e0 = uRam00000001419e4ca8;
  uStack_1dc = uRam00000001419e4cac;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_1e8);
  local_108 = local_188;
  uVar9 = CONCAT44(uVar11,DAT_141a0a588);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_98,3,uVar9,&local_118);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if ((double *)puVar5 != &local_c8) {
    local_1e8 = (double)*puVar5;
    uStack_1e0 = *(undefined4 *)(puVar5 + 1);
    uStack_1dc = *(uint *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1e8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_178 = FUN_140e4a8b0(&local_b8);
  local_178 = local_178 * 4;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 10;
  local_100 = &local_178;
  local_1e8 = (double)CONCAT44(uRam0000000141dc65a4,_DAT_141dc65a0);
  uStack_1e0 = uRam0000000141dc65a8;
  uStack_1dc = uRam0000000141dc65ac;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_1e8);
  local_f8 = local_168;
  local_1e8 = (double)CONCAT44(uRam00000001419e4c74,_DAT_1419e4c70);
  uStack_1e0 = uRam00000001419e4c78;
  uStack_1dc = uRam00000001419e4c7c;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1e8);
  local_f0 = local_158;
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_a8,3,CONCAT44(uVar11,DAT_141a0a588),&local_100);
  if (puVar5 != &local_e8) {
    local_1e8 = (double)*puVar5;
    uStack_1e0 = *(undefined4 *)(puVar5 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1e8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0;
  local_138 = 0x79;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_1e8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1e0 = DAT_1419df7b8;
  uStack_1dc = DAT_1419df7bc;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_1e8);
  local_128 = &local_1c8;
  local_1e8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1e0 = DAT_1419df7b8;
  uStack_1dc = DAT_1419df7bc;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_1e8);
  local_120 = (double *)&local_1b8;
  local_1e8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1e0 = DAT_1419df7b8;
  uStack_1dc = DAT_1419df7bc;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_1e8);
  local_118 = &local_1a8;
  ppdVar10 = &local_128;
  gml_Script_create_perlin_noise_buffer(param_1,param_2,&local_1f8,3,&local_128);
  uVar11 = (undefined4)((ulonglong)ppdVar10 >> 0x20);
  local_138 = 0x7a;
  dVar6 = local_d8;
  if ((local_cc & 0xffffff) != 0) {
    dVar6 = (double)FUN_140e4b060(&local_d8);
  }
  FUN_140ec60c0((longlong)dVar6,0xffffffff);
  local_138 = 0x7c;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_1e8 = (double)CONCAT44(uRam0000000141dc65a4,_DAT_141dc65a0);
  uStack_1e0 = uRam0000000141dc65a8;
  uStack_1dc = uRam0000000141dc65ac;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_1e8);
  local_128 = &local_1c8;
  local_1e8 = (double)CONCAT44(uRam0000000141dc65a4,_DAT_141dc65a0);
  uStack_1e0 = uRam0000000141dc65a8;
  uStack_1dc = uRam0000000141dc65ac;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_1e8);
  local_120 = (double *)&local_1b8;
  uVar9 = CONCAT44(uVar11,DAT_141a04558);
  FUN_140e634e0(param_1,param_2,&local_1f8,2,uVar9,&local_128);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_138 = 0x7d;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_1e8 = (double)CONCAT44(uRam00000001419e4c84,_DAT_1419e4c80);
  uStack_1e0 = uRam00000001419e4c88;
  uStack_1dc = uRam00000001419e4c8c;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_1e8);
  local_128 = &local_1c8;
  local_1e8 = (double)CONCAT44(uRam00000001419e4c54,_DAT_1419e4c50);
  uStack_1e0 = uRam00000001419e4c58;
  uStack_1dc = uRam00000001419e4c5c;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_1e8);
  local_120 = (double *)&local_1b8;
  uVar9 = CONCAT44(uVar11,DAT_1419f6e68);
  FUN_140e634e0(param_1,param_2,&local_1f8,2,uVar9,&local_128);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_138 = 0x7e;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_1e8 = (double)CONCAT44(uRam0000000141dc65a4,_DAT_141dc65a0);
  uStack_1e0 = uRam0000000141dc65a8;
  uStack_1dc = uRam0000000141dc65ac;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_1e8);
  local_128 = &local_1c8;
  local_1e8 = (double)CONCAT44(uRam0000000141dc65a4,_DAT_141dc65a0);
  uStack_1e0 = uRam0000000141dc65a8;
  uStack_1dc = uRam0000000141dc65ac;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_1e8);
  local_120 = (double *)&local_1b8;
  local_1e8 = (double)CONCAT44(uRam0000000141dc65a4,_DAT_141dc65a0);
  uStack_1e0 = uRam0000000141dc65a8;
  uStack_1dc = uRam0000000141dc65ac;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_1e8);
  local_118 = &local_1a8;
  local_1e8 = (double)CONCAT44(uRam0000000141dc65a4,_DAT_141dc65a0);
  uStack_1e0 = uRam0000000141dc65a8;
  uStack_1dc = uRam0000000141dc65ac;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_1e8);
  local_110 = local_198;
  uVar9 = CONCAT44(uVar11,DAT_1419f6eb8);
  FUN_140e634e0(param_1,param_2,&local_1f8,4,uVar9,&local_128);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_138 = 0x7f;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_1e8 = (double)CONCAT44(uRam00000001419e4cb4,_DAT_1419e4cb0);
  uStack_1e0 = uRam00000001419e4cb8;
  uStack_1dc = uRam00000001419e4cbc;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_1e8);
  local_128 = &local_1c8;
  local_1e8 = (double)CONCAT44(uRam0000000141dc65a4,_DAT_141dc65a0);
  uStack_1e0 = uRam0000000141dc65a8;
  uStack_1dc = uRam0000000141dc65ac;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_1e8);
  local_120 = (double *)&local_1b8;
  local_1e8 = (double)CONCAT44(uRam00000001419e4ca4,_DAT_1419e4ca0);
  uStack_1e0 = uRam00000001419e4ca8;
  uStack_1dc = uRam00000001419e4cac;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_1e8);
  local_118 = &local_1a8;
  local_1e8 = (double)CONCAT44(uRam0000000141dc65a4,_DAT_141dc65a0);
  uStack_1e0 = uRam0000000141dc65a8;
  uStack_1dc = uRam0000000141dc65ac;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_1e8);
  local_110 = local_198;
  uVar9 = CONCAT44(uVar11,DAT_1419f6eb8);
  FUN_140e634e0(param_1,param_2,&local_1f8,4,uVar9,&local_128);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_138 = 0x80;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_1e8 = (double)CONCAT44(uRam0000000141dc65a4,_DAT_141dc65a0);
  uStack_1e0 = uRam0000000141dc65a8;
  uStack_1dc = uRam0000000141dc65ac;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_1e8);
  local_128 = &local_1c8;
  local_1e8 = (double)CONCAT44(uRam00000001419e4cb4,_DAT_1419e4cb0);
  uStack_1e0 = uRam00000001419e4cb8;
  uStack_1dc = uRam00000001419e4cbc;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_1e8);
  local_120 = (double *)&local_1b8;
  local_1e8 = (double)CONCAT44(uRam0000000141dc65a4,_DAT_141dc65a0);
  uStack_1e0 = uRam0000000141dc65a8;
  uStack_1dc = uRam0000000141dc65ac;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_1e8);
  local_118 = &local_1a8;
  local_1e8 = (double)CONCAT44(uRam00000001419e4ca4,_DAT_1419e4ca0);
  uStack_1e0 = uRam00000001419e4ca8;
  uStack_1dc = uRam00000001419e4cac;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_1e8);
  local_110 = local_198;
  uVar9 = CONCAT44(uVar11,DAT_1419f6eb8);
  FUN_140e634e0(param_1,param_2,&local_1f8,4,uVar9,&local_128);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_138 = 0x81;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_1e8 = (double)CONCAT44(uRam00000001419e4cb4,_DAT_1419e4cb0);
  uStack_1e0 = uRam00000001419e4cb8;
  uStack_1dc = uRam00000001419e4cbc;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_1e8);
  local_128 = &local_1c8;
  local_1e8 = (double)CONCAT44(uRam00000001419e4cb4,_DAT_1419e4cb0);
  uStack_1e0 = uRam00000001419e4cb8;
  uStack_1dc = uRam00000001419e4cbc;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_1e8);
  local_120 = (double *)&local_1b8;
  local_1e8 = (double)CONCAT44(uRam00000001419e4ca4,_DAT_1419e4ca0);
  uStack_1e0 = uRam00000001419e4ca8;
  uStack_1dc = uRam00000001419e4cac;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_1e8);
  local_118 = &local_1a8;
  local_1e8 = (double)CONCAT44(uRam00000001419e4ca4,_DAT_1419e4ca0);
  uStack_1e0 = uRam00000001419e4ca8;
  uStack_1dc = uRam00000001419e4cac;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_1e8);
  local_110 = local_198;
  uVar9 = CONCAT44(uVar11,DAT_1419f6eb8);
  FUN_140e634e0(param_1,param_2,&local_1f8,4,uVar9,&local_128);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_138 = 0x82;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uVar9 = CONCAT44(uVar11,DAT_1419f6df8);
  FUN_140e634e0(param_1,param_2,&local_1f8,0,uVar9,0);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_138 = 0x84;
  FUN_140ec9dc0();
  local_138 = 0x85;
  FUN_140ec7870();
  local_138 = 0x87;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_128 = &local_c8;
  local_120 = &local_d8;
  local_1e8 = (double)CONCAT44(uRam0000000141dc65a4,_DAT_141dc65a0);
  uStack_1e0 = uRam0000000141dc65a8;
  uStack_1dc = uRam0000000141dc65ac;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_1e8);
  local_118 = &local_1a8;
  uVar9 = CONCAT44(uVar11,DAT_1419f6cc8);
  FUN_140e634e0(param_1,param_2,&local_1f8,3,uVar9,&local_128);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_138 = 0x88;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_128 = &local_d8;
  uVar9 = CONCAT44(uVar11,DAT_141a04918);
  FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar9,&local_128);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_138 = 0x8a;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_128 = (double *)&local_e8;
  local_1e8 = (double)CONCAT44(uRam0000000141dc65a4,_DAT_141dc65a0);
  uStack_1e0 = uRam0000000141dc65a8;
  uStack_1dc = uRam0000000141dc65ac;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_1e8);
  local_120 = (double *)&local_1b8;
  local_1e8 = (double)CONCAT44(uRam0000000141dc65a4,_DAT_141dc65a0);
  uStack_1e0 = uRam0000000141dc65a8;
  uStack_1dc = uRam0000000141dc65ac;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_1e8);
  local_118 = &local_1a8;
  uVar9 = CONCAT44(uVar11,DAT_141a05a38);
  FUN_140e634e0(param_1,param_2,&local_1f8,3,uVar9,&local_128);
  local_138 = 0x8b;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1cc = 0;
  local_1d8 = 0.0;
  bVar1 = true;
  do {
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (!bVar1) {
      local_138 = 0x8b;
      uVar2 = local_1cc & 0xffffff;
      if (uVar2 == 0) {
LAB_140432aa0:
        local_1d8 = (double)CONCAT44(uVar8,uVar7) + 1.0;
      }
      else if (uVar2 == 1) {
        local_1d8 = (double)FUN_140e4b060(&local_1d8);
        local_1d8 = local_1d8 + 1.0;
        local_1cc = 0;
      }
      else if (uVar2 == 7) {
        local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_1d8 = (double)((longlong)local_1d8 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_1cc = 0;
          goto LAB_140432aa0;
        }
        FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
      }
    }
    bVar1 = false;
    iVar3 = FUN_140e851f0(&local_1d8,&local_b8,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) {
      local_138 = 0x91;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      local_128 = &local_c8;
      FUN_140e634e0(param_1,param_2,&local_1f8,1,CONCAT44(uVar11,DAT_1419ef3b8),&local_128);
      local_138 = 0x93;
      if (&local_e8 != param_3) {
        local_68 = (undefined4)local_e8;
        uStack_64 = local_e8._4_4_;
        uStack_60 = uStack_e0;
        uStack_5c = uStack_dc;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_68);
      }
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      _eh_vector_destructor_iterator_(&local_1c8,0x10,8,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_148;
      return param_3;
    }
    local_138 = 0x8d;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    local_128 = &local_c8;
    local_120 = (double *)&local_88;
    local_68 = _DAT_1419e4ca0;
    uStack_64 = uRam00000001419e4ca4;
    uStack_60 = uRam00000001419e4ca8;
    uStack_5c = uRam00000001419e4cac;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_68);
    local_118 = &local_1a8;
    uVar9 = CONCAT44(uVar11,DAT_141a0a178);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1f8,3,uVar9,&local_128);
    local_6c = *(undefined4 *)((longlong)puVar5 + 0xc);
    local_70 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
      local_78 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_78,puVar5);
    }
    uStack_1dc = 0;
    local_1e8 = 255.0;
    FUN_140046500(&local_78,&local_1e8);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    dVar6 = local_e8;
    if ((uStack_dc & 0xffffff) != 0) {
      dVar6 = (double)FUN_140e4b060(&local_e8);
    }
    FUN_140ececc0((longlong)dVar6,8,&local_78);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    local_138 = 0x8e;
    FUN_140162d40(&local_88,4);
    uVar7 = SUB84(local_1d8,0);
    uVar8 = (undefined4)((ulonglong)local_1d8 >> 0x20);
  } while( true );
}

