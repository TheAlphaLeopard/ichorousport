// gml_Script_InputPlugInGamepadGetVendorAndProduct @ 0x140359cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputPlugInGamepadGetVendorAndProduct
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_80 = "gml_Script_InputPlugInGamepadBlock";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 9;
  _eh_vector_constructor_iterator_(&local_108,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_11c = 0;
  local_128 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xb;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  uStack_12c = 0;
  local_138 = 0;
  iVar2 = FUN_140e851f0(puVar3,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (!(iVar2 == -2 || -1 < iVar2)) {
    local_78 = 0xd;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    local_138 = CONCAT44(uRam0000000141dd135c,_DAT_141dd1358);
    uStack_130 = uRam0000000141dd1360;
    uStack_12c = DAT_141dd1364;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_138);
    local_60 = local_f8;
    if (param_4 < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_140359e66:
      local_138 = *puVar3;
      uStack_130 = *(undefined4 *)(puVar3 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_138);
    }
    else {
      puVar3 = (undefined8 *)*param_5;
      if (puVar3 != &local_e8) goto LAB_140359e66;
    }
    local_58 = &local_e8;
    local_138 = CONCAT44(uRam0000000141dd136c,_DAT_141dd1368);
    uStack_130 = uRam0000000141dd1370;
    uStack_12c = DAT_141dd1374;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_138);
    local_50 = local_d8;
    FUN_14008e020(param_1,param_2,&local_128,3,&local_60);
  }
  local_78 = 0x10;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 == &local_108) goto LAB_140359f6f;
  }
  local_138 = *puVar3;
  uStack_130 = *(undefined4 *)(puVar3 + 1);
  uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_138);
LAB_140359f6f:
  local_68 = &local_108;
  uVar4 = gml_Script_InputDeviceIsGamepad(param_1,param_2,&local_128,1,&local_68);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_78 = 0x12;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    local_138 = CONCAT44(uRam00000001419e4394,_DAT_1419e4390);
    uStack_130 = uRam00000001419e4398;
    uStack_12c = uRam00000001419e439c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_138);
    local_60 = local_f8;
    if ((param_4 < 1) || (puVar5 = (undefined8 *)*param_5, puVar5 != &local_e8)) {
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_138);
    }
    local_58 = &local_e8;
    local_138 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_130 = uRam00000001419df7a8;
    uStack_12c = uRam00000001419df7ac;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_138);
    local_50 = local_d8;
    local_138 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_130 = DAT_1419df7b8;
    uStack_12c = DAT_1419df7bc;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_138);
    local_48 = local_c8;
    local_138 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_130 = DAT_1419df7b8;
    uStack_12c = DAT_1419df7bc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_138);
    local_40 = local_b8;
    local_138 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_130 = DAT_1419df7b8;
    uStack_12c = DAT_1419df7bc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_138);
    local_38 = local_a8;
    local_138 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_130 = DAT_1419df7b8;
    uStack_12c = DAT_1419df7bc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_138);
    local_30 = local_98;
    gml_GlobalScript___InputPlugInRegisterCallbackInternal(param_1,param_2,&local_118,7,&local_60);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

