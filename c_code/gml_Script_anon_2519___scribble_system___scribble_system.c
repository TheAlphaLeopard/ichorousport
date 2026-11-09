// gml_Script_anon_2519___scribble_system___scribble_system @ 0x140205870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2519___scribble_system___scribble_system
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_f0 = "gml_Script___scribble_surface_get_material";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 5;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_d8,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_fc = 0;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 7;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_c8) goto LAB_14020596e;
  }
  local_128 = *(undefined4 *)param_5;
  uStack_124 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_120 = *(undefined4 *)(param_5 + 1);
  uStack_11c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_128);
LAB_14020596e:
  local_50 = &local_c8;
  local_128 = _DAT_141dcd868;
  uStack_124 = uRam0000000141dcd86c;
  uStack_120 = uRam0000000141dcd870;
  uStack_11c = DAT_141dcd874;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_128);
  local_48 = local_b8;
  puVar1 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_118,1,CONCAT44(uVar3,DAT_141a04b28),&local_50);
  if (puVar1 != local_a8) {
    local_128 = *puVar1;
    uStack_124 = puVar1[1];
    uStack_120 = puVar1[2];
    uStack_11c = puVar1[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_128);
  }
  local_40 = local_a8;
  local_128 = _DAT_141dc62a0;
  uStack_124 = uRam0000000141dc62a4;
  uStack_120 = uRam0000000141dc62a8;
  uStack_11c = uRam0000000141dc62ac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_128);
  local_38 = local_98;
  local_128 = (undefined4)DAT_1419df7b0;
  uStack_124 = DAT_1419df7b0._4_4_;
  uStack_120 = DAT_1419df7b8;
  uStack_11c = DAT_1419df7bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_128);
  local_30 = local_88;
  local_128 = (undefined4)DAT_1419df7b0;
  uStack_124 = DAT_1419df7b0._4_4_;
  uStack_120 = DAT_1419df7b8;
  uStack_11c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_128);
  local_28 = local_78;
  local_128 = (undefined4)DAT_1419df7b0;
  uStack_124 = DAT_1419df7b0._4_4_;
  uStack_120 = DAT_1419df7b8;
  uStack_11c = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_128);
  local_20 = local_68;
  puVar2 = (undefined8 *)
           gml_Script____struct___60___scribble_glyph_data_initialize___scribble_glyph_data_initialize
                     (param_1,param_2,&local_108,6,&local_48);
  if (puVar2 != param_3) {
    local_128 = *(undefined4 *)puVar2;
    uStack_124 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_120 = *(undefined4 *)(puVar2 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

