// gml_Script_settings_save @ 0x1402e3050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_settings_save(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  uint local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  double local_78;
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  double *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 local_30;
  char *local_28;
  undefined4 local_20;
  
  local_28 = "gml_Script_savedata_save";
  local_30 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_30;
  local_20 = 0x18;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  pdVar1 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0.0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_20 = 0x19;
  if (pdVar1 != &local_78) {
    local_a8 = *(undefined4 *)pdVar1;
    uStack_a4 = *(undefined4 *)((longlong)pdVar1 + 4);
    uStack_a0 = *(undefined4 *)(pdVar1 + 1);
    uStack_9c = *(undefined4 *)((longlong)pdVar1 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_a8);
  }
  local_48 = &local_78;
  local_a8 = _DAT_1419df7c0;
  uStack_a4 = uRam00000001419df7c4;
  uStack_a0 = uRam00000001419df7c8;
  uStack_9c = uRam00000001419df7cc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_40 = local_68;
  uVar4 = CONCAT44(uVar5,DAT_1419ef1c8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,2,uVar4,&local_48);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != &local_88) {
    local_a8 = *(undefined4 *)puVar2;
    uStack_a4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_a0 = *(undefined4 *)(puVar2 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_a8);
  }
  local_20 = 0x1b;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_a8 = _DAT_1419e3c30;
  uStack_a4 = uRam00000001419e3c34;
  uStack_a0 = uRam00000001419e3c38;
  uStack_9c = uRam00000001419e3c3c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_a8);
  local_48 = &local_78;
  local_a8 = _DAT_1419e3c30;
  uStack_a4 = uRam00000001419e3c34;
  uStack_a0 = uRam00000001419e3c38;
  uStack_9c = uRam00000001419e3c3c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_40 = local_68;
  local_a8 = _DAT_1419e3bc0;
  uStack_a4 = uRam00000001419e3bc4;
  uStack_a0 = uRam00000001419e3bc8;
  uStack_9c = uRam00000001419e3bcc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_a8);
  local_38 = local_58;
  uVar4 = CONCAT44(uVar5,DAT_141a0a588);
  pdVar1 = (double *)FUN_140e634e0(param_1,param_2,&local_b8,3,uVar4,&local_48);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (pdVar1 != &local_98) {
    local_a8 = *(undefined4 *)pdVar1;
    uStack_a4 = *(undefined4 *)((longlong)pdVar1 + 4);
    uStack_a0 = *(undefined4 *)(pdVar1 + 1);
    uStack_9c = *(undefined4 *)((longlong)pdVar1 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_a8);
  }
  local_20 = 0x1d;
  dVar3 = local_98;
  if ((local_8c & 0xffffff) != 0) {
    dVar3 = (double)FUN_140e4b060(&local_98);
  }
  FUN_140ececc0((longlong)dVar3,0xb,&local_88);
  local_20 = 0x1e;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_48 = &local_98;
  local_a8 = _DAT_141dcea98;
  uStack_a4 = uRam0000000141dcea9c;
  uStack_a0 = uRam0000000141dceaa0;
  uStack_9c = DAT_141dceaa4;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_40 = local_68;
  uVar4 = CONCAT44(uVar5,DAT_1419ef218);
  FUN_140e634e0(param_1,param_2,&local_b8,2,uVar4,&local_48);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_20 = 0x1f;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_48 = &local_98;
  FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar5,DAT_1419ef3b8),&local_48);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_30;
  return param_3;
}

