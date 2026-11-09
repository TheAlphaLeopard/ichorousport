// gml_Script_anon_744_gml_Object_oParPickup_Create_0 @ 0x140bb6300

undefined8 *
gml_Script_anon_744_gml_Object_oParPickup_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *local_res8;
  undefined4 local_68 [3];
  byte local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@535@gml_Object_oParPickup_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x22;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x24;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56ba0);
  FUN_140e63610(param_1,param_2,&local_58,0,uVar1,0);
  local_28 = 0x26;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
  if (puVar2 != local_68) {
    local_48 = *puVar2;
    uStack_44 = puVar2[1];
    uStack_40 = puVar2[2];
    uStack_3c = puVar2[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_48);
  }
  local_res8 = local_68;
  FUN_140edd0e0(param_1,param_2,1,&local_res8);
  local_28 = 0x27;
  FUN_140edd0e0(param_1,param_2,0,0);
  local_28 = 0x29;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

