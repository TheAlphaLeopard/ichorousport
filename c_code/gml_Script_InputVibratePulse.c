// gml_Script_InputVibratePulse @ 0x140385240

undefined8 *
gml_Script_InputVibratePulse
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong uVar8;
  undefined4 uVar10;
  undefined8 **ppuVar9;
  ulonglong in_stack_fffffffffffffe80;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  uint local_68 [2];
  undefined8 *local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_120 = "gml_Script_InputVibrateGetSupported";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 8;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_68,param_4,1,param_5);
  _eh_vector_constructor_iterator_(&local_f8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_16c = 0;
  local_178 = 0;
  local_12c = 0;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde900) &&
     (_Init_thread_header(&DAT_141dde900), DAT_141dde900 == -1)) {
    DAT_141dde908 = (longlong *)FUN_140e63aa0(DAT_1419f4308);
    _Init_thread_footer(&DAT_141dde900);
  }
  local_118 = 8;
  puVar7 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_60;
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_118 = 8;
    if ((int)local_68[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  if (DAT_141ddc15a == '\0') {
    FUN_140e64380(DAT_141dde908,"gml_Script_InputVibrateGetSupported");
    FUN_140e64380(local_res8,"gml_Script_InputVibrateGetSupported");
  }
  local_118 = 10;
  if (DAT_141ddc15a == '\0') {
    DAT_141ddc15a = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141dde908 + 0x10))(DAT_141dde908,DAT_1419febe8);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uVar8 = 0;
    uVar4 = FUN_1400ebd30(local_res8,local_res10,&local_178,0,0);
    FUN_140e87440(uVar4,DAT_1419febc8,0x80000000,&local_108,uVar8 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe80 & 0xffffffffffffff00);
    FUN_140e609c0(DAT_141dde908);
    if (&local_108 != puVar3) {
      local_168 = (undefined4)local_108;
      uStack_164 = local_108._4_4_;
      uStack_160 = uStack_100;
      uStack_15c = uStack_fc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_168);
    }
    FUN_140e60910(1);
  }
  local_118 = 0xc;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_140385541:
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
  }
  else {
    puVar3 = (undefined8 *)*local_60;
    if (puVar3 != &local_f8) goto LAB_140385541;
  }
  local_98 = &local_f8;
  uVar4 = gml_Script_InputPlayerLowestConnectedIndex(local_res8,local_res10,&local_178,1,&local_98);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if ((int)local_68[0] < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_1403855f3:
      local_168 = *(undefined4 *)puVar3;
      uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_160 = *(undefined4 *)(puVar3 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_168);
    }
    else {
      puVar3 = (undefined8 *)*local_60;
      if (puVar3 != &local_e8) goto LAB_1403855f3;
    }
    local_90 = &local_e8;
    local_168 = (undefined4)DAT_1419df7b0;
    uStack_164 = DAT_1419df7b0._4_4_;
    uStack_160 = DAT_1419df7b8;
    uStack_15c = DAT_1419df7bc;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_168);
    local_88 = local_d8;
    uVar4 = gml_Script_InputPlayerUsingGeneric(local_res8,local_res10,&local_138,2,&local_90);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_118 = 0xe;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      puVar5 = (undefined4 *)(**(code **)(*DAT_141dde908 + 8))(DAT_141dde908,DAT_1419febe8);
      if (((int)local_68[0] < 1) || (puVar7 = (undefined8 *)*local_60, puVar7 != &local_c8)) {
        local_168 = *(undefined4 *)puVar7;
        uStack_164 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_160 = *(undefined4 *)(puVar7 + 1);
        uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_168);
      }
      local_80 = &local_c8;
      if (puVar5 != local_b8) {
        local_168 = *puVar5;
        uStack_164 = puVar5[1];
        uStack_160 = puVar5[2];
        uStack_15c = puVar5[3];
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_168);
      }
      local_78 = local_b8;
      ppuVar9 = &local_80;
      puVar5 = (undefined4 *)
               gml_Script_InputPlayerGetGamepadType(local_res8,local_res10,&local_158,1,ppuVar9);
      uVar10 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
      if (puVar5 != local_a8) {
        local_168 = *puVar5;
        uStack_164 = puVar5[1];
        uStack_160 = puVar5[2];
        uStack_15c = puVar5[3];
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_168);
      }
      local_70 = local_a8;
      uVar4 = FUN_140e634e0(local_res8,local_res10,&local_148,2,CONCAT44(uVar10,DAT_1419ff4f8),
                            &local_78);
      iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,uVar4);
      if (0 < iVar2) {
        local_118 = 0x10;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a042c8);
        if (puVar7 != param_3) {
          local_168 = *(undefined4 *)puVar7;
          uStack_164 = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_160 = *(undefined4 *)(puVar7 + 1);
          uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_168);
        }
        if (local_48 != 0) {
          FUN_140e4cd60();
        }
        goto LAB_1403858f0;
      }
      FUN_140e63970(local_58,&local_res8,&local_res10);
      if (local_48 != 0) {
        FUN_140e4cd60();
      }
    }
  }
  local_118 = 0x14;
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = 0;
LAB_1403858f0:
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,6,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar7 = local_60;
    do {
      puVar3 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

