// gml_Script___InputGetMouseActive @ 0x14009b590

undefined1 **
gml_Script___InputGetMouseActive(undefined8 param_1,undefined8 param_2,undefined1 **param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 **ppuVar8;
  undefined8 *puVar9;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [12];
  byte local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_60 = "gml_Script___InputGetKeyboardOutput";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 3;
  _eh_vector_constructor_iterator_(local_50,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = (undefined1 *)0x0;
  local_8c = 0;
  local_98 = 0;
  local_7c = 0;
  local_88 = 0;
  bVar2 = true;
  bVar1 = false;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (undefined1 *)0x0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc690) &&
     (_Init_thread_header(&DAT_141ddc690), DAT_141ddc690 == -1)) {
    DAT_141ddc688 = (longlong *)FUN_140e63aa0(DAT_141a01558);
    _Init_thread_footer(&DAT_141ddc690);
  }
  if (DAT_141ddc044 == '\0') {
    FUN_140e64380(DAT_141ddc688,"gml_Script___InputGetKeyboardOutput");
    FUN_140e64380(param_1,"gml_Script___InputGetKeyboardOutput");
  }
  local_58 = 5;
  if (DAT_141ddc044 == '\0') {
    DAT_141ddc044 = '\x01';
    plVar5 = (longlong *)(**(code **)(*DAT_141ddc688 + 0x10))(DAT_141ddc688,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc688);
    plVar6 = (longlong *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_98,0,0);
    if (plVar6 != plVar5) {
      local_b8 = (undefined1 *)*plVar6;
      uStack_b0 = (undefined4)plVar6[1];
      uStack_ac = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar5);
      }
      FUN_140041b80(plVar5,&local_b8);
    }
    FUN_140e60910(1);
  }
  local_58 = 7;
  cVar3 = FUN_140eab100(1);
  if (cVar3 == '\0') {
LAB_14009ba06:
    local_58 = 0xe;
    if (param_3 == (undefined1 **)&DAT_1419df7b0) goto LAB_14009ba4a;
    local_40 = (undefined4)DAT_1419df7b0;
    uStack_3c = DAT_1419df7b0._4_4_;
    uStack_38 = DAT_1419df7b8;
    uStack_34 = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    puVar9 = (undefined8 *)&local_40;
  }
  else {
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    uVar7 = gml_Script_InputGetBindingName(param_1,param_2,&local_88,0,0);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 == '\0') goto LAB_14009ba06;
    local_58 = 10;
    FUN_140e85f80(param_1,DAT_141a01578,0x80000000,&local_a8);
    uStack_ac = 0;
    local_b8 = (undefined1 *)0x3ff0000000000000;
    iVar4 = FUN_140e851f0(&local_a8,&local_b8,DAT_141955260,1);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if (iVar4 == -2 || 0 < iVar4) {
      local_58 = 0xb;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_98 = 0;
      local_90 = 0;
      local_8c = 5;
      FUN_140e85f80(param_1,DAT_141a01578,0x80000000,&local_a8);
      local_b8 = local_a8;
      uStack_b0 = uStack_a0;
      uStack_ac = uStack_9c;
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_50);
      }
      FUN_140041b80(local_50,&local_b8);
      local_78 = local_50;
      uVar7 = gml_Script___Clear_anon_1004___InputMotionClass___InputMotionClass
                        (param_1,param_2,&local_98,1,&local_78);
      cVar3 = FUN_140e491e0(uVar7);
      if (cVar3 == '\0') {
        local_6c = uStack_9c;
        local_70 = uStack_a0;
        if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
          local_78 = local_a8;
        }
        else {
          FUN_1400419b0(&local_78,&local_a8);
        }
        ppuVar8 = &local_78;
        bVar2 = false;
        bVar1 = true;
      }
      else {
        uStack_ac = DAT_1419df7bc;
        uStack_b0 = DAT_1419df7b8;
        if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
          local_b8 = (undefined1 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        }
        else {
          FUN_1400419b0(&local_b8,&DAT_1419df7b0);
        }
        ppuVar8 = (undefined1 **)&local_b8;
      }
      if (ppuVar8 != param_3) {
        local_40 = *(undefined4 *)ppuVar8;
        uStack_3c = *(undefined4 *)((longlong)ppuVar8 + 4);
        uStack_38 = *(undefined4 *)(ppuVar8 + 1);
        uStack_34 = *(undefined4 *)((longlong)ppuVar8 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_40);
      }
      if ((bVar1) && ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_78);
      }
      if ((bVar2) && ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_b8);
      }
      goto LAB_14009ba4a;
    }
    local_58 = 10;
    if (param_3 == (undefined1 **)&DAT_1419df7b0) goto LAB_14009ba4a;
    local_b8 = (undefined1 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    puVar9 = &local_b8;
  }
  FUN_140041b80(param_3,puVar9);
LAB_14009ba4a:
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

