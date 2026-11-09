// gml_Script_anon_31826_SnowState_SnowState @ 0x140510de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_31826_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_90 [12];
  byte local_84;
  undefined8 local_80;
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_a0 = "gml_Script_anon@31215@SnowState@SnowState";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x3ec;
  FUN_140041df0(local_48,param_4,1,param_5);
  _eh_vector_constructor_iterator_(local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  local_c8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x3ed;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140510ec4:
    local_d8 = *puVar4;
    uStack_d0 = *(undefined4 *)(puVar4 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_d8);
  }
  else {
    puVar4 = (undefined8 *)*local_40;
    if (puVar4 != &local_80) goto LAB_140510ec4;
  }
  local_58 = &local_80;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_c8,1,DAT_141a0a0b8,&local_58);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_98 = 0x3ee;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
    local_d8 = CONCAT44(uRam0000000141dd3aec,_DAT_141dd3ae8);
    uStack_d0 = uRam0000000141dd3af0;
    uStack_cc = DAT_141dd3af4;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_d8);
    local_50 = local_70;
    FUN_140e63610(param_1,param_2,&local_b8,1,uVar3,&local_50);
    local_98 = 0x3ef;
    if (param_3 != &DAT_1419df7b0) {
      local_d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_d0 = DAT_1419df7b8;
      uStack_cc = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_d8);
    }
    goto LAB_1405112e2;
  }
  local_98 = 0x3f1;
  if ((int)local_48[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_40;
  }
  uStack_cc = 0;
  local_d8 = 0;
  iVar2 = FUN_140e851f0(puVar4,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (iVar2 != -2 && iVar2 < 0) {
    local_98 = 0x3f3;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd68);
    local_d8 = CONCAT44(uRam0000000141dd3a5c,_DAT_141dd3a58);
    uStack_d0 = uRam0000000141dd3a60;
    uStack_cc = DAT_141dd3a64;
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_d8);
    local_60 = local_90;
    if ((int)local_48[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_140511117:
      local_d8 = *puVar4;
      uStack_d0 = *(undefined4 *)(puVar4 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      FUN_140041b80(&local_80,&local_d8);
    }
    else {
      puVar4 = (undefined8 *)*local_40;
      if (puVar4 != &local_80) goto LAB_140511117;
    }
    local_58 = &local_80;
    local_d8 = CONCAT44(uRam0000000141dd3afc,_DAT_141dd3af8);
    uStack_d0 = uRam0000000141dd3b00;
    uStack_cc = DAT_141dd3b04;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_d8);
    local_50 = local_70;
    FUN_140e63610(param_1,param_2,&local_c8,3,uVar3,&local_60);
    local_98 = 0x3f5;
    if ((int)local_48[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_40;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  local_98 = 0x3f7;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcc78);
  FUN_140e609c0(param_1);
  if (0 < (int)local_48[0]) {
    puVar5 = (undefined8 *)*local_40;
  }
  if (puVar5 != puVar4) {
    local_d8 = *puVar5;
    uStack_d0 = *(undefined4 *)(puVar5 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_d8);
  }
  FUN_140e60910(1);
  local_98 = 0x3f8;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcdc8);
  FUN_140e63610(param_1,param_2,&local_c8,0,uVar3,0);
  local_98 = 0x3fa;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
LAB_1405112e2:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,3,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar5 = local_40;
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
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

