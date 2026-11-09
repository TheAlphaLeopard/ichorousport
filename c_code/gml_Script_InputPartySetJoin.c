// gml_Script_InputPartySetJoin @ 0x140343f10

longlong * gml_Script_InputPartySetJoin(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
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
  
  local_40 = "gml_Script_InputPartyGetReady";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 5;
  local_7c = 0xffffff;
  local_88 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0;
  uVar8 = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde490) &&
     (_Init_thread_header(&DAT_141dde490), DAT_141dde490 == -1)) {
    DAT_141dde498 = (longlong *)FUN_140e63aa0(DAT_1419f2658);
    _Init_thread_footer(&DAT_141dde490);
  }
  if (DAT_141ddc108 == '\0') {
    FUN_140e64380(DAT_141dde498,"gml_Script_InputPartyGetReady");
    FUN_140e64380(param_1,"gml_Script_InputPartyGetReady");
  }
  local_38 = 7;
  if (DAT_141ddc108 == '\0') {
    DAT_141ddc108 = '\x01';
    puVar4 = (undefined4 *)(**(code **)(*DAT_141dde498 + 0x10))(DAT_141dde498,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde498);
    puVar5 = (undefined4 *)gml_Script___InputPlugInExecuteCallbacks(param_1,param_2,&local_98,0,0);
    if (puVar5 != puVar4) {
      local_58 = *puVar5;
      uStack_54 = puVar5[1];
      uStack_50 = puVar5[2];
      uStack_4c = puVar5[3];
      if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_58);
    }
    FUN_140e60910(1);
  }
  local_38 = 9;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  uVar9 = 0;
  puVar6 = (undefined8 *)gml_Script_InputPlayerGetBlocked(param_1,param_2,&local_98,0,0);
  if (puVar6 != &local_88) {
    local_58 = *(undefined4 *)puVar6;
    uStack_54 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_50 = *(undefined4 *)(puVar6 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_58);
  }
  local_38 = 10;
  bVar1 = false;
  uVar7 = (**(code **)(*DAT_141dde498 + 8))(DAT_141dde498,DAT_1419fcb48);
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar7,DAT_141a021e8,0x80000000,&local_68,uVar9,0);
  uVar2 = FUN_140e851f0(&local_88,&local_68,DAT_141955260,1);
  if (uVar2 < 0x80000000) {
    uVar7 = (**(code **)(*DAT_141dde498 + 8))(DAT_141dde498,DAT_1419fcb48);
    FUN_140e87440(uVar7,DAT_141a021c8,0x80000000,&local_78,uVar9 & 0xffffffffffffff00,0);
    iVar3 = FUN_140e851f0(&local_88,&local_78,DAT_141955260,1);
    if (iVar3 != -2) {
      bVar1 = iVar3 < 1;
    }
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (bVar1) {
    uVar8 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar8 << 0x20;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

