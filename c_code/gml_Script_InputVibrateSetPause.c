// gml_Script_InputVibrateSetPause @ 0x140385b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputVibrateSetPause
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
  ulonglong in_stack_fffffffffffffe30;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  ulonglong local_1a8;
  uint uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  uint local_188 [4];
  uint local_178 [4];
  uint local_168 [4];
  uint local_158 [4];
  uint local_148 [4];
  uint local_138 [4];
  uint local_128 [4];
  uint local_118 [4];
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  uint *local_d8;
  uint *local_d0;
  uint *local_c8;
  uint *local_c0;
  uint *local_b8;
  uint *local_b0;
  uint *local_a8;
  uint *local_a0;
  undefined8 local_98;
  uint uStack_90;
  uint uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_100 = "gml_Script_InputVibratePulse";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0xe;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_88,param_4,6,param_5);
  uVar13 = 1;
  _eh_vector_constructor_iterator_(local_188,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_18c = 0;
  local_198 = 0;
  local_e4 = 0;
  local_f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde910) &&
     (_Init_thread_header(&DAT_141dde910), DAT_141dde910 == -1)) {
    DAT_141dde918 = (longlong *)FUN_140e63aa0(DAT_1419f4328);
    _Init_thread_footer(&DAT_141dde910);
  }
  local_f8 = 0xe;
  uVar12 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 5) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[4];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_f8 = 0xe;
    if ((int)local_88[0] < 5) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_80[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if ((int)local_88[0] < 6) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[5];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    uStack_19c = 0xd;
    local_1a8 = 0;
    if ((int)local_88[0] < 6) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (ulonglong *)local_80[5];
      if (&local_1a8 == puVar11) goto LAB_140385d22;
    }
    local_1c8 = 0;
    uStack_1c4 = 0;
    uStack_1c0 = uStack_1a0;
    uStack_1bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_1c8);
  }
