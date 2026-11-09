// gml_Script___outline_start @ 0x1400ed4d0

undefined8 * gml_Script___outline_start(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  
  local_50 = "gml_Script___ol_cache";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 5;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a047f8);
  local_5c = 0;
  local_68 = 0;
  local_6c = 0;
  local_78 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddcc74) {
    _Init_thread_header(&DAT_141ddcc74);
    if (DAT_141ddcc74 == -1) {
      DAT_141ddcbb8 = (longlong *)FUN_140e63aa0(DAT_141a04838);
      _Init_thread_footer(&DAT_141ddcc74);
    }
  }
  if (DAT_141ddc074 == '\0') {
    FUN_140e64380(DAT_141ddcbb8,"gml_Script___ol_cache");
    FUN_140e64380(param_1,"gml_Script___ol_cache");
  }
  local_48 = 6;
  if (DAT_141ddc074 == '\0') {
    DAT_141ddc074 = '\x01';
    puVar2 = (undefined4 *)(**(code **)(*DAT_141ddcbb8 + 0x10))(DAT_141ddcbb8,DAT_141a048d8);
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_98,gml_Script___outline_init,0);
    if (&local_98 != puVar1) {
      local_d8 = local_98;
      uStack_d4 = uStack_94;
      uStack_d0 = uStack_90;
      uStack_cc = uStack_8c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    FUN_140e60910(1);
    if (puVar1 != local_c8) {
      local_d8 = *puVar1;
      uStack_d4 = puVar1[1];
      uStack_d0 = puVar1[2];
      uStack_cc = puVar1[3];
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_d8);
    }
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_40 = local_c8;
    puVar1 = (undefined4 *)FUN_140e8da20(&local_78,param_1,0);
    if (puVar1 != local_b8) {
      local_d8 = *puVar1;
      uStack_d4 = puVar1[1];
      uStack_d0 = puVar1[2];
      uStack_cc = puVar1[3];
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_d8);
    }
    local_38 = local_b8;
    puVar1 = (undefined4 *)FUN_140e8da20(&local_88,param_1,0);
    if (puVar1 != local_a8) {
      local_d8 = *puVar1;
      uStack_d4 = puVar1[1];
      uStack_d0 = puVar1[2];
      uStack_cc = puVar1[3];
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_d8);
    }
    local_30 = local_a8;
    FUN_140e609c0(DAT_141ddcbb8);
    puVar1 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_68,3,CONCAT44(uVar4,DAT_1419fd6d8),&local_40);
    if (puVar1 != puVar2) {
      local_d8 = *puVar1;
      uStack_d4 = puVar1[1];
      uStack_d0 = puVar1[2];
      uStack_cc = puVar1[3];
      if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_d8);
    }
    FUN_140e60910(1);
  }
  local_48 = 0x2b;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141ddcbb8 + 8))(DAT_141ddcbb8,DAT_141a048d8);
  if (puVar3 != param_3) {
    local_d8 = *(undefined4 *)puVar3;
    uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
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
  _eh_vector_destructor_iterator_(local_c8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

