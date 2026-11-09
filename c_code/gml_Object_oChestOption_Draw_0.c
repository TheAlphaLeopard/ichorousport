// gml_Object_oChestOption_Draw_0 @ 0x1408a4270

undefined8 *
gml_Object_oChestOption_Draw_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *local_res8;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@328@gml_Object_oChestOption_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x14;
  _eh_vector_constructor_iterator_(&local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x16;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56ba0);
  FUN_140e63610(param_1,param_2,&local_68,0,uVar1,0);
  local_28 = 0x18;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
  if (puVar2 != &local_78) {
    local_58 = *puVar2;
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_58);
  }
  local_res8 = &local_78;
  FUN_140edd0e0(param_1,param_2,1,&local_res8);
  local_28 = 0x19;
  uStack_4c = 0xf;
  local_58 = 0x100000000000061;
  local_48 = 0x61;
  uStack_44 = 0x1000000;
  uStack_40 = uStack_50;
  uStack_3c = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_48);
  local_res8 = &local_78;
  FUN_140edd0e0(param_1,param_2,1,&local_res8);
  local_28 = 0x1b;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

