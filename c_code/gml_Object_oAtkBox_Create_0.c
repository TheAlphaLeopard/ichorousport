// gml_Object_oAtkBox_Create_0 @ 0x140680980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oAtkBox_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
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
  
  local_50 = "gml_Object_oAnimatedText_Create_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_48 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_48 = 4;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdad8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4020000000000000;
  local_48 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01bb8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4049000000000000;
  local_48 = 7;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01bc8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_48 = 9;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  FUN_1403ed380(param_1,param_2,&local_88,0,0);
  local_48 = 10;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  FUN_14040a500(param_1,param_2,&local_88,0,0);
  local_48 = 0xc;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  local_78 = (undefined1 *)CONCAT44(uRam00000001419e7314,_DAT_1419e7310);
  uStack_70 = (undefined1 *)CONCAT44(uRam00000001419e731c,uRam00000001419e7318);
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_78);
  local_78 = local_40;
  local_68 = _DAT_1419e7320;
  uStack_64 = uRam00000001419e7324;
  uStack_60 = uRam00000001419e7328;
  uStack_5c = uRam00000001419e732c;
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_30);
  }
  FUN_140041b80(local_30,&local_68);
  uStack_70 = local_30;
  gml_Script_scribble_anim_wave(param_1,param_2,&local_88,2,&local_78);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

