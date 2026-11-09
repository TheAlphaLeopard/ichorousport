// gml_Script_OwnerId @ 0x1402758a0

undefined8 * gml_Script_OwnerId(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *local_res18;
  undefined4 uVar7;
  ulonglong uVar6;
  undefined8 **ppuVar8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  byte local_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_50 = "gml_Script_OwnerX";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x24;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  bVar2 = true;
  bVar1 = false;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x26;
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (puVar4 != &local_88) {
    local_78 = (longlong *)*puVar4;
    uStack_70 = *(undefined4 *)(puVar4 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_78);
  }
  local_res18 = &local_88;
  ppuVar8 = &local_res18;
  uVar6 = CONCAT44(uVar7,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_68,1,uVar6,ppuVar8);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 == '\0') {
    uStack_6c = 6;
    local_78 = param_1;
    FUN_140e87440(&local_78,DAT_1419fe0e8,0x80000000,&local_c8,uVar6 & 0xffffffffffffff00,
                  (ulonglong)ppuVar8 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    local_9c = local_bc;
    local_a0 = local_c0;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
      local_a8 = local_c8;
    }
    else {
      FUN_1400419b0(&local_a8,&local_c8);
    }
    puVar4 = &local_a8;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_b8,param_1,param_2);
    uStack_8c = local_ac;
    uStack_90 = local_b0;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
      local_98 = local_b8;
    }
    else {
      FUN_1400419b0(&local_98,&local_b8);
    }
    puVar4 = &local_98;
  }
  if (puVar4 != param_3) {
    local_40 = *(undefined4 *)puVar4;
    uStack_3c = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_38 = *(undefined4 *)(puVar4 + 1);
    uStack_34 = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_40);
  }
  if (bVar1) {
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
  }
  if ((bVar2) && ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

