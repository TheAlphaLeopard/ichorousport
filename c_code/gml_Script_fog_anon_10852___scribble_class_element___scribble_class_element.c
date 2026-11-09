// gml_Script_fog_anon_10852___scribble_class_element___scribble_class_element @ 0x140114990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_fog_anon_10852___scribble_class_element___scribble_class_element
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
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  byte local_84;
  undefined8 local_80;
  byte local_74;
  undefined8 local_70;
  byte local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_b0 = "gml_Script_blend@anon@9665@__scribble_class_element@__scribble_class_element";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x129;
  FUN_140041df0(local_48,param_4,2,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_cc = 0;
  local_d8 = 0;
  local_94 = 0;
  local_a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddce90) &&
     (_Init_thread_header(&DAT_141ddce90), DAT_141ddce90 == -1)) {
    DAT_141ddcdf0 = (longlong *)FUN_140e63aa0(DAT_141a05be8);
    _Init_thread_footer(&DAT_141ddce90);
  }
  if (DAT_141ddc078 == '\0') {
    FUN_140e64380(DAT_141ddcdf0,
                  "gml_Script_blend@anon@9665@__scribble_class_element@__scribble_class_element");
    FUN_140e64380(param_1,
                  "gml_Script_blend@anon@9665@__scribble_class_element@__scribble_class_element");
  }
  local_a8 = 299;
  if (DAT_141ddc078 == '\0') {
    DAT_141ddc078 = '\x01';
    puVar4 = (undefined4 *)(**(code **)(*DAT_141ddcdf0 + 0x10))(DAT_141ddcdf0,DAT_141a05548);
    FUN_140e609c0(DAT_141ddcdf0);
    uVar12 = 0;
    puVar5 = (undefined4 *)gml_GlobalScript___scribble_constants(param_1,param_2,&local_d8,0,0);
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
  local_a8 = 0x12d;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar10 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_140114ba8:
    local_c8 = *(undefined4 *)puVar7;
    uStack_c4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_c0 = *(undefined4 *)(puVar7 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_c8);
  }
  else {
    puVar7 = (undefined8 *)*local_40;
    if (puVar7 != &local_90) goto LAB_140114ba8;
  }
  local_60 = &local_90;
  uVar13 = CONCAT44(uVar12,DAT_1419fdbf8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar13,&local_60);
  uVar12 = (undefined4)((ulonglong)uVar13 >> 0x20);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    local_a8 = 0x12f;
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0;
    local_94 = 5;
    puVar7 = (undefined8 *)(**(code **)(*DAT_141ddcdf0 + 8))(DAT_141ddcdf0,DAT_141a05548);
    if (puVar7 != &local_80) {
      local_c8 = *(undefined4 *)puVar7;
      uStack_c4 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_c0 = *(undefined4 *)(puVar7 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      FUN_140041b80(&local_80,&local_c8);
    }
    local_58 = &local_80;
    if ((int)local_48[0] < 1) {
      puVar7 = &DAT_1419df7b0;
LAB_140114cad:
      local_c8 = *(undefined4 *)puVar7;
      uStack_c4 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_c0 = *(undefined4 *)(puVar7 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      FUN_140041b80(&local_70,&local_c8);
    }
    else {
      puVar7 = (undefined8 *)*local_40;
      if (puVar7 != &local_70) goto LAB_140114cad;
    }
    local_50 = &local_70;
    if ((int)local_48[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_40;
    }
    puVar8 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_a0,2,CONCAT44(uVar12,DAT_141a01138),&local_58);
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
    local_a8 = 0x130;
    if ((int)local_48[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_40;
    }
    iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar2 == 0) {
      local_a8 = 0x132;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      local_c8 = _DAT_141dcb798;
      uStack_c4 = uRam0000000141dcb79c;
      uStack_c0 = uRam0000000141dcb7a0;
      uStack_bc = DAT_141dcb7a4;
      if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      FUN_140041b80(&local_90,&local_c8);
      local_60 = &local_90;
      if (((int)local_48[0] < 1) || (puVar10 = (undefined8 *)*local_40, puVar10 != &local_80)) {
        local_c8 = *(undefined4 *)puVar10;
        uStack_c4 = *(undefined4 *)((longlong)puVar10 + 4);
        uStack_c0 = *(undefined4 *)(puVar10 + 1);
        uStack_bc = *(undefined4 *)((longlong)puVar10 + 0xc);
        if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_80);
        }
        FUN_140041b80(&local_80,&local_c8);
      }
      local_58 = &local_80;
      local_c8 = _DAT_141dcb688;
      uStack_c4 = uRam0000000141dcb68c;
      uStack_c0 = uRam0000000141dcb690;
      uStack_bc = DAT_141dcb694;
      if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      FUN_140041b80(&local_70,&local_c8);
      local_50 = &local_70;
      FUN_1401ef7f0(param_1,param_2,&local_d8,3,&local_60);
      local_a8 = 0x133;
      goto LAB_140114ffc;
    }
  }
  local_a8 = 0x137;
  if ((int)local_48[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_40;
  }
  iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 != 0) {
    local_a8 = 0x137;
    puVar9 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04ea8);
    FUN_140e609c0(param_1);
    if ((int)local_48[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_40;
    }
    uVar3 = FUN_140e4a8b0(puVar7);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 10;
    *puVar9 = (ulonglong)(uVar3 & 0xffffff);
    FUN_140e60910(1);
  }
  local_a8 = 0x138;
  if ((int)local_48[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_40[1];
  }
  iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 != 0) {
    local_a8 = 0x138;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05178);
    if (1 < (int)local_48[0]) {
      puVar10 = (undefined8 *)local_40[1];
    }
    if ((*(uint *)((longlong)puVar10 + 0xc) & 0xffffff) == 0) {
      uVar12 = (undefined4)*puVar10;
    }
    else {
      uVar12 = FUN_140e4b060(puVar10);
    }
    uVar6 = FUN_140e78ec0(uVar12,0,0x3ff0000000000000);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = uVar6;
  }
  local_a8 = 0x13a;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar6 = FUN_140e5c910();
  FUN_140e42c10(uVar6,param_1);
LAB_140114ffc:
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_90,0x10,3,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar10 = local_40;
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
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

