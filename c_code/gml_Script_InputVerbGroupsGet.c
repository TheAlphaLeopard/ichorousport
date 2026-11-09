// gml_Script_InputVerbGroupsGet @ 0x140378740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputVerbGroupsGet
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulonglong *puVar9;
  double *pdVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong in_stack_fffffffffffffeb0;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  ulonglong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined4 *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_110 = "gml_Script_InputVerbGroupSetActive";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x11;
  FUN_140041df0(local_48,param_4,4,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_f8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_12c = 0;
  local_138 = 0;
  local_8c = 0;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde838) &&
     (_Init_thread_header(&DAT_141dde838), DAT_141dde838 == -1)) {
    DAT_141dde830 = (longlong *)FUN_140e63aa0(DAT_1419f3d88);
    _Init_thread_footer(&DAT_141dde838);
  }
  local_108 = 0x11;
  puVar12 = &DAT_1419df7b0;
  uVar13 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[2];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_108 = 0x11;
    if ((int)local_48[0] < 3) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_40[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if ((int)local_48[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[3];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    uStack_11c = 0xd;
    local_128 = 0;
    if ((int)local_48[0] < 4) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (ulonglong *)local_40[3];
      if (&local_128 == puVar9) goto LAB_140378958;
    }
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = uStack_120;
    uStack_13c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_148);
  }
