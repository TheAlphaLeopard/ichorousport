// gml_Object_oSmoke_Step_0 @ 0x140d8c330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSmoke_Step_0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar11;
  ulonglong uVar9;
  undefined1 **ppuVar10;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
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
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  longlong local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined8 local_198;
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined4 local_158 [3];
  byte local_14c;
  undefined4 local_148 [3];
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
  undefined4 local_e8 [3];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  undefined1 *local_38;
  
  local_210 = "gml_Object_oSignature_Draw_64";
  local_208 = 0;
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(local_1f8,0x10,0x13,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0de48);
  local_21c = 0xffffff;
  local_228 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_208 = 2;
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 == '\0') {
    bVar7 = false;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    uStack_2ac = 0xf;
    local_2b8 = 0x10000000000006a;
    local_2c8 = 0x10000000000006a;
    uStack_2c0 = uStack_2b0;
    uStack_2bc = 0xf;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_2c8);
    ppuVar10 = &local_c8;
    uVar9 = CONCAT44(uVar11,DAT_141a02ef8);
    local_c8 = local_1f8;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_298,1,uVar9,ppuVar10);
    cVar2 = FUN_140e491e0(uVar4);
    if (cVar2 != '\0') {
      uStack_2bc = 0xf;
      local_2c8 = 0x10000000000006a;
      FUN_140e87440(&local_2c8,DAT_141a579b0,0x80000000,&local_228,uVar9 & 0xffffffffffffff00,
                    (ulonglong)ppuVar10 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      uStack_2bc = 0;
      local_2c8 = 0x4000000000000000;
      iVar3 = FUN_140e851f0(&local_228,&local_2c8,DAT_141955260,0);
      bVar7 = iVar3 == 0;
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
    }
  }
  else {
    bVar7 = true;
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_22c = 0xd;
  if (bVar7) {
    uVar8 = 0x3ff00000;
  }
  else {
    uVar8 = 0;
  }
  local_238 = (ulonglong)uVar8 << 0x20;
  local_208 = 4;
  cVar2 = FUN_140e491e0(&local_238);
  if (cVar2 != '\0') {
    local_208 = 6;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3268);
    local_2b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2b0 = DAT_1419df7b8;
    uStack_2ac = DAT_1419df7bc;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_2b8);
    local_2b8 = CONCAT44(uRam00000001419ede14,_DAT_1419ede10);
    uStack_2b0 = uRam00000001419ede18;
    uStack_2ac = uRam00000001419ede1c;
    local_c8 = local_1f8;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_2b8);
    local_c0 = local_1e8;
    local_2b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2b0 = DAT_1419df7b8;
    uStack_2ac = DAT_1419df7bc;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_2b8);
    local_b8 = local_1d8;
    local_2b8 = CONCAT44(uRam00000001419ede14,_DAT_1419ede10);
    uStack_2b0 = uRam00000001419ede18;
    uStack_2ac = uRam00000001419ede1c;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_2b8);
    local_b0 = local_1c8;
    local_2b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2b0 = DAT_1419df7b8;
    uStack_2ac = DAT_1419df7bc;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_2b8);
    local_a8 = local_1b8;
    uStack_2bc = DAT_141ddb8a4;
    uStack_2c0 = DAT_141ddb8a0;
    if ((1 << ((byte)DAT_141ddb8a4 & 0x1f) & 0x46U) == 0) {
      local_2c8 = DAT_141ddb898;
    }
    else {
      FUN_1400419b0(&local_2c8,&DAT_141ddb898);
    }
    uVar11 = uStack_2bc;
    local_2b8 = local_2c8;
    uStack_2b0 = uStack_2c0;
    uStack_2ac = uStack_2bc;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_2b8);
    if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_a0 = local_1a8;
    puVar5 = (undefined8 *)
             gml_Script_anon_147_DefineBossAttributes_BOSSMODSINIT
                       (param_1,param_2,&local_288,1,&local_a8);
    if (puVar5 != &local_198) {
      local_2b8 = *puVar5;
      uStack_2b0 = *(undefined4 *)(puVar5 + 1);
      uStack_2ac = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_2b8);
    }
    local_98 = &local_198;
    puVar5 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_278,2,&local_a0);
    if (puVar5 != &local_188) {
      local_2b8 = *puVar5;
      uStack_2b0 = *(undefined4 *)(puVar5 + 1);
      uStack_2ac = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_2b8);
    }
    local_90 = &local_188;
    cVar2 = FUN_140e491e0(uVar4);
    bVar7 = cVar2 != '\0';
    if (bVar7) {
      uStack_2bc = 0xf;
      local_2c8 = 0x1000001000001cf;
      puVar5 = &local_2c8;
    }
    else {
      uStack_2ac = 0xf;
      local_2b8 = 0x1000001000001ce;
      puVar5 = &local_2b8;
    }
    uVar1 = uStack_2ac;
    uVar11 = uStack_2bc;
    local_2a8 = *(undefined4 *)puVar5;
    uStack_2a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_2a0 = *(undefined4 *)(puVar5 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_2a8);
    if ((bVar7) && ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_2c8);
    }
    if ((!bVar7) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_2b8);
    }
    local_88 = local_178;
    local_2a8 = _DAT_141dc7720;
    uStack_2a4 = uRam0000000141dc7724;
    uStack_2a0 = uRam0000000141dc7728;
    uStack_29c = uRam0000000141dc772c;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_2a8);
    local_80 = local_168;
    puVar6 = (undefined4 *)gml_Script_InputCursorY(param_1,param_2,&local_248,2,&local_c8);
    if (puVar6 != local_158) {
      local_2a8 = *puVar6;
      uStack_2a4 = puVar6[1];
      uStack_2a0 = puVar6[2];
      uStack_29c = puVar6[3];
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_2a8);
    }
    local_78 = local_158;
    ppuVar10 = &local_b8;
    puVar6 = (undefined4 *)gml_Script_InputDefineCluster(param_1,param_2,&local_258,2,ppuVar10);
    uVar11 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
    if (puVar6 != local_148) {
      local_2a8 = *puVar6;
      uStack_2a4 = puVar6[1];
      uStack_2a0 = puVar6[2];
      uStack_29c = puVar6[3];
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_2a8);
    }
    local_70 = local_148;
    local_2a8 = (undefined4)DAT_1419df7b0;
    uStack_2a4 = DAT_1419df7b0._4_4_;
    uStack_2a0 = DAT_1419df7b8;
    uStack_29c = DAT_1419df7bc;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_2a8);
    local_68 = local_138;
    local_2a8 = (undefined4)DAT_1419df7b0;
    uStack_2a4 = DAT_1419df7b0._4_4_;
    uStack_2a0 = DAT_1419df7b8;
    uStack_29c = DAT_1419df7bc;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_2a8);
    local_60 = local_128;
    local_2a8 = (undefined4)DAT_1419df7b0;
    uStack_2a4 = DAT_1419df7b0._4_4_;
    uStack_2a0 = DAT_1419df7b8;
    uStack_29c = DAT_1419df7bc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_2a8);
    local_58 = local_118;
    local_2a8 = (undefined4)DAT_1419df7b0;
    uStack_2a4 = DAT_1419df7b0._4_4_;
    uStack_2a0 = DAT_1419df7b8;
    uStack_29c = DAT_1419df7bc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_2a8);
    local_50 = local_108;
    local_2a8 = (undefined4)DAT_1419df7b0;
    uStack_2a4 = DAT_1419df7b0._4_4_;
    uStack_2a0 = DAT_1419df7b8;
    uStack_29c = DAT_1419df7bc;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_2a8);
    local_48 = local_f8;
    puVar6 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_268,1,CONCAT44(uVar11,DAT_141a086f8),&local_90);
    if (puVar6 != local_e8) {
      local_2a8 = *puVar6;
      uStack_2a4 = puVar6[1];
      uStack_2a0 = puVar6[2];
      uStack_29c = puVar6[3];
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_2a8);
    }
    local_40 = local_e8;
    local_2a8 = _DAT_1419ede00;
    uStack_2a4 = uRam00000001419ede04;
    uStack_2a0 = uRam00000001419ede08;
    uStack_29c = uRam00000001419ede0c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_2a8);
    local_38 = local_d8;
    gml_Script_draw_text_scribble_ext(param_1,param_2,&local_298,0xb,&local_88);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  _eh_vector_destructor_iterator_(local_1f8,0x10,0x13,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_218;
  return;
}

