// gml_Script_collision_real @ 0x14025f680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_collision_real
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  double *pdVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 uVar13;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  char *local_280;
  undefined4 local_278;
  double local_270;
  undefined4 local_264;
  undefined8 local_260;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 local_244;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8 [2];
  undefined8 local_1b8 [2];
  undefined8 local_1a8 [2];
  undefined8 local_198 [2];
  undefined1 local_188 [48];
  undefined8 local_158;
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8 [3];
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_res18 = 0;
  local_280 = "gml_Script_collision_line_width_list";
  local_288 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_288;
  local_278 = 0x2a;
  uVar13 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1c8,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  local_244 = 0xffffff;
  local_250 = 0;
  local_254 = 0xffffff;
  local_260 = 0;
  local_264 = 0xffffff;
  local_270 = 0.0;
  uStack_1ec = 0xffffff;
  local_1f8 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  uStack_1dc = 0xffffff;
  local_1e8 = 0;
  local_2bc = 0;
  local_2c8 = 0;
  local_29c = 0;
  local_2a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_278 = 0x2c;
  uStack_2ac = 0xf;
  local_2b8 = 0x10000000000010d;
  local_238 = 0x10000000000010d;
  uStack_230 = uStack_2b0;
  uStack_22c = 0xf;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_238);
  local_b0 = &local_158;
  ppuVar14 = &local_b0;
  uVar11 = CONCAT44(uVar13,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_2c8,1,uVar11,ppuVar14);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_278 = 0x2c;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    uVar13 = (undefined4)(uVar11 >> 0x20);
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    local_2b8 = CONCAT44(uRam0000000141dc6374,_DAT_141dc6370);
    uStack_2b0 = uRam0000000141dc6378;
    uStack_2ac = uRam0000000141dc637c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_2b8);
    local_a8 = &local_148;
    local_2b8 = CONCAT44(uRam0000000141dc6374,_DAT_141dc6370);
    uStack_2b0 = uRam0000000141dc6378;
    uStack_2ac = uRam0000000141dc637c;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_2b8);
    local_a0 = local_138;
    local_2b8 = CONCAT44(uRam00000001419e38d4,_DAT_1419e38d0);
    uStack_2b0 = uRam00000001419e38d8;
    uStack_2ac = uRam00000001419e38dc;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_2b8);
    local_98 = local_128;
    uStack_2ac = 0xf;
    local_2b8 = 0x10000000000010d;
    local_238 = 0x10000000000010d;
    uStack_230 = uStack_2b0;
    uStack_22c = 0xf;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_238);
    local_90 = local_118;
    ppuVar14 = &local_a8;
    uVar11 = CONCAT44(uVar13,DAT_141a02e88);
    FUN_140e634e0(local_res8,local_res10,&local_2a8,4,uVar11,ppuVar14);
  }
  local_278 = 0x2e;
  uStack_28c = 0xf;
  local_298 = 0x10000000000010d;
  iVar2 = FUN_140e63cb0(local_88,&local_res8,&local_res10,&local_298);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if (0 < iVar2) {
    do {
      local_278 = 0x30;
      if (param_4 < 1) {
        puVar4 = &DAT_1419df7b0;
LAB_14025fa4d:
        local_2d8 = *(undefined4 *)puVar4;
        uStack_2d4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2d0 = *(undefined4 *)(puVar4 + 1);
        uStack_2cc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_250);
        }
        FUN_140041b80(&local_250,&local_2d8);
      }
      else {
        puVar4 = (undefined8 *)*param_5;
        if (puVar4 != &local_250) goto LAB_14025fa4d;
      }
      FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_250);
      local_278 = 0x31;
      if (param_4 < 2) {
        puVar4 = &DAT_1419df7b0;
LAB_14025fab5:
        local_2d8 = *(undefined4 *)puVar4;
        uStack_2d4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2d0 = *(undefined4 *)(puVar4 + 1);
        uStack_2cc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_260);
        }
        FUN_140041b80(&local_260,&local_2d8);
      }
      else {
        puVar4 = (undefined8 *)param_5[1];
        if (puVar4 != &local_260) goto LAB_14025fab5;
      }
      FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_260);
      local_278 = 0x33;
      if (param_4 < 4) {
        pdVar5 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar5 = (double *)param_5[3];
      }
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar7 = *pdVar5;
      }
      else {
        dVar7 = (double)FUN_140e4b060();
      }
      if (param_4 < 3) {
        pdVar5 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar5 = (double *)param_5[2];
      }
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar8 = *pdVar5;
      }
      else {
        dVar8 = (double)FUN_140e4b060();
      }
      if (param_4 < 2) {
        pdVar5 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar5 = (double *)param_5[1];
      }
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar9 = *pdVar5;
      }
      else {
        dVar9 = (double)FUN_140e4b060();
      }
      if (param_4 < 1) {
        pdVar5 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar5 = (double *)*param_5;
      }
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar10 = *pdVar5;
      }
      else {
        dVar10 = (double)FUN_140e4b060();
      }
      fVar6 = (float)FUN_140e793d0((float)dVar10,(float)dVar9,(float)dVar8,(float)dVar7);
      if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_270);
      }
      local_264 = 0;
      local_270 = (double)fVar6;
      FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_270);
      local_278 = 0x34;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_2c8 = 0;
      local_2c0 = 0;
      local_2bc = 5;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      if (param_4 < 1) {
        puVar4 = &DAT_1419df7b0;
LAB_14025fc6f:
        local_2d8 = *(undefined4 *)puVar4;
        uStack_2d4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2d0 = *(undefined4 *)(puVar4 + 1);
        uStack_2cc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_2d8);
      }
      else {
        puVar4 = (undefined8 *)*param_5;
        if (puVar4 != local_1c8) goto LAB_14025fc6f;
      }
      local_e8 = local_1c8;
      if (param_4 < 2) {
        puVar4 = &DAT_1419df7b0;
LAB_14025fcbf:
        local_2d8 = *(undefined4 *)puVar4;
        uStack_2d4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2d0 = *(undefined4 *)(puVar4 + 1);
        uStack_2cc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1b8);
        }
        FUN_140041b80(local_1b8,&local_2d8);
      }
      else {
        puVar4 = (undefined8 *)param_5[1];
        if (puVar4 != local_1b8) goto LAB_14025fcbf;
      }
      local_e0 = local_1b8;
      if (param_4 < 3) {
        puVar4 = &DAT_1419df7b0;
LAB_14025fd0f:
        local_2d8 = *(undefined4 *)puVar4;
        uStack_2d4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2d0 = *(undefined4 *)(puVar4 + 1);
        uStack_2cc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_2d8);
      }
      else {
        puVar4 = (undefined8 *)param_5[2];
        if (puVar4 != local_1a8) goto LAB_14025fd0f;
      }
      local_d8 = local_1a8;
      if (param_4 < 4) {
        puVar4 = &DAT_1419df7b0;
LAB_14025fd5f:
        local_2d8 = *(undefined4 *)puVar4;
        uStack_2d4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2d0 = *(undefined4 *)(puVar4 + 1);
        uStack_2cc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_2d8);
      }
      else {
        puVar4 = (undefined8 *)param_5[3];
        if (puVar4 != local_198) goto LAB_14025fd5f;
      }
      local_d0 = local_198;
      local_fc = 6;
      local_108 = local_res8;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_108,DAT_141a0a728,0x80000000,&local_1f8,uVar11,
                    (ulonglong)ppuVar14 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar11 >> 0x20);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_2d8 = (undefined4)local_1f8;
      uStack_2d4 = local_1f8._4_4_;
      uStack_2d0 = uStack_1f0;
      uStack_2cc = uStack_1ec;
      if ((1 << (local_188[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_2d8);
      local_c8[0] = local_188;
      uVar12 = CONCAT44(uVar13,DAT_141a047c8);
      uVar3 = FUN_140e634e0(local_res8,local_res10,&local_2a8,1,uVar12,local_c8);
      ppuVar14 = &local_e8;
      uVar11 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),DAT_1419fd548);
      puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_2c8,4,uVar11,ppuVar14);
      uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_220 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
        local_228 = *puVar4;
      }
      else {
        FUN_1400419b0(&local_228,puVar4);
      }
      local_res18 = 1;
      FUN_140046500(&local_228,uVar3);
      local_2d8 = (undefined4)local_228;
      uStack_2d4 = local_228._4_4_;
      uStack_2d0 = uStack_220;
      uStack_2cc = uStack_21c;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_2d8);
      local_res18 = 0;
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_208);
      local_278 = 0x35;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_2c8 = 0;
      local_2c0 = 0;
      local_2bc = 5;
      local_ec = 6;
      local_f8 = local_res8;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_f8,DAT_141a0a728,0x80000000,&local_1f8,uVar11,
                    (ulonglong)ppuVar14 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar11 >> 0x20);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_2d8 = (undefined4)local_1f8;
      uStack_2d4 = local_1f8._4_4_;
      uStack_2d0 = uStack_1f0;
      uStack_2cc = uStack_1ec;
      if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_2d8);
      local_e8 = local_1c8;
      if (param_4 < 6) {
        puVar4 = &DAT_1419df7b0;
      }
      else {
        puVar4 = (undefined8 *)param_5[5];
      }
      ppuVar14 = &local_e8;
      uVar11 = CONCAT44(uVar13,DAT_141a04808);
      uVar3 = FUN_140e634e0(local_res8,local_res10,&local_2c8,1,uVar11,ppuVar14);
      uStack_28c = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_290 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) == 0) {
        local_298 = *puVar4;
      }
      else {
        FUN_1400419b0(&local_298,puVar4);
      }
      local_res18 = 2;
      FUN_140046500(&local_298,uVar3);
      local_2d8 = (undefined4)local_298;
      uStack_2d4 = local_298._4_4_;
      uStack_2d0 = uStack_290;
      uStack_2cc = uStack_28c;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_2d8);
      local_res18 = 0;
      if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_218);
      local_278 = 0x37;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_2c8 = 0;
      local_2c0 = 0;
      local_2bc = 5;
      uStack_22c = 6;
      local_238 = local_res8;
      uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_1d8,uVar11,uVar15);
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      uStack_2ac = 6;
      local_2b8 = local_res8;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_1e8,uVar11,
                    uVar15 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar11 >> 0x20);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      local_2d8 = (undefined4)local_1d8;
      uStack_2d4 = local_1d8._4_4_;
      uStack_2d0 = uStack_1d0;
      uStack_2cc = uStack_1cc;
      if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_2d8);
      local_e8 = local_1c8;
      local_2d8 = (undefined4)local_1e8;
      uStack_2d4 = local_1e8._4_4_;
      uStack_2d0 = uStack_1e0;
      uStack_2cc = uStack_1dc;
      if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_2d8);
      local_e0 = local_1b8;
      if (param_4 < 5) {
        puVar4 = &DAT_1419df7b0;
LAB_140260280:
        local_2d8 = *(undefined4 *)puVar4;
        uStack_2d4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2d0 = *(undefined4 *)(puVar4 + 1);
        uStack_2cc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_2d8);
      }
      else {
        puVar4 = (undefined8 *)param_5[4];
        if (puVar4 != local_1a8) goto LAB_140260280;
      }
      local_d8 = local_1a8;
      if (param_4 < 7) {
        puVar4 = &DAT_1419df7b0;
LAB_1402602d4:
        local_2d8 = *(undefined4 *)puVar4;
        uStack_2d4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_2d0 = *(undefined4 *)(puVar4 + 1);
        uStack_2cc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_2d8);
      }
      else {
        puVar4 = (undefined8 *)param_5[6];
        if (puVar4 != local_198) goto LAB_1402602d4;
      }
      local_d0 = local_198;
      local_2d8 = _DAT_1419df7a0;
      uStack_2d4 = uRam00000001419df7a4;
      uStack_2d0 = uRam00000001419df7a8;
      uStack_2cc = uRam00000001419df7ac;
      if ((1 << (local_188[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_2d8);
      local_c8[0] = local_188;
      ppuVar14 = &local_e8;
      uVar11 = CONCAT44(uVar13,DAT_141a56b80);
      FUN_140e634e0(local_res8,local_res10,&local_2c8,5,uVar11,ppuVar14);
      cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_88,&local_res8,&local_res10);
  if (local_78 != 0) {
    FUN_140e4cd60();
    local_78 = 0;
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  _eh_vector_destructor_iterator_(local_1c8,0x10,0xc,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_288;
  return param_3;
}

