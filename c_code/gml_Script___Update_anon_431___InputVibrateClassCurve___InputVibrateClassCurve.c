// gml_Script___Update_anon_431___InputVibrateClassCurve___InputVibrateClassCurve @ 0x1400e57f0

undefined8 *
gml_Script___Update_anon_431___InputVibrateClassCurve___InputVibrateClassCurve
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Script___InputVibrateClassConstant";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 8;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc984) {
    _Init_thread_header(&DAT_141ddc984);
    if (DAT_141ddc984 == -1) {
      DAT_141ddc988 = (longlong *)FUN_140e63aa0(DAT_141a041e8);
      _Init_thread_footer(&DAT_141ddc984);
    }
  }
  if (DAT_141ddc06d == '\0') {
    FUN_140e64380(DAT_141ddc988,"gml_Script___InputVibrateClassConstant");
    FUN_140e64380(param_1,"gml_Script___InputVibrateClassConstant");
  }
  FUN_140e643a0(param_1,DAT_141ddc988);
  local_58 = 0x12;
  if (DAT_141ddc06d == '\0') {
    DAT_141ddc06d = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141ddc988 + 0x10))(DAT_141ddc988,DAT_1419fd598);
    FUN_140e609c0(DAT_141ddc988);
    FUN_140e645a0(&local_88,gml_GlobalScript___InputVibrateClassCurve,0);
    if (&local_88 != puVar2) {
      local_78 = local_88;
      uStack_70 = uStack_80;
      uStack_6c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_78);
    }
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140e60910(1);
  }
  local_58 = 10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04148);
  FUN_140e609c0(param_1);
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 4) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[3];
  }
  if (puVar4 != puVar3) {
    local_78 = *puVar4;
    uStack_70 = *(undefined4 *)(puVar4 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 0xc;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a041a8);
  FUN_140e609c0(param_1);
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
  }
  uStack_7c = 0;
  local_88 = 0x3ff0000000000000;
  FUN_1400462a0(&local_88,puVar4);
  if ((uStack_7c & 0xffffff) == 0) {
    uVar5 = (undefined4)local_88;
  }
  else {
    uVar5 = FUN_140e4b060(&local_88);
  }
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  uVar1 = FUN_140e78ec0(uVar5,0,0);
  uStack_8c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_90 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_98,puVar4);
  }
  uStack_6c = 0;
  local_78 = uVar1;
  FUN_140042560(&local_98,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (&local_98 != puVar3) {
    local_78 = local_98;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_58 = 0xd;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a041c8);
  FUN_140e609c0(param_1);
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
  }
  uStack_7c = 0;
  local_88 = 0x3ff0000000000000;
  FUN_1400460e0(&local_88,puVar4);
  if ((uStack_7c & 0xffffff) == 0) {
    uVar5 = (undefined4)local_88;
  }
  else {
    uVar5 = FUN_140e4b060(&local_88);
  }
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  uVar1 = FUN_140e78ec0(uVar5,0,0);
  uStack_8c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_90 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_98,puVar4);
  }
  uStack_6c = 0;
  local_78 = uVar1;
  FUN_140042560(&local_98,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (&local_98 != puVar3) {
    local_78 = local_98;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_58 = 0xf;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02708);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_58 = 0x10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a041d8);
  FUN_140e609c0(param_1);
  if (2 < param_4) {
    puVar2 = (undefined8 *)param_5[2];
  }
  if (puVar2 != puVar3) {
    local_78 = *puVar2;
    uStack_70 = *(undefined4 *)(puVar2 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

