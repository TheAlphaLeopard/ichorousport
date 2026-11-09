// gml_Script_anon_8193___InputGamepadTransformQuirks___InputGamepadTransformQuirks @ 0x140092e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_anon_8193___InputGamepadTransformQuirks___InputGamepadTransformQuirks
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined4 uVar11;
  undefined8 uVar9;
  undefined8 **ppuVar10;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_68;
  byte local_5c;
  undefined8 *local_58 [3];
  undefined8 *local_40;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_e0 = "gml_Script___InputGamepadIdentifySwitchType";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 7;
  FUN_140041df0(local_38,param_4,3,param_5);
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 7;
  puVar7 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_30[1];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_d8 = 7;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    if ((int)local_38[0] < 1) {
      puVar6 = &DAT_1419df7b0;
LAB_140092fb4:
      local_f8 = *puVar6;
      uStack_f0 = *(undefined4 *)(puVar6 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      FUN_140041b80(&local_68,&local_f8);
    }
    else {
      puVar6 = (undefined8 *)*local_30;
      if (puVar6 != &local_68) goto LAB_140092fb4;
    }
    local_40 = &local_68;
    if ((int)local_38[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_30[1];
    }
    uVar9 = CONCAT44(uVar11,DAT_141a010e8);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar9,&local_40);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (puVar5 != puVar6) {
      local_f8 = *puVar5;
      uStack_f0 = *(undefined4 *)(puVar5 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_f8);
    }
  }
  if ((int)local_38[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_30[2];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    uStack_ec = 0xd;
    local_f8 = 0x3ff0000000000000;
    if ((int)local_38[0] < 3) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_30[2];
      if (&local_f8 == puVar6) goto LAB_1400930de;
    }
    local_c8 = 0;
    uStack_c4 = 0x3ff00000;
    uStack_c0 = uStack_f0;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_c8);
  }
