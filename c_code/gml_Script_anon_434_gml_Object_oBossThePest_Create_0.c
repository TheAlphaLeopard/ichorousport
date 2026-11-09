// gml_Script_anon_434_gml_Object_oBossThePest_Create_0 @ 0x14080d7d0

void gml_Script_anon_434_gml_Object_oBossThePest_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *local_res8;
  undefined4 uVar4;
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
  
  local_30 = "gml_Object_oBossSplit_CleanUp_0";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_28 = 3;
  FUN_140e98b30(param_1,param_2);
  local_28 = 4;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05798);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_28 = 5;
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    local_68 = 0;
    local_60 = 0;
    local_5c = 5;
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09a08);
    if (puVar3 != local_58) {
      local_48 = *puVar3;
      uStack_44 = puVar3[1];
      uStack_40 = puVar3[2];
      uStack_3c = puVar3[3];
      if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_58);
      }
      FUN_140041b80(local_58,&local_48);
    }
    local_res8 = local_58;
    FUN_140e634e0(param_1,param_2,&local_68,1,CONCAT44(uVar4,DAT_141a07788),&local_res8);
  }
  else {
    local_28 = 4;
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

