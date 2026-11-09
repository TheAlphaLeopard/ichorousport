// gml_Script_truestate_begin_step @ 0x140629730

undefined8 *
gml_Script_truestate_begin_step
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined4 uVar15;
  undefined8 uVar14;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  byte local_f4;
  undefined8 local_f0;
  byte local_e4;
  undefined4 local_e0 [3];
  byte local_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined4 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60 [2];
  undefined8 *local_58;
  
  local_110 = "gml_Script_truestate_switch";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x59;
  FUN_140041df0(local_60,param_4,2,param_5);
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_100,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar12 = local_60[0];
  local_11c = 0;
  local_128 = 0;
  local_74 = 0;
  local_80 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x59;
  puVar13 = &DAT_1419df7b0;
  if ((int)local_60[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_58[1];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar4 == 0) && (local_108 = 0x59, 1 < (int)uVar12)) &&
     (puVar6 = (undefined8 *)local_58[1], puVar6 != &DAT_1419df7b0)) {
    local_138 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_130 = DAT_1419df7b8;
    uStack_12c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_138);
  }
  local_108 = 0x60;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00168);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 != '\0') {
    local_108 = 0x61;
    uVar5 = (**(code **)(*param_1 + 8))();
    cVar3 = FUN_140e491e0(uVar5);
    if (cVar3 != '\0') {
      local_108 = 0x62;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      puVar13 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00108);
      if (puVar13 != &local_100) {
        local_138 = *puVar13;
        uStack_130 = *(undefined4 *)(puVar13 + 1);
        uStack_12c = *(undefined4 *)((longlong)puVar13 + 0xc);
        if ((1 << (local_f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_100);
        }
        FUN_140041b80(&local_100,&local_138);
      }
      local_98 = &local_100;
      FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar15,DAT_141a00178),&local_98);
      local_108 = 99;
      puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a000e8);
      uStack_12c = 0xd;
      local_138 = 0;
      if (&local_138 != puVar13) {
        local_b8 = 0;
        uStack_b0 = uStack_130;
        uStack_ac = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar13);
        }
        FUN_140041b80(puVar13,&local_b8);
      }
    }
    local_108 = 0x65;
    goto LAB_14062a3e3;
  }
  local_108 = 0x68;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a000e8);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 != '\0') {
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00108);
    if (puVar6 != &local_100) {
      local_138 = *puVar6;
      uStack_130 = *(undefined4 *)(puVar6 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      FUN_140041b80(&local_100,&local_138);
    }
    local_98 = &local_100;
    uVar9 = CONCAT44(uVar15,DAT_141a00128);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar9,&local_98);
    uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_12c = 0;
    local_138 = 0;
    iVar4 = FUN_140e851f0(uVar5,&local_138,DAT_141955260,1);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (0 < iVar4) {
      local_108 = 0x69;
      puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a001f8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar13);
      }
      *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
      *puVar13 = 0x40c3878000000000;
      local_108 = 0x6a;
      goto LAB_14062a3e3;
    }
  }
  local_108 = 0x6c;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a000e8);
  uStack_12c = 0xd;
  local_138 = 0;
  if (&local_138 != puVar6) {
    local_b8 = 0;
    uStack_b0 = uStack_130;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_b8);
  }
  local_108 = 0x6e;
  if ((int)uVar12 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_58;
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_108 = 0x6f;
    puVar13 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00058);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a001f8);
    FUN_140e609c0(param_1);
    if (puVar13 != puVar6) {
      local_138 = *puVar13;
      uStack_130 = *(undefined4 *)(puVar13 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar13 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_138);
    }
    FUN_140e60910(1);
    local_108 = 0x70;
    goto LAB_14062a3e3;
  }
  local_108 = 0x73;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00228);
  if (puVar6 != &local_100) {
    local_138 = *puVar6;
    uStack_130 = *(undefined4 *)(puVar6 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_138);
  }
  local_98 = &local_100;
  if ((int)uVar12 < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_140629d0b:
    local_138 = *puVar6;
    uStack_130 = *(undefined4 *)(puVar6 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_138);
  }
  else {
    puVar6 = (undefined8 *)*local_58;
    if (puVar6 != &local_f0) goto LAB_140629d0b;
  }
  local_90 = &local_f0;
  uVar9 = CONCAT44(uVar15,DAT_141a01478);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_128,2,uVar9,&local_98);
  uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 == '\0') {
    local_108 = 0x76;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    local_80 = 0;
    local_78 = 0;
    local_74 = 5;
    if ((int)uVar12 < 1) {
      puVar6 = &DAT_1419df7b0;
LAB_140629e5c:
      local_138 = *puVar6;
      uStack_130 = *(undefined4 *)(puVar6 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      FUN_140041b80(&local_100,&local_138);
    }
    else {
      puVar6 = (undefined8 *)*local_58;
      if (puVar6 != &local_100) goto LAB_140629e5c;
    }
    local_98 = &local_100;
    uStack_12c = DAT_141dd4f64;
    uStack_130 = DAT_141dd4f60;
    if ((1 << ((byte)DAT_141dd4f64 & 0x1f) & 0x46U) == 0) {
      local_138 = DAT_141dd4f58;
    }
    else {
      FUN_1400419b0(&local_138,&DAT_141dd4f58);
    }
    local_64 = DAT_141dd4f84;
    local_68 = DAT_141dd4f80;
    if ((1 << ((byte)DAT_141dd4f84 & 0x1f) & 0x46U) == 0) {
      local_70 = DAT_141dd4f78;
    }
    else {
      FUN_1400419b0(&local_70,&DAT_141dd4f78);
    }
    uVar2 = local_64;
    uVar1 = local_68;
    uVar5 = local_70;
    uVar14 = CONCAT44(uVar15,DAT_1419fcb18);
    uVar9 = FUN_140e634e0(param_1,param_2,&local_80,1,uVar14,&local_98);
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
    uVar12 = 1 << ((byte)uVar2 & 0x1f) & 0x46;
    local_a0 = uVar1;
    local_9c = uVar2;
    if (uVar12 == 0) {
      local_a8 = uVar5;
    }
    else {
      FUN_1400419b0(&local_a8,&local_70);
    }
    FUN_1400460e0(&local_a8,uVar9);
    uStack_ac = local_9c;
    uStack_b0 = local_a0;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_b8 = local_a8;
    }
    else {
      FUN_1400419b0(&local_b8,&local_a8);
    }
    FUN_1400460e0(&local_b8,&local_138);
    local_c8 = (undefined4)local_b8;
    uStack_c4 = local_b8._4_4_;
    uStack_c0 = uStack_b0;
    uStack_bc = uStack_ac;
    if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_c8);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if (uVar12 != 0) {
      FUN_140041a50(&local_70);
    }
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_90 = &local_f0;
    uVar5 = CONCAT44(uVar15,DAT_141a03478);
    FUN_140e634e0(param_1,param_2,&local_128,1,uVar5,&local_90);
    uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_108 = 0x77;
    puVar10 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00058);
    puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a001f8);
    FUN_140e609c0(param_1);
    if (puVar10 != puVar8) {
      local_c8 = *puVar10;
      uStack_c4 = puVar10[1];
      uStack_c0 = puVar10[2];
      uStack_bc = puVar10[3];
      if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_c8);
    }
    uVar12 = local_60[0];
  }
  else {
    local_108 = 0x74;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a001f8);
    FUN_140e609c0(param_1);
    if ((int)uVar12 < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_58;
    }
    if (puVar7 != puVar6) {
      local_138 = *puVar7;
      uStack_130 = *(undefined4 *)(puVar7 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_138);
    }
  }
  FUN_140e60910(1);
  local_108 = 0x7a;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fffd8);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 == '\0') {
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fffa8);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a001f8);
    if (puVar6 != &local_100) {
      local_c8 = *(undefined4 *)puVar6;
      uStack_c4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_c0 = *(undefined4 *)(puVar6 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      FUN_140041b80(&local_100,&local_c8);
    }
    local_98 = &local_100;
    uVar9 = FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar15,DAT_141a001c8),&local_98);
    iVar4 = FUN_140e851f0(uVar9,uVar5,DAT_141955260,0);
    if (iVar4 == 0) goto LAB_14062a2ea;
    local_108 = 0x7b;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fffa8);
    puVar10 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a001f8);
    if (puVar6 != &local_f0) {
      local_c8 = *(undefined4 *)puVar6;
      uStack_c4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_c0 = *(undefined4 *)(puVar6 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      FUN_140041b80(&local_f0,&local_c8);
    }
    local_90 = &local_f0;
    if (puVar10 != local_e0) {
      local_c8 = *puVar10;
      uStack_c4 = puVar10[1];
      uStack_c0 = puVar10[2];
      uStack_bc = puVar10[3];
      if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e0);
      }
      FUN_140041b80(local_e0,&local_c8);
    }
    local_88 = local_e0;
    FUN_140ea9150(2,&local_90);
  }
  else {
LAB_14062a2ea:
    local_108 = 0x7d;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fffd8);
    uStack_12c = 0xd;
    local_138 = 0;
    if (&local_138 != puVar6) {
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = uStack_130;
      uStack_bc = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_c8);
    }
  }
  local_108 = 0x7f;
  if ((int)uVar12 < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_58[1];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 != 0) {
    local_108 = 0x80;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00168);
    FUN_140e609c0(param_1);
    if (1 < (int)uVar12) {
      puVar13 = (undefined8 *)local_58[1];
    }
    if (puVar13 != puVar6) {
      local_c8 = *(undefined4 *)puVar13;
      uStack_c4 = *(undefined4 *)((longlong)puVar13 + 4);
      uStack_c0 = *(undefined4 *)(puVar13 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar13 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_c8);
    }
    FUN_140e60910(1);
  }
LAB_14062a3e3:
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_100,0x10,3,FUN_140041b30);
  if (0 < (int)uVar12) {
    uVar11 = (ulonglong)uVar12;
    puVar13 = local_58;
    do {
      puVar6 = (undefined8 *)*puVar13;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar13 = puVar13 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_58);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

