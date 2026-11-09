// gml_Script_anon_13848_gml_Object_oRogueLevelManager_Other_12 @ 0x140d118a0

undefined8 *
gml_Script_anon_13848_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script____struct___762@anon@13609@gml_Object_oRogueLevelManager_Other_12";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x1e5;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
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
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de34dc) &&
     (_Init_thread_header(&DAT_141de34dc), DAT_141de34dc == -1)) {
    DAT_141de3478 = FUN_140e63aa0(DAT_1419fa798);
    _Init_thread_footer(&DAT_141de34dc);
  }
  FUN_140e643a0(param_1,DAT_141de3478);
  local_38 = 0x1e5;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_140d119cf:
    local_b8 = *(undefined4 *)puVar1;
    uStack_b4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_b0 = *(undefined4 *)(puVar1 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140041b80(&local_58,&local_b8);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_58) goto LAB_140d119cf;
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_58);
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_140d11a29:
    local_b8 = *(undefined4 *)puVar1;
    uStack_b4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_b0 = *(undefined4 *)(puVar1 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_b8);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_68) goto LAB_140d11a29;
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_68);
  if (param_4 < 3) {
    puVar1 = &DAT_1419df7b0;
LAB_140d11a84:
    local_b8 = *(undefined4 *)puVar1;
    uStack_b4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_b0 = *(undefined4 *)(puVar1 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_b8);
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
    if (puVar1 != &local_78) goto LAB_140d11a84;
  }
  FUN_140e86fa0(param_1,DAT_1419fde18,0x80000000,&local_78);
  if (param_4 < 4) {
    puVar1 = &DAT_1419df7b0;
LAB_140d11adf:
    local_b8 = *(undefined4 *)puVar1;
    uStack_b4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_b0 = *(undefined4 *)(puVar1 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_b8);
  }
  else {
    puVar1 = (undefined8 *)param_5[3];
    if (puVar1 != &local_88) goto LAB_140d11adf;
  }
  FUN_140e86fa0(param_1,DAT_1419fec88,0x80000000,&local_88);
  local_38 = 0x1e6;
  if (param_4 < 5) {
    puVar1 = &DAT_1419df7b0;
LAB_140d11b41:
    local_b8 = *(undefined4 *)puVar1;
    uStack_b4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_b0 = *(undefined4 *)(puVar1 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_b8);
  }
  else {
    puVar1 = (undefined8 *)param_5[4];
    if (puVar1 != &local_98) goto LAB_140d11b41;
  }
  FUN_140e86fa0(param_1,DAT_141a1f580,0x80000000,&local_98);
  if (param_4 < 6) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[5];
    if (puVar1 == &local_a8) goto LAB_140d11bc7;
  }
  local_b8 = *(undefined4 *)puVar1;
  uStack_b4 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_b0 = *(undefined4 *)(puVar1 + 1);
  uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_b8);
LAB_140d11bc7:
  FUN_140e86fa0(param_1,DAT_141a1b910,0x80000000,&local_a8);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57b30);
  FUN_140e609c0(param_1);
  if (6 < param_4) {
    puVar2 = (undefined8 *)param_5[6];
  }
  if (puVar2 != puVar1) {
    local_b8 = *(undefined4 *)puVar2;
    uStack_b4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_b0 = *(undefined4 *)(puVar2 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
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
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

