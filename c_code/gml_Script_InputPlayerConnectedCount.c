// gml_Script_InputPlayerConnectedCount @ 0x140344a20

undefined8 *
gml_Script_InputPlayerConnectedCount
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8 [2];
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_80 [16];
  longlong local_70;
  
  local_90 = "gml_Script_InputPartySetParams";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x26;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_b8,param_4,7,param_5);
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde4ac) &&
     (_Init_thread_header(&DAT_141dde4ac), DAT_141dde4ac == -1)) {
    DAT_141dde4b0 = (longlong *)FUN_140e63aa0(DAT_1419f26a8);
    _Init_thread_footer(&DAT_141dde4ac);
  }
  local_88 = 0x26;
  uVar8 = (ulonglong)local_b8[0];
  if ((int)local_b8[0] < 5) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_b0[4];
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar2 == 0) && (local_88 = 0x26, 4 < (int)local_b8[0])) &&
     (puVar6 = (undefined8 *)local_b0[4], puVar6 != &DAT_1419df7b0)) {
    local_a8 = (undefined4)DAT_1419df7b0;
    uStack_a4 = DAT_1419df7b0._4_4_;
    uStack_a0 = DAT_1419df7b8;
    uStack_9c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_a8);
  }
  if ((int)local_b8[0] < 6) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_b0[5];
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar2 == 0) && (5 < (int)local_b8[0])) &&
     (puVar6 = (undefined8 *)local_b0[5], puVar6 != &DAT_1419df7b0)) {
    local_a8 = (undefined4)DAT_1419df7b0;
    uStack_a4 = DAT_1419df7b0._4_4_;
    uStack_a0 = DAT_1419df7b8;
    uStack_9c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_a8);
  }
  if (DAT_141ddc10a == '\0') {
    FUN_140e64380(DAT_141dde4b0,"gml_Script_InputPartySetParams");
    FUN_140e64380(local_res8,"gml_Script_InputPartySetParams");
  }
  local_88 = 0x28;
  if (DAT_141ddc10a == '\0') {
    DAT_141ddc10a = '\x01';
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    puVar3 = (undefined4 *)(**(code **)(*DAT_141dde4b0 + 0x10))(DAT_141dde4b0,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde4b0);
    puVar4 = (undefined4 *)
             gml_Script___InputPlugInExecuteCallbacks(local_res8,local_res10,&local_c8,0,0);
    if (puVar4 != puVar3) {
      local_a8 = *puVar4;
      uStack_a4 = puVar4[1];
      uStack_a0 = puVar4[2];
      uStack_9c = puVar4[3];
      if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_a8);
    }
    FUN_140e60910(1);
  }
  local_88 = 0x29;
  uVar5 = (**(code **)(*DAT_141dde4b0 + 8))(DAT_141dde4b0,DAT_1419fcb48);
  iVar2 = FUN_140e63cb0(local_80,&local_res8,&local_res10,uVar5);
  if (0 < iVar2) {
    do {
      local_88 = 0x2b;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a021e8);
      if ((int)local_b8[0] < 2) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)local_b0[1];
      }
      if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
        uVar9 = (undefined4)*puVar7;
      }
      else {
        uVar9 = FUN_140e4b060();
      }
      uVar5 = FUN_140e78ec0(uVar9,0,0x3ff0000000000000);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = uVar5;
      local_88 = 0x2c;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a021c8);
      if ((int)local_b8[0] < 3) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)local_b0[2];
      }
      if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
        uVar9 = (undefined4)*puVar7;
      }
      else {
        uVar9 = FUN_140e4b060();
      }
      uVar5 = FUN_140e78ec0(uVar9,0,0x3ff0000000000000);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = uVar5;
      local_88 = 0x2d;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a02158);
      FUN_140e609c0(local_res8);
      if ((int)local_b8[0] < 4) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)local_b0[3];
      }
      if (puVar7 != puVar6) {
        local_a8 = *(undefined4 *)puVar7;
        uStack_a4 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_a0 = *(undefined4 *)(puVar7 + 1);
        uStack_9c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_a8);
      }
      FUN_140e60910(1);
      local_88 = 0x2e;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a02228);
      FUN_140e609c0(local_res8);
      if ((int)local_b8[0] < 1) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)*local_b0;
      }
      if (puVar7 != puVar6) {
        local_a8 = *(undefined4 *)puVar7;
        uStack_a4 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_a0 = *(undefined4 *)(puVar7 + 1);
        uStack_9c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_a8);
      }
      FUN_140e60910(1);
      local_88 = 0x2f;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a02128);
      FUN_140e609c0(local_res8);
      if ((int)local_b8[0] < 5) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)local_b0[4];
      }
      if (puVar7 != puVar6) {
        local_a8 = *(undefined4 *)puVar7;
        uStack_a4 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_a0 = *(undefined4 *)(puVar7 + 1);
        uStack_9c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_a8);
      }
      FUN_140e60910(1);
      local_88 = 0x30;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a02168);
      FUN_140e609c0(local_res8);
      if ((int)local_b8[0] < 6) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)local_b0[5];
      }
      if (puVar7 != puVar6) {
        local_a8 = *(undefined4 *)puVar7;
        uStack_a4 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_a0 = *(undefined4 *)(puVar7 + 1);
        uStack_9c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_a8);
      }
      FUN_140e60910(1);
      local_88 = 0x31;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a02198);
      FUN_140e609c0(local_res8);
      if ((int)local_b8[0] < 7) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)local_b0[6];
      }
      if (puVar7 != puVar6) {
        local_a8 = *(undefined4 *)puVar7;
        uStack_a4 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_a0 = *(undefined4 *)(puVar7 + 1);
        uStack_9c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_a8);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_80,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_80,&local_res8,&local_res10);
  if (local_70 != 0) {
    FUN_140e4cd60();
    local_70 = 0;
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (0 < (int)local_b8[0]) {
    puVar6 = local_b0;
    do {
      puVar7 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_b0);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