LAB_140385d22:
  if (DAT_141ddc15b == '\0') {
    FUN_140e64380(DAT_141dde918,"gml_Script_InputVibratePulse");
    FUN_140e64380(local_res8,"gml_Script_InputVibratePulse");
  }
  local_f8 = 0x10;
  if (DAT_141ddc15b == '\0') {
    DAT_141ddc15b = '\x01';
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde918 + 0x10))(DAT_141dde918,DAT_141a026b8);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uVar14 = 0;
    uVar7 = FUN_1400ebd30(local_res8,local_res10,&local_1b8,0,0);
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_1419fed38,0x80000000,&local_98,uVar14,
                  in_stack_fffffffffffffe30 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar14 >> 0x20);
    FUN_140e609c0(DAT_141dde918);
    if (&local_98 != puVar6) {
      local_1c8 = (uint)local_98;
      uStack_1c4 = local_98._4_4_;
      uStack_1c0 = uStack_90;
      uStack_1bc = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1c8);
    }
    FUN_140e60910(1);
  }
  local_f8 = 4;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((int)local_88[0] < 5) {
    puVar8 = (uint *)&DAT_1419df7b0;
LAB_140385e93:
    local_1c8 = *puVar8;
    uStack_1c4 = puVar8[1];
    uStack_1c0 = puVar8[2];
    uStack_1bc = puVar8[3];
    if ((1 << ((byte)local_188[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1c8);
  }
  else {
    puVar8 = (uint *)local_80[4];
    if (puVar8 != local_188) goto LAB_140385e93;
  }
  local_d8 = local_188;
  ppuVar15 = (uint **)CONCAT44(uVar13,DAT_141a014a8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_1b8,1,ppuVar15,&local_d8);
  cVar3 = FUN_140e491e0(uVar7);
  uVar13 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
  if (cVar3 == '\0') {
    local_f8 = 5;
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
    if ((int)local_88[0] < 5) {
      puVar8 = (uint *)&DAT_1419df7b0;
LAB_140385f85:
      local_1c8 = *puVar8;
      uStack_1c4 = puVar8[1];
      uStack_1c0 = puVar8[2];
      uStack_1bc = puVar8[3];
      if ((1 << ((byte)local_178[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_1c8);
    }
    else {
      puVar8 = (uint *)local_80[4];
      if (puVar8 != local_178) goto LAB_140385f85;
    }
    local_d0 = local_178;
    local_1c8 = _DAT_141dd20a8;
    uStack_1c4 = uRam0000000141dd20ac;
    uStack_1c0 = uRam0000000141dd20b0;
    uStack_1bc = DAT_141dd20b4;
    if ((1 << ((byte)local_168[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1c8);
    local_c8 = local_168;
    puVar8 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_f0,1,CONCAT44(uVar13,DAT_1419fdc58)
                                   ,&local_d0);
    if (puVar8 != local_158) {
      local_1c8 = *puVar8;
      uStack_1c4 = puVar8[1];
      uStack_1c0 = puVar8[2];
      uStack_1bc = puVar8[3];
      if ((1 << ((byte)local_158[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1c8);
    }
    local_c0 = local_158;
    local_1c8 = _DAT_141dd20c8;
    uStack_1c4 = uRam0000000141dd20cc;
    uStack_1c0 = uRam0000000141dd20d0;
    uStack_1bc = DAT_141dd20d4;
    if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1c8);
    local_b8 = local_148;
    ppuVar15 = &local_c8;
    FUN_14008e020(local_res8,local_res10,&local_198,3,ppuVar15);
  }
  local_f8 = 0xc;
  if ((int)local_88[0] < 5) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[4];
  }
  uStack_19c = 0;
  local_1a8 = 0x3ff0000000000000;
  uVar5 = FUN_140e851f0(puVar6,&local_1a8,DAT_141955260,1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (uVar5 < 0x80000000) {
    local_f8 = 0xe;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    local_1c8 = _DAT_141dd20b8;
    uStack_1c4 = uRam0000000141dd20bc;
    uStack_1c0 = uRam0000000141dd20c0;
    uStack_1bc = DAT_141dd20c4;
    if ((1 << ((byte)local_188[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1c8);
    local_d8 = local_188;
    if ((int)local_88[0] < 5) {
      puVar8 = (uint *)&DAT_1419df7b0;
LAB_1403861c9:
      local_1c8 = *puVar8;
      uStack_1c4 = puVar8[1];
      uStack_1c0 = puVar8[2];
      uStack_1bc = puVar8[3];
      if ((1 << ((byte)local_178[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_1c8);
    }
    else {
      puVar8 = (uint *)local_80[4];
      if (puVar8 != local_178) goto LAB_1403861c9;
    }
    local_d0 = local_178;
    local_1c8 = _DAT_141dd20d8;
    uStack_1c4 = uRam0000000141dd20dc;
    uStack_1c0 = uRam0000000141dd20e0;
    uStack_1bc = DAT_141dd20e4;
    if ((1 << ((byte)local_168[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1c8);
    local_c8 = local_168;
    local_1c8 = _DAT_1419e4610;
    uStack_1c4 = uRam00000001419e4614;
    uStack_1c0 = uRam00000001419e4618;
    uStack_1bc = uRam00000001419e461c;
    if ((1 << ((byte)local_158[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1c8);
    local_c0 = local_158;
    local_1c8 = _DAT_141dd2098;
    uStack_1c4 = uRam0000000141dd209c;
    uStack_1c0 = uRam0000000141dd20a0;
    uStack_1bc = DAT_141dd20a4;
    if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1c8);
    local_b8 = local_148;
    ppuVar15 = &local_d8;
    FUN_14008e020(local_res8,local_res10,&local_1b8,5,ppuVar15);
  }
  local_f8 = 0x16;
  if ((int)local_88[0] < 5) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[4];
  }
  uStack_19c = 0;
  local_1a8 = 0;
  iVar4 = FUN_140e851f0(puVar6,&local_1a8,DAT_141955260,1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (iVar4 != -2 && iVar4 < 0) {
    local_f8 = 0x1a;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    local_1c8 = _DAT_141dd20b8;
    uStack_1c4 = uRam0000000141dd20bc;
    uStack_1c0 = uRam0000000141dd20c0;
    uStack_1bc = DAT_141dd20c4;
    if ((1 << ((byte)local_188[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1c8);
    local_d8 = local_188;
    if ((int)local_88[0] < 5) {
      puVar8 = (uint *)&DAT_1419df7b0;
LAB_1403863d0:
      local_1c8 = *puVar8;
      uStack_1c4 = puVar8[1];
      uStack_1c0 = puVar8[2];
      uStack_1bc = puVar8[3];
      if ((1 << ((byte)local_178[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_1c8);
    }
    else {
      puVar8 = (uint *)local_80[4];
      if (puVar8 != local_178) goto LAB_1403863d0;
    }
    local_d0 = local_178;
    local_1c8 = _DAT_141dd2088;
    uStack_1c4 = uRam0000000141dd208c;
    uStack_1c0 = uRam0000000141dd2090;
    uStack_1bc = DAT_141dd2094;
    if ((1 << ((byte)local_168[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1c8);
    local_c8 = local_168;
    ppuVar15 = &local_d8;
    FUN_14008e020(local_res8,local_res10,&local_1b8,3,ppuVar15);
  }
  local_f8 = 0x14;
  if ((int)local_88[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_80;
  }
  if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*puVar6;
  }
  else {
    uVar13 = FUN_140e4b060();
  }
  if ((int)local_88[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_80;
  }
  uVar7 = FUN_140e78ec0(uVar13,0,0x3ff0000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = uVar7;
  local_f8 = 0x15;
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
  }
  if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*puVar6;
  }
  else {
    uVar13 = FUN_140e4b060();
  }
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
  }
  uVar7 = FUN_140e78ec0(uVar13,&DAT_bff0000000000000,0x3ff0000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = uVar7;
  local_f8 = 0x16;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((int)local_88[0] < 3) {
    puVar8 = (uint *)&DAT_1419df7b0;
LAB_140386585:
    local_1c8 = *puVar8;
    uStack_1c4 = puVar8[1];
    uStack_1c0 = puVar8[2];
    uStack_1bc = puVar8[3];
    if ((1 << ((byte)local_188[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1c8);
  }
  else {
    puVar8 = (uint *)local_80[2];
    if (puVar8 != local_188) goto LAB_140386585;
  }
  local_d8 = local_188;
  local_1c8 = _DAT_141dc64f0;
  uStack_1c4 = uRam0000000141dc64f4;
  uStack_1c0 = uRam0000000141dc64f8;
  uStack_1bc = uRam0000000141dc64fc;
  if ((1 << ((byte)local_178[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1c8);
  local_d0 = local_178;
  if ((int)local_88[0] < 3) {
    puVar8 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar8 = (uint *)local_80[2];
  }
  puVar9 = (uint *)FUN_140e79090(&local_1b8,2,&local_d8);
  if (puVar9 != puVar8) {
    local_1c8 = *puVar9;
    uStack_1c4 = puVar9[1];
    uStack_1c0 = puVar9[2];
    uStack_1bc = puVar9[3];
    if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_1c8);
  }
  local_f8 = 0x17;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((int)local_88[0] < 4) {
    puVar8 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar8 = (uint *)local_80[3];
    if (puVar8 == local_188) goto LAB_1403866d1;
  }
  local_1c8 = *puVar8;
  uStack_1c4 = puVar8[1];
  uStack_1c0 = puVar8[2];
  uStack_1bc = puVar8[3];
  if ((1 << ((byte)local_188[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_1c8);
LAB_1403866d1:
  local_d8 = local_188;
  local_1c8 = _DAT_141dc64f0;
  uStack_1c4 = uRam0000000141dc64f4;
  uStack_1c0 = uRam0000000141dc64f8;
  uStack_1bc = uRam0000000141dc64fc;
  if ((1 << ((byte)local_178[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1c8);
  local_d0 = local_178;
  if ((int)local_88[0] < 4) {
    puVar8 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar8 = (uint *)local_80[3];
  }
  puVar9 = (uint *)FUN_140e79090(&local_1b8,2,&local_d8);
  if (puVar9 != puVar8) {
    local_1c8 = *puVar9;
    uStack_1c4 = puVar9[1];
    uStack_1c0 = puVar9[2];
    uStack_1bc = puVar9[3];
    if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_1c8);
  }
  local_f8 = 0x19;
  plVar10 = (longlong *)(**(code **)(*DAT_141dde918 + 8))(DAT_141dde918,DAT_141a026b8);
  if ((int)local_88[0] < 5) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[4];
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
  iVar4 = FUN_140e63cb0(local_78,&local_res8,&local_res10,plVar10);
  if (0 < iVar4) {
    do {
      local_f8 = 0x1b;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03d88);
      cVar3 = FUN_140e491e0(uVar7);
      uVar13 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
      if (cVar3 == '\0') {
LAB_140386852:
        local_f8 = 0x1d;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        puVar8 = (uint *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04338);
        local_1c8 = DAT_141a04388 & 0xffffff;
        uStack_1c4 = (int)(DAT_141a04388 | 0x5000000) >> 0x18 & 0xff;
        if (uStack_1c4 == 0xf) {
          uStack_1c4 = 0x4000004;
        }
        else {
          uStack_1c4 = uStack_1c4 | 0x1000000;
        }
        uStack_19c = 0xf;
        local_1a8 = CONCAT44(uStack_1c4,DAT_141a04388) & 0xffffffff00ffffff;
        uStack_1c0 = uStack_1a0;
        uStack_1bc = 0xf;
        if ((1 << ((byte)local_188[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_188);
        }
        FUN_140041b80(local_188,&local_1c8);
        local_d8 = local_188;
        if ((int)local_88[0] < 1) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_140386965:
          local_1c8 = *puVar9;
          uStack_1c4 = puVar9[1];
          uStack_1c0 = puVar9[2];
          uStack_1bc = puVar9[3];
          if ((1 << ((byte)local_178[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_1c8);
        }
        else {
          puVar9 = (uint *)*local_80;
          if (puVar9 != local_178) goto LAB_140386965;
        }
        local_d0 = local_178;
        if ((int)local_88[0] < 2) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_1403869b4:
          local_1c8 = *puVar9;
          uStack_1c4 = puVar9[1];
          uStack_1c0 = puVar9[2];
          uStack_1bc = puVar9[3];
          if ((1 << ((byte)local_168[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_1c8);
        }
        else {
          puVar9 = (uint *)local_80[1];
          if (puVar9 != local_168) goto LAB_1403869b4;
        }
        local_c8 = local_168;
        if ((int)local_88[0] < 3) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_140386a03:
          local_1c8 = *puVar9;
          uStack_1c4 = puVar9[1];
          uStack_1c0 = puVar9[2];
          uStack_1bc = puVar9[3];
          if ((1 << ((byte)local_158[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_158);
          }
          FUN_140041b80(local_158,&local_1c8);
        }
        else {
          puVar9 = (uint *)local_80[2];
          if (puVar9 != local_158) goto LAB_140386a03;
        }
        local_c0 = local_158;
        if ((int)local_88[0] < 4) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_140386a52:
          local_1c8 = *puVar9;
          uStack_1c4 = puVar9[1];
          uStack_1c0 = puVar9[2];
          uStack_1bc = puVar9[3];
          if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_148);
          }
          FUN_140041b80(local_148,&local_1c8);
        }
        else {
          puVar9 = (uint *)local_80[3];
          if (puVar9 != local_148) goto LAB_140386a52;
        }
        local_b8 = local_148;
        if ((int)local_88[0] < 6) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_140386aa1:
          local_1c8 = *puVar9;
          uStack_1c4 = puVar9[1];
          uStack_1c0 = puVar9[2];
          uStack_1bc = puVar9[3];
          if ((1 << ((byte)local_138[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_1c8);
        }
        else {
          puVar9 = (uint *)local_80[5];
          if (puVar9 != local_138) goto LAB_140386aa1;
        }
        local_b0 = local_138;
        if (puVar8 != local_128) {
          local_1c8 = *puVar8;
          uStack_1c4 = puVar8[1];
          uStack_1c0 = puVar8[2];
          uStack_1bc = puVar8[3];
          if ((1 << ((byte)local_128[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_128);
          }
          FUN_140041b80(local_128,&local_1c8);
        }
        local_a8 = local_128;
        uVar7 = CONCAT44(uVar13,DAT_1419fd6d8);
        puVar8 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_198,6,uVar7,&local_d8);
        uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if (puVar8 != local_118) {
          local_1c8 = *puVar8;
          uStack_1c4 = puVar8[1];
          uStack_1c0 = puVar8[2];
          uStack_1bc = puVar8[3];
          if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_118);
          }
          FUN_140041b80(local_118,&local_1c8);
        }
        local_a0 = local_118;
        ppuVar15 = (uint **)CONCAT44(uVar13,DAT_1419fe568);
        FUN_140e634e0(local_res8,local_res10,&local_1b8,2,ppuVar15,&local_a8);
      }
      else {
        if ((int)local_88[0] < 6) {
          puVar6 = &DAT_1419df7b0;
        }
        else {
          puVar6 = (undefined8 *)local_80[5];
        }
        cVar3 = FUN_140e491e0(puVar6);
        uVar13 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
        if (cVar3 != '\0') goto LAB_140386852;
      }
      cVar3 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar3 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_188,0x10,8,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar6 = local_80;
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
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

