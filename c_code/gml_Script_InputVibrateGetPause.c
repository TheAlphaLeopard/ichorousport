// gml_Script_InputVibrateGetPause @ 0x140383750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputVibrateGetPause
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *local_res8;
  undefined8 local_res10;
  longlong **local_res18;
  uint local_res20;
  ulonglong uVar9;
  undefined4 uVar12;
  undefined8 uVar10;
  undefined8 **ppuVar11;
  ulonglong in_stack_fffffffffffffe40;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_16c;
  undefined8 local_168;
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined4 local_128 [3];
  byte local_11c;
  undefined4 local_118 [3];
  byte local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98 [2];
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res20 = 0;
  local_100 = "gml_Script_InputVibrateGetMagnitude";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0xd;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_98,param_4,1,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_168,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_17c = 0;
  local_188 = 0;
  local_18c = 0;
  local_198 = 0;
  local_e4 = 0;
  local_f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde8dc) &&
     (_Init_thread_header(&DAT_141dde8dc), DAT_141dde8dc == -1)) {
    DAT_141dde8e0 = (longlong *)FUN_140e63aa0(DAT_1419f41e8);
    _Init_thread_footer(&DAT_141dde8dc);
  }
  local_f8 = 0xd;
  puVar8 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_98[0];
  if ((int)local_98[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_90;
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_f8 = 0xd;
    if ((int)local_98[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_90;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  if (DAT_141ddc157 == '\0') {
    FUN_140e64380(DAT_141dde8e0,"gml_Script_InputVibrateGetMagnitude");
    FUN_140e64380(local_res8,"gml_Script_InputVibrateGetMagnitude");
  }
  local_f8 = 0xf;
  if (DAT_141ddc157 == '\0') {
    DAT_141ddc157 = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dde8e0 + 0x10))(DAT_141dde8e0,DAT_1419febe8);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    uVar9 = 0;
    uVar5 = FUN_1400ebd30(local_res8,local_res10,&local_1a8,0,0);
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_1419febc8,0x80000000,&local_a8,uVar9,
                  in_stack_fffffffffffffe40 & 0xffffffffffffff00);
    uVar12 = (undefined4)(uVar9 >> 0x20);
    FUN_140e609c0(DAT_141dde8e0);
    if (&local_a8 != puVar4) {
      local_1b8 = (undefined4)local_a8;
      uStack_1b4 = local_a8._4_4_;
      uStack_1b0 = uStack_a0;
      uStack_1ac = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_1b8);
    }
    FUN_140e60910(1);
  }
  local_f8 = 4;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((int)local_98[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140383a5c:
    local_1b8 = *(undefined4 *)puVar4;
    uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1b0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1b8);
  }
  else {
    puVar4 = (undefined8 *)*local_90;
    if (puVar4 != &local_168) goto LAB_140383a5c;
  }
  local_e0 = &local_168;
  uVar10 = CONCAT44(uVar12,DAT_141a014a8);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1a8,1,uVar10,&local_e0);
  uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_f8 = 6;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if ((int)local_98[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_140383b4e:
      local_1b8 = *(undefined4 *)puVar4;
      uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_1b0 = *(undefined4 *)(puVar4 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1b8);
    }
    else {
      puVar4 = (undefined8 *)*local_90;
      if (puVar4 != &local_158) goto LAB_140383b4e;
    }
    local_d8 = &local_158;
    local_1b8 = _DAT_141dd2078;
    uStack_1b4 = uRam0000000141dd207c;
    uStack_1b0 = uRam0000000141dd2080;
    uStack_1ac = DAT_141dd2084;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1b8);
    local_d0 = local_148;
    puVar4 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_198,1,CONCAT44(uVar12,DAT_1419fdc58),
                           &local_d8);
    if (puVar4 != &local_138) {
      local_1b8 = *(undefined4 *)puVar4;
      uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_1b0 = *(undefined4 *)(puVar4 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1b8);
    }
    local_c8 = &local_138;
    local_1b8 = _DAT_141dd2038;
    uStack_1b4 = uRam0000000141dd203c;
    uStack_1b0 = uRam0000000141dd2040;
    uStack_1ac = DAT_141dd2044;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1b8);
    local_c0 = local_128;
    FUN_14008e020(local_res8,local_res10,&local_188,3,&local_d0);
  }
  local_f8 = 8;
  if ((int)local_98[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_90;
  }
  uStack_16c = 0;
  local_178 = 0x3ff0000000000000;
  uVar3 = FUN_140e851f0(puVar4,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (uVar3 < 0x80000000) {
    local_f8 = 0xb;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    local_1b8 = _DAT_141dd2058;
    uStack_1b4 = uRam0000000141dd205c;
    uStack_1b0 = uRam0000000141dd2060;
    uStack_1ac = DAT_141dd2064;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1b8);
    local_e0 = &local_168;
    if ((int)local_98[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_140383d8d:
      local_1b8 = *(undefined4 *)puVar4;
      uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_1b0 = *(undefined4 *)(puVar4 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1b8);
    }
    else {
      puVar4 = (undefined8 *)*local_90;
      if (puVar4 != &local_158) goto LAB_140383d8d;
    }
    local_d8 = &local_158;
    local_1b8 = _DAT_141dd2028;
    uStack_1b4 = uRam0000000141dd202c;
    uStack_1b0 = uRam0000000141dd2030;
    uStack_1ac = DAT_141dd2034;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1b8);
    local_d0 = local_148;
    local_1b8 = _DAT_1419e4600;
    uStack_1b4 = uRam00000001419e4604;
    uStack_1b0 = uRam00000001419e4608;
    uStack_1ac = uRam00000001419e460c;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1b8);
    local_c8 = &local_138;
    local_1b8 = _DAT_141dd2068;
    uStack_1b4 = uRam0000000141dd206c;
    uStack_1b0 = uRam0000000141dd2070;
    uStack_1ac = DAT_141dd2074;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1b8);
    local_c0 = local_128;
    FUN_14008e020(local_res8,local_res10,&local_1a8,5,&local_e0);
  }
  local_f8 = 0x13;
  if ((int)local_98[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_90;
  }
  uStack_16c = 0;
  local_178 = 0;
  iVar2 = FUN_140e851f0(puVar4,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar2 != -2 && iVar2 < 0) {
    local_f8 = 0x15;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    local_1b8 = _DAT_141dd2058;
    uStack_1b4 = uRam0000000141dd205c;
    uStack_1b0 = uRam0000000141dd2060;
    uStack_1ac = DAT_141dd2064;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1b8);
    local_e0 = &local_168;
    if ((int)local_98[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_140383f8e:
      local_1b8 = *(undefined4 *)puVar4;
      uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_1b0 = *(undefined4 *)(puVar4 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1b8);
    }
    else {
      puVar4 = (undefined8 *)*local_90;
      if (puVar4 != &local_158) goto LAB_140383f8e;
    }
    local_d8 = &local_158;
    local_1b8 = _DAT_141dd2048;
    uStack_1b4 = uRam0000000141dd204c;
    uStack_1b0 = uRam0000000141dd2050;
    uStack_1ac = DAT_141dd2054;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1b8);
    local_d0 = local_148;
    FUN_14008e020(local_res8,local_res10,&local_1a8,3,&local_e0);
  }
  local_f8 = 0x13;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((int)local_98[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140384074:
    local_1b8 = *(undefined4 *)puVar4;
    uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1b0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1b8);
  }
  else {
    puVar4 = (undefined8 *)*local_90;
    if (puVar4 != &local_168) goto LAB_140384074;
  }
  local_e0 = &local_168;
  uVar5 = gml_Script_InputPlayerLowestConnectedIndex(local_res8,local_res10,&local_1a8,1,&local_e0);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if ((int)local_98[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_140384127:
      local_1b8 = *(undefined4 *)puVar4;
      uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_1b0 = *(undefined4 *)(puVar4 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1b8);
    }
    else {
      puVar4 = (undefined8 *)*local_90;
      if (puVar4 != &local_158) goto LAB_140384127;
    }
    local_d8 = &local_158;
    local_1b8 = (undefined4)DAT_1419df7b0;
    uStack_1b4 = DAT_1419df7b0._4_4_;
    uStack_1b0 = DAT_1419df7b8;
    uStack_1ac = DAT_1419df7bc;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1b8);
    local_d0 = local_148;
    uVar3 = 2;
    uVar5 = gml_Script_InputPlayerUsingGeneric(local_res8,local_res10,&local_188,2,&local_d8);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 != '\0') {
      local_f8 = 0x15;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      local_f0 = 0;
      local_e8 = 0;
      local_e4 = 5;
      puVar6 = (undefined4 *)(**(code **)(*DAT_141dde8e0 + 8))(DAT_141dde8e0,DAT_1419febe8);
      if (((int)local_98[0] < 1) || (puVar8 = (undefined8 *)*local_90, puVar8 != &local_138)) {
        local_1b8 = *(undefined4 *)puVar8;
        uStack_1b4 = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_1b0 = *(undefined4 *)(puVar8 + 1);
        uStack_1ac = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_1b8);
      }
      local_c8 = &local_138;
      if (puVar6 != local_128) {
        local_1b8 = *puVar6;
        uStack_1b4 = puVar6[1];
        uStack_1b0 = puVar6[2];
        uStack_1ac = puVar6[3];
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_1b8);
      }
      local_c0 = local_128;
      ppuVar11 = &local_c8;
      puVar6 = (undefined4 *)
               gml_Script_InputPlayerGetGamepadType(local_res8,local_res10,&local_f0,1,ppuVar11);
      uVar12 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
      if (puVar6 != local_118) {
        local_1b8 = *puVar6;
        uStack_1b4 = puVar6[1];
        uStack_1b0 = puVar6[2];
        uStack_1ac = puVar6[3];
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_1b8);
      }
      local_b8 = local_118;
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_198,2,CONCAT44(uVar12,DAT_1419ff4f8),
                            &local_c0);
      iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar5);
      if (0 < iVar2) {
        local_f8 = 0x17;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a042c8);
        cVar1 = FUN_140e491e0(uVar5);
        if (cVar1 == '\0') {
          uStack_16c = 0;
          local_178 = 0;
          puVar8 = &local_178;
        }
        else {
          local_res18 = &local_res8;
          puVar8 = (undefined8 *)FUN_140384600(&local_res18,&local_1b8);
          uVar3 = 1;
        }
        uVar12 = uStack_16c;
        local_res20 = uVar3;
        if (puVar8 != param_3) {
          local_88 = *(undefined4 *)puVar8;
          uStack_84 = *(undefined4 *)((longlong)puVar8 + 4);
          uStack_80 = *(undefined4 *)(puVar8 + 1);
          uStack_7c = *(undefined4 *)((longlong)puVar8 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_88);
        }
        if (((uVar3 & 2) != 0) &&
           (uVar3 = uVar3 & 0xfffffffd, local_res20 = uVar3,
           (1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_178);
        }
        if (((uVar3 & 1) != 0) && ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_1b8);
        }
        if (local_68 != 0) {
          FUN_140e4cd60();
        }
        goto LAB_1403844db;
      }
      FUN_140e63970(local_78,&local_res8,&local_res10);
      if (local_68 != 0) {
        FUN_140e4cd60();
      }
    }
  }
  local_f8 = 0x1b;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = 0;
LAB_1403844db:
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,6,FUN_140041b30);
  if (0 < (int)local_98[0]) {
    puVar8 = local_90;
    do {
      puVar4 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_90);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

