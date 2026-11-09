// gml_Script_truestate_draw_current @ 0x14062bd50

undefined8 *
gml_Script_truestate_draw_current
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  double *pdVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double local_228;
  uint local_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  uint local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  double local_1f0;
  undefined4 local_1e8;
  uint local_1e4;
  undefined8 local_1e0;
  char *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8 [3];
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  double local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  double local_198;
  undefined4 local_190;
  uint local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  double local_178;
  undefined4 local_170;
  uint local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  uint local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  uint local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8 [2];
  undefined8 local_a8 [13];
  
  local_1d8 = "gml_Script_truestate_draw_history";
  local_1e0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e0;
  local_1d0 = 0xd7;
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_208 = 0xffffff;
  local_13c = 0xffffff;
  local_148 = 0;
  local_21c = 0xffffff;
  local_228 = 0.0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_23c = 0;
  local_248 = 0;
  local_14c = 0;
  local_158 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1d0 = 0xd8;
  puVar9 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 == &local_188) goto LAB_14062be94;
  }
  local_218 = *puVar5;
  uStack_210 = *(undefined4 *)(puVar5 + 1);
  uStack_20c = *(undefined4 *)((longlong)puVar5 + 0xc);
  FUN_140041b80(&local_188,&local_218);
LAB_14062be94:
  local_1d0 = 0xd9;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  puVar5 = (undefined8 *)FUN_140ea9060(&local_248);
  if (puVar5 != &local_1b8) {
    local_218 = *puVar5;
    uStack_210 = *(undefined4 *)(puVar5 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_218);
  }
  local_1d0 = 0xda;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fffa8);
  local_108 = &local_1b8;
  if (puVar5 != &local_c8) {
    local_218 = *puVar5;
    uStack_210 = *(undefined4 *)(puVar5 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)_local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_218);
  }
  local_100 = &local_c8;
  uVar6 = CONCAT44(uVar14,DAT_141a00148);
  FUN_140e634e0(param_1,param_2,&local_248,2,uVar6,&local_108);
  uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_1d0 = 0xdb;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  local_108 = &local_188;
  uVar6 = CONCAT44(uVar14,DAT_141a04458);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_248,1,uVar6,&local_108);
  if (puVar5 != &local_148) {
    local_218 = *puVar5;
    uStack_210 = *(undefined4 *)(puVar5 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar5 + 0xc);
    FUN_140041b80(&local_148,&local_218);
    local_208 = local_13c;
  }
  local_1d0 = 0xdc;
  FUN_1400460e0(&local_188,&DAT_141dd4f48);
  local_1d0 = 0xdd;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0.0;
  local_1d0 = 0xde;
  do {
    local_21c = 0;
LAB_14062c0b3:
    uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (param_4 < 4) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[3];
    }
    iVar3 = FUN_140e851f0(&local_228,puVar5,DAT_141955260,1);
    if (iVar3 == -2 || -1 < iVar3) {
LAB_14062c40b:
      uVar6 = local_148;
      local_1d0 = 0xe2;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      local_108 = &local_1b8;
      uVar8 = CONCAT44(uVar14,DAT_1419fff88);
      FUN_140e634e0(param_1,param_2,&local_248,1,uVar8,&local_108);
      uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
      local_1d0 = 0xe3;
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      local_1f4 = 0;
      local_200 = 0x4034000000000000;
      local_1d0 = 0xe4;
      if (param_4 < 5) {
        uVar8 = FUN_140e4a8b0(&DAT_1419df7b0);
        FUN_140e9c240(uVar8);
      }
      else {
        uVar8 = FUN_140e4a8b0(param_5[4]);
        FUN_140e9c240(uVar8);
        if (5 < param_4) {
          pdVar7 = (double *)param_5[5];
          goto LAB_14062c4f3;
        }
      }
      pdVar7 = (double *)&DAT_1419df7b0;
LAB_14062c4f3:
      local_1d0 = 0xe5;
      if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
        dVar10 = *pdVar7;
      }
      else {
        dVar10 = (double)FUN_140e4b060();
      }
      FUN_140e9c1f0((float)dVar10);
      local_1d0 = 0xe6;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      local_108 = &local_188;
      uStack_20c = 0xd;
      local_218 = 0;
      uStack_22c = local_1f4;
      uStack_230 = local_1f8;
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) == 0) {
        local_238 = local_200;
      }
      else {
        FUN_1400419b0(&local_238,&local_200);
      }
      local_1bc = 7;
      local_1c8[0] = 3;
      FUN_140042560(&local_238,local_1c8);
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      if (param_4 < 4) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)param_5[3];
      }
      local_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
      local_110 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
        local_118 = *puVar5;
      }
      else {
        FUN_1400419b0(&local_118);
      }
      local_1bc = 7;
      local_1c8[0] = 1;
      FUN_1400460e0(&local_118,local_1c8);
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      local_11c = local_208;
      local_120 = local_140;
      local_208 = local_208 & 0x1f;
      if ((1 << (sbyte)local_208 & 0x46U) == 0) {
        local_128 = uVar6;
      }
      else {
        FUN_1400419b0(&local_128,&local_148);
      }
      FUN_140042560(&local_128,&local_118);
      if (param_4 < 3) {
        pdVar7 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar7 = (double *)param_5[2];
      }
      local_18c = *(uint *)((longlong)pdVar7 + 0xc);
      local_190 = *(undefined4 *)(pdVar7 + 1);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
        local_198 = *pdVar7;
      }
      else {
        FUN_1400419b0(&local_198);
      }
      FUN_1400460e0(&local_198,&local_128);
      local_1e4 = local_18c;
      local_1e8 = local_190;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
        local_1f0 = local_198;
      }
      else {
        FUN_1400419b0(&local_1f0,&local_198);
      }
      FUN_1400460e0(&local_1f0,&local_238);
      local_12c = local_1f4;
      local_130 = local_1f8;
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) == 0) {
        local_138 = local_200;
      }
      else {
        FUN_1400419b0(&local_138,&local_200);
      }
      local_1bc = 7;
      local_1c8[0] = 2;
      FUN_140042560(&local_138,local_1c8);
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      if (param_4 < 2) {
        pdVar7 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar7 = (double *)param_5[1];
      }
      uVar8 = CONCAT44(uVar14,DAT_141a04af8);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_248,1,uVar8,&local_108);
      local_19c = *(uint *)((longlong)pdVar7 + 0xc);
      local_1a0 = *(undefined4 *)(pdVar7 + 1);
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
        local_1a8 = *pdVar7;
      }
      else {
        FUN_1400419b0(&local_1a8,pdVar7);
      }
      FUN_1400460e0(&local_1a8,uVar6);
      local_16c = local_19c;
      local_170 = local_1a0;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
        local_178 = local_1a8;
      }
      else {
        FUN_1400419b0(&local_178,&local_1a8);
      }
      FUN_1400460e0(&local_178,&local_138);
      uVar2 = FUN_140e491e0(&local_218);
      dVar10 = local_1f0;
      if ((local_1e4 & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_1f0);
      }
      dVar11 = local_178;
      if ((local_16c & 0xffffff) != 0) {
        dVar11 = (double)FUN_140e4b060(&local_178);
      }
      if (param_4 < 3) {
        pdVar7 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar7 = (double *)param_5[2];
      }
      if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
        dVar12 = *pdVar7;
      }
      else {
        dVar12 = (double)FUN_140e4b060();
      }
      if (param_4 < 2) {
        pdVar7 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar7 = (double *)param_5[1];
      }
      if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
        dVar13 = *pdVar7;
      }
      else {
        dVar13 = (double)FUN_140e4b060();
      }
      uVar6 = CONCAT71((int7)((ulonglong)uVar8 >> 8),uVar2);
      FUN_140e9c1c0((float)dVar13,(float)dVar12,(float)dVar11,(float)dVar10,uVar6);
      uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f0);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_1d0 = 0xea;
      FUN_140e9c1f0(0x3f800000);
      local_1d0 = 0xeb;
      thunk_FUN_141039d20(0);
      local_1d0 = 0xec;
      thunk_FUN_141039d50(0);
      local_1d0 = 0xed;
      FUN_140e9c240(0xffffff);
      local_1d0 = 0xee;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      if (param_4 < 2) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)param_5[1];
      }
      uStack_22c = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_230 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
        local_238 = *puVar5;
      }
      else {
        FUN_1400419b0(&local_238);
      }
      FUN_1400460e0(&local_238,&local_200);
      local_218 = local_238;
      uStack_210 = uStack_230;
      uStack_20c = uStack_22c;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_218);
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      local_108 = &local_d8;
      if (2 < param_4) {
        puVar9 = (undefined8 *)param_5[2];
      }
      uStack_22c = *(undefined4 *)((longlong)puVar9 + 0xc);
      uStack_230 = *(undefined4 *)(puVar9 + 1);
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
        local_238 = *puVar9;
      }
      else {
        FUN_1400419b0(&local_238,puVar9);
      }
      FUN_1400460e0(&local_238,&local_200);
      local_218 = local_238;
      uStack_210 = uStack_230;
      uStack_20c = uStack_22c;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_218);
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      local_100 = &local_c8;
      local_f8 = &local_188;
      FUN_140e634e0(param_1,param_2,&local_248,3,CONCAT44(uVar14,DAT_141a04598),&local_108);
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if ((1 << ((byte)local_208 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      _eh_vector_destructor_iterator_(&local_d8,0x10,6,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_1e0;
      return param_3;
    }
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    local_108 = &local_1b8;
    uVar8 = CONCAT44(uVar14,DAT_141a000f8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_248,1,uVar8,&local_108);
    uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
    cVar1 = FUN_140e491e0(uVar6);
    if (cVar1 != '\0') goto LAB_14062c40b;
    local_1d0 = 0xdf;
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
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00238);
    local_100 = &local_1b8;
    if (puVar5 != local_b8) {
      local_218 = *puVar5;
      uStack_210 = *(undefined4 *)(puVar5 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_218);
    }
    local_f8 = local_b8;
    uVar6 = CONCAT44(uVar14,DAT_1419fffc8);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar6,&local_100);
    uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar5 != local_a8) {
      local_218 = *puVar5;
      uStack_210 = *(undefined4 *)(puVar5 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_218);
    }
    local_f0 = local_a8;
    uStack_22c = DAT_141dd4f94;
    uStack_230 = DAT_141dd4f90;
    if ((1 << ((byte)DAT_141dd4f94 & 0x1f) & 0x46U) == 0) {
      local_238 = DAT_141dd4f88;
    }
    else {
      FUN_1400419b0(&local_238,&DAT_141dd4f88);
    }
    uVar6 = CONCAT44(uVar14,DAT_1419ff4f8);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_158,2,uVar6,&local_f8);
    local_1e4 = *(undefined4 *)((longlong)pdVar7 + 0xc);
    local_1e8 = *(undefined4 *)(pdVar7 + 1);
    if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) == 0) {
      local_1f0 = *pdVar7;
    }
    else {
      FUN_1400419b0(&local_1f0,pdVar7);
    }
    FUN_1400460e0(&local_1f0,&local_238);
    FUN_1400460e0(&local_188,&local_1f0);
    if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f0);
    }
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_1d0 = 0xe0;
    uVar4 = local_21c & 0xffffff;
    if (uVar4 == 0) {
LAB_14062c3ca:
      local_228 = local_228 + 1.0;
      goto LAB_14062c0b3;
    }
    if (uVar4 != 1) {
      if (uVar4 == 7) {
        local_228 = (double)CONCAT44(local_228._4_4_,local_228._0_4_ + 1);
      }
      else if (uVar4 == 10) {
        local_228 = (double)((longlong)local_228 + 1);
      }
      else {
        if (uVar4 == 0xd) {
          local_21c = 0;
          goto LAB_14062c3ca;
        }
        FUN_140042910(&DAT_14172c3d8,&local_228,&local_228);
      }
      goto LAB_14062c0b3;
    }
    local_228 = (double)FUN_140e4b060(&local_228);
    local_228 = local_228 + 1.0;
  } while( true );
}

