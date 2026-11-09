// gml_Script_anon_274___InputColorSystem___InputColorSystem @ 0x14006b100

undefined8 *
gml_Script_anon_274___InputColorSystem___InputColorSystem
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script___InputColorClassPlayer";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 5;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc520) {
    _Init_thread_header(&DAT_141ddc520);
    if (DAT_141ddc520 == -1) {
      DAT_141ddc528 = (longlong *)FUN_140e63aa0(DAT_1419fec48);
      _Init_thread_footer(&DAT_141ddc520);
    }
  }
  if (DAT_141ddc036 == '\0') {
    FUN_140e64380(DAT_141ddc528,"gml_Script___InputColorClassPlayer");
    FUN_140e64380(param_1,"gml_Script___InputColorClassPlayer");
  }
  FUN_140e643a0(param_1,DAT_141ddc528);
  local_28 = 0xb;
  if (DAT_141ddc036 == '\0') {
    DAT_141ddc036 = '\x01';
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddc528 + 0x10))(DAT_141ddc528,DAT_1419fec38);
    FUN_140e609c0(DAT_141ddc528);
    FUN_140e645a0(&local_58,gml_Script___InputColorClassPlayer,0);
    if (&local_58 != puVar1) {
      local_48 = local_58;
      uStack_44 = uStack_54;
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_48);
    }
    if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddc528 + 0x10))(DAT_141ddc528,DAT_1419fec18);
    FUN_140e609c0(DAT_141ddc528);
    FUN_140e645a0(&local_58,gml_GlobalScript___InputColorSystem,0);
    if (&local_58 != puVar1) {
      local_48 = local_58;
      uStack_44 = uStack_54;
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_48);
    }
    if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140e60910(1);
  }
  local_28 = 7;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd7f8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar2) {
    local_48 = *(undefined4 *)param_5;
    uStack_44 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_40 = *(undefined4 *)(param_5 + 1);
    uStack_3c = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 9;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fec28);
  FUN_140e609c0(param_1);
  if (puVar2 != &DAT_1419df7b0) {
    local_48 = (undefined4)DAT_1419df7b0;
    uStack_44 = DAT_1419df7b0._4_4_;
    uStack_40 = DAT_1419df7b8;
    uStack_3c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

