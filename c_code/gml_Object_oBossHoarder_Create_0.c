// gml_Object_oBossHoarder_Create_0 @ 0x140795e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBossHoarder_Create_0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  local_60 = "gml_Script_anon@49@gml_Object_oBossGrub_Other_76";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 2;
  uVar1 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 4;
  uStack_3c = 0xf;
  local_48 = 0x1000002000000cd;
  local_b8 = 0xcd;
  uStack_b4 = 0x1000002;
  uStack_b0 = uStack_40;
  uStack_ac = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_38 = local_98;
  local_b8 = _DAT_1419e8200;
  uStack_b4 = uRam00000001419e8204;
  uStack_b0 = uRam00000001419e8208;
  uStack_ac = uRam00000001419e820c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_30 = local_88;
  local_b8 = _DAT_1419df7a0;
  uStack_b4 = uRam00000001419df7a4;
  uStack_b0 = uRam00000001419df7a8;
  uStack_ac = uRam00000001419df7ac;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_28 = local_78;
  FUN_140e634e0(param_1,param_2,&local_a8,3,CONCAT44(uVar1,DAT_141a0a2e8),&local_38);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

