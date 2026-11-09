// gml_Script____struct___280_gml_Object_obj_test_Create_0 @ 0x14068a740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___280_gml_Object_obj_test_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar5;
  undefined8 *puVar4;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@880@___struct___282@___struct___280@gml_Object_obj_test_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x2d;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_5c = 0;
  local_68 = 0;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x2e;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  FUN_140e87440(uVar1,DAT_141a551b0,0x80000000,&local_a8,(ulonglong)pcVar3 & 0xffffffffffffff00,
                in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  local_48 = _DAT_141dd5268;
  uStack_44 = uRam0000000141dd526c;
  uStack_40 = uRam0000000141dd5270;
  uStack_3c = DAT_141dd5274;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_48);
  local_58 = local_98;
  uVar1 = FUN_140069500(uVar1);
  puVar4 = &local_a8;
  puVar2 = (undefined4 *)FUN_140e63610(uVar1,param_2,&local_78,1,puVar4,&local_58);
  uVar5 = (undefined4)((ulonglong)puVar4 >> 0x20);
  if (puVar2 != local_88) {
    local_48 = *puVar2;
    uStack_44 = puVar2[1];
    uStack_40 = puVar2[2];
    uStack_3c = puVar2[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_48);
  }
  local_50 = local_88;
  FUN_140e634e0(param_1,param_2,&local_68,1,CONCAT44(uVar5,DAT_141a57f00),&local_50);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

