// gml_Script_skew_anon_12801___scribble_class_element___scribble_class_element @ 0x1401162b0

undefined8 *
gml_Script_skew_anon_12801___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_transform@anon@12051@__scribble_class_element@__scribble_class_element";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x185;
  FUN_140041df0(local_78,param_4,3,param_5);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x185;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_70[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_48 = 0x185;
    if ((int)local_78[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_70;
    }
    if ((int)local_78[0] < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_70[1];
    }
    if (puVar3 != puVar4) {
      local_88 = *puVar3;
      uStack_80 = *(undefined4 *)(puVar3 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_88);
    }
  }
  if ((int)local_78[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_70[2];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_78[0] < 3) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_70[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  local_48 = 0x187;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06008);
  if ((int)local_78[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_70;
  }
  iVar1 = FUN_140e851f0(uVar2,puVar3,DAT_141955260,0);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05df8);
    if ((int)local_78[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_70[1];
    }
    iVar1 = FUN_140e851f0(uVar2,puVar3,DAT_141955260,0);
    if (iVar1 == 0) {
      uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05c58);
      if ((int)local_78[0] < 3) {
        puVar3 = &DAT_1419df7b0;
      }
      else {
        puVar3 = (undefined8 *)local_70[2];
      }
      iVar1 = FUN_140e851f0(uVar2,puVar3,DAT_141955260,0);
      if (iVar1 == 0) goto LAB_1401166b5;
    }
  }
  local_48 = 0x189;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04d88);
  uStack_7c = 0xd;
  local_88 = 0x3ff0000000000000;
  if (&local_88 != puVar3) {
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = uStack_80;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  local_48 = 0x18a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04dd8);
  uStack_7c = 0xd;
  local_88 = 0x3ff0000000000000;
  if (&local_88 != puVar3) {
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = uStack_80;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  local_48 = 0x18c;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06008);
  FUN_140e609c0(param_1);
  if ((int)local_78[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_70;
  }
  if (puVar4 != puVar3) {
    local_68 = *(undefined4 *)puVar4;
    uStack_64 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_60 = *(undefined4 *)(puVar4 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x18d;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05df8);
  FUN_140e609c0(param_1);
  if ((int)local_78[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_70[1];
  }
  if (puVar4 != puVar3) {
    local_68 = *(undefined4 *)puVar4;
    uStack_64 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_60 = *(undefined4 *)(puVar4 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x18e;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05c58);
  FUN_140e609c0(param_1);
  if (2 < (int)local_78[0]) {
    puVar5 = (undefined8 *)local_70[2];
  }
  if (puVar5 != puVar3) {
    local_68 = *(undefined4 *)puVar5;
    uStack_64 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_60 = *(undefined4 *)(puVar5 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  FUN_140e60910(1);
LAB_1401166b5:
  local_48 = 0x191;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  if (0 < (int)local_78[0]) {
    puVar5 = local_70;
    do {
      puVar3 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

