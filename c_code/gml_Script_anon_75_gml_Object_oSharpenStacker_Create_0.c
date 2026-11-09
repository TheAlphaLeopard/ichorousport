// gml_Script_anon_75_gml_Object_oSharpenStacker_Create_0 @ 0x140d69c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_75_gml_Object_oSharpenStacker_Create_0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 **ppuVar6;
  undefined4 uVar10;
  undefined8 uVar7;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  ulonglong in_stack_fffffffffffffe10;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_180 = "gml_Object_oSettingsButton_Step_0";
  local_178 = 0;
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_138,0x10,10,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_178 = 4;
  local_1e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1e0 = DAT_1419df7b8;
  uStack_1dc = DAT_1419df7bc;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1e8);
  local_68 = local_138;
  local_1e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1e0 = DAT_1419df7b8;
  uStack_1dc = DAT_1419df7bc;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1e8);
  local_60 = local_128;
  local_1e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1e0 = DAT_1419df7b8;
  uStack_1dc = DAT_1419df7bc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1e8);
  local_1e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1e0 = DAT_1419df7b8;
  uStack_1dc = DAT_1419df7bc;
  local_58 = local_118;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1e8);
  local_50 = local_108;
  uStack_1dc = 6;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_141a0a828,0x80000000,&local_98,(ulonglong)pcVar5 & 0xffffffffffffff00
                ,in_stack_fffffffffffffe10 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  puVar2 = (undefined8 *)gml_Script_InputCursorY(param_1,param_2,&local_78,2,&local_68);
  if (puVar2 != &local_f8) {
    local_1e8 = *puVar2;
    uStack_1e0 = *(undefined4 *)(puVar2 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1e8);
  }
  local_48 = &local_f8;
  ppuVar6 = &local_58;
  puVar2 = (undefined8 *)gml_Script_InputDefineCluster(param_1,param_2,&local_88,2,ppuVar6);
  uVar10 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
  if (puVar2 != &local_e8) {
    local_1e8 = *puVar2;
    uStack_1e0 = *(undefined4 *)(puVar2 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1e8);
  }
  local_40 = &local_e8;
  local_1e8 = local_98;
  uStack_1e0 = uStack_90;
  uStack_1dc = uStack_8c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1e8);
  local_38 = local_d8;
  uVar7 = CONCAT44(uVar10,DAT_141a10408);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_1b8,3,uVar7,&local_48);
  uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_178 = 0x18;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uVar4 = 0;
LAB_140d6a582:
    local_1cc = 0;
    local_1d8 = (ulonglong)uVar4 << 0x20;
    FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_1d8);
  }
  else {
    local_178 = 6;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_1e8 = CONCAT44(uRam00000001419edc24,_DAT_1419edc20);
    uStack_1e0 = uRam00000001419edc28;
    uStack_1dc = uRam00000001419edc2c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1e8);
    local_30 = local_c8;
    ppuVar6 = &local_30;
    ppuVar8 = (undefined1 **)CONCAT44(uVar10,DAT_141a44e08);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_198,1,ppuVar8,ppuVar6);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      local_1e8 = CONCAT44(uRam00000001419edc44,_DAT_1419edc40);
      uStack_1e0 = uRam00000001419edc48;
      uStack_1dc = uRam00000001419edc4c;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_1e8);
      local_28 = local_b8;
      local_1e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_1e0 = DAT_1419df7b8;
      uStack_1dc = DAT_1419df7bc;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_1e8);
      local_20 = local_a8;
      ppuVar8 = &local_28;
      uVar3 = gml_Script_InputPressedMany(param_1,param_2,&local_1a8,2,ppuVar8);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 == '\0') {
        local_178 = 0x11;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        uVar4 = 0x3ff00000;
        goto LAB_140d6a582;
      }
    }
    local_178 = 8;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1cc = 0;
    local_1d8 = 0x4000000000000000;
    FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_1d8);
    local_178 = 9;
    local_1e8 = 0x3ff0000000000000;
    uStack_1dc = 0xd;
    local_1c8 = 0;
    uStack_1c4 = 0x3ff00000;
    uStack_1c0 = uStack_1e0;
    uStack_1bc = 0xd;
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    FUN_140041b80(&local_160,&local_1c8);
    uStack_1dc = 0xf;
    local_1e8 = 0x1000000000000c9;
    FUN_140e87930(&local_1e8,DAT_1419f40f8,0x80000000,&local_160);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_178 = 10;
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    local_164 = 0;
    local_170 = 0x403e000000000000;
    uStack_1dc = 0xf;
    local_1e8 = 0x1000000000000c9;
    FUN_140e86c30(&local_1e8,DAT_141a0a7e8,0,&local_170);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_178 = 0xb;
    uStack_1dc = 0xf;
    local_1e8 = 0x100000000000058;
    uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_141a15b68,0x80000000,&local_150,uVar9,
                  (ulonglong)ppuVar6 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140162d40(&local_150,0xc0);
    uStack_1dc = 0xf;
    local_1e8 = 0x100000000000058;
    FUN_140e87930(&local_1e8,DAT_141a15b68,0x80000000,&local_150);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_178 = 0xc;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uStack_1dc = 0xf;
    local_1e8 = 0x10000020000010b;
    local_1c8 = 0x10b;
    uStack_1c4 = 0x1000002;
    uStack_1c0 = uStack_1e0;
    uStack_1bc = 0xf;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1c8);
    local_68 = local_138;
    local_1c8 = _DAT_1419edc10;
    uStack_1c4 = uRam00000001419edc14;
    uStack_1c0 = uRam00000001419edc18;
    uStack_1bc = uRam00000001419edc1c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1c8);
    local_60 = local_128;
    local_1c8 = _DAT_1419df7a0;
    uStack_1c4 = uRam00000001419df7a4;
    uStack_1c0 = uRam00000001419df7a8;
    uStack_1bc = uRam00000001419df7ac;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1c8);
    local_1c8 = (undefined4)DAT_1419df7b0;
    uStack_1c4 = DAT_1419df7b0._4_4_;
    uStack_1c0 = DAT_1419df7b8;
    uStack_1bc = DAT_1419df7bc;
    local_58 = local_118;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1c8);
    local_50 = local_108;
    local_1c8 = (undefined4)DAT_1419df7b0;
    uStack_1c4 = DAT_1419df7b0._4_4_;
    uStack_1c0 = DAT_1419df7b8;
    uStack_1bc = DAT_1419df7bc;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1c8);
    local_48 = &local_f8;
    local_1c8 = _DAT_1419edc30;
    uStack_1c4 = uRam00000001419edc34;
    uStack_1c0 = uRam00000001419edc38;
    uStack_1bc = uRam00000001419edc3c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1c8);
    local_40 = &local_e8;
    FUN_140e634e0(param_1,param_2,&local_1b8,6,CONCAT44(uVar10,DAT_141a0a2e8),&local_68);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return;
}

