// gml_Script_anon_46_gml_Object_oEnemyRotHive_Other_76 @ 0x140a55bf0

void gml_Script_anon_46_gml_Object_oEnemyRotHive_Other_76(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 **ppuVar9;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined4 local_24;
  
  local_50 = "gml_Object_oEnemyRotHive_Step_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_24 = 0xffffff;
  local_30 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_48 = 3;
  FUN_140e98b30(param_1,param_2);
  local_48 = 5;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar4,DAT_1419f5df8,0x80000000,&local_30,(ulonglong)pcVar6 & 0xffffffffffffff00,
                in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  uStack_7c = DAT_141dd8e24;
  uStack_80 = DAT_141dd8e20;
  if ((1 << ((byte)DAT_141dd8e24 & 0x1f) & 0x46U) == 0) {
    local_88 = DAT_141dd8e18;
  }
  else {
    FUN_1400419b0(&local_88,&DAT_141dd8e18);
  }
  uVar4 = FUN_140069500(uVar4);
  puVar5 = &local_30;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_98,0,puVar5,0);
  uVar8 = (undefined4)((ulonglong)puVar5 >> 0x20);
  iVar2 = FUN_140e851f0(uVar4,&local_88,DAT_141955260,0);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (iVar2 == 0) {
    local_48 = 6;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09a08);
    if (puVar5 != &local_78) {
      local_88 = *puVar5;
      uStack_80 = *(undefined4 *)(puVar5 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_88);
    }
    local_40 = &local_78;
    ppuVar9 = &local_40;
    uVar3 = DAT_141a09ab8;
  }
  else {
    local_48 = 7;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09a08);
    if (puVar5 != &local_78) {
      local_88 = *puVar5;
      uStack_80 = *(undefined4 *)(puVar5 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_88);
    }
    local_40 = &local_78;
    uVar7 = CONCAT44(uVar8,DAT_141a07828);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_98,1,uVar7,&local_40);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') goto LAB_140a55f76;
    local_48 = 8;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09a08);
    if (puVar5 != &local_68) {
      local_88 = *puVar5;
      uStack_80 = *(undefined4 *)(puVar5 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      FUN_140041b80(&local_68,&local_88);
    }
    local_38 = &local_68;
    ppuVar9 = &local_38;
    uVar3 = DAT_141a09ac8;
  }
  FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar8,uVar3),ppuVar9);
LAB_140a55f76:
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_30);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

