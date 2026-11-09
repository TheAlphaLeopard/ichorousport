// gml_Object_oExitButton_Step_0 @ 0x140ac94e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oExitButton_Step_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *local_res8;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oEntity_Draw_64";
  local_18 = 0;
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_3c = 0xffffff;
  local_48 = 0;
  local_18 = 2;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f27d8);
  local_38 = _DAT_1419eb400;
  uStack_34 = uRam00000001419eb404;
  uStack_30 = uRam00000001419eb408;
  uStack_2c = uRam00000001419eb40c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_38);
  local_res8 = local_58;
  FUN_140e63610(param_1,param_2,&local_48,1,uVar1,&local_res8);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

