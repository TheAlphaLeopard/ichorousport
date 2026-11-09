// gml_Script_anon_2454____struct___415_gml_Object_oCageArm_Create_0 @ 0x14087bf90

undefined8 *
gml_Script_anon_2454____struct___415_gml_Object_oCageArm_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 *local_res8;
  ulonglong uVar3;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [12];
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
  
  local_30 = "gml_Script_anon@2359@___struct___414@gml_Object_oCageArm_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x9d;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x9e;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a11d08);
  uVar3 = 0;
  FUN_140e63610(param_1,param_2,&local_58,0,uVar1,0);
  local_28 = 0x9f;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar2,DAT_1419f6278,0x80000000,&local_78,uVar1 & 0xffffffffffffff00,
                uVar3 & 0xffffffffffffff00);
  local_48 = (undefined4)local_78;
  uStack_44 = local_78._4_4_;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_48);
  local_res8 = local_68;
  FUN_140edd0e0(param_1,param_2,1,&local_res8);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

