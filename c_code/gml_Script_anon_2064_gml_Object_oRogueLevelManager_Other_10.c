// gml_Script_anon_2064_gml_Object_oRogueLevelManager_Other_10 @ 0x140cde330

undefined8 *
gml_Script_anon_2064_gml_Object_oRogueLevelManager_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  uint local_60 [2];
  undefined8 *local_58;
  undefined4 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_70 = "gml_Script_anon@1777@gml_Object_oRogueLevelManager_Other_10";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x4d;
  FUN_140041df0(local_60,param_4,3,param_5);
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fa3b8);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x4d;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_60[0];
  if ((int)local_60[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_58;
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_68 = 0x4d;
    if ((int)local_60[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_58;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x414895a380000000;
  }
  if ((int)local_60[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_58[1];
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_60[0] < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_58[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x403e000000000000;
  }
  if ((int)local_60[0] < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_58[2];
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar1 == 0) && (2 < (int)local_60[0])) &&
     (puVar4 = (undefined8 *)local_58[2], puVar4 != &DAT_1419df7b0)) {
    local_c8 = (undefined4)DAT_1419df7b0;
    uStack_c4 = DAT_1419df7b0._4_4_;
    uStack_c0 = DAT_1419df7b8;
    uStack_bc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_c8);
  }
  local_68 = 0x4f;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4f18);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_c8,
                gml_Script____struct___743_anon_2064_gml_Object_oRogueLevelManager_Other_10,0);
  if (&local_c8 != puVar2) {
    local_f8 = local_c8;
    uStack_f4 = uStack_c4;
    uStack_f0 = uStack_c0;
    uStack_ec = uStack_bc;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_f8);
  }
  FUN_140e60910(1);
  if (puVar2 != local_b8) {
    local_f8 = *puVar2;
    uStack_f4 = puVar2[1];
    uStack_f0 = puVar2[2];
    uStack_ec = puVar2[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_f8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_50 = local_b8;
  if ((int)local_60[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140cde660:
    local_f8 = *(undefined4 *)puVar4;
    uStack_f4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_f8);
  }
  else {
    puVar4 = (undefined8 *)*local_58;
    if (puVar4 != &local_a8) goto LAB_140cde660;
  }
  local_48 = &local_a8;
  if ((int)local_60[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_58[1];
    if (puVar4 == &local_98) goto LAB_140cde6df;
  }
  local_f8 = *(undefined4 *)puVar4;
  uStack_f4 = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_f0 = *(undefined4 *)(puVar4 + 1);
  uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_f8);
LAB_140cde6df:
  local_40 = &local_98;
  if (((int)local_60[0] < 3) || (puVar5 = (undefined8 *)local_58[2], puVar5 != &local_88)) {
    local_f8 = *(undefined4 *)puVar5;
    uStack_f4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_f0 = *(undefined4 *)(puVar5 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_f8);
  }
  local_38 = &local_88;
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_e8,4,CONCAT44(uVar7,DAT_1419fd6d8),&local_50);
  if (puVar5 != &local_d8) {
    local_f8 = *(undefined4 *)puVar5;
    uStack_f4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_f0 = *(undefined4 *)(puVar5 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_f8);
  }
  FUN_140e87930(uVar3,DAT_1419fa3d8,0x80000000,&local_d8);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,4,FUN_140041b30);
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
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

