// gml_GlobalScript___InputTriggerEffectConfig @ 0x1400d95c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputTriggerEffectConfig
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  byte local_bc;
  double local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  double *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  local_80 = 
  "gml_Script___SteamGetState@anon@1044@__InputTriggerEffectClassWeapon@__InputTriggerEffectClassWeapon"
  ;
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x15;
  _eh_vector_constructor_iterator_(&local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_dc = 0;
  local_e8 = 0;
  uVar6 = 5;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x17;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 == &local_a8) goto LAB_1400d96c9;
  }
  local_118 = *puVar4;
  uStack_110 = puVar4[1];
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_118);
LAB_1400d96c9:
  local_60 = &local_a8;
  if ((param_4 < 2) || (puVar5 = (undefined8 *)param_5[1], puVar5 != &local_98)) {
    local_118 = *puVar5;
    uStack_110 = puVar5[1];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_118);
  }
  local_58 = &local_98;
  ppuVar7 = &local_60;
  puVar5 = (undefined8 *)gml_Script_InputDeviceGetNewActivity(param_1,param_2,&local_f8,2,ppuVar7);
  uVar9 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
  if (puVar5 != &local_d8) {
    local_118 = *puVar5;
    uStack_110 = puVar5[1];
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_118);
  }
  local_78 = 0x18;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03588);
  if (puVar5 != &local_c8) {
    local_118 = *puVar5;
    uStack_110 = puVar5[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_118);
  }
  iVar1 = DAT_141a03918;
  local_70 = &local_c8;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = (double)iVar1;
  local_68 = &local_b8;
  local_118 = _DAT_1419e1b20;
  uStack_110 = uRam00000001419e1b28;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_118);
  local_60 = &local_a8;
  uVar8 = CONCAT44(uVar9,DAT_141a035d8);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,2,uVar8,&local_70);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_100 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_108,puVar5);
  }
  uStack_110._4_4_ = 7;
  local_118 = CONCAT44(local_118._4_4_,2);
  FUN_1400460e0(&local_108,&local_118);
  if ((1 << ((byte)uStack_110._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  uStack_110 = CONCAT44(uStack_fc,uStack_100);
  local_118 = local_108;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_118);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_58 = &local_98;
  puVar5 = (undefined8 *)FUN_140e79230(&local_f8,2,&local_60);
  uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_100 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_108,puVar5);
  }
  uStack_110 = uStack_110 & 0xffffffff;
  local_118 = 0x4024000000000000;
  FUN_140046500(&local_108,&local_118);
  if ((1 << ((byte)(uStack_110 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  iVar1 = FUN_140e851f0(&local_d8,&local_108,DAT_141955260,1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (iVar1 < 1) {
    local_78 = 0x1c;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03588);
    if (puVar5 != &local_c8) {
      local_118 = *puVar5;
      uStack_110 = puVar5[1];
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_118);
    }
    iVar1 = DAT_141a03908;
    local_70 = &local_c8;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_ac = 0;
    local_b8 = (double)iVar1;
    local_68 = &local_b8;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_f8,2,CONCAT44(uVar9,DAT_141a035d8),&local_70);
    uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_100 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
      local_108 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_108,puVar5);
    }
    uStack_110 = uStack_110 & 0xffffffff;
    local_118 = 0x4024000000000000;
    FUN_140046500(&local_108,&local_118);
    if ((1 << ((byte)(uStack_110 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    uVar2 = FUN_140e851f0(&local_d8,&local_108,DAT_141955260,1);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    uVar3 = 1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f);
    if (uVar2 < 0x80000000) {
      local_78 = 0x1e;
      if ((uVar3 & 0x46) != 0) {
        FUN_140041a50(param_3);
      }
      uVar6 = 4;
    }
    else {
      local_78 = 0x21;
      if ((uVar3 & 0x46) != 0) {
        FUN_140041a50(param_3);
      }
      uVar6 = 3;
    }
  }
  else {
    local_78 = 0x1a;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 10;
  *param_3 = uVar6;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

