// gml_Script____struct___419_gml_Object_oCrab_Create_0 @ 0x1408c6440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___419_gml_Object_oCrab_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 *local_res8;
  ulonglong uVar4;
  ulonglong in_stack_ffffffffffffff70;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@1651@___struct___419@gml_Object_oCrab_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x55;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x56;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
  FUN_140e609c0(param_1);
  uVar4 = 0;
  puVar2 = (undefined4 *)gml_Script_FracPos(param_1,param_2,&local_88,0,0);
  if (puVar2 != puVar1) {
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    uStack_4c = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x57;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_78,uVar4 & 0xffffffffffffff00,
                in_stack_ffffffffffffff70 & 0xffffffffffffff00);
  local_58 = _DAT_141dd7808;
  uStack_54 = uRam0000000141dd780c;
  uStack_50 = uRam0000000141dd7810;
  uStack_4c = DAT_141dd7814;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_58);
  local_res8 = local_68;
  uVar3 = FUN_140069500(uVar3);
  FUN_140e63610(uVar3,param_2,&local_88,1,&local_78,&local_res8);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

