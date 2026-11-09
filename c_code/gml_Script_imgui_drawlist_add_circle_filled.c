// gml_Script_imgui_drawlist_add_circle_filled @ 0x1404b9dc0

undefined8 *
gml_Script_imgui_drawlist_add_circle_filled
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined1 local_1a8 [128];
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_1c0 = "gml_Script_imgui_drawlist_add_triangle_filled";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 0x440;
  _eh_vector_constructor_iterator_(local_1a8,0x10,0x10,FUN_1400424d0,FUN_140041b30);
  local_1cc = 0;
  local_1d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1b8 = 0x441;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_1404b9e8e:
    local_1e8 = *(undefined4 *)puVar1;
    uStack_1e4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_1e0 = *(undefined4 *)(puVar1 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1e8);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_128) goto LAB_1404b9e8e;
  }
  local_68 = &local_128;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_1404b9edd:
    local_1e8 = *(undefined4 *)puVar1;
    uStack_1e4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_1e0 = *(undefined4 *)(puVar1 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1e8);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_118) goto LAB_1404b9edd;
  }
  local_60 = &local_118;
  if (param_4 < 3) {
    puVar1 = &DAT_1419df7b0;
LAB_1404b9f2d:
    local_1e8 = *(undefined4 *)puVar1;
    uStack_1e4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_1e0 = *(undefined4 *)(puVar1 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1e8);
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
    if (puVar1 != &local_108) goto LAB_1404b9f2d;
  }
  local_58 = &local_108;
  if (param_4 < 4) {
    puVar1 = &DAT_1419df7b0;
LAB_1404b9f7d:
    local_1e8 = *(undefined4 *)puVar1;
    uStack_1e4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_1e0 = *(undefined4 *)(puVar1 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1e8);
  }
  else {
    puVar1 = (undefined8 *)param_5[3];
    if (puVar1 != &local_f8) goto LAB_1404b9f7d;
  }
  local_50 = &local_f8;
  if (param_4 < 5) {
    puVar1 = &DAT_1419df7b0;
LAB_1404b9fcd:
    local_1e8 = *(undefined4 *)puVar1;
    uStack_1e4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_1e0 = *(undefined4 *)(puVar1 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1e8);
  }
  else {
    puVar1 = (undefined8 *)param_5[4];
    if (puVar1 != &local_e8) goto LAB_1404b9fcd;
  }
  local_48 = &local_e8;
  if (param_4 < 6) {
    puVar1 = &DAT_1419df7b0;
LAB_1404ba01d:
    local_1e8 = *(undefined4 *)puVar1;
    uStack_1e4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_1e0 = *(undefined4 *)(puVar1 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1e8);
  }
  else {
    puVar1 = (undefined8 *)param_5[5];
    if (puVar1 != &local_d8) goto LAB_1404ba01d;
  }
  local_40 = &local_d8;
  if (param_4 < 7) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[6];
    if (puVar1 == &local_c8) goto LAB_1404ba09a;
  }
  local_1e8 = *(undefined4 *)puVar1;
  uStack_1e4 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_1e0 = *(undefined4 *)(puVar1 + 1);
  uStack_1dc = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_1e8);
LAB_1404ba09a:
  local_38 = &local_c8;
  if ((param_4 < 8) || (puVar2 = (undefined8 *)param_5[7], puVar2 != &local_b8)) {
    local_1e8 = *(undefined4 *)puVar2;
    uStack_1e4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_1e0 = *(undefined4 *)(puVar2 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_1e8);
  }
  local_30 = &local_b8;
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1d8,8,DAT_141a59730,&local_68);
  if (puVar2 != param_3) {
    local_1e8 = *(undefined4 *)puVar2;
    uStack_1e4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_1e0 = *(undefined4 *)(puVar2 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  _eh_vector_destructor_iterator_(local_1a8,0x10,0x10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return param_3;
}

