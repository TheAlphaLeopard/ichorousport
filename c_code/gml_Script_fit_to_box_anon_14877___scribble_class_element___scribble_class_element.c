// gml_Script_fit_to_box_anon_14877___scribble_class_element___scribble_class_element @ 0x140116b70

undefined8 *
gml_Script_fit_to_box_anon_14877___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Script_scale_to_box@anon@13049@__scribble_class_element@__scribble_class_element";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x1ad;
  FUN_140041df0(local_88,param_4,3,param_5);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x1ad;
  puVar9 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[2];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_58 = 0x1ad;
    uStack_8c = 0xd;
    local_98 = 0;
    if ((int)local_88[0] < 3) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_80[2];
      if (&local_98 == puVar6) goto LAB_140116c80;
    }
    local_a8 = 0;
    uStack_a0 = uStack_90;
    uStack_9c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_a8);
  }
LAB_140116c80:
  local_58 = 0x1af;
  if ((int)local_88[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_80;
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
LAB_140116d4d:
    uStack_8c = 0;
    local_98 = 0;
    puVar6 = &local_98;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    if ((int)local_88[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_80;
    }
    uStack_9c = 0;
    local_a8 = 0;
    iVar4 = FUN_140e851f0(puVar6,&local_a8,DAT_141955260,1);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if (iVar4 != -2 && iVar4 < 0) goto LAB_140116d4d;
    if ((int)local_88[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_80;
    }
    uStack_9c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_a0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_a8 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_a8);
    }
    puVar6 = &local_a8;
    bVar2 = false;
    bVar1 = true;
  }
  uVar3 = uStack_8c;
  if ((int)local_88[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_80;
  }
  if (puVar6 != puVar7) {
    local_78 = *(undefined4 *)puVar6;
    uStack_74 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_70 = *(undefined4 *)(puVar6 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_78);
  }
  if ((bVar1) && ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_a8);
  }
  if ((bVar2) && ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_98);
  }
  local_58 = 0x1b0;
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
LAB_140116ec8:
    uStack_8c = 0;
    local_98 = 0;
    puVar6 = &local_98;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    if ((int)local_88[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_80[1];
    }
    uStack_8c = 0;
    local_98 = 0;
    iVar4 = FUN_140e851f0(puVar6,&local_98,DAT_141955260,1);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if (iVar4 != -2 && iVar4 < 0) goto LAB_140116ec8;
    if ((int)local_88[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_80[1];
    }
    uStack_9c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_a0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_a8 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_a8);
    }
    puVar6 = &local_a8;
    bVar2 = false;
    bVar1 = true;
  }
  uVar3 = uStack_8c;
  if ((int)local_88[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[1];
  }
  if (puVar6 != puVar7) {
    local_78 = *(undefined4 *)puVar6;
    uStack_74 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_70 = *(undefined4 *)(puVar6 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_78);
  }
  if ((bVar1) && ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_a8);
  }
  if ((bVar2) && ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_98);
  }
  local_58 = 0x1b2;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a060c8);
  if ((int)local_88[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_80;
  }
  iVar4 = FUN_140e851f0(puVar6,uVar5,DAT_141955260,0);
  if (iVar4 == 0) {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05038);
    if ((int)local_88[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_80[1];
    }
    iVar4 = FUN_140e851f0(puVar6,uVar5,DAT_141955260,0);
    if (iVar4 == 0) {
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a053c8);
      if ((int)local_88[0] < 3) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)local_80[2];
      }
      iVar4 = FUN_140e851f0(puVar6,uVar5,DAT_141955260,0);
      if (iVar4 == 0) goto LAB_1401171b4;
    }
  }
  local_58 = 0x1b4;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a060c8);
  FUN_140e609c0(param_1);
  if ((int)local_88[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_80;
  }
  if (puVar7 != puVar6) {
    local_78 = *(undefined4 *)puVar7;
    uStack_74 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_70 = *(undefined4 *)(puVar7 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 0x1b5;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05038);
  FUN_140e609c0(param_1);
  if ((int)local_88[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_80[1];
  }
  if (puVar7 != puVar6) {
    local_78 = *(undefined4 *)puVar7;
    uStack_74 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_70 = *(undefined4 *)(puVar7 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 0x1b6;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a053c8);
  FUN_140e609c0(param_1);
  if (2 < (int)local_88[0]) {
    puVar9 = (undefined8 *)local_80[2];
  }
  if (puVar9 != puVar6) {
    local_78 = *(undefined4 *)puVar9;
    uStack_74 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_70 = *(undefined4 *)(puVar9 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 0x1b7;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a053a8);
  uStack_8c = 0xd;
  local_98 = 0x3ff0000000000000;
  if (&local_98 != puVar9) {
    local_78 = 0;
    uStack_74 = 0x3ff00000;
    uStack_70 = uStack_90;
    uStack_6c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_78);
  }
LAB_1401171b4:
  local_58 = 0x1ba;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar5 = FUN_140e5c910();
  FUN_140e42c10(uVar5,param_1);
  if (0 < (int)local_88[0]) {
    puVar9 = local_80;
    do {
      puVar6 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

