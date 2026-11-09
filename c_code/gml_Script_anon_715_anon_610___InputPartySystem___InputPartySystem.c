// gml_Script_anon_715_anon_610___InputPartySystem___InputPartySystem @ 0x1400bd680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_715_anon_610___InputPartySystem___InputPartySystem
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  byte local_94;
  undefined1 local_90 [12];
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined8 *local_70;
  char *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_c0 = "gml_Script___InputPartyDeviceIsActive";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = (undefined8 **)&local_c8;
  local_b8 = 7;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_a0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc770) &&
     (_Init_thread_header(&DAT_141ddc770), DAT_141ddc770 == -1)) {
    DAT_141ddc768 = (longlong *)FUN_140e63aa0(DAT_141a02078);
    _Init_thread_footer(&DAT_141ddc770);
  }
  if (DAT_141ddc04c == '\0') {
    FUN_140e64380(DAT_141ddc768,"gml_Script___InputPartyDeviceIsActive");
    FUN_140e64380(param_1,"gml_Script___InputPartyDeviceIsActive");
  }
  local_b8 = 9;
  if (DAT_141ddc04c == '\0') {
    DAT_141ddc04c = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141ddc768 + 0x10))(DAT_141ddc768,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc768);
    pcVar7 = (code *)0x0;
    puVar5 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_d8,0,0);
    if (puVar5 != puVar4) {
      local_f8 = *puVar5;
      uStack_f0 = *(undefined4 *)(puVar5 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_f8);
    }
    FUN_140e60910(1);
  }
  local_b8 = 10;
  uVar6 = (**(code **)(*DAT_141ddc768 + 8))(DAT_141ddc768,DAT_1419fcb48);
  FUN_140e87440(uVar6,DAT_141a02088,0x80000000,&local_b0,(ulonglong)pcVar7 & 0xffffffffffffff00,0);
  cVar1 = FUN_140e491e0(&local_b0);
  if (cVar1 == '\0') {
    local_b8 = 10;
LAB_1400bdbde:
    *param_3 = 0;
  }
  else {
    local_b8 = 0xc;
    puVar4 = &DAT_1419df7b0;
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*param_5;
    }
    uStack_ec = 0;
    local_f8 = 0;
    uVar2 = FUN_140e851f0(puVar5,&local_f8,DAT_141955260,1);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (uVar2 < 0x80000000) {
      local_b8 = 0x10;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_a0)) {
        local_f8 = *puVar4;
        uStack_f0 = *(undefined4 *)(puVar4 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a0);
        }
        FUN_140041b80(&local_a0,&local_f8);
      }
      local_58 = &local_a0;
      local_f8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_f0 = uRam00000001419df7a8;
      uStack_ec = uRam00000001419df7ac;
      if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_90);
      }
      FUN_140041b80(local_90,&local_f8);
      local_50 = local_90;
      local_f8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_f0 = uRam00000001419df7a8;
      uStack_ec = uRam00000001419df7ac;
      if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_80);
      }
      FUN_140041b80(local_80,&local_f8);
      local_48 = local_80;
      puVar4 = (undefined8 *)
               gml_Script___InputGetGamepadOutput(param_1,param_2,&local_d8,3,&local_58);
      if (puVar4 != param_3) {
        local_f8 = *puVar4;
        uStack_f0 = *(undefined4 *)(puVar4 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_f8);
      }
      goto LAB_1400bdbe8;
    }
    local_b8 = 0x13;
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    uStack_ec = 0;
    local_f8 = 0xc059000000000000;
    iVar3 = FUN_140e851f0(param_5,&local_f8,DAT_141955260,0);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (iVar3 != 0) {
LAB_1400bdbd7:
      local_b8 = 0x1b;
      goto LAB_1400bdbde;
    }
    local_b8 = 0x17;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e0 = 0;
    local_68 = "gml_Script___InputGetKeyboardActive";
    local_70 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_70;
    local_dc = 5;
    local_e8 = 0;
    local_60 = 7;
    local_f8 = 0;
    uStack_f0 = 0;
    uStack_ec = 5;
    uVar6 = gml_Script___InputGetMouseActive(param_1,param_2,&local_f8,0,0);
    iVar3 = FUN_140e851f0(uVar6,&DAT_1419df7b0,DAT_141955260,0);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_dc = 0xd;
    if (iVar3 == 0) {
      local_e8 = 0;
    }
    else {
      local_e8 = 0x3ff0000000000000;
    }
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    DAT_141dc7a50 = (undefined8 **)local_70;
    cVar1 = FUN_140e491e0(&local_e8);
    if (cVar1 == '\0') goto LAB_1400bdbd7;
    local_b8 = 0x17;
    *param_3 = 0x3ff0000000000000;
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
LAB_1400bdbe8:
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  _eh_vector_destructor_iterator_(&local_a0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 **)local_c8;
  return param_3;
}

