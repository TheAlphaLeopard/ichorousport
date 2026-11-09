// gml_Script_anon_3456____struct___527_gml_Object_oEnemySkele_Create_0 @ 0x140a663f0

undefined8 *
gml_Script_anon_3456____struct___527_gml_Object_oEnemySkele_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *local_res8;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong in_stack_ffffffffffffff70;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
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
  
  local_30 = "gml_Script_anon@3349@___struct___526@gml_Object_oEnemySkele_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x89;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x8a;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
  in_stack_ffffffffffffff70 = in_stack_ffffffffffffff70 & 0xffffffffffffff00;
  uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_141a04b58,0x80000000,&local_78,uVar3,in_stack_ffffffffffffff70);
  FUN_140e87440(uVar1,DAT_141a097f8,0x80000000,&local_88,uVar3 & 0xffffffffffffff00,
                in_stack_ffffffffffffff70 & 0xffffffffffffff00);
  local_48 = (undefined4)local_88;
  uStack_44 = local_88._4_4_;
  uStack_40 = uStack_80;
  uStack_3c = uStack_7c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_48);
  local_res8 = local_68;
  uVar1 = FUN_140069500(uVar1);
  FUN_140e63610(uVar1,param_2,&local_58,1,&local_78,&local_res8);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

