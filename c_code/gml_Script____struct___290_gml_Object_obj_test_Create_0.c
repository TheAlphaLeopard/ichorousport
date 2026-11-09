// gml_Script____struct___290_gml_Object_obj_test_Create_0 @ 0x14068ca40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___290_gml_Object_obj_test_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar5;
  undefined8 *puVar4;
  ulonglong in_stack_ffffffffffffff30;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined8 local_30;
  char *local_28;
  undefined4 local_20;
  
  local_28 = "gml_Script_anon@1797@___struct___293@___struct___290@gml_Object_obj_test_Create_0";
  local_30 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_30;
  local_20 = 0x5a;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_4c = 0;
  local_58 = 0;
  local_5c = 0;
  local_68 = 0;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_20 = 0x5a;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  FUN_140e87440(uVar1,DAT_141a551b0,0x80000000,&local_c8,(ulonglong)pcVar3 & 0xffffffffffffff00,
                in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  local_b8 = _DAT_141dd5238;
  uStack_b4 = uRam0000000141dd523c;
  uStack_b0 = uRam0000000141dd5240;
  uStack_ac = DAT_141dd5244;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_b8);
  local_48 = local_a8;
  uVar1 = FUN_140069500(uVar1);
  puVar4 = &local_c8;
  puVar2 = (undefined4 *)FUN_140e63610(uVar1,param_2,&local_78,1,puVar4,&local_48);
  uVar5 = (undefined4)((ulonglong)puVar4 >> 0x20);
  if (puVar2 != local_98) {
    local_b8 = *puVar2;
    uStack_b4 = puVar2[1];
    uStack_b0 = puVar2[2];
    uStack_ac = puVar2[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_b8);
  }
  local_40 = local_98;
  uVar1 = CONCAT44(uVar5,DAT_1419fcb18);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_68,1,uVar1,&local_40);
  uVar5 = (undefined4)((ulonglong)uVar1 >> 0x20);
  if (puVar2 != local_88) {
    local_b8 = *puVar2;
    uStack_b4 = puVar2[1];
    uStack_b0 = puVar2[2];
    uStack_ac = puVar2[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_b8);
  }
  local_38 = local_88;
  FUN_140e634e0(param_1,param_2,&local_58,1,CONCAT44(uVar5,DAT_141a03478),&local_38);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_30;
  return param_3;
}

