// gml_Script_function_per_char_anon_5661___scribble_class_typist___scribble_class_typist @ 0x1401649a0

undefined8 *
gml_Script_function_per_char_anon_5661___scribble_class_typist___scribble_class_typist
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  uint local_e0 [2];
  undefined8 *local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *local_b8;
  undefined8 *local_b0 [5];
  undefined1 local_88 [96];
  
  local_110 = "gml_Script_sound@anon@3872@__scribble_class_typist@__scribble_class_typist";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x98;
  FUN_140041df0(local_e0,param_4,5,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_e4 = 0;
  local_f0 = 0;
  local_f4 = 0;
  local_100 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x98;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_e0[0];
  if ((int)local_e0[0] < 5) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_d8[4];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_108 = 0x98;
    if ((int)local_e0[0] < 5) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_d8[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x3ff0000000000000;
  }
  local_108 = 0x9a;
  if ((int)local_e0[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_d8;
    if (puVar4 == &local_128) goto LAB_140164b45;
  }
  local_138 = *puVar4;
  uStack_130 = *(undefined4 *)(puVar4 + 1);
  uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_138);
LAB_140164b45:
  local_108 = 0x9b;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  local_f0 = 0;
  local_e8 = 0;
  local_e4 = 5;
  local_b8 = &local_128;
  uVar8 = CONCAT44(uVar9,DAT_1419fdb88);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_f0,1,uVar8,&local_b8);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_108 = 0x9b;
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    local_100 = 0;
    local_f8 = 0;
    local_f4 = 5;
    local_b0[0] = &local_128;
    puVar4 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_100,1,CONCAT44(uVar9,DAT_1419fdca8),local_b0);
    if (puVar4 != &local_128) {
      local_138 = *puVar4;
      uStack_130 = *(undefined4 *)(puVar4 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_138);
    }
  }
  local_108 = 0x9d;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07a08);
  FUN_140e609c0(param_1);
  if (&local_128 != puVar4) {
    local_138 = local_128;
    uStack_130 = uStack_120;
    uStack_12c = uStack_11c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_138);
  }
  FUN_140e60910(1);
  local_108 = 0x9e;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07968);
  FUN_140e609c0(param_1);
  if ((int)local_e0[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_d8[1];
  }
  if (puVar5 != puVar4) {
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_138);
  }
  FUN_140e60910(1);
  local_108 = 0x9f;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07a38);
  FUN_140e609c0(param_1);
  if ((int)local_e0[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_d8[2];
  }
  if (puVar5 != puVar4) {
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_138);
  }
  FUN_140e60910(1);
  local_108 = 0xa0;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a076a8);
  FUN_140e609c0(param_1);
  if ((int)local_e0[0] < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_d8[3];
  }
  if (puVar5 != puVar4) {
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_138);
  }
  FUN_140e60910(1);
  local_108 = 0xa1;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07a58);
  FUN_140e609c0(param_1);
  if (4 < (int)local_e0[0]) {
    puVar6 = (undefined8 *)local_d8[4];
  }
  if (puVar6 != puVar4) {
    local_138 = *puVar6;
    uStack_130 = *(undefined4 *)(puVar6 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_138);
  }
  FUN_140e60910(1);
  local_108 = 0xa2;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a079c8);
  uStack_12c = 0xd;
  local_138 = 0;
  if (&local_138 != puVar6) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = uStack_130;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_c8);
  }
  local_108 = 0xa4;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,5,FUN_140041b30);
  if (0 < (int)local_e0[0]) {
    puVar6 = local_d8;
    do {
      puVar4 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_d8);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

