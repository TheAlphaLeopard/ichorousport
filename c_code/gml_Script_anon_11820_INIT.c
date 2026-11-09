// gml_Script_anon_11820_INIT @ 0x1402e7b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_11820_INIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
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
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_90 = "gml_Script_make_outline_font";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x19d;
  _eh_vector_constructor_iterator_(&local_138,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x19f;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_1402e7bf8:
    local_158 = *(undefined4 *)puVar1;
    uStack_154 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_158);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_e8) goto LAB_1402e7bf8;
  }
  local_50 = &local_e8;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_1402e7c44:
    local_158 = *(undefined4 *)puVar1;
    uStack_154 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_158);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_d8) goto LAB_1402e7c44;
  }
  local_48 = &local_d8;
  if (param_4 < 3) {
    puVar1 = &DAT_1419df7b0;
LAB_1402e7c91:
    local_158 = *(undefined4 *)puVar1;
    uStack_154 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_158);
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
    if (puVar1 != &local_c8) goto LAB_1402e7c91;
  }
  local_40 = &local_c8;
  local_158 = _DAT_1419df7a0;
  uStack_154 = uRam00000001419df7a4;
  uStack_150 = uRam00000001419df7a8;
  uStack_14c = uRam00000001419df7ac;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_158);
  local_38 = local_b8;
  local_158 = (undefined4)DAT_1419df7b0;
  uStack_154 = DAT_1419df7b0._4_4_;
  uStack_150 = DAT_1419df7b8;
  uStack_14c = DAT_1419df7bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_158);
  local_30 = local_a8;
  gml_Script_scribble_font_bake_outline_and_shadow(param_1,param_2,&local_148,5,&local_50);
  local_88 = 0x1a0;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_1402e7da2:
    local_158 = *(undefined4 *)puVar1;
    uStack_154 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_138) goto LAB_1402e7da2;
  }
  local_78 = &local_138;
  local_158 = _DAT_1419e3b60;
  uStack_154 = uRam00000001419e3b64;
  uStack_150 = uRam00000001419e3b68;
  uStack_14c = uRam00000001419e3b6c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_158);
  local_70 = &local_128;
  local_158 = _DAT_1419e3cf0;
  uStack_154 = uRam00000001419e3cf4;
  uStack_150 = uRam00000001419e3cf8;
  uStack_14c = uRam00000001419e3cfc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_158);
  local_68 = local_118;
  local_158 = _DAT_1419e3cd0;
  uStack_154 = uRam00000001419e3cd4;
  uStack_150 = uRam00000001419e3cd8;
  uStack_14c = uRam00000001419e3cdc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_158);
  local_60 = local_108;
  local_158 = _DAT_1419df7c0;
  uStack_154 = uRam00000001419df7c4;
  uStack_150 = uRam00000001419df7c8;
  uStack_14c = uRam00000001419df7cc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_158);
  local_58 = local_f8;
  gml_Script_scribble_initialize(param_1,param_2,&local_148,5,&local_78);
  local_88 = 0x1a1;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_1402e7f31:
    local_158 = *(undefined4 *)puVar1;
    uStack_154 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_138) goto LAB_1402e7f31;
  }
  local_78 = &local_138;
  local_158 = _DAT_1419e3b60;
  uStack_154 = uRam00000001419e3b64;
  uStack_150 = uRam00000001419e3b68;
  uStack_14c = uRam00000001419e3b6c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_158);
  local_70 = &local_128;
  local_158 = _DAT_1419e3bb0;
  uStack_154 = uRam00000001419e3bb4;
  uStack_150 = uRam00000001419e3bb8;
  uStack_14c = uRam00000001419e3bbc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_158);
  local_68 = local_118;
  local_158 = _DAT_1419e3c30;
  uStack_154 = uRam00000001419e3c34;
  uStack_150 = uRam00000001419e3c38;
  uStack_14c = uRam00000001419e3c3c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_158);
  local_60 = local_108;
  local_158 = _DAT_1419df7c0;
  uStack_154 = uRam00000001419df7c4;
  uStack_150 = uRam00000001419df7c8;
  uStack_14c = uRam00000001419df7cc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_158);
  local_58 = local_f8;
  gml_Script_scribble_initialize(param_1,param_2,&local_148,5,&local_78);
  local_88 = 0x1a3;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if (param_4 < 4) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[3];
    if (puVar1 == &local_138) goto LAB_1402e80f1;
  }
  local_158 = *(undefined4 *)puVar1;
  uStack_154 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_150 = *(undefined4 *)(puVar1 + 1);
  uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_158);
LAB_1402e80f1:
  local_78 = &local_138;
  if ((param_4 < 5) || (puVar2 = (undefined8 *)param_5[4], puVar2 != &local_128)) {
    local_158 = *(undefined4 *)puVar2;
    uStack_154 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_150 = *(undefined4 *)(puVar2 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  local_70 = &local_128;
  FUN_14044f820(param_1,param_2,&local_148,2,&local_78);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

