// gml_Script_anon_5379_DefineStatus_STATUSINIT @ 0x1405c5320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_5379_DefineStatus_STATUSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 local_138;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  uint local_98 [3];
  byte local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  uint *local_68;
  
  local_f0 = "gml_Script_anon@4751@DefineStatus@STATUSINIT";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0xe3;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_fc = 0;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0xe4;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
  if (puVar2 != &DAT_141dd4678) {
    local_138 = CONCAT44(DAT_141dd4678._4_4_,(undefined4)DAT_141dd4678);
    uStack_130 = DAT_141dd4680;
    uStack_12c = DAT_141dd4684;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_138);
  }
  local_e8 = 0xe5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff108);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_e8 = 0xe6;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a9f8);
  FUN_140e609c0(param_1);
  uStack_12c = 0xf;
  local_138 = 0x1000001000002e6;
  if (&local_138 != puVar2) {
    local_128 = 0x2e6;
    uStack_124 = 0x1000001;
    uStack_120 = uStack_130;
    uStack_11c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_128);
  }
  FUN_140e60910(1);
  local_e8 = 0xe7;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff0f8);
  uStack_12c = 0xf;
  local_138 = 0x1000002000000bd;
  local_128 = 0xbd;
  uStack_124 = 0x1000002;
  uStack_120 = uStack_130;
  uStack_11c = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_88 = local_d8;
  uStack_12c = 0xf;
  local_138 = 0x1000002000000be;
  local_128 = 0xbe;
  uStack_124 = 0x1000002;
  uStack_120 = uStack_130;
  uStack_11c = 0xf;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_128);
  local_80 = local_c8;
  uStack_12c = 0xf;
  local_138 = 0x1000002000000bf;
  local_128 = 0xbf;
  uStack_124 = 0x1000002;
  uStack_120 = uStack_130;
  uStack_11c = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_128);
  local_78 = local_b8;
  local_128 = DAT_1419ef3f8 & 0xffffff;
  uStack_124 = (int)(DAT_1419ef3f8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_124 == 0xf) {
    uStack_124 = 0x4000004;
  }
  else {
    uStack_124 = uStack_124 | 0x1000000;
  }
  uStack_12c = 0xf;
  local_138 = CONCAT44(uStack_124,DAT_1419ef3f8) & 0xffffffff00ffffff;
  uStack_120 = uStack_130;
  uStack_11c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_128);
  local_70 = local_a8;
  uVar6 = CONCAT44(uVar9,DAT_1419fdca8);
  puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_118,3,uVar6,&local_88);
  uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar4 != local_98) {
    local_128 = *puVar4;
    uStack_124 = puVar4[1];
    uStack_120 = puVar4[2];
    uStack_11c = puVar4[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_128);
  }
  local_68 = local_98;
  FUN_140e609c0(param_1);
  puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_108,2,CONCAT44(uVar9,DAT_1419fd6d8),
                                 &local_70);
  if (puVar4 != puVar3) {
    local_128 = *puVar4;
    uStack_124 = puVar4[1];
    uStack_120 = puVar4[2];
    uStack_11c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_e8 = 0xe9;
  puVar5 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5838);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5da8);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5fc8);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
  uStack_12c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_130 = (uint)puVar5[1];
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_138,puVar5);
  }
  FUN_1400460e0(&local_138,uVar6);
  if ((*(uint *)((longlong)puVar2 + 0xc) & 0xffffff) == 0) {
    uVar6 = *puVar2;
  }
  else {
    uVar6 = FUN_140e4b060(puVar2);
  }
  if ((uStack_12c & 0xffffff) == 0) {
    uVar9 = (undefined4)local_138;
  }
  else {
    uVar9 = FUN_140e4b060(&local_138);
  }
  uVar6 = FUN_140e78ec0(uVar9,0,uVar6);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = uVar6;
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_e8 = 0xea;
  uVar1 = FUN_140e851f0(puVar5,puVar2,DAT_141955260,1);
  if (uVar1 < 0x80000000) {
    local_e8 = 0xec;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f5838);
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f5fc8);
    puVar8 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
    if (puVar8 != &DAT_141dd45a8) {
      local_128 = _DAT_141dd45a8;
      uStack_124 = uRam0000000141dd45ac;
      uStack_120 = uRam0000000141dd45b0;
      uStack_11c = DAT_141dd45b4;
      if ((1 << ((byte)*(undefined4 *)(puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_128);
    }
    local_e8 = 0xed;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a9f8);
    FUN_140e609c0(param_1);
    uStack_12c = 0xf;
    local_138 = 0x1000001000002e7;
    if (&local_138 != puVar2) {
      local_128 = 0x2e7;
      uStack_124 = 0x1000001;
      uStack_120 = uStack_130;
      uStack_11c = 0xf;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_128);
    }
    FUN_140e60910(1);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

