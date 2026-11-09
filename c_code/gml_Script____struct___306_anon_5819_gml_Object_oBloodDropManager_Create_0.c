// gml_Script____struct___306_anon_5819_gml_Object_oBloodDropManager_Create_0 @ 0x1406b4600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___306_anon_5819_gml_Object_oBloodDropManager_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 *local_res18 [2];
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong in_stack_ffffffffffffff10;
  undefined1 **ppuVar11;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Script_animate@anon@5549@anon@621@gml_Object_oBloodDropManager_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0xf5;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0xf6;
  uStack_dc = 6;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_141a0a728,0x80000000,&local_88,uVar9,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_a8 = (undefined4)local_88;
  uStack_a4 = local_88._4_4_;
  uStack_a0 = uStack_80;
  uStack_9c = uStack_7c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_a8);
  local_res18[0] = local_b8;
  ppuVar11 = local_res18;
  uVar9 = CONCAT44(uVar5,DAT_141a09fe8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,1,uVar9,ppuVar11);
  if (puVar3 != &local_98) {
    local_a8 = *(undefined4 *)puVar3;
    uStack_a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_a0 = *(undefined4 *)(puVar3 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_a8);
  }
  local_58 = 0xf7;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uStack_dc = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_141a0a728,0x80000000,&local_88,uVar9,
                (ulonglong)ppuVar11 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_a8 = (undefined4)local_88;
  uStack_a4 = local_88._4_4_;
  uStack_a0 = uStack_80;
  uStack_9c = uStack_7c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_a8);
  local_res18[0] = local_b8;
  ppuVar11 = local_res18;
  uVar9 = CONCAT44(uVar5,DAT_141a0a068);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,1,uVar9,ppuVar11);
  uVar7 = 0;
  uVar5 = 0xffffff;
  if (puVar3 != &local_c8) {
    local_a8 = *(undefined4 *)puVar3;
    uStack_a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_a0 = *(undefined4 *)(puVar3 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
    FUN_140041b80(&local_c8,&local_a8);
    uVar7 = local_c8;
    uVar5 = local_bc;
  }
  local_58 = 0xf8;
  uStack_dc = 0;
  local_e8 = 0;
  iVar1 = FUN_140e851f0(&local_98,&local_e8,DAT_141955260,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (iVar1 == 0) {
    local_58 = 0xf9;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    uVar10 = (undefined4)(uVar9 >> 0x20);
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    local_a8 = _DAT_141dc6800;
    uStack_a4 = uRam0000000141dc6804;
    uStack_a0 = uRam0000000141dc6808;
    uStack_9c = uRam0000000141dc680c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_a8);
    local_res18[0] = local_b8;
    ppuVar11 = local_res18;
    uVar9 = CONCAT44(uVar10,DAT_141a0a0d8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar9,ppuVar11);
    uStack_e0 = local_c0;
    uStack_dc = uVar5;
    if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) == 0) {
      local_e8 = uVar7;
      FUN_140046500(&local_e8,uVar4);
      local_a8 = (undefined4)local_e8;
      uStack_a4 = local_e8._4_4_;
      uStack_a0 = uStack_e0;
      uStack_9c = uStack_dc;
    }
    else {
      FUN_1400419b0(&local_e8,&local_c8);
      FUN_140046500(&local_e8,uVar4);
      local_a8 = (undefined4)local_e8;
      uStack_a4 = local_e8._4_4_;
      uStack_a0 = uStack_e0;
      uStack_9c = uStack_dc;
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_a8);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    uVar7 = local_c8;
    uVar5 = local_bc;
  }
  local_58 = 0xfb;
  uStack_dc = 6;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_141a0cfc8,0x80000000,&local_78,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar11 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uStack_e0 = local_c0;
  uVar6 = 1 << ((byte)uVar5 & 0x1f) & 0x46;
  uStack_dc = uVar5;
  if (uVar6 == 0) {
    local_e8 = uVar7;
  }
  else {
    FUN_1400419b0(&local_e8,&local_c8);
  }
  FUN_140042560(&local_e8,uVar2);
  FUN_1400460e0(&local_78,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_78);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (uVar6 != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

