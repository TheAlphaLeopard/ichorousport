// gml_Script___UpdateStatus_anon_3806___InputClassPlayer___InputClassPlayer @ 0x140045310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___UpdateStatus_anon_3806___InputClassPlayer___InputClassPlayer
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_ffffffffffffff20;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined4 local_90 [3];
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined4 *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_a0 = "gml_Script___InputClassGamepad";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 5;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_90,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc1d8) {
    _Init_thread_header(&DAT_141ddc1d8);
    if (DAT_141ddc1d8 == -1) {
      DAT_141ddc1d0 = (longlong *)FUN_140e63aa0(DAT_1419fd278);
      _Init_thread_footer(&DAT_141ddc1d8);
    }
  }
  if (DAT_141dc5fcd == '\0') {
    FUN_140e64380(DAT_141ddc1d0,"gml_Script___InputClassGamepad");
    FUN_140e64380(param_1,"gml_Script___InputClassGamepad");
  }
  FUN_140e643a0(param_1,DAT_141ddc1d0);
  local_98 = 7;
  if (DAT_141dc5fcd == '\0') {
    DAT_141dc5fcd = '\x01';
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc1d0 + 0x10))(DAT_141ddc1d0,DAT_1419fd298);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar6 = 0;
    uVar2 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_c8,0,0);
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_1419fd268,0x80000000,&local_48,uVar6,
                  in_stack_ffffffffffffff20 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar6 >> 0x20);
    FUN_140e609c0(DAT_141ddc1d0);
    if (&local_48 != puVar1) {
      local_b8 = local_48;
      uStack_b0 = uStack_40;
      uStack_ac = uStack_3c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc1d0 + 0x10))(DAT_141ddc1d0,DAT_1419fd2c8);
    FUN_140e609c0(DAT_141ddc1d0);
    FUN_140e645a0(&local_b8,gml_GlobalScript___InputClassPlayer,0);
    if (&local_b8 != puVar1) {
      local_d8 = (undefined4)local_b8;
      uStack_d4 = local_b8._4_4_;
      uStack_d0 = uStack_b0;
      uStack_cc = uStack_ac;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140e60910(1);
  }
  local_98 = 9;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd1f8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar1) {
    local_d8 = *(undefined4 *)param_5;
    uStack_d4 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_d0 = *(undefined4 *)(param_5 + 1);
    uStack_cc = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_98 = 10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd318);
  uStack_ac = 0xd;
  local_b8 = 0;
  if (&local_b8 != puVar1) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_b0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  local_98 = 0xb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd2b8);
  FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_58);
  FUN_140e609c0(param_1);
  if (&local_58 != puVar1) {
    local_d8 = (undefined4)local_58;
    uStack_d4 = local_58._4_4_;
    uStack_d0 = uStack_50;
    uStack_cc = uStack_4c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_98 = 0xd;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd328);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_d8 = (undefined4)DAT_1419df7b0;
    uStack_d4 = DAT_1419df7b0._4_4_;
    uStack_d0 = DAT_1419df7b8;
    uStack_cc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_98 = 0xe;
  puVar3 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd288);
  if (puVar3 != &DAT_141dc7a68) {
    local_d8 = _DAT_141dc7a68;
    uStack_d4 = uRam0000000141dc7a6c;
    uStack_d0 = uRam0000000141dc7a70;
    uStack_cc = DAT_141dc7a74;
    if ((1 << ((byte)*(undefined4 *)(puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_d8);
  }
  local_98 = 0xf;
  puVar3 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd368);
  if (puVar3 != &DAT_141dc7a68) {
    local_d8 = _DAT_141dc7a68;
    uStack_d4 = uRam0000000141dc7a6c;
    uStack_d0 = uRam0000000141dc7a70;
    uStack_cc = DAT_141dc7a74;
    if ((1 << ((byte)*(undefined4 *)(puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_d8);
  }
  local_98 = 0x11;
  puVar3 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd238);
  if (puVar3 != &DAT_141dc7a78) {
    local_d8 = _DAT_141dc7a78;
    uStack_d4 = uRam0000000141dc7a7c;
    uStack_d0 = uRam0000000141dc7a80;
    uStack_cc = DAT_141dc7a84;
    if ((1 << ((byte)*(undefined4 *)(puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_d8);
  }
  local_98 = 0x12;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd248);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4000000000000000;
  local_98 = 0x13;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd208);
  uStack_ac = 0xd;
  local_b8 = 0;
  if (&local_b8 != puVar1) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_b0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  local_98 = 0x15;
  uStack_ac = 0xd;
  local_b8 = 0;
  if (&local_b8 != puVar1) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_b0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  local_98 = 0x16;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd378);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_d8 = (undefined4)DAT_1419df7b0;
    uStack_d4 = DAT_1419df7b0._4_4_;
    uStack_d0 = DAT_1419df7b8;
    uStack_cc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_98 = 0x17;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd1e8);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_d8 = (undefined4)DAT_1419df7b0;
    uStack_d4 = DAT_1419df7b0._4_4_;
    uStack_d0 = DAT_1419df7b8;
    uStack_cc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_98 = 0x19;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar4 = (undefined4 *)(**(code **)(*DAT_141ddc1d0 + 8))(DAT_141ddc1d0,DAT_1419fd298);
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd228);
  if (puVar4 != local_90) {
    local_d8 = *puVar4;
    uStack_d4 = puVar4[1];
    uStack_d0 = puVar4[2];
    uStack_cc = puVar4[3];
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_d8);
  }
  local_70 = local_90;
  local_d8 = _DAT_1419df840;
  uStack_d4 = uRam00000001419df844;
  uStack_d0 = uRam00000001419df848;
  uStack_cc = uRam00000001419df84c;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_d8);
  local_68 = local_80;
  FUN_140e609c0(param_1);
  uVar2 = CONCAT44(uVar7,DAT_1419fd0c8);
  puVar4 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_c8,2,uVar2,&local_70);
  uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar4 != puVar5) {
    local_d8 = *puVar4;
    uStack_d4 = puVar4[1];
    uStack_d0 = puVar4[2];
    uStack_cc = puVar4[3];
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_d8);
  }
  FUN_140e60910(1);
  local_98 = 0x1b;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd2d8);
  local_d8 = _DAT_1419df810;
  uStack_d4 = uRam00000001419df814;
  uStack_d0 = uRam00000001419df818;
  uStack_cc = uRam00000001419df81c;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_d8);
  local_70 = local_90;
  local_d8 = _DAT_141dc5fd0;
  uStack_d4 = uRam0000000141dc5fd4;
  uStack_d0 = uRam0000000141dc5fd8;
  uStack_cc = uRam0000000141dc5fdc;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_d8);
  local_68 = local_80;
  FUN_140e609c0(param_1);
  uVar2 = CONCAT44(uVar7,DAT_1419fd218);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_c8,2,uVar2,&local_70);
  uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar5 != puVar4) {
    local_d8 = *puVar5;
    uStack_d4 = puVar5[1];
    uStack_d0 = puVar5[2];
    uStack_cc = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_d8);
  }
  FUN_140e60910(1);
  local_98 = 0x1c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd358);
  local_d8 = _DAT_1419df810;
  uStack_d4 = uRam00000001419df814;
  uStack_d0 = uRam00000001419df818;
  uStack_cc = uRam00000001419df81c;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_d8);
  local_70 = local_90;
  local_d8 = _DAT_141dc5fd0;
  uStack_d4 = uRam0000000141dc5fd4;
  uStack_d0 = uRam0000000141dc5fd8;
  uStack_cc = uRam0000000141dc5fdc;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_d8);
  local_68 = local_80;
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_c8,2,CONCAT44(uVar7,DAT_1419fd218),&local_70);
  if (puVar5 != puVar4) {
    local_d8 = *puVar5;
    uStack_d4 = puVar5[1];
    uStack_d0 = puVar5[2];
    uStack_cc = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_d8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

