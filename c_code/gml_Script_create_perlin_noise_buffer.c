// gml_Script_create_perlin_noise_buffer @ 0x140430e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_create_perlin_noise_buffer
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8 [3];
  byte local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  uint local_60 [2];
  undefined8 *local_58;
  
  local_90 = "gml_Script_shader_set_perlin_noise";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x59;
  FUN_140041df0(local_60,param_4,3,param_5);
  uVar11 = 1;
  _eh_vector_constructor_iterator_(local_d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_fc = 0;
  local_108 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddee30) {
    _Init_thread_header(&DAT_141ddee30);
    if (DAT_141ddee30 == -1) {
      DAT_141ddee48 = (longlong *)FUN_140e63aa0(DAT_1419f6d18);
      _Init_thread_footer(&DAT_141ddee30);
    }
  }
  local_88 = 0x59;
  puVar7 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_60[0];
  if ((int)local_60[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_58;
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_88 = 0x59;
    if ((int)local_60[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_58;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if ((int)local_60[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_58[1];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_60[0] < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_58[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x3fbc71b4784230fd;
  }
  if ((int)local_60[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_58[2];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_60[0] < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_58[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x3fefffeb074a771d;
  }
  if (DAT_141ddc16d == '\0') {
    FUN_140e64380(DAT_141ddee48,"gml_Script_shader_set_perlin_noise");
    FUN_140e64380(param_1,"gml_Script_shader_set_perlin_noise");
  }
  local_88 = 0x5c;
  if (DAT_141ddc16d == '\0') {
    DAT_141ddc16d = '\x01';
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar3 = (undefined4 *)(**(code **)(*DAT_141ddee48 + 0x10))(DAT_141ddee48,DAT_1419f6d98);
    uStack_11c = 0xf;
    local_128 = 0x100000800000012;
    local_118 = 0x12;
    uStack_114 = 0x1000008;
    uStack_110 = uStack_120;
    uStack_10c = 0xf;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_118);
    local_80 = local_d8;
    local_118 = _DAT_141dd2cf8;
    uStack_114 = uRam0000000141dd2cfc;
    uStack_110 = uRam0000000141dd2d00;
    uStack_10c = DAT_141dd2d04;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_118);
    local_78 = local_c8;
    FUN_140e609c0(DAT_141ddee48);
    uVar10 = CONCAT44(uVar11,DAT_141a04778);
    puVar4 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_108,2,uVar10,&local_80);
    uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (puVar4 != puVar3) {
      local_118 = *puVar4;
      uStack_114 = puVar4[1];
      uStack_110 = puVar4[2];
      uStack_10c = puVar4[3];
      if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_118);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    puVar3 = (undefined4 *)(**(code **)(*DAT_141ddee48 + 0x10))(DAT_141ddee48,DAT_1419f6e88);
    uStack_11c = 0xf;
    local_128 = 0x100000800000012;
    local_118 = 0x12;
    uStack_114 = 0x1000008;
    uStack_110 = uStack_120;
    uStack_10c = 0xf;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_118);
    local_70 = local_b8;
    local_118 = _DAT_141dd2ce8;
    uStack_114 = uRam0000000141dd2cec;
    uStack_110 = uRam0000000141dd2cf0;
    uStack_10c = DAT_141dd2cf4;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_118);
    local_68 = local_a8;
    FUN_140e609c0(DAT_141ddee48);
    puVar4 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_e8,2,CONCAT44(uVar11,DAT_141a04778),&local_70);
    if (puVar4 != puVar3) {
      local_118 = *puVar4;
      uStack_114 = puVar4[1];
      uStack_110 = puVar4[2];
      uStack_10c = puVar4[3];
      if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_118);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar3 = (undefined4 *)(**(code **)(*DAT_141ddee48 + 0x10))(DAT_141ddee48,DAT_1419f6d78);
    FUN_140e609c0(DAT_141ddee48);
    uVar11 = 0;
    puVar4 = (undefined4 *)
             gml_Script__fade_anon_2110_perlin_noise_PerlinFunc(param_1,param_2,&local_f8,0,0);
    if (puVar4 != puVar3) {
      local_118 = *puVar4;
      uStack_114 = puVar4[1];
      uStack_110 = puVar4[2];
      uStack_10c = puVar4[3];
      if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_118);
    }
    FUN_140e60910(1);
    puVar5 = (undefined8 *)(**(code **)(*DAT_141ddee48 + 0x10))(DAT_141ddee48,DAT_1419f6d08);
    uVar10 = FUN_140e794b0(0xb4784231,0x403dffff583a53b9);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = uVar10;
  }
  local_88 = 0x61;
  if ((int)local_60[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_58;
  }
  uStack_11c = 0;
  local_128 = 0;
  iVar2 = FUN_140e851f0(puVar5,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar2 != 0) {
    local_88 = 0x62;
    puVar5 = (undefined8 *)(**(code **)(*DAT_141ddee48 + 0x10))(DAT_141ddee48,DAT_1419f6d08);
    FUN_140e609c0(DAT_141ddee48);
    if ((int)local_60[0] < 3) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_58[2];
    }
    if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
      uVar10 = *puVar6;
    }
    else {
      uVar10 = FUN_140e4b060();
    }
    if ((int)local_60[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_58[1];
    }
    if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
      uVar9 = (undefined4)*puVar6;
    }
    else {
      uVar9 = FUN_140e4b060();
    }
    if (0 < (int)local_60[0]) {
      puVar7 = (undefined8 *)*local_58;
    }
    uVar10 = FUN_140e794b0(uVar9,uVar10);
    uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_120 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
      local_128 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_128,puVar7);
    }
    FUN_140162c50(&local_128,uVar10);
    if (&local_128 != puVar5) {
      local_118 = (undefined4)local_128;
      uStack_114 = local_128._4_4_;
      uStack_110 = uStack_120;
      uStack_10c = uStack_11c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_118);
    }
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140e60910(1);
  }
  local_88 = 100;
  uStack_11c = 0xf;
  local_128 = 0x100000800000012;
  dVar1 = (double)FUN_140e4b060(&local_128);
  FUN_140ec9e10((int)dVar1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_88 = 0x65;
  puVar3 = (undefined4 *)(**(code **)(*DAT_141ddee48 + 8))(DAT_141ddee48,DAT_1419f6d98);
  puVar4 = (undefined4 *)(**(code **)(*DAT_141ddee48 + 8))(DAT_141ddee48,DAT_1419f6d08);
  if (puVar3 != local_d8) {
    local_118 = *puVar3;
    uStack_114 = puVar3[1];
    uStack_110 = puVar3[2];
    uStack_10c = puVar3[3];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_118);
  }
  local_80 = local_d8;
  if (puVar4 != local_c8) {
    local_118 = *puVar4;
    uStack_114 = puVar4[1];
    uStack_110 = puVar4[2];
    uStack_10c = puVar4[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_118);
  }
  local_78 = local_c8;
  FUN_140ec9ea0(2,&local_80);
  local_88 = 0x66;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  puVar3 = (undefined4 *)(**(code **)(*DAT_141ddee48 + 8))(DAT_141ddee48,DAT_1419f6e88);
  puVar4 = (undefined4 *)(**(code **)(*DAT_141ddee48 + 8))(DAT_141ddee48,DAT_1419f6d78);
  if (puVar3 != local_d8) {
    local_118 = *puVar3;
    uStack_114 = puVar3[1];
    uStack_110 = puVar3[2];
    uStack_10c = puVar3[3];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_118);
  }
  local_80 = local_d8;
  if (puVar4 != local_c8) {
    local_118 = *puVar4;
    uStack_114 = puVar4[1];
    uStack_110 = puVar4[2];
    uStack_10c = puVar4[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_118);
  }
  local_78 = local_c8;
  FUN_140e634e0(param_1,param_2,&local_108,2,CONCAT44(uVar11,DAT_1419f6ec8),&local_80);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,4,FUN_140041b30);
  if (0 < (int)local_60[0]) {
    puVar7 = local_58;
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
  FUN_140e4cd60(local_58);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

