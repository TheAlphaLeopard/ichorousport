// gml_Script_InputPlugInGetFrame @ 0x14035c8c0

undefined8 *
gml_Script_InputPlugInGetFrame(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *local_res18 [2];
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong in_stack_ffffffffffffff70;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68 [3];
  byte local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_InputPlugInGetAllVerbs";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 6;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde670) {
    _Init_thread_header(&DAT_141dde670);
    if (DAT_141dde670 == -1) {
      DAT_141dde668 = (longlong *)FUN_140e63aa0(DAT_1419f3338);
      _Init_thread_footer(&DAT_141dde670);
    }
  }
  if (DAT_141ddc12a == '\0') {
    FUN_140e64380(DAT_141dde668,"gml_Script_InputPlugInGetAllVerbs");
    FUN_140e64380(param_1,"gml_Script_InputPlugInGetAllVerbs");
  }
  local_38 = 8;
  if (DAT_141ddc12a == '\0') {
    DAT_141ddc12a = '\x01';
    puVar1 = (undefined8 *)(**(code **)(*DAT_141dde668 + 0x10))(DAT_141dde668,DAT_1419efbd8);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    uVar4 = 0;
    uVar2 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_88,0,0);
    uVar4 = uVar4 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_141a02e78,0x80000000,&local_78,uVar4,
                  in_stack_ffffffffffffff70 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar4 >> 0x20);
    FUN_140e609c0(DAT_141dde668);
    if (&local_78 != puVar1) {
      local_58 = (undefined4)local_78;
      uStack_54 = local_78._4_4_;
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_58);
    }
    FUN_140e60910(1);
  }
  local_38 = 10;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  puVar3 = (undefined4 *)(**(code **)(*DAT_141dde668 + 8))(DAT_141dde668,DAT_1419efbd8);
  if (puVar3 != local_68) {
    local_58 = *puVar3;
    uStack_54 = puVar3[1];
    uStack_50 = puVar3[2];
    uStack_4c = puVar3[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_58);
  }
  local_res18[0] = local_68;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_88,1,CONCAT44(uVar5,DAT_1419fd0c8),local_res18);
  if (puVar1 != param_3) {
    local_58 = *(undefined4 *)puVar1;
    uStack_54 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_50 = *(undefined4 *)(puVar1 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_58);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

