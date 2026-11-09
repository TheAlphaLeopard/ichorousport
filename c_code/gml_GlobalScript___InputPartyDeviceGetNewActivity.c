// gml_GlobalScript___InputPartyDeviceGetNewActivity @ 0x1400bcbc0

undefined8 *
gml_GlobalScript___InputPartyDeviceGetNewActivity
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 local_58;
  undefined4 local_4c;
  undefined1 local_48 [12];
  byte local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script___InputOnOperaGXMobile";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 3;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc760) {
    _Init_thread_header(&DAT_141ddc760);
    if (DAT_141ddc760 == -1) {
      DAT_141ddc758 = (longlong *)FUN_140e63aa0(DAT_141a01fa8);
      _Init_thread_footer(&DAT_141ddc760);
    }
  }
  if (DAT_141ddc04b == '\0') {
    FUN_140e64380(DAT_141ddc758,"gml_Script___InputOnOperaGXMobile");
    FUN_140e64380(param_1,"gml_Script___InputOnOperaGXMobile");
  }
  local_18 = 5;
  if (DAT_141ddc04b == '\0') {
    DAT_141ddc04b = '\x01';
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddc758 + 0x10))(DAT_141ddc758,DAT_141a01f98);
    FUN_140e609c0(DAT_141ddc758);
    FUN_140e645a0(local_48,gml_GlobalScript___InputPartyConstants,0);
    puVar2 = (undefined4 *)FUN_140e63610(param_1,param_2,&local_58,0,local_48,0);
    if (puVar2 != puVar1) {
      local_38 = *puVar2;
      uStack_34 = puVar2[1];
      uStack_30 = puVar2[2];
      uStack_2c = puVar2[3];
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_48);
    }
    FUN_140e60910(1);
  }
  local_18 = 0x10;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc758 + 8))(DAT_141ddc758,DAT_141a01f98);
  if (puVar3 != param_3) {
    local_38 = *(undefined4 *)puVar3;
    uStack_34 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_30 = *(undefined4 *)(puVar3 + 1);
    uStack_2c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_38);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

