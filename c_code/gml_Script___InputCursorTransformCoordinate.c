// gml_Script___InputCursorTransformCoordinate @ 0x14008dd60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputCursorTransformCoordinate
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_c0 = "gml_GlobalScript___InputCursorTransformCoordinate";
  local_b8 = 0;
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 10;
  local_e8 = _DAT_141dc6020;
  uStack_e4 = uRam0000000141dc6024;
  uStack_e0 = uRam0000000141dc6028;
  uStack_dc = uRam0000000141dc602c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_e8);
  local_58 = local_a8;
  local_e8 = _DAT_141dc6020;
  uStack_e4 = uRam0000000141dc6024;
  uStack_e0 = uRam0000000141dc6028;
  uStack_dc = uRam0000000141dc602c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_e8);
  local_50 = local_98;
  local_e8 = _DAT_1419dfe50;
  uStack_e4 = uRam00000001419dfe54;
  uStack_e0 = uRam00000001419dfe58;
  uStack_dc = uRam00000001419dfe5c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_e8);
  local_48 = local_88;
  local_e8 = _DAT_1419dfe50;
  uStack_e4 = uRam00000001419dfe54;
  uStack_e0 = uRam00000001419dfe58;
  uStack_dc = uRam00000001419dfe5c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_e8);
  local_40 = local_78;
  local_e8 = (undefined4)DAT_1419df7b0;
  uStack_e4 = DAT_1419df7b0._4_4_;
  uStack_e0 = DAT_1419df7b8;
  uStack_dc = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_e8);
  local_38 = local_68;
  FUN_140087c90(param_1,param_2,&local_d8,5,&local_58);
  local_b8 = 0xc;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00fc8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_e8,FUN_140087c90,param_1);
  if (&local_e8 != puVar1) {
    local_28 = local_e8;
    uStack_24 = uStack_e4;
    uStack_20 = uStack_e0;
    uStack_1c = uStack_dc;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_28);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

