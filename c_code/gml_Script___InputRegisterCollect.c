// gml_Script___InputRegisterCollect @ 0x1400c1870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputRegisterCollect(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_40 [12];
  byte local_34;
  undefined1 local_30 [12];
  byte local_24;
  
  local_50 = "gml_Script__once@anon@358@anon@141@__InputRegisterCollect@__InputRegisterCollect";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0xb;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x19;
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_68 = _DAT_1419e19c0;
  uStack_64 = uRam00000001419e19c4;
  uStack_60 = uRam00000001419e19c8;
  uStack_5c = uRam00000001419e19cc;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_68);
  local_78 = local_40;
  local_68 = (undefined4)DAT_1419df7b0;
  uStack_64 = DAT_1419df7b0._4_4_;
  uStack_60 = DAT_1419df7b8;
  uStack_5c = DAT_1419df7bc;
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_30);
  }
  FUN_140041b80(local_30,&local_68);
  local_70 = local_30;
  FUN_14034f100(param_1,param_2,&local_98,2,&local_78);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

