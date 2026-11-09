// gml_GlobalScript_collisionReal @ 0x14025e2d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_collisionReal
          (ulonglong param_1,ulonglong param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulonglong local_res8;
  ulonglong local_res10;
  undefined4 uVar15;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar16;
  undefined8 **ppuVar17;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  char *local_270;
  undefined4 local_268;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  ulonglong local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  byte local_22c;
  undefined8 local_228;
  byte local_21c;
  undefined8 local_218;
  byte local_20c;
  undefined8 local_208 [2];
  undefined1 local_1f8 [48];
  undefined8 local_1c8;
  undefined4 local_1bc;
  double local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined1 *local_108 [3];
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  ulonglong local_d0;
  undefined4 local_c4;
  ulonglong local_c0;
  undefined4 local_b4;
  ulonglong local_b0;
  undefined4 local_a4;
  uint local_a0 [2];
  undefined8 *local_98;
  undefined1 local_90 [16];
  longlong local_80;
  
  local_270 = "gml_Script_collision_line_width";
  local_278 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_278;
  local_268 = 7;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_a0,param_4,7,param_5);
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_238,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_29c = 0;
  local_2a8 = 0;
  local_27c = 0;
  local_288 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_268 = 7;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_a0[0];
  if ((int)local_a0[0] < 7) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_98[6];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_268 = 7;
    uStack_28c = 0xd;
    local_298 = 0;
    if ((int)local_a0[0] < 7) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_98[6];
      if (&local_298 == puVar4) goto LAB_14025e4dd;
    }
    local_248 = 0;
    uStack_240 = uStack_290;
    uStack_23c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_248);
  }
