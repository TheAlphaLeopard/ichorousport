// gml_Script_anon_1797____struct___293____struct___290_gml_Object_obj_test_Create_0 @ 0x14068c6c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1797____struct___293____struct___290_gml_Object_obj_test_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *local_res8;
  code *pcVar4;
  ulonglong in_stack_ffffffffffffff70;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@1708@___struct___292@___struct___290@gml_Object_obj_test_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x57;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x57;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a020d8);
  FUN_140e87440(uVar1,DAT_141a551b0,0x80000000,&local_88,(ulonglong)pcVar4 & 0xffffffffffffff00,
                in_stack_ffffffffffffff70 & 0xffffffffffffff00);
  local_58 = _DAT_141dd5238;
  uStack_54 = uRam0000000141dd523c;
  uStack_50 = uRam0000000141dd5240;
  uStack_4c = DAT_141dd5244;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_58);
  local_res8 = local_78;
  FUN_140e609c0(param_1);
  uVar1 = FUN_140069500(uVar1);
  puVar3 = (undefined4 *)FUN_140e63610(uVar1,param_2,&local_68,1,&local_88,&local_res8);
  if (puVar3 != puVar2) {
    local_58 = *puVar3;
    uStack_54 = puVar3[1];
    uStack_50 = puVar3[2];
    uStack_4c = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

