// gml_Script_scribble_font_delete @ 0x140469250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble_font_delete
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  double *pdVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  double *pdVar11;
  double dVar12;
  undefined4 uVar14;
  undefined8 uVar13;
  double local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  char *local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 local_264;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_254;
  double local_250;
  undefined4 local_244;
  double local_240;
  undefined4 local_234;
  double local_228;
  undefined4 local_21c;
  double local_218;
  byte local_20c;
  double local_208;
  byte local_1fc;
  double local_1f8;
  undefined4 local_1ec;
  double local_1e8;
  undefined4 local_1dc;
  double local_1d8;
  undefined4 local_1cc;
  double local_1c8;
  byte local_1bc;
  double local_1b8;
  byte local_1ac;
  double local_1a8;
  byte local_19c;
  double local_198;
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  double local_168;
  byte local_15c;
  double local_158;
  byte local_14c;
  double local_148;
  byte local_13c;
  double local_138;
  byte local_12c;
  double local_128;
  byte local_11c;
  double local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  double *local_e8;
  ulonglong *local_e0;
  double *local_d8;
  double *local_d0;
  double *local_c8;
  double *local_c0;
  double *local_b8;
  ulonglong *local_b0;
  ulonglong *local_a8;
  ulonglong *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  ulonglong *local_80;
  ulonglong *local_78;
  ulonglong *local_70;
  ulonglong *local_68;
  ulonglong *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_290 = "gml_Script_scribble_font_bake_shadow";
  local_298 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_298;
  local_288 = 0xd;
  FUN_140041df0(local_48,param_4,8,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_228,0x10,0x14,FUN_1400424d0,FUN_140041b30);
  local_234 = 0xffffff;
  local_240 = 0.0;
  local_244 = 0xffffff;
  local_250 = 0.0;
  local_2ac = 0;
  local_2b8 = 0;
  local_29c = 0;
  local_2a8 = 0;
  local_254 = 0;
  local_260 = 0;
  local_264 = 0;
  local_270 = 0;
  local_274 = 0;
  local_280 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_288 = 0xf;
  pdVar11 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 5) {
    pdVar7 = &DAT_1419df7b0;
LAB_14046937d:
    local_2d8 = *pdVar7;
    uStack_2d0 = pdVar7[1];
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_2d8);
  }
  else {
    pdVar7 = (double *)local_40[4];
    if (pdVar7 != &local_1a8) goto LAB_14046937d;
  }
  local_a8 = (ulonglong *)&local_1a8;
  uVar13 = CONCAT44(uVar14,DAT_1419fdbf8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_2b8,1,uVar13,&local_a8);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  cVar3 = FUN_140e491e0(uVar6);
  local_d8 = &local_208;
  if (cVar3 != '\0') {
    local_288 = 0x11;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    uVar14 = 0;
    pdVar7 = (double *)gml_GlobalScript___scribble_constants(param_1,param_2,&local_2a8,0,0);
    if (pdVar7 != &local_240) {
      local_2d8 = *pdVar7;
      uStack_2d0 = pdVar7[1];
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      FUN_140041b80(&local_240,&local_2d8);
    }
    local_288 = 0x13;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    local_e8 = &local_240;
    if ((int)local_48[0] < 5) {
      pdVar7 = &DAT_1419df7b0;
LAB_1404694d0:
      local_2d8 = *pdVar7;
      uStack_2d0 = pdVar7[1];
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_2d8);
    }
    else {
      pdVar7 = (double *)local_40[4];
      if (pdVar7 != &local_218) goto LAB_1404694d0;
    }
    local_e0 = (ulonglong *)&local_218;
    uVar6 = CONCAT44(uVar14,DAT_141a01138);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_2b8,2,uVar6,&local_e8);
    uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (pdVar7 != &local_250) {
      local_2d8 = *pdVar7;
      uStack_2d0 = pdVar7[1];
      if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_250);
      }
      FUN_140041b80(&local_250,&local_2d8);
    }
    local_288 = 0x14;
    if ((int)local_48[0] < 5) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_40[4];
    }
    iVar4 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar4 == 0) {
      local_288 = 0x16;
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      local_2b8 = 0;
      local_2b0 = 0;
      local_2ac = 5;
      local_2d8 = _DAT_141dd3068;
      uStack_2d0 = (double)uRam0000000141dd3070;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_2d8);
      local_e8 = &local_228;
      if (((int)local_48[0] < 5) || (pdVar11 = (double *)local_40[4], pdVar11 != &local_218)) {
        local_2d8 = *pdVar11;
        uStack_2d0 = pdVar11[1];
        if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140041b80(&local_218,&local_2d8);
      }
      local_e0 = (ulonglong *)&local_218;
      local_2d8 = _DAT_141dd3088;
      uStack_2d0 = (double)uRam0000000141dd3090;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_2d8);
      FUN_1401ef7f0(param_1,param_2,&local_2b8,3,&local_e8);
      local_288 = 0x17;
      goto LAB_14046a3ae;
    }
    local_288 = 0x1a;
    uVar5 = FUN_140e4a8b0(&local_250);
    if ((int)local_48[0] < 5) {
      puVar9 = (ulonglong *)&DAT_1419df7b0;
    }
    else {
      puVar9 = (ulonglong *)local_40[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 10;
    *puVar9 = (ulonglong)(uVar5 & 0xffffff);
  }
  local_288 = 0x1e;
  uStack_2d0._4_4_ = 0xf;
  local_2d8 = 7.291177646402875e-304;
  dVar12 = (double)FUN_140e4b060(&local_2d8);
  FUN_140ec9e10((int)dVar12);
  if ((1 << ((byte)uStack_2d0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_288 = 0x1f;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  iVar4 = FUN_140ec9d80();
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_21c = 0;
  local_228 = (double)iVar4;
  local_e8 = &local_228;
  local_2d8 = _DAT_141dd3078;
  uStack_2d0 = dRam0000000141dd3080;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_2d8);
  local_e0 = (ulonglong *)&local_218;
  uVar6 = CONCAT44(uVar14,DAT_141a04778);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_2b8,2,uVar6,&local_e8);
  uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (pdVar7 != &local_208) {
    local_2d8 = *pdVar7;
    uStack_2d0 = pdVar7[1];
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_2d8);
  }
  if ((int)local_48[0] < 3) {
    pdVar7 = &DAT_1419df7b0;
LAB_1404698a3:
    local_2d8 = *pdVar7;
    uStack_2d0 = pdVar7[1];
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_2d8);
  }
  else {
    pdVar7 = (double *)local_40[2];
    if (pdVar7 != &local_1f8) goto LAB_1404698a3;
  }
  local_d0 = &local_1f8;
  if ((int)local_48[0] < 4) {
    pdVar7 = &DAT_1419df7b0;
LAB_1404698f6:
    local_2d8 = *pdVar7;
    uStack_2d0 = pdVar7[1];
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_2d8);
  }
  else {
    pdVar7 = (double *)local_40[3];
    if (pdVar7 != &local_1e8) goto LAB_1404698f6;
  }
  local_c8 = &local_1e8;
  FUN_140ec9ea0(3,&local_d8);
  local_288 = 0x20;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  iVar4 = FUN_140ec9d80();
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_21c = 0;
  local_228 = (double)iVar4;
  local_e8 = &local_228;
  local_2d8 = _DAT_141dd3098;
  uStack_2d0 = dRam0000000141dd30a0;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_2d8);
  local_e0 = (ulonglong *)&local_218;
  pdVar7 = (double *)
           FUN_140e634e0(param_1,param_2,&local_2b8,2,CONCAT44(uVar14,DAT_141a04778),&local_e8);
  if (pdVar7 != &local_208) {
    local_2d8 = *pdVar7;
    uStack_2d0 = pdVar7[1];
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_2d8);
  }
  if ((int)local_48[0] < 5) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_40[4];
  }
  local_d8 = &local_208;
  uVar6 = FUN_140e4a8b0(puVar8);
  iVar4 = FUN_140ec5c20(uVar6);
  local_1f8 = (double)iVar4 * 0.00392156862745098;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1ec = 0;
  local_d0 = &local_1f8;
  if ((int)local_48[0] < 5) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_40[4];
  }
  uVar6 = FUN_140e4a8b0(puVar8);
  iVar4 = FUN_140ec5c10(uVar6);
  local_1e8 = (double)iVar4 * 0.00392156862745098;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1dc = 0;
  local_c8 = &local_1e8;
  if ((int)local_48[0] < 5) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_40[4];
  }
  uVar6 = FUN_140e4a8b0(puVar8);
  iVar4 = FUN_140ec5c00(uVar6);
  local_1d8 = (double)iVar4 * 0.00392156862745098;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1cc = 0;
  local_c0 = &local_1d8;
  if ((int)local_48[0] < 6) {
    pdVar7 = &DAT_1419df7b0;
LAB_140469b85:
    local_2d8 = *pdVar7;
    uStack_2d0 = pdVar7[1];
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_2d8);
  }
  else {
    pdVar7 = (double *)local_40[5];
    if (pdVar7 != &local_1c8) goto LAB_140469b85;
  }
  local_b8 = &local_1c8;
  FUN_140ec9ea0(5,&local_d8);
  local_288 = 0x24;
  FUN_140ec9dc0();
  local_288 = 0x27;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 5;
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  local_260 = 0;
  local_258 = 0;
  local_254 = 5;
  if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  local_270 = 0;
  local_268 = 0;
  local_264 = 5;
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_280);
  }
  local_280 = 0;
  local_278 = 0;
  local_274 = 5;
  local_2d8 = _DAT_141dc6620;
  uStack_2d0 = (double)uRam0000000141dc6628;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_2d8);
  local_e8 = &local_228;
  if ((int)local_48[0] < 3) {
    pdVar7 = &DAT_1419df7b0;
  }
  else {
    pdVar7 = (double *)local_40[2];
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    local_2c8 = *pdVar7;
  }
  else {
    local_2c8 = (double)FUN_140e4b060();
  }
  uVar2 = (ulonglong)uStack_2d0;
  local_2d8 = -local_2c8;
  uStack_2d0 = (double)((ulonglong)uStack_2d0 & 0xffffffff);
  local_2c8 = -local_2c8;
  dStack_2c0 = (double)(uVar2 & 0xffffffff);
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_2c8);
  local_e0 = (ulonglong *)&local_218;
  local_2c8 = _DAT_141dc6620;
  dStack_2c0 = (double)uRam0000000141dc6628;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_2c8);
  if ((int)local_48[0] < 4) {
    pdVar7 = &DAT_1419df7b0;
  }
  else {
    pdVar7 = (double *)local_40[3];
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    local_2c8 = *pdVar7;
    local_d8 = &local_208;
  }
  else {
    local_d8 = &local_208;
    local_2c8 = (double)FUN_140e4b060();
  }
  uVar2 = (ulonglong)uStack_2d0;
  local_2d8 = -local_2c8;
  uStack_2d0 = (double)((ulonglong)uStack_2d0 & 0xffffffff);
  local_2c8 = -local_2c8;
  dStack_2c0 = (double)(uVar2 & 0xffffffff);
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_2c8);
  local_d0 = &local_1f8;
  local_2c8 = _DAT_141dc6620;
  dStack_2c0 = (double)uRam0000000141dc6628;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_2c8);
  local_c8 = &local_1e8;
  if ((int)local_48[0] < 3) {
    pdVar7 = &DAT_1419df7b0;
LAB_140469e77:
    local_2c8 = *pdVar7;
    dStack_2c0 = pdVar7[1];
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_2c8);
  }
  else {
    pdVar7 = (double *)local_40[2];
    if (pdVar7 != &local_1d8) goto LAB_140469e77;
  }
  local_c0 = &local_1d8;
  local_2c8 = _DAT_141dc6620;
  dStack_2c0 = (double)uRam0000000141dc6628;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_2c8);
  local_b8 = &local_1c8;
  if ((int)local_48[0] < 4) {
    pdVar7 = &DAT_1419df7b0;
LAB_140469f09:
    local_2c8 = *pdVar7;
    dStack_2c0 = pdVar7[1];
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_2c8);
  }
  else {
    pdVar7 = (double *)local_40[3];
    if (pdVar7 != &local_1b8) goto LAB_140469f09;
  }
  local_b0 = (ulonglong *)&local_1b8;
  if ((int)local_48[0] < 1) {
    pdVar7 = &DAT_1419df7b0;
LAB_140469f5a:
    local_2c8 = *pdVar7;
    dStack_2c0 = pdVar7[1];
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_2c8);
  }
  else {
    pdVar7 = (double *)*local_40;
    if (pdVar7 != &local_1a8) goto LAB_140469f5a;
  }
  local_a8 = (ulonglong *)&local_1a8;
  if ((int)local_48[0] < 2) {
    pdVar7 = &DAT_1419df7b0;
LAB_140469fad:
    local_2c8 = *pdVar7;
    dStack_2c0 = pdVar7[1];
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_2c8);
  }
  else {
    pdVar7 = (double *)local_40[1];
    if (pdVar7 != &local_198) goto LAB_140469fad;
  }
  local_a0 = (ulonglong *)&local_198;
  uStack_2d0 = (double)CONCAT44(0xf,(undefined4)uStack_2d0);
  local_2d8 = 7.291177646402875e-304;
  local_2c8 = 7.291177646402875e-304;
  dStack_2c0 = uStack_2d0;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_2c8);
  local_98 = local_188;
  local_2c8 = _DAT_1419e5e60;
  dStack_2c0 = dRam00000001419e5e68;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_2c8);
  local_90 = local_178;
  pdVar7 = (double *)FUN_140e79090(&local_2a8,2,&local_e8);
  if (pdVar7 != &local_168) {
    local_2c8 = *pdVar7;
    dStack_2c0 = pdVar7[1];
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_2c8);
  }
  local_88 = (ulonglong *)&local_168;
  pdVar7 = (double *)FUN_140e79090(&local_260,2,&local_d8);
  if (pdVar7 != &local_158) {
    local_2c8 = *pdVar7;
    dStack_2c0 = pdVar7[1];
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_2c8);
  }
  local_80 = (ulonglong *)&local_158;
  pdVar7 = (double *)FUN_140e79090(&local_270,2,&local_c8);
  if (pdVar7 != &local_148) {
    local_2c8 = *pdVar7;
    dStack_2c0 = pdVar7[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_2c8);
  }
  local_78 = (ulonglong *)&local_148;
  pdVar7 = (double *)FUN_140e79090(&local_280,2,&local_b8);
  if (pdVar7 != &local_138) {
    local_2c8 = *pdVar7;
    dStack_2c0 = pdVar7[1];
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_2c8);
  }
  local_70 = (ulonglong *)&local_138;
  if ((int)local_48[0] < 7) {
    pdVar7 = &DAT_1419df7b0;
LAB_14046a251:
    local_2c8 = *pdVar7;
    dStack_2c0 = pdVar7[1];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_2c8);
  }
  else {
    pdVar7 = (double *)local_40[6];
    if (pdVar7 != &local_128) goto LAB_14046a251;
  }
  local_68 = (ulonglong *)&local_128;
  if (((int)local_48[0] < 8) || (pdVar11 = (double *)local_40[7], pdVar11 != &local_118)) {
    local_2c8 = *pdVar11;
    dStack_2c0 = pdVar11[1];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_2c8);
  }
  local_60 = (ulonglong *)&local_118;
  local_2c8 = DAT_1419df7b0;
  dStack_2c0 = (double)_DAT_1419df7b8;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_2c8);
  local_58 = local_108;
  local_2c8 = DAT_1419df7b0;
  dStack_2c0 = (double)_DAT_1419df7b8;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_2c8);
  local_50 = local_f8;
  gml_Script_scribble_font_bake_shadow(param_1,param_2,&local_2b8,0xc,&local_a8);
LAB_14046a3ae:
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_280);
  }
  if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  _eh_vector_destructor_iterator_(&local_228,0x10,0x14,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar8 = local_40;
    do {
      puVar1 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_298;
  return param_3;
}