LAB_14025e4dd:
  local_268 = 9;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 5;
  uStack_28c = 0xf;
  local_298 = 0x10000000000010d;
  local_248 = 0x10000000000010d;
  uStack_240 = uStack_290;
  uStack_23c = 0xf;
  if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_248);
  local_128 = &local_238;
  ppuVar17 = &local_128;
  uVar13 = CONCAT44(uVar15,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_2a8,1,uVar13,ppuVar17);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_268 = 9;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    uVar15 = (undefined4)(uVar13 >> 0x20);
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    local_298 = CONCAT44(uRam0000000141dc6374,_DAT_141dc6370);
    uStack_290 = uRam0000000141dc6378;
    uStack_28c = uRam0000000141dc637c;
    if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_298);
    local_120 = &local_228;
    local_298 = CONCAT44(uRam0000000141dc6374,_DAT_141dc6370);
    uStack_290 = uRam0000000141dc6378;
    uStack_28c = uRam0000000141dc637c;
    if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_298);
    local_118 = &local_218;
    local_298 = CONCAT44(uRam00000001419e38d4,_DAT_1419e38d0);
    uStack_290 = uRam00000001419e38d8;
    uStack_28c = uRam00000001419e38dc;
    if ((1 << ((byte)local_208[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_298);
    local_110 = local_208;
    uStack_28c = 0xf;
    local_298 = 0x10000000000010d;
    local_248 = 0x10000000000010d;
    uStack_240 = uStack_290;
    uStack_23c = 0xf;
    if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_248);
    local_108[0] = local_1f8;
    ppuVar17 = &local_120;
    uVar13 = CONCAT44(uVar15,DAT_141a02e88);
    FUN_140e634e0(local_res8,local_res10,&local_288,4,uVar13,ppuVar17);
  }
  local_268 = 0xb;
  uStack_24c = 0xf;
  local_258 = 0x10000000000010d;
  iVar2 = FUN_140e63cb0(local_90,&local_res8,&local_res10,&local_258);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if (0 < iVar2) {
    do {
      local_268 = 0xe;
      if ((int)local_a0[0] < 1) {
        puVar4 = &DAT_1419df7b0;
LAB_14025e78d:
        local_2b8 = *(undefined4 *)puVar4;
        uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2b0 = *(undefined4 *)(puVar4 + 1);
        uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_2b8);
      }
      else {
        puVar4 = (undefined8 *)*local_98;
        if (puVar4 != &local_198) goto LAB_14025e78d;
      }
      FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_198);
      local_268 = 0xf;
      if ((int)local_a0[0] < 2) {
        puVar4 = &DAT_1419df7b0;
LAB_14025e7f8:
        local_2b8 = *(undefined4 *)puVar4;
        uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2b0 = *(undefined4 *)(puVar4 + 1);
        uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_2b8);
      }
      else {
        puVar4 = (undefined8 *)local_98[1];
        if (puVar4 != &local_1a8) goto LAB_14025e7f8;
      }
      FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_1a8);
      local_268 = 0x11;
      if ((int)local_a0[0] < 4) {
        pdVar5 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar5 = (double *)local_98[3];
      }
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar9 = *pdVar5;
      }
      else {
        dVar9 = (double)FUN_140e4b060();
      }
      if ((int)local_a0[0] < 3) {
        pdVar5 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar5 = (double *)local_98[2];
      }
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar10 = *pdVar5;
      }
      else {
        dVar10 = (double)FUN_140e4b060();
      }
      if ((int)local_a0[0] < 2) {
        pdVar5 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar5 = (double *)local_98[1];
      }
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar11 = *pdVar5;
      }
      else {
        dVar11 = (double)FUN_140e4b060();
      }
      if ((int)local_a0[0] < 1) {
        pdVar5 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar5 = (double *)*local_98;
      }
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar12 = *pdVar5;
      }
      else {
        dVar12 = (double)FUN_140e4b060();
      }
      fVar8 = (float)FUN_140e793d0((float)dVar12,(float)dVar11,(float)dVar10,(float)dVar9);
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1ac = 0;
      local_1b8 = (double)fVar8;
      FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_1b8);
      local_268 = 0x12;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
      if ((int)local_a0[0] < 1) {
        puVar4 = &DAT_1419df7b0;
LAB_14025e9be:
        local_2b8 = *(undefined4 *)puVar4;
        uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2b0 = *(undefined4 *)(puVar4 + 1);
        uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        FUN_140041b80(&local_238,&local_2b8);
      }
      else {
        puVar4 = (undefined8 *)*local_98;
        if (puVar4 != &local_238) goto LAB_14025e9be;
      }
      local_128 = &local_238;
      if ((int)local_a0[0] < 2) {
        puVar4 = &DAT_1419df7b0;
LAB_14025ea11:
        local_2b8 = *(undefined4 *)puVar4;
        uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2b0 = *(undefined4 *)(puVar4 + 1);
        uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_2b8);
      }
      else {
        puVar4 = (undefined8 *)local_98[1];
        if (puVar4 != &local_228) goto LAB_14025ea11;
      }
      local_120 = &local_228;
      if ((int)local_a0[0] < 3) {
        puVar4 = &DAT_1419df7b0;
LAB_14025ea64:
        local_2b8 = *(undefined4 *)puVar4;
        uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2b0 = *(undefined4 *)(puVar4 + 1);
        uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140041b80(&local_218,&local_2b8);
      }
      else {
        puVar4 = (undefined8 *)local_98[2];
        if (puVar4 != &local_218) goto LAB_14025ea64;
      }
      local_118 = &local_218;
      if ((int)local_a0[0] < 4) {
        puVar4 = &DAT_1419df7b0;
LAB_14025eab7:
        local_2b8 = *(undefined4 *)puVar4;
        uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2b0 = *(undefined4 *)(puVar4 + 1);
        uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_208[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_208);
        }
        FUN_140041b80(local_208,&local_2b8);
      }
      else {
        puVar4 = (undefined8 *)local_98[3];
        if (puVar4 != local_208) goto LAB_14025eab7;
      }
      local_110 = local_208;
      local_c4 = 6;
      local_d0 = local_res8;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_140e87440(&local_d0,DAT_141a0a728,0x80000000,&local_138,uVar13,
                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
      uVar15 = (undefined4)(uVar13 >> 0x20);
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      local_2b8 = (undefined4)local_138;
      uStack_2b4 = local_138._4_4_;
      uStack_2b0 = uStack_130;
      uStack_2ac = uStack_12c;
      if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_2b8);
      local_108[0] = local_1f8;
      uVar14 = CONCAT44(uVar15,DAT_141a047c8);
      uVar3 = FUN_140e634e0(local_res8,local_res10,&local_288,1,uVar14,local_108);
      ppuVar17 = &local_128;
      uVar13 = CONCAT44((int)((ulonglong)uVar14 >> 0x20),DAT_1419fd548);
      puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_2a8,4,uVar13,ppuVar17);
      uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_180 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
        local_188 = *puVar4;
      }
      else {
        FUN_1400419b0(&local_188,puVar4);
      }
      FUN_140046500(&local_188,uVar3);
      local_2b8 = (undefined4)local_188;
      uStack_2b4 = local_188._4_4_;
      uStack_2b0 = uStack_180;
      uStack_2ac = uStack_17c;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_2b8);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_148);
      local_268 = 0x13;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      local_b4 = 6;
      local_c0 = local_res8;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_140e87440(&local_c0,DAT_141a0a728,0x80000000,&local_138,uVar13,
                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
      uVar15 = (undefined4)(uVar13 >> 0x20);
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      local_2b8 = (undefined4)local_138;
      uStack_2b4 = local_138._4_4_;
      uStack_2b0 = uStack_130;
      uStack_2ac = uStack_12c;
      if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_2b8);
      local_128 = &local_238;
      if ((int)local_a0[0] < 6) {
        puVar4 = &DAT_1419df7b0;
      }
      else {
        puVar4 = (undefined8 *)local_98[5];
      }
      ppuVar17 = &local_128;
      uVar13 = CONCAT44(uVar15,DAT_141a04808);
      uVar3 = FUN_140e634e0(local_res8,local_res10,&local_2a8,1,uVar13,ppuVar17);
      uStack_24c = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_250 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
        local_258 = *puVar4;
      }
      else {
        FUN_1400419b0(&local_258,puVar4);
      }
      FUN_140046500(&local_258,uVar3);
      local_2b8 = (undefined4)local_258;
      uStack_2b4 = local_258._4_4_;
      uStack_2b0 = uStack_250;
      uStack_2ac = uStack_24c;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_2b8);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_158);
      local_268 = 0x17;
      if ((int)local_a0[0] < 7) {
        puVar4 = &DAT_1419df7b0;
      }
      else {
        puVar4 = (undefined8 *)local_98[6];
      }
      cVar1 = FUN_140e491e0(puVar4);
      if (cVar1 == '\0') {
        local_268 = 0x1f;
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        local_2a8 = 0;
        local_2a0 = 0;
        local_29c = 5;
        uStack_28c = 6;
        local_298 = local_res8;
        uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_140e87440(&local_298,DAT_1419fe0e8,0x80000000,&local_168,uVar13,uVar16);
        if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        uStack_28c = 6;
        local_298 = local_res8;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_140e87440(&local_298,DAT_1419fe158,0x80000000,&local_178,uVar13,
                      uVar16 & 0xffffffffffffff00);
        uVar15 = (undefined4)(uVar13 >> 0x20);
        if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        local_2b8 = (undefined4)local_168;
        uStack_2b4 = local_168._4_4_;
        uStack_2b0 = uStack_160;
        uStack_2ac = uStack_15c;
        if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        FUN_140041b80(&local_238,&local_2b8);
        local_128 = &local_238;
        local_2b8 = (undefined4)local_178;
        uStack_2b4 = local_178._4_4_;
        uStack_2b0 = uStack_170;
        uStack_2ac = uStack_16c;
        if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_2b8);
        local_120 = &local_228;
        if (((int)local_a0[0] < 5) || (puVar6 = (undefined8 *)local_98[4], puVar6 != &local_218)) {
          local_2b8 = *(undefined4 *)puVar6;
          uStack_2b4 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_2b0 = *(undefined4 *)(puVar6 + 1);
          uStack_2ac = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          FUN_140041b80(&local_218,&local_2b8);
        }
        local_118 = &local_218;
        puVar6 = (undefined8 *)
                 FUN_140e634e0(local_res8,local_res10,&local_2a8,3,CONCAT44(uVar15,DAT_141a12628),
                               &local_128);
        if (puVar6 != param_3) {
          local_2b8 = *(undefined4 *)puVar6;
          uStack_2b4 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_2b0 = *(undefined4 *)(puVar6 + 1);
          uStack_2ac = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_2b8);
        }
        goto LAB_14025f202;
      }
      local_268 = 0x19;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      local_a4 = 6;
      local_b0 = local_res8;
      uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_140e87440(&local_b0,DAT_1419fe0e8,0x80000000,&local_168,uVar13,uVar16);
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      uStack_23c = 6;
      local_248 = local_res8;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_178,uVar13,
                    uVar16 & 0xffffffffffffff00);
      uVar15 = (undefined4)(uVar13 >> 0x20);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_2b8 = (undefined4)local_168;
      uStack_2b4 = local_168._4_4_;
      uStack_2b0 = uStack_160;
      uStack_2ac = uStack_15c;
      if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_2b8);
      local_128 = &local_238;
      local_2b8 = (undefined4)local_178;
      uStack_2b4 = local_178._4_4_;
      uStack_2b0 = uStack_170;
      uStack_2ac = uStack_16c;
      if ((1 << ((byte)_local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_2b8);
      local_120 = &local_228;
      if ((int)local_a0[0] < 5) {
        puVar4 = &DAT_1419df7b0;
LAB_14025f052:
        local_2b8 = *(undefined4 *)puVar4;
        uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2b0 = *(undefined4 *)(puVar4 + 1);
        uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140041b80(&local_218,&local_2b8);
      }
      else {
        puVar4 = (undefined8 *)local_98[4];
        if (puVar4 != &local_218) goto LAB_14025f052;
      }
      local_118 = &local_218;
      ppuVar17 = &local_128;
      uVar13 = CONCAT44(uVar15,DAT_141a124c8);
      puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_2a8,3,uVar13,ppuVar17);
      if (puVar4 != &local_1c8) {
        local_2b8 = *(undefined4 *)puVar4;
        uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2b0 = *(undefined4 *)(puVar4 + 1);
        uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_2b8);
      }
      local_268 = 0x1a;
      cVar1 = FUN_140e491e0(&local_1c8);
      if (cVar1 != '\0') {
        uVar13 = local_res8;
        uVar16 = local_res10;
        FUN_140e87170(&local_1c8,DAT_141a0a828,0x80000000,&local_e0,local_res8,local_res10);
        uStack_28c = 6;
        local_298 = local_res10;
        ppuVar17 = (undefined8 **)(uVar16 & 0xffffffffffffff00);
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_140e87440(&local_298,DAT_141a0a828,0x80000000,&local_f0,uVar13,ppuVar17);
        if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        iVar2 = FUN_140e851f0(&local_e0,&local_f0,DAT_141955260,0);
        if (iVar2 != 0) {
          local_268 = 0x1b;
          *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
          *param_3 = 0x3ff0000000000000;
          goto LAB_14025f202;
        }
      }
      cVar1 = FUN_140e643f0(local_90,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_90,&local_res8,&local_res10);
LAB_14025f202:
  if (local_80 != 0) {
    FUN_140e4cd60();
    local_80 = 0;
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(&local_238,0x10,7,FUN_140041b30);
  if (0 < (int)local_a0[0]) {
    puVar6 = local_98;
    do {
      puVar4 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_98);
  DAT_141dc7a50 = (undefined8 *)local_278;
  return param_3;
}

