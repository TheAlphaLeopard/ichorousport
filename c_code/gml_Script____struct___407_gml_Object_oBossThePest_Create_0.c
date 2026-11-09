// gml_Script____struct___407_gml_Object_oBossThePest_Create_0 @ 0x140832750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script____struct___407_gml_Object_oBossThePest_Create_0
               (longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  ulonglong in_stack_ffffffffffffff20;
  ulonglong uVar7;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_50 = "gml_Object_oBossThePest_Step_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  _eh_vector_constructor_iterator_(&local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_48 = 3;
  FUN_140e98b30(param_1,param_2);
  local_48 = 5;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09cd8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09cd8);
  if (puVar2 != &local_a8) {
    local_d8 = *puVar2;
    uStack_d0 = *(undefined4 *)(puVar2 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_d8);
  }
  local_40 = &local_a8;
  local_d8 = CONCAT44(uRam0000000141dc6a44,_DAT_141dc6a40);
  uStack_d0 = uRam0000000141dc6a48;
  uStack_cc = uRam0000000141dc6a4c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_38 = local_98;
  local_d8 = CONCAT44(uRam00000001419e8ba4,_DAT_1419e8ba0);
  uStack_d0 = uRam00000001419e8ba8;
  uStack_cc = uRam00000001419e8bac;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_30 = local_88;
  FUN_140e609c0(param_1);
  ppuVar6 = &local_40;
  puVar2 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_c8,3,ppuVar6);
  if (puVar2 != puVar3) {
    local_d8 = *puVar2;
    uStack_d0 = *(undefined4 *)(puVar2 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_d8);
  }
  FUN_140e60910(1);
  local_48 = 7;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a057c8);
  uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_d8,puVar2);
  }
  FUN_140042560(&local_d8,uVar5);
  iVar1 = FUN_140e851f0(uVar4,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (iVar1 != -2 && iVar1 < 1) {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab48);
    uStack_cc = 0;
    local_d8 = 0;
    iVar1 = FUN_140e851f0(uVar4,&local_d8,DAT_141955260,0);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if (iVar1 == 0) {
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar4,DAT_1419f5df8,0x80000000,&local_68,(ulonglong)ppuVar6 & 0xffffffffffffff00
                    ,in_stack_ffffffffffffff20 & 0xffffffffffffff00);
      uStack_cc = DAT_141dd6dc4;
      uStack_d0 = DAT_141dd6dc0;
      if ((1 << ((byte)DAT_141dd6dc4 & 0x1f) & 0x46U) == 0) {
        local_d8 = DAT_141dd6db8;
      }
      else {
        FUN_1400419b0(&local_d8,&DAT_141dd6db8);
      }
      uVar4 = FUN_140069500(uVar4);
      uVar7 = 0;
      puVar2 = &local_68;
      uVar4 = FUN_140e63610(uVar4,param_2,&local_c8,0,puVar2,0);
      iVar1 = FUN_140e851f0(uVar4,&local_d8,DAT_141955260,0);
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if (iVar1 == 0) {
        local_48 = 9;
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        local_b8 = 0;
        local_b0 = 0;
        local_ac = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
        FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_78,
                      (ulonglong)puVar2 & 0xffffffffffffff00,uVar7 & 0xffffffffffffff00);
        local_d8 = CONCAT44(uRam0000000141dd6dcc,_DAT_141dd6dc8);
        uStack_d0 = uRam0000000141dd6dd0;
        uStack_cc = DAT_141dd6dd4;
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_d8);
        local_40 = &local_a8;
        uVar4 = FUN_140069500(uVar4);
        FUN_140e63610(uVar4,param_2,&local_b8,1,&local_78,&local_40);
      }
    }
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

