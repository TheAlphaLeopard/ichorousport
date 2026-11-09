// gml_Script_anon_9662_BM_NEW_MENU_BYTEMAP_menu_manager @ 0x140252e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_9662_BM_NEW_MENU_BYTEMAP_menu_manager
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  
  local_d0 = "gml_Script_anon@8450@BM_NEW_MENU@BYTEMAP_menu_manager";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0xf0;
  FUN_140041df0(local_68,param_4,3,param_5);
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0xf0;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_c8 = 0xf0;
    if ((int)local_68[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_60;
      if (puVar4 == (undefined8 *)&DAT_141dce048) goto LAB_140252f4c;
    }
    local_e8 = _DAT_141dce048;
    uStack_e4 = uRam0000000141dce04c;
    uStack_e0 = uRam0000000141dce050;
    uStack_dc = DAT_141dce054;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_e8);
  }
LAB_140252f4c:
  if ((int)local_68[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_60[1];
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_68[0] < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_60[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = &DAT_bff0000000000000;
  }
  if ((int)local_68[0] < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_60[2];
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if ((int)local_68[0] < 3) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_60[2];
    }
    puVar2 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_f8,0,CONCAT44(uVar7,DAT_1419fd6d8),0);
    if (puVar2 != puVar4) {
      local_e8 = *(undefined4 *)puVar2;
      uStack_e4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_e0 = *(undefined4 *)(puVar2 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_e8);
    }
  }
  local_c8 = 0xf1;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a555a0);
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_1402530c4:
    local_e8 = *(undefined4 *)puVar4;
    uStack_e4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_e8);
  }
  else {
    puVar4 = (undefined8 *)*local_60;
    if (puVar4 != &local_b8) goto LAB_1402530c4;
  }
  local_58 = &local_b8;
  local_e8 = _DAT_1419e38a0;
  uStack_e4 = uRam00000001419e38a4;
  uStack_e0 = uRam00000001419e38a8;
  uStack_dc = uRam00000001419e38ac;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_e8);
  local_50 = local_a8;
  if ((int)local_68[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_60[1];
    if (puVar4 == &local_98) goto LAB_14025317f;
  }
  local_e8 = *(undefined4 *)puVar4;
  uStack_e4 = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_e0 = *(undefined4 *)(puVar4 + 1);
  uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_e8);
LAB_14025317f:
  local_48 = &local_98;
  local_e8 = (undefined4)DAT_1419df7b0;
  uStack_e4 = DAT_1419df7b0._4_4_;
  uStack_e0 = DAT_1419df7b8;
  uStack_dc = DAT_1419df7bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_e8);
  local_40 = local_88;
  if (((int)local_68[0] < 3) || (puVar5 = (undefined8 *)local_60[2], puVar5 != &local_78)) {
    local_e8 = *(undefined4 *)puVar5;
    uStack_e4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_e8);
  }
  local_38 = &local_78;
  FUN_140e63610(param_1,param_2,&local_f8,5,uVar3,&local_58);
  local_c8 = 0xf2;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,5,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar5 = local_60;
    do {
      puVar4 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

