// gml_Script_anon_7164_SnowState_SnowState @ 0x1404f6c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_anon_7164_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined8 *local_70;
  undefined1 *local_68;
  uint local_60 [2];
  undefined8 *local_58;
  
  local_a0 = "gml_Script_anon@6376@SnowState@SnowState";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0xd8;
  FUN_140041df0(local_60,param_4,2,param_5);
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_90,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0xd8;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_60[0];
  if ((int)local_60[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_58[1];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  uVar7 = 0x3ff00000;
  if (iVar2 == 0) {
    local_98 = 0xd8;
    uStack_dc = 0xd;
    local_e8 = 0x3ff0000000000000;
    if (((int)local_60[0] < 2) || (puVar5 = (undefined8 *)local_58[1], &local_e8 != puVar5)) {
      local_b8 = 0;
      uStack_b4 = 0x3ff00000;
      uStack_b0 = uStack_e0;
      uStack_ac = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_b8);
    }
  }
  local_98 = 0xd9;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
  if (puVar5 != &local_f8) {
    local_b8 = *(undefined4 *)puVar5;
    uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_b0 = *(undefined4 *)(puVar5 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_b8);
  }
  local_98 = 0xda;
  if ((int)local_60[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_58[1];
  }
  cVar1 = FUN_140e491e0(puVar5);
  if (cVar1 == '\0') {
    local_98 = 0xdb;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcd68);
    if (puVar5 != &local_f8) {
      local_b8 = *(undefined4 *)puVar5;
      uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_b0 = *(undefined4 *)(puVar5 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_b8);
    }
  }
  local_98 = 0xde;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((int)local_60[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1404f6e93:
    local_b8 = *(undefined4 *)puVar5;
    uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_b0 = *(undefined4 *)(puVar5 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_b8);
  }
  else {
    puVar5 = (undefined8 *)*local_58;
    if (puVar5 != &local_90) goto LAB_1404f6e93;
  }
  local_70 = &local_90;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_c8,1,CONCAT44(uVar8,DAT_1419fdbf8),&local_70);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    uStack_dc = DAT_141dd39a4;
    uStack_e0 = DAT_141dd39a0;
    if ((1 << ((byte)DAT_141dd39a4 & 0x1f) & 0x46U) == 0) {
      local_e8 = DAT_141dd3998;
    }
    else {
      FUN_1400419b0(&local_e8,&DAT_141dd3998);
    }
    if ((int)local_60[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_58;
    }
    iVar2 = FUN_140e851f0(puVar5,&local_e8,DAT_141955260,0);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if (iVar2 != 0) {
      local_98 = 0xe3;
      goto LAB_1404f705f;
    }
  }
  local_98 = 0xdf;
  iVar2 = FUN_140e851f0(&local_f8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 != 0) {
    local_98 = 0xdf;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    local_b8 = _DAT_141dd3b88;
    uStack_b4 = uRam0000000141dd3b8c;
    uStack_b0 = uRam0000000141dd3b90;
    uStack_ac = DAT_141dd3b94;
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    FUN_140041b80(local_80,&local_b8);
    local_68 = local_80;
    FUN_140e63610(param_1,param_2,&local_d8,1,&local_f8,&local_68);
  }
  local_98 = 0xe0;
  uVar7 = 0;
LAB_1404f705f:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar7 << 0x20;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_90,0x10,2,FUN_140041b30);
  if (0 < (int)local_60[0]) {
    puVar5 = local_58;
    do {
      puVar4 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_58);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

