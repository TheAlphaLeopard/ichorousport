// gml_Script__func_delete_buffer_anon_7249_scribble_markdown_format_scribble_markdown_format @ 0x1404769e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script__func_delete_buffer_anon_7249_scribble_markdown_format_scribble_markdown_format
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
          undefined8 *param_5)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 local_res8;
  undefined8 local_res10;
  uint local_res18;
  uint local_res20 [2];
  undefined4 uVar12;
  undefined8 uVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar13;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  ulonglong local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 *local_198;
  ulonglong *local_190;
  undefined8 *local_188 [3];
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  uint local_c8 [2];
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 **local_b0;
  undefined8 *local_a8;
  ulonglong *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  uint *local_78;
  undefined8 local_70;
  undefined4 local_64;
  
  local_res18 = 0;
  local_1f0 = "gml_Script_scribble_kerning_pair_set";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 0xb;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res20[0] = param_4;
  FUN_140041df0(local_c8,param_4,5,param_5);
  uVar8 = (ulonglong)local_c8[0];
  local_res20[0] = local_c8[0];
  param_5 = local_c0;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_154 = 0xffffff;
  local_160 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  local_23c = 0;
  local_248 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_1fc = 0;
  local_208 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1e8 = 0xb;
  puVar7 = &DAT_1419df7b0;
  if ((int)local_res20[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[4];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_1e8 = 0xb;
    uStack_22c = 0xd;
    local_238 = 0;
    if ((int)local_res20[0] < 5) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[4];
      if (&local_238 == puVar5) goto LAB_140476bee;
    }
    local_218 = 0;
    uStack_210 = uStack_230;
    uStack_20c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_218);
  }
