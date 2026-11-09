// gml_Script_anon_23748_SnowState_SnowState @ 0x1405097a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_23748_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
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
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  uint local_40 [2];
  undefined8 *local_38;
  
  local_70 = "gml_Script_anon@21864@SnowState@SnowState";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x2ba;
  FUN_140041df0(local_40,param_4,3,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_cc = 0;
  local_d8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x2ba;
  puVar7 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_40[0];
  if ((int)local_40[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_38[2];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_68 = 0x2ba;
    if ((int)local_40[0] < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_38[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0xc010000000000000;
  }
  local_68 = 699;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if ((int)local_40[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14050991e:
    local_e8 = *puVar5;
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_e8);
  }
  else {
    puVar5 = (undefined8 *)*local_38;
    if (puVar5 != &local_b8) goto LAB_14050991e;
  }
  local_60 = &local_b8;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar9,DAT_1419fdbf8),&local_60);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_68 = 700;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
    local_e8 = CONCAT44(uRam0000000141dd3a1c,_DAT_141dd3a18);
    uStack_e0 = uRam0000000141dd3a20;
    uStack_dc = DAT_141dd3a24;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_e8);
    local_58 = &local_a8;
    FUN_140e63610(param_1,param_2,&local_c8,1,uVar3,&local_58);
    local_68 = 0x2bd;
    if (param_3 != &DAT_1419df7b0) {
      local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_e0 = DAT_1419df7b8;
      uStack_dc = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_e8);
    }
    goto LAB_14050a081;
  }
  local_68 = 0x2c0;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcc18);
  if ((int)local_40[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_140509acf:
    local_e8 = *puVar5;
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_e8);
  }
  else {
    puVar5 = (undefined8 *)local_38[1];
    if (puVar5 != &local_b8) goto LAB_140509acf;
  }
  local_60 = &local_b8;
  uVar4 = FUN_140e63610(param_1,param_2,&local_d8,1,uVar3,&local_60);
  uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_68 = 0x2c1;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
    local_e8 = CONCAT44(uRam0000000141dd3a4c,_DAT_141dd3a48);
    uStack_e0 = uRam0000000141dd3a50;
    uStack_dc = DAT_141dd3a54;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_e8);
    local_58 = &local_a8;
    FUN_140e63610(param_1,param_2,&local_c8,1,uVar3,&local_58);
    local_68 = 0x2c2;
    if (param_3 != &DAT_1419df7b0) {
      local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_e0 = DAT_1419df7b8;
      uStack_dc = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_e8);
    }
    goto LAB_14050a081;
  }
  local_68 = 0x2c5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcdb8);
  if (puVar5 != &local_b8) {
    local_e8 = *puVar5;
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_e8);
  }
  local_60 = &local_b8;
  if ((int)local_40[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140509cbb:
    local_e8 = *puVar5;
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_e8);
  }
  else {
    puVar5 = (undefined8 *)*local_38;
    if (puVar5 != &local_a8) goto LAB_140509cbb;
  }
  local_58 = &local_a8;
  uVar4 = CONCAT44(uVar9,DAT_1419fcba8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,2,uVar4,&local_60);
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_68 = 0x2c9;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd68);
    local_e8 = CONCAT44(uRam0000000141dd39ec,_DAT_141dd39e8);
    uStack_e0 = uRam0000000141dd39f0;
    uStack_dc = DAT_141dd39f4;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_e8);
    local_60 = &local_b8;
    if (((int)local_40[0] < 1) || (puVar7 = (undefined8 *)*local_38, puVar7 != &local_a8)) {
      local_e8 = *puVar7;
      uStack_e0 = *(undefined4 *)(puVar7 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_e8);
    }
    local_58 = &local_a8;
    local_e8 = CONCAT44(uRam0000000141dd3a2c,_DAT_141dd3a28);
    uStack_e0 = uRam0000000141dd3a30;
    uStack_dc = DAT_141dd3a34;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_e8);
    local_50 = &local_98;
    FUN_140e63610(param_1,param_2,&local_d8,3,uVar3,&local_60);
  }
  else {
    local_68 = 0x2c6;
    if ((int)local_40[0] < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_38[2];
    }
    uStack_dc = 0;
    local_e8 = 0xc010000000000000;
    iVar2 = FUN_140e851f0(puVar5,&local_e8,DAT_141955260,0);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if (iVar2 != 0) {
      local_68 = 0x2c6;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      if ((int)local_40[0] < 3) {
        puVar5 = &DAT_1419df7b0;
LAB_140509dde:
        local_e8 = *puVar5;
        uStack_e0 = *(undefined4 *)(puVar5 + 1);
        uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_e8);
      }
      else {
        puVar5 = (undefined8 *)local_38[2];
        if (puVar5 != &local_98) goto LAB_140509dde;
      }
      local_50 = &local_98;
      if ((int)local_40[0] < 2) {
        puVar5 = &DAT_1419df7b0;
LAB_140509e2e:
        local_e8 = *puVar5;
        uStack_e0 = *(undefined4 *)(puVar5 + 1);
        uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_e8);
      }
      else {
        puVar5 = (undefined8 *)local_38[1];
        if (puVar5 != &local_88) goto LAB_140509e2e;
      }
      local_48 = &local_88;
      if ((int)local_40[0] < 2) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)local_38[1];
      }
      puVar6 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_c8,2,CONCAT44(uVar9,DAT_1419fed78),&local_50);
      if (puVar6 != puVar5) {
        local_e8 = *puVar6;
        uStack_e0 = *(undefined4 *)(puVar6 + 1);
        uStack_dc = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_e8);
      }
    }
    local_68 = 0x2c7;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcdb8);
    if ((int)local_40[0] < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_38[1];
    }
    if (0 < (int)local_40[0]) {
      puVar7 = (undefined8 *)*local_38;
    }
    FUN_140e98ef0(param_1,param_2,uVar3,puVar7,puVar5);
  }
  local_68 = 0x2cc;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
LAB_14050a081:
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,4,FUN_140041b30);
  if (0 < (int)local_40[0]) {
    puVar7 = local_38;
    do {
      puVar5 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_38);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

