// gml_Script_anon_17161____struct___462_gml_Object_oEnemyDamsel_Create_0 @ 0x14098e770

undefined8 *
gml_Script_anon_17161____struct___462_gml_Object_oEnemyDamsel_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  bool bVar8;
  ulonglong in_stack_ffffffffffffff28;
  ulonglong in_stack_ffffffffffffff30;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 *local_a8;
  undefined4 uStack_9c;
  undefined1 *local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  
  local_70 = "gml_Script_anon@16992@___struct___461@gml_Object_oEnemyDamsel_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x298;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57420);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_68 = 0x299;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar5,DAT_141a0ab48,0x80000000,&local_b8,
                in_stack_ffffffffffffff28 & 0xffffffffffffff00,
                in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  uStack_9c = 0;
  local_a8 = (undefined1 *)0x3ff0000000000000;
  iVar3 = FUN_140e851f0(&local_b8,&local_a8,DAT_141955260,0);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (iVar3 == 0) {
    local_68 = 0x299;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
    ppuVar6 = (undefined1 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
    uStack_9c = 0;
    local_a8 = (undefined1 *)0x0;
    iVar3 = FUN_140e851f0(uVar5,&local_a8,DAT_141955260,1);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    bVar8 = iVar3 == -2 || -1 < iVar3;
    if (bVar8) {
      uStack_9c = 0;
      local_a8 = (undefined1 *)0x3ff0000000000000;
      ppuVar7 = &local_a8;
    }
    else {
      local_8c = 0;
      local_98 = &DAT_bff0000000000000;
      ppuVar7 = &local_98;
    }
    uVar2 = local_8c;
    uVar1 = uStack_9c;
    FUN_140e609c0(param_1);
    if (ppuVar7 != ppuVar6) {
      local_88 = *(undefined4 *)ppuVar7;
      uStack_84 = *(undefined4 *)((longlong)ppuVar7 + 4);
      uStack_80 = *(undefined4 *)(ppuVar7 + 1);
      uStack_7c = *(undefined4 *)((longlong)ppuVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar6);
      }
      FUN_140041b80(ppuVar6,&local_88);
    }
    if ((bVar8) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_a8);
    }
    if ((iVar3 != -2 && -1 >= iVar3) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_98);
    }
    FUN_140e60910(1);
  }
  local_68 = 0x29a;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0x3ff0000000000000;
  local_68 = 0x29c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a11d08);
  FUN_140e63610(param_1,param_2,&local_c8,0,uVar5,0);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

