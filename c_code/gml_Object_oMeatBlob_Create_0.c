// gml_Object_oMeatBlob_Create_0 @ 0x140b51d20

void gml_Object_oMeatBlob_Create_0(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  code *pcVar10;
  ulonglong uVar11;
  undefined4 uVar13;
  undefined8 uVar12;
  ulonglong in_stack_fffffffffffffdf0;
  undefined1 *local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined4 local_1f8 [3];
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  double local_198;
  undefined4 local_190;
  uint local_18c;
  double local_188;
  undefined4 local_180;
  uint local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60 [7];
  
  local_100 = "gml_Object_oMainMenuPause_Draw_0";
  local_f8 = 0;
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_e8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_f8 = 2;
  local_1fc = 6;
  uVar11 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_141a0a7e8,0,&local_118,uVar11,
                in_stack_fffffffffffffdf0 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar11 >> 0x20);
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_1fc = 0;
  local_208 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(&local_118,&local_208,DAT_141955260,0);
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if (iVar2 == 0) {
    local_f8 = 3;
    FUN_140e9c240(0);
    local_f8 = 4;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    FUN_140e85f80(param_1,DAT_141a00d08,0,&local_1b8);
    local_1e8 = local_1b8;
    uStack_1e0 = uStack_1b0;
    uStack_1dc = uStack_1ac;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1e8);
    local_88 = local_e8;
    local_1e8 = local_1b8;
    uStack_1e0 = uStack_1b0;
    uStack_1dc = uStack_1ac;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1e8);
    local_80 = local_d8;
    local_1e8 = local_1b8;
    uStack_1e0 = uStack_1b0;
    uStack_1dc = uStack_1ac;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1e8);
    local_78 = local_c8;
    local_1e8 = local_1b8;
    uStack_1e0 = uStack_1b0;
    uStack_1dc = uStack_1ac;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1e8);
    local_70 = local_b8;
    local_1e8 = local_1b8;
    uStack_1e0 = uStack_1b0;
    uStack_1dc = uStack_1ac;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1e8);
    local_68 = local_a8;
    local_1e8 = local_1b8;
    uStack_1e0 = uStack_1b0;
    uStack_1dc = uStack_1ac;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_1e8);
    local_60[0] = local_98;
    uStack_1dc = 0xd;
    local_1e8 = 0;
    uVar12 = CONCAT44(uVar13,DAT_141a00d58);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar12,local_60);
    uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),DAT_141a00dd8);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar12,&local_68);
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
    local_1bc = *(uint *)((longlong)puVar4 + 0xc);
    local_1c0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
      local_1c8 = (undefined1 *)*puVar4;
    }
    else {
      FUN_1400419b0(&local_1c8,puVar4);
    }
    FUN_1400460e0(&local_1c8,uVar3);
    local_1fc = local_1bc;
    local_200 = local_1c0;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
      local_208 = local_1c8;
    }
    else {
      FUN_1400419b0(&local_208,&local_1c8);
    }
    local_1ec = 7;
    local_1f8[0] = 1;
    FUN_1400460e0(&local_208,local_1f8);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    uVar12 = CONCAT44(uVar13,DAT_141a00c98);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar12,&local_70);
    uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),DAT_141a00e38);
    pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar12,&local_78);
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
    local_1cc = *(uint *)((longlong)pdVar5 + 0xc);
    local_1d0 = *(undefined4 *)(pdVar5 + 1);
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
      local_1d8 = *pdVar5;
    }
    else {
      FUN_1400419b0(&local_1d8,pdVar5);
    }
    FUN_1400460e0(&local_1d8,uVar3);
    local_17c = local_1cc;
    local_180 = local_1d0;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
      local_188 = local_1d8;
    }
    else {
      FUN_1400419b0(&local_188,&local_1d8);
    }
    local_1ec = 7;
    local_1f8[0] = 1;
    FUN_1400460e0(&local_188,local_1f8);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    uVar3 = CONCAT44(uVar13,DAT_141a00dd8);
    pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar3,&local_80);
    uVar13 = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_18c = *(uint *)((longlong)pdVar5 + 0xc);
    local_190 = *(undefined4 *)(pdVar5 + 1);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_198 = *pdVar5;
    }
    else {
      FUN_1400419b0(&local_198,pdVar5);
    }
    local_1ec = 7;
    local_1f8[0] = 1;
    FUN_1400462a0(&local_198,local_1f8);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    pdVar5 = (double *)
             FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar13,DAT_141a00e38),&local_88);
    local_19c = *(uint *)((longlong)pdVar5 + 0xc);
    local_1a0 = *(undefined4 *)(pdVar5 + 1);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
      local_1a8 = *pdVar5;
    }
    else {
      FUN_1400419b0(&local_1a8,pdVar5);
    }
    local_1ec = 7;
    local_1f8[0] = 1;
    FUN_1400462a0(&local_1a8,local_1f8);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    uVar1 = FUN_140e491e0(&local_1e8);
    puVar6 = local_208;
    if ((local_1fc & 0xffffff) != 0) {
      puVar6 = (undefined1 *)FUN_140e4b060(&local_208);
    }
    dVar7 = local_188;
    if ((local_17c & 0xffffff) != 0) {
      dVar7 = (double)FUN_140e4b060(&local_188);
    }
    dVar8 = local_198;
    if ((local_18c & 0xffffff) != 0) {
      dVar8 = (double)FUN_140e4b060(&local_198);
    }
    dVar9 = local_1a8;
    if ((local_19c & 0xffffff) != 0) {
      dVar9 = (double)FUN_140e4b060(&local_1a8);
    }
    FUN_140e9c1c0((float)dVar9,(float)dVar8,(float)dVar7,(float)(double)puVar6,uVar1);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
  }
  else {
    local_f8 = 2;
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
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
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return;
}

