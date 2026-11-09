// gml_Script____struct___41_get_bbox_revealed_anon_30470___scribble_class_element___scribble_class_element @ 0x140122690

undefined8 *
gml_Script____struct___41_get_bbox_revealed_anon_30470___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = 
  "gml_Script____struct___40@get_bbox@anon@29671@__scribble_class_element@__scribble_class_element";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x39d;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddce94) &&
     (_Init_thread_header(&DAT_141ddce94), DAT_141ddce94 == -1)) {
    DAT_141ddce88 = FUN_140e63aa0(DAT_141a05928);
    _Init_thread_footer(&DAT_141ddce94);
  }
  FUN_140e643a0(param_1,DAT_141ddce88);
  local_38 = 0x39e;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_14012278e:
    local_58 = *(undefined4 *)puVar1;
    uStack_54 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_50 = *(undefined4 *)(puVar1 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_58);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_68) goto LAB_14012278e;
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_68);
  local_38 = 0x39f;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 == &local_78) goto LAB_14012281a;
  }
  local_58 = *(undefined4 *)puVar1;
  uStack_54 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_50 = *(undefined4 *)(puVar1 + 1);
  uStack_4c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_58);
LAB_14012281a:
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_78);
  local_38 = 0x3a1;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe318);
  FUN_140e609c0(param_1);
  if (param_4 < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[2];
  }
  if (puVar2 != puVar1) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x3a2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe838);
  FUN_140e609c0(param_1);
  if (param_4 < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[3];
  }
  if (puVar2 != puVar1) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x3a3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe1f8);
  FUN_140e609c0(param_1);
  if (param_4 < 5) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[4];
  }
  if (puVar2 != puVar1) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x3a4;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe4c8);
  FUN_140e609c0(param_1);
  if (param_4 < 6) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[5];
  }
  if (puVar2 != puVar1) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x3a6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe5d8);
  FUN_140e609c0(param_1);
  if (param_4 < 7) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[6];
  }
  if (puVar2 != puVar1) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x3a7;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe5c8);
  FUN_140e609c0(param_1);
  if (param_4 < 8) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[7];
  }
  if (puVar2 != puVar1) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x3a9;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05468);
  FUN_140e609c0(param_1);
  if (param_4 < 9) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[8];
  }
  if (puVar2 != puVar1) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04fa8);
  FUN_140e609c0(param_1);
  if (param_4 < 10) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[9];
  }
  if (puVar2 != puVar1) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x3aa;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05778);
  FUN_140e609c0(param_1);
  if (param_4 < 0xb) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[10];
  }
  if (puVar2 != puVar1) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04d98);
  FUN_140e609c0(param_1);
  if (param_4 < 0xc) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[0xb];
  }
  if (puVar2 != puVar1) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x3ab;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05278);
  FUN_140e609c0(param_1);
  if (param_4 < 0xd) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[0xc];
  }
  if (puVar2 != puVar1) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04fe8);
  FUN_140e609c0(param_1);
  if (param_4 < 0xe) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[0xd];
  }
  if (puVar2 != puVar1) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x3ac;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06068);
  FUN_140e609c0(param_1);
  if (param_4 < 0xf) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[0xe];
  }
  if (puVar2 != puVar1) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a050a8);
  FUN_140e609c0(param_1);
  if (0xf < param_4) {
    puVar3 = (undefined8 *)param_5[0xf];
  }
  if (puVar3 != puVar1) {
    local_58 = *(undefined4 *)puVar3;
    uStack_54 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_50 = *(undefined4 *)(puVar3 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

