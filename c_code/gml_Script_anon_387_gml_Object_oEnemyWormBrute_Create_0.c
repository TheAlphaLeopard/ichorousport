// gml_Script_anon_387_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a8c760

void gml_Script_anon_387_gml_Object_oEnemyWormBrute_Create_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_res8;
  code *pcVar3;
  undefined8 *puVar4;
  ulonglong in_stack_ffffffffffffff60;
  ulonglong uVar5;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined1 local_48 [12];
  byte local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oEnemySpider_Step_0";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_48,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_28 = 3;
  FUN_140e98b30(param_1,param_2);
  local_28 = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  uStack_6c = 0;
  local_78 = 0;
  iVar1 = FUN_140e851f0(uVar2,&local_78,DAT_141955260,1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar1 != -2 && iVar1 < 1) {
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar2,DAT_1419f5df8,0x80000000,&local_58,(ulonglong)pcVar3 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff60 & 0xffffffffffffff00);
    uStack_6c = DAT_141dd9054;
    uStack_70 = DAT_141dd9050;
    if ((1 << ((byte)DAT_141dd9054 & 0x1f) & 0x46U) == 0) {
      local_78 = CONCAT44(DAT_141dd9048._4_4_,(undefined4)DAT_141dd9048);
    }
    else {
      FUN_1400419b0(&local_78,&DAT_141dd9048);
    }
    uVar2 = FUN_140069500(uVar2);
    uVar5 = 0;
    puVar4 = &local_58;
    uVar2 = FUN_140e63610(uVar2,param_2,&local_88,0,puVar4,0);
    iVar1 = FUN_140e851f0(uVar2,&local_78,DAT_141955260,0);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if (iVar1 != 0) {
      local_28 = 7;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_98 = 0;
      local_90 = 0;
      local_8c = 5;
      uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar2,DAT_141a55540,0x80000000,&local_68,(ulonglong)puVar4 & 0xffffffffffffff00,
                    uVar5 & 0xffffffffffffff00);
      local_78 = CONCAT44(DAT_141dd9048._4_4_,(undefined4)DAT_141dd9048);
      uStack_70 = DAT_141dd9050;
      uStack_6c = DAT_141dd9054;
      if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_48);
      }
      FUN_140041b80(local_48,&local_78);
      local_res8 = local_48;
      uVar2 = FUN_140069500(uVar2);
      FUN_140e63610(uVar2,param_2,&local_98,1,&local_68,&local_res8);
    }
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_48,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

