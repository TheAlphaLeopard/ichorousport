// gml_Script___scribble_font_add_sprite_common @ 0x140180330

undefined8 *
gml_Script___scribble_font_add_sprite_common
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_100 = "gml_Script___scribble_font_add_sprite";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 7;
  _eh_vector_constructor_iterator_(&local_e8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 9;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_140180408:
    local_138 = *(undefined4 *)puVar1;
    uStack_134 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_130 = *(undefined4 *)(puVar1 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_138);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_a8) goto LAB_140180408;
  }
  local_48 = &local_a8;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_140180454:
    local_138 = *(undefined4 *)puVar1;
    uStack_134 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_130 = *(undefined4 *)(puVar1 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_138);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_98) goto LAB_140180454;
  }
  local_40 = &local_98;
  if (param_4 < 3) {
    puVar1 = &DAT_1419df7b0;
LAB_1401804a1:
    local_138 = *(undefined4 *)puVar1;
    uStack_134 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_130 = *(undefined4 *)(puVar1 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_138);
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
    if (puVar1 != &local_88) goto LAB_1401804a1;
  }
  local_38 = &local_88;
  if (param_4 < 4) {
    puVar1 = &DAT_1419df7b0;
LAB_1401804ee:
    local_138 = *(undefined4 *)puVar1;
    uStack_134 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_130 = *(undefined4 *)(puVar1 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_138);
  }
  else {
    puVar1 = (undefined8 *)param_5[3];
    if (puVar1 != &local_78) goto LAB_1401804ee;
  }
  local_30 = &local_78;
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,4,DAT_141a089a8,&local_48);
  if (puVar1 != &local_118) {
    local_138 = *(undefined4 *)puVar1;
    uStack_134 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_130 = *(undefined4 *)(puVar1 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  local_f8 = 10;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_1401805d0:
    local_138 = *(undefined4 *)puVar1;
    uStack_134 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_130 = *(undefined4 *)(puVar1 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_e8) goto LAB_1401805d0;
  }
  local_68 = &local_e8;
  local_60 = &local_118;
  if (param_4 < 3) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
    if (puVar1 == &local_c8) goto LAB_140180653;
  }
  local_138 = *(undefined4 *)puVar1;
  uStack_134 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_130 = *(undefined4 *)(puVar1 + 1);
  uStack_12c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_138);
LAB_140180653:
  local_58 = &local_c8;
  if ((param_4 < 4) || (puVar2 = (undefined8 *)param_5[3], puVar2 != &local_b8)) {
    local_138 = *(undefined4 *)puVar2;
    uStack_134 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_138);
  }
  local_50 = &local_b8;
  FUN_140180bf0(param_1,param_2,&local_128,4,&local_68);
  local_f8 = 0xb;
  if (&local_118 != param_3) {
    local_138 = (undefined4)local_118;
    uStack_134 = local_118._4_4_;
    uStack_130 = uStack_110;
    uStack_12c = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

