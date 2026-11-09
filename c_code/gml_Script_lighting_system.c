// gml_Script_lighting_system @ 0x1403ab570

undefined8 *
gml_Script_lighting_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script____struct___136@__new_lighting_system@lighting_system";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x24;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddea24) {
    _Init_thread_header(&DAT_141ddea24);
    if (DAT_141ddea24 == -1) {
      DAT_141ddea58 = FUN_140e63aa0(DAT_1419f5438);
      _Init_thread_footer(&DAT_141ddea24);
    }
  }
  FUN_140e643a0(param_1,DAT_141ddea58);
  local_28 = 0x25;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5088);
  FUN_140e609c0(param_1);
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
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
  local_28 = 0x26;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5048);
  FUN_140e609c0(param_1);
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
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
  local_28 = 0x27;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5118);
  FUN_140e609c0(param_1);
  if (param_4 < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[2];
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
  local_28 = 0x29;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f52f8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_58,gml_Script_anon_2889____struct___136___new_lighting_system_lighting_system
                ,param_1);
  if (&local_58 != puVar2) {
    local_48 = local_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140e60910(1);
  local_28 = 0x37;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5418);
  FUN_140e609c0(param_1);
  if (param_4 < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[3];
  }
  if (puVar3 != puVar1) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x38;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5408);
  FUN_140e609c0(param_1);
  if (param_4 < 5) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[4];
  }
  if (puVar3 != puVar1) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x39;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f54c8);
  FUN_140e609c0(param_1);
  if (param_4 < 6) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[5];
  }
  if (puVar3 != puVar1) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x3a;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f51d8);
  FUN_140e609c0(param_1);
  if (param_4 < 7) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[6];
  }
  if (puVar3 != puVar1) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x3c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5268);
  FUN_140e609c0(param_1);
  if (param_4 < 8) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[7];
  }
  if (puVar3 != puVar1) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x3e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f51b8);
  FUN_140e609c0(param_1);
  if (param_4 < 9) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[8];
  }
  if (puVar3 != puVar1) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x3f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4fb8);
  FUN_140e609c0(param_1);
  if (param_4 < 10) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[9];
  }
  if (puVar3 != puVar1) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x40;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f53a8);
  FUN_140e609c0(param_1);
  if (param_4 < 0xb) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[10];
  }
  if (puVar3 != puVar1) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x41;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5288);
  FUN_140e609c0(param_1);
  if (param_4 < 0xc) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[0xb];
  }
  if (puVar3 != puVar1) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x42;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5368);
  FUN_140e609c0(param_1);
  if (param_4 < 0xd) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[0xc];
  }
  if (puVar3 != puVar1) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x43;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4f48);
  FUN_140e609c0(param_1);
  if (param_4 < 0xe) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[0xd];
  }
  if (puVar3 != puVar1) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x45;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4f68);
  FUN_140e609c0(param_1);
  if (param_4 < 0xf) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[0xe];
  }
  if (puVar3 != puVar1) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x46;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5258);
  FUN_140e609c0(param_1);
  if (0xf < param_4) {
    puVar4 = (undefined8 *)param_5[0xf];
  }
  if (puVar4 != puVar1) {
    local_48 = *(undefined4 *)puVar4;
    uStack_44 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_40 = *(undefined4 *)(puVar4 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x48;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4fc8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_58,gml_Script_anon_3206____struct___136___new_lighting_system_lighting_system
                ,param_1);
  if (&local_58 != puVar2) {
    local_48 = local_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140e60910(1);
  local_28 = 0x58;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5228);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_58,gml_Script_anon_4213____struct___136___new_lighting_system_lighting_system
                ,param_1);
  if (&local_58 != puVar2) {
    local_48 = local_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140e60910(1);
  local_28 = 0x5e;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5198);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_58,gml_Script____struct___136___new_lighting_system_lighting_system,param_1);
  if (&local_58 != puVar2) {
    local_48 = local_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140e60910(1);
  local_28 = 0x7e;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5318);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_58,gml_Script___new_lighting_system,param_1);
  if (&local_58 != puVar2) {
    local_48 = local_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

