// gml_Script____struct___378_gml_Object_oBossSplit_Create_0 @ 0x1407d6650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___378_gml_Object_oBossSplit_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  
  local_e0 = "gml_Script_anon@826@gml_Object_oBossSplit_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x33;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x34;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09a88);
  FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_108);
  FUN_140e609c0(param_1);
  if (&local_108 != puVar1) {
    local_f8 = local_108;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  FUN_140e60910(1);
  local_d8 = 0x35;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uStack_ec = 0xf;
  local_f8 = 0x10000020000013c;
  local_118 = 0x13c;
  uStack_114 = 0x1000002;
  uStack_110 = uStack_f0;
  uStack_10c = 0xf;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_118);
  local_68 = local_c8;
  local_118 = _DAT_1419e88a0;
  uStack_114 = uRam00000001419e88a4;
  uStack_110 = uRam00000001419e88a8;
  uStack_10c = uRam00000001419e88ac;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_118);
  local_60 = local_b8;
  local_118 = _DAT_1419df7a0;
  uStack_114 = uRam00000001419df7a4;
  uStack_110 = uRam00000001419df7a8;
  uStack_10c = uRam00000001419df7ac;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_118);
  local_58 = local_a8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_118);
  local_50 = local_98;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_118);
  local_48 = local_88;
  local_78 = FUN_140e794b0(0xcccccccd,0x3ff4000000000000);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_40 = &local_78;
  FUN_140e634e0(param_1,param_2,&local_128,6,CONCAT44(uVar2,DAT_141a0a2e8),&local_68);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

