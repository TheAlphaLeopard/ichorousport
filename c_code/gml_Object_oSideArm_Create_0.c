// gml_Object_oSideArm_Create_0 @ 0x140d80b60

void gml_Object_oSideArm_Create_0(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *local_res18;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [3];
  byte local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oShopSalesman_Other_5";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0ae88);
  local_5c = 0xffffff;
  local_68 = 0;
  local_28 = 2;
  gml_Script_jb_stack_get(param_1,param_2,&local_68,0,0);
  local_28 = 3;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  if (puVar1 != local_58) {
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_48);
  }
  local_res18 = local_58;
  gml_Script_jb_stack_layer_play(param_1,param_2,&local_68,1,&local_res18);
  local_28 = 4;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  gml_Script_angle_in_range(param_1,param_2,&local_68,0,0);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

