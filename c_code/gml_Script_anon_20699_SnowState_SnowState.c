// gml_Script_anon_20699_SnowState_SnowState @ 0x140507ad0

/* WARNING: Removing unreachable block (ram,0x0001405081ee) */

undefined8 *
gml_Script_anon_20699_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined4 local_98 [3];
  undefined4 local_8c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined4 *local_58;
  undefined8 *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  undefined8 local_38;
  undefined4 local_2c;
  
  bVar2 = false;
  bVar1 = false;
  local_120 = "gml_Script_anon@20030@SnowState@SnowState";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x27e;
  FUN_140041df0(local_48,param_4,2,param_5);
  _eh_vector_constructor_iterator_(&local_d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0;
  local_158 = 0;
  local_2c = 0;
  local_38 = 0;
  local_104 = 0;
  local_110 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x27e;
  uVar10 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_40[1];
  }
  iVar4 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_118 = 0x27e;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5df8);
    if ((int)local_48[0] < 2) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_40[1];
    }
    puVar6 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_158,0,uVar5,0);
    if (puVar6 != puVar8) {
      local_138 = *puVar6;
      uStack_130 = *(undefined4 *)(puVar6 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_138);
    }
  }
  local_118 = 0x27f;
  if ((int)local_48[0] < 2) {
    puVar8 = &DAT_1419df7b0;
LAB_140507cbc:
    local_138 = *puVar8;
    uStack_130 = *(undefined4 *)(puVar8 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_138);
  }
  else {
    puVar8 = (undefined8 *)local_40[1];
    if (puVar8 != &local_148) goto LAB_140507cbc;
  }
  local_118 = 0x281;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd78);
  if ((int)local_48[0] < 1) {
    puVar8 = &DAT_1419df7b0;
LAB_140507d50:
    local_138 = *puVar8;
    uStack_130 = *(undefined4 *)(puVar8 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_138);
  }
  else {
    puVar8 = (undefined8 *)*local_40;
    if (puVar8 != &local_d8) goto LAB_140507d50;
  }
  local_78 = &local_d8;
  uVar7 = FUN_140e63610(param_1,param_2,&local_158,1,uVar5,&local_78);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 == '\0') {
    local_118 = 0x281;
    goto LAB_1405081b5;
  }
  local_118 = 0x282;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50();
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((int)local_48[0] < 2) {
    puVar8 = &DAT_1419df7b0;
LAB_140507e1a:
    local_138 = *puVar8;
    uStack_130 = *(undefined4 *)(puVar8 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_138);
  }
  else {
    puVar8 = (undefined8 *)local_40[1];
    if (puVar8 != &local_d8) goto LAB_140507e1a;
  }
  local_78 = &local_d8;
  uVar7 = FUN_140e63610(param_1,param_2,&local_158,1,uVar5,&local_78);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 == '\0') {
    local_118 = 0x282;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd78);
  }
  else {
    local_118 = 0x284;
    iVar4 = FUN_140e851f0(&local_148,&DAT_1419df7b0,DAT_141955260,0);
    while (uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20), iVar4 != 0) {
      local_118 = 0x285;
      if ((int)local_48[0] < 1) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)*local_40;
      }
      iVar4 = FUN_140e851f0(&local_148,puVar8,DAT_141955260,0);
      if (iVar4 == 0) {
        local_118 = 0x285;
        *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
        *param_3 = 0x3ff0000000000000;
        goto LAB_1405081c2;
      }
      local_118 = 0x286;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
      if (puVar8 != &local_d8) {
        local_f0 = *(undefined4 *)puVar8;
        uStack_ec = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_e8 = *(undefined4 *)(puVar8 + 1);
        uStack_e4 = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_f0);
      }
      local_78 = &local_d8;
      local_70 = &local_148;
      uVar5 = CONCAT44(uVar11,DAT_1419fcba8);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_158,2,uVar5,&local_78);
      cVar3 = FUN_140e491e0(uVar7);
      uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (cVar3 == '\0') {
        local_f4 = DAT_1419df7bc;
        local_f8 = DAT_1419df7b8;
        if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
          local_100 = DAT_1419df7b0;
        }
        else {
          FUN_1400419b0(&local_100,&DAT_1419df7b0);
        }
        puVar8 = &local_100;
        bVar1 = true;
      }
      else {
        if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_110);
        }
        local_110 = 0;
        local_108 = 0;
        local_104 = 5;
        puVar9 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
        if (puVar9 != local_98) {
          local_f0 = *puVar9;
          uStack_ec = puVar9[1];
          uStack_e8 = puVar9[2];
          uStack_e4 = puVar9[3];
          if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_98);
          }
          FUN_140041b80(local_98,&local_f0);
        }
        local_58 = local_98;
        local_50 = &local_148;
        uVar5 = CONCAT44(uVar11,DAT_141a01138);
        puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_110,2,uVar5,&local_58);
        uStack_12c = *(undefined4 *)((longlong)puVar8 + 0xc);
        uStack_130 = *(undefined4 *)(puVar8 + 1);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) == 0) {
          local_138 = *puVar8;
        }
        else {
          FUN_1400419b0(&local_138,puVar8);
        }
        puVar8 = &local_138;
        bVar2 = true;
      }
      local_f0 = *(undefined4 *)puVar8;
      uStack_ec = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_e8 = *(undefined4 *)(puVar8 + 1);
      uStack_e4 = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_f0);
      if ((bVar1) && (bVar1 = false, (1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_100);
      }
      if ((bVar2) && (bVar2 = false, (1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_138);
      }
      iVar4 = FUN_140e851f0(&local_148,&DAT_1419df7b0,DAT_141955260,0);
    }
    local_118 = 0x289;
  }
LAB_1405081b5:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = 0;
LAB_1405081c2:
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,6,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar8 = local_40;
    do {
      puVar6 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

