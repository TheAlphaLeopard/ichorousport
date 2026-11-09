// gml_Script_anon_664_gml_Object_oBossThePest_Create_0 @ 0x14080d980

undefined8 *
gml_Script_anon_664_gml_Object_oBossThePest_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 *local_res8;
  undefined *puVar5;
  ulonglong uVar6;
  undefined4 uVar8;
  undefined *puVar7;
  ulonglong in_stack_ffffffffffffff30;
  undefined1 **ppuVar9;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_80 = "gml_Script_anon@434@gml_Object_oBossThePest_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x1b;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_2c = 0;
  local_38 = 0;
  local_9c = 0;
  local_a8 = 0;
  local_3c = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x1c;
  puVar5 = &DAT_1419e8b30;
  puVar2 = (undefined8 *)FUN_140e8da20(&local_38,param_1,2,&DAT_1419e8b20,&DAT_1419e8b30);
  uVar4 = 0xffffff;
  if (puVar2 != &local_b8) {
    local_c8 = *puVar2;
    uStack_c0 = *(undefined4 *)(puVar2 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    FUN_140041b80(&local_b8,&local_c8);
    uVar4 = uStack_ac;
  }
  local_78 = 0x1d;
  uStack_bc = 6;
  ppuVar9 = (undefined1 **)(in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  uVar6 = (ulonglong)puVar5 & 0xffffffffffffff00;
  local_c8 = param_1;
  FUN_140e87440(&local_c8,DAT_141a0a728,0x80000000,&local_98,uVar6,ppuVar9);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  uStack_bc = 0xf;
  local_c8 = 0x100000100000375;
  iVar1 = FUN_140e851f0(&local_98,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar1 == 0) {
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uStack_bc = 6;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_c8 = param_1;
    FUN_140e87440(&local_c8,DAT_141a0cfc8,0x80000000,&local_68,uVar6,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar6 >> 0x20);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = local_68;
    uStack_c0 = uStack_60;
    uStack_bc = uStack_5c;
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_c8);
    local_res8 = local_58;
    ppuVar9 = &local_res8;
    uVar6 = CONCAT44(uVar8,DAT_1419fe728);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_a8,1,uVar6,ppuVar9);
    uStack_bc = 0;
    local_c8 = 0x3ff0000000000000;
    iVar1 = FUN_140e851f0(uVar3,&local_c8,DAT_141955260,0);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if (iVar1 != 0) goto LAB_14080dc77;
    local_78 = 0x1e;
    puVar7 = &DAT_1419e8aa0;
    puVar5 = &DAT_1419e8b20;
    puVar2 = &local_48;
  }
  else {
LAB_14080dc77:
    local_78 = 0x1f;
    uStack_bc = 6;
    local_c8 = param_1;
    FUN_140e87440(&local_c8,DAT_141a0a728,0x80000000,&local_98,uVar6 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    uStack_bc = 0xf;
    local_c8 = 0x100000100000376;
    iVar1 = FUN_140e851f0(&local_98,&local_c8,DAT_141955260,0);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if (iVar1 != 0) goto LAB_14080dd80;
    local_78 = 0x20;
    puVar7 = &DAT_1419e8b60;
    puVar5 = &DAT_1419e8aa0;
    puVar2 = &local_a8;
  }
  puVar2 = (undefined8 *)FUN_140e8da20(puVar2,param_1,2,puVar5,puVar7);
  if (puVar2 != &local_b8) {
    local_c8 = *puVar2;
    uStack_c0 = *(undefined4 *)(puVar2 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_c8);
    uVar4 = uStack_ac;
  }
LAB_14080dd80:
  local_78 = 0x22;
  if (&local_b8 != param_3) {
    local_c8 = local_b8;
    uStack_c0 = uStack_b0;
    uStack_bc = uStack_ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

