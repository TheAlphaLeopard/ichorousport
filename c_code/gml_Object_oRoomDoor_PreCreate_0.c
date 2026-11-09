// gml_Object_oRoomDoor_PreCreate_0 @ 0x140d3a2b0

void gml_Object_oRoomDoor_PreCreate_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *local_res8;
  code *pcVar4;
  ulonglong in_stack_ffffffffffffff60;
  undefined4 local_98 [3];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Object_oRoomDoor_Draw_73";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_38 = 4;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56b90);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56c20);
  FUN_140e87440(uVar1,DAT_141a05028,0x80000000,&local_88,(ulonglong)pcVar4 & 0xffffffffffffff00,
                in_stack_ffffffffffffff60 & 0xffffffffffffff00);
  puVar3 = (undefined4 *)FUN_140e63610(param_1,param_2,&local_78,0,uVar2,0);
  if (puVar3 != local_98) {
    local_58 = *puVar3;
    uStack_54 = puVar3[1];
    uStack_50 = puVar3[2];
    uStack_4c = puVar3[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_58);
  }
  local_res8 = local_98;
  uVar1 = FUN_140069500(uVar1);
  FUN_140e63610(uVar1,param_2,&local_68,1,&local_88,&local_res8);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

