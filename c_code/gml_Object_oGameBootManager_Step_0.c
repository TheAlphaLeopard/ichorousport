// gml_Object_oGameBootManager_Step_0 @ 0x140af1b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oGameBootManager_Step_0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  double dVar10;
  undefined4 uVar12;
  undefined1 **ppuVar11;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_24c;
  undefined8 local_248;
  char *local_240;
  undefined4 local_238;
  undefined1 local_228 [12];
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined4 local_208 [3];
  byte local_1fc;
  undefined4 local_1f8 [3];
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined8 local_1d8;
  byte local_1cc;
  undefined8 local_1c8;
  byte local_1bc;
  undefined8 local_1b8;
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined8 local_198;
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined4 local_158 [3];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined4 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined4 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_240 = "gml_Object_oFreeDrawing_Draw_64";
  local_238 = 0;
  local_248 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_248;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(local_228,0x10,0x15,FUN_1400424d0,FUN_140041b30);
  local_24c = 0xffffff;
  local_258 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_238 = 3;
  uStack_2cc = 0xf;
  local_2d8 = 0x10000000000013a;
  local_2b8 = 0x10000000000013a;
  uStack_2b0 = uStack_2d0;
  uStack_2ac = 0xf;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_2b8);
  local_d8 = local_228;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_298,1,CONCAT44(uVar12,DAT_141a02ef8),&local_d8);
  cVar4 = FUN_140e491e0(uVar5);
  if (cVar4 == '\0') {
    local_238 = 5;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    local_2d8 = CONCAT44(uRam0000000141dd936c,_DAT_141dd9368);
    uStack_2d0 = uRam0000000141dd9370;
    uStack_2cc = DAT_141dd9374;
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_2d8);
    local_d8 = local_228;
    pdVar6 = (double *)gml_Script_anon_6431_INIT(param_1,param_2,&local_298,1,&local_d8);
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar10 = *pdVar6;
    }
    else {
      dVar10 = (double)FUN_140e4b060(pdVar6);
    }
    thunk_FUN_141039cb0((int)dVar10);
    local_238 = 6;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
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
    local_2d8 = CONCAT44(uRam0000000141dd936c,_DAT_141dd9368);
    uStack_2d0 = uRam0000000141dd9370;
    uStack_2cc = DAT_141dd9374;
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_2d8);
    local_d8 = local_228;
    local_2d8 = CONCAT44(uRam00000001419eb7a4,_DAT_1419eb7a0);
    uStack_2d0 = uRam00000001419eb7a8;
    uStack_2cc = uRam00000001419eb7ac;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2d8);
    local_d0 = local_218;
    local_2d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2d0 = DAT_1419df7b8;
    uStack_2cc = DAT_1419df7bc;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_2d8);
    local_2d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2d0 = DAT_1419df7b8;
    uStack_2cc = DAT_1419df7bc;
    local_c8 = local_208;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_2d8);
    local_c0 = local_1f8;
    uStack_2ac = DAT_141dd9384;
    uStack_2b0 = DAT_141dd9380;
    if ((1 << ((byte)DAT_141dd9384 & 0x1f) & 0x46U) == 0) {
      local_2b8 = DAT_141dd9378;
    }
    else {
      FUN_1400419b0(&local_2b8,&DAT_141dd9378);
    }
    uVar12 = uStack_2ac;
    local_2d8 = local_2b8;
    uStack_2d0 = uStack_2b0;
    uStack_2cc = uStack_2ac;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_2d8);
    if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_b8 = local_1e8;
    puVar7 = (undefined8 *)gml_Script____struct___117(param_1,param_2,&local_2a8,1,&local_d8);
    if (puVar7 != &local_1d8) {
      local_2d8 = *puVar7;
      uStack_2d0 = *(undefined4 *)(puVar7 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_2d8);
    }
    local_b0 = &local_1d8;
    puVar7 = (undefined8 *)gml_Script_InputIconGetDirect(param_1,param_2,&local_288,3,&local_d0);
    if (puVar7 != &local_1c8) {
      local_2d8 = *puVar7;
      uStack_2d0 = *(undefined4 *)(puVar7 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_2d8);
    }
    local_a8 = &local_1c8;
    local_2d8 = CONCAT44(uRam00000001419eb7e4,_DAT_1419eb7e0);
    uStack_2d0 = uRam00000001419eb7e8;
    uStack_2cc = uRam00000001419eb7ec;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_2d8);
    local_a0 = &local_1b8;
    local_2d8 = CONCAT44(uRam00000001419eb7b4,_DAT_1419eb7b0);
    uStack_2d0 = uRam00000001419eb7b8;
    uStack_2cc = uRam00000001419eb7bc;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_2d8);
    local_98 = local_1a8;
    puVar7 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_278,3,&local_b8);
    if (puVar7 != &local_198) {
      local_2d8 = *puVar7;
      uStack_2d0 = *(undefined4 *)(puVar7 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_2d8);
    }
    local_90 = &local_198;
    local_2d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2d0 = DAT_1419df7b8;
    uStack_2cc = DAT_1419df7bc;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_2d8);
    local_88 = local_188;
    local_2d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2d0 = DAT_1419df7b8;
    uStack_2cc = DAT_1419df7bc;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_2d8);
    local_80 = local_178;
    local_2d8 = CONCAT44(uRam0000000141dc70f4,_DAT_141dc70f0);
    uStack_2d0 = uRam0000000141dc70f8;
    uStack_2cc = uRam0000000141dc70fc;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_2d8);
    local_78 = local_168;
    local_2d8 = CONCAT44(uRam0000000141dc70f4,_DAT_141dc70f0);
    uStack_2d0 = uRam0000000141dc70f8;
    uStack_2cc = uRam0000000141dc70fc;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_2d8);
    local_70 = local_158;
    local_2d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2d0 = DAT_1419df7b8;
    uStack_2cc = DAT_1419df7bc;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_2d8);
    local_68 = local_148;
    local_2d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2d0 = DAT_1419df7b8;
    uStack_2cc = DAT_1419df7bc;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_2d8);
    local_60 = local_138;
    local_2d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2d0 = DAT_1419df7b8;
    uStack_2cc = DAT_1419df7bc;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_2d8);
    local_58 = local_128;
    local_2d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2d0 = DAT_1419df7b8;
    uStack_2cc = DAT_1419df7bc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_2d8);
    local_50 = local_118;
    local_2d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2d0 = DAT_1419df7b8;
    uStack_2cc = DAT_1419df7bc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_2d8);
    local_48 = local_108;
    local_2d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2d0 = DAT_1419df7b8;
    uStack_2cc = DAT_1419df7bc;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_2d8);
    local_40 = local_f8;
    local_2d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2d0 = DAT_1419df7b8;
    uStack_2cc = DAT_1419df7bc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_2d8);
    local_38 = local_e8;
    gml_Script_draw_sprite_hires(param_1,param_2,&local_298,0xe,&local_a0);
    local_238 = 8;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3258);
    cVar4 = FUN_140e491e0(uVar5);
    if (cVar4 == '\0') {
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      local_2b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_2b0 = DAT_1419df7b8;
      uStack_2ac = DAT_1419df7bc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_208);
      }
      FUN_140041b80(local_208,&local_2b8);
      local_2b8 = CONCAT44(uRam00000001419eb7c4,_DAT_1419eb7c0);
      uStack_2b0 = uRam00000001419eb7c8;
      uStack_2ac = uRam00000001419eb7cc;
      local_c8 = local_208;
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_2b8);
      local_c0 = local_1f8;
      puVar7 = (undefined8 *)gml_Script_InputCursorY(param_1,param_2,&local_2a8,2,&local_c8);
      uStack_2ac = *(undefined4 *)((longlong)puVar7 + 0xc);
      uStack_2b0 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_2b8 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_2b8,puVar7);
      }
      puVar7 = &local_2b8;
      bVar1 = false;
      bVar9 = true;
    }
    else {
      puVar7 = (undefined8 *)gml_Script_MouseRoomX(param_1,param_2,&local_298,0,0);
      uStack_2cc = *(undefined4 *)((longlong)puVar7 + 0xc);
      uStack_2d0 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_2d8 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_2d8,puVar7);
      }
      puVar7 = &local_2d8;
      bVar1 = true;
      bVar9 = false;
    }
    local_2c8 = *(undefined4 *)puVar7;
    uStack_2c4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_2c0 = *(undefined4 *)(puVar7 + 1);
    uStack_2bc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_2c8);
    if (bVar9) {
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
    }
    if (bVar1) {
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
    }
    local_238 = 9;
    cVar4 = FUN_140e491e0(uVar5);
    if (cVar4 == '\0') {
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      local_2c8 = (undefined4)DAT_1419df7b0;
      uStack_2c4 = DAT_1419df7b0._4_4_;
      uStack_2c0 = DAT_1419df7b8;
      uStack_2bc = DAT_1419df7bc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_208);
      }
      FUN_140041b80(local_208,&local_2c8);
      local_2c8 = _DAT_1419eb7c0;
      uStack_2c4 = uRam00000001419eb7c4;
      uStack_2c0 = uRam00000001419eb7c8;
      uStack_2bc = uRam00000001419eb7cc;
      local_c8 = local_208;
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_2c8);
      local_c0 = local_1f8;
      puVar7 = (undefined8 *)gml_Script_InputDefineCluster(param_1,param_2,&local_2a8,2,&local_c8);
      uStack_2cc = *(undefined4 *)((longlong)puVar7 + 0xc);
      uStack_2d0 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_2d8 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_2d8,puVar7);
      }
      puVar7 = &local_2d8;
      bVar1 = false;
      bVar9 = true;
    }
    else {
      puVar7 = (undefined8 *)gml_Script_MouseRoomY(param_1,param_2,&local_298,0,0);
      uStack_2ac = *(undefined4 *)((longlong)puVar7 + 0xc);
      uStack_2b0 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_2b8 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_2b8,puVar7);
      }
      puVar7 = &local_2b8;
      bVar1 = true;
      bVar9 = false;
    }
    local_2c8 = *(undefined4 *)puVar7;
    uStack_2c4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_2c0 = *(undefined4 *)(puVar7 + 1);
    uStack_2bc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140041b80(&local_268,&local_2c8);
    if (bVar9) {
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
    }
    if ((bVar1) && ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_2b8);
    }
    local_238 = 0xb;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
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
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3268);
    local_2c8 = (undefined4)DAT_1419df7b0;
    uStack_2c4 = DAT_1419df7b0._4_4_;
    uStack_2c0 = DAT_1419df7b8;
    uStack_2bc = DAT_1419df7bc;
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_2c8);
    local_d8 = local_228;
    uStack_2cc = DAT_141dd9394;
    uStack_2d0 = DAT_141dd9390;
    if ((1 << ((byte)DAT_141dd9394 & 0x1f) & 0x46U) == 0) {
      local_2d8 = DAT_141dd9388;
    }
    else {
      FUN_1400419b0(&local_2d8,&DAT_141dd9388);
    }
    uVar12 = uStack_2cc;
    local_2c8 = (undefined4)local_2d8;
    uStack_2c4 = local_2d8._4_4_;
    uStack_2c0 = uStack_2d0;
    uStack_2bc = uStack_2cc;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2c8);
    if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_d0 = local_218;
    puVar8 = (undefined4 *)
             gml_Script_anon_147_DefineBossAttributes_BOSSMODSINIT
                       (param_1,param_2,&local_288,1,&local_d8);
    if (puVar8 != local_208) {
      local_2c8 = *puVar8;
      uStack_2c4 = puVar8[1];
      uStack_2c0 = puVar8[2];
      uStack_2bc = puVar8[3];
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_208);
      }
      FUN_140041b80(local_208,&local_2c8);
    }
    ppuVar11 = &local_d0;
    local_c8 = local_208;
    puVar8 = (undefined4 *)FUN_140e64420(param_1,param_2,&local_2a8,2,ppuVar11);
    uVar12 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
    if (puVar8 != local_1f8) {
      local_2c8 = *puVar8;
      uStack_2c4 = puVar8[1];
      uStack_2c0 = puVar8[2];
      uStack_2bc = puVar8[3];
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_2c8);
    }
    local_c0 = local_1f8;
    cVar4 = FUN_140e491e0(uVar5);
    bVar9 = cVar4 != '\0';
    if (bVar9) {
      uStack_2cc = 0xf;
      local_2d8 = 0x1000001000001cf;
      puVar7 = &local_2d8;
    }
    else {
      uStack_2ac = 0xf;
      local_2b8 = 0x1000001000001ce;
      puVar7 = &local_2b8;
    }
    uVar3 = uStack_2ac;
    uVar2 = uStack_2cc;
    local_2c8 = *(undefined4 *)puVar7;
    uStack_2c4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_2c0 = *(undefined4 *)(puVar7 + 1);
    uStack_2bc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_2c8);
    if (bVar9) {
      if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
    }
    if ((!bVar9) && ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_2b8);
    }
    local_b8 = local_1e8;
    local_2c8 = _DAT_141dc70f0;
    uStack_2c4 = uRam0000000141dc70f4;
    uStack_2c0 = uRam0000000141dc70f8;
    uStack_2bc = uRam0000000141dc70fc;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_2c8);
    local_b0 = &local_1d8;
    local_a8 = &local_258;
    local_a0 = &local_268;
    local_2c8 = (undefined4)DAT_1419df7b0;
    uStack_2c4 = DAT_1419df7b0._4_4_;
    uStack_2c0 = DAT_1419df7b8;
    uStack_2bc = DAT_1419df7bc;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_2c8);
    local_98 = local_1a8;
    local_2c8 = (undefined4)DAT_1419df7b0;
    uStack_2c4 = DAT_1419df7b0._4_4_;
    uStack_2c0 = DAT_1419df7b8;
    uStack_2bc = DAT_1419df7bc;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_2c8);
    local_90 = &local_198;
    local_2c8 = (undefined4)DAT_1419df7b0;
    uStack_2c4 = DAT_1419df7b0._4_4_;
    uStack_2c0 = DAT_1419df7b8;
    uStack_2bc = DAT_1419df7bc;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_2c8);
    local_88 = local_188;
    local_2c8 = (undefined4)DAT_1419df7b0;
    uStack_2c4 = DAT_1419df7b0._4_4_;
    uStack_2c0 = DAT_1419df7b8;
    uStack_2bc = DAT_1419df7bc;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_2c8);
    local_80 = local_178;
    local_2c8 = (undefined4)DAT_1419df7b0;
    uStack_2c4 = DAT_1419df7b0._4_4_;
    uStack_2c0 = DAT_1419df7b8;
    uStack_2bc = DAT_1419df7bc;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_2c8);
    local_78 = local_168;
    puVar8 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_278,1,CONCAT44(uVar12,DAT_141a086f8),&local_c0);
    if (puVar8 != local_158) {
      local_2c8 = *puVar8;
      uStack_2c4 = puVar8[1];
      uStack_2c0 = puVar8[2];
      uStack_2bc = puVar8[3];
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_2c8);
    }
    local_70 = local_158;
    local_2c8 = _DAT_1419eb7d0;
    uStack_2c4 = uRam00000001419eb7d4;
    uStack_2c0 = uRam00000001419eb7d8;
    uStack_2bc = uRam00000001419eb7dc;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_2c8);
    local_68 = local_148;
    gml_Script_draw_text_scribble_ext(param_1,param_2,&local_298,0xb,&local_b8);
  }
  else {
    local_238 = 3;
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  _eh_vector_destructor_iterator_(local_228,0x10,0x15,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_248;
  return;
}

