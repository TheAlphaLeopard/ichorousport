// gml_Script___InputGetMouseOutput @ 0x14009bbe0

undefined8 *
gml_Script___InputGetMouseOutput(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script___InputGetMouseActive";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 5;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc694) {
    _Init_thread_header(&DAT_141ddc694);
    if (DAT_141ddc694 == -1) {
      DAT_141ddc698 = (longlong *)FUN_140e63aa0(DAT_141a015b8);
      _Init_thread_footer(&DAT_141ddc694);
    }
  }
  if (DAT_141ddc045 == '\0') {
    FUN_140e64380(DAT_141ddc698,"gml_Script___InputGetMouseActive");
    FUN_140e64380(param_1,"gml_Script___InputGetMouseActive");
  }
  local_28 = 7;
  if (DAT_141ddc045 == '\0') {
    DAT_141ddc045 = '\x01';
    puVar2 = (undefined4 *)(**(code **)(*DAT_141ddc698 + 0x10))(DAT_141ddc698,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc698);
    puVar3 = (undefined4 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_58,0,0);
    if (puVar3 != puVar2) {
      local_48 = *puVar3;
      uStack_44 = puVar3[1];
      uStack_40 = puVar3[2];
      uStack_3c = puVar3[3];
      if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_48);
    }
    FUN_140e60910(1);
  }
  local_28 = 10;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_58 = 0;
  local_50 = 0;
  local_4c = 5;
  uVar4 = gml_Script_InputGetBindingName(param_1,param_2,&local_58,0,0);
  cVar1 = FUN_140e491e0(uVar4);
  local_28 = 10;
  if (cVar1 != '\0') {
    local_28 = 0x1a;
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = 0;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

