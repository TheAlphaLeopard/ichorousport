// gml_GlobalScript_InputVibrateConstant @ 0x14037ef40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_InputVibrateConstant
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint *puVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong uVar14;
  uint **ppuVar15;
  ulonglong in_stack_fffffffffffffdd0;
  uint local_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  ulonglong local_208;
  uint uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  uint local_1c8 [4];
  uint local_1b8 [4];
  uint local_1a8 [4];
  uint local_198 [4];
  uint local_188 [4];
  uint local_178 [4];
  uint local_168 [4];
  uint local_158 [4];
  uint local_148 [4];
  uint local_138 [4];
  uint local_128 [4];
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  uint *local_108;
  uint *local_100;
  uint *local_f8;
  uint *local_f0;
  uint *local_e8;
  uint *local_e0;
  uint *local_d8;
  uint *local_d0;
  uint *local_c8;
  uint *local_c0;
  uint *local_b8;
  undefined8 local_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98 [2];
  undefined8 *local_90;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_1e0 = "gml_Script_InputVibrateADSR";
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 0x11;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_98,param_4,9,param_5);
  uVar13 = 1;
  _eh_vector_constructor_iterator_(local_1c8,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_20c = 0;
  local_218 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde8a0) &&
     (_Init_thread_header(&DAT_141dde8a0), DAT_141dde8a0 == -1)) {
    DAT_141dde8a8 = (longlong *)FUN_140e63aa0(DAT_1419f4128);
    _Init_thread_footer(&DAT_141dde8a0);
  }
  local_1d8 = 0x11;
  uVar12 = (ulonglong)local_98[0];
  if ((int)local_98[0] < 8) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[7];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_1d8 = 0x11;
    if ((int)local_98[0] < 8) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_90[7];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if ((int)local_98[0] < 9) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[8];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    uStack_1fc = 0xd;
    local_208 = 0;
    if ((int)local_98[0] < 9) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (ulonglong *)local_90[8];
      if (&local_208 == puVar11) goto LAB_14037f16d;
    }
    local_228 = 0;
    uStack_224 = 0;
    uStack_220 = uStack_200;
    uStack_21c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_228);
  }
