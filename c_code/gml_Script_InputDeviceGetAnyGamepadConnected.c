// gml_Script_InputDeviceGetAnyGamepadConnected @ 0x14031d4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputDeviceGetAnyGamepadConnected
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  double dVar12;
  undefined4 uVar14;
  undefined8 **ppuVar13;
  ulonglong uVar15;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  double local_110;
  undefined4 local_108;
  uint local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined4 local_b8 [3];
  undefined4 local_ac;
  undefined8 local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 *local_88;
  undefined4 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  uint local_50 [2];
  undefined8 *local_48;
  
  local_120 = "gml_Script_InputDeviceEnumerate";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 9;
  FUN_140041df0(local_50,param_4,1,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_104 = 0xffffff;
  local_110 = 0.0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_cc = 0xffffff;
  local_d8 = (undefined1 *)0x0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_14c = 0;
  local_158 = 0;
  local_54 = 0;
  local_60 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde168) &&
     (_Init_thread_header(&DAT_141dde168), DAT_141dde168 == -1)) {
    DAT_141dde160 = (longlong *)FUN_140e63aa0(DAT_1419f0b58);
    _Init_thread_footer(&DAT_141dde168);
  }
  local_118 = 9;
  puVar11 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_50[0];
  if ((int)local_50[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_48;
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_118 = 9;
    uStack_13c = 0xd;
    local_148 = 0.0;
    if ((int)local_50[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_48;
      if (&local_148 == puVar3) goto LAB_14031d6d7;
    }
    local_98 = 0.0;
    uStack_90 = uStack_140;
    uStack_8c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_98);
  }
LAB_14031d6d7:
  if (DAT_141ddc0d2 == '\0') {
    FUN_140e64380(DAT_141dde160,"gml_Script_InputDeviceEnumerate");
    FUN_140e64380(param_1,"gml_Script_InputDeviceEnumerate");
  }
  local_118 = 0xb;
  if (DAT_141ddc0d2 == '\0') {
    DAT_141ddc0d2 = '\x01';
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar3 = (undefined8 *)(**(code **)(*DAT_141dde160 + 0x10))(DAT_141dde160,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde160);
    uVar14 = 0;
    puVar4 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_158,0,0);
    if (puVar4 != puVar3) {
      local_148 = (double)*puVar4;
      uStack_140 = *(undefined4 *)(puVar4 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_148);
    }
    FUN_140e60910(1);
    puVar3 = (undefined8 *)(**(code **)(*DAT_141dde160 + 0x10))(DAT_141dde160,DAT_1419fee58);
    FUN_140e609c0(DAT_141dde160);
    puVar4 = (undefined8 *)FUN_140e8da20(&local_60,param_1,0);
    if (puVar4 != puVar3) {
      local_148 = (double)*puVar4;
      uStack_140 = *(undefined4 *)(puVar4 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_148);
    }
    FUN_140e60910(1);
  }
  local_118 = 0xe;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141dde160 + 8))(DAT_141dde160,DAT_1419fee58);
  if (puVar3 != &local_c8) {
    local_148 = (double)*puVar3;
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_148);
  }
  local_88 = &local_c8;
  local_148 = (double)CONCAT44(uRam0000000141dc6444,_DAT_141dc6440);
  uStack_140 = uRam0000000141dc6448;
  uStack_13c = uRam0000000141dc644c;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_80 = local_b8;
  uVar6 = CONCAT44(uVar14,DAT_1419fee68);
  FUN_140e634e0(param_1,param_2,&local_158,2,uVar6,&local_88);
  uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_118 = 0x12;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar15 = 0;
  uVar9 = CONCAT44(uVar14,DAT_141a014d8);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_158,0,uVar9,0);
  if (pdVar5 != &local_110) {
    local_148 = *pdVar5;
    uStack_140 = *(undefined4 *)(pdVar5 + 1);
    uStack_13c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    FUN_140041b80(&local_110,&local_148);
  }
  local_118 = 0x14;
  uVar6 = (**(code **)(*DAT_141dde160 + 8))(DAT_141dde160,DAT_1419fcb48);
  uVar15 = uVar15 & 0xffffffffffffff00;
  ppuVar13 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
  FUN_140e87440(uVar6,DAT_141a01448,0x80000000,&local_70,ppuVar13,uVar15);
  cVar1 = FUN_140e491e0(&local_70);
  if (cVar1 == '\0') {
    local_118 = 0x18;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_cc = 0;
    local_d8 = &DAT_bff0000000000000;
    local_118 = 0x19;
    uStack_8c = local_104;
    uStack_90 = local_108;
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) == 0) {
      local_98 = local_110;
    }
    else {
      FUN_1400419b0(&local_98,&local_110);
    }
    uStack_13c = 7;
    local_148 = (double)CONCAT44(local_148._4_4_,1);
    FUN_1400462a0(&local_98,&local_148);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_e8 = (undefined4)local_98;
    uStack_e4 = local_98._4_4_;
    uStack_e0 = uStack_90;
    uStack_dc = uStack_8c;
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_e8);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
  }
  else {
    uVar6 = (**(code **)(*DAT_141dde160 + 8))(DAT_141dde160,DAT_1419fcb48);
    ppuVar13 = (undefined8 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
    FUN_140e87440(uVar6,DAT_141a01448,0x80000000,&local_70,ppuVar13,uVar15 & 0xffffffffffffff00);
    FUN_140e491e0(&local_70);
    local_118 = 0x1d;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_cc = 0;
    local_d8 = (undefined1 *)0x3ff0000000000000;
    local_118 = 0x1e;
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    local_f4 = 0;
    local_100 = 0;
  }
  local_118 = 0x21;
  dVar12 = local_110;
  if ((local_104 & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_110);
  }
  uVar9 = (ulonglong)dVar12;
  uVar8 = (uint)uVar9;
  while (uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20), 0 < (int)uVar8) {
    uVar8 = (int)uVar9 - 1;
    uVar9 = (ulonglong)uVar8;
    local_118 = 0x23;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_88 = &local_100;
    ppuVar13 = &local_88;
    uVar6 = gml_Script_InputDeviceIsGamepad(param_1,param_2,&local_158,1,&local_88);
    cVar1 = FUN_140e491e0(uVar6);
    uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    if (cVar1 != '\0') {
      local_118 = 0x23;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      puVar7 = (undefined4 *)(**(code **)(*DAT_141dde160 + 8))(DAT_141dde160,DAT_1419fee58);
      if (puVar7 != local_b8) {
        local_e8 = *puVar7;
        uStack_e4 = puVar7[1];
        uStack_e0 = puVar7[2];
        uStack_dc = puVar7[3];
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_e8);
      }
      local_80 = local_b8;
      local_78 = &local_100;
      ppuVar13 = (undefined8 **)CONCAT44(uVar14,DAT_1419fe568);
      FUN_140e634e0(param_1,param_2,&local_138,2,ppuVar13,&local_80);
    }
    local_118 = 0x24;
    FUN_1400460e0(&local_100,&local_d8);
  }
  local_118 = 0x28;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141dde160 + 8))(DAT_141dde160,DAT_1419fee58);
  if (puVar3 != &local_c8) {
    local_e8 = *(undefined4 *)puVar3;
    uStack_e4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
  }
  local_88 = &local_c8;
  local_e8 = _DAT_1419e3fc0;
  uStack_e4 = uRam00000001419e3fc4;
  uStack_e0 = uRam00000001419e3fc8;
  uStack_dc = uRam00000001419e3fcc;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_e8);
  local_80 = local_b8;
  uVar6 = CONCAT44(uVar14,DAT_1419fe568);
  FUN_140e634e0(param_1,param_2,&local_138,2,uVar6,&local_88);
  uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_118 = 0x2a;
  if (0 < (int)local_50[0]) {
    puVar11 = (undefined8 *)*local_48;
  }
  cVar1 = FUN_140e491e0(puVar11);
  if (cVar1 != '\0') {
    local_118 = 0x2a;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar3 = (undefined8 *)(**(code **)(*DAT_141dde160 + 8))(DAT_141dde160,DAT_1419fee58);
    if (puVar3 != &local_c8) {
      local_e8 = *(undefined4 *)puVar3;
      uStack_e4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_e0 = *(undefined4 *)(puVar3 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_e8);
    }
    local_88 = &local_c8;
    local_e8 = _DAT_1419e3fd0;
    uStack_e4 = uRam00000001419e3fd4;
    uStack_e0 = uRam00000001419e3fd8;
    uStack_dc = uRam00000001419e3fdc;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
    local_80 = local_b8;
    FUN_140e634e0(param_1,param_2,&local_158,2,CONCAT44(uVar14,DAT_1419fe568),&local_88);
  }
  local_118 = 0x2c;
  if (puVar3 != param_3) {
    local_e8 = *(undefined4 *)puVar3;
    uStack_e4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_e8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,3,FUN_140041b30);
  if (0 < (int)local_50[0]) {
    puVar11 = local_48;
    do {
      puVar3 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_48);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

