// gml_Script_skip_to_pause_anon_3384___scribble_class_typist___scribble_class_typist @ 0x140163ac0

undefined8 *
gml_Script_skip_to_pause_anon_3384___scribble_class_typist___scribble_class_typist
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
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
  
  local_50 = "gml_Script_out@anon@2758@__scribble_class_typist@__scribble_class_typist";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x69;
  FUN_140041df0(local_78,param_4,3,param_5);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x69;
  puVar6 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_70[2];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_48 = 0x69;
    uStack_7c = 0xd;
    local_88 = 0;
    if (((int)local_78[0] < 3) || (puVar6 = (undefined8 *)local_70[2], &local_88 != puVar6)) {
      local_68 = 0;
      uStack_64 = 0;
      uStack_60 = uStack_80;
      uStack_5c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_68);
    }
  }
  local_48 = 0x6b;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07738);
  if (puVar6 != &local_98) {
    local_68 = *(undefined4 *)puVar6;
    uStack_64 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_60 = *(undefined4 *)(puVar6 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_68);
  }
  local_48 = 0x6d;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07738);
  uStack_7c = 0xd;
  local_88 = 0;
  if (&local_88 != puVar6) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_80;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_68);
  }
  local_48 = 0x6e;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b88);
  FUN_140e609c0(param_1);
  if ((int)local_78[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_70[2];
  }
  if (puVar3 != puVar6) {
    local_68 = *(undefined4 *)puVar3;
    uStack_64 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_60 = *(undefined4 *)(puVar3 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x6f;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00db8);
  FUN_140e609c0(param_1);
  if ((int)local_78[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_70;
  }
  if (puVar3 != puVar6) {
    local_68 = *(undefined4 *)puVar3;
    uStack_64 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_60 = *(undefined4 *)(puVar3 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x70;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a077f8);
  FUN_140e609c0(param_1);
  if ((int)local_78[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_70[1];
  }
  if (puVar3 != puVar6) {
    local_68 = *(undefined4 *)puVar3;
    uStack_64 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_60 = *(undefined4 *)(puVar3 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x71;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b48);
  uStack_7c = 0xd;
  local_88 = 0;
  if (&local_88 != puVar6) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_80;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_68);
  }
  local_48 = 0x73;
  iVar2 = FUN_140e851f0(&local_98,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 != 0) {
    cVar1 = FUN_140e491e0(&local_98);
    if (cVar1 == '\0') goto LAB_140163ec2;
  }
  local_48 = 0x73;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07778);
  FUN_140e63610(param_1,param_2,&local_a8,0,uVar4,0);
LAB_140163ec2:
  local_48 = 0x75;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar4 = FUN_140e5c910();
  FUN_140e42c10(uVar4,param_1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if (0 < (int)local_78[0]) {
    puVar6 = local_70;
    do {
      puVar3 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

