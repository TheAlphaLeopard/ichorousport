// gml_Script_InputPartyGetReady @ 0x1403435a0

undefined8 * gml_Script_InputPartyGetReady(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong in_stack_fffffffffffffee8;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffef0;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined1 local_48 [16];
  longlong local_38;
  
  local_e0 = "gml_Script_InputPartyGetParams";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 6;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_4c = 0;
  local_58 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde480) {
    _Init_thread_header(&DAT_141dde480);
    if (DAT_141dde480 == -1) {
      DAT_141dde488 = (longlong *)FUN_140e63aa0(DAT_1419f2638);
      _Init_thread_footer(&DAT_141dde480);
    }
  }
  if (DAT_141ddc107 == '\0') {
    FUN_140e64380(DAT_141dde488,"gml_Script_InputPartyGetParams");
    FUN_140e64380(local_res8,"gml_Script_InputPartyGetParams");
  }
  local_d8 = 8;
  if (DAT_141ddc107 == '\0') {
    DAT_141ddc107 = '\x01';
    puVar3 = (undefined4 *)(**(code **)(*DAT_141dde488 + 0x10))(DAT_141dde488,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde488);
    uVar8 = 0;
    puVar4 = (undefined4 *)
             gml_Script___InputPlugInExecuteCallbacks(local_res8,local_res10,&local_58,0,0);
    if (puVar4 != puVar3) {
      local_108 = *puVar4;
      uStack_104 = puVar4[1];
      uStack_100 = puVar4[2];
      uStack_fc = puVar4[3];
      if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_108);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar3 = (undefined4 *)(**(code **)(*DAT_141dde488 + 0x10))(DAT_141dde488,DAT_1419f2608);
    FUN_140e609c0(DAT_141dde488);
    in_stack_fffffffffffffef0 = 0;
    in_stack_fffffffffffffee8 = CONCAT44(uVar8,DAT_1419fd6d8);
    puVar4 = (undefined4 *)
             FUN_140e634e0(local_res8,local_res10,&local_f8,0,in_stack_fffffffffffffee8,0);
    if (puVar4 != puVar3) {
      local_108 = *puVar4;
      uStack_104 = puVar4[1];
      uStack_100 = puVar4[2];
      uStack_fc = puVar4[3];
      if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_108);
    }
    FUN_140e60910(1);
  }
  local_d8 = 0xb;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141dde488 + 8))(DAT_141dde488,DAT_1419f2608);
  iVar2 = FUN_140e63cb0(local_48,&local_res8,&local_res10,puVar5);
  if (0 < iVar2) {
    do {
      local_d8 = 0xd;
      uVar6 = (**(code **)(*DAT_141dde488 + 8))(DAT_141dde488,DAT_1419fcb48);
      puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f2648);
      in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
      in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_141a021e8,0x80000000,&local_68,in_stack_fffffffffffffee8,
                    in_stack_fffffffffffffef0);
      FUN_140e609c0(local_res8);
      if (&local_68 != puVar7) {
        local_108 = (undefined4)local_68;
        uStack_104 = local_68._4_4_;
        uStack_100 = uStack_60;
        uStack_fc = uStack_5c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_108);
      }
      FUN_140e60910(1);
      local_d8 = 0xe;
      puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f2618);
      uVar6 = (**(code **)(*DAT_141dde488 + 8))(DAT_141dde488,DAT_1419fcb48);
      in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
      in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_141a021c8,0x80000000,&local_78,in_stack_fffffffffffffee8,
                    in_stack_fffffffffffffef0);
      FUN_140e609c0(local_res8);
      if (&local_78 != puVar7) {
        local_108 = (undefined4)local_78;
        uStack_104 = local_78._4_4_;
        uStack_100 = uStack_70;
        uStack_fc = uStack_6c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_108);
      }
      FUN_140e60910(1);
      local_d8 = 0xf;
      puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f25c8);
      uVar6 = (**(code **)(*DAT_141dde488 + 8))(DAT_141dde488,DAT_1419fcb48);
      in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
      in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_141a02158,0x80000000,&local_88,in_stack_fffffffffffffee8,
                    in_stack_fffffffffffffef0);
      FUN_140e609c0(local_res8);
      if (&local_88 != puVar7) {
        local_108 = (undefined4)local_88;
        uStack_104 = local_88._4_4_;
        uStack_100 = uStack_80;
        uStack_fc = uStack_7c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_108);
      }
      FUN_140e60910(1);
      local_d8 = 0x10;
      puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f25e8);
      uVar6 = (**(code **)(*DAT_141dde488 + 8))(DAT_141dde488,DAT_1419fcb48);
      in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
      in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_141a02228,0x80000000,&local_98,in_stack_fffffffffffffee8,
                    in_stack_fffffffffffffef0);
      FUN_140e609c0(local_res8);
      if (&local_98 != puVar7) {
        local_108 = (undefined4)local_98;
        uStack_104 = local_98._4_4_;
        uStack_100 = uStack_90;
        uStack_fc = uStack_8c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_108);
      }
      FUN_140e60910(1);
      local_d8 = 0x11;
      puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f25f8);
      uVar6 = (**(code **)(*DAT_141dde488 + 8))(DAT_141dde488,DAT_1419fcb48);
      in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
      in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_141a02128,0x80000000,&local_a8,in_stack_fffffffffffffee8,
                    in_stack_fffffffffffffef0);
      FUN_140e609c0(local_res8);
      if (&local_a8 != puVar7) {
        local_108 = (undefined4)local_a8;
        uStack_104 = local_a8._4_4_;
        uStack_100 = uStack_a0;
        uStack_fc = uStack_9c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_108);
      }
      FUN_140e60910(1);
      local_d8 = 0x12;
      puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f25b8);
      uVar6 = (**(code **)(*DAT_141dde488 + 8))(DAT_141dde488,DAT_1419fcb48);
      in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
      in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_141a02168,0x80000000,&local_b8,in_stack_fffffffffffffee8,
                    in_stack_fffffffffffffef0);
      FUN_140e609c0(local_res8);
      if (&local_b8 != puVar7) {
        local_108 = (undefined4)local_b8;
        uStack_104 = local_b8._4_4_;
        uStack_100 = uStack_b0;
        uStack_fc = uStack_ac;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_108);
      }
      FUN_140e60910(1);
      local_d8 = 0x13;
      puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f25d8);
      uVar6 = (**(code **)(*DAT_141dde488 + 8))(DAT_141dde488,DAT_1419fcb48);
      in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
      in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_141a02198,0x80000000,&local_c8,in_stack_fffffffffffffee8,
                    in_stack_fffffffffffffef0);
      FUN_140e609c0(local_res8);
      if (&local_c8 != puVar7) {
        local_108 = (undefined4)local_c8;
        uStack_104 = local_c8._4_4_;
        uStack_100 = uStack_c0;
        uStack_fc = uStack_bc;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_108);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_48,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_48,&local_res8,&local_res10);
  local_d8 = 0x16;
  if (puVar5 != param_3) {
    local_108 = *(undefined4 *)puVar5;
    uStack_104 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_100 = *(undefined4 *)(puVar5 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_108);
  }
  if (local_38 != 0) {
    FUN_140e4cd60();
    local_38 = 0;
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
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
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

