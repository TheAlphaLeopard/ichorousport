// gml_GlobalScript_shader_set_wall_blood @ 0x1404a02c0

undefined8 *
gml_GlobalScript_shader_set_wall_blood
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_SoundBank";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 1;
  FUN_140041df0(local_68,param_4,3,param_5);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf1b0) {
    _Init_thread_header(&DAT_141ddf1b0);
    if (DAT_141ddf1b0 == -1) {
      DAT_141ddf1b8 = FUN_140e63aa0(DAT_1419ef3f8);
      _Init_thread_footer(&DAT_141ddf1b0);
    }
  }
  local_38 = 1;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_60[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_38 = 1;
    if ((int)local_68[0] < 2) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_60[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0x3fef0a3d70a3d70a;
  }
  if ((int)local_68[0] < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_60[2];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_68[0] < 3) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_60[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0x3ff07ae147ae147b;
  }
  FUN_140e643a0(param_1,DAT_141ddf1b8);
  local_38 = 3;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fa0e8);
  FUN_140e609c0(param_1);
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_60;
  }
  if (puVar3 != puVar2) {
    local_78 = *(undefined4 *)puVar3;
    uStack_74 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_70 = *(undefined4 *)(puVar3 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
  FUN_140e60910(1);
  local_38 = 4;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fa018);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = &DAT_bff0000000000000;
  local_38 = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fa068);
  FUN_140e609c0(param_1);
  if ((int)local_68[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[1];
  }
  if (puVar3 != puVar2) {
    local_78 = *(undefined4 *)puVar3;
    uStack_74 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_70 = *(undefined4 *)(puVar3 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
  FUN_140e60910(1);
  local_38 = 6;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fa028);
  FUN_140e609c0(param_1);
  if (2 < (int)local_68[0]) {
    puVar5 = (undefined8 *)local_60[2];
  }
  if (puVar5 != puVar2) {
    local_78 = *(undefined4 *)puVar5;
    uStack_74 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_70 = *(undefined4 *)(puVar5 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
  FUN_140e60910(1);
  local_38 = 7;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fa088);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x3ff0000000000000;
  local_38 = 9;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef268);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_SoundBank,param_1);
  if (&local_78 != puVar4) {
    local_58 = local_78;
    uStack_54 = uStack_74;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0x10;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4a98);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_mixer_change_db,param_1);
  if (&local_78 != puVar4) {
    local_58 = local_78;
    uStack_54 = uStack_74;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(1);
  if (0 < (int)local_68[0]) {
    puVar5 = local_60;
    do {
      puVar2 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

