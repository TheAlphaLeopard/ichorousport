// gml_Script___Update_anon_414___InputVibrateClassConstant___InputVibrateClassConstant @ 0x1400e4ce0

undefined8 *
gml_Script___Update_anon_414___InputVibrateClassConstant___InputVibrateClassConstant
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  
  local_70 = "gml_Script___InputVibrateClassADSR";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 3;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc980) {
    _Init_thread_header(&DAT_141ddc980);
    if (DAT_141ddc980 == -1) {
      DAT_141ddc928 = (longlong *)FUN_140e63aa0(DAT_141a040f8);
      _Init_thread_footer(&DAT_141ddc980);
    }
  }
  if (DAT_141ddc06c == '\0') {
    FUN_140e64380(DAT_141ddc928,"gml_Script___InputVibrateClassADSR");
    FUN_140e64380(param_1,"gml_Script___InputVibrateClassADSR");
  }
  FUN_140e643a0(param_1,DAT_141ddc928);
  local_68 = 0x17;
  if (DAT_141ddc06c == '\0') {
    DAT_141ddc06c = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141ddc928 + 0x10))(DAT_141ddc928,DAT_1419fd598);
    FUN_140e609c0(DAT_141ddc928);
    FUN_140e645a0(&local_98,gml_GlobalScript___InputVibrateClassConstant,0);
    if (&local_98 != puVar2) {
      local_88 = local_98;
      uStack_80 = uStack_90;
      uStack_7c = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_88);
    }
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140e60910(1);
  }
  local_68 = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04148);
  FUN_140e609c0(param_1);
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 8) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[7];
  }
  if (puVar4 != puVar3) {
    local_88 = *puVar4;
    uStack_80 = *(undefined4 *)(puVar4 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_88);
  }
  FUN_140e60910(1);
  local_68 = 7;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a041a8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_68 = 8;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a041c8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_68 = 10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04178);
  FUN_140e609c0(param_1);
  if (param_4 < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[2];
  }
  uStack_8c = 0;
  local_98 = 0x3ff0000000000000;
  FUN_1400462a0(&local_98,puVar4);
  if ((uStack_8c & 0xffffff) == 0) {
    uVar5 = (undefined4)local_98;
  }
  else {
    uVar5 = FUN_140e4b060(&local_98);
  }
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  uVar1 = FUN_140e78ec0(uVar5,0,0);
  uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_a0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
    local_a8 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_a8,puVar4);
  }
  uStack_7c = 0;
  local_88 = uVar1;
  FUN_140042560(&local_a8,&local_88);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (&local_a8 != puVar3) {
    local_88 = local_a8;
    uStack_80 = uStack_a0;
    uStack_7c = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_88);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_68 = 0xb;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04138);
  FUN_140e609c0(param_1);
  if (param_4 < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[2];
  }
  uStack_8c = 0;
  local_98 = 0x3ff0000000000000;
  FUN_1400460e0(&local_98,puVar4);
  if ((uStack_8c & 0xffffff) == 0) {
    uVar5 = (undefined4)local_98;
  }
  else {
    uVar5 = FUN_140e4b060(&local_98);
  }
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  uVar1 = FUN_140e78ec0(uVar5,0,0);
  uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_a0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
    local_a8 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_a8,puVar4);
  }
  uStack_7c = 0;
  local_88 = uVar1;
  FUN_140042560(&local_a8,&local_88);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (&local_a8 != puVar3) {
    local_88 = local_a8;
    uStack_80 = uStack_a0;
    uStack_7c = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_88);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e60910(1);
  local_68 = 0xc;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a040e8);
  FUN_140e609c0(param_1);
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
  }
  if (puVar4 != puVar3) {
    local_88 = *puVar4;
    uStack_80 = *(undefined4 *)(puVar4 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_88);
  }
  FUN_140e60910(1);
  local_68 = 0xd;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a040d8);
  FUN_140e609c0(param_1);
  if (param_4 < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[2];
  }
  if (puVar4 != puVar3) {
    local_88 = *puVar4;
    uStack_80 = *(undefined4 *)(puVar4 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_88);
  }
  FUN_140e60910(1);
  local_68 = 0xf;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04188);
  FUN_140e609c0(param_1);
  if (param_4 < 4) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[3];
  }
  if (puVar4 != puVar3) {
    local_88 = *puVar4;
    uStack_80 = *(undefined4 *)(puVar4 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_88);
  }
  FUN_140e60910(1);
  local_68 = 0x10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a041b8);
  FUN_140e609c0(param_1);
  if (param_4 < 5) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[4];
  }
  if (puVar4 != puVar3) {
    local_88 = *puVar4;
    uStack_80 = *(undefined4 *)(puVar4 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_88);
  }
  FUN_140e60910(1);
  local_68 = 0x11;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a040a8);
  FUN_140e609c0(param_1);
  if (param_4 < 6) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[5];
  }
  if (puVar4 != puVar3) {
    local_88 = *puVar4;
    uStack_80 = *(undefined4 *)(puVar4 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_88);
  }
  FUN_140e60910(1);
  local_68 = 0x12;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04108);
  FUN_140e609c0(param_1);
  if (6 < param_4) {
    puVar2 = (undefined8 *)param_5[6];
  }
  if (puVar2 != puVar3) {
    local_88 = *puVar2;
    uStack_80 = *(undefined4 *)(puVar2 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_88);
  }
  FUN_140e60910(1);
  local_68 = 0x14;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a040b8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_68 = 0x15;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04158);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

