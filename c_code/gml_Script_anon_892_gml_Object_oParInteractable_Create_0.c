// gml_Script_anon_892_gml_Object_oParInteractable_Create_0 @ 0x140ba8f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_892_gml_Object_oParInteractable_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script____struct___595@gml_Object_oParInteractable_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0xf;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de2aa0) &&
     (_Init_thread_header(&DAT_141de2aa0), DAT_141de2aa0 == -1)) {
    DAT_141de2a98 = FUN_140e63aa0(DAT_1419f61c8);
    _Init_thread_footer(&DAT_141de2aa0);
  }
  FUN_140e643a0(param_1,DAT_141de2a98);
  local_38 = 0x10;
  uStack_5c = 0xf;
  local_68 = 0x10000010000018d;
  local_58 = 0x18d;
  uStack_54 = 0x1000001;
  uStack_50 = uStack_60;
  uStack_4c = 0xf;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_58);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_78);
  local_38 = 0x11;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a8a8);
  if (puVar1 != &DAT_141dda178) {
    local_58 = _DAT_141dda178;
    uStack_54 = uRam0000000141dda17c;
    uStack_50 = uRam0000000141dda180;
    uStack_4c = DAT_141dda184;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  local_38 = 0x13;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_140ba911e:
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_58);
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 != &local_88) goto LAB_140ba911e;
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_88);
  local_38 = 0x14;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
    if (puVar2 == &local_98) goto LAB_140ba91ab;
  }
  local_58 = *(undefined4 *)puVar2;
  uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_50 = *(undefined4 *)(puVar2 + 1);
  uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_58);
LAB_140ba91ab:
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_98);
  local_38 = 0x16;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_a8);
  local_38 = 0x19;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03228);
  FUN_140e609c0(param_1);
  if (param_4 < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[2];
  }
  if (puVar3 != puVar2) {
    local_58 = *(undefined4 *)puVar3;
    uStack_54 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_50 = *(undefined4 *)(puVar3 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x1b;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05028);
  FUN_140e609c0(param_1);
  if (3 < param_4) {
    puVar4 = (undefined8 *)param_5[3];
  }
  if (puVar4 != puVar2) {
    local_58 = *(undefined4 *)puVar4;
    uStack_54 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_50 = *(undefined4 *)(puVar4 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