LAB_1400930de:
  local_d8 = 9;
  uStack_ec = DAT_141dc9fa4;
  uStack_f0 = DAT_141dc9fa0;
  if ((1 << ((byte)DAT_141dc9fa4 & 0x1f) & 0x46U) == 0) {
    local_f8 = DAT_141dc9f98;
  }
  else {
    FUN_1400419b0(&local_f8,&DAT_141dc9f98);
  }
  if ((int)local_38[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_30[1];
  }
  iVar3 = FUN_140e851f0(puVar6,&local_f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (iVar3 == 0) {
    local_d8 = 0x12;
    if ((int)local_38[0] < 3) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_30[2];
    }
    cVar2 = FUN_140e491e0(puVar6);
    if (cVar2 != '\0') {
      local_d8 = 0x14;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      local_c8 = _DAT_141dc9f88;
      uStack_c4 = uRam0000000141dc9f8c;
      uStack_c0 = uRam0000000141dc9f90;
      uStack_bc = DAT_141dc9f94;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_c8);
      local_58[0] = &local_98;
      ppuVar10 = local_58;
      gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                (param_1,param_2,&local_108,1,ppuVar10);
      uVar11 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
    }
    local_d8 = 0x17;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    if ((int)local_38[0] < 1) {
      puVar6 = &DAT_1419df7b0;
LAB_14009327c:
      local_c8 = *(undefined4 *)puVar6;
      uStack_c4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_c0 = *(undefined4 *)(puVar6 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_c8);
    }
    else {
      puVar6 = (undefined8 *)*local_30;
      if (puVar6 != &local_98) goto LAB_14009327c;
    }
    local_58[0] = &local_98;
    uVar9 = CONCAT44(uVar11,DAT_141a012e8);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar9,local_58);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (puVar6 != &local_a8) {
      local_c8 = *(undefined4 *)puVar6;
      uStack_c4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_c0 = *(undefined4 *)(puVar6 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_c8);
    }
    local_d8 = 0x18;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    if ((int)local_38[0] < 1) {
      puVar6 = &DAT_1419df7b0;
LAB_140093361:
      local_c8 = *(undefined4 *)puVar6;
      uStack_c4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_c0 = *(undefined4 *)(puVar6 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_c8);
    }
    else {
      puVar6 = (undefined8 *)*local_30;
      if (puVar6 != &local_98) goto LAB_140093361;
    }
    local_58[0] = &local_98;
    puVar6 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_108,1,CONCAT44(uVar11,DAT_141a012d8),local_58);
    if (puVar6 != &local_b8) {
      local_c8 = *(undefined4 *)puVar6;
      uStack_c4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_c0 = *(undefined4 *)(puVar6 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_c8);
    }
    local_d8 = 0x1a;
    cVar2 = FUN_140e491e0(&local_a8);
    if (cVar2 != '\0') {
      local_d8 = 0x1c;
      cVar2 = FUN_140e491e0(&local_b8);
      bVar1 = (byte)*(undefined4 *)((longlong)param_3 + 0xc);
      if (cVar2 == '\0') {
        local_d8 = 0x23;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        uVar4 = 0x40180000;
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        local_d8 = 0x1f;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        uVar4 = 0x40140000;
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      goto LAB_140093755;
    }
    local_d8 = 0x28;
    cVar2 = FUN_140e491e0(&local_b8);
    if (cVar2 != '\0') {
      local_d8 = 0x2a;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      uVar4 = 0x401c0000;
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      goto LAB_140093755;
    }
    local_d8 = 0x2e;
    if (2 < (int)local_38[0]) {
      puVar7 = (undefined8 *)local_30[2];
    }
    cVar2 = FUN_140e491e0(puVar7);
    if (cVar2 != '\0') {
      local_d8 = 0x30;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      local_c8 = _DAT_141dc9f78;
      uStack_c4 = uRam0000000141dc9f7c;
      uStack_c0 = uRam0000000141dc9f80;
      uStack_bc = DAT_141dc9f84;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_c8);
      local_58[0] = &local_98;
      gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                (param_1,param_2,&local_108,1,local_58);
    }
    local_d8 = 0x33;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  }
  else {
    local_d8 = 0x37;
    uStack_ec = DAT_141dc9f74;
    uStack_f0 = DAT_141dc9f70;
    if ((1 << ((byte)DAT_141dc9f74 & 0x1f) & 0x46U) == 0) {
      local_f8 = DAT_141dc9f68;
    }
    else {
      FUN_1400419b0(&local_f8,&DAT_141dc9f68);
    }
    if ((int)local_38[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_30[1];
    }
    iVar3 = FUN_140e851f0(puVar6,&local_f8,DAT_141955260,0);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (iVar3 == 0) {
      local_d8 = 0x39;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      uVar4 = 0x40180000;
      goto LAB_140093755;
    }
    local_d8 = 0x3b;
    uStack_ec = DAT_141dc9f64;
    uStack_f0 = DAT_141dc9f60;
    if ((1 << ((byte)DAT_141dc9f64 & 0x1f) & 0x46U) == 0) {
      local_f8 = DAT_141dc9f58;
    }
    else {
      FUN_1400419b0(&local_f8,&DAT_141dc9f58);
    }
    if (1 < (int)local_38[0]) {
      puVar7 = (undefined8 *)local_30[1];
    }
    iVar3 = FUN_140e851f0(puVar7,&local_f8,DAT_141955260,0);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uVar4 = 1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f);
    if (iVar3 == 0) {
      local_d8 = 0x3d;
      if ((uVar4 & 0x46) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      uVar4 = 0x401c0000;
      goto LAB_140093755;
    }
    local_d8 = 0x40;
    if ((uVar4 & 0x46) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  }
  uVar4 = 0x40140000;
LAB_140093755:
  *param_3 = (ulonglong)uVar4 << 0x20;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,4,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar7 = local_30;
    do {
      puVar6 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

