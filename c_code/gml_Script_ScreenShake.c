// gml_Script_ScreenShake @ 0x14044cd70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_ScreenShake
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
  ulonglong in_stack_fffffffffffffec0;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  uint local_58 [2];
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_f0 = "gml_Script_screenFlash";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 2;
  FUN_140041df0(local_58,param_4,1,param_5);
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 2;
  puVar5 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_50;
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_e8 = 2;
    if ((int)local_58[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_50;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x4024000000000000;
  }
  local_e8 = 4;
  uStack_12c = 0xf;
  local_138 = 0x100000000000058;
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_138,DAT_1419ef4f8,0x80000000,&local_b8,uVar7,in_stack_fffffffffffffec0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  cVar1 = FUN_140e491e0(&local_b8);
  if (cVar1 == '\0') {
    local_e8 = 4;
  }
  else {
    local_e8 = 6;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uStack_12c = 6;
    in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_138 = param_1;
    FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_c8,uVar7,in_stack_fffffffffffffec0);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    uStack_12c = 6;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_138 = param_1;
    FUN_140e87440(&local_138,DAT_1419fe158,0x80000000,&local_d8,uVar7,
                  in_stack_fffffffffffffec0 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = local_c8;
    uStack_130 = uStack_c0;
    uStack_12c = uStack_bc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_138);
    local_48 = local_98;
    local_138 = local_d8;
    uStack_130 = uStack_d0;
    uStack_12c = uStack_cc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_138);
    local_40 = local_88;
    local_138 = CONCAT44(uRam0000000141dd2d9c,_DAT_141dd2d98);
    uStack_130 = uRam0000000141dd2da0;
    uStack_12c = DAT_141dd2da4;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_138);
    local_38 = local_78;
    uStack_12c = 0xf;
    local_138 = 0x10000000000010a;
    local_a8 = 0x10a;
    uStack_a4 = 0x1000000;
    uStack_a0 = uStack_130;
    uStack_9c = 0xf;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_a8);
    local_30 = local_68;
    puVar3 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_128,4,CONCAT44(uVar8,DAT_141a0a7c8),&local_48);
    if (puVar3 != &local_108) {
      local_a8 = *(undefined4 *)puVar3;
      uStack_a4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_a0 = *(undefined4 *)(puVar3 + 1);
      uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_a8);
    }
    local_e8 = 7;
    if (((int)local_58[0] < 1) || (puVar5 = (undefined8 *)*local_50, puVar5 != &local_118)) {
      local_a8 = *(undefined4 *)puVar5;
      uStack_a4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_a0 = *(undefined4 *)(puVar5 + 1);
      uStack_9c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_a8);
    }
    FUN_140e86c30(&local_108,DAT_141a0a7e8,0,&local_118);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,4,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar5 = local_50;
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
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

