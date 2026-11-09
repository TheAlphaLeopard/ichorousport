// gml_Object_oBgFlash_Create_0 @ 0x1406869a0

void gml_Object_oBgFlash_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *local_res8;
  undefined4 uVar2;
  undefined4 local_58 [3];
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
  
  local_20 = "gml_Object_oAtkBox_CleanUp_0";
  local_18 = 0;
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_3c = 0xffffff;
  local_48 = 0;
  local_18 = 2;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
  if (puVar1 != local_58) {
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_38);
  }
  local_res8 = local_58;
  FUN_140e634e0(param_1,param_2,&local_48,1,CONCAT44(uVar2,DAT_1419f6038),&local_res8);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

