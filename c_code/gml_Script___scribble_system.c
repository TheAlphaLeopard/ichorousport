// gml_Script___scribble_system @ 0x140205d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___scribble_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_88;
  undefined4 local_80;
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
  
  local_50 = "gml_Script____struct___62@__scribble_system@__scribble_system";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x8a;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddad0) {
    _Init_thread_header(&DAT_141dddad0);
    if (DAT_141dddad0 == -1) {
      DAT_141dddac8 = FUN_140e63aa0(DAT_141a0a4c8);
      _Init_thread_footer(&DAT_141dddad0);
    }
  }
  FUN_140e643a0(param_1,DAT_141dddac8);
  local_48 = 0x8b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04e98);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_48 = 0x8d;
  puVar2 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04d28);
  if (puVar2 != &DAT_141dcdb28) {
    local_78 = CONCAT44(uRam0000000141dcdb2c,_DAT_141dcdb28);
    uStack_70 = uRam0000000141dcdb30;
    uStack_6c = DAT_141dcdb34;
    if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
  local_48 = 0x8f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05a68);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4049000000000000;
  local_48 = 0x90;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05fb8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4049000000000000;
  local_48 = 0x91;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a056a8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_48 = 0x93;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05818);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar1) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  local_48 = 0x94;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a059b8);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar1) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  local_48 = 0x95;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05518);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar1) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  local_48 = 0x96;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05d28);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar1) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  local_48 = 0x98;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06968);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_48 = 0x9a;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a568);
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_88,0,DAT_1419fd6d8,0);
  if (puVar4 != puVar3) {
    local_68 = *puVar4;
    uStack_64 = puVar4[1];
    uStack_60 = puVar4[2];
    uStack_5c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x9c;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08e38);
  FUN_140e609c0(param_1);
  puVar1 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  if (puVar6 != puVar5) {
    local_68 = *(undefined4 *)puVar6;
    uStack_64 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_60 = *(undefined4 *)(puVar6 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x9d;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a2f8);
  FUN_140e609c0(param_1);
  if (1 < param_4) {
    puVar1 = (undefined8 *)param_5[1];
  }
  if (puVar1 != puVar5) {
    local_68 = *(undefined4 *)puVar1;
    uStack_64 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_60 = *(undefined4 *)(puVar1 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

