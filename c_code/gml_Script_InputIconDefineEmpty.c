// gml_Script_InputIconDefineEmpty @ 0x14032b870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputIconDefineEmpty
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  
  local_c0 = "gml_Script_InputGetSteamInfo";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0xd;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde278) {
    _Init_thread_header(&DAT_141dde278);
    if (DAT_141dde278 == -1) {
      DAT_141dde280 = (longlong *)FUN_140e63aa0(DAT_1419f14a8);
      _Init_thread_footer(&DAT_141dde278);
    }
  }
  if (DAT_141ddc0e6 == '\0') {
    FUN_140e64380(DAT_141dde280,"gml_Script_InputGetSteamInfo");
    FUN_140e64380(param_1,"gml_Script_InputGetSteamInfo");
  }
  local_b8 = 0xf;
  if (DAT_141ddc0e6 == '\0') {
    DAT_141ddc0e6 = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141dde280 + 0x10))(DAT_141dde280,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde280);
    pcVar5 = (code *)0x0;
    puVar3 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_d8,0,0);
    if (puVar3 != puVar2) {
      local_e8 = *puVar3;
      uStack_e0 = *(undefined4 *)(puVar3 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_e8);
    }
    FUN_140e60910(1);
  }
  local_b8 = 0x11;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  uStack_dc = 10;
  local_e8 = 0;
  iVar1 = FUN_140e851f0(puVar3,&local_e8,DAT_141955260,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (iVar1 == 0) {
    local_b8 = 0x13;
    uVar4 = (**(code **)(*DAT_141dde280 + 8))(DAT_141dde280,DAT_1419fcb48);
    FUN_140e87440(uVar4,DAT_141a01448,0x80000000,&local_88,(ulonglong)pcVar5 & 0xffffffffffffff00,0)
    ;
    if (&local_88 != param_3) {
      local_e8 = local_88;
      uStack_e0 = uStack_80;
      uStack_dc = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_e8);
    }
  }
  else {
    local_b8 = 0x15;
    if (param_4 < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*param_5;
    }
    uStack_dc = 10;
    local_e8 = 1;
    iVar1 = FUN_140e851f0(puVar3,&local_e8,DAT_141955260,0);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if (iVar1 == 0) {
      local_b8 = 0x17;
      uVar4 = (**(code **)(*DAT_141dde280 + 8))(DAT_141dde280,DAT_1419fcb48);
      FUN_140e87440(uVar4,DAT_141a01428,0x80000000,&local_98,(ulonglong)pcVar5 & 0xffffffffffffff00,
                    0);
      if (&local_98 != param_3) {
        local_e8 = local_98;
        uStack_e0 = uStack_90;
        uStack_dc = uStack_8c;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_e8);
      }
    }
    else {
      local_b8 = 0x19;
      if (param_4 < 1) {
        puVar3 = &DAT_1419df7b0;
      }
      else {
        puVar3 = (undefined8 *)*param_5;
      }
      uStack_dc = 10;
      local_e8 = 2;
      iVar1 = FUN_140e851f0(puVar3,&local_e8,DAT_141955260,0);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if (iVar1 == 0) {
        local_b8 = 0x1b;
        uVar4 = (**(code **)(*DAT_141dde280 + 8))(DAT_141dde280,DAT_1419fcb48);
        FUN_140e87440(uVar4,DAT_141a01ad8,0x80000000,&local_a8,
                      (ulonglong)pcVar5 & 0xffffffffffffff00,0);
        if (&local_a8 != param_3) {
          local_e8 = local_a8;
          uStack_e0 = uStack_a0;
          uStack_dc = uStack_9c;
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_e8);
        }
      }
      else {
        local_b8 = 0x1f;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 5;
        local_e8 = CONCAT44(uRam0000000141dd03ec,_DAT_141dd03e8);
        uStack_e0 = uRam0000000141dd03f0;
        uStack_dc = DAT_141dd03f4;
        if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_78);
        }
        FUN_140041b80(local_78,&local_e8);
        local_48 = local_78;
        if ((param_4 < 1) || (puVar2 = (undefined8 *)*param_5, puVar2 != &local_68)) {
          local_e8 = *puVar2;
          uStack_e0 = *(undefined4 *)(puVar2 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
          if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_68);
          }
          FUN_140041b80(&local_68,&local_e8);
        }
        local_40 = &local_68;
        local_e8 = CONCAT44(uRam0000000141dd03dc,_DAT_141dd03d8);
        uStack_e0 = uRam0000000141dd03e0;
        uStack_dc = DAT_141dd03e4;
        if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_58);
        }
        FUN_140041b80(local_58,&local_e8);
        local_38 = local_58;
        FUN_14008e020(param_1,param_2,&local_d8,3,&local_48);
      }
    }
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

