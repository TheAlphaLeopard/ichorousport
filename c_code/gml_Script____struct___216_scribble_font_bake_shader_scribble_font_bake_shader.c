// gml_Script____struct___216_scribble_font_bake_shader_scribble_font_bake_shader @ 0x140463240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___216_scribble_font_bake_shader_scribble_font_bake_shader
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_00;
  double dVar11;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db_00;
  ulonglong local_2e8;
  undefined8 uStack_2e0;
  ulonglong local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  uint local_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  ulonglong local_2a8;
  uint local_2a0;
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
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  double local_238;
  undefined4 local_22c;
  undefined1 local_228 [12];
  byte local_21c;
  ulonglong local_218;
  byte local_20c;
  ulonglong local_208;
  byte local_1fc;
  ulonglong local_1f8;
  byte local_1ec;
  ulonglong local_1e8;
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  ulonglong local_1c8;
  byte local_1bc;
  ulonglong local_1b8;
  byte local_1ac;
  ulonglong local_1a8;
  byte local_19c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  ulonglong local_138;
  byte local_12c;
  ulonglong local_128;
  byte local_11c;
  ulonglong local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  double *local_f8;
  undefined1 *local_f0;
  ulonglong *local_e8;
  ulonglong *local_e0;
  ulonglong *local_d8;
  ulonglong *local_d0;
  undefined1 *local_c8;
  ulonglong *local_c0;
  ulonglong *local_b8;
  ulonglong *local_b0;
  double *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  ulonglong *local_78;
  ulonglong *local_70;
  ulonglong *local_68;
  undefined1 *local_60;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_290 = "gml_Script_scribble_font_bake_outline_and_shadow";
  local_298 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_298;
  local_288 = 0x10;
  FUN_140041df0(local_58,param_4,8,param_5);
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_238,0x10,0x14,FUN_1400424d0,FUN_140041b30);
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0.0;
  local_2ac = 0;
  local_2b8 = 0;
  local_244 = 0;
  local_250 = 0;
  local_254 = 0;
  local_260 = 0;
  local_264 = 0;
  local_270 = 0;
  local_274 = 0;
  local_280 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_288 = 0x10;
  puVar9 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 8) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_50[7];
  }
  iVar4 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar4 == 0) && (local_288 = 0x10, 7 < (int)local_58[0])) &&
     (puVar7 = (undefined8 *)local_50[7], puVar7 != &DAT_1419df7b0)) {
    local_2e8 = DAT_1419df7b0;
    uStack_2e0 = _DAT_1419df7b8;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_2e8);
  }
  local_29c = 0;
  local_2a8 = 0;
  local_288 = 0x13;
  uStack_2e0._4_4_ = 0xf;
  local_2e8 = 0x100000800000005;
  local_2d8 = 0x100000800000005;
  uStack_2d0._0_4_ = (uint)uStack_2e0;
  uStack_2d0._4_4_ = 0xf;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  FUN_140041b80(&local_2c8,&local_2d8);
  local_288 = 0x15;
  if ((int)local_58[0] < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_50[4];
  }
  uStack_2e0._4_4_ = 10;
  local_2e8 = 1;
  iVar4 = FUN_140e851f0(puVar7,&local_2e8,DAT_141955260,0);
  if ((1 << ((byte)uStack_2e0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if (iVar4 == 0) {
    local_29c = 0;
    local_2a8 = 0x3ff0000000000000;
    local_288 = 0x18;
    uStack_2e0._4_4_ = 0xf;
    local_2e8 = 0x100000800000002;
    local_2d8 = 0x100000800000002;
    uStack_2d0._0_4_ = (uint)uStack_2e0;
    uStack_2d0._4_4_ = 0xf;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    FUN_140041b80(&local_2c8,&local_2d8);
  }
  else {
    local_288 = 0x1a;
    if ((int)local_58[0] < 5) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_50[4];
    }
    uStack_2e0._4_4_ = 10;
    local_2e8 = 2;
    iVar4 = FUN_140e851f0(puVar7,&local_2e8,DAT_141955260,0);
    if ((1 << ((byte)uStack_2e0._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    if (iVar4 == 0) {
      local_29c = 0;
      local_2a8 = 0x3ff0000000000000;
      local_288 = 0x1d;
      uStack_2e0._4_4_ = 0xf;
      local_2e8 = 0x100000800000004;
      local_2d8 = 0x100000800000004;
      uStack_2d0._0_4_ = (uint)uStack_2e0;
      uStack_2d0._4_4_ = 0xf;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      FUN_140041b80(&local_2c8,&local_2d8);
    }
    else {
      local_288 = 0x1f;
      if ((int)local_58[0] < 5) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)local_50[4];
      }
      uStack_2e0._4_4_ = 10;
      local_2e8 = 3;
      iVar4 = FUN_140e851f0(puVar7,&local_2e8,DAT_141955260,0);
      if ((1 << ((byte)uStack_2e0._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      if (iVar4 == 0) {
        local_29c = 0;
        local_2a8 = 0x4000000000000000;
        local_288 = 0x22;
        uStack_2e0._4_4_ = 0xf;
        local_2e8 = 0x100000800000003;
        local_2d8 = 0x100000800000003;
        uStack_2d0._0_4_ = (uint)uStack_2e0;
        uStack_2d0._4_4_ = 0xf;
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        FUN_140041b80(&local_2c8,&local_2d8);
      }
    }
  }
  local_288 = 0x26;
  if ((local_2bc & 0xffffff) == 0) {
    dVar11 = local_2c8;
  }
  else {
    dVar11 = (double)FUN_140e4b060(&local_2c8);
  }
  FUN_140ec9e10((longlong)dVar11);
  local_288 = 0x27;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  iVar4 = FUN_140ec9d80();
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_22c = 0;
  local_238 = (double)iVar4;
  local_f8 = &local_238;
  local_2d8 = _DAT_141dd2f98;
  uStack_2d0 = uRam0000000141dd2fa0;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_2d8);
  local_f0 = local_228;
  puVar5 = (ulonglong *)
           FUN_140e634e0(param_1,param_2,&local_2b8,2,CONCAT44(uVar10,DAT_141a04778),&local_f8);
  if (puVar5 != &local_218) {
    local_2d8 = *puVar5;
    uStack_2d0 = puVar5[1];
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_2d8);
  }
  local_e8 = &local_218;
  if ((int)local_58[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_1404637e7:
    local_2d8 = *puVar5;
    uStack_2d0 = puVar5[1];
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_2d8);
  }
  else {
    puVar5 = (ulonglong *)local_50[2];
    if (puVar5 != &local_208) goto LAB_1404637e7;
  }
  local_e0 = &local_208;
  if ((int)local_58[0] < 4) {
    puVar5 = &DAT_1419df7b0;
LAB_14046383a:
    local_2d8 = *puVar5;
    uStack_2d0 = puVar5[1];
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_2d8);
  }
  else {
    puVar5 = (ulonglong *)local_50[3];
    if (puVar5 != &local_1f8) goto LAB_14046383a;
  }
  local_d8 = &local_1f8;
  FUN_140ec9ea0(3,&local_e8);
  local_288 = 0x28;
  FUN_140ec9dc0();
  local_288 = 0x2b;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  local_250 = 0;
  local_248 = 0;
  local_244 = 5;
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
  local_2d8 = _DAT_141dc6600;
  uStack_2d0 = uRam0000000141dc6608;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_2d8);
  local_f8 = &local_238;
  if ((int)local_58[0] < 3) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_50[2];
  }
  if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
    uVar10 = *(undefined4 *)puVar7;
    uVar12 = *(undefined4 *)((longlong)puVar7 + 4);
  }
  else {
    FUN_140e4b060();
    uVar10 = extraout_XMM0_Da;
    uVar12 = extraout_XMM0_Db;
  }
  uVar2 = (uint)uStack_2e0;
  local_2e8 = CONCAT44(uVar12,uVar10) ^ 0x8000000000000000;
  uStack_2e0 = (ulonglong)(uint)uStack_2e0;
  local_2d8 = CONCAT44(uVar12,uVar10) ^ 0x8000000000000000;
  uStack_2d0 = (ulonglong)uVar2;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_2d8);
  local_f0 = local_228;
  local_2d8 = _DAT_141dc6600;
  uStack_2d0 = uRam0000000141dc6608;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_2d8);
  if ((int)local_58[0] < 4) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_50[3];
  }
  if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
    uVar10 = *(undefined4 *)puVar7;
    uVar12 = *(undefined4 *)((longlong)puVar7 + 4);
    local_e8 = &local_218;
  }
  else {
    local_e8 = &local_218;
    FUN_140e4b060();
    uVar10 = extraout_XMM0_Da_00;
    uVar12 = extraout_XMM0_Db_00;
  }
  uStack_2d0 = uStack_2e0;
  local_2e8 = CONCAT44(uVar12,uVar10) ^ 0x8000000000000000;
  uStack_2e0 = uStack_2e0 & 0xffffffff;
  local_2d8 = CONCAT44(uVar12,uVar10) ^ 0x8000000000000000;
  uStack_2d0 = uStack_2d0 & 0xffffffff;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_2d8);
  local_e0 = &local_208;
  local_2d8 = _DAT_141dc6600;
  uStack_2d0 = uRam0000000141dc6608;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_2d8);
  local_d8 = &local_1f8;
  if ((int)local_58[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_140463b27:
    local_2d8 = *puVar5;
    uStack_2d0 = puVar5[1];
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_2d8);
  }
  else {
    puVar5 = (ulonglong *)local_50[2];
    if (puVar5 != &local_1e8) goto LAB_140463b27;
  }
  local_d0 = &local_1e8;
  local_2d8 = _DAT_141dc6600;
  uStack_2d0 = uRam0000000141dc6608;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_2d8);
  local_c8 = local_1d8;
  if ((int)local_58[0] < 4) {
    puVar5 = &DAT_1419df7b0;
LAB_140463bb9:
    local_2d8 = *puVar5;
    uStack_2d0 = puVar5[1];
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_2d8);
  }
  else {
    puVar5 = (ulonglong *)local_50[3];
    if (puVar5 != &local_1c8) goto LAB_140463bb9;
  }
  local_c0 = &local_1c8;
  if ((int)local_58[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140463c0a:
    local_2d8 = *puVar5;
    uStack_2d0 = puVar5[1];
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_2d8);
  }
  else {
    puVar5 = (ulonglong *)*local_50;
    if (puVar5 != &local_1b8) goto LAB_140463c0a;
  }
  local_b8 = &local_1b8;
  if ((int)local_58[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_140463c5d:
    local_2d8 = *puVar5;
    uStack_2d0 = puVar5[1];
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_2d8);
  }
  else {
    puVar5 = (ulonglong *)local_50[1];
    if (puVar5 != &local_1a8) goto LAB_140463c5d;
  }
  local_b0 = &local_1a8;
  local_a8 = &local_2c8;
  local_2d8 = _DAT_1419e5d80;
  uStack_2d0 = uRam00000001419e5d88;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_2d8);
  local_a0 = local_188;
  uVar6 = FUN_140e79090(&local_250,2,&local_f8);
  uVar3 = local_2a8;
  uStack_2e0 = (ulonglong)local_2a0;
  local_2e8 = local_2a8;
  FUN_1400460e0(&local_2e8,uVar6);
  local_2d8 = local_2e8;
  uStack_2d0 = uStack_2e0;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_2d8);
  if ((1 << ((byte)(uStack_2e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_98 = local_178;
  uVar6 = FUN_140e79090(&local_260,2,&local_e8);
  uStack_2e0 = (ulonglong)local_2a0;
  local_2e8 = uVar3;
  FUN_1400460e0(&local_2e8,uVar6);
  local_2d8 = local_2e8;
  uStack_2d0 = uStack_2e0;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_2d8);
  if ((1 << ((byte)(uStack_2e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_90 = local_168;
  uVar6 = FUN_140e79090(&local_270,2,&local_d8);
  uStack_2e0 = (ulonglong)local_2a0;
  local_2e8 = uVar3;
  FUN_1400460e0(&local_2e8,uVar6);
  local_2d8 = local_2e8;
  uStack_2d0 = uStack_2e0;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_2d8);
  if ((1 << ((byte)(uStack_2e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_88 = local_158;
  uVar6 = FUN_140e79090(&local_280,2,&local_c8);
  uStack_2e0 = (ulonglong)local_2a0;
  local_2e8 = uVar3;
  FUN_1400460e0(&local_2e8,uVar6);
  local_2d8 = local_2e8;
  uStack_2d0 = uStack_2e0;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_2d8);
  if ((1 << ((byte)(uStack_2e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_80 = local_148;
  if ((int)local_58[0] < 6) {
    puVar5 = &DAT_1419df7b0;
LAB_140463fa7:
    local_2d8 = *puVar5;
    uStack_2d0 = puVar5[1];
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_2d8);
  }
  else {
    puVar5 = (ulonglong *)local_50[5];
    if (puVar5 != &local_138) goto LAB_140463fa7;
  }
  local_78 = &local_138;
  if ((int)local_58[0] < 7) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (ulonglong *)local_50[6];
    if (puVar5 == &local_128) goto LAB_140464042;
  }
  local_2d8 = *puVar5;
  uStack_2d0 = puVar5[1];
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_2d8);
LAB_140464042:
  local_70 = &local_128;
  if (((int)local_58[0] < 8) || (puVar9 = (ulonglong *)local_50[7], puVar9 != &local_118)) {
    local_2d8 = *puVar9;
    uStack_2d0 = puVar9[1];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_2d8);
  }
  local_68 = &local_118;
  local_2d8 = _DAT_1419df7c0;
  uStack_2d0 = uRam00000001419df7c8;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_2d8);
  local_60 = local_108;
  gml_Script_scribble_font_bake_shadow(param_1,param_2,&local_2b8,0xc,&local_b8);
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_280);
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
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  _eh_vector_destructor_iterator_(&local_238,0x10,0x14,FUN_140041b30);
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
  DAT_141dc7a50 = (undefined8 *)local_298;
  return param_3;
}

