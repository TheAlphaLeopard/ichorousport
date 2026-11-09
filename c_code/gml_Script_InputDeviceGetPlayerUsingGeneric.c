// gml_Script_InputDeviceGetPlayerUsingGeneric @ 0x1403219f0

undefined8 *
gml_Script_InputDeviceGetPlayerUsingGeneric
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  code *pcVar13;
  undefined8 local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  uint local_78 [2];
  undefined8 *local_70;
  undefined1 local_68 [16];
  undefined8 local_58 [6];
  
  local_c0 = "gml_Script_InputDeviceGetPlayerUsingGamepad";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0xb;
  FUN_140041df0(local_78,param_4,1,param_5);
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_68,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0.0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde1b0) &&
     (_Init_thread_header(&DAT_141dde1b0), DAT_141dde1b0 == -1)) {
    DAT_141dde1a8 = (longlong *)FUN_140e63aa0(DAT_1419f0fd8);
    _Init_thread_footer(&DAT_141dde1b0);
  }
  local_b8 = 0xb;
  puVar11 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_70;
  }
  iVar3 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_b8 = 0xb;
    uStack_8c = 0xd;
    local_98 = 0x3ff0000000000000;
    if (((int)local_78[0] < 1) || (puVar11 = (undefined8 *)*local_70, &local_98 != puVar11)) {
      local_d8 = 0;
      uStack_d4 = 0x3ff00000;
      uStack_d0 = uStack_90;
      uStack_cc = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      FUN_140041b80(puVar11,&local_d8);
    }
  }
  if (DAT_141ddc0d7 == '\0') {
    FUN_140e64380(DAT_141dde1a8,"gml_Script_InputDeviceGetPlayerUsingGamepad");
    FUN_140e64380(param_1,"gml_Script_InputDeviceGetPlayerUsingGamepad");
  }
  local_b8 = 0xd;
  if (DAT_141ddc0d7 == '\0') {
    DAT_141ddc0d7 = '\x01';
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar6 = (undefined4 *)(**(code **)(*DAT_141dde1a8 + 0x10))(DAT_141dde1a8,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde1a8);
    pcVar13 = (code *)0x0;
    puVar7 = (undefined4 *)gml_Script___InputTrace(param_1,param_2,&local_f8,0,0);
    if (puVar7 != puVar6) {
      local_d8 = *puVar7;
      uStack_d4 = puVar7[1];
      uStack_d0 = puVar7[2];
      uStack_cc = puVar7[3];
      if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_d8);
    }
    FUN_140e60910(1);
  }
  local_b8 = 0xf;
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = 0;
  local_108 = 0.0;
  iVar3 = 1;
  do {
    iVar3 = iVar3 + -1;
    local_b8 = 0x12;
    if ((int)local_78[0] < 1) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (undefined8 *)*local_70;
    }
    cVar2 = FUN_140e491e0(puVar11);
    if (cVar2 == '\0') {
LAB_140321d69:
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      plVar9 = (longlong *)(**(code **)(*DAT_141dde1a8 + 8))(DAT_141dde1a8,DAT_141a026b8);
      iVar4 = FUN_140e4a740(&local_108);
      if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      FUN_140e87440(plVar9,DAT_1419fd5c8,0x80000000,&local_a8,
                    (ulonglong)pcVar13 & 0xffffffffffffff00,0);
      local_d8 = (undefined4)local_a8;
      uStack_d4 = local_a8._4_4_;
      uStack_d0 = uStack_a0;
      uStack_cc = uStack_9c;
      if ((1 << ((byte)local_58[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_58);
      }
      FUN_140041b80(local_58,&local_d8);
      local_80 = local_58;
      pcVar13 = (code *)&local_80;
      uVar8 = gml_Script_InputDeviceSetRebinding(param_1,param_2,&local_e8,1,pcVar13);
      cVar2 = FUN_140e491e0(uVar8);
      if (cVar2 != '\0') {
        local_b8 = 0x14;
        if (&local_108 == param_3) goto LAB_140321f72;
        local_d8 = (int)local_108;
        uStack_d4 = local_108._4_4_;
        uStack_d0 = uStack_100;
        uStack_cc = uStack_fc;
        goto LAB_140321f4a;
      }
    }
    else {
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      local_88 = &local_108;
      pcVar13 = (code *)&local_88;
      uVar8 = gml_Script_InputPlayerLowestConnectedIndex(param_1,param_2,&local_f8,1,pcVar13);
      cVar2 = FUN_140e491e0(uVar8);
      if (cVar2 != '\0') goto LAB_140321d69;
    }
    local_b8 = 0x17;
    uVar5 = uStack_fc & 0xffffff;
    if (uVar5 == 0) {
LAB_140321ede:
      local_108 = local_108 + 1.0;
    }
    else {
      if (uVar5 == 1) {
        local_108 = (double)FUN_140e4b060(&local_108);
        uStack_fc = 0;
        goto LAB_140321ede;
      }
      if (uVar5 == 7) {
        local_108 = (double)CONCAT44(local_108._4_4_,(int)local_108 + 1);
      }
      else if (uVar5 == 10) {
        local_108 = (double)((longlong)local_108 + 1);
      }
      else {
        if (uVar5 == 0xd) {
          uStack_fc = 0;
          goto LAB_140321ede;
        }
        FUN_140042910(&DAT_14172c3d8,&local_108,&local_108);
      }
    }
  } while (0 < iVar3);
  local_b8 = 0x1a;
  if (param_3 != &DAT_1419df7b0) {
    local_d8 = (undefined4)DAT_1419df7b0;
    uStack_d4 = DAT_1419df7b0._4_4_;
    uStack_d0 = DAT_1419df7b8;
    uStack_cc = DAT_1419df7bc;
LAB_140321f4a:
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
LAB_140321f72:
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,2,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar11 = local_70;
    do {
      puVar10 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 1) = 0;
      *(undefined4 *)((longlong)puVar10 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

