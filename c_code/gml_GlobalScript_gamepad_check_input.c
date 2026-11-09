// gml_GlobalScript_gamepad_check_input @ 0x140284c20

undefined8 *
gml_GlobalScript_gamepad_check_input
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffed0;
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 *local_58 [2];
  uint local_48 [2];
  undefined8 *local_40;
  
  ppuVar10 = local_58;
  local_d0 = "gml_Script_FracPos";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 1;
  FUN_140041df0(local_48,param_4,2,param_5);
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 1;
  puVar5 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_40;
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_c8 = 1;
    uStack_11c = 0xd;
    local_128 = 0x3ff0000000000000;
    if ((int)local_48[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_40;
      if (&local_128 == puVar3) goto LAB_140284db9;
    }
    local_108 = 0;
    uStack_104 = 0x3ff00000;
    uStack_100 = uStack_120;
    uStack_fc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_108);
  }
LAB_140284db9:
  if ((int)local_48[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_40[1];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    uStack_11c = 0xd;
    local_128 = 0x3ff0000000000000;
    if ((int)local_48[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_40[1];
      if (&local_128 == puVar3) goto LAB_140284e36;
    }
    local_108 = 0;
    uStack_104 = 0x3ff00000;
    uStack_100 = uStack_120;
    uStack_fc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_108);
  }
LAB_140284e36:
  local_c8 = 2;
  if ((int)local_48[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_40;
  }
  cVar1 = FUN_140e491e0(puVar3);
  if (cVar1 != '\0') {
    local_c8 = 4;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uStack_11c = 6;
    uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_88,uVar7,
                  in_stack_fffffffffffffed0 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_108 = (undefined4)local_88;
    uStack_104 = local_88._4_4_;
    uStack_100 = uStack_80;
    uStack_fc = uStack_7c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_108);
    local_58[0] = local_78;
    uVar7 = CONCAT44(uVar8,DAT_141a579a0);
    ppuVar9 = ppuVar10;
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,1,uVar7,ppuVar10);
    if (puVar3 != &local_e8) {
      local_108 = *(undefined4 *)puVar3;
      uStack_104 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_100 = *(undefined4 *)(puVar3 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_108);
    }
    local_c8 = 5;
    uStack_11c = 6;
    in_stack_fffffffffffffed0 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    pcVar6 = (code *)(uVar7 & 0xffffffffffffff00);
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_b0,pcVar6,in_stack_fffffffffffffed0);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_1400462a0(&local_b0,&local_e8);
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_b0);
  }
  local_c8 = 8;
  if (1 < (int)local_48[0]) {
    puVar5 = (undefined8 *)local_40[1];
  }
  cVar1 = FUN_140e491e0(puVar5);
  if (cVar1 != '\0') {
    local_c8 = 10;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uStack_11c = 6;
    uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_98,uVar7,
                  in_stack_fffffffffffffed0 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_108 = (undefined4)local_98;
    uStack_104 = local_98._4_4_;
    uStack_100 = uStack_90;
    uStack_fc = uStack_8c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_108);
    local_58[0] = local_78;
    uVar7 = CONCAT44(uVar8,DAT_141a579a0);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,1,uVar7,ppuVar10);
    if (puVar5 != &local_f8) {
      local_108 = *(undefined4 *)puVar5;
      uStack_104 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_100 = *(undefined4 *)(puVar5 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_108);
    }
    local_c8 = 0xb;
    uStack_11c = 6;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_c0,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar10 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_1400462a0(&local_c0,&local_f8);
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_c0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,2,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar5 = local_40;
    do {
      puVar3 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

