// gml_Script_anon_434_gml_Object_oBossThePest_Other_76 @ 0x140833420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_434_gml_Object_oBossThePest_Other_76
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 **ppuVar1;
  undefined4 uVar2;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@306@gml_Object_oBossThePest_Other_76";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x13;
  _eh_vector_constructor_iterator_(local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x15;
  local_b8 = CONCAT44(uRam00000001419e8c34,_DAT_1419e8c30);
  uStack_b0 = uRam00000001419e8c38;
  uStack_ac = uRam00000001419e8c3c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_b8);
  local_58 = local_a8;
  local_b8 = CONCAT44(uRam00000001419e8c24,_DAT_1419e8c20);
  uStack_b0 = uRam00000001419e8c28;
  uStack_ac = uRam00000001419e8c2c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_50 = local_98;
  local_b8 = CONCAT44(uRam00000001419e8c54,_DAT_1419e8c50);
  uStack_b0 = uRam00000001419e8c58;
  uStack_ac = uRam00000001419e8c5c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_48 = local_88;
  local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_40 = local_78;
  ppuVar1 = &local_58;
  FUN_14044e5b0(param_1,param_2,&local_c8,4,ppuVar1);
  uVar2 = (undefined4)((ulonglong)ppuVar1 >> 0x20);
  local_28 = 0x16;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uStack_ac = 0xf;
  local_b8 = 0x10000020000016a;
  local_68 = 0x16a;
  uStack_64 = 0x1000002;
  uStack_60 = uStack_b0;
  uStack_5c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_68);
  local_58 = local_a8;
  local_68 = _DAT_1419e8bd0;
  uStack_64 = uRam00000001419e8bd4;
  uStack_60 = uRam00000001419e8bd8;
  uStack_5c = uRam00000001419e8bdc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_68);
  local_50 = local_98;
  local_68 = _DAT_1419df7a0;
  uStack_64 = uRam00000001419df7a4;
  uStack_60 = uRam00000001419df7a8;
  uStack_5c = uRam00000001419df7ac;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_68);
  local_48 = local_88;
  local_68 = _DAT_1419e8bb0;
  uStack_64 = uRam00000001419e8bb4;
  uStack_60 = uRam00000001419e8bb8;
  uStack_5c = uRam00000001419e8bbc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_68);
  local_40 = local_78;
  FUN_140e634e0(param_1,param_2,&local_c8,4,CONCAT44(uVar2,DAT_141a0a2e8),&local_58);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

