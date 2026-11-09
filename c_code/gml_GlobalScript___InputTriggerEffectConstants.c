// gml_GlobalScript___InputTriggerEffectConstants @ 0x1400d9cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputTriggerEffectConstants
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 *local_68;
  undefined1 *local_60;
  
  local_c0 = "gml_Script___InputTriggerEffectClassWeapon";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 3;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc89c) {
    _Init_thread_header(&DAT_141ddc89c);
    if (DAT_141ddc89c == -1) {
      DAT_141ddc8a0 = (longlong *)FUN_140e63aa0(DAT_141a037d8);
      _Init_thread_footer(&DAT_141ddc89c);
    }
  }
  if (DAT_141ddc062 == '\0') {
    FUN_140e64380(DAT_141ddc8a0,"gml_Script___InputTriggerEffectClassWeapon");
    FUN_140e64380(param_1,"gml_Script___InputTriggerEffectClassWeapon");
  }
  FUN_140e643a0(param_1,DAT_141ddc8a0);
  local_b8 = 5;
  if (DAT_141ddc062 == '\0') {
    DAT_141ddc062 = '\x01';
    puVar2 = (undefined *)(**(code **)(*DAT_141ddc8a0 + 0x10))(DAT_141ddc8a0,DAT_141a03558);
    if (puVar2 != &DAT_141dcb178) {
      local_118 = _DAT_141dcb178;
      uStack_114 = uRam0000000141dcb17c;
      uStack_110 = uRam0000000141dcb180;
      uStack_10c = DAT_141dcb184;
      if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_118);
    }
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc8a0 + 0x10))(DAT_141ddc8a0,DAT_141a035c8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 10;
    *puVar3 = 2;
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc8a0 + 0x10))(DAT_141ddc8a0,DAT_141a035e8);
    FUN_140e609c0(DAT_141ddc8a0);
    FUN_140e645a0(&local_128,gml_Script___InputTriggerEffectClassWeapon,0);
    if (&local_128 != puVar3) {
      local_118 = (undefined4)local_128;
      uStack_114 = local_128._4_4_;
      uStack_110 = uStack_120;
      uStack_10c = uStack_11c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_118);
    }
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140e60910(1);
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc8a0 + 0x10))(DAT_141ddc8a0,DAT_141a03548);
    FUN_140e609c0(DAT_141ddc8a0);
    FUN_140e645a0(&local_128,gml_GlobalScript___InputTriggerEffectConfig,0);
    if (&local_128 != puVar3) {
      local_118 = (undefined4)local_128;
      uStack_114 = local_128._4_4_;
      uStack_110 = uStack_120;
      uStack_10c = uStack_11c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_118);
    }
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140e60910(1);
  }
  local_b8 = 8;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03588);
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_108,0,CONCAT44(uVar8,DAT_1419fd6d8),0)
  ;
  if (puVar5 != puVar4) {
    local_118 = *puVar5;
    uStack_114 = puVar5[1];
    uStack_110 = puVar5[2];
    uStack_10c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_118);
  }
  FUN_140e60910(1);
  local_b8 = 3;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03588);
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = *(undefined8 **)(param_5 + 8);
  }
  uStack_11c = *(uint *)((longlong)puVar7 + 0xc);
  uStack_120 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_128);
  }
  uStack_10c = 7;
  local_118 = 10;
  FUN_140042560(&local_128,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((uStack_11c & 0xffffff) == 0) {
    uVar8 = (undefined4)local_128;
  }
  else {
    uVar8 = FUN_140e4b060(&local_128);
  }
  uVar1 = FUN_140e78ec0(uVar8,0x4000000000000000,0x401c000000000000);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = uVar1;
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140e87930(uVar6,DAT_141a03908,0x80000000,&local_d8);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if (param_4 < 3) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = *(undefined8 **)(param_5 + 0x10);
  }
  uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_120 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_128);
  }
  uStack_10c = 7;
  local_118 = 10;
  FUN_140042560(&local_128,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = (undefined4)local_128;
  uStack_114 = local_128._4_4_;
  uStack_110 = uStack_120;
  uStack_10c = uStack_11c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_118);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_68 = local_a8;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = *(undefined8 **)(param_5 + 8);
  }
  uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_120 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_128);
  }
  uStack_10c = 7;
  local_118 = 10;
  FUN_140042560(&local_128,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = (undefined4)local_128;
  uStack_114 = local_128._4_4_;
  uStack_110 = uStack_120;
  uStack_10c = uStack_11c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_118);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_60 = local_98;
  if (param_4 < 3) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = *(undefined8 **)(param_5 + 0x10);
  }
  uStack_11c = *(uint *)((longlong)puVar7 + 0xc);
  uStack_120 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_128);
  }
  uStack_10c = 7;
  local_118 = 10;
  FUN_140042560(&local_128,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  puVar7 = (undefined8 *)FUN_140e79090(&local_108,2,&local_68);
  if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
    uVar6 = *puVar7;
  }
  else {
    uVar6 = FUN_140e4b060(puVar7);
  }
  if ((uStack_11c & 0xffffff) == 0) {
    uVar8 = (undefined4)local_128;
  }
  else {
    uVar8 = FUN_140e4b060(&local_128);
  }
  uVar6 = FUN_140e78ec0(uVar8,uVar6,0x4020000000000000);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = uVar6;
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03588);
  FUN_140e87930(uVar6,DAT_141a03918,0x80000000,&local_e8);
  if (3 < param_4) {
    puVar3 = *(undefined8 **)(param_5 + 0x18);
  }
  uStack_11c = *(uint *)((longlong)puVar3 + 0xc);
  uStack_120 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_128,puVar3);
  }
  uStack_10c = 7;
  local_118 = 8;
  FUN_140042560(&local_128,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((uStack_11c & 0xffffff) == 0) {
    uVar8 = (undefined4)local_128;
  }
  else {
    uVar8 = FUN_140e4b060(&local_128);
  }
  uVar6 = FUN_140e78ec0(uVar8,0,0x4020000000000000);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = uVar6;
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03588);
  FUN_140e87930(uVar6,DAT_141a03598,0x80000000,&local_f8);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

