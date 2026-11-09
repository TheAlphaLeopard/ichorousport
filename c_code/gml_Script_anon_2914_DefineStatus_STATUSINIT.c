// gml_Script_anon_2914_DefineStatus_STATUSINIT @ 0x1405c27f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2914_DefineStatus_STATUSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  longlong *plVar11;
  undefined4 uVar12;
  ulonglong local_158;
  uint uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  uint uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  uint local_78 [3];
  byte local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  uint *local_48;
  
  local_100 = "gml_Script_anon@2464@DefineStatus@STATUSINIT";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x81;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_10c = 0;
  local_118 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x82;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff108);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_f8 = 0x83;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff318);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x403e000000000000;
  local_f8 = 0x85;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03598);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7d8);
  plVar11 = param_1;
  FUN_140e87170(uVar3,DAT_141a1f580,0x80000000,&local_f0,param_1,param_2);
  uVar12 = (undefined4)((ulonglong)plVar11 >> 0x20);
  uStack_14c = 0xf;
  local_158 = 0x1000000000000ee;
  iVar1 = FUN_140e851f0(&local_f0,&local_158,DAT_141955260,0);
  bVar10 = iVar1 != 0;
  if (bVar10) {
    local_d4 = 0;
    local_e0 = 0x4018000000000000;
    puVar9 = &local_e0;
  }
  else {
    local_c4 = 0;
    local_d0 = 0x3ff0000000000000;
    puVar9 = &local_d0;
  }
  FUN_140e609c0(param_1);
  uStack_12c = *(uint *)((longlong)puVar2 + 0xc);
  uStack_130 = *(uint *)(puVar2 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_138,puVar2);
  }
  FUN_140042560(&local_138,puVar9);
  if (&local_138 != puVar4) {
    local_148 = (uint)local_138;
    uStack_144 = local_138._4_4_;
    uStack_140 = uStack_130;
    uStack_13c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (bVar10) {
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
  }
  if (!bVar10) {
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e60910(1);
  local_f8 = 0x87;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7d8);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5fc8);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff318);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff248);
  FUN_140e609c0(param_1);
  uVar3 = FUN_140046e40(&local_158,uVar3,uVar5);
  uStack_12c = *(uint *)((longlong)puVar2 + 0xc);
  uStack_130 = *(uint *)(puVar2 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_138,puVar2);
  }
  FUN_140042560(&local_138,uVar3);
  if (&local_138 != puVar4) {
    local_148 = (uint)local_138;
    uStack_144 = local_138._4_4_;
    uStack_140 = uStack_130;
    uStack_13c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e60910(1);
  local_f8 = 0x88;
  puVar6 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff248);
  puVar7 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff058);
  FUN_140e609c0(param_1);
  if (puVar6 != puVar7) {
    local_148 = *puVar6;
    uStack_144 = puVar6[1];
    uStack_140 = puVar6[2];
    uStack_13c = puVar6[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_148);
  }
  FUN_140e60910(1);
  local_f8 = 0x8a;
  puVar8 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
  if (puVar8 != &DAT_141dd4658) {
    local_148 = _DAT_141dd4658;
    uStack_144 = uRam0000000141dd465c;
    uStack_140 = uRam0000000141dd4660;
    uStack_13c = DAT_141dd4664;
    if ((1 << ((byte)*(undefined4 *)(puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_148);
  }
  local_f8 = 0x8b;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar6 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff288);
  uStack_14c = 0xf;
  local_158 = 0x100000200000128;
  local_148 = 0x128;
  uStack_144 = 0x1000002;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_68 = local_b8;
  uStack_14c = 0xf;
  local_158 = 0x100000200000129;
  local_148 = 0x129;
  uStack_144 = 0x1000002;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_60 = local_a8;
  uStack_14c = 0xf;
  local_158 = 0x10000020000012a;
  local_148 = 0x12a;
  uStack_144 = 0x1000002;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_148);
  local_58 = local_98;
  local_148 = DAT_1419ef3f8 & 0xffffff;
  uStack_144 = (int)(DAT_1419ef3f8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_144 == 0xf) {
    uStack_144 = 0x4000004;
  }
  else {
    uStack_144 = uStack_144 | 0x1000000;
  }
  uStack_14c = 0xf;
  local_158 = CONCAT44(uStack_144,DAT_1419ef3f8) & 0xffffffff00ffffff;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_148);
  uVar3 = CONCAT44(uVar12,DAT_1419fdca8);
  local_50 = local_88;
  puVar7 = (uint *)FUN_140e634e0(param_1,param_2,&local_128,3,uVar3,&local_68);
  uVar12 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar7 != local_78) {
    local_148 = *puVar7;
    uStack_144 = puVar7[1];
    uStack_140 = puVar7[2];
    uStack_13c = puVar7[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_148);
  }
  local_48 = local_78;
  FUN_140e609c0(param_1);
  puVar7 = (uint *)FUN_140e634e0(param_1,param_2,&local_118,2,CONCAT44(uVar12,DAT_1419fd6d8),
                                 &local_50);
  if (puVar7 != puVar6) {
    local_148 = *puVar7;
    uStack_144 = puVar7[1];
    uStack_140 = puVar7[2];
    uStack_13c = puVar7[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_148);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