LAB_140378958:
  if (DAT_141ddc14c == '\0') {
    FUN_140e64380(DAT_141dde830,"gml_Script_InputVerbGroupSetActive");
    FUN_140e64380(param_1,"gml_Script_InputVerbGroupSetActive");
  }
  local_108 = 0x13;
  if (DAT_141ddc14c == '\0') {
    DAT_141ddc14c = '\x01';
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde830 + 0x10))(DAT_141dde830,DAT_141a04048);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar15 = 0;
    uVar7 = gml_Script___Update_anon_619___InputVibrateClassADSR___InputVibrateClassADSR
                      (param_1,param_2,&local_138,0,0);
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_141a03fe8,0x80000000,&local_58,uVar15,
                  in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
    uVar14 = (undefined4)(uVar15 >> 0x20);
    FUN_140e609c0(DAT_141dde830);
    if (&local_58 != puVar6) {
      local_148 = (undefined4)local_58;
      uStack_144 = local_58._4_4_;
      uStack_140 = uStack_50;
      uStack_13c = uStack_4c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_148);
    }
    FUN_140e60910(1);
  }
  local_108 = 4;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((int)local_48[0] < 3) {
    puVar6 = &DAT_1419df7b0;
LAB_140378ac0:
    local_148 = *(undefined4 *)puVar6;
    uStack_144 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_140 = *(undefined4 *)(puVar6 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
  }
  else {
    puVar6 = (undefined8 *)local_40[2];
    if (puVar6 != &local_f8) goto LAB_140378ac0;
  }
  local_88 = &local_f8;
  uVar16 = CONCAT44(uVar14,DAT_141a014a8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_138,1,uVar16,&local_88);
  uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
  cVar1 = FUN_140e491e0(uVar7);
  uVar14 = 0;
  if (cVar1 == '\0') {
    local_108 = 5;
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    if ((int)local_48[0] < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_140378b86:
      local_148 = *(undefined4 *)puVar6;
      uStack_144 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_148);
    }
    else {
      puVar6 = (undefined8 *)local_40[2];
      if (puVar6 != &local_e8) goto LAB_140378b86;
    }
    local_80 = &local_e8;
    local_148 = _DAT_141dd1cf8;
    uStack_144 = uRam0000000141dd1cfc;
    uStack_140 = uRam0000000141dd1d00;
    uStack_13c = DAT_141dd1d04;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_148);
    local_78 = local_d8;
    puVar8 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar5,DAT_1419fdc58),&local_80);
    if (puVar8 != local_c8) {
      local_148 = *puVar8;
      uStack_144 = puVar8[1];
      uStack_140 = puVar8[2];
      uStack_13c = puVar8[3];
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_148);
    }
    local_70 = local_c8;
    local_148 = _DAT_141dd1d38;
    uStack_144 = uRam0000000141dd1d3c;
    uStack_140 = uRam0000000141dd1d40;
    uStack_13c = DAT_141dd1d44;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_148);
    local_68 = local_b8;
    FUN_14008e020(param_1,param_2,&local_98,3,&local_78);
    uVar14 = local_8c;
  }
  local_108 = 8;
  if ((int)local_48[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[2];
  }
  uStack_11c = 0;
  local_128 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar6,&local_128,DAT_141955260,1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (uVar4 < 0x80000000) {
    local_108 = 9;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_148 = _DAT_141dd1ce8;
    uStack_144 = uRam0000000141dd1cec;
    uStack_140 = uRam0000000141dd1cf0;
    uStack_13c = DAT_141dd1cf4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_88 = &local_f8;
    if ((int)local_48[0] < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_140378dbe:
      local_148 = *(undefined4 *)puVar6;
      uStack_144 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_148);
    }
    else {
      puVar6 = (undefined8 *)local_40[2];
      if (puVar6 != &local_e8) goto LAB_140378dbe;
    }
    local_80 = &local_e8;
    local_148 = _DAT_141dd1d28;
    uStack_144 = uRam0000000141dd1d2c;
    uStack_140 = uRam0000000141dd1d30;
    uStack_13c = DAT_141dd1d34;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_148);
    local_78 = local_d8;
    local_148 = _DAT_1419e4580;
    uStack_144 = uRam00000001419e4584;
    uStack_140 = uRam00000001419e4588;
    uStack_13c = uRam00000001419e458c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_148);
    local_70 = local_c8;
    local_148 = _DAT_141dd1d08;
    uStack_144 = uRam0000000141dd1d0c;
    uStack_140 = uRam0000000141dd1d10;
    uStack_13c = DAT_141dd1d14;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_148);
    local_68 = local_b8;
    FUN_14008e020(param_1,param_2,&local_138,5,&local_88);
  }
  local_108 = 0x11;
  if ((int)local_48[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[2];
  }
  uStack_11c = 0;
  local_128 = 0;
  iVar3 = FUN_140e851f0(puVar6,&local_128,DAT_141955260,1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar3 != -2 && iVar3 < 0) {
    local_108 = 0x13;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_148 = _DAT_141dd1ce8;
    uStack_144 = uRam0000000141dd1cec;
    uStack_140 = uRam0000000141dd1cf0;
    uStack_13c = DAT_141dd1cf4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_88 = &local_f8;
    if ((int)local_48[0] < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_140378fc2:
      local_148 = *(undefined4 *)puVar6;
      uStack_144 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_148);
    }
    else {
      puVar6 = (undefined8 *)local_40[2];
      if (puVar6 != &local_e8) goto LAB_140378fc2;
    }
    local_80 = &local_e8;
    local_148 = _DAT_141dd1d18;
    uStack_144 = uRam0000000141dd1d1c;
    uStack_140 = uRam0000000141dd1d20;
    uStack_13c = DAT_141dd1d24;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_148);
    local_78 = local_d8;
    FUN_14008e020(param_1,param_2,&local_138,3,&local_88);
  }
  local_108 = 0x17;
  if ((int)local_48[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_40[1];
  }
  cVar1 = FUN_140e491e0(puVar6);
  if (cVar1 == '\0') {
    local_108 = 0x25;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde830 + 0x10))(DAT_141dde830,DAT_141a04048);
    FUN_140e609c0(DAT_141dde830);
    if ((int)local_48[0] < 1) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (undefined8 *)*local_40;
    }
    bVar2 = FUN_140e4a8b0(puVar11);
    if (2 < (int)local_48[0]) {
      puVar12 = (undefined8 *)local_40[2];
    }
    uVar5 = FUN_140e4a740(puVar12);
    uVar7 = FUN_140e48e40(puVar6,uVar5);
    FUN_140e609c0(*(undefined8 *)*puVar6);
    FUN_14018a5b0(uVar7,1L << (bVar2 & 0x3f));
  }
  else {
    local_108 = 0x19;
    if ((int)local_48[0] < 4) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_40[3];
    }
    cVar1 = FUN_140e491e0(puVar6);
    if (cVar1 == '\0') {
      local_108 = 0x20;
      puVar6 = (undefined8 *)(**(code **)(*DAT_141dde830 + 0x10))(DAT_141dde830,DAT_141a04048);
      FUN_140e609c0(DAT_141dde830);
      if ((int)local_48[0] < 1) {
        puVar11 = &DAT_1419df7b0;
      }
      else {
        puVar11 = (undefined8 *)*local_40;
      }
      bVar2 = FUN_140e4a8b0(puVar11);
      if (2 < (int)local_48[0]) {
        puVar12 = (undefined8 *)local_40[2];
      }
      uVar5 = FUN_140e4a740(puVar12);
      pdVar10 = (double *)FUN_140e48e40(puVar6,uVar5);
      FUN_140e609c0(*(undefined8 *)*puVar6);
      uVar15 = ~(1L << (bVar2 & 0x3f));
      uVar4 = *(uint *)((longlong)pdVar10 + 0xc) & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 == 7) {
          *(uint *)pdVar10 = *(uint *)pdVar10 & (uint)uVar15;
          goto LAB_14037929b;
        }
        if (uVar4 == 10) {
          *pdVar10 = (double)((ulonglong)*pdVar10 & uVar15);
          goto LAB_14037929b;
        }
        if (uVar4 != 0xd) {
          uStack_11c = 10;
          local_128 = uVar15;
          FUN_140042910(&DAT_14172c47c,pdVar10,&local_128);
          if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          goto LAB_14037929b;
        }
      }
      *pdVar10 = (double)(uVar15 & (longlong)*pdVar10);
      *(uint *)((longlong)pdVar10 + 0xc) = 10;
    }
    else {
      local_108 = 0x1c;
      puVar6 = (undefined8 *)(**(code **)(*DAT_141dde830 + 0x10))();
      FUN_140e609c0(DAT_141dde830);
      if ((int)local_48[0] < 1) {
        puVar11 = &DAT_1419df7b0;
      }
      else {
        puVar11 = (undefined8 *)*local_40;
      }
      bVar2 = FUN_140e4a8b0(puVar11);
      if (2 < (int)local_48[0]) {
        puVar12 = (undefined8 *)local_40[2];
      }
      uVar5 = FUN_140e4a740(puVar12);
      puVar9 = (ulonglong *)FUN_140e48e40(puVar6,uVar5);
      FUN_140e609c0(*(undefined8 *)*puVar6);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *(undefined4 *)((longlong)puVar9 + 0xc) = 10;
      *puVar9 = ~(1L << (bVar2 & 0x3f));
    }
  }
LAB_14037929b:
  FUN_140e60910(2);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,5,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar12 = local_40;
    do {
      puVar6 = (undefined8 *)*puVar12;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar12 = puVar12 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

