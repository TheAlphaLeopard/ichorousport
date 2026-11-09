// gml_Script___InputColorClassPlayer @ 0x14006a430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputColorClassPlayer
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 **ppuVar8;
  undefined4 uVar9;
  ulonglong in_stack_fffffffffffffed0;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  byte local_74;
  undefined8 local_70;
  byte local_64;
  uint local_50 [2];
  undefined8 *local_48;
  
  local_f0 = "gml_Script___SetColor@anon@212@__InputColorClassPlayer@__InputColorClassPlayer";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0xb;
  FUN_140041df0(local_50,param_4,1,param_5);
  _eh_vector_constructor_iterator_(&local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_11c = 0;
  local_128 = 0;
  local_d4 = 0;
  local_e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc530) {
    _Init_thread_header(&DAT_141ddc530);
    if (DAT_141ddc530 == -1) {
      DAT_141ddc518 = (longlong *)FUN_140e63aa0(DAT_1419fec08);
      _Init_thread_footer(&DAT_141ddc530);
    }
  }
  if (DAT_141ddc037 == '\0') {
    FUN_140e64380(DAT_141ddc518,
                  "gml_Script___SetColor@anon@212@__InputColorClassPlayer@__InputColorClassPlayer");
    FUN_140e64380(param_1,
                  "gml_Script___SetColor@anon@212@__InputColorClassPlayer@__InputColorClassPlayer");
  }
  local_e8 = 0xd;
  if (DAT_141ddc037 == '\0') {
    DAT_141ddc037 = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc518 + 0x10))(DAT_141ddc518,DAT_1419febe8);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar7 = 0;
    uVar4 = FUN_1400ebd30(param_1,param_2,&local_128,0,0);
    FUN_140e87440(uVar4,DAT_1419febc8,0x80000000,&local_a8,uVar7 & 0xffffffffffffff00,
                  in_stack_fffffffffffffed0 & 0xffffffffffffff00);
    FUN_140e609c0(DAT_141ddc518);
    if (&local_a8 != puVar3) {
      local_118 = (undefined4)local_a8;
      uStack_114 = local_a8._4_4_;
      uStack_110 = uStack_a0;
      uStack_10c = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_118);
    }
    FUN_140e60910(1);
  }
  local_e8 = 0xf;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fec28);
  FUN_140e609c0(param_1);
  puVar3 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_50[0];
  if ((int)local_50[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_48;
  }
  if (puVar6 != puVar5) {
    local_118 = *(undefined4 *)puVar6;
    uStack_114 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_110 = *(undefined4 *)(puVar6 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_118);
  }
  FUN_140e60910(1);
  local_e8 = 0x11;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd7f8);
  if (puVar5 != &local_80) {
    local_118 = *(undefined4 *)puVar5;
    uStack_114 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_110 = *(undefined4 *)(puVar5 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_118);
  }
  local_98 = &local_80;
  puVar5 = (undefined8 *)
           gml_Script_InputPlayerGetGamepadType(param_1,param_2,&local_128,1,&local_98);
  if (puVar5 != &local_c0) {
    local_118 = *(undefined4 *)puVar5;
    uStack_114 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_110 = *(undefined4 *)(puVar5 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_118);
  }
  local_e8 = 0x13;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_118 = _DAT_1419df900;
  uStack_114 = uRam00000001419df904;
  uStack_110 = uRam00000001419df908;
  uStack_10c = uRam00000001419df90c;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  FUN_140041b80(&local_80,&local_118);
  local_98 = &local_80;
  uVar4 = gml_Script_InputIconDefineEmpty(param_1,param_2,&local_128,1,&local_98);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_e8 = 0x22;
  }
  else {
    local_e8 = 0x15;
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 5;
    local_90 = &local_c0;
    ppuVar8 = &local_90;
    puVar5 = (undefined8 *)gml_Script_InputDeviceIsActive(param_1,param_2,&local_e0,1,ppuVar8);
    uVar9 = (undefined4)((ulonglong)ppuVar8 >> 0x20);
    if (puVar5 != &local_d0) {
      local_118 = *(undefined4 *)puVar5;
      uStack_114 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_110 = *(undefined4 *)(puVar5 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      FUN_140041b80(&local_d0,&local_118);
    }
    local_e8 = 0x16;
    iVar2 = FUN_140e851f0(&local_d0,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar2 != 0) {
      local_e8 = 0x18;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_fc = 0;
      local_108 = 0;
      local_e8 = 0x19;
      if ((int)local_50[0] < 1) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)*local_48;
      }
      iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar2 == 0) {
        local_e8 = 0x1b;
        if ((int)local_50[0] < 1) {
          puVar5 = &DAT_1419df7b0;
        }
        else {
          puVar5 = (undefined8 *)*local_48;
        }
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_e8 = 0x1c;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_fc = 0;
        local_108 = 0x3ff0000000000000;
      }
      local_e8 = 0x1f;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      local_98 = &local_d0;
      if (((int)local_50[0] < 1) || (puVar3 = (undefined8 *)*local_48, puVar3 != &local_70)) {
        local_118 = *(undefined4 *)puVar3;
        uStack_114 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_110 = *(undefined4 *)(puVar3 + 1);
        uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_70);
        }
        FUN_140041b80(&local_70,&local_118);
      }
      local_90 = &local_70;
      local_88 = &local_108;
      FUN_140e634e0(param_1,param_2,&local_128,3,CONCAT44(uVar9,DAT_1419febf8),&local_98);
    }
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_80,0x10,3,FUN_140041b30);
  if (0 < (int)local_50[0]) {
    puVar3 = local_48;
    do {
      puVar5 = (undefined8 *)*puVar3;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar3 = puVar3 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_48);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

