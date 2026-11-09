// gml_Script_anon_16175_DefineBuffs_OFFERINGSINIT @ 0x1403d3230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_16175_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 *local_50 [3];
  
  local_80 = "gml_Script_anon@14989@DefineBuffs@OFFERINGSINIT";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 599;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x259;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
  }
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  FUN_140e87440(puVar3,DAT_1419f0378,0x80000000,&local_98,uVar7,in_stack_fffffffffffffef0);
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419f5f58,0x80000000,&local_a8,uVar7,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar7 >> 0x20);
  iVar1 = FUN_140e851f0(&local_98,&local_a8,DAT_141955260,0);
  if (iVar1 == 0) {
    local_78 = 0x25b;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    local_f8 = CONCAT44(uRam0000000141dc6554,_DAT_141dc6550);
    uStack_f0 = uRam0000000141dc6558;
    uStack_ec = uRam0000000141dc655c;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_f8);
    local_50[0] = local_70;
    if (0 < param_4) {
      puVar5 = (undefined8 *)*param_5;
    }
    local_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    local_100 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
      local_108 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_108,puVar5);
    }
    uStack_ec = 0;
    local_f8 = 0x3fd999999999999a;
    FUN_140042560(&local_108,&local_f8);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uVar2 = FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar4,DAT_141a0a0d8),local_50);
    uStack_cc = local_fc;
    uStack_d0 = local_100;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
      local_d8 = local_108;
    }
    else {
      FUN_1400419b0(&local_d8,&local_108);
    }
    FUN_140042560(&local_d8,uVar2);
    local_f8 = local_d8;
    uStack_f0 = uStack_d0;
    uStack_ec = uStack_cc;
    FUN_140041b80(&local_b8,&local_f8);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_78 = 0x25d;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    local_f8 = local_b8;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
    FUN_140e87930(uVar2,DAT_141a0a848,0x80000000,&local_c8);
    uVar4 = uStack_ac;
  }
  else {
    local_78 = 0x259;
    uVar4 = 0xffffff;
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

