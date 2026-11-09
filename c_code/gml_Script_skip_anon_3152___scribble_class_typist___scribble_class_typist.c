// gml_Script_skip_anon_3152___scribble_class_typist___scribble_class_typist @ 0x1401636e0

undefined8 *
gml_Script_skip_anon_3152___scribble_class_typist___scribble_class_typist
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_in@anon@2307@__scribble_class_typist@__scribble_class_typist";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x59;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07738);
  if (puVar3 != &local_88) {
    local_78 = *puVar3;
    uStack_70 = *(undefined4 *)(puVar3 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_78);
  }
  local_48 = 0x5b;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07738);
  uStack_6c = 0xd;
  local_78 = 0x3ff0000000000000;
  if (&local_78 != puVar3) {
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  local_48 = 0x5c;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b88);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar3) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  local_48 = 0x5d;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00db8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
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
  local_48 = 0x5e;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a077f8);
  FUN_140e609c0(param_1);
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
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
  local_48 = 0x5f;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b48);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar3) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  local_48 = 0x61;
  iVar2 = FUN_140e851f0(&local_88,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 != 0) {
    cVar1 = FUN_140e491e0(&local_88);
    if (cVar1 != '\0') goto LAB_140163a19;
  }
  local_48 = 0x61;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07778);
  FUN_140e63610(param_1,param_2,&local_98,0,uVar5,0);
LAB_140163a19:
  local_48 = 99;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar5 = FUN_140e5c910();
  FUN_140e42c10(uVar5,param_1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

