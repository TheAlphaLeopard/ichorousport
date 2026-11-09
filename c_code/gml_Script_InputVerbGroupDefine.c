// gml_Script_InputVerbGroupDefine @ 0x140376030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputVerbGroupDefine
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong in_stack_fffffffffffffec0;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_b0 = "gml_Script_InputVerbGroupDeactivateAll";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 10;
  FUN_140041df0(local_48,param_4,1,param_5);
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_11c = 0;
  local_128 = 0;
  local_94 = 0;
  local_a0 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde808) &&
     (_Init_thread_header(&DAT_141dde808), DAT_141dde808 == -1)) {
    DAT_141dde800 = (longlong *)FUN_140e63aa0(DAT_1419f3c98);
    _Init_thread_footer(&DAT_141dde808);
  }
  local_a8 = 10;
  puVar9 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_a8 = 10;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_40;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if (DAT_141ddc148 == '\0') {
    FUN_140e64380(DAT_141dde800,"gml_Script_InputVerbGroupDeactivateAll");
    FUN_140e64380(param_1,"gml_Script_InputVerbGroupDeactivateAll");
  }
  local_a8 = 0xc;
  if (DAT_141ddc148 == '\0') {
    DAT_141ddc148 = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde800 + 0x10))(DAT_141dde800,DAT_141a04048);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar10 = 0;
    uVar6 = gml_Script___Update_anon_619___InputVibrateClassADSR___InputVibrateClassADSR
                      (param_1,param_2,&local_128,0,0);
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_141a03fe8,0x80000000,&local_68,uVar10,
                  in_stack_fffffffffffffec0 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar10 >> 0x20);
    FUN_140e609c0(DAT_141dde800);
    if (&local_68 != puVar5) {
      local_138 = local_68;
      uStack_130 = uStack_60;
      uStack_12c = uStack_5c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_138);
    }
    FUN_140e60910(1);
  }
  local_a8 = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140376327:
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_118) goto LAB_140376327;
  }
  local_90 = &local_118;
  uVar11 = CONCAT44(uVar8,DAT_141a014a8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar11,&local_90);
  uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar1 = FUN_140e491e0(uVar6);
  uVar8 = 0;
  if (cVar1 == '\0') {
    local_a8 = 10;
    local_a0 = 0;
    local_98 = 0;
    local_94 = 5;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_1403763ef:
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_138);
    }
    else {
      puVar5 = (undefined8 *)*local_40;
      if (puVar5 != &local_108) goto LAB_1403763ef;
    }
    local_88 = &local_108;
    local_138 = CONCAT44(uRam0000000141dd1c4c,_DAT_141dd1c48);
    uStack_130 = uRam0000000141dd1c50;
    uStack_12c = DAT_141dd1c54;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_138);
    local_80 = local_f8;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_c8,1,CONCAT44(uVar4,DAT_1419fdc58),&local_88);
    if (puVar5 != &local_e8) {
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_138);
    }
    local_78 = &local_e8;
    local_138 = CONCAT44(uRam0000000141dd1c2c,_DAT_141dd1c28);
    uStack_130 = uRam0000000141dd1c30;
    uStack_12c = DAT_141dd1c34;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_138);
    local_70 = local_d8;
    FUN_14008e020(param_1,param_2,&local_a0,3,&local_80);
    uVar8 = local_94;
  }
  local_a8 = 0x10;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  uStack_12c = 0;
  local_138 = 0x3ff0000000000000;
  uVar3 = FUN_140e851f0(puVar5,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (uVar3 < 0x80000000) {
    local_a8 = 0x13;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    local_138 = CONCAT44(uRam0000000141dd1c0c,_DAT_141dd1c08);
    uStack_130 = uRam0000000141dd1c10;
    uStack_12c = DAT_141dd1c14;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
    local_90 = &local_118;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_14037662b:
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_138);
    }
    else {
      puVar5 = (undefined8 *)*local_40;
      if (puVar5 != &local_108) goto LAB_14037662b;
    }
    local_88 = &local_108;
    local_138 = CONCAT44(uRam0000000141dd1c3c,_DAT_141dd1c38);
    uStack_130 = uRam0000000141dd1c40;
    uStack_12c = DAT_141dd1c44;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_138);
    local_80 = local_f8;
    local_138 = CONCAT44(uRam00000001419e4554,_DAT_1419e4550);
    uStack_130 = uRam00000001419e4558;
    uStack_12c = uRam00000001419e455c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
    local_78 = &local_e8;
    local_138 = CONCAT44(uRam0000000141dd1c1c,_DAT_141dd1c18);
    uStack_130 = uRam0000000141dd1c20;
    uStack_12c = DAT_141dd1c24;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_138);
    local_70 = local_d8;
    FUN_14008e020(param_1,param_2,&local_128,5,&local_90);
  }
  local_a8 = 0x13;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  uStack_12c = 0;
  local_138 = 0;
  iVar2 = FUN_140e851f0(puVar5,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 == -2 || -1 < iVar2) goto LAB_1403768c8;
  local_a8 = 0x13;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_58 = _DAT_141dd1c08;
  uStack_54 = uRam0000000141dd1c0c;
  uStack_50 = uRam0000000141dd1c10;
  uStack_4c = DAT_141dd1c14;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_58);
  local_90 = &local_118;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140376831:
    local_58 = *(undefined4 *)puVar5;
    uStack_54 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_50 = *(undefined4 *)(puVar5 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_58);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_108) goto LAB_140376831;
  }
  local_88 = &local_108;
  local_58 = _DAT_141dd1c58;
  uStack_54 = uRam0000000141dd1c5c;
  uStack_50 = uRam0000000141dd1c60;
  uStack_4c = DAT_141dd1c64;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_58);
  local_80 = local_f8;
  FUN_14008e020(param_1,param_2,&local_128,3,&local_90);
LAB_1403768c8:
  local_a8 = 0x10;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141dde800 + 0x10))(DAT_141dde800,DAT_141a04048);
  FUN_140e609c0(DAT_141dde800);
  if (0 < (int)local_48[0]) {
    puVar9 = (undefined8 *)*local_40;
  }
  uVar4 = FUN_140e4a740(puVar9);
  puVar9 = (undefined8 *)FUN_140e48e40(puVar5,uVar4);
  FUN_140e609c0(*(undefined8 *)*puVar5);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar9);
  }
  *(undefined4 *)((longlong)puVar9 + 0xc) = 10;
  *puVar9 = 0x3ffffffffffff;
  FUN_140e60910(2);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,5,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar9 = local_40;
    do {
      puVar5 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

