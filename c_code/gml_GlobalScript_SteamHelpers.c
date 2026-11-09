// gml_GlobalScript_SteamHelpers @ 0x1405d0e90

undefined8 * gml_GlobalScript_SteamHelpers(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  
  local_80 = "gml_Script_anon@14250@DefineStatus@STATUSINIT";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_44 = 0xffffff;
  local_50 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x286;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar5 = param_1;
  FUN_140e87170(uVar2,DAT_141a1f580,0x80000000,&local_50,param_1,param_2);
  uStack_ec = 0xf;
  local_f8 = 0x1000000000000ee;
  iVar1 = FUN_140e851f0(&local_50,&local_f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (iVar1 == 0) {
    local_78 = 0x287;
    uVar2 = (**(code **)(*param_1 + 8))();
    param_2 = param_2 & 0xffffffffffffff00;
    uVar6 = (ulonglong)plVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_1419f5ba8,0x80000000,&local_60,uVar6,param_2);
    uStack_ec = 0;
    local_f8 = 0x4000000000000000;
    FUN_140046500(&local_60,&local_f8);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140e87930(uVar2,DAT_1419f5ba8,0x80000000,&local_60);
    local_78 = 0x288;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff048);
    if (puVar3 != &local_98) {
      local_f8 = *puVar3;
      uStack_f0 = *(undefined4 *)(puVar3 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_f8);
    }
    FUN_140e87930(uVar2,DAT_1419ff178,0x80000000,&local_98);
    local_78 = 0x289;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_9c = 0;
    local_a8 = 0x3ff0000000000000;
    FUN_140e87930(uVar2,DAT_1419ff368,0x80000000,&local_a8);
    local_78 = 0x28a;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    FUN_140e87440(uVar2,DAT_1419ff298,0x80000000,&local_70,uVar6 & 0xffffffffffffff00,
                  param_2 & 0xffffffffffffff00);
    uStack_ec = 0;
    local_f8 = 0x4000000000000000;
    FUN_140046500(&local_70,&local_f8);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140e87930(uVar2,DAT_1419ff298,0x80000000,&local_70);
    local_78 = 0x28b;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_ac = 0;
    local_b8 = 0x3ff0000000000000;
    puVar3 = &local_b8;
    uVar4 = DAT_1419ff028;
  }
  else {
    local_78 = 0x28d;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff088);
    if (puVar3 != &local_c8) {
      local_f8 = *puVar3;
      uStack_f0 = *(undefined4 *)(puVar3 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_f8);
    }
    FUN_140e87930(uVar2,DAT_1419ff2d8,0x80000000,&local_c8);
    local_78 = 0x28e;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff0b8);
    if (puVar3 != &local_d8) {
      local_f8 = *puVar3;
      uStack_f0 = *(undefined4 *)(puVar3 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_f8);
    }
    FUN_140e87930(uVar2,DAT_1419f62a8,0x80000000,&local_d8);
    local_78 = 0x28f;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff128);
    if (puVar3 != &local_e8) {
      local_f8 = *puVar3;
      uStack_f0 = *(undefined4 *)(puVar3 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_f8);
    }
    puVar3 = &local_e8;
    uVar4 = DAT_1419ff328;
  }
  FUN_140e87930(uVar2,uVar4,0x80000000,puVar3);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