LAB_14037f16d:
  if (DAT_141ddc153 == '\0') {
    FUN_140e64380(DAT_141dde8a8,"gml_Script_InputVibrateADSR");
    FUN_140e64380(local_res8,"gml_Script_InputVibrateADSR");
  }
  local_1d8 = 0x13;
  if (DAT_141ddc153 == '\0') {
    DAT_141ddc153 = '\x01';
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde8a8 + 0x10))(DAT_141dde8a8,DAT_141a026b8);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    uVar14 = 0;
    uVar7 = FUN_1400ebd30(local_res8,local_res10,&local_218,0,0);
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_1419fed38,0x80000000,&local_a8,uVar14,
                  in_stack_fffffffffffffdd0 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar14 >> 0x20);
    FUN_140e609c0(DAT_141dde8a8);
    if (&local_a8 != puVar6) {
      local_228 = (uint)local_a8;
      uStack_224 = local_a8._4_4_;
      uStack_220 = uStack_a0;
      uStack_21c = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_228);
    }
    FUN_140e60910(1);
  }
  local_1d8 = 4;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  if ((int)local_98[0] < 8) {
    puVar8 = (uint *)&DAT_1419df7b0;
LAB_14037f2e6:
    local_228 = *puVar8;
    uStack_224 = puVar8[1];
    uStack_220 = puVar8[2];
    uStack_21c = puVar8[3];
    if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_228);
  }
  else {
    puVar8 = (uint *)local_90[7];
    if (puVar8 != local_1c8) goto LAB_14037f2e6;
  }
  local_108 = local_1c8;
  ppuVar15 = (uint **)CONCAT44(uVar13,DAT_141a014a8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_218,1,ppuVar15,&local_108);
  cVar3 = FUN_140e491e0(uVar7);
  uVar13 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
  if (cVar3 == '\0') {
    local_1d8 = 5;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    if ((int)local_98[0] < 8) {
      puVar8 = (uint *)&DAT_1419df7b0;
LAB_14037f3d4:
      local_228 = *puVar8;
      uStack_224 = puVar8[1];
      uStack_220 = puVar8[2];
      uStack_21c = puVar8[3];
      if ((1 << ((byte)local_1b8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_228);
    }
    else {
      puVar8 = (uint *)local_90[7];
      if (puVar8 != local_1b8) goto LAB_14037f3d4;
    }
    local_100 = local_1b8;
    local_228 = _DAT_141dd1ee8;
    uStack_224 = uRam0000000141dd1eec;
    uStack_220 = uRam0000000141dd1ef0;
    uStack_21c = DAT_141dd1ef4;
    if ((1 << ((byte)local_1a8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_228);
    local_f8 = local_1a8;
    puVar8 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_118,1,
                                   CONCAT44(uVar13,DAT_1419fdc58),&local_100);
    if (puVar8 != local_198) {
      local_228 = *puVar8;
      uStack_224 = puVar8[1];
      uStack_220 = puVar8[2];
      uStack_21c = puVar8[3];
      if ((1 << ((byte)local_198[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_228);
    }
    local_f0 = local_198;
    local_228 = _DAT_141dd1f28;
    uStack_224 = uRam0000000141dd1f2c;
    uStack_220 = uRam0000000141dd1f30;
    uStack_21c = DAT_141dd1f34;
    if ((1 << ((byte)local_188[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_228);
    local_e8 = local_188;
    ppuVar15 = &local_f8;
    FUN_14008e020(local_res8,local_res10,&local_1f8,3,ppuVar15);
  }
  local_1d8 = 0xb;
  if ((int)local_98[0] < 8) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[7];
  }
  uStack_1fc = 0;
  local_208 = 0x3ff0000000000000;
  uVar5 = FUN_140e851f0(puVar6,&local_208,DAT_141955260,1);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if (uVar5 < 0x80000000) {
    local_1d8 = 0xf;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    local_228 = _DAT_141dd1f18;
    uStack_224 = uRam0000000141dd1f1c;
    uStack_220 = uRam0000000141dd1f20;
    uStack_21c = DAT_141dd1f24;
    if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_228);
    local_108 = local_1c8;
    if ((int)local_98[0] < 8) {
      puVar8 = (uint *)&DAT_1419df7b0;
LAB_14037f614:
      local_228 = *puVar8;
      uStack_224 = puVar8[1];
      uStack_220 = puVar8[2];
      uStack_21c = puVar8[3];
      if ((1 << ((byte)local_1b8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_228);
    }
    else {
      puVar8 = (uint *)local_90[7];
      if (puVar8 != local_1b8) goto LAB_14037f614;
    }
    local_100 = local_1b8;
    local_228 = _DAT_141dd1ef8;
    uStack_224 = uRam0000000141dd1efc;
    uStack_220 = uRam0000000141dd1f00;
    uStack_21c = DAT_141dd1f04;
    if ((1 << ((byte)local_1a8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_228);
    local_f8 = local_1a8;
    local_228 = _DAT_1419e45d0;
    uStack_224 = uRam00000001419e45d4;
    uStack_220 = uRam00000001419e45d8;
    uStack_21c = uRam00000001419e45dc;
    if ((1 << ((byte)local_198[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_228);
    local_f0 = local_198;
    local_228 = _DAT_141dd1f08;
    uStack_224 = uRam0000000141dd1f0c;
    uStack_220 = uRam0000000141dd1f10;
    uStack_21c = DAT_141dd1f14;
    if ((1 << ((byte)local_188[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_228);
    local_e8 = local_188;
    ppuVar15 = &local_108;
    FUN_14008e020(local_res8,local_res10,&local_218,5,ppuVar15);
  }
  local_1d8 = 0x13;
  if ((int)local_98[0] < 8) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[7];
  }
  uStack_1fc = 0;
  local_208 = 0;
  iVar4 = FUN_140e851f0(puVar6,&local_208,DAT_141955260,1);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if (iVar4 != -2 && iVar4 < 0) {
    local_1d8 = 0x18;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    local_228 = _DAT_141dd1f18;
    uStack_224 = uRam0000000141dd1f1c;
    uStack_220 = uRam0000000141dd1f20;
    uStack_21c = DAT_141dd1f24;
    if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_228);
    local_108 = local_1c8;
    if ((int)local_98[0] < 8) {
      puVar8 = (uint *)&DAT_1419df7b0;
LAB_14037f818:
      local_228 = *puVar8;
      uStack_224 = puVar8[1];
      uStack_220 = puVar8[2];
      uStack_21c = puVar8[3];
      if ((1 << ((byte)local_1b8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_228);
    }
    else {
      puVar8 = (uint *)local_90[7];
      if (puVar8 != local_1b8) goto LAB_14037f818;
    }
    local_100 = local_1b8;
    local_228 = _DAT_141dd1f38;
    uStack_224 = uRam0000000141dd1f3c;
    uStack_220 = uRam0000000141dd1f40;
    uStack_21c = DAT_141dd1f44;
    if ((1 << ((byte)local_1a8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_228);
    local_f8 = local_1a8;
    ppuVar15 = &local_108;
    FUN_14008e020(local_res8,local_res10,&local_218,3,ppuVar15);
  }
  local_1d8 = 0x17;
  if ((int)local_98[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_90;
  }
  if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*puVar6;
  }
  else {
    uVar13 = FUN_140e4b060();
  }
  if ((int)local_98[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_90;
  }
  uVar7 = FUN_140e78ec0(uVar13,0,0x3ff0000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = uVar7;
  local_1d8 = 0x18;
  if ((int)local_98[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[1];
  }
  if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*puVar6;
  }
  else {
    uVar13 = FUN_140e4b060();
  }
  if ((int)local_98[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[1];
  }
  uVar7 = FUN_140e78ec0(uVar13,0,0x3ff0000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = uVar7;
  local_1d8 = 0x19;
  if ((int)local_98[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[2];
  }
  if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*puVar6;
  }
  else {
    uVar13 = FUN_140e4b060();
  }
  if ((int)local_98[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[2];
  }
  uVar7 = FUN_140e78ec0(uVar13,&DAT_bff0000000000000,0x3ff0000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = uVar7;
  local_1d8 = 0x1a;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  if ((int)local_98[0] < 4) {
    puVar8 = (uint *)&DAT_1419df7b0;
LAB_14037fa32:
    local_228 = *puVar8;
    uStack_224 = puVar8[1];
    uStack_220 = puVar8[2];
    uStack_21c = puVar8[3];
    if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_228);
  }
  else {
    puVar8 = (uint *)local_90[3];
    if (puVar8 != local_1c8) goto LAB_14037fa32;
  }
  local_108 = local_1c8;
  local_228 = _DAT_141dc64c0;
  uStack_224 = uRam0000000141dc64c4;
  uStack_220 = uRam0000000141dc64c8;
  uStack_21c = uRam0000000141dc64cc;
  if ((1 << ((byte)local_1b8[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_228);
  local_100 = local_1b8;
  if ((int)local_98[0] < 4) {
    puVar8 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar8 = (uint *)local_90[3];
  }
  puVar9 = (uint *)FUN_140e79090(&local_218,2,&local_108);
  if (puVar9 != puVar8) {
    local_228 = *puVar9;
    uStack_224 = puVar9[1];
    uStack_220 = puVar9[2];
    uStack_21c = puVar9[3];
    if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_228);
  }
  local_1d8 = 0x1b;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  if ((int)local_98[0] < 5) {
    puVar8 = (uint *)&DAT_1419df7b0;
LAB_14037fb46:
    local_228 = *puVar8;
    uStack_224 = puVar8[1];
    uStack_220 = puVar8[2];
    uStack_21c = puVar8[3];
    if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_228);
  }
  else {
    puVar8 = (uint *)local_90[4];
    if (puVar8 != local_1c8) goto LAB_14037fb46;
  }
  local_108 = local_1c8;
  local_228 = _DAT_141dc64c0;
  uStack_224 = uRam0000000141dc64c4;
  uStack_220 = uRam0000000141dc64c8;
  uStack_21c = uRam0000000141dc64cc;
  if ((1 << ((byte)local_1b8[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_228);
  local_100 = local_1b8;
  if ((int)local_98[0] < 5) {
    puVar8 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar8 = (uint *)local_90[4];
  }
  puVar9 = (uint *)FUN_140e79090(&local_218,2,&local_108);
  if (puVar9 != puVar8) {
    local_228 = *puVar9;
    uStack_224 = puVar9[1];
    uStack_220 = puVar9[2];
    uStack_21c = puVar9[3];
    if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_228);
  }
  local_1d8 = 0x1c;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  if ((int)local_98[0] < 6) {
    puVar8 = (uint *)&DAT_1419df7b0;
LAB_14037fc5a:
    local_228 = *puVar8;
    uStack_224 = puVar8[1];
    uStack_220 = puVar8[2];
    uStack_21c = puVar8[3];
    if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_228);
  }
  else {
    puVar8 = (uint *)local_90[5];
    if (puVar8 != local_1c8) goto LAB_14037fc5a;
  }
  local_108 = local_1c8;
  local_228 = _DAT_141dc64c0;
  uStack_224 = uRam0000000141dc64c4;
  uStack_220 = uRam0000000141dc64c8;
  uStack_21c = uRam0000000141dc64cc;
  if ((1 << ((byte)local_1b8[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_228);
  local_100 = local_1b8;
  if ((int)local_98[0] < 6) {
    puVar8 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar8 = (uint *)local_90[5];
  }
  puVar9 = (uint *)FUN_140e79090(&local_218,2,&local_108);
  if (puVar9 != puVar8) {
    local_228 = *puVar9;
    uStack_224 = puVar9[1];
    uStack_220 = puVar9[2];
    uStack_21c = puVar9[3];
    if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_228);
  }
  local_1d8 = 0x1d;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  if ((int)local_98[0] < 7) {
    puVar8 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar8 = (uint *)local_90[6];
    if (puVar8 == local_1c8) goto LAB_14037fd9e;
  }
  local_228 = *puVar8;
  uStack_224 = puVar8[1];
  uStack_220 = puVar8[2];
  uStack_21c = puVar8[3];
  if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_228);
LAB_14037fd9e:
  local_108 = local_1c8;
  local_228 = _DAT_141dc64c0;
  uStack_224 = uRam0000000141dc64c4;
  uStack_220 = uRam0000000141dc64c8;
  uStack_21c = uRam0000000141dc64cc;
  if ((1 << ((byte)local_1b8[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_228);
  local_100 = local_1b8;
  if ((int)local_98[0] < 7) {
    puVar8 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar8 = (uint *)local_90[6];
  }
  puVar9 = (uint *)FUN_140e79090(&local_218,2,&local_108);
  if (puVar9 != puVar8) {
    local_228 = *puVar9;
    uStack_224 = puVar9[1];
    uStack_220 = puVar9[2];
    uStack_21c = puVar9[3];
    if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_228);
  }
  local_1d8 = 0x1f;
  plVar10 = (longlong *)(**(code **)(*DAT_141dde8a8 + 8))(DAT_141dde8a8,DAT_141a026b8);
  if ((int)local_98[0] < 8) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[7];
  }
  iVar4 = FUN_140e4a740(puVar6);
  if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar4 = FUN_140e63cb0(local_88,&local_res8,&local_res10,plVar10);
  if (0 < iVar4) {
    do {
      local_1d8 = 0x21;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03d88);
      cVar3 = FUN_140e491e0(uVar7);
      uVar13 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
      if (cVar3 == '\0') {
LAB_14037ff21:
        local_1d8 = 0x23;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_218 = 0;
        local_210 = 0;
        local_20c = 5;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        puVar8 = (uint *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04338);
        local_228 = DAT_141a040f8 & 0xffffff;
        uStack_224 = (int)(DAT_141a040f8 | 0x5000000) >> 0x18 & 0xff;
        if (uStack_224 == 0xf) {
          uStack_224 = 0x4000004;
        }
        else {
          uStack_224 = uStack_224 | 0x1000000;
        }
        uStack_1fc = 0xf;
        local_208 = CONCAT44(uStack_224,DAT_141a040f8) & 0xffffffff00ffffff;
        uStack_220 = uStack_200;
        uStack_21c = 0xf;
        if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_228);
        local_108 = local_1c8;
        if ((int)local_98[0] < 1) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_140380030:
          local_228 = *puVar9;
          uStack_224 = puVar9[1];
          uStack_220 = puVar9[2];
          uStack_21c = puVar9[3];
          if ((1 << ((byte)local_1b8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_228);
        }
        else {
          puVar9 = (uint *)*local_90;
          if (puVar9 != local_1b8) goto LAB_140380030;
        }
        local_100 = local_1b8;
        if ((int)local_98[0] < 2) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_14038007f:
          local_228 = *puVar9;
          uStack_224 = puVar9[1];
          uStack_220 = puVar9[2];
          uStack_21c = puVar9[3];
          if ((1 << ((byte)local_1a8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1a8);
          }
          FUN_140041b80(local_1a8,&local_228);
        }
        else {
          puVar9 = (uint *)local_90[1];
          if (puVar9 != local_1a8) goto LAB_14038007f;
        }
        local_f8 = local_1a8;
        if ((int)local_98[0] < 3) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_1403800ce:
          local_228 = *puVar9;
          uStack_224 = puVar9[1];
          uStack_220 = puVar9[2];
          uStack_21c = puVar9[3];
          if ((1 << ((byte)local_198[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_198);
          }
          FUN_140041b80(local_198,&local_228);
        }
        else {
          puVar9 = (uint *)local_90[2];
          if (puVar9 != local_198) goto LAB_1403800ce;
        }
        local_f0 = local_198;
        if ((int)local_98[0] < 4) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_14038011d:
          local_228 = *puVar9;
          uStack_224 = puVar9[1];
          uStack_220 = puVar9[2];
          uStack_21c = puVar9[3];
          if ((1 << ((byte)local_188[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_188);
          }
          FUN_140041b80(local_188,&local_228);
        }
        else {
          puVar9 = (uint *)local_90[3];
          if (puVar9 != local_188) goto LAB_14038011d;
        }
        local_e8 = local_188;
        if ((int)local_98[0] < 5) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_14038016c:
          local_228 = *puVar9;
          uStack_224 = puVar9[1];
          uStack_220 = puVar9[2];
          uStack_21c = puVar9[3];
          if ((1 << ((byte)local_178[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_228);
        }
        else {
          puVar9 = (uint *)local_90[4];
          if (puVar9 != local_178) goto LAB_14038016c;
        }
        local_e0 = local_178;
        if ((int)local_98[0] < 6) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_1403801bb:
          local_228 = *puVar9;
          uStack_224 = puVar9[1];
          uStack_220 = puVar9[2];
          uStack_21c = puVar9[3];
          if ((1 << ((byte)local_168[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_228);
        }
        else {
          puVar9 = (uint *)local_90[5];
          if (puVar9 != local_168) goto LAB_1403801bb;
        }
        local_d8 = local_168;
        if ((int)local_98[0] < 7) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_14038020d:
          local_228 = *puVar9;
          uStack_224 = puVar9[1];
          uStack_220 = puVar9[2];
          uStack_21c = puVar9[3];
          if ((1 << ((byte)local_158[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_158);
          }
          FUN_140041b80(local_158,&local_228);
        }
        else {
          puVar9 = (uint *)local_90[6];
          if (puVar9 != local_158) goto LAB_14038020d;
        }
        local_d0 = local_158;
        if ((int)local_98[0] < 9) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_14038025f:
          local_228 = *puVar9;
          uStack_224 = puVar9[1];
          uStack_220 = puVar9[2];
          uStack_21c = puVar9[3];
          if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_148);
          }
          FUN_140041b80(local_148,&local_228);
        }
        else {
          puVar9 = (uint *)local_90[8];
          if (puVar9 != local_148) goto LAB_14038025f;
        }
        local_c8 = local_148;
        if (puVar8 != local_138) {
          local_228 = *puVar8;
          uStack_224 = puVar8[1];
          uStack_220 = puVar8[2];
          uStack_21c = puVar8[3];
          if ((1 << ((byte)local_138[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_228);
        }
        local_c0 = local_138;
        uVar7 = CONCAT44(uVar13,DAT_1419fd6d8);
        puVar8 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_1f8,9,uVar7,&local_108);
        uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if (puVar8 != local_128) {
          local_228 = *puVar8;
          uStack_224 = puVar8[1];
          uStack_220 = puVar8[2];
          uStack_21c = puVar8[3];
          if ((1 << ((byte)local_128[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_128);
          }
          FUN_140041b80(local_128,&local_228);
        }
        local_b8 = local_128;
        ppuVar15 = (uint **)CONCAT44(uVar13,DAT_1419fe568);
        FUN_140e634e0(local_res8,local_res10,&local_218,2,ppuVar15,&local_c0);
      }
      else {
        if ((int)local_98[0] < 9) {
          puVar6 = &DAT_1419df7b0;
        }
        else {
          puVar6 = (undefined8 *)local_90[8];
        }
        cVar3 = FUN_140e491e0(puVar6);
        uVar13 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
        if (cVar3 != '\0') goto LAB_14037ff21;
      }
      cVar3 = FUN_140e643f0(local_88,&local_res8,&local_res10);
    } while (cVar3 != '\0');
  }
  FUN_140e63970(local_88,&local_res8,&local_res10);
  if (local_78 != 0) {
    FUN_140e4cd60();
    local_78 = 0;
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_1c8,0x10,0xb,FUN_140041b30);
  if (0 < (int)local_98[0]) {
    puVar6 = local_90;
    do {
      puVar2 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_90);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return param_3;
}

