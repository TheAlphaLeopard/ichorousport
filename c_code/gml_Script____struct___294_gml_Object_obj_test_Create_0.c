// gml_Script____struct___294_gml_Object_obj_test_Create_0 @ 0x14068d720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___294_gml_Object_obj_test_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulonglong in_stack_ffffffffffffff50;
  undefined1 **ppuVar4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  
  local_60 = "gml_Script_anon@2091@___struct___297@___struct___294@gml_Object_obj_test_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x67;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x68;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  FUN_140e87440(uVar1,DAT_141a55160,0x80000000,&local_98,(ulonglong)pcVar2 & 0xffffffffffffff00,
                in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  local_78 = _DAT_141dd5298;
  uStack_74 = uRam0000000141dd529c;
  uStack_70 = uRam0000000141dd52a0;
  uStack_6c = DAT_141dd52a4;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_78);
  local_88 = local_50;
  local_78 = _DAT_141dc67c0;
  uStack_74 = uRam0000000141dc67c4;
  uStack_70 = uRam0000000141dc67c8;
  uStack_6c = uRam0000000141dc67cc;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_78);
  local_80 = local_40;
  uVar1 = FUN_140069500(uVar1);
  ppuVar4 = &local_88;
  puVar3 = &local_98;
  FUN_140e63610(uVar1,param_2,&local_a8,2,puVar3,ppuVar4);
  local_58 = 0x69;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  FUN_140e87440(uVar1,DAT_141a55160,0x80000000,&local_98,(ulonglong)puVar3 & 0xffffffffffffff00,
                (ulonglong)ppuVar4 & 0xffffffffffffff00);
  local_78 = _DAT_141dd5238;
  uStack_74 = uRam0000000141dd523c;
  uStack_70 = uRam0000000141dd5240;
  uStack_6c = DAT_141dd5244;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_78);
  local_88 = local_50;
  local_78 = _DAT_141dc67c0;
  uStack_74 = uRam0000000141dc67c4;
  uStack_70 = uRam0000000141dc67c8;
  uStack_6c = uRam0000000141dc67cc;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_78);
  local_80 = local_40;
  uVar1 = FUN_140069500(uVar1);
  FUN_140e63610(uVar1,param_2,&local_a8,2,&local_98,&local_88);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

