// gml_Script_CancelPull @ 0x14025bed0

undefined8 *
gml_Script_CancelPull
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1c8;
  byte local_1bc;
  undefined8 local_1a8;
  byte local_19c;
  undefined8 local_198;
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_1e0 = "gml_Script_bm_draw_text_outline";
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 0x29;
  _eh_vector_constructor_iterator_(&local_1c8,0x10,0x11,FUN_1400424d0,FUN_140041b30);
  local_22c = 0xffffff;
  local_238 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  uStack_27c = 0;
  local_288 = 0;
  local_23c = 0;
  local_248 = 0;
  local_24c = 0;
  local_258 = 0;
  local_25c = 0;
  local_268 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1d8 = 0x2a;
  uStack_2a0 = "gml_Script_bm_font_type";
  local_2a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2a8;
  local_298 = 0x1a;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a46e28);
  uStack_27c = 5;
  local_288 = 0;
  local_298 = 0x1b;
  if (puVar4 != &local_288) {
    local_278 = *puVar4;
    uStack_270 = *(undefined4 *)(puVar4 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
    FUN_140041b80(&local_288,&local_278);
  }
  DAT_141dc7a50 = local_2a8;
  local_278 = local_288;
  uStack_270 = uStack_280;
  uStack_26c = uStack_27c;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_278);
  local_1d8 = 0x2b;
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  uStack_280 = 0;
  uStack_27c = 5;
  local_b8 = &local_238;
  uStack_26c = DAT_141dce0a4;
  uStack_270 = DAT_141dce0a0;
  if ((1 << ((byte)DAT_141dce0a4 & 0x1f) & 0x46U) == 0) {
    local_278 = DAT_141dce098;
  }
  else {
    FUN_1400419b0(&local_278,&DAT_141dce098);
  }
  iVar3 = FUN_140e851f0(&local_238,&local_278,DAT_141955260,0);
  if (iVar3 == 0) {
    local_1ec = DAT_141dce084;
    local_1f0 = DAT_141dce080;
    if ((1 << ((byte)DAT_141dce084 & 0x1f) & 0x46U) == 0) {
      local_1f8 = DAT_141dce078;
    }
    else {
      FUN_1400419b0(&local_1f8,&DAT_141dce078);
    }
    puVar4 = &local_1f8;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    local_1fc = DAT_141dce074;
    local_200 = DAT_141dce070;
    if ((1 << ((byte)DAT_141dce074 & 0x1f) & 0x46U) == 0) {
      local_208 = DAT_141dce068;
    }
    else {
      FUN_1400419b0(&local_208,&DAT_141dce068);
    }
    puVar4 = &local_208;
    bVar2 = false;
    bVar1 = true;
  }
  puVar5 = (undefined8 *)gml_Script____struct___117(param_1,param_2,&local_288,1,&local_b8);
  uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_220 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
    local_228 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_228,puVar5);
  }
  FUN_1400460e0(&local_228,puVar4);
  local_2a8 = (undefined8 *)local_228;
  uStack_2a0 = (char *)CONCAT44(uStack_21c,uStack_220);
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_2a8);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((bVar1) && ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_208);
  }
  if ((bVar2) && ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_1d8 = 0x2c;
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  uStack_280 = 0;
  uStack_27c = 5;
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
  uStack_26c = DAT_141dce094;
  uStack_270 = DAT_141dce090;
  if ((1 << ((byte)DAT_141dce094 & 0x1f) & 0x46U) == 0) {
    local_278 = DAT_141dce088;
  }
  else {
    FUN_1400419b0(&local_278,&DAT_141dce088);
  }
  uVar8 = uStack_26c;
  local_2a8 = (undefined8 *)local_278;
  uStack_2a0 = (char *)CONCAT44(uStack_26c,uStack_270);
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_2a8);
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_b8 = &local_1c8;
  local_b0 = &local_218;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_14025c407:
    local_2a8 = (undefined8 *)*puVar5;
    uStack_2a0 = (char *)puVar5[1];
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_2a8);
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
    if (puVar5 != &local_1a8) goto LAB_14025c407;
  }
  local_a8 = &local_1a8;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14025c455:
    local_2a8 = (undefined8 *)*puVar5;
    uStack_2a0 = (char *)puVar5[1];
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_2a8);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_198) goto LAB_14025c455;
  }
  local_a0 = &local_198;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
    if (puVar5 == &local_188) goto LAB_14025c4d2;
  }
  local_2a8 = (undefined8 *)*puVar5;
  uStack_2a0 = (char *)puVar5[1];
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_2a8);
LAB_14025c4d2:
  local_98 = &local_188;
  ppuVar6 = &local_b8;
  puVar5 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_248,3,ppuVar6);
  uVar8 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
  if (puVar5 != &local_178) {
    local_2a8 = (undefined8 *)*puVar5;
    uStack_2a0 = (char *)puVar5[1];
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_2a8);
  }
  local_90 = &local_178;
  local_2a8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_2a0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_2a8);
  local_88 = local_168;
  local_2a8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_2a0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_2a8);
  local_80 = local_158;
  uVar7 = CONCAT44(uVar8,DAT_141a04978);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_258,0,uVar7,0);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar5 != &local_148) {
    local_2a8 = (undefined8 *)*puVar5;
    uStack_2a0 = (char *)puVar5[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_2a8);
  }
  local_78 = &local_148;
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_268,0,CONCAT44(uVar8,DAT_141a049c8),0)
  ;
  if (puVar5 != &local_138) {
    local_2a8 = (undefined8 *)*puVar5;
    uStack_2a0 = (char *)puVar5[1];
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_2a8);
  }
  local_70 = &local_138;
  if ((param_4 < 4) || (puVar4 = (undefined8 *)param_5[3], puVar4 != &local_128)) {
    local_2a8 = (undefined8 *)*puVar4;
    uStack_2a0 = (char *)puVar4[1];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_2a8);
  }
  local_68 = &local_128;
  local_2a8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_2a0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_2a8);
  local_60 = local_118;
  local_2a8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_2a0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_2a8);
  local_58 = local_108;
  local_2a8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_2a0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_2a8);
  local_50 = local_f8;
  local_2a8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_2a0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_2a8);
  local_48 = local_e8;
  local_2a8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_2a0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_2a8);
  local_40 = local_d8;
  local_2a8 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_2a0 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_2a8);
  local_38 = local_c8;
  gml_Script_draw_sprite_hires(param_1,param_2,&local_288,0xe,&local_a0);
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  _eh_vector_destructor_iterator_(&local_1c8,0x10,0x11,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return param_3;
}

