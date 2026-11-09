// gml_Script_anon_41923_DefineTrinkets_TRINKETSINIT @ 0x140619af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_41923_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_fffffffffffffed0;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_f0 = "gml_Script_anon@41316@DefineTrinkets@TRINKETSINIT";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x5bd;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x5be;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ffd98,0x80000000,&local_a8,uVar6,in_stack_fffffffffffffed0);
  uStack_11c = 0;
  local_128 = 0xc010000000000000;
  iVar2 = FUN_140e851f0(&local_a8,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar2 == 0) {
    local_e8 = 0x5be;
    goto LAB_14061a07c;
  }
  local_e8 = 0x5bf;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ffd98,0x80000000,&local_a8,uVar6,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  local_128 = local_a8;
  uStack_120 = uStack_a0;
  uStack_11c = uStack_9c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_128);
  local_58 = local_98;
  uVar6 = CONCAT44(uVar7,DAT_141a02ef8);
  ppuVar8 = &local_58;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_118,1,uVar6,&local_58);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_e8 = 0x5bf;
    goto LAB_14061a07c;
  }
  local_e8 = 0x5c1;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ff838,0x80000000,&local_c0,uVar6,uVar9);
  uStack_11c = 0;
  local_128 = 0;
  iVar2 = FUN_140e851f0(&local_c0,&local_128,DAT_141955260,1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar2 < 1) {
    local_e8 = 0x5c3;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    FUN_140e87440(uVar3,DAT_1419ff7e8,0x80000000,&local_78,uVar6 & 0xffffffffffffff00,
                  uVar9 & 0xffffffffffffff00);
    cVar1 = FUN_140e491e0(&local_78);
    if (cVar1 == '\0') {
      local_e8 = 0x5c4;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_fc = 0;
      local_108 = 0;
      goto LAB_14061a010;
    }
  }
  else {
    local_e8 = 0x5c2;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uVar9 = uVar9 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419ffe48,0x80000000,&local_d0,uVar6,uVar9);
    FUN_140e87440(uVar3,DAT_1419ff838,0x80000000,&local_c0,uVar6 & 0xffffffffffffff00,
                  uVar9 & 0xffffffffffffff00);
    uStack_11c = local_c4;
    uStack_120 = local_c8;
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) == 0) {
      local_128 = local_d0;
    }
    else {
      FUN_1400419b0(&local_128,&local_d0);
    }
    FUN_1400460e0(&local_128,&local_c0);
    local_68 = (undefined4)local_128;
    uStack_64 = local_128._4_4_;
    uStack_60 = uStack_120;
    uStack_5c = uStack_11c;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_68);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_58 = local_98;
    local_68 = _DAT_1419e6a10;
    uStack_64 = uRam00000001419e6a14;
    uStack_60 = uRam00000001419e6a18;
    uStack_5c = uRam00000001419e6a1c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_68);
    local_50 = local_88;
    puVar4 = (undefined8 *)FUN_140e79230(&local_118,2,&local_58);
    if (puVar4 != &local_108) {
      local_68 = *(undefined4 *)puVar4;
      uStack_64 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_60 = *(undefined4 *)(puVar4 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_68);
    }
LAB_14061a010:
    FUN_140e87930(uVar3,DAT_1419ffe48,0x80000000,&local_108);
  }
  local_e8 = 0x5c6;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  local_d4 = 0;
  local_e0 = 0xc010000000000000;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87930(uVar3,DAT_1419ffd98,0x80000000,&local_e0);
LAB_14061a07c:
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

