// gml_Script_InputMouseCheck @ 0x140339470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_InputMouseCheck(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *local_res18 [2];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_InputMotionSupportedByPlatform";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 8;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0;
  uVar5 = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde358) {
    _Init_thread_header(&DAT_141dde358);
    if (DAT_141dde358 == -1) {
      DAT_141dde360 = (longlong *)FUN_140e63aa0(DAT_1419f1c98);
      _Init_thread_footer(&DAT_141dde358);
    }
  }
  if (DAT_141ddc0f6 == '\0') {
    FUN_140e64380(DAT_141dde360,"gml_Script_InputMotionSupportedByPlatform");
    FUN_140e64380(param_1,"gml_Script_InputMotionSupportedByPlatform");
  }
  local_48 = 10;
  if (DAT_141ddc0f6 == '\0') {
    DAT_141ddc0f6 = '\x01';
    plVar2 = (longlong *)(**(code **)(*DAT_141dde360 + 0x10))(DAT_141dde360,DAT_141a00fe8);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    local_68 = _DAT_1419e4120;
    uStack_64 = uRam00000001419e4124;
    uStack_60 = uRam00000001419e4128;
    uStack_5c = uRam00000001419e412c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_68);
    local_res18[0] = local_78;
    uVar3 = gml_Script_InputIconDefineEmpty(param_1,param_2,&local_88,1,local_res18);
    cVar1 = FUN_140e491e0(uVar3);
    FUN_140e609c0(DAT_141dde360);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar2);
    }
    *(undefined4 *)((longlong)plVar2 + 0xc) = 0xd;
    if (cVar1 != '\0') {
      uVar5 = 0x3ff00000;
    }
    *plVar2 = (ulonglong)uVar5 << 0x20;
    FUN_140e60910(1);
  }
  local_48 = 0xd;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141dde360 + 8))(DAT_141dde360,DAT_141a00fe8);
  if (puVar4 != param_3) {
    local_68 = *(undefined4 *)puVar4;
    uStack_64 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_60 = *(undefined4 *)(puVar4 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

