// gml_Script_InputGetSteamInfo @ 0x14032b500

longlong * gml_Script_InputGetSteamInfo(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong in_stack_ffffffffffffff78;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_InputGetHotswap";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 5;
  local_6c = 0xffffff;
  local_78 = 0;
  local_5c = 0;
  uVar5 = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde268) {
    _Init_thread_header(&DAT_141dde268);
    if (DAT_141dde268 == -1) {
      DAT_141dde270 = (longlong *)FUN_140e63aa0(DAT_1419f1488);
      _Init_thread_footer(&DAT_141dde268);
    }
  }
  if (DAT_141ddc0e5 == '\0') {
    FUN_140e64380(DAT_141dde270,"gml_Script_InputGetHotswap");
    FUN_140e64380(param_1,"gml_Script_InputGetHotswap");
  }
  local_38 = 7;
  if (DAT_141ddc0e5 == '\0') {
    DAT_141ddc0e5 = '\x01';
    puVar2 = (undefined4 *)(**(code **)(*DAT_141dde270 + 0x10))(DAT_141dde270,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde270);
    in_stack_ffffffffffffff78 = 0;
    puVar3 = (undefined4 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_68,0,0);
    if (puVar3 != puVar2) {
      local_58 = *puVar3;
      uStack_54 = puVar3[1];
      uStack_50 = puVar3[2];
      uStack_4c = puVar3[3];
      if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_58);
    }
    FUN_140e60910(1);
  }
  local_38 = 9;
  uVar4 = (**(code **)(*DAT_141dde270 + 8))(DAT_141dde270,DAT_1419fcb48);
  FUN_140e87440(uVar4,DAT_141a026f8,0x80000000,&local_78,
                in_stack_ffffffffffffff78 & 0xffffffffffffff00,0);
  cVar1 = FUN_140e491e0(&local_78);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (cVar1 != '\0') {
    uVar5 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar5 << 0x20;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