LAB_140476bee:
  local_1e8 = 0xd;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  if ((int)local_res20[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_140476c45:
    local_238 = *puVar5;
    uStack_230 = *(undefined4 *)(puVar5 + 1);
    uStack_22c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_238);
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
    if (puVar5 != &local_148) goto LAB_140476c45;
  }
  local_198 = &local_148;
  uVar10 = CONCAT44(uVar12,DAT_141a0a0b8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_248,1,uVar10,&local_198);
  uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if ((int)local_res20[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_140476d62:
      local_218 = *puVar5;
      uStack_210 = *(undefined4 *)(puVar5 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_218);
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
      if (puVar5 != &local_128) goto LAB_140476d62;
    }
    local_188[0] = &local_128;
    uVar4 = CONCAT44(uVar12,DAT_1419fdc48);
    puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_208,1,uVar4,local_188);
    uVar12 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_20c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_210 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_218 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_218,puVar5);
    }
    puVar5 = &local_218;
    uVar9 = 0x42;
  }
  else {
    if ((int)local_res20[0] < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
    }
    uStack_22c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_230 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_238 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_238);
    }
    puVar5 = &local_238;
    uVar9 = 1;
  }
  local_228 = *(undefined4 *)puVar5;
  uStack_224 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_220 = *(undefined4 *)(puVar5 + 1);
  uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_res18 = uVar9;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  FUN_140041b80(&local_160,&local_228);
  if (((uVar9 & 2) != 0) &&
     (uVar9 = uVar9 & 0xfffffffd, local_res18 = uVar9, (1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0
     )) {
    FUN_140041a50(&local_218);
  }
  if (((uVar9 & 1) != 0) &&
     (uVar9 = uVar9 & 0xfffffffe, local_res18 = uVar9, (1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0
     )) {
    FUN_140041a50(&local_238);
  }
  local_1e8 = 0xe;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  if ((int)local_res20[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_140476ef1:
    local_228 = *(undefined4 *)puVar5;
    uStack_224 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_220 = *(undefined4 *)(puVar5 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_228);
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
    if (puVar5 != &local_148) goto LAB_140476ef1;
  }
  local_198 = &local_148;
  ppuVar13 = &local_198;
  uVar10 = CONCAT44(uVar12,DAT_141a0a0b8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_248,1,uVar10,ppuVar13);
  uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if ((int)local_res20[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_14047700c:
      local_228 = *(undefined4 *)puVar5;
      uStack_224 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_220 = *(undefined4 *)(puVar5 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_228);
    }
    else {
      puVar5 = (undefined8 *)param_5[2];
      if (puVar5 != &local_128) goto LAB_14047700c;
    }
    local_188[0] = &local_128;
    ppuVar13 = local_188;
    puVar5 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_208,1,CONCAT44(uVar12,DAT_1419fdc48),
                           ppuVar13);
    uStack_22c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_230 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_238 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_238,puVar5);
    }
    puVar5 = &local_238;
    uVar9 = uVar9 | 0x88;
  }
  else {
    if ((int)local_res20[0] < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[2];
    }
    uStack_20c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_210 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_218 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_218);
    }
    puVar5 = &local_218;
    uVar9 = uVar9 | 4;
  }
  local_228 = *(undefined4 *)puVar5;
  uStack_224 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_220 = *(undefined4 *)(puVar5 + 1);
  uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_res18 = uVar9;
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  FUN_140041b80(&local_170,&local_228);
  if (((uVar9 & 8) != 0) &&
     (uVar9 = uVar9 & 0xfffffff7, local_res18 = uVar9, (1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0
     )) {
    FUN_140041a50(&local_238);
  }
  if (((uVar9 & 4) != 0) &&
     (uVar9 = uVar9 & 0xfffffffb, local_res18 = uVar9, (1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0
     )) {
    FUN_140041a50(&local_218);
  }
  local_1e8 = 0x10;
  if ((int)local_res20[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  uStack_22c = 0;
  local_238 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_238,DAT_141955260,0);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (iVar3 == 0) {
    local_1e8 = 0x12;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    local_228 = _DAT_141dd3208;
    uStack_224 = uRam0000000141dd320c;
    uStack_220 = uRam0000000141dd3210;
    uStack_21c = DAT_141dd3214;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_228);
    local_198 = &local_148;
    FUN_1401ef7f0(local_res8,local_res10,&local_248,1,&local_198);
  }
  local_1e8 = 0x15;
  if ((int)local_res20[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  uStack_22c = 0;
  local_238 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_238,DAT_141955260,1);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (iVar3 != -2 && iVar3 < 0) {
    local_1e8 = 0x17;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    local_228 = _DAT_141dd3218;
    uStack_224 = uRam0000000141dd321c;
    uStack_220 = uRam0000000141dd3220;
    uStack_21c = DAT_141dd3224;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_228);
    local_198 = &local_148;
    FUN_1401ef7f0(local_res8,local_res10,&local_248,1,&local_198);
  }
  local_1e8 = 0x1a;
  if ((int)local_res20[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
  }
  uStack_22c = 0;
  local_238 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_238,DAT_141955260,1);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (iVar3 != -2 && iVar3 < 0) {
    local_1e8 = 0x1c;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    local_228 = _DAT_141dd31f8;
    uStack_224 = uRam0000000141dd31fc;
    uStack_220 = uRam0000000141dd3200;
    uStack_21c = DAT_141dd3204;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_228);
    local_198 = &local_148;
    FUN_1401ef7f0(local_res8,local_res10,&local_248,1,&local_198);
  }
  local_1e8 = 0x1f;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  if ((int)local_res20[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1404774b4:
    local_228 = *(undefined4 *)puVar5;
    uStack_224 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_220 = *(undefined4 *)(puVar5 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_228);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_148) goto LAB_1404774b4;
  }
  local_198 = &local_148;
  ppuVar11 = &local_198;
  puVar5 = (undefined8 *)FUN_1401effd0(local_res8,local_res10,&local_248,1,ppuVar11);
  if (puVar5 != &local_1a8) {
    local_228 = *(undefined4 *)puVar5;
    uStack_224 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_220 = *(undefined4 *)(puVar5 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_228);
  }
  local_1e8 = 0x20;
  uVar6 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_1a8,DAT_141a063f8,0x80000000,&local_f8,uVar6,
                (ulonglong)ppuVar13 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar6 >> 0x20);
  local_228 = (undefined4)local_f8;
  uStack_224 = local_f8._4_4_;
  uStack_220 = uStack_f0;
  uStack_21c = uStack_ec;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_228);
  local_1e8 = 0x22;
  uVar6 = FUN_140e4a8b0(&local_170);
  uVar2 = FUN_140e4a8b0(&local_160);
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1bc = 10;
  local_1e8 = 0x23;
  if ((int)local_res20[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[4];
  }
  local_1c8 = (ulonglong)uVar2 | (uVar6 & 0xffff) << 0x10;
  cVar1 = FUN_140e491e0(puVar5);
  if (cVar1 == '\0') {
    if (3 < (int)local_res20[0]) {
      puVar7 = (undefined8 *)param_5[3];
    }
    uStack_22c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_230 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_238 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_238,puVar7);
    }
    puVar7 = &local_238;
    local_res18 = uVar9 | 0x20;
  }
  else {
    local_b8 = &local_e8;
    local_b0 = &local_198;
    local_a8 = &local_1b8;
    local_a0 = &local_1c8;
    local_98 = &local_d8;
    local_90 = &local_res8;
    local_88 = &local_res10;
    local_80 = &param_5;
    local_78 = local_res20;
    puVar7 = (undefined8 *)FUN_140477a40(&local_b8,&local_218);
    uVar9 = uVar9 | 0x10;
    local_res18 = uVar9;
    if (puVar7 == &local_1d8) goto LAB_14047774e;
  }
  uVar9 = local_res18;
  local_228 = *(undefined4 *)puVar7;
  uStack_224 = *(undefined4 *)((longlong)puVar7 + 4);
  uStack_220 = *(undefined4 *)(puVar7 + 1);
  uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_228);
LAB_14047774e:
  if (((uVar9 & 0x20) != 0) &&
     (uVar9 = uVar9 & 0xffffffdf, local_res18 = uVar9, (1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0
     )) {
    FUN_140041a50(&local_238);
  }
  if (((uVar9 & 0x10) != 0) && ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_218);
  }
  local_1e8 = 0x24;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  local_198 = &local_1b8;
  local_190 = &local_1c8;
  local_188[0] = &local_1d8;
  FUN_140e634e0(local_res8,local_res10,&local_248,3,CONCAT44(uVar12,DAT_1419ff3d8),&local_198);
  local_1e8 = 0x26;
  if (&local_1d8 != param_3) {
    local_228 = (undefined4)local_1d8;
    uStack_224 = local_1d8._4_4_;
    uStack_220 = uStack_1d0;
    uStack_21c = uStack_1cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_228);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,5,FUN_140041b30);
  if (0 < (int)local_c8[0]) {
    puVar7 = local_c0;
    do {
      puVar5 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_c0);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return param_3;
}

