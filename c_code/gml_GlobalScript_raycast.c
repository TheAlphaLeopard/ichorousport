// gml_GlobalScript_raycast @ 0x14043aec0

undefined8 *
gml_GlobalScript_raycast
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_1b0 = "gml_Script_draw_sprite_radial";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1a8 = 1;
  FUN_140041df0(local_58,param_4,10,param_5);
  uVar3 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_154 = 0xffffff;
  local_160 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_22c = 0;
  local_238 = 0;
  local_174 = 0;
  local_180 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1a8 = 1;
  puVar7 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 10) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_50[9];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_1a8 = 1;
    uStack_20c = 0xd;
    local_218 = 0x3ff0000000000000;
    if ((int)local_58[0] < 10) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[9];
      if (&local_218 == puVar4) goto LAB_14043b06e;
    }
    local_208 = 0x3ff0000000000000;
    uStack_200 = uStack_210;
    uStack_1fc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_208);
  }
LAB_14043b06e:
  local_1a8 = 4;
  if ((int)local_58[0] < 10) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_50[9];
  }
  cVar1 = FUN_140e491e0(puVar4);
  if (cVar1 == '\0') {
    local_1a8 = 0xc;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((int)local_58[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_14043bd1d:
      local_218 = *puVar4;
      uStack_210 = *(undefined4 *)(puVar4 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_218);
    }
    else {
      puVar4 = (undefined8 *)*local_50;
      if (puVar4 != &local_148) goto LAB_14043bd1d;
    }
    local_a8 = &local_148;
    if ((int)local_58[0] < 6) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[5];
    }
    uVar10 = CONCAT44(uVar3,DAT_141a04788);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_238,1,uVar10,&local_a8);
    uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_220 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
      local_228 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_228,puVar4);
    }
    FUN_140042560(&local_228,uVar5);
    if ((int)local_58[0] < 4) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[3];
    }
    uStack_1fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_200 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
      local_208 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_208);
    }
    FUN_1400462a0(&local_208,&local_228);
    local_218 = local_208;
    uStack_210 = uStack_200;
    uStack_20c = uStack_1fc;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_218);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_1a8 = 0xd;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((int)local_58[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_14043bf07:
      local_218 = *puVar4;
      uStack_210 = *(undefined4 *)(puVar4 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_218);
    }
    else {
      puVar4 = (undefined8 *)*local_50;
      if (puVar4 != &local_148) goto LAB_14043bf07;
    }
    local_a8 = &local_148;
    if ((int)local_58[0] < 6) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[5];
    }
    uVar10 = CONCAT44(uVar3,DAT_141a047c8);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_238,1,uVar10,&local_a8);
    uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_220 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
      local_228 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_228,puVar4);
    }
    FUN_140042560(&local_228,uVar5);
    uStack_1fc = local_1bc;
    uStack_200 = local_1c0;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
      local_208 = local_1c8;
    }
    else {
      FUN_1400419b0(&local_208,&local_1c8);
    }
    FUN_1400460e0(&local_208,&local_228);
    local_218 = local_208;
    uStack_210 = uStack_200;
    uStack_20c = uStack_1fc;
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    FUN_140041b80(&local_190,&local_218);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_1a8 = 0xe;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((int)local_58[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_14043c0e8:
      local_218 = *puVar4;
      uStack_210 = *(undefined4 *)(puVar4 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_218);
    }
    else {
      puVar4 = (undefined8 *)*local_50;
      if (puVar4 != &local_148) goto LAB_14043c0e8;
    }
    local_a8 = &local_148;
    if ((int)local_58[0] < 7) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[6];
    }
    uVar10 = CONCAT44(uVar3,DAT_141a04768);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_238,1,uVar10,&local_a8);
    uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_220 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
      local_228 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_228,puVar4);
    }
    FUN_140042560(&local_228,uVar5);
    if ((int)local_58[0] < 5) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[4];
    }
    uStack_1fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_200 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
      local_208 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_208);
    }
    FUN_1400462a0(&local_208,&local_228);
    local_218 = local_208;
    uStack_210 = uStack_200;
    uStack_20c = uStack_1fc;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_218);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_1a8 = 0xf;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((int)local_58[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_14043c2d2:
      local_218 = *puVar4;
      uStack_210 = *(undefined4 *)(puVar4 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_218);
    }
    else {
      puVar4 = (undefined8 *)*local_50;
      if (puVar4 != &local_148) goto LAB_14043c2d2;
    }
    local_a8 = &local_148;
    if ((int)local_58[0] < 7) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[6];
    }
    uVar5 = FUN_140e634e0(param_1,param_2,&local_238,1,CONCAT44(uVar3,DAT_141a04808),&local_a8);
    uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_220 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
      local_228 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_228,puVar4);
    }
    FUN_140042560(&local_228,uVar5);
    uStack_1fc = local_1cc;
    uStack_200 = local_1d0;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
      local_208 = local_1d8;
    }
    else {
      FUN_1400419b0(&local_208,&local_1d8);
    }
    FUN_1400460e0(&local_208,&local_228);
    local_218 = local_208;
    uStack_210 = uStack_200;
    uStack_20c = uStack_1fc;
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    FUN_140041b80(&local_1a0,&local_218);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
  }
  else {
    local_1a8 = 5;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((int)local_58[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_14043b0db:
      local_218 = *puVar4;
      uStack_210 = *(undefined4 *)(puVar4 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_218);
    }
    else {
      puVar4 = (undefined8 *)*local_50;
      if (puVar4 != &local_148) goto LAB_14043b0db;
    }
    local_a8 = &local_148;
    uVar5 = CONCAT44(uVar3,DAT_141a04788);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_238,1,uVar5,&local_a8);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar4 != &local_160) {
      local_218 = *puVar4;
      uStack_210 = *(undefined4 *)(puVar4 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_160);
      }
      FUN_140041b80(&local_160,&local_218);
    }
    local_1a8 = 6;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((int)local_58[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_14043b1c5:
      local_218 = *puVar4;
      uStack_210 = *(undefined4 *)(puVar4 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_218);
    }
    else {
      puVar4 = (undefined8 *)*local_50;
      if (puVar4 != &local_148) goto LAB_14043b1c5;
    }
    local_a8 = &local_148;
    uVar5 = CONCAT44(uVar3,DAT_141a04768);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_238,1,uVar5,&local_a8);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar4 != &local_170) {
      local_218 = *puVar4;
      uStack_210 = *(undefined4 *)(puVar4 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      FUN_140041b80(&local_170,&local_218);
    }
    local_1a8 = 7;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((int)local_58[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_14043b2af:
      local_218 = *puVar4;
      uStack_210 = *(undefined4 *)(puVar4 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_218);
    }
    else {
      puVar4 = (undefined8 *)*local_50;
      if (puVar4 != &local_148) goto LAB_14043b2af;
    }
    local_a8 = &local_148;
    uVar5 = CONCAT44(uVar3,DAT_141a08988);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_238,1,uVar5,&local_a8);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_220 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
      local_228 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_228,puVar4);
    }
    FUN_1400462a0(&local_228,&local_160);
    if ((int)local_58[0] < 6) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[5];
    }
    local_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    local_1f0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
      local_1f8 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_1f8);
    }
    FUN_140042560(&local_1f8,&local_228);
    if ((int)local_58[0] < 4) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[3];
    }
    uStack_1dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_1e0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
      local_1e8 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_1e8);
    }
    FUN_1400460e0(&local_1e8,&local_1f8);
    local_218 = local_1e8;
    uStack_210 = uStack_1e0;
    uStack_20c = uStack_1dc;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_218);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_1a8 = 8;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((int)local_58[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_14043b4f9:
      local_218 = *puVar4;
      uStack_210 = *(undefined4 *)(puVar4 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_218);
    }
    else {
      puVar4 = (undefined8 *)*local_50;
      if (puVar4 != &local_148) goto LAB_14043b4f9;
    }
    local_a8 = &local_148;
    uVar5 = CONCAT44(uVar3,DAT_141a089d8);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_238,1,uVar5,&local_a8);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_1dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_1e0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
      local_1e8 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_1e8,puVar4);
    }
    uStack_20c = 7;
    local_218 = CONCAT44(local_218._4_4_,1);
    FUN_1400460e0(&local_1e8,&local_218);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uStack_1fc = uStack_1dc;
    uStack_200 = uStack_1e0;
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
      local_208 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_208,&local_1e8);
    }
    FUN_1400462a0(&local_208,&local_160);
    if ((int)local_58[0] < 6) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[5];
    }
    local_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    local_1f0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
      local_1f8 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_1f8);
    }
    FUN_140042560(&local_1f8,&local_208);
    if ((int)local_58[0] < 4) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[3];
    }
    uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_220 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
      local_228 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_228);
    }
    FUN_1400460e0(&local_228,&local_1f8);
    local_218 = local_228;
    uStack_210 = uStack_220;
    uStack_20c = uStack_21c;
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    FUN_140041b80(&local_190,&local_218);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1a8 = 9;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((int)local_58[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_14043b7e7:
      local_218 = *puVar4;
      uStack_210 = *(undefined4 *)(puVar4 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_218);
    }
    else {
      puVar4 = (undefined8 *)*local_50;
      if (puVar4 != &local_148) goto LAB_14043b7e7;
    }
    local_a8 = &local_148;
    uVar5 = CONCAT44(uVar3,DAT_1419f7078);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_238,1,uVar5,&local_a8);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    local_1f0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
      local_1f8 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_1f8,puVar4);
    }
    FUN_1400462a0(&local_1f8,&local_170);
    if ((int)local_58[0] < 7) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[6];
    }
    uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_220 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
      local_228 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_228);
    }
    FUN_140042560(&local_228,&local_1f8);
    if ((int)local_58[0] < 5) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[4];
    }
    uStack_1fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_200 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
      local_208 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_208);
    }
    FUN_1400460e0(&local_208,&local_228);
    local_218 = local_208;
    uStack_210 = uStack_200;
    uStack_20c = uStack_1fc;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_218);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1a8 = 10;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    if ((int)local_58[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_14043ba39:
      local_218 = *puVar4;
      uStack_210 = *(undefined4 *)(puVar4 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_218);
    }
    else {
      puVar4 = (undefined8 *)*local_50;
      if (puVar4 != &local_148) goto LAB_14043ba39;
    }
    local_a8 = &local_148;
    puVar4 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_238,1,CONCAT44(uVar3,DAT_1419f7058),&local_a8);
    uStack_1dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_1e0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
      local_1e8 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_1e8,puVar4);
    }
    uStack_20c = 7;
    local_218 = CONCAT44(local_218._4_4_,1);
    FUN_1400460e0(&local_1e8,&local_218);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_1ec = uStack_1dc;
    local_1f0 = uStack_1e0;
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
      local_1f8 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_1f8,&local_1e8);
    }
    FUN_1400462a0(&local_1f8,&local_170);
    if ((int)local_58[0] < 7) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[6];
    }
    uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_220 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
      local_228 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_228);
    }
    FUN_140042560(&local_228,&local_1f8);
    if ((int)local_58[0] < 5) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[4];
    }
    uStack_1fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_200 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
      local_208 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_208);
    }
    FUN_1400460e0(&local_208,&local_228);
    local_218 = local_208;
    uStack_210 = uStack_200;
    uStack_20c = uStack_1fc;
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    FUN_140041b80(&local_1a0,&local_218);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
  }
  local_1a8 = 0x11;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  local_180 = 0;
  local_178 = 0;
  local_174 = 5;
  if ((int)local_58[0] < 2) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_50[1];
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar9 = *pdVar6;
  }
  else {
    dVar9 = (double)FUN_140e4b060();
  }
  if ((int)local_58[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_50;
  }
  uVar3 = FUN_140e4a740(puVar4);
  puVar4 = (undefined8 *)FUN_140ec6010(&local_180,uVar3,(longlong)dVar9);
  if (puVar4 != &local_148) {
    local_218 = *puVar4;
    uStack_210 = *(undefined4 *)(puVar4 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_218);
  }
  local_a8 = &local_148;
  if ((int)local_58[0] < 3) {
    puVar4 = &DAT_1419df7b0;
LAB_14043c562:
    local_218 = *puVar4;
    uStack_210 = *(undefined4 *)(puVar4 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_218);
  }
  else {
    puVar4 = (undefined8 *)local_50[2];
    if (puVar4 != &local_138) goto LAB_14043c562;
  }
  local_a0 = &local_138;
  local_98 = &local_1c8;
  local_90 = &local_1d8;
  local_88 = &local_190;
  local_80 = &local_1a0;
  if ((int)local_58[0] < 8) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_50[7];
    if (puVar4 == &local_e8) goto LAB_14043c61d;
  }
  local_218 = *puVar4;
  uStack_210 = *(undefined4 *)(puVar4 + 1);
  uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_218);
LAB_14043c61d:
  local_78 = &local_e8;
  if (((int)local_58[0] < 9) || (puVar7 = (undefined8 *)local_50[8], puVar7 != &local_d8)) {
    local_218 = *puVar7;
    uStack_210 = *(undefined4 *)(puVar7 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_218);
  }
  local_70 = &local_d8;
  gml_Script____struct___209_raycast_raycast(param_1,param_2,&local_238,8,&local_a8);
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,10,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar7 = local_50;
    do {
      puVar4 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return param_3;
}

