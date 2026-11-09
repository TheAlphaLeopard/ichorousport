// gml_Script____struct___262_anon_21763_DefineTrinkets_TRINKETSINIT @ 0x1405fc5c0

undefined8 *
gml_Script____struct___262_anon_21763_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong **pplVar5;
  uint uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffed0;
  longlong ***ppplVar11;
  ulonglong uVar12;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  uint local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  byte local_ec;
  longlong *local_e8;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *local_98;
  longlong **local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_54;
  
  local_70 = "gml_Script_anon@21361@DefineTrinkets@TRINKETSINIT";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x34c;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_f8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_54 = 0xffffff;
  local_60 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a572b0);
  local_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x34d;
  puVar7 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_140e87440(puVar3,DAT_1419f5be8,0x80000000,&local_88,uVar9,in_stack_fffffffffffffed0);
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_88,DAT_1419f6238,0x80000000,&local_b8,uVar9,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  uStack_9c = local_ac;
  uStack_a0 = local_b0;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_a8 = local_b8;
  }
  else {
    FUN_1400419b0(&local_a8,&local_b8);
  }
  uStack_11c = 0;
  local_128 = (longlong *)0x4000000000000000;
  FUN_140046500(&local_a8,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = local_a8;
  uStack_120 = uStack_a0;
  uStack_11c = uStack_9c;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_128);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_90 = &local_e8;
  ppplVar11 = &local_90;
  uVar9 = CONCAT44(uVar10,DAT_1419fe728);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar9,ppplVar11);
  if (puVar3 != &local_c8) {
    local_128 = (longlong *)*puVar3;
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_128);
  }
  if (0 < param_4) {
    puVar7 = (undefined8 *)*param_5;
  }
  uVar12 = (ulonglong)ppplVar11 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_1419f5be8,0x80000000,&local_88,uVar9,uVar12);
  FUN_140e87930(&local_88,DAT_1419f6238,0x80000000,&local_c8);
  local_68 = 0x34e;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5ff8,0x80000000,&local_118,uVar9,uVar12);
  uVar6 = local_10c & 0xffffff;
  if (uVar6 != 0) {
    if (uVar6 == 1) {
      local_118 = (double)FUN_140e4b060(&local_118);
      local_10c = 0;
    }
    else {
      if (uVar6 == 7) {
        local_118 = (double)CONCAT44(local_118._4_4_,local_118._0_4_ + 1);
        goto LAB_1405fc91d;
      }
      if (uVar6 == 10) {
        local_118 = (double)((longlong)local_118 + 1);
        goto LAB_1405fc91d;
      }
      if (uVar6 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_118,&local_118);
        goto LAB_1405fc91d;
      }
      local_10c = 0;
    }
  }
  local_118 = local_118 + 1.0;
LAB_1405fc91d:
  FUN_140e87930(uVar4,DAT_1419f5ff8,0x80000000,&local_118);
  local_68 = 0x34f;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5ff8,0x80000000,&local_60,uVar9,uVar12 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  uStack_11c = 0;
  local_128 = (longlong *)0x4000000000000000;
  uVar6 = FUN_140e851f0(&local_60,&local_128,DAT_141955260,1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (uVar6 < 0x80000000) {
    local_68 = 0x350;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    if (puVar2 != &local_f8) {
      local_128 = (longlong *)*puVar2;
      uStack_120 = *(undefined4 *)(puVar2 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_128);
    }
    local_98 = &local_f8;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_dc = 6;
    local_e8 = param_1;
    uVar4 = FUN_140e5c910();
    FUN_140e42c10(uVar4,param_1);
    local_90 = &local_e8;
    uVar4 = CONCAT44(uVar10,DAT_141a573f0);
    pplVar5 = (longlong **)FUN_140e634e0(param_1,param_2,&local_108,2,uVar4,&local_98);
    uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (pplVar5 != &local_d8) {
      local_128 = *pplVar5;
      uStack_120 = *(undefined4 *)(pplVar5 + 1);
      uStack_11c = *(undefined4 *)((longlong)pplVar5 + 0xc);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_128);
    }
    local_68 = 0x351;
    uStack_11c = 0;
    local_128 = (longlong *)&DAT_bff0000000000000;
    iVar1 = FUN_140e851f0(&local_d8,&local_128,DAT_141955260,0);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (iVar1 != 0) {
      local_68 = 0x352;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      if (puVar2 != &local_f8) {
        local_128 = (longlong *)*puVar2;
        uStack_120 = *(undefined4 *)(puVar2 + 1);
        uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_128);
      }
      local_98 = &local_f8;
      local_90 = &local_d8;
      FUN_140e634e0(param_1,param_2,&local_108,2,CONCAT44(uVar10,DAT_1419f5938),&local_98);
    }
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

