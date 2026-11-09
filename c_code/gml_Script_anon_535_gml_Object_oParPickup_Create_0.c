// gml_Script_anon_535_gml_Object_oParPickup_Create_0 @ 0x140bb61a0

void gml_Script_anon_535_gml_Object_oParPickup_Create_0(undefined8 param_1,undefined8 param_2)

{
  undefined1 *local_res18;
  undefined4 uVar1;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oParisiteLegs_Other_5";
  local_18 = 0;
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  uVar1 = 1;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  local_18 = 2;
  uStack_3c = 0xf;
  local_48 = 0x10000020000010c;
  local_38 = 0x10c;
  uStack_34 = 0x1000002;
  uStack_30 = uStack_40;
  uStack_2c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_38);
  local_res18 = local_68;
  FUN_140e634e0(param_1,param_2,&local_58,1,CONCAT44(uVar1,DAT_141a07788),&local_res18);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

