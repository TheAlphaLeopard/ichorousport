// gml_Script_flash_anon_11015___scribble_class_element___scribble_class_element @ 0x1401150e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_flash_anon_11015___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined4 uVar13;
  undefined8 uVar12;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_60 = "gml_Script_gradient@anon@10318@__scribble_class_element@__scribble_class_element";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x13f;
  FUN_140041df0(local_38,param_4,2,param_5);
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddcee4) &&
     (_Init_thread_header(&DAT_141ddcee4), DAT_141ddcee4 == -1)) {
    DAT_141ddce28 = (longlong *)FUN_140e63aa0(DAT_141a05f18);
    _Init_thread_footer(&DAT_141ddcee4);
  }
  if (DAT_141ddc075 == '\0') {
    FUN_140e64380(DAT_141ddce28,
                  "gml_Script_gradient@anon@10318@__scribble_class_element@__scribble_class_element"
                 );
    FUN_140e64380(param_1,
                  "gml_Script_gradient@anon@10318@__scribble_class_element@__scribble_class_element"
                 );
  }
  local_58 = 0x141;
  if (DAT_141ddc075 == '\0') {
    DAT_141ddc075 = '\x01';
    puVar4 = (undefined4 *)(**(code **)(*DAT_141ddce28 + 0x10))(DAT_141ddce28,DAT_141a05548);
    FUN_140e609c0(DAT_141ddce28);
    uVar13 = 0;
    puVar5 = (undefined4 *)gml_GlobalScript___scribble_constants(param_1,param_2,&local_b8,0,0);
    if (puVar5 != puVar4) {
      local_c8 = *puVar5;
      uStack_c4 = puVar5[1];
      uStack_c0 = puVar5[2];
      uStack_bc = puVar5[3];
      if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_c8);
    }
    FUN_140e60910(1);
  }
  local_58 = 0x143;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar10 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_1401152f1:
    local_c8 = *(undefined4 *)puVar7;
    uStack_c4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_c0 = *(undefined4 *)(puVar7 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_c8);
  }
  else {
    puVar7 = (undefined8 *)*local_30;
    if (puVar7 != &local_98) goto LAB_1401152f1;
  }
  local_50 = &local_98;
  uVar12 = CONCAT44(uVar13,DAT_1419fdbf8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_b8,1,uVar12,&local_50);
  uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    local_58 = 0x145;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    puVar7 = (undefined8 *)(**(code **)(*DAT_141ddce28 + 8))(DAT_141ddce28,DAT_141a05548);
    if (puVar7 != &local_88) {
      local_c8 = *(undefined4 *)puVar7;
      uStack_c4 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_c0 = *(undefined4 *)(puVar7 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_c8);
    }
    local_48 = &local_88;
    if ((int)local_38[0] < 1) {
      puVar7 = &DAT_1419df7b0;
LAB_1401153f5:
      local_c8 = *(undefined4 *)puVar7;
      uStack_c4 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_c0 = *(undefined4 *)(puVar7 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_c8);
    }
    else {
      puVar7 = (undefined8 *)*local_30;
      if (puVar7 != &local_78) goto LAB_1401153f5;
    }
    local_40 = &local_78;
    if ((int)local_38[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_30;
    }
    puVar8 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_a8,2,CONCAT44(uVar13,DAT_141a01138),&local_48);
    if (puVar8 != puVar7) {
      local_c8 = *(undefined4 *)puVar8;
      uStack_c4 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_c0 = *(undefined4 *)(puVar8 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_c8);
    }
    local_58 = 0x146;
    if ((int)local_38[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_30;
    }
    iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar2 == 0) {
      local_58 = 0x148;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 5;
      local_c8 = _DAT_141dcb798;
      uStack_c4 = uRam0000000141dcb79c;
      uStack_c0 = uRam0000000141dcb7a0;
      uStack_bc = DAT_141dcb7a4;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_c8);
      local_50 = &local_98;
      if (((int)local_38[0] < 1) || (puVar10 = (undefined8 *)*local_30, puVar10 != &local_88)) {
        local_c8 = *(undefined4 *)puVar10;
        uStack_c4 = *(undefined4 *)((longlong)puVar10 + 4);
        uStack_c0 = *(undefined4 *)(puVar10 + 1);
        uStack_bc = *(undefined4 *)((longlong)puVar10 + 0xc);
        if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_c8);
      }
      local_48 = &local_88;
      local_c8 = _DAT_141dcb688;
      uStack_c4 = uRam0000000141dcb68c;
      uStack_c0 = uRam0000000141dcb690;
      uStack_bc = DAT_141dcb694;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_c8);
      local_40 = &local_78;
      FUN_1401ef7f0(param_1,param_2,&local_b8,3,&local_50);
      local_58 = 0x149;
      goto LAB_1401156e0;
    }
  }
  local_58 = 0x14d;
  puVar9 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a050b8);
  FUN_140e609c0(param_1);
  if ((int)local_38[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_30;
  }
  uVar3 = FUN_140e4a8b0(puVar7);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar9);
  }
  *(undefined4 *)((longlong)puVar9 + 0xc) = 10;
  *puVar9 = (ulonglong)(uVar3 & 0xffffff);
  FUN_140e60910(1);
  local_58 = 0x14e;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05de8);
  FUN_140e609c0(param_1);
  if (1 < (int)local_38[0]) {
    puVar10 = (undefined8 *)local_30[1];
  }
  if (puVar10 != puVar7) {
    local_c8 = *(undefined4 *)puVar10;
    uStack_c4 = *(undefined4 *)((longlong)puVar10 + 4);
    uStack_c0 = *(undefined4 *)(puVar10 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar10 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_c8);
  }
  FUN_140e60910(1);
  local_58 = 0x14f;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar6 = FUN_140e5c910();
  FUN_140e42c10(uVar6,param_1);
LAB_1401156e0:
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,3,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar10 = local_30;
    do {
      puVar7 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

